
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d699d88))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3f3a233a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 17179869;
          result[1] += 68719476;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e257bc8))) ) ) {
          result[0] += 2770946;
          result[1] += 83128399;
        } else {
          result[0] += 25264513;
          result[1] += 60634832;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3de0f12c))) ) ) {
          result[0] += 26430567;
          result[1] += 59468777;
        } else {
          result[0] += 73628010;
          result[1] += 12271335;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df28b6e))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f116777))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f08e464))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3b892254))) ) ) {
          result[0] += 61356675;
          result[1] += 24542670;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f400000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ee73387))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3e81f602))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f400c74))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
          result[0] += 10663367;
          result[1] += 75235978;
        } else {
          result[0] += 68719476;
          result[1] += 17179869;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee8e410))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3eb6ab36))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0fe719))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ef495c0))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f4f87be))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f1048be))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f7796d0))) ) ) {
          result[0] += 5624361;
          result[1] += 80274983;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f3217c2))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f7416f0))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d918549))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 42949672;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eddbdf9))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76017a))) ) ) {
          result[0] += 34359738;
          result[1] += 51539607;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
          result[0] += 7563464;
          result[1] += 78335881;
        } else {
          result[0] += 68719476;
          result[1] += 17179869;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ece8f08))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3eed9b3e))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f2635e7))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
          result[0] += 3860644;
          result[1] += 82038701;
        } else {
          result[0] += 68719476;
          result[1] += 17179869;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          result[0] += 9439488;
          result[1] += 76459857;
        } else {
          result[0] += 60129542;
          result[1] += 25769803;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ba4d2b3))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 71582788;
          result[1] += 14316557;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef95c00))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 5726623;
          result[1] += 80172722;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e57fa1a))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee46499))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x387ba882))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3e9fe08b))) ) ) {
          result[0] += 47721858;
          result[1] += 38177487;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3dd0fa59))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d8eca))) ) ) {
          result[0] += 66810602;
          result[1] += 19088743;
        } else {
          result[0] += 2045222;
          result[1] += 83854123;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f5ae686))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3165e))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 6871947;
          result[1] += 79027398;
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d94562e))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3de385c7))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x39cc78ea))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
          result[0] += 35791394;
          result[1] += 50107951;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ebcd5f9))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3d015f46))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 3904515;
          result[1] += 81994830;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eb6b702))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 57266230;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
          result[0] += 4058236;
          result[1] += 81841109;
        } else {
          result[0] += 30678337;
          result[1] += 55221008;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e410625))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3dd85c68))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e1255b0))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f65b036))) ) ) {
          result[0] += 6238499;
          result[1] += 79660845;
        } else {
          result[0] += 64424509;
          result[1] += 21474836;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3afe1e))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f5e8976))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f396042))) ) ) {
          result[0] += 42949672;
          result[1] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0a2d0e))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f3ea359))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f03d029))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 1789569;
          result[1] += 84109776;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3edc115e))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ee9e648))) ) ) {
          result[0] += 73628010;
          result[1] += 12271335;
        } else {
          result[0] += 24542670;
          result[1] += 61356675;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f6d41c8))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 68719476;
          result[1] += 17179869;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76017a))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3efdd2f2))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f33f09a))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3efbd70a))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3da37b4a))) ) ) {
          result[0] += 70437463;
          result[1] += 15461882;
        } else {
          result[0] += 13805252;
          result[1] += 72094093;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          result[0] += 49085340;
          result[1] += 36814005;
        } else {
          result[0] += 2863311;
          result[1] += 83036034;
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e971de6))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d3d1244))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e26223e))) ) ) {
          result[0] += 28633115;
          result[1] += 57266230;
        } else {
          result[0] += 83751862;
          result[1] += 2147483;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3c4e703b))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 8589934;
          result[1] += 77309411;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3effe718))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0888f8))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 4224557;
          result[1] += 81674787;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed81301))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3df465e8))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e074fb6))) ) ) {
          result[0] += 42949672;
          result[1] += 42949672;
        } else {
          result[0] += 83372894;
          result[1] += 2526451;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e0cf80e))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 8589934;
          result[1] += 77309411;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f7901e2))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5ac80c))) ) ) {
          result[0] += 4979672;
          result[1] += 80919673;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3d55f99c))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f4e96e6))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5b6ddb))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3df465e8))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d5dcc64))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f68385c))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eecba74))) ) ) {
          result[0] += 81808900;
          result[1] += 4090445;
        } else {
          result[0] += 37580963;
          result[1] += 48318382;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dec80c7))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 6797789;
          result[1] += 79101555;
        }
      }
    }
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d6f73c0))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d74cc25))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eaebf87))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3c68d10f))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ef2dcb2))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 9149042;
          result[1] += 76750303;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3d1244))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ed60fe4))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e1f3e04))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e2bf877))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6d6723))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f69de16))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f44bac7))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eea2142))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e93b8e5))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 57266230;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0e30a9))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 6063483;
          result[1] += 79835862;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e400000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3dd0e562))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 57266230;
          result[1] += 28633115;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f7eb464))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f72b702))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 4965280;
          result[1] += 80934065;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7e0f3c))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e7385c6))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 39045157;
          result[1] += 46854188;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebaf640))) ) ) {
          result[0] += 27943160;
          result[1] += 57956185;
        } else {
          result[0] += 4643207;
          result[1] += 81256138;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f25042e))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 42949672;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e9bda52))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4df267))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f32cf42))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e20c9da))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3df72c52))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 8132482;
          result[1] += 77766863;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f12be38))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e400000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d93404f))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e28bd66))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f6d9503))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ec1a954))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3eae5754))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 5758615;
          result[1] += 80140730;
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3b09a027))) ) ) {
          result[0] += 11204262;
          result[1] += 74695083;
        } else {
          result[0] += 56164956;
          result[1] += 29734388;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f13d178))) ) ) {
          result[0] += 7809031;
          result[1] += 78090314;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f6686d7))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ed0c005))) ) ) {
          result[0] += 26430567;
          result[1] += 59468777;
        } else {
          result[0] += 73628010;
          result[1] += 12271335;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3efbd9a9))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3df72c52))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f172b02))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f0405e6))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3da66905))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f32e978))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e92007e))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
          result[0] += 4264506;
          result[1] += 81634839;
        } else {
          result[0] += 50758704;
          result[1] += 35140641;
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d1d4413))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ed38a5d))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x387ba882))) ) ) {
          result[0] += 38177487;
          result[1] += 47721858;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3de3fbbe))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f68cd20))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ed11f0c))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ec2d8c3))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e94985f))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f2c9afe))) ) ) {
          result[0] += 2962046;
          result[1] += 82937299;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3eebfdb4))) ) ) {
          result[0] += 9203501;
          result[1] += 76695844;
        } else {
          result[0] += 64424509;
          result[1] += 21474836;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e723f68))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8777b0))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6cb3e6))) ) ) {
          result[0] += 14316557;
          result[1] += 71582788;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb66eec))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e674928))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 42949672;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f74a9bd))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f42786c))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 8947848;
          result[1] += 76951497;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f19c044))) ) ) {
          result[0] += 42949672;
          result[1] += 42949672;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ea139eb))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e00a287))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d93404f))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
          result[0] += 10440804;
          result[1] += 75458541;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ba93f29))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d63c750))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e9bda52))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3eaa5f85))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3c8c0054))) ) ) {
          result[0] += 8886139;
          result[1] += 77013206;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f0840e2))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f5ad96a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f716580))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f2c9a02))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f7209fe))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 9010420;
          result[1] += 76888925;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e08c693))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f06a162))) ) ) {
          result[0] += 28633115;
          result[1] += 57266230;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f372d4d))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f683fe6))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 4772185;
          result[1] += 81127160;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7e0f3c))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f57e61d))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f2202c9))) ) ) {
          result[0] += 61356675;
          result[1] += 24542670;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d130164))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e4cc3a0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 42949672;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3e852008))) ) ) {
          result[0] += 42949672;
          result[1] += 42949672;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f4dbd51))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 5726623;
          result[1] += 80172722;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f5be37e))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3eb21dfc))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f3c61a6))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3d9158b8))) ) ) {
          result[0] += 6607641;
          result[1] += 79291703;
        } else {
          result[0] += 57266230;
          result[1] += 28633115;
        }
      }
    }
  }
  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f6a6f40))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3d71a9fc))) ) ) {
          result[0] += 51539607;
          result[1] += 34359738;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 10565160;
          result[1] += 75334185;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3f6aa455))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3f32df))) ) ) {
          result[0] += 73628010;
          result[1] += 12271335;
        } else {
          result[0] += 14621165;
          result[1] += 71278180;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e60aa65))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 3241484;
          result[1] += 82657861;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3a9154))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f2c9a02))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e124895))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 4772185;
          result[1] += 81127160;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ec84cae))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d63ec03))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e5debd9))) ) ) {
          result[0] += 79763678;
          result[1] += 6135667;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3da66905))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f4de5f3))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eae6afd))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3f1e3a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          result[0] += 7524030;
          result[1] += 78375315;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e4b7d42))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e9197a2))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 73628010;
          result[1] += 12271335;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f441b86))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f12af79))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
          result[0] += 6092152;
          result[1] += 79807193;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f5c28f6))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f5f861a))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f22abde))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e608850))) ) ) {
          result[0] += 75161927;
          result[1] += 10737418;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3d5a21ea))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3c9763))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ea2bb45))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e08572a))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f600000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 73628010;
          result[1] += 12271335;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 6979321;
          result[1] += 78920024;
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3bb97785))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f21743e))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e440e17))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d52e72e))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 74446099;
          result[1] += 11453246;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f72b702))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 8765239;
          result[1] += 77134106;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ebe5bea))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7b68f0))) ) ) {
          result[0] += 4156419;
          result[1] += 81742925;
        } else {
          result[0] += 66076419;
          result[1] += 19822925;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f69de16))) ) ) {
          result[0] += 71582788;
          result[1] += 14316557;
        } else {
          result[0] += 7853654;
          result[1] += 78045691;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e400000))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3eae9a2c))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e756580))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
          result[0] += 64424509;
          result[1] += 21474836;
        } else {
          result[0] += 3758096;
          result[1] += 82141249;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f2da3c2))) ) ) {
          result[0] += 40904450;
          result[1] += 44994895;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f533919))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f7209fe))) ) ) {
          result[0] += 51539607;
          result[1] += 34359738;
        } else {
          result[0] += 7491222;
          result[1] += 78408123;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ef59408))) ) ) {
          result[0] += 28633115;
          result[1] += 57266230;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3d257a78))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e0b44e5))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eddbdf9))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f22b50b))) ) ) {
          result[0] += 16183934;
          result[1] += 69715411;
        } else {
          result[0] += 2280513;
          result[1] += 83618832;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e1c1fc9))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee62196))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3b892254))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3de7c5ac))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 57266230;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e8441dd))) ) ) {
          result[0] += 78090314;
          result[1] += 7809031;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3afe1e))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3edc1bda))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          result[0] += 6927366;
          result[1] += 78971979;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3d3df3b8))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f616c62))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ebd013a))) ) ) {
          result[0] += 28633115;
          result[1] += 57266230;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
          result[0] += 6718384;
          result[1] += 79180961;
        } else {
          result[0] += 70281283;
          result[1] += 15618062;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3a956c0d))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e99dbcb))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f3164d8))) ) ) {
          result[0] += 80172722;
          result[1] += 5726623;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3d8eaf25))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 4521018;
          result[1] += 81378327;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e307c84))) ) ) {
          result[0] += 1193046;
          result[1] += 84706299;
        } else {
          result[0] += 17895697;
          result[1] += 68003648;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f16ef0b))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f2202c9))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 20211610;
          result[1] += 65687735;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4e2c13))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e00fa59))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3c01f7))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f627efa))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 6646973;
          result[1] += 79252372;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f44ec42))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e124895))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f75b61c))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f41f6fd))) ) ) {
          result[0] += 57266230;
          result[1] += 28633115;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d172474))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f2eb463))) ) ) {
          result[0] += 6681060;
          result[1] += 79218285;
        } else {
          result[0] += 76354974;
          result[1] += 9544371;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f713b3a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 17179869;
          result[1] += 68719476;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 3949395;
          result[1] += 81949950;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d70f27c))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d43ba34))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 75161927;
          result[1] += 10737418;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f0a9f6b))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f533919))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f683fe6))) ) ) {
          result[0] += 68719476;
          result[1] += 17179869;
        } else {
          result[0] += 6203841;
          result[1] += 79695504;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3ed800a8))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ddabc95))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f772df5))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
          result[0] += 67492343;
          result[1] += 18407002;
        } else {
          result[0] += 6727057;
          result[1] += 79172288;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e29fa98))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e214120))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3b694ee4))) ) ) {
          result[0] += 67492343;
          result[1] += 18407002;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3cfa2489))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 4908534;
          result[1] += 80990811;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f3b9097))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f27ad19))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 6507526;
          result[1] += 79391819;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3c6f1fde))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 57266230;
          result[1] += 28633115;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e000000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e1c6e6e))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e8f1023))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 7979720;
          result[1] += 77919625;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e96b7aa))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f6bb108))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3eb060fe))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f298b82))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f3b5e20))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 28633115;
          result[1] += 57266230;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e846f16))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f0aa550))) ) ) {
          result[0] += 64901728;
          result[1] += 20997617;
        } else {
          result[0] += 2684354;
          result[1] += 83214991;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f65e5f3))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 8974558;
          result[1] += 76924787;
        }
      }
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
