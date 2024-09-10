
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03378000017255544662) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2424900010228157043) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05761999823153018951) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5142550021409988403) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2925699949264526367) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3693950027227401733) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.04781999997794628143) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.01979500055313110352) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6585250049829483032) ) ) {
              result[0] += 0;
              result[1] += 1;
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
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8481699824333190918) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1707299947738647461) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.166665002703666687) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.036036036036036036;
                result[1] += 0.963963963963964;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.05325499922037124634) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.500845000147819519) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.204439997673034668) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5217400193214416504) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2630749940872192383) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1818200051784515381) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3160349950194358826) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3624400049448013306) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9443449974060058594) ) ) {
                result[0] += 0.03333333333333333;
                result[1] += 0.9666666666666667;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.5557349994778633118) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2941200137138366699) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8725500106811523438) ) ) {
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8312600255012512207) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9474450051784515381) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.34535999596118927) ) ) {
                result[0] += 0.1875;
                result[1] += 0.8125;
              } else {
                result[0] += 0.03773584905660377;
                result[1] += 0.9622641509433962;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.5754450038075447083) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.277775004506111145) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.1647799983620643616) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.264189988374710083) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5967300087213516235) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.33799000084400177) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2943699955940246582) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9667899906635284424) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.983740001916885376) ) ) {
                result[0] += 0.02702702702702703;
                result[1] += 0.972972972972973;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
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
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03205500030890107155) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2628350034356117249) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.09704000316560268402) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.03799500141758471727) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5813750028610229492) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1415500007569789886) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.07706999778747558594) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.7462050020694732666) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1254899986088275909) ) ) {
                result[0] += 0.35294117647058826;
                result[1] += 0.6470588235294118;
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3242100030183792114) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.007100000046193599701) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1280199997127056122) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.198215000331401825) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.1349500007927417755) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1608700007200241089) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3314149975776672363) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.109235001727938652) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815250039100646973) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1411099955439567566) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6979950070381164551) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8981600105762481689) ) ) {
                result[0] += 0.03225806451612903;
                result[1] += 0.967741935483871;
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.176109999418258667) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6179199963808059692) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6974750012159347534) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9481199979782104492) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8604550063610076904) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2788899987936019897) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2432349994778633118) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001169998198747634888) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3976149857044219971) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.0724849998950958252) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2366849929094314575) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5528349876403808594) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.4832599908113479614) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.538834989070892334) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9807099997997283936) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.02378000039607286453) ) ) {
                result[0] += 0.07407407407407407;
                result[1] += 0.9259259259259259;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5669050067663192749) ) ) {
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
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2994900047779083252) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2122249975800514221) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5933350026607513428) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7102600038051605225) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.06778999976813793182) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2008300051093101501) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4054600000381469727) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.7442599833011627197) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6410749852657318115) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.0004499999922700226307) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5119150001555681229) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.07538999989628791809) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.3950249999761581421) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4181150048971176147) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5242750048637390137) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.01066499948501586914) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1399750038981437683) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0.9230769230769231;
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
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4939249902963638306) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6417599916458129883) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.3066499978303909302) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8347100019454956055) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3615700006484985352) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2872250080108642578) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3802649974822998047) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1165749989449977875) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.05151499994099140167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7509149909019470215) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4702650010585784912) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8783999979496002197) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.4066600054502487183) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.2222222222222222;
                result[1] += 0.7777777777777778;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.6907500028610229492) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1280799955129623413) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.011904761904761904;
                result[1] += 0.9880952380952381;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1840849965810775757) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4333349838852882385) ) ) {
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
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.8854849934577941895) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1405950039625167847) ) ) {
                result[0] += 0.016;
                result[1] += 0.984;
              } else {
                result[0] += 0.20512820512820512;
                result[1] += 0.7948717948717948;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9318049848079681396) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3910350054502487183) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6184649765491485596) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9972400069236755371) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.995559990406036377) ) ) {
                result[0] += 0.014184397163120567;
                result[1] += 0.9858156028368794;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2317149932496249676) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3910350054502487183) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0.9444444444444444;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.04047999903559684753) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2001399975270032883) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8594799935817718506) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0001199999824166297913) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2429950013756752014) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.09660000214353203773) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.005880000069737434387) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8668549954891204834) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.1678800070658326149) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9475899934768676758) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2305750101804733276) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1612199991941452026) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.003560000099241733551) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.4129950106143951416) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              } else {
                result[0] += 0.009174311926605505;
                result[1] += 0.9908256880733946;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01501999981701374054) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.9217649996280670166) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9475899934768676758) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1165399998426437378) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.3928550034761428833) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              } else {
                result[0] += 0.029069767441860465;
                result[1] += 0.9709302325581395;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9429549872875213623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1557700037956237793) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9957849979400634766) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9977349936962127686) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7949350178241729736) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2429950013756752014) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.2106850072741508484) ) ) {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.009455000050365924835) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.4208250045776367188) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.764189988374710083) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1105400025844573975) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6397249996662139893) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2366849929094314575) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5967300087213516235) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6170649826526641846) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8097299933433532715) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6410350054502487183) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7966699898242950439) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3062649965286254883) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1154350005090236664) ) ) {
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9894049763679504395) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2623949944972991943) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.5228450074791908264) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9069150090217590332) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.83964499831199646) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.138295002281665802) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7716299891471862793) ) ) {
                result[0] += 0.07407407407407407;
                result[1] += 0.9259259259259259;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1447200030088424683) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
                result[0] += 0.08333333333333333;
                result[1] += 0.9166666666666666;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.09382000192999839783) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4136250019073486328) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.52666500024497509) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7770250141620635986) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8312600255012512207) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5397500097751617432) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9552350044250488281) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8039250075817108154) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1199050042778253555) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5991899967193603516) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03333333333333333;
                result[1] += 0.9666666666666667;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8363850116729736328) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.1774193548387097;
                result[1] += 0.8225806451612904;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8641549944877624512) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1974750012159347534) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.8790749907493591309) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3547399938106536865) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1386500000953674316) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3133950084447860718) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.02076999936252832413) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.01191500015556812286) ) ) {
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
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7220299839973449707) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8493250012397766113) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1376650054007768631) ) ) {
                result[0] += 1;
                result[1] += 0;
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
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9894049763679504395) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2539850125322118402) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3927350044250488281) ) ) {
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
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6366100013256072998) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9300700128078460693) ) ) {
                result[0] += 0.03816793893129771;
                result[1] += 0.9618320610687023;
              } else {
                result[0] += 0.16216216216216217;
                result[1] += 0.8378378378378378;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2994000017642974854) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1472049951553344727) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5096600055694580078) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1913850009441375732) ) ) {
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
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.03948500379920005798) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1470400020480155945) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2060600072145462036) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1911699995398521423) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1032199990004301071) ) ) {
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
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4422899894416332245) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3194199949502944946) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.172765001654624939) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6179199963808059692) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.7424249947071075439) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.764189988374710083) ) ) {
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
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3478399962186813354) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.09672499820590019226) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8571450114250183105) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.513425000011920929) ) ) {
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
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2698500081896781921) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9830049872398376465) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.138994995504617691) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.02709000091999769211) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.0898876404494382;
                result[1] += 0.9101123595505618;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02659500017762184143) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5376749932765960693) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9200949966907501221) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1551699936389923096) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.231155000627040863) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1772750015370547771) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.01504000020213425159) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4783350080251693726) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2207050025463104248) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9869999885559082031) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.125) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5858100056648254395) ) ) {
                result[0] += 0.0625;
                result[1] += 0.9375;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.8414199948310852051) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.862630009651184082) ) ) {
                result[0] += 0.25;
                result[1] += 0.75;
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1860899999737739563) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6647700071334838867) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5151999890804290771) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.01979500055313110352) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8692849874496459961) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8738300204277038574) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.7321349978446960449) ) ) {
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
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7596499919891357422) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03030500002205371857) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6310450136661529541) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5674149841070175171) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7540049850940704346) ) ) {
                result[0] += 0.007751937984496124;
                result[1] += 0.9922480620155039;
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.07105500251054763794) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.0805649980902671814) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2000000029802322388) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1874099969863891602) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9427549839019775391) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1165399998426437378) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9972400069236755371) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
                result[0] += 0.013986013986013986;
                result[1] += 0.986013986013986;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3064250051975250244) ) ) {
                result[0] += 0.11764705882352941;
                result[1] += 0.8823529411764706;
              } else {
                result[0] += 0.8;
                result[1] += 0.2;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3333350121974945068) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0625) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.856454998254776001) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.639100000262260437) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5462099984288215637) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04174500145018100739) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4936100095510482788) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1991950049996376038) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6068899929523468018) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6047250032424926758) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09517999738454818726) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.05263157894736842;
                result[1] += 0.9473684210526315;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6244800090789794922) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9946500062942504883) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3591950088739395142) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2715000063180923462) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1694050021469593048) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006680000107735395432) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.2838950082659721375) ) ) {
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
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8744599819183349609) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4451099932193756104) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3450850099325180054) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6076650023460388184) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.3980399966239929199) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5355550013482570648) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6775150001049041748) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9068599939346313477) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6176450029015541077) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7452850043773651123) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.69901999831199646) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.01066999975591897964) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1986499950289726257) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.05;
                result[1] += 0.95;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.946139991283416748) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6965749859809875488) ) ) {
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4831449836492538452) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
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
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9849300086498260498) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4816999882459640503) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              } else {
                result[0] += 0.0273972602739726;
                result[1] += 0.9726027397260274;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1255649998784065247) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7682000100612640381) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9533349871635437012) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.531344980001449585) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.6996649801731109619) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7223000228404998779) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9031000137329101562) ) ) {
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04088499955832958221) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1694050021469593048) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2718449980020523071) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2166000008583068848) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.507830008864402771) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.09007999859750270844) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6586450189352035522) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8342350125312805176) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4536300003528594971) ) ) {
                result[0] += 0.4166666666666667;
                result[1] += 0.5833333333333334;
              } else {
                result[0] += 0.02702702702702703;
                result[1] += 0.972972972972973;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8648650050163269043) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6208399981260299683) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9069299995899200439) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.222220003604888916) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5122349997982382774) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9396849870681762695) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.974085003137588501) ) ) {
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
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8399200141429901123) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4054549932479858398) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2071000039577484131) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4070449918508529663) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2428749948740005493) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1991150043904781342) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1424700021743774414) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1747550070285797119) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.04032258064516129;
                result[1] += 0.9596774193548387;
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.2628400027751922607) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
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
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.01197500014677643776) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.09893999993801116943) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3423649966716766357) ) ) {
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
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9933899939060211182) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5119050145149230957) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9815250039100646973) ) ) {
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
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8568699955940246582) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3910350054502487183) ) ) {
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
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.4279150068759918213) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5118350088596343994) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4405799955129623413) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8211749792098999023) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1814199984073638916) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.01057999953627586365) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2986000031232833862) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6962199807167053223) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.01383499940857291222) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.006795000110287219286) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4050900042057037354) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8250949978828430176) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1767300069332122803) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.959515005350112915) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5448650121688842773) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8562699854373931885) ) ) {
                result[0] += 0.07692307692307693;
                result[1] += 0.9230769230769231;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04174500145018100739) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.00887500029057264328) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9981499910354614258) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.83964499831199646) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3838849961757659912) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.154935002326965332) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2983600050210952759) ) ) {
                result[0] += 0.10526315789473684;
                result[1] += 0.8947368421052632;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1949649974703788757) ) ) {
                result[0] += 0.625;
                result[1] += 0.375;
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
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.8845199942588806152) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3051449954509735107) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.5766950100660324097) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8177399933338165283) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2976800054311752319) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5249050110578536987) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.7791849970817565918) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1395800039172172546) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.09615384615384616;
                result[1] += 0.9038461538461539;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4259050004184246063) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9605999886989593506) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2373800016939640045) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.25) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3125) ) ) {
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9107699990272521973) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4289200007915496826) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2013400048017501831) ) ) {
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1705549955368041992) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.0400700010359287262) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.02772500018181744963) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.00877500046044588089) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8312600255012512207) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3543800078332424164) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8497000038623809814) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9306100010871887207) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.990345001220703125) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.24470500648021698) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7332150042057037354) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.02142857142857143;
                result[1] += 0.9785714285714285;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9581199884414672852) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.07554500177502632141) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03078999929130077362) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.07461000233888626099) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9050999879837036133) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.1019850075244903564) ) ) {
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
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6515249907970428467) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1861499994993209839) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1576250046491622925) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3762000016868114471) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.8805600106716156006) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.4002149999141693115) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.8291949927806854248) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.9578700065612792969) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.026490066225165563;
                result[1] += 0.9735099337748344;
              }
            }
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4136250019073486328) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7861900031566619873) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.08108499646186828613) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.6118900179862976074) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.222220003604888916) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2586900070309638977) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3168150037527084351) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6618850231170654297) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5176250040531158447) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2461500093340873718) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3400899916887283325) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4125950038433074951) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.125;
                result[1] += 0.875;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3560600131750106812) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.007025000057183206081) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6363636363636364;
                result[1] += 0.36363636363636365;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3149850070476531982) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5665400028228759766) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9482249915599822998) ) ) {
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
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2350400015711784363) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3097299933433532715) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.02731000073254108429) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1542100012302398682) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.07694499939680099487) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0) ) ) {
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
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5249050110578536987) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7181800007820129395) ) ) {
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7902100086212158203) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8347100019454956055) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8589400053024291992) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9573650062084197998) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2872550114989280701) ) ) {
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
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2183950021862983704) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3114549964666366577) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.03166500106453895569) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4295199960470199585) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5712800025939941406) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1167699955403804779) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.9217649996280670166) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5466749966144561768) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2930749952793121338) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.0457516339869281;
                result[1] += 0.954248366013072;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1999199986457824707) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4772050082683563232) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3152700066566467285) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6506049931049346924) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1579699963331222534) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1177049987018108368) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1561299972236156464) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1116650011390447617) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04671000130474567413) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1574749946594238281) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.01190499961376190186) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.0593050047755241394) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9335449934005737305) ) ) {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5308099985122680664) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5325549989938735962) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6330749988555908203) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.6104600131511688232) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5601949989795684814) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2873149961233139038) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.02799000078812241554) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.015625) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2826699912548065186) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.03421499952673912048) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7888950109481811523) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2137000039219856262) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.08510500006377696991) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1196150034666061401) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5735400021076202393) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3721999973058700562) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1375599950551986694) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.07110000122338533401) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1500599980354309082) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2193600013852119446) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0007300004363059997559) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.3265299946069717407) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.254574999213218689) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.007794999517500400543) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.3232699930667877197) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6669999957084655762) ) ) {
                result[0] += 0.01639344262295082;
                result[1] += 0.9836065573770492;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5183350145816802979) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5477849990129470825) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04174500145018100739) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2791050001978874207) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.06331999786198139191) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9032450020313262939) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8409349918365478516) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
                result[0] += 0.006024096385542169;
                result[1] += 0.9939759036144579;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3732349984347820282) ) ) {
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9894049763679504395) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5138900000602006912) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.677559971809387207) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004080000217072665691) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.3742899894714355469) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.362630009651184082) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.34535999596118927) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2452550008893013) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.0253649991936981678) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0.8181818181818182;
              } else {
                result[0] += 0.020689655172413793;
                result[1] += 0.9793103448275862;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3449150025844573975) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.3293249905109405518) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.959515005350112915) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.04423500038683414459) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1346850013360381126) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2689400017261505127) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001494999974966049194) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3916649967432022095) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.6614150106906890869) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3208950012922286987) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2288899943232536316) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5252199992537498474) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6410350054502487183) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.04212500154972076416) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
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
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7949350178241729736) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.008940000436268746853) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1260500028729438782) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1723300069570541382) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2346950024366378784) ) ) {
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
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6160499751567840576) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3853500038385391235) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7291649878025054932) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8039250075817108154) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7749199867248535156) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6552750170230865479) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2467600032687187195) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1397749949246644974) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0.9411764705882353;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9667899906635284424) ) ) {
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05106000043451786041) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1065149977803230286) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.9159600138664245605) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1904850006103515625) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.00370500003919005394) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2309599965810775757) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9048750102519989014) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8275400102138519287) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9502350091934204102) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.008264462809917356;
                result[1] += 0.9917355371900827;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1922499984502792358) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.9107150137424468994) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02201499976217746735) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2913199961185455322) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.7131250053644180298) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
                result[0] += 0.012738853503184714;
                result[1] += 0.9872611464968153;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.4976999908685684204) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4425100013613700867) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5071649849414825439) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9275000095367431641) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2639150023460388184) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3306000083684921265) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.641269981861114502) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3836050033569335938) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.4066250026226043701) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9144749939441680908) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2438949896022677422) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4011200070381164551) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.3366249948740005493) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2099249958992004395) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1984750032424926758) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6367100030183792114) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2295399978756904602) ) ) {
                result[0] += 0.01652892561983471;
                result[1] += 0.9834710743801653;
              } else {
                result[0] += 0.11764705882352941;
                result[1] += 0.8823529411764706;
              }
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03719500079751014709) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9422200024127960205) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.04652500338852405548) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0) ) ) {
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
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03378000017255544662) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1922499984502792358) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1078049968928098679) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.054878048780487805;
                result[1] += 0.9451219512195121;
              }
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.03891000151634216309) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05486999824643135071) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1066399998962879181) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.03053499944508075714) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.0007300004363059997559) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.393080003559589386) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.777779996395111084) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9999949932098388672) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1644600033760070801) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2356900051236152649) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4781150072813034058) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.01383499940857291222) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1233149975305423141) ) ) {
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
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.99584999680519104) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8657250106334686279) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6528300046920776367) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6731700003147125244) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6654249876737594604) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6137900054454803467) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3409900069236755371) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8211250007152557373) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.06702999770641326904) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.07197500020265579224) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.08206000179052352905) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.3517699986696243286) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.9084950089454650879) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1527649983763694763) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.09903000295162200928) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9999949932098388672) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8485250174999237061) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2442150041460990906) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.03352499986067414284) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.349720001220703125) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1022950001060962677) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1092249974608421326) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7303499877452850342) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8420400023460388184) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0.75;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2394250035285949707) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7356050014495849609) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.09672499820590019226) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6913249939680099487) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9032450020313262939) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5493999868631362915) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.13647499680519104) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5609500110149383545) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.232890009880065918) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9570200145244598389) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4180749952793121338) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 0.011834319526627219;
                result[1] += 0.9881656804733728;
              }
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2600000053644180298) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.7282049953937530518) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6455349922180175781) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.6098250150680541992) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.03327999892644584179) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7960099875926971436) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.6608950197696685791) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6283050179481506348) ) ) {
                result[0] += 0.6;
                result[1] += 0.4;
              } else {
                result[0] += 0.02027027027027027;
                result[1] += 0.9797297297297297;
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1321949958801269531) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1657800003886222839) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.001515000025392509997) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1313650012016296387) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6280799955129623413) ) ) {
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
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.206259995698928833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4773600101470947266) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3439150005578994751) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1938700005412101746) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5818549990653991699) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4395399987697601318) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.01808499917387962341) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5933350026607513428) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1304000020027160645) ) ) {
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
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1341849938035011292) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4575350135564804077) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2189249992370605469) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3450850099325180054) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.214980006217956543) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8678100109100341797) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7064349949359893799) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7272749990224838257) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3562699928879737854) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2961099967360496521) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.152225002646446228) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.69901999831199646) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4212900102138519287) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4844349920749664307) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.04895104895104895;
                result[1] += 0.951048951048951;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4936199933290481567) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
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
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.04086500173434615135) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6033150032162666321) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
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
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.09351000189781188965) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2757949978113174438) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05976499989628791809) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4713749997317790985) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4247499946504831314) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
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
                result[0] += 0.059880239520958084;
                result[1] += 0.9401197604790419;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9857549965381622314) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9901649951934814453) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2872049957513809204) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1482700034976005554) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1878749877214431763) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6186500042676925659) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.5579649992287158966) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0542850014753639698) ) ) {
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
                result[0] += 0.006711409395973154;
                result[1] += 0.9932885906040269;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1281849965453147888) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2640650048851966858) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5259099993854761124) ) ) {
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
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.54361000657081604) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2775149941444396973) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7424249947071075439) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6329499930143356323) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8181799948215484619) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9385949969291687012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5186400003731250763) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5199900045990943909) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9577949941158294678) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1590350046753883362) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1616050004959106445) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.0425531914893617;
                result[1] += 0.9574468085106383;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1291950047016143799) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3225000053644180298) ) ) {
                result[0] += 0.375;
                result[1] += 0.625;
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5397500097751617432) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2866950035095214844) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6781949996948242188) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4034350067377090454) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.05660500004887580872) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.7919400036334991455) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2489450052380561829) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3345850110054016113) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.025;
                result[1] += 0.975;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7344049811363220215) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9306100010871887207) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6569249927997589111) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5) ) ) {
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
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8271999955177307129) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3181799948215484619) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8312600255012512207) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.04294478527607362;
                result[1] += 0.9570552147239264;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1837949939072132111) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1208150088787078857) ) ) {
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
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.6934799849987030029) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4780500084161758423) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6208750009536743164) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.4689349997788667679) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1617349982261657715) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1678700000047683716) ) ) {
                result[0] += 0.125;
                result[1] += 0.875;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3317100121639668941) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.481244996190071106) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.07442500069737434387) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.03221999853849411011) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1790800057351589203) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5811399966478347778) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.875) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1104449965059757233) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.08971500303596258163) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.4804350007325410843) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.01504000020213425159) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0218000008026137948) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.4175949990749359131) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7876749932765960693) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5998899936676025391) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9108099937438964844) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.645834997296333313) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1507050022482872009) ) ) {
                result[0] += 0.05555555555555555;
                result[1] += 0.9444444444444444;
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
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8268249928951263428) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3536999970674514771) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.3245600014925003052) ) ) {
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
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6363649964332580566) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4831449836492538452) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5740149989724159241) ) ) {
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
  if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.562929987907409668) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.03138000005856156349) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2580149956047534943) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
            result[0] += 0;
            result[1] += 1;
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04756499826908111572) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6452600061893463135) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.4743400067090988159) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04107000213116407394) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9741150140762329102) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9232699871063232422) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.026490066225165563;
                result[1] += 0.9735099337748344;
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6768300086259841919) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.7935699820518493652) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.01215500012040138245) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.05735000036656856537) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0001250000059371814132) ) ) {
                result[0] += 0.8;
                result[1] += 0.2;
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
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9581199884414672852) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2879649996757507324) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.20079001784324646) ) ) {
          result[0] += 0;
          result[1] += 1;
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7997750043869018555) ) ) {
                result[0] += 0.029411764705882353;
                result[1] += 0.9705882352941176;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4898299947381019592) ) ) {
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05135999829508364201) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8406049907207489014) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9679799973964691162) ) ) {
                result[0] += 0.01098901098901099;
                result[1] += 0.989010989010989;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9427749812602996826) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.8414199948310852051) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9927549958229064941) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.7878800034523010254) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5930049866437911987) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1704099997878074646) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.7085550129413604736) ) ) {
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
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-5.999999848427250981e-05) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.09462499991059303284) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.5370250009000301361) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.001365000032819807529) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.8258250057697296143) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.7018399983644485474) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.1495549976825714111) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.5554749965667724609) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4522150009870529175) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.270830005407333374) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.005030000116676092148) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5118349995464086533) ) ) {
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
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8278599977493286133) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.6733300089836120605) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.201345004141330719) ) ) {
                result[0] += 0.21428571428571427;
                result[1] += 0.7857142857142857;
              } else {
                result[0] += 0.01818181818181818;
                result[1] += 0.9818181818181818;
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9003050029277801514) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8333350121974945068) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.7282049953937530518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9667949974536895752) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02598000038415193558) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1694050021469593048) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.04083000123500823975) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1125349998474121094) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1165399998426437378) ) ) {
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
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.9572800099849700928) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.031446540880503145;
                result[1] += 0.9685534591194969;
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6084850132465362549) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8668549954891204834) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.746230006217956543) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1861499994993209839) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3573399931192398071) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.180619996041059494) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004080000217072665691) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.00259000016376376152) ) ) {
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
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4178299903869628906) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7652249932289123535) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3306000083684921265) ) ) {
                result[0] += 0.13333333333333333;
                result[1] += 0.8666666666666667;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
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
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.613055005669593811) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9533349871635437012) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1790800057351589203) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1527649983763694763) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.01276999711990356445) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8641549944877624512) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.166665002703666687) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7039999961853027344) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3010550141334533691) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7628650069236755371) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2744600027799606323) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1478699967265129089) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.08823529411764706;
                result[1] += 0.9117647058823529;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3411049991846084595) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.138739999383687973) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7107249796390533447) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.7287250012159347534) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5) ) ) {
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4404000043869018555) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.0281399991363286972) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.063854999840259552) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2312050014734268188) ) ) {
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
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.993609994649887085) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7947549819946289062) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2757949978113174438) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.034722222222222224;
                result[1] += 0.9652777777777778;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.6540199965238571167) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8641549944877624512) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3025249987840652466) ) ) {
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
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.969765007495880127) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.166665002703666687) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.746230006217956543) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.008660000283271074295) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9933899939060211182) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.058823529411764705;
                result[1] += 0.9411764705882353;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1897749975323677063) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.8296299874782562256) ) ) {
                result[0] += 0.9473684210526315;
                result[1] += 0.05263157894736842;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8712100088596343994) ) ) {
                result[0] += 0.06557377049180328;
                result[1] += 0.9344262295081968;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4679799973964691162) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.6022149994969367981) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.9604949951171875) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.6072050034999847412) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2759549897164106369) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.1487850025296211243) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.83964499831199646) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.017341040462427744;
                result[1] += 0.9826589595375722;
              }
            }
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.001230000052601099014) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4635649919509887695) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1196150034666061401) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5824650228023529053) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.000155000001541338861) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.02308500092476606369) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.403624996542930603) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9919500052928924561) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3856399953365325928) ) ) {
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
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.7848849892616271973) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1480599939823150635) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03905000165104866028) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
                result[0] += 0.02962962962962963;
                result[1] += 0.9703703703703703;
              } else {
                result[0] += 0.4;
                result[1] += 0.6;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.8529950082302093506) ) ) {
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.03773500025272369385) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1482399990782141685) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1377349942922592163) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.5190849993377923965) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8917249739170074463) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4961950033903121948) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1259400025010108948) ) ) {
                result[0] += 0.030303030303030304;
                result[1] += 0.9696969696969697;
              } else {
                result[0] += 0.2857142857142857;
                result[1] += 0.7142857142857143;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6269649863243103027) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.02869999967515468597) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3992350101470947266) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6329499930143356323) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7521199882030487061) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.615939997136592865) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7872700095176696777) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369349926710128784) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.2596049904823303223) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2718600034713745117) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.162684999406337738) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7949350178241729736) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8634550273418426514) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1564099956303834915) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5387649834156036377) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1297150030732154846) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1319749969989061356) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1630299985408782959) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1174199990928173065) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5) ) ) {
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
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9285149872303009033) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.4874550104141235352) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
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
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.09976499900221824646) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1351900100708007812) ) ) {
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03389830508474576;
                result[1] += 0.9661016949152542;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9038000106811523438) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.5006999969482421875) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02825500071048736572) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7396450042724609375) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4522150009870529175) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8770299851894378662) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1586150005459785461) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0.9285714285714286;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01950000040233135223) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1057599969208240509) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2564999982714653015) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.6136699914932250977) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1206900030374526978) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.8040699958801269531) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09732999652624130249) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.04381000995635986328) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3599600046873092651) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.023622047244094488;
                result[1] += 0.9763779527559056;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2282350063323974609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05976499989628791809) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1578249968588352203) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8479700088500976562) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.14739999920129776) ) ) {
                result[0] += 0.23529411764705882;
                result[1] += 0.7647058823529411;
              } else {
                result[0] += 0.013245033112582781;
                result[1] += 0.9867549668874173;
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
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
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8917249739170074463) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.03422500006854534149) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.04211499914526939392) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9679799973964691162) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.264189988374710083) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3350149989128112793) ) ) {
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
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2388549987226724625) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01792499981820583344) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.06475500017404556274) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.0001400000037392601371) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.032975001260638237) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.3156500020995736122) ) ) {
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
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.004199999792035669088) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.1430549956858158112) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8312600255012512207) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8076899945735931396) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6549850106239318848) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.220315001904964447) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6667099893093109131) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2199650034308433533) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
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
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6506049931049346924) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5) ) ) {
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
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4863500148057937622) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5208350121974945068) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9773649871349334717) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7099999934434890747) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.220315001904964447) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9555749893188476562) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1813500020653009415) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1657399963587522507) ) ) {
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
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3928650021553039551) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6716800034046173096) ) ) {
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
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4084950108081102371) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5112699940800666809) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7223000228404998779) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2732999995350837708) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03839499969035387039) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.009045000435435213149) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9093799889087677002) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.4552000164985656738) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2436049971729516983) ) ) {
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
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.09160500019788742065) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.207145005464553833) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.166665002703666687) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8044449985027313232) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.142404995858669281) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6357200145721435547) ) ) {
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
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4057399928569793701) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8048500120639801025) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.199990004301071167) ) ) {
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
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.426369987428188324) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8954249918460845947) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2072050031274557114) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3012299984693527222) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1172600015997886658) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8051550090312957764) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5270249992609024048) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.3125299960374832153) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.002305000089108943939) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1356250010430812836) ) ) {
                result[0] += 0.25;
                result[1] += 0.75;
              } else {
                result[0] += 0.014492753623188406;
                result[1] += 0.9855072463768116;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9144749939441680908) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4591900110244750977) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2874100059270858765) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6542799770832061768) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1446550041437149048) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9655449986457824707) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8690499961376190186) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.08552631578947369;
                result[1] += 0.9144736842105263;
              }
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9482350051403045654) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.09441500157117843628) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.04364499449729919434) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.06030000094324350357) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2994000017642974854) ) ) {
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
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.1466549949254840612) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.5416349917650222778) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1447200030088424683) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.125;
                result[1] += 0.875;
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
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9315849840641021729) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5729900002479553223) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.983740001916885376) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6447599977254867554) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.0299750007688999176) ) ) {
                result[0] += 0.21428571428571427;
                result[1] += 0.7857142857142857;
              } else {
                result[0] += 0.0425531914893617;
                result[1] += 0.9574468085106383;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6009950041770935059) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.009580000303685665131) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.02219000086188316345) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.04580000042915344238) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.2310249954462051392) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.30750998854637146) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.4155749976634979248) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3769599944353103638) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2906650081276893616) ) ) {
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
                result[0] += 0.0064516129032258064;
                result[1] += 0.9935483870967742;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7668350040912628174) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06942499801516532898) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3767949938774108887) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0008299999753944575787) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.180694999173283577) ) ) {
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
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.02830000128597021103) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.2576599996536970139) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2230500057339668274) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5741750001907348633) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8987649977207183838) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.506859995424747467) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8146849870681762695) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6642700135707855225) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.6658450067043304443) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3805949985980987549) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4611950069665908813) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1362000033259391785) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 0.00847457627118644;
                result[1] += 0.9915254237288136;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7953100204467773438) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8057949841022491455) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.04619000107049942017) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2638850025832653046) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.3076000064611434937) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.07319999858736991882) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5415849983692169189) ) ) {
                result[0] += 0.42857142857142855;
                result[1] += 0.5714285714285714;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1459399983286857605) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07272499799728393555) ) ) {
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
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
                result[0] += 0.008333333333333333;
                result[1] += 0.9916666666666667;
              } else {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5434100180864334106) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8503800034523010254) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3744800090789794922) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.001505000051110982895) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.0899300016462802887) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4246549904346466064) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2178549915552139282) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6467850059270858765) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.4559499919414520264) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.552760004997253418) ) ) {
                result[0] += 0.3;
                result[1] += 0.7;
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
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9570200145244598389) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.83964499831199646) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.04143999889492988586) ) ) {
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
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.186569996178150177) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3258900046348571777) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4576800018548965454) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1320700012147426605) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.02830000128597021103) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.04294499941170215607) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9570200145244598389) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.144859999418258667) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.3770850114524364471) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6790899932384490967) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8441950082778930664) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5009549999958835542) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6818200051784515381) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4783149957656860352) ) ) {
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5137649998068809509) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.531440000981092453) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.09704000316560268402) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.4080800078809261322) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8962250053882598877) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1376650054007768631) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.019736842105263157;
                result[1] += 0.9802631578947368;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2168550007045269012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8856399953365325928) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3592300117015838623) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2109400033950805664) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.993609994649887085) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4572850018739700317) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2757949978113174438) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.04430379746835443;
                result[1] += 0.9556962025316456;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6895799934864044189) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.25;
                result[1] += 0.75;
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1416449993848800659) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7949350178241729736) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05106000043451786041) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1556449942290782928) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.004729999927803874016) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.001595000034285476431) ) ) {
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
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6170250028371810913) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4043750017881393433) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7947549819946289062) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6921999901533126831) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9808349907398223877) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1593749970197677612) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.02494500018656253815) ) ) {
                result[0] += 0.4;
                result[1] += 0.6;
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7692300081253051758) ) ) {
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
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8369050025939941406) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6754399985074996948) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.7887899875640869141) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1998299956321716309) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9227850139141082764) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9826149940490722656) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.06996999680995941162) ) ) {
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1351950019598007202) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1647649966180324554) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3133950084447860718) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1375599950551986694) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3049950003623962402) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3199900016188621521) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1835000067949295044) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.4191299974918365479) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.04652500338852405548) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7888549864292144775) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4171449989080429077) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1831599920988082886) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1947600021958351135) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.7965900003910064697) ) ) {
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2724949941039085388) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7688849866390228271) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7805449962615966797) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2719449996948242188) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1439750045537948608) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1580900028347969055) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3113399967551231384) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.210660003125667572) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.02589499950408935547) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6984350085258483887) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.07804500311613082886) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6754399985074996948) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8181799948215484619) ) ) {
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
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  
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
