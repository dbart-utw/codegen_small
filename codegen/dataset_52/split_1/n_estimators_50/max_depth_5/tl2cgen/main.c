
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1724349930882453918) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.33799000084400177) ) ) {
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
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
            result[0] += 0.04790419161676647;
            result[1] += 0.9520958083832335;
          } else {
            result[0] += 0.7142857142857143;
            result[1] += 0.2857142857142857;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.5918900072574615479) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2949300110340118408) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5783599913120269775) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6561149954795837402) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1660399958491325378) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.07307000085711479187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.9090909090909091;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2509399950504302979) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6127900183200836182) ) ) {
            result[0] += 0.2631578947368421;
            result[1] += 0.7368421052631579;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.09199000149965286255) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.7085550129413604736) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1383599936962127686) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2521450072526931763) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8607999980449676514) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7857150137424468994) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2166000008583068848) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2831750065088272095) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
            result[0] += 0.25;
            result[1] += 0.75;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3831000030040740967) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.07363000139594078064) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2033349946141242981) ) ) {
            result[0] += 0.3142857142857143;
            result[1] += 0.6857142857142857;
          } else {
            result[0] += 0.040268456375838924;
            result[1] += 0.959731543624161;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1193349994719028473) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1083849966526031494) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8228799998760223389) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3841449916362762451) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3521199971437454224) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1333349943161010742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7906450033187866211) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4355349987745285034) ) ) {
            result[0] += 0.2608695652173913;
            result[1] += 0.7391304347826086;
          } else {
            result[0] += 0.024;
            result[1] += 0.976;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.1623099967837333679) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.01386999990791082382) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.07333500031381845474) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2085950002074241638) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7597500085830688477) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7949300110340118408) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.09760500118136405945) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2064400054514408112) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.214620005339384079) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3685099929571151733) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9106349945068359375) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.506005018949508667) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5647349953651428223) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8324699997901916504) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1898349970579147339) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03125;
            result[1] += 0.96875;
          }
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1003000028431415558) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8161749839782714844) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.34535999596118927) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5501199960708618164) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2020550072193145752) ) ) {
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
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
            result[0] += 0.046511627906976744;
            result[1] += 0.9534883720930233;
          } else {
            result[0] += 0.2857142857142857;
            result[1] += 0.7142857142857143;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7183800041675567627) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6217650175094604492) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.1902700066566467285) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4965550005435943604) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6911749839782714844) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
            result[0] += 0.4166666666666667;
            result[1] += 0.5833333333333334;
          } else {
            result[0] += 0.056962025316455694;
            result[1] += 0.9430379746835443;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.4679799973964691162) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9247550070285797119) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.03731998801231384277) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9221850037574768066) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5162999927997589111) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.703710019588470459) ) ) {
            result[0] += 0.0335195530726257;
            result[1] += 0.9664804469273743;
          } else {
            result[0] += 0.75;
            result[1] += 0.25;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.730354994535446167) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1000450029969215393) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.04286500066518783569) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.03265500068664550781) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.2085950002074241638) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9609400033950805664) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2588199973106384277) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7481699883937835693) ) ) {
            result[0] += 0.875;
            result[1] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7960099875926971436) ) ) {
            result[0] += 0.008928571428571428;
            result[1] += 0.9910714285714286;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8181799948215484619) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9221850037574768066) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2949300110340118408) ) ) {
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
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1379300057888031006) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1943499967455863953) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.0938050001859664917) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.5926650017499923706) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9279150068759918213) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05389221556886228;
            result[1] += 0.9461077844311377;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9990999996662139893) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.834430009126663208) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4126200079917907715) ) ) {
            result[0] += 0.8181818181818182;
            result[1] += 0.18181818181818182;
          } else {
            result[0] += 0.02564102564102564;
            result[1] += 0.9743589743589743;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2378650009632110596) ) ) {
            result[0] += 0.21428571428571427;
            result[1] += 0.7857142857142857;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.005009999964386224747) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5) ) ) {
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4527499973773956299) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8983099758625030518) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8606350123882293701) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9331749975681304932) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.02082999981939792633) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05405405405405406;
            result[1] += 0.9459459459459459;
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
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0.9629629629629629;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.06450999900698661804) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1072199977934360504) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2034800015389919281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4612349867820739746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.05384000018239021301) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.3226700127124786377) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.8380250036716461182) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.4548249989748001099) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2293099910020828247) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.08821000345051288605) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5567100010812282562) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.714935004711151123) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.014492753623188406;
            result[1] += 0.9855072463768116;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1114000007510185242) ) ) {
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
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1834200024604797363) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1616300046443939209) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4975449889898300171) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1636100001633167267) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05012499913573265076) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.02058999982546083629) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8044449985027313232) ) ) {
            result[0] += 0.04310344827586207;
            result[1] += 0.9568965517241379;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8607999980449676514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7432049959897994995) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.5171249955892562866) ) ) {
            result[0] += 0.8;
            result[1] += 0.2;
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
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.6253200173377990723) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2230500057339668274) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7180500030517578125) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4606400132179260254) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.027624309392265192;
            result[1] += 0.9723756906077348;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3706550002098083496) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1469400003552436829) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3160050064325332642) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.2250849902629852295) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.658195003867149353) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1087499856948852539) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6929800212383270264) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.4871300011873245239) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1734299957752227783) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4817700088024139404) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3411300033330917358) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.02429999923333525658) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5411600023508071899) ) ) {
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
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.07598000019788742065) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1160499975085258484) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8618449866771697998) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.5942799970507621765) ) ) {
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
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.6948049962520599365) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
            result[0] += 0.03676470588235294;
            result[1] += 0.9632352941176471;
          } else {
            result[0] += 0.47619047619047616;
            result[1] += 0.5238095238095238;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.21096000075340271) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1285299956798553467) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.04522613065326633;
            result[1] += 0.9547738693467337;
          }
        }
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03596000000834465027) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4093900024890899658) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.01162500027567148209) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.006250000093132257462) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1255050003528594971) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7671350240707397461) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.050955414012738856;
            result[1] += 0.9490445859872612;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9194949865341186523) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04615999944508075714) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1841050013899803162) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8742299973964691162) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.2888200134038925171) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7027949988842010498) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.5169649999588727951) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7820699810981750488) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03773584905660377;
            result[1] += 0.9622641509433962;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5743600130081176758) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.0750849992036819458) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6447599977254867554) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2018849998712539673) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.05743499891832470894) ) ) {
            result[0] += 0.9;
            result[1] += 0.1;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1501450017094612122) ) ) {
            result[0] += 0.4722222222222222;
            result[1] += 0.5277777777777778;
          } else {
            result[0] += 0.043209876543209874;
            result[1] += 0.9567901234567902;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05703499820083379745) ) ) {
      result[0] += 1;
      result[1] += 0;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.383805006742477417) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05106000043451786041) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2729100063443183899) ) ) {
            result[0] += 0.0625;
            result[1] += 0.9375;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3032499924302101135) ) ) {
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
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
            result[0] += 0.02608695652173913;
            result[1] += 0.9739130434782609;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.6929800212383270264) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2122249975800514221) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7289699912071228027) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0.7857142857142857;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9124599993228912354) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1022950001060962677) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.06956000160425901413) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.9166666666666666;
          } else {
            result[0] += 0.9166666666666666;
            result[1] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9288100004196166992) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.0410958904109589;
            result[1] += 0.958904109589041;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5895849987864494324) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7623949944972991943) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.09663000330328941345) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4732000008225440979) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.6220850050449371338) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.00464499741792678833) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7319049984216690063) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0.9705882352941176;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7232149839401245117) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.7037000060081481934) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.1428550034761428833) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2373800016939640045) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2550950050354003906) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.139164995402097702) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01879500038921833038) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1482399990782141685) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
            result[0] += 0.09444444444444444;
            result[1] += 0.9055555555555556;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.6161350011825561523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3756750002503395081) ) ) {
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
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05084745762711865;
            result[1] += 0.9491525423728814;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.75) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7980450093746185303) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2895199954509735107) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.05984999984502792358) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8302849829196929932) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0.6;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
            result[0] += 0.0851063829787234;
            result[1] += 0.9148936170212766;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.6090299785137176514) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6808699965476989746) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.04032258064516129;
            result[1] += 0.9596774193548387;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2829649969935417175) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1429600007832050323) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.042682926829268296;
            result[1] += 0.9573170731707317;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4138849973678588867) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2604800015687942505) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1981849968433380127) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4024299979209899902) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01501999981701374054) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
            result[0] += 0.03488372093023256;
            result[1] += 0.9651162790697675;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0.42857142857142855;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2591699957847595215) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.999664992094039917) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.288489997386932373) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1062450036406517029) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.027586206896551724;
            result[1] += 0.9724137931034482;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8181799948215484619) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.2831749990582466125) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8181799948215484619) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.08695652173913043;
            result[1] += 0.9130434782608695;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.811185002326965332) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5845049917697906494) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.07386499643325805664) ) ) {
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
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2102850005030632019) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.0438749995082616806) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4062199890613555908) ) ) {
            result[0] += 0.4;
            result[1] += 0.6;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7736600041389465332) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0.9411764705882353;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8048500120639801025) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1929550021886825562) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
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
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9902099967002868652) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7079000174999237061) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.06221000105142593384) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.172129996120929718) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1854150018189102411) ) ) {
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
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.2828250005841255188) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.5819950029253959656) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.2483250051736831665) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.043478260869565216;
            result[1] += 0.9565217391304348;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1265550032258033752) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7295950055122375488) ) ) {
            result[0] += 0.06944444444444445;
            result[1] += 0.9305555555555556;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.1814199984073638916) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.03061000071465969086) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01260000001639127731) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.8843100070953369141) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.2142850011587142944) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7947549819946289062) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
            result[0] += 0.02586206896551724;
            result[1] += 0.9741379310344828;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.16666666666666666;
          }
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05176999978721141815) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.394350007176399231) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8680600225925445557) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06296499911695718765) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3304300010204315186) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.4;
            result[1] += 0.6;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05521000176668167114) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.1826099976897239685) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5609500110149383545) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.01215500012040138245) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.014285714285714285;
            result[1] += 0.9857142857142858;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2102600038051605225) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5330200009047985077) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8649899959564208984) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05521000176668167114) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06432748538011696;
            result[1] += 0.935672514619883;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5490350127220153809) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7183800041675567627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.06432748538011696;
            result[1] += 0.935672514619883;
          }
        }
      }
    }
  }
  if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4298399984836578369) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001449999981559813023) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.02153499983251094818) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6243249997496604919) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5839999914169311523) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
          } else {
            result[0] += 0.01775147928994083;
            result[1] += 0.9822485207100592;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5176249891519546509) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9433650076389312744) ) ) {
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
    result[0] += 1;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.2156149968504905701) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.0799200013279914856) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.05155999958515167236) ) ) {
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
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9236549735069274902) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5839999914169311523) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.027210884353741496;
            result[1] += 0.9727891156462585;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7714300155639648438) ) ) {
            result[0] += 0.2;
            result[1] += 0.8;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9894049763679504395) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4908599853515625) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.2156149968504905701) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8656899929046630859) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7165350019931793213) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6358950138092041016) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
          } else {
            result[0] += 0.029411764705882353;
            result[1] += 0.9705882352941176;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1388799992855638266) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1056450009346008301) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.9808349907398223877) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5515550076961517334) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.02197802197802198;
            result[1] += 0.978021978021978;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2265600040555000305) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.75;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1395450010895729065) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.133385002613067627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.410319991409778595) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.766904979944229126) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09523999691009521484) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7437599897384643555) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.0687650027684867382) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0.9130434782608695;
          } else {
            result[0] += 0;
            result[1] += 1;
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
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3422300070524215698) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9330399930477142334) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9068599939346313477) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0.9230769230769231;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3729799985885620117) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.01260999962687492371) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.09523999691009521484) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1608550027012825012) ) ) {
            result[0] += 0.25;
            result[1] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5071649849414825439) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7991250157356262207) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1575149968266487122) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0.8666666666666667;
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5832400023937225342) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3781900107860565186) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.08333333333333333;
            result[1] += 0.9166666666666666;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9447599947452545166) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8606350123882293701) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6649200022220611572) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9331749975681304932) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1723300069570541382) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.04854499921202659607) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1773849986493587494) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.06989247311827956;
            result[1] += 0.9301075268817204;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.05041499994695186615) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2011450007557868958) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.03891000151634216309) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.02858499996364116669) ) ) {
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
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2143850028514862061) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3782249931246042252) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.02082999981939792633) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.01546999975107610226) ) ) {
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
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6128349900245666504) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.04938271604938271;
            result[1] += 0.9506172839506173;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4843400120735168457) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.657010003924369812) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.5543600022792816162) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5882550179958343506) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.4341849982738494873) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7468699812889099121) ) ) {
            result[0] += 0.7037037037037037;
            result[1] += 0.2962962962962963;
          } else {
            result[0] += 0.06818181818181818;
            result[1] += 0.9318181818181818;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.02608695652173913;
            result[1] += 0.9739130434782609;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2719449996948242188) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.8953799903392791748) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.07103825136612021;
            result[1] += 0.9289617486338798;
          }
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1815550029277801514) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.0743299990426748991) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6638600081205368042) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.152225002646446228) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.07142857142857142;
            result[1] += 0.9285714285714286;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9098950028419494629) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.512999996542930603) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.211594998836517334) ) ) {
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
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.02214000001549720764) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4093900024890899658) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.005880000069737434387) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001449999981559813023) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2517250021919608116) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6489800065755844116) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.111364997923374176) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2940250039100646973) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.04428999871015548706) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
            result[0] += 0.0390625;
            result[1] += 0.9609375;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.0225799991749227047) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03719500079751014709) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7027949988842010498) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5454550012946128845) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.93334999680519104) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.07622499763965606689) ) ) {
            result[0] += 0.4;
            result[1] += 0.6;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.875) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.362630009651184082) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
            result[0] += 0.5555555555555556;
            result[1] += 0.4444444444444444;
          } else {
            result[0] += 0.05454545454545454;
            result[1] += 0.9454545454545454;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.04773000068962574005) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9224799871444702148) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3432650119066238403) ) ) {
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
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
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
