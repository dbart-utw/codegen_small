
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e947076))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e68b814))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3974e))) ) ) {
            if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f451990))) ) ) {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
                if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49b58b))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f50f0ae))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 137200344;
                      result[1] += 5965232;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38ba1c))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e878fb0))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7ec682))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af36342))) ) ) {
                      result[0] += 142994530;
                      result[1] += 171046;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e900e68))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45b47a))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f484b44))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e9f1ca7))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 135096244;
                      result[1] += 8069332;
                    } else {
                      result[0] += 140333363;
                      result[1] += 2832212;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 114297911;
                      result[1] += 28867665;
                    } else {
                      result[0] += 138086269;
                      result[1] += 5079306;
                    }
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e10f037))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 141022379;
                      result[1] += 2143197;
                    } else {
                      result[0] += 142906101;
                      result[1] += 259475;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 4004631;
                      result[1] += 139160944;
                    } else {
                      result[0] += 118931820;
                      result[1] += 24233756;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 90729793;
                      result[1] += 52435782;
                    } else {
                      result[0] += 15924980;
                      result[1] += 127240595;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb38ba0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e87f206))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
                      result[0] += 142602597;
                      result[1] += 562979;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e69462e))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 141315892;
                      result[1] += 1849684;
                    } else {
                      result[0] += 18276456;
                      result[1] += 124889119;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 142909282;
                      result[1] += 256293;
                    } else {
                      result[0] += 140578246;
                      result[1] += 2587329;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37e825))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6c2591))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e75a25c))) ) ) {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    } else {
                      result[0] += 55063683;
                      result[1] += 88101893;
                    }
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 10873334;
                      result[1] += 132292241;
                    } else {
                      result[0] += 85290130;
                      result[1] += 57875445;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 126122055;
                      result[1] += 17043521;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f769c80))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7ee69d))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9e003a))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                      result[0] += 13134456;
                      result[1] += 130031119;
                    } else {
                      result[0] += 91842067;
                      result[1] += 51323508;
                    }
                  }
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f476060))) ) ) {
                      result[0] += 140053281;
                      result[1] += 3112295;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
                      result[0] += 8103711;
                      result[1] += 135061864;
                    } else {
                      result[0] += 131235111;
                      result[1] += 11930464;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e906cee))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 89080803;
                      result[1] += 54084773;
                    } else {
                      result[0] += 5965232;
                      result[1] += 137200344;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 40265318;
                      result[1] += 102900258;
                    } else {
                      result[0] += 6037102;
                      result[1] += 137128473;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f36d9ae))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 137863147;
                      result[1] += 5302428;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e95361a))) ) ) {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    } else {
                      result[0] += 1626881;
                      result[1] += 141538694;
                    }
                  }
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                      result[0] += 135320887;
                      result[1] += 7844689;
                    } else {
                      result[0] += 143051704;
                      result[1] += 113872;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb66772))) ) ) {
                      result[0] += 143107894;
                      result[1] += 57681;
                    } else {
                      result[0] += 143162210;
                      result[1] += 3365;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea4c0e7))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f472518))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03417a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2d1b72))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
                if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e63a9))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6ad143))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f0d78))) ) ) {
                      result[0] += 116322030;
                      result[1] += 26843545;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f52868c))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0ee618))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f67ea94))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9205d6))) ) ) {
                      result[0] += 141609428;
                      result[1] += 1556147;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f47ea40))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 132152839;
                      result[1] += 11012736;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee7dbbf))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630bbe))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4a698f))) ) ) {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f691516))) ) ) {
                      result[0] += 127258290;
                      result[1] += 15907286;
                    } else {
                      result[0] += 53687091;
                      result[1] += 89478485;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                  if ( ( !(data[65].missing != -1) || ((*( ((int*)(data)) + 65 ))<=((int)(0x3e592ef8))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e991248))) ) ) {
                      result[0] += 118767584;
                      result[1] += 24397992;
                    } else {
                      result[0] += 40904450;
                      result[1] += 102261126;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f51dfdf))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 8541128;
                      result[1] += 134624448;
                    } else {
                      result[0] += 81808900;
                      result[1] += 61356675;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e984ca4))) ) ) {
                      result[0] += 130150524;
                      result[1] += 13015052;
                    } else {
                      result[0] += 29260117;
                      result[1] += 113905458;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f521772))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 79536431;
                      result[1] += 63629145;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 134744072;
                      result[1] += 8421504;
                    } else {
                      result[0] += 12449180;
                      result[1] += 130716395;
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb717e))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f513ce0))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8fac12))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8bcf0c))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e85a0f5))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5185f0))) ) ) {
                      result[0] += 131235111;
                      result[1] += 11930464;
                    } else {
                      result[0] += 142391708;
                      result[1] += 773867;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2bcf5d))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143129807;
                      result[1] += 35769;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6a0bb8))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 141540746;
                      result[1] += 1624829;
                    } else {
                      result[0] += 114153407;
                      result[1] += 29012168;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                      result[0] += 73869216;
                      result[1] += 69296360;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 135959255;
                      result[1] += 7206320;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38ba1c))) ) ) {
                      result[0] += 142089143;
                      result[1] += 1076432;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f479c2c))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae7f22c))) ) ) {
                      result[0] += 33038209;
                      result[1] += 110127366;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebfaabe))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142627360;
                      result[1] += 538216;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
                      result[0] += 132939463;
                      result[1] += 10226112;
                    } else {
                      result[0] += 93368854;
                      result[1] += 49796722;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 139096270;
                      result[1] += 4069305;
                    } else {
                      result[0] += 98123163;
                      result[1] += 45042412;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 53990408;
                      result[1] += 89175168;
                    } else {
                      result[0] += 132872626;
                      result[1] += 10292949;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea06598))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                      result[0] += 4331787;
                      result[1] += 138833789;
                    } else {
                      result[0] += 132428158;
                      result[1] += 10737418;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 139624378;
                      result[1] += 3541198;
                    } else {
                      result[0] += 2551646;
                      result[1] += 140613930;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
        if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee30aac))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6c2591))) ) ) {
                      result[0] += 120647811;
                      result[1] += 22517764;
                    } else {
                      result[0] += 58734595;
                      result[1] += 84430981;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                      result[0] += 41106947;
                      result[1] += 102058628;
                    } else {
                      result[0] += 112357794;
                      result[1] += 30807782;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb5a1ec))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 126772571;
                      result[1] += 16393004;
                    } else {
                      result[0] += 142401574;
                      result[1] += 764002;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 131028702;
                      result[1] += 12136874;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                      result[0] += 97716187;
                      result[1] += 45449389;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 6157659;
                      result[1] += 137007917;
                    } else {
                      result[0] += 97089299;
                      result[1] += 46076277;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                    if ( ( !(data[63].missing != -1) || ((*( ((int*)(data)) + 63 ))<=((int)(0x3f7f0ae2))) ) ) {
                      result[0] += 106612663;
                      result[1] += 36552913;
                    } else {
                      result[0] += 59803342;
                      result[1] += 83362234;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 53464323;
                      result[1] += 89701253;
                    } else {
                      result[0] += 14428991;
                      result[1] += 128736585;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9e7982))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 123642997;
                      result[1] += 19522578;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9935b8))) ) ) {
                      result[0] += 140939317;
                      result[1] += 2226258;
                    } else {
                      result[0] += 111899531;
                      result[1] += 31266045;
                    }
                  }
                } else {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 143137843;
                      result[1] += 27732;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f41984c))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f4a3198))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49f156))) ) ) {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4602ee))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 118275114;
                      result[1] += 24890461;
                    } else {
                      result[0] += 15873368;
                      result[1] += 127292207;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 139404286;
                      result[1] += 3761289;
                    } else {
                      result[0] += 121979639;
                      result[1] += 21185937;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0c7e06))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
                if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                      result[0] += 143162055;
                      result[1] += 3520;
                    } else {
                      result[0] += 140288267;
                      result[1] += 2877309;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8aa6bc))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e19b730))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ae9ef89))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e16a024))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea4c0e7))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52bb8a))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 143081804;
                      result[1] += 83771;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4662ad))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e95378d))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 1410498;
                      result[1] += 141755078;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 84215045;
                      result[1] += 58950531;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 139444147;
                      result[1] += 3721429;
                    } else {
                      result[0] += 78670193;
                      result[1] += 64495383;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 37418275;
                      result[1] += 105747300;
                    } else {
                      result[0] += 89928125;
                      result[1] += 53237450;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                      result[0] += 129929929;
                      result[1] += 13235646;
                    } else {
                      result[0] += 142555640;
                      result[1] += 609936;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                      result[0] += 116322030;
                      result[1] += 26843545;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                      result[0] += 8733528;
                      result[1] += 134432047;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                      result[0] += 15907286;
                      result[1] += 127258290;
                    } else {
                      result[0] += 142089143;
                      result[1] += 1076432;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f464e4b))) ) ) {
                      result[0] += 2055008;
                      result[1] += 141110568;
                    } else {
                      result[0] += 51130563;
                      result[1] += 92035013;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
                      result[0] += 133292088;
                      result[1] += 9873488;
                    } else {
                      result[0] += 20878313;
                      result[1] += 122287263;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9d9a00))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e99d7ce))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 14316557;
                      result[1] += 128849018;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                      result[0] += 129198203;
                      result[1] += 13967373;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38851068))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x37a1ac00))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143124103;
                      result[1] += 41473;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed48240))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb35104))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e15142e))) ) ) {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb8b858))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                      result[0] += 143096879;
                      result[1] += 68697;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f710374))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142206878;
                      result[1] += 958698;
                    }
                  }
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3a3dea))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9acea2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 141674268;
                      result[1] += 1491308;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 55256889;
                      result[1] += 87908687;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 142871602;
                      result[1] += 293974;
                    } else {
                      result[0] += 138620637;
                      result[1] += 4544938;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ed262))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8bcf0c))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e0142))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49d35c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142641160;
                      result[1] += 524416;
                    }
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                      result[0] += 140959872;
                      result[1] += 2205703;
                    } else {
                      result[0] += 106093094;
                      result[1] += 37072482;
                    }
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 141879658;
                      result[1] += 1285918;
                    } else {
                      result[0] += 106030051;
                      result[1] += 37135525;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e122986))) ) ) {
                      result[0] += 140835576;
                      result[1] += 2330000;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea861ee))) ) ) {
                      result[0] += 133523813;
                      result[1] += 9641763;
                    } else {
                      result[0] += 142804503;
                      result[1] += 361073;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8f48dd))) ) ) {
                      result[0] += 33642041;
                      result[1] += 109523535;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae99aa4))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d0b7af5))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 140036274;
                      result[1] += 3129302;
                    } else {
                      result[0] += 94971224;
                      result[1] += 48194352;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 110695033;
                      result[1] += 32470543;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f44906a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f52a668))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4333ee))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0a833a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143130207;
                      result[1] += 35369;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed3bc9c))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f48097e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 143165576;
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b0332))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7da6de))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90d462))) ) ) {
                      result[0] += 141281818;
                      result[1] += 1883757;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f391422))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
                      result[0] += 139836144;
                      result[1] += 3329432;
                    } else {
                      result[0] += 143088314;
                      result[1] += 77261;
                    }
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e8e07ac))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
                      result[0] += 142333218;
                      result[1] += 832358;
                    } else {
                      result[0] += 87574687;
                      result[1] += 55590888;
                    }
                  } else {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f52be1e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142913079;
                      result[1] += 252496;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6880a2))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 89246073;
                      result[1] += 53919502;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea33770))) ) ) {
                      result[0] += 142062180;
                      result[1] += 1103395;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809b9f))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 40086361;
                      result[1] += 103079215;
                    } else {
                      result[0] += 137029908;
                      result[1] += 6135667;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38060f))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cf10a1a))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eab0280))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 8696974;
                      result[1] += 134468602;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
                      result[0] += 132061321;
                      result[1] += 11104255;
                    } else {
                      result[0] += 116530120;
                      result[1] += 26635456;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 138691652;
                      result[1] += 4473924;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                      result[0] += 142928939;
                      result[1] += 236637;
                    } else {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    }
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                      result[0] += 118065118;
                      result[1] += 25100458;
                    } else {
                      result[0] += 70141524;
                      result[1] += 73024052;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ae476b4))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                      result[0] += 125290957;
                      result[1] += 17874618;
                    } else {
                      result[0] += 133413370;
                      result[1] += 9752205;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 142778903;
                      result[1] += 386672;
                    } else {
                      result[0] += 136506712;
                      result[1] += 6658864;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e86c9b6))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f557d32))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e81619a))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e772d70))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 129803456;
                      result[1] += 13362120;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e984ca4))) ) ) {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f77e4fa))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f76e721))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f46e1c4))) ) ) {
                      result[0] += 3491843;
                      result[1] += 139673733;
                    } else {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e913962))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 13015052;
                      result[1] += 130150524;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049397))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073652))) ) ) {
                  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea19e6))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b0982))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                      result[0] += 28633115;
                      result[1] += 114532461;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f522142))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142937605;
                      result[1] += 227970;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9acea2))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7fac28))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4cb0b8))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 55675501;
                      result[1] += 87490074;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e5f3aa0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e913962))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7bcf92))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                      result[0] += 115604289;
                      result[1] += 27561287;
                    } else {
                      result[0] += 90273143;
                      result[1] += 52892433;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea72f3e))) ) ) {
                      result[0] += 132939463;
                      result[1] += 10226112;
                    } else {
                      result[0] += 142733052;
                      result[1] += 432524;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6293aa))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 127604100;
                      result[1] += 15561475;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e64a32c))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e772d70))) ) ) {
                      result[0] += 143072187;
                      result[1] += 93389;
                    } else {
                      result[0] += 136348168;
                      result[1] += 6817408;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e122986))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 120259084;
                      result[1] += 22906492;
                    } else {
                      result[0] += 140562566;
                      result[1] += 2603010;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                    if ( ( !(data[49].missing != -1) || ((*( ((int*)(data)) + 49 ))<=((int)(0x3f266bb4))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 83804239;
                      result[1] += 59361336;
                    } else {
                      result[0] += 17179869;
                      result[1] += 125985707;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f55b8d6))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ebf60c8))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e69454d))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0a43f6))) ) ) {
                      result[0] += 141482925;
                      result[1] += 1682651;
                    } else {
                      result[0] += 142947668;
                      result[1] += 217908;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6a5aa2))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c3fb8))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e984ca4))) ) ) {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 120066166;
                      result[1] += 23099410;
                    } else {
                      result[0] += 85217605;
                      result[1] += 57947971;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 14734398;
                      result[1] += 128431177;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 81691020;
                      result[1] += 61474555;
                    } else {
                      result[0] += 22530975;
                      result[1] += 120634600;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142737599;
                      result[1] += 427976;
                    }
                  } else {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
                      result[0] += 143064542;
                      result[1] += 101034;
                    } else {
                      result[0] += 143163768;
                      result[1] += 1808;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e84db6a))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ed262))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e18f0c4))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea6e46a))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 140252323;
                      result[1] += 2913253;
                    } else {
                      result[0] += 89730537;
                      result[1] += 53435039;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 110550933;
                      result[1] += 32614643;
                    } else {
                      result[0] += 40755164;
                      result[1] += 102410412;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46a57d))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e5e7515))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143059223;
                      result[1] += 106353;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                      result[0] += 112940738;
                      result[1] += 30224837;
                    } else {
                      result[0] += 132145948;
                      result[1] += 11019628;
                    }
                  }
                }
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7bcf92))) ) ) {
                if ( ( !(data[48].missing != -1) || ((*( ((int*)(data)) + 48 ))<=((int)(0x3f495da8))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6419ae))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4724bc))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f5001f8))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec1fba6))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e766705))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f78980e))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 134217727;
                      result[1] += 8947848;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7a447c))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6b96ce))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9eccae))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed23173))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e90719d))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebebe06))) ) ) {
                    if ( ( !(data[65].missing != -1) || ((*( ((int*)(data)) + 65 ))<=((int)(0x3e592ef8))) ) ) {
                      result[0] += 138250020;
                      result[1] += 4915556;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 132360627;
                      result[1] += 10804949;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8e201c))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                      result[0] += 58277160;
                      result[1] += 84888415;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e68b814))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e5cea00))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f47ea40))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e95378d))) ) ) {
                      result[0] += 118446340;
                      result[1] += 24719236;
                    } else {
                      result[0] += 142229853;
                      result[1] += 935722;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f54e7f2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f46a584))) ) ) {
                      result[0] += 129909504;
                      result[1] += 13256071;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
                      result[0] += 56512727;
                      result[1] += 86652848;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
              if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e86c9b6))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea19848))) ) ) {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a3a26))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                      result[0] += 139482860;
                      result[1] += 3682715;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4759bb))) ) ) {
                      result[0] += 142968423;
                      result[1] += 197152;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0c9578))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
        if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af06737))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a75ca))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f510654))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49f57c))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6b2045))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e913962))) ) ) {
                      result[0] += 130614073;
                      result[1] += 12551502;
                    } else {
                      result[0] += 109974941;
                      result[1] += 33190635;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6809ba))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142769270;
                      result[1] += 396306;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 6507526;
                      result[1] += 136658050;
                    } else {
                      result[0] += 142859912;
                      result[1] += 305664;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                      result[0] += 143055618;
                      result[1] += 109958;
                    } else {
                      result[0] += 136221919;
                      result[1] += 6943656;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143116911;
                      result[1] += 48664;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eba4384))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 140292688;
                      result[1] += 2872887;
                    } else {
                      result[0] += 71850888;
                      result[1] += 71314687;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e77f2fc))) ) ) {
                      result[0] += 114085068;
                      result[1] += 29080507;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 127826407;
                      result[1] += 15339168;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                      result[0] += 55719347;
                      result[1] += 87446228;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e11fd22))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73dc0))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e138919))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb05e44))) ) ) {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d9a9099))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2b9804))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebdf190))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f49d16e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 135630546;
                      result[1] += 7535030;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4e4d6d))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ecfa1a8))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f480f05))) ) ) {
              if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f322a9f))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae8f0da))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f386016))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e938838))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af09194))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
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
    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f43d275))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f522de3))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8aa6bc))) ) ) {
                if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f48fee4))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9e7982))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142365768;
                      result[1] += 799807;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4759bb))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
                    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb1b232))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae84711))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4e69d8))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f448739))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7fac28))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e77f2fc))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9ace84))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 17895697;
                      result[1] += 125269879;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142457887;
                      result[1] += 707689;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 41122027;
                      result[1] += 102043549;
                    } else {
                      result[0] += 130894241;
                      result[1] += 12271335;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1320e))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fc622))) ) ) {
                      result[0] += 41259523;
                      result[1] += 101906052;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                      result[0] += 108169546;
                      result[1] += 34996029;
                    } else {
                      result[0] += 134984686;
                      result[1] += 8180890;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6ad143))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142748993;
                      result[1] += 416582;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 137863147;
                      result[1] += 5302428;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb72cf8))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 27602617;
                      result[1] += 115562958;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                      result[0] += 76093484;
                      result[1] += 67072092;
                    } else {
                      result[0] += 16044418;
                      result[1] += 127121158;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
                      result[0] += 3774136;
                      result[1] += 139391440;
                    } else {
                      result[0] += 56398560;
                      result[1] += 86767016;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e70f013))) ) ) {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f515378))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb79c96))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    }
                  }
                } else {
                  if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4fc62d))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e6d22c4))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebee51c))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 35791394;
                      result[1] += 107374182;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 44153869;
                      result[1] += 99011707;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e978702))) ) ) {
                      result[0] += 35791394;
                      result[1] += 107374182;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec2bc12))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
                  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 135087657;
                      result[1] += 8077918;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 91625968;
                      result[1] += 51539607;
                    }
                  }
                } else {
                  if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x37a1ac00))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 64765379;
                      result[1] += 78400196;
                    } else {
                      result[0] += 143068229;
                      result[1] += 97346;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b55e))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d3b7d))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                      result[0] += 143025424;
                      result[1] += 140152;
                    } else {
                      result[0] += 133297020;
                      result[1] += 9868556;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 15211342;
                      result[1] += 127954233;
                    } else {
                      result[0] += 112322301;
                      result[1] += 30843275;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 71424068;
                      result[1] += 71741508;
                    } else {
                      result[0] += 123201704;
                      result[1] += 19963872;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f36d9ae))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
                      result[0] += 143163894;
                      result[1] += 1681;
                    } else {
                      result[0] += 142938761;
                      result[1] += 226814;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6b2045))) ) ) {
                      result[0] += 30064771;
                      result[1] += 113100805;
                    } else {
                      result[0] += 125706359;
                      result[1] += 17459216;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142345926;
                      result[1] += 819650;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e64a32c))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                    if ( ( !(data[63].missing != -1) || ((*( ((int*)(data)) + 63 ))<=((int)(0x3f7f0ae2))) ) ) {
                      result[0] += 105818034;
                      result[1] += 37347541;
                    } else {
                      result[0] += 65617555;
                      result[1] += 77548020;
                    }
                  } else {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f523336))) ) ) {
                      result[0] += 141120353;
                      result[1] += 2045222;
                    } else {
                      result[0] += 127826407;
                      result[1] += 15339168;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a57f8))) ) ) {
              if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3f000000))) ) ) {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f6941e5))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 114096423;
                      result[1] += 29069152;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea06598))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 10046707;
                      result[1] += 133118869;
                    } else {
                      result[0] += 110581;
                      result[1] += 143054995;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 123418600;
                      result[1] += 19746976;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e95361a))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f37bee6))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eab0a81))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7c625a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f44b1e0))) ) ) {
                      result[0] += 140739041;
                      result[1] += 2426535;
                    } else {
                      result[0] += 143078966;
                      result[1] += 86609;
                    }
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4144ea))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                      result[0] += 141681995;
                      result[1] += 1483581;
                    } else {
                      result[0] += 88011624;
                      result[1] += 55153951;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7bcf92))) ) ) {
                      result[0] += 3718586;
                      result[1] += 139446990;
                    } else {
                      result[0] += 102261126;
                      result[1] += 40904450;
                    }
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6a8ca7))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 546433;
                      result[1] += 142619143;
                    }
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea861ee))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1ef9e))) ) ) {
                      result[0] += 129945331;
                      result[1] += 13220244;
                    } else {
                      result[0] += 107270559;
                      result[1] += 35895017;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 138156503;
                      result[1] += 5009073;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8faba2))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                      result[0] += 99339379;
                      result[1] += 43826196;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e93eb6e))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7ee69c))) ) ) {
                      result[0] += 138620637;
                      result[1] += 4544938;
                    } else {
                      result[0] += 143128417;
                      result[1] += 37159;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0bd498))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 143165576;
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e182b3a))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f30763a))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 143080938;
                      result[1] += 84638;
                    }
                  }
                } else {
                  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                      result[0] += 143090816;
                      result[1] += 74760;
                    } else {
                      result[0] += 140137905;
                      result[1] += 3027670;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                      result[0] += 139117192;
                      result[1] += 4048383;
                    } else {
                      result[0] += 109209638;
                      result[1] += 33955938;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb5a1ec))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7039cf))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 131897915;
                      result[1] += 11267661;
                    } else {
                      result[0] += 143011524;
                      result[1] += 154051;
                    }
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 142284944;
                      result[1] += 880631;
                    } else {
                      result[0] += 112848160;
                      result[1] += 30317416;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 130327800;
                      result[1] += 12837775;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 73571199;
                      result[1] += 69594377;
                    } else {
                      result[0] += 10412041;
                      result[1] += 132753534;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 7475417;
                      result[1] += 135690158;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 142930493;
                      result[1] += 235083;
                    } else {
                      result[0] += 32950807;
                      result[1] += 110214769;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee618))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f70503a))) ) ) {
              if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4a0f28))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3fd89))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e97e9d3))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e828a5a))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
              if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af09194))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec056d2))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142294386;
                      result[1] += 871190;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9e003a))) ) ) {
                  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea0cbd3))) ) ) {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 118622906;
                      result[1] += 24542670;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f532d44))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                      result[0] += 142786831;
                      result[1] += 378744;
                    } else {
                      result[0] += 102261126;
                      result[1] += 40904450;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
                  if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
                      result[0] += 142972804;
                      result[1] += 192772;
                    } else {
                      result[0] += 143158767;
                      result[1] += 6808;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee2f0e5))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 116897925;
                      result[1] += 26267651;
                    } else {
                      result[0] += 142461675;
                      result[1] += 703900;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 67270572;
                      result[1] += 75895004;
                    } else {
                      result[0] += 141954361;
                      result[1] += 1211214;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 1307448;
                      result[1] += 141858128;
                    } else {
                      result[0] += 77344567;
                      result[1] += 65821008;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                      result[0] += 140918817;
                      result[1] += 2246759;
                    } else {
                      result[0] += 143118729;
                      result[1] += 46847;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e182b3a))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 37551626;
                      result[1] += 105613949;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 141873742;
                      result[1] += 1291833;
                    } else {
                      result[0] += 120708231;
                      result[1] += 22457345;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 128394524;
                      result[1] += 14771051;
                    } else {
                      result[0] += 143019057;
                      result[1] += 146519;
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
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d7ed1))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 57926533;
                      result[1] += 85239043;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 120895375;
                      result[1] += 22270200;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
                      result[0] += 141440690;
                      result[1] += 1724886;
                    } else {
                      result[0] += 143162271;
                      result[1] += 3305;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                      result[0] += 139796974;
                      result[1] += 3368601;
                    } else {
                      result[0] += 143111295;
                      result[1] += 54280;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee0903c))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d17538d))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49d35c))) ) ) {
                      result[0] += 572662;
                      result[1] += 142592914;
                    } else {
                      result[0] += 11012736;
                      result[1] += 132152839;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e81619a))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f46b870))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e94d152))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 141091682;
                      result[1] += 2073893;
                    } else {
                      result[0] += 99990539;
                      result[1] += 43175037;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                      result[0] += 143112893;
                      result[1] += 52682;
                    } else {
                      result[0] += 142181360;
                      result[1] += 984216;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
          if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88b800))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae945bf))) ) ) {
                    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 143152706;
                      result[1] += 12869;
                    }
                  } else {
                    if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                      result[0] += 141538694;
                      result[1] += 1626881;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9fff5e))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3a023a))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                      result[0] += 37452598;
                      result[1] += 105712978;
                    } else {
                      result[0] += 56495832;
                      result[1] += 86669743;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 140070104;
                      result[1] += 3095471;
                    } else {
                      result[0] += 117053616;
                      result[1] += 26111960;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 128849018;
                      result[1] += 14316557;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 36664354;
                      result[1] += 106501221;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c3fb8))) ) ) {
                      result[0] += 32327710;
                      result[1] += 110837865;
                    } else {
                      result[0] += 10397499;
                      result[1] += 132768076;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7a447c))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb8b83e))) ) ) {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4f1bcd))) ) ) {
                    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142198241;
                      result[1] += 967334;
                    }
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f67ea94))) ) ) {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f46d584))) ) ) {
                      result[0] += 109362593;
                      result[1] += 33802983;
                    } else {
                      result[0] += 143165576;
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
    result[0] += 0;
    result[1] += 143165576;
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4b479c))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
          if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f43d275))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f3fd22c))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4eb97e))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e77f2fc))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed547e2))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    } else {
                      result[0] += 130716395;
                      result[1] += 12449180;
                    }
                  }
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9a3a9f))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                      result[0] += 109479558;
                      result[1] += 33686018;
                    } else {
                      result[0] += 59012152;
                      result[1] += 84153424;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 62634939;
                      result[1] += 80530636;
                    }
                  } else {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7ea8b0))) ) ) {
                      result[0] += 4864849;
                      result[1] += 138300726;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 109479558;
                      result[1] += 33686018;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e66f4ac))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 138995705;
                      result[1] += 4169871;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                      result[0] += 131235111;
                      result[1] += 11930464;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e80fed4))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e70ff5a))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142575338;
                      result[1] += 590238;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 91507894;
                      result[1] += 51657682;
                    } else {
                      result[0] += 139948372;
                      result[1] += 3217203;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 81056980;
                      result[1] += 62108595;
                    }
                  }
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4979e8))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e986942))) ) ) {
                      result[0] += 32222451;
                      result[1] += 110943124;
                    } else {
                      result[0] += 91329764;
                      result[1] += 51835812;
                    }
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f439766))) ) ) {
                      result[0] += 101058054;
                      result[1] += 42107522;
                    } else {
                      result[0] += 58800147;
                      result[1] += 84365429;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ec8ee27))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 138827225;
                      result[1] += 4338350;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                      result[0] += 64765379;
                      result[1] += 78400196;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
                if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 137381108;
                      result[1] += 5784467;
                    } else {
                      result[0] += 24027789;
                      result[1] += 119137787;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143129414;
                      result[1] += 36161;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                      result[0] += 101356160;
                      result[1] += 41809416;
                    } else {
                      result[0] += 139715803;
                      result[1] += 3449772;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 2863311;
                      result[1] += 140302264;
                    } else {
                      result[0] += 130150524;
                      result[1] += 13015052;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 142477280;
                      result[1] += 688296;
                    } else {
                      result[0] += 126380646;
                      result[1] += 16784929;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                      result[0] += 142773439;
                      result[1] += 392136;
                    } else {
                      result[0] += 126803796;
                      result[1] += 16361780;
                    }
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6419ae))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7d9c00))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142356731;
                      result[1] += 808845;
                    }
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f490251))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 7209777;
                      result[1] += 135955799;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
                      result[0] += 65075262;
                      result[1] += 78090314;
                    } else {
                      result[0] += 141802094;
                      result[1] += 1363481;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 17895697;
                      result[1] += 125269879;
                    } else {
                      result[0] += 128849018;
                      result[1] += 14316557;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
                      result[0] += 10459585;
                      result[1] += 132705991;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9603e4))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49eed0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 67139718;
                      result[1] += 76025857;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 67372036;
                      result[1] += 75793540;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e0142))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e984ca4))) ) ) {
                      result[0] += 7915948;
                      result[1] += 135249628;
                    } else {
                      result[0] += 428212;
                      result[1] += 142737364;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e741665))) ) ) {
                      result[0] += 113545112;
                      result[1] += 29620464;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                      result[0] += 4013988;
                      result[1] += 139151588;
                    } else {
                      result[0] += 114025680;
                      result[1] += 29139896;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f42ba02))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec2c14a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f485745))) ) ) {
                      result[0] += 142957184;
                      result[1] += 208392;
                    } else {
                      result[0] += 139756872;
                      result[1] += 3408704;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8a4386))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebdf190))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee617))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 1203072;
                      result[1] += 141962504;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                      result[0] += 22605091;
                      result[1] += 120560485;
                    } else {
                      result[0] += 143138688;
                      result[1] += 26887;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
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
        result[1] += 143165576;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ad09094))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7fac27))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e67ba38))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 137438953;
                      result[1] += 5726623;
                    }
                  } else {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7c8f2a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 139398061;
                      result[1] += 3767515;
                    } else {
                      result[0] += 18837575;
                      result[1] += 124328000;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x379e2000))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6244f4))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62578d))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e8e6de6))) ) ) {
                    if ( ( !(data[49].missing != -1) || ((*( ((int*)(data)) + 49 ))<=((int)(0x3f266bb4))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e95378d))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 141775619;
                      result[1] += 1389957;
                    }
                  }
                }
              } else {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae8f0da))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f37805a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142964076;
                      result[1] += 201499;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea463a6))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 141177165;
                      result[1] += 1988410;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 137381108;
                      result[1] += 5784467;
                    } else {
                      result[0] += 12030720;
                      result[1] += 131134855;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 747991;
                      result[1] += 142417584;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb78fca))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 16843009;
                      result[1] += 126322567;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                      result[0] += 62634939;
                      result[1] += 80530636;
                    } else {
                      result[0] += 5614336;
                      result[1] += 137551240;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 100467071;
                      result[1] += 42698505;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 132939463;
                      result[1] += 10226112;
                    } else {
                      result[0] += 7615190;
                      result[1] += 135550386;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 14316557;
                      result[1] += 128849018;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f47ef96))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 95443717;
                      result[1] += 47721858;
                    }
                  }
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 28633115;
                      result[1] += 114532461;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49d35c))) ) ) {
                  if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5434b8))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e946b36))) ) ) {
                      result[0] += 1173488;
                      result[1] += 141992088;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f50d2ea))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea861ee))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 121057009;
                      result[1] += 22108567;
                    } else {
                      result[0] += 48167857;
                      result[1] += 94997718;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 133356083;
                      result[1] += 9809493;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 110627945;
                      result[1] += 32537631;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
                      result[0] += 120914893;
                      result[1] += 22250682;
                    } else {
                      result[0] += 73173516;
                      result[1] += 69992059;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e822724))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d7b3fce))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 136153384;
                      result[1] += 7012191;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eafd8c2))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f489594))) ) ) {
                      result[0] += 142878924;
                      result[1] += 286652;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  }
  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f444afa))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f409742))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
        if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068da3))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 118578032;
                      result[1] += 24587543;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143111048;
                      result[1] += 54528;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eba3351))) ) ) {
                      result[0] += 133862398;
                      result[1] += 9303178;
                    } else {
                      result[0] += 28633115;
                      result[1] += 114532461;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                      result[0] += 5015354;
                      result[1] += 138150221;
                    } else {
                      result[0] += 117384802;
                      result[1] += 25780774;
                    }
                  }
                }
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f532d44))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 130250447;
                      result[1] += 12915128;
                    }
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f531ee6))) ) ) {
                      result[0] += 15907286;
                      result[1] += 127258290;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4b5a92))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e939ec0))) ) ) {
                      result[0] += 65075262;
                      result[1] += 78090314;
                    } else {
                      result[0] += 123922891;
                      result[1] += 19242685;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5256fc))) ) ) {
                      result[0] += 140045745;
                      result[1] += 3119830;
                    } else {
                      result[0] += 142438847;
                      result[1] += 726728;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea463a6))) ) ) {
                      result[0] += 142761153;
                      result[1] += 404422;
                    } else {
                      result[0] += 23860929;
                      result[1] += 119304647;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 128849018;
                      result[1] += 14316557;
                    } else {
                      result[0] += 22180582;
                      result[1] += 120984994;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                  if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x37d36800))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                      result[0] += 142004774;
                      result[1] += 1160801;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
          if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38853d80))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e93eafe))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e97653f))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e83b31a))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb5a1ec))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4b5a92))) ) ) {
                      result[0] += 131109527;
                      result[1] += 12056048;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[63].missing != -1) || ((*( ((int*)(data)) + 63 ))<=((int)(0x3f7f0ae2))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e828a5a))) ) ) {
                      result[0] += 85899345;
                      result[1] += 57266230;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f790080))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 4804213;
                      result[1] += 138361362;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 140851669;
                      result[1] += 2313906;
                    } else {
                      result[0] += 124314593;
                      result[1] += 18850983;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eba4384))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 126618801;
                      result[1] += 16546775;
                    } else {
                      result[0] += 13015052;
                      result[1] += 130150524;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                      result[0] += 57266230;
                      result[1] += 85899345;
                    } else {
                      result[0] += 3439413;
                      result[1] += 139726163;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 24542670;
                      result[1] += 118622906;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                      result[0] += 128849018;
                      result[1] += 14316557;
                    } else {
                      result[0] += 91625968;
                      result[1] += 51539607;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7c35b4))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 140502030;
                      result[1] += 2663545;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e77f2fc))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4febc2))) ) ) {
                      result[0] += 66076419;
                      result[1] += 77089156;
                    } else {
                      result[0] += 129310843;
                      result[1] += 13854733;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 135861210;
                      result[1] += 7304366;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed3bc9c))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37e825))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4f5112))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e872c7a))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 2675992;
                      result[1] += 140489584;
                    } else {
                      result[0] += 110127366;
                      result[1] += 33038209;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 110127366;
                      result[1] += 33038209;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
            if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f5355df))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03417a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                      result[0] += 143044674;
                      result[1] += 120901;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ad48b4e))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb66772))) ) ) {
                  if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f520c5b))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e67ba38))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 141265148;
                      result[1] += 1900428;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec255d8))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9e003a))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 10226112;
                      result[1] += 132939463;
                    } else {
                      result[0] += 108169546;
                      result[1] += 34996029;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 138691652;
                      result[1] += 4473924;
                    } else {
                      result[0] += 58950531;
                      result[1] += 84215045;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0fc970))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f6a7b64))) ) ) {
                      result[0] += 4113953;
                      result[1] += 139051623;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 6066337;
                      result[1] += 137099238;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e772d70))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
                      result[0] += 143133233;
                      result[1] += 32342;
                    } else {
                      result[0] += 125089114;
                      result[1] += 18076461;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49059a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6f5764))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 142627360;
                      result[1] += 538216;
                    }
                  } else {
                    if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6f438a))) ) ) {
                      result[0] += 140223818;
                      result[1] += 2941758;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e77f2fc))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
                      result[0] += 137423112;
                      result[1] += 5742464;
                    } else {
                      result[0] += 117469190;
                      result[1] += 25696385;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 6316128;
                      result[1] += 136849448;
                    } else {
                      result[0] += 72933406;
                      result[1] += 70232169;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f52a668))) ) ) {
                      result[0] += 121299213;
                      result[1] += 21866362;
                    } else {
                      result[0] += 98124720;
                      result[1] += 45040855;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4602ee))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e122986))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4f041e))) ) ) {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 139202515;
                      result[1] += 3963060;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 92538908;
                      result[1] += 50626667;
                    }
                  }
                }
              } else {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                      result[0] += 706641;
                      result[1] += 142458934;
                    } else {
                      result[0] += 8139848;
                      result[1] += 135025727;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9c676e))) ) ) {
                      result[0] += 133459435;
                      result[1] += 9706140;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 91625968;
                      result[1] += 51539607;
                    } else {
                      result[0] += 12056048;
                      result[1] += 131109527;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7c95fc))) ) ) {
                      result[0] += 128095515;
                      result[1] += 15070060;
                    } else {
                      result[0] += 142820599;
                      result[1] += 344977;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af09194))) ) ) {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eceaafa))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143160479;
                      result[1] += 5096;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea463a6))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 136802661;
                      result[1] += 6362914;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
                  if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f88))) ) ) {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f7c9d))) ) ) {
                      result[0] += 142860469;
                      result[1] += 305106;
                    } else {
                      result[0] += 143157871;
                      result[1] += 7705;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2cada))) ) ) {
                if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea50bbe))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 141730144;
                      result[1] += 1435431;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                      result[0] += 114532461;
                      result[1] += 28633115;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ebd8759))) ) ) {
                      result[0] += 98766125;
                      result[1] += 44399450;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e80fed4))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 140661222;
                      result[1] += 2504354;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d399fac))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 142490267;
                      result[1] += 675309;
                    } else {
                      result[0] += 109163752;
                      result[1] += 34001824;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e15d9b9))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea3974e))) ) ) {
                      result[0] += 93904302;
                      result[1] += 49261273;
                    } else {
                      result[0] += 136625017;
                      result[1] += 6540559;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ece5562))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e17b3df))) ) ) {
                      result[0] += 2406144;
                      result[1] += 140759432;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 90898778;
                      result[1] += 52266797;
                    } else {
                      result[0] += 135877147;
                      result[1] += 7288429;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e897d8b))) ) ) {
                      result[0] += 16078018;
                      result[1] += 127087557;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e88553b))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee7dbbf))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4635de))) ) ) {
                      result[0] += 131235111;
                      result[1] += 11930464;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f698c86))) ) ) {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f454d6d))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e64a32c))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7731c1))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec255d8))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 125269879;
                      result[1] += 17895697;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1320e))) ) ) {
                      result[0] += 64655421;
                      result[1] += 78510154;
                    } else {
                      result[0] += 110837865;
                      result[1] += 32327710;
                    }
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb0960f))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988e00))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                      result[0] += 104988089;
                      result[1] += 38177487;
                    } else {
                      result[0] += 142787941;
                      result[1] += 377634;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eca2e64))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e90d462))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
              if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af36342))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d9d26f6))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f439636))) ) ) {
                      result[0] += 143095568;
                      result[1] += 70007;
                    } else {
                      result[0] += 140330614;
                      result[1] += 2834961;
                    }
                  } else {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f54e7ca))) ) ) {
                      result[0] += 143147814;
                      result[1] += 17761;
                    } else {
                      result[0] += 142931454;
                      result[1] += 234121;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49d35c))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e10712c))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e984ca4))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 142925285;
                      result[1] += 240291;
                    } else {
                      result[0] += 105214662;
                      result[1] += 37950914;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 142325247;
                      result[1] += 840329;
                    } else {
                      result[0] += 104371782;
                      result[1] += 38793793;
                    }
                  }
                }
              } else {
                if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7fac27))) ) ) {
                      result[0] += 118386919;
                      result[1] += 24778657;
                    } else {
                      result[0] += 143151029;
                      result[1] += 14546;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142215128;
                      result[1] += 950447;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                      result[0] += 129769967;
                      result[1] += 13395609;
                    } else {
                      result[0] += 142989372;
                      result[1] += 176203;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6cab8b))) ) ) {
                      result[0] += 112100100;
                      result[1] += 31065475;
                    } else {
                      result[0] += 141469301;
                      result[1] += 1696274;
                    }
                  }
                } else {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143106882;
                      result[1] += 58694;
                    }
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                      result[0] += 81344077;
                      result[1] += 61821498;
                    } else {
                      result[0] += 134104464;
                      result[1] += 9061112;
                    }
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 104521245;
                      result[1] += 38644331;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
                      result[0] += 124532312;
                      result[1] += 18633263;
                    } else {
                      result[0] += 77536482;
                      result[1] += 65629094;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63fbc3))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9d33c6))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4f1bcd))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e891ac6))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed75b1e))) ) ) {
            if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f372d04))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea3464e))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f67ea94))) ) ) {
                  if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e54ac))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f427519))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ec0970a))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb210a8))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7f31ea))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebd59f2))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 81808900;
                      result[1] += 61356675;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f391422))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e946b36))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 143046766;
                      result[1] += 118809;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f451990))) ) ) {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f44e5b2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 141028776;
                      result[1] += 2136799;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                      result[0] += 132331424;
                      result[1] += 10834151;
                    } else {
                      result[0] += 142335974;
                      result[1] += 829601;
                    }
                  } else {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4b7697))) ) ) {
                      result[0] += 58751911;
                      result[1] += 84413665;
                    } else {
                      result[0] += 4210752;
                      result[1] += 138954824;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 109340742;
                      result[1] += 33824834;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 29713610;
                      result[1] += 113451966;
                    } else {
                      result[0] += 134374707;
                      result[1] += 8790868;
                    }
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f52e2a6))) ) ) {
                      result[0] += 3230013;
                      result[1] += 139935563;
                    } else {
                      result[0] += 35389243;
                      result[1] += 107776332;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f49dc3c))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03417a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142899454;
                      result[1] += 266121;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb8b83e))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb5c326))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                    if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7731c1))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f465284))) ) ) {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    } else {
                      result[0] += 11608019;
                      result[1] += 131557556;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 71582788;
                      result[1] += 71582788;
                    }
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb6584))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e144ea4))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f6950ba))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 111351003;
                      result[1] += 31814572;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f476df2))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 143165576;
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f387685))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 140609048;
                      result[1] += 2556528;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 88994817;
                      result[1] += 54170758;
                    } else {
                      result[0] += 13421772;
                      result[1] += 129743803;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                      result[0] += 57266230;
                      result[1] += 85899345;
                    } else {
                      result[0] += 132481578;
                      result[1] += 10683998;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                      result[0] += 142423785;
                      result[1] += 741790;
                    } else {
                      result[0] += 135061864;
                      result[1] += 8103711;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
              if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f47b2e6))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 5965232;
                      result[1] += 137200344;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 61356675;
                      result[1] += 81808900;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 113690310;
                      result[1] += 29475265;
                    }
                  }
                }
              } else {
                if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fc622))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 28633115;
                      result[1] += 114532461;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 128310011;
                      result[1] += 14855564;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                      result[0] += 11453246;
                      result[1] += 131712330;
                    } else {
                      result[0] += 51418622;
                      result[1] += 91746953;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7a908c))) ) ) {
                      result[0] += 69413612;
                      result[1] += 73751963;
                    } else {
                      result[0] += 136940986;
                      result[1] += 6224590;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
                      result[0] += 36134442;
                      result[1] += 107031133;
                    } else {
                      result[0] += 104988089;
                      result[1] += 38177487;
                    }
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9acea2))) ) ) {
                      result[0] += 13673116;
                      result[1] += 129492459;
                    } else {
                      result[0] += 38645922;
                      result[1] += 104519654;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f319f70))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f49dc3c))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f88))) ) ) {
                      result[0] += 142873641;
                      result[1] += 291935;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f469e2a))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                      result[0] += 25264513;
                      result[1] += 117901063;
                    } else {
                      result[0] += 125269879;
                      result[1] += 17895697;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 80760068;
                      result[1] += 62405507;
                    } else {
                      result[0] += 37117001;
                      result[1] += 106048575;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 59652323;
                      result[1] += 83513252;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 142952585;
                      result[1] += 212991;
                    } else {
                      result[0] += 143148864;
                      result[1] += 16711;
                    }
                  } else {
                    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 136467771;
                      result[1] += 6697804;
                    }
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 142624848;
                      result[1] += 540727;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 128183132;
                      result[1] += 14982444;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e70ff5a))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 137726450;
                      result[1] += 5439126;
                    }
                  } else {
                    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
                      result[0] += 115530841;
                      result[1] += 27634734;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1765b0))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
          if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a3a26))) ) ) {
            if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f5db6))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e05e4f4))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988e00))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af0e678))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 143165576;
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebc317e))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e979cce))) ) ) {
              if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f48bf00))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f478e5d))) ) ) {
                      result[0] += 8421504;
                      result[1] += 134744072;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 142181620;
                      result[1] += 983955;
                    } else {
                      result[0] += 40703938;
                      result[1] += 102461638;
                    }
                  }
                }
              } else {
                if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f47ce93))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f52a668))) ) ) {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4bab39))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 61356675;
                      result[1] += 81808900;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fe908))) ) ) {
                      result[0] += 107374182;
                      result[1] += 35791394;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0fc970))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 19028336;
                      result[1] += 124137240;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                      result[0] += 142153805;
                      result[1] += 1011770;
                    } else {
                      result[0] += 89894664;
                      result[1] += 53270912;
                    }
                  }
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb66772))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 131512564;
                      result[1] += 11653012;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb8b83e))) ) ) {
                      result[0] += 100285065;
                      result[1] += 42880510;
                    } else {
                      result[0] += 135666427;
                      result[1] += 7499149;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                      result[0] += 31905471;
                      result[1] += 111260105;
                    } else {
                      result[0] += 4678613;
                      result[1] += 138486962;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f451990))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37e825))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
                      result[0] += 121955861;
                      result[1] += 21209715;
                    } else {
                      result[0] += 141376006;
                      result[1] += 1789569;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb66772))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e687fc2))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e75a17a))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f495f7c))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebe1f78))) ) ) {
                  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae8716e))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 132939463;
                      result[1] += 10226112;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f485745))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 28633115;
                      result[1] += 114532461;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 141843641;
                      result[1] += 1321935;
                    } else {
                      result[0] += 93155683;
                      result[1] += 50009893;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb97de0))) ) ) {
                      result[0] += 15907286;
                      result[1] += 127258290;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e913962))) ) ) {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4514c0))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee81763))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f467182))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 47721858;
                      result[1] += 95443717;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 110627945;
                      result[1] += 32537631;
                    } else {
                      result[0] += 36398027;
                      result[1] += 106767548;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 140631672;
                      result[1] += 2533904;
                    }
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2ce419))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
                      result[0] += 143164380;
                      result[1] += 1196;
                    } else {
                      result[0] += 143135347;
                      result[1] += 30229;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 143165576;
    }
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
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
