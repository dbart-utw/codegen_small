
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
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cf7014e))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( UNLIKELY( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f510ea8))) ) ) {
        if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6a5a6a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edc51c2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f41984c))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cfa2b2b))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 107710;
            result[1] += 85791635;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0ee618))) ) ) {
            result[0] += 81984863;
            result[1] += 3914482;
          } else {
            result[0] += 85739354;
            result[1] += 159991;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85874660;
            result[1] += 24684;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 83015183;
            result[1] += 2884162;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9e003a))) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e872c7a))) ) ) {
            result[0] += 21474836;
            result[1] += 64424509;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
          if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6c2591))) ) ) {
            result[0] += 10307921;
            result[1] += 75591424;
          } else {
            result[0] += 82516;
            result[1] += 85816829;
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb1b232))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3a4aef))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 37206741;
            result[1] += 48692604;
          } else {
            result[0] += 77707670;
            result[1] += 8191675;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85546992;
            result[1] += 352353;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 37312736;
            result[1] += 48586609;
          } else {
            result[0] += 84924253;
            result[1] += 975092;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b6c47))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85888029;
            result[1] += 11316;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f425b6a))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 168430;
            result[1] += 85730915;
          } else {
            result[0] += 69113031;
            result[1] += 16786314;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 79536;
            result[1] += 85819809;
          } else {
            result[0] += 85589196;
            result[1] += 310149;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9eccae))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 22114512;
            result[1] += 63784833;
          } else {
            result[0] += 85372356;
            result[1] += 526989;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4333ee))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 11204262;
            result[1] += 74695083;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85624201;
            result[1] += 275144;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e900e68))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee618))) ) ) {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
            result[0] += 84357514;
            result[1] += 1541831;
          } else {
            result[0] += 76159828;
            result[1] += 9739516;
          }
        } else {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85762383;
            result[1] += 136962;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f36144d))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 66540164;
            result[1] += 19359181;
          } else {
            result[0] += 85473173;
            result[1] += 426172;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f2818db))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea57e34))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
          if ( UNLIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f79fe5a))) ) ) {
            result[0] += 85450785;
            result[1] += 448560;
          } else {
            result[0] += 85887288;
            result[1] += 12057;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f3536ea))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eb669fe))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            result[0] += 78277521;
            result[1] += 7621824;
          } else {
            result[0] += 43942024;
            result[1] += 41957321;
          }
        } else {
          if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x37a1ac00))) ) ) {
            result[0] += 85795641;
            result[1] += 103703;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3748c8))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85594631;
            result[1] += 304714;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 9995375;
            result[1] += 75903970;
          } else {
            result[0] += 82666834;
            result[1] += 3232511;
          }
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebb0926))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            result[0] += 77404771;
            result[1] += 8494574;
          } else {
            result[0] += 17109047;
            result[1] += 68790298;
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85811064;
            result[1] += 88280;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb4dc48))) ) ) {
            result[0] += 57266230;
            result[1] += 28633115;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
        if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 64290123;
            result[1] += 21609222;
          }
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 83034386;
            result[1] += 2864958;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f37ef80))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e90d3f2))) ) ) {
            result[0] += 85636656;
            result[1] += 262689;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += 85718833;
            result[1] += 180512;
          } else {
            result[0] += 73480798;
            result[1] += 12418547;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 84429185;
            result[1] += 1470159;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ea1320d))) ) ) {
          if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x367fe000))) ) ) {
            result[0] += 85887430;
            result[1] += 11915;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ce09f37))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
            result[0] += 58993245;
            result[1] += 26906100;
          } else {
            result[0] += 23211460;
            result[1] += 62687885;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 54832892;
            result[1] += 31066453;
          } else {
            result[0] += 85791451;
            result[1] += 107894;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
        if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 48021407;
            result[1] += 37877938;
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 45566403;
            result[1] += 40332942;
          } else {
            result[0] += 78496462;
            result[1] += 7402883;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 63810942;
            result[1] += 22088403;
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85582702;
            result[1] += 316643;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d374ba3))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 84661015;
            result[1] += 1238330;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d374ba3))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 80639941;
            result[1] += 5259404;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 61246233;
            result[1] += 24653112;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            result[0] += 48753682;
            result[1] += 37145663;
          } else {
            result[0] += 1796642;
            result[1] += 84102703;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9f9924))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb0960f))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85824895;
            result[1] += 74450;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += 78794217;
            result[1] += 7105128;
          } else {
            result[0] += 27681698;
            result[1] += 58217647;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e772d70))) ) ) {
            result[0] += 66603116;
            result[1] += 19296229;
          } else {
            result[0] += 85850930;
            result[1] += 48415;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
            result[0] += 626103;
            result[1] += 85273242;
          } else {
            result[0] += 46643;
            result[1] += 85852702;
          }
        } else {
          if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4160ae))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 84365021;
            result[1] += 1534324;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
        if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85861504;
            result[1] += 37841;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 85765806;
            result[1] += 133539;
          } else {
            result[0] += 76742781;
            result[1] += 9156564;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 82861648;
            result[1] += 3037697;
          } else {
            result[0] += 7307872;
            result[1] += 78591473;
          }
        }
      } else {
        if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85630775;
            result[1] += 268570;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8038d9))) ) ) {
            result[0] += 78716125;
            result[1] += 7183220;
          } else {
            result[0] += 85888106;
            result[1] += 11239;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 51742937;
            result[1] += 34156408;
          } else {
            result[0] += 85320244;
            result[1] += 579101;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e23c8))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            result[0] += 57758387;
            result[1] += 28140958;
          } else {
            result[0] += 34163911;
            result[1] += 51735434;
          }
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3577cd))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85684832;
            result[1] += 214513;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068da3))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 63748476;
            result[1] += 22150869;
          } else {
            result[0] += 85106312;
            result[1] += 793033;
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += 75487303;
            result[1] += 10412041;
          } else {
            result[0] += 26452954;
            result[1] += 59446391;
          }
        } else {
          if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
            result[0] += 788067;
            result[1] += 85111278;
          } else {
            result[0] += 58015;
            result[1] += 85841330;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85865581;
            result[1] += 33764;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eca2e64))) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9d33e2))) ) ) {
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
      if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f369eab))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99538a))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
        if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 36310430;
            result[1] += 49588915;
          } else {
            result[0] += 84106347;
            result[1] += 1792998;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
            result[0] += 60004350;
            result[1] += 25894995;
          } else {
            result[0] += 85063373;
            result[1] += 835972;
          }
        }
      } else {
        if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x369c5000))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 54904736;
            result[1] += 30994609;
          } else {
            result[0] += 85731363;
            result[1] += 167982;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85181285;
            result[1] += 718060;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e19b730))) ) ) {
            result[0] += 31475158;
            result[1] += 54424187;
          } else {
            result[0] += 84709505;
            result[1] += 1189840;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 9756212;
            result[1] += 76143133;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb4488e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
          if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9603e4))) ) ) {
            result[0] += 85817585;
            result[1] += 81760;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
            result[0] += 73985058;
            result[1] += 11914287;
          } else {
            result[0] += 85572797;
            result[1] += 326548;
          }
        }
      } else {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8af030))) ) ) {
            result[0] += 51539607;
            result[1] += 34359738;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 31000958;
            result[1] += 54898386;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d53bf14))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 81226996;
            result[1] += 4672349;
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 6155858;
            result[1] += 79743487;
          }
        }
      } else {
        if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 84332956;
            result[1] += 1566389;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3fa42f))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
            result[0] += 60400017;
            result[1] += 25499328;
          } else {
            result[0] += 47723215;
            result[1] += 38176130;
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85661810;
            result[1] += 237535;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e55c93f))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
        if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 51847642;
            result[1] += 34051703;
          } else {
            result[0] += 85749917;
            result[1] += 149428;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
        if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 83373363;
            result[1] += 2525982;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            result[0] += 64609832;
            result[1] += 21289513;
          } else {
            result[0] += 5324761;
            result[1] += 80574584;
          }
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae1f9ec))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85150025;
            result[1] += 749320;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += 47721858;
            result[1] += 38177487;
          } else {
            result[0] += 252577;
            result[1] += 85646768;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb4488e))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ad4b5ab))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85884510;
            result[1] += 14835;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
    if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e23c8))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
            result[0] += 81514080;
            result[1] += 4385265;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea57e34))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
            result[0] += 85889289;
            result[1] += 10056;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
        if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += 63250400;
            result[1] += 22648945;
          } else {
            result[0] += 83529708;
            result[1] += 2369637;
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 84128225;
            result[1] += 1771120;
          } else {
            result[0] += 20441121;
            result[1] += 65458223;
          }
        }
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f381cc3))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
            result[0] += 85656351;
            result[1] += 242994;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 80668428;
            result[1] += 5230917;
          }
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
            result[0] += 61984187;
            result[1] += 23915158;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb0960f))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea79579))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
            result[0] += 85867831;
            result[1] += 31513;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f439636))) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e595f16))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f4a3198))) ) ) {
          if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f402eb2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 49970;
            result[1] += 85849375;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
            result[0] += 3506095;
            result[1] += 82393250;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
            result[0] += 84528359;
            result[1] += 1370986;
          } else {
            result[0] += 76818374;
            result[1] += 9080971;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38853d80))) ) ) {
      if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f28a452))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea69a56))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 85731318;
            result[1] += 168027;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 85899345;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 67843341;
            result[1] += 18056004;
          } else {
            result[0] += 85751125;
            result[1] += 148220;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea63be0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
            result[0] += 85895351;
            result[1] += 3994;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f392967))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += 77840710;
            result[1] += 8058635;
          } else {
            result[0] += 10294917;
            result[1] += 75604428;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            result[0] += 19010510;
            result[1] += 66888834;
          } else {
            result[0] += 85710268;
            result[1] += 189077;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ce09f37))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f35dcf4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
            result[0] += 75582902;
            result[1] += 10316443;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
            result[0] += 84241358;
            result[1] += 1657987;
          } else {
            result[0] += 56792955;
            result[1] += 29106389;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
            result[0] += 84504228;
            result[1] += 1395116;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
            result[0] += 19982575;
            result[1] += 65916770;
          } else {
            result[0] += 8135415;
            result[1] += 77763930;
          }
        } else {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1ef5a0))) ) ) {
            result[0] += 85060640;
            result[1] += 838705;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8603ba))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 1886013;
            result[1] += 84013332;
          } else {
            result[0] += 82336700;
            result[1] += 3562645;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 1575782;
            result[1] += 84323563;
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea0cbd3))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068da3))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 84548951;
            result[1] += 1350394;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
            result[0] += 68109463;
            result[1] += 17789882;
          } else {
            result[0] += 85089072;
            result[1] += 810273;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea69a56))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e878f40))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
            result[0] += 85895357;
            result[1] += 3987;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
      if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb190d6))) ) ) {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e15142e))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
            result[0] += 85733225;
            result[1] += 166120;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 51470750;
            result[1] += 34428595;
          }
        } else {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 80460542;
            result[1] += 5438803;
          } else {
            result[0] += 43603466;
            result[1] += 42295879;
          }
        }
      } else {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e22fb72))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85847608;
            result[1] += 51737;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e279e74))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85392565;
            result[1] += 506780;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e11fd22))) ) ) {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f37567a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85720279;
            result[1] += 179066;
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 12402;
            result[1] += 85886943;
          } else {
            result[0] += 72398466;
            result[1] += 13500879;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
            result[0] += 6825335;
            result[1] += 79074010;
          } else {
            result[0] += 72705;
            result[1] += 85826640;
          }
        } else {
          if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85845411;
            result[1] += 53934;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e20efac))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
            result[0] += 85885493;
            result[1] += 13852;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2eff53))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85045339;
            result[1] += 854006;
          }
        }
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
            result[0] += 71687538;
            result[1] += 14211807;
          } else {
            result[0] += 57584051;
            result[1] += 28315294;
          }
        } else {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae89bf6))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 362236;
            result[1] += 85537109;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f36bdde))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85892438;
            result[1] += 6907;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
        if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4c7d20))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e878fb0))) ) ) {
            result[0] += 627002;
            result[1] += 85272343;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 117509;
            result[1] += 85781836;
          } else {
            result[0] += 72820147;
            result[1] += 13079198;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 52787307;
            result[1] += 33112038;
          } else {
            result[0] += 84872861;
            result[1] += 1026484;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e9db))) ) ) {
            result[0] += 75560628;
            result[1] += 10338717;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eabc76e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85887463;
            result[1] += 11882;
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ecd3ffc))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
            result[0] += 82882533;
            result[1] += 3016812;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e872c7a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 80715764;
            result[1] += 5183581;
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46e1c3))) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09da8c))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85782072;
            result[1] += 117273;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
            result[0] += 85754977;
            result[1] += 144368;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae69e6e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e68b814))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 84948332;
            result[1] += 951013;
          }
        } else {
          if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
            result[0] += 37689684;
            result[1] += 48209661;
          } else {
            result[0] += 66541433;
            result[1] += 19357912;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3edc9d34))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85876624;
            result[1] += 22721;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
      if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2d6e77))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 84580777;
            result[1] += 1318568;
          }
        }
      } else {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 65487246;
            result[1] += 20412099;
          } else {
            result[0] += 3539405;
            result[1] += 82359940;
          }
        } else {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae89bf6))) ) ) {
            result[0] += 1188918;
            result[1] += 84710427;
          } else {
            result[0] += 78888712;
            result[1] += 7010632;
          }
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f32706c))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb190d6))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
          if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb5a1ec))) ) ) {
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
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 80471456;
            result[1] += 5427889;
          } else {
            result[0] += 23498301;
            result[1] += 62401044;
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
            result[0] += 80969140;
            result[1] += 4930205;
          } else {
            result[0] += 85715775;
            result[1] += 183570;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d9888))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb0960f))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85879001;
            result[1] += 20344;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 73040118;
            result[1] += 12859227;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f3ea4ea))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85244530;
            result[1] += 654815;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ad65e4e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85396380;
            result[1] += 502965;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += 84385701;
            result[1] += 1513644;
          } else {
            result[0] += 2693299;
            result[1] += 83206046;
          }
        }
      } else {
        if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f5084ea))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea87366))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 85899345;
  }
  if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f51b565))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0dcf64))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed67056))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eaa4d34))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85888449;
            result[1] += 10896;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f36144d))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 84660739;
            result[1] += 1238606;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0b2bea))) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += 85212002;
            result[1] += 687343;
          } else {
            result[0] += 28535093;
            result[1] += 57364251;
          }
        } else {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 79054530;
            result[1] += 6844815;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            result[0] += 14316557;
            result[1] += 71582788;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 83799246;
            result[1] += 2100099;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ee164))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e22fb72))) ) ) {
        if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85898307;
            result[1] += 1037;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 80075210;
            result[1] += 5824135;
          } else {
            result[0] += 19696972;
            result[1] += 66202373;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85609589;
            result[1] += 289756;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd32c8))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8123a4))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3d79d0))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e92c2ae))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
            result[0] += 85534788;
            result[1] += 364557;
          } else {
            result[0] += 85882128;
            result[1] += 17217;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb4dc48))) ) ) {
            result[0] += 12989657;
            result[1] += 72909688;
          } else {
            result[0] += 1680953;
            result[1] += 84218391;
          }
        } else {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += 82890401;
            result[1] += 3008944;
          } else {
            result[0] += 61220830;
            result[1] += 24678515;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0dcf64))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 818089;
            result[1] += 85081256;
          } else {
            result[0] += 85597588;
            result[1] += 301757;
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
            result[0] += 60641758;
            result[1] += 25257586;
          } else {
            result[0] += 3942775;
            result[1] += 81956570;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
      result[0] += 0;
      result[1] += 85899345;
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85296082;
            result[1] += 603263;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
            result[0] += 71537059;
            result[1] += 14362286;
          } else {
            result[0] += 81801094;
            result[1] += 4098251;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
        if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85858641;
            result[1] += 40704;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 85899345;
  } else {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
            result[0] += 83860065;
            result[1] += 2039279;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
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
    

    FILE* file = fopen("./codegen_small/esa_3_months_global/split_1/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
