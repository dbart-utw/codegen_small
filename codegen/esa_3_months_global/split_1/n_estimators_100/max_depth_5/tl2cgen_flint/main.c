
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
            result[0] += 0.9222654081066074;
            result[1] += 0.07773459189339256;
          } else {
            result[0] += 0.8871622619223387;
            result[1] += 0.1128377380776613;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0.027777777777777776;
            result[1] += 0.9722222222222222;
          } else {
            result[0] += 0.9947212040147438;
            result[1] += 0.005278795985256129;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3bc354))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
            result[0] += 0.6286263690326895;
            result[1] += 0.3713736309673104;
          } else {
            result[0] += 0.9891457917516988;
            result[1] += 0.010854208248301227;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9998841882173092;
            result[1] += 0.00011581178269077095;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e81243a))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9353391684901532;
            result[1] += 0.06466083150984683;
          }
        } else {
          if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.5319488817891374;
            result[1] += 0.4680511182108626;
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9344444444444444;
            result[1] += 0.06555555555555556;
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.7642292490118577;
            result[1] += 0.2357707509881423;
          }
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee618))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7c951c))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f46ec4e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37ac08))) ) ) {
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9164983164983165;
            result[1] += 0.08350168350168351;
          } else {
            result[0] += 0.2808450204154092;
            result[1] += 0.7191549795845908;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            result[0] += 0.6009389671361502;
            result[1] += 0.39906103286384975;
          } else {
            result[0] += 0.997439268101791;
            result[1] += 0.0025607318982090073;
          }
        }
      }
    }
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
          if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3f886c))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9924543866459627;
            result[1] += 0.007545613354037267;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8787878787878788;
            result[1] += 0.12121212121212122;
          }
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            result[0] += 0.9662576687116564;
            result[1] += 0.03374233128834356;
          } else {
            result[0] += 0.5188065386446595;
            result[1] += 0.4811934613553404;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3adb2d58))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9994152583182371;
            result[1] += 0.0005847416817629388;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988dff))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += 0.9961147164378196;
            result[1] += 0.003885283562180417;
          } else {
            result[0] += 0.8989181438998958;
            result[1] += 0.10108185610010427;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.1125;
            result[1] += 0.8875;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b0332))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9998131519074992;
            result[1] += 0.00018684809250079686;
          }
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
            result[0] += 0.6920404491593771;
            result[1] += 0.3079595508406229;
          } else {
            result[0] += 0.99871103117506;
            result[1] += 0.001288968824940048;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9ccda8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
            result[0] += 0.9980843388481154;
            result[1] += 0.0019156611518845628;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.898796621571119;
            result[1] += 0.10120337842888108;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed9e996))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
            result[0] += 0.8701492537313433;
            result[1] += 0.12985074626865672;
          } else {
            result[0] += 0.9994024184476941;
            result[1] += 0.0005975815523059617;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e72d830))) ) ) {
            result[0] += 0.7867377540819727;
            result[1] += 0.21326224591802734;
          } else {
            result[0] += 0.9691558441558441;
            result[1] += 0.030844155844155844;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
            result[0] += 0.5204827468978412;
            result[1] += 0.47951725310215876;
          } else {
            result[0] += 0.3509114583333333;
            result[1] += 0.6490885416666666;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e824caf))) ) ) {
            result[0] += 0.9974599513806645;
            result[1] += 0.0025400486193355356;
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
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
            result[0] += 0.009554140127388535;
            result[1] += 0.9904458598726115;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3e61f6))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9722783256108669;
            result[1] += 0.027721674389133102;
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
          if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae89bf6))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.11107199436718887;
            result[1] += 0.8889280056328112;
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 0.4211050273768044;
            result[1] += 0.5788949726231957;
          } else {
            result[0] += 0.9491353001017294;
            result[1] += 0.0508646998982706;
          }
        }
      }
    } else {
      if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea99480))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
            result[0] += 0.9996974879867826;
            result[1] += 0.000302512013217448;
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f431db8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e94d152))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9633153688905408;
            result[1] += 0.03668463110945921;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
            result[0] += 0.9996516367267787;
            result[1] += 0.00034836327322131517;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4268f4))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.859588125167157;
            result[1] += 0.140411874832843;
          }
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 0.4488545551411827;
            result[1] += 0.5511454448588172;
          } else {
            result[0] += 0.89056875449964;
            result[1] += 0.10943124550035997;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4ee25e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9981658966033966;
            result[1] += 0.0018341033966033965;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8794788273615635;
            result[1] += 0.12052117263843648;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4b554a))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x367ff000))) ) ) {
            result[0] += 0.999440777076723;
            result[1] += 0.0005592229232770463;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9609274845326348;
            result[1] += 0.03907251546736525;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f324a3c))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9281743709771796;
            result[1] += 0.07182562902282036;
          } else {
            result[0] += 0.21962444771723122;
            result[1] += 0.7803755522827688;
          }
        } else {
          if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
            result[0] += 0.9956626543619187;
            result[1] += 0.00433734563808127;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4227f4))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9339542760372566;
            result[1] += 0.06604572396274344;
          } else {
            result[0] += 0.2755119600757185;
            result[1] += 0.7244880399242816;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9973487330296058;
            result[1] += 0.0026512669703941854;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e83b31a))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e11fd22))) ) ) {
            result[0] += 0.4273224043715847;
            result[1] += 0.5726775956284152;
          } else {
            result[0] += 0.945353504167953;
            result[1] += 0.05464649583204693;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            result[0] += 0.9981917855400246;
            result[1] += 0.0018082144599753163;
          } else {
            result[0] += 0.9556440411149181;
            result[1] += 0.04435595888508195;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += 0.8973200843119542;
            result[1] += 0.10267991568804577;
          } else {
            result[0] += 0.0990286661928453;
            result[1] += 0.9009713338071547;
          }
        }
      } else {
        if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b6c47))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.999872250481964;
            result[1] += 0.00012774951803590923;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
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
    if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8603ba))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9620598317232782;
            result[1] += 0.03794016827672172;
          } else {
            result[0] += 0.3742478941034898;
            result[1] += 0.6257521058965102;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
            result[0] += 0.9538443750722627;
            result[1] += 0.04615562492773731;
          } else {
            result[0] += 0.17839246341952295;
            result[1] += 0.821607536580477;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
          if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
            result[0] += 0.990990990990991;
            result[1] += 0.009009009009009009;
          } else {
            result[0] += 0.579958819492107;
            result[1] += 0.4200411805078929;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9780451500868271;
            result[1] += 0.02195484991317291;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += 0.018691588785046728;
            result[1] += 0.9813084112149533;
          } else {
            result[0] += 0.7635158702476457;
            result[1] += 0.2364841297523544;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
            result[0] += 0.5011037527593819;
            result[1] += 0.4988962472406181;
          } else {
            result[0] += 0.002953953084274544;
            result[1] += 0.9970460469157254;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f367fe8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.999127740158384;
            result[1] += 0.0008722598416159761;
          }
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebb0926))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 0.9855411348278451;
            result[1] += 0.014458865172154885;
          } else {
            result[0] += 0.5953998954521693;
            result[1] += 0.40460010454783063;
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
          if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f521b58))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.005221932114882507;
            result[1] += 0.9947780678851175;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb5c326))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9986301369863013;
            result[1] += 0.0013698630136986301;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0.22926829268292684;
            result[1] += 0.7707317073170732;
          } else {
            result[0] += 0.9837626168855281;
            result[1] += 0.016237383114471864;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e76870a))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e92d24c))) ) ) {
            result[0] += 0.5242718446601942;
            result[1] += 0.47572815533980584;
          } else {
            result[0] += 0.07279344858962693;
            result[1] += 0.9272065514103731;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9941360512879573;
            result[1] += 0.005863948712042689;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9858451290591174;
            result[1] += 0.014154870940882597;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.981875;
            result[1] += 0.018125;
          } else {
            result[0] += 0.03302850634777074;
            result[1] += 0.9669714936522292;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
            result[0] += 0.9993984430290163;
            result[1] += 0.0006015569709837226;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
      if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb7fb6c))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 0.4363801609971436;
            result[1] += 0.5636198390028564;
          } else {
            result[0] += 0.894580549368968;
            result[1] += 0.10541945063103192;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9985459239214954;
            result[1] += 0.0014540760785045567;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6293aa))) ) ) {
      if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0c9578))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4a0f28))) ) ) {
            result[0] += 0.0018796992481203006;
            result[1] += 0.9981203007518797;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0.8181818181818182;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed2f6fa))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec96f46))) ) ) {
          if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4635de))) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
            result[0] += 0.0033755274261603376;
            result[1] += 0.9966244725738397;
          } else {
            result[0] += 0.12371134020618557;
            result[1] += 0.8762886597938144;
          }
        }
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            result[0] += 0.013888888888888888;
            result[1] += 0.9861111111111112;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0c7d46))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9681277147853556;
            result[1] += 0.03187228521464433;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0dcf64))) ) ) {
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
        if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9995034011248543;
            result[1] += 0.0004965988751458037;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
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
      if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f34ff90))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9975997951825223;
            result[1] += 0.002400204817477758;
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
            result[0] += 0.9981129661613254;
            result[1] += 0.0018870338386745985;
          } else {
            result[0] += 0.6876690637989048;
            result[1] += 0.3123309362010952;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9810374484488011;
            result[1] += 0.01896255155119889;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            result[0] += 0.9788505747126437;
            result[1] += 0.021149425287356322;
          } else {
            result[0] += 0.29578454332552695;
            result[1] += 0.704215456674473;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb8b858))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e16a024))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9925373134328358;
            result[1] += 0.007462686567164179;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9818930041152263;
            result[1] += 0.01810699588477366;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eaaabab))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9945054945054945;
            result[1] += 0.005494505494505495;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.12108559498956159;
            result[1] += 0.8789144050104384;
          }
        }
      }
    } else {
      if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x3890c900))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9999127562784321;
            result[1] += 8.724372156789431e-05;
          }
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9887238231609092;
            result[1] += 0.011276176839090747;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3dad68))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9961593260236635;
            result[1] += 0.0038406739763364927;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0.3006396588486141;
            result[1] += 0.6993603411513859;
          } else {
            result[0] += 0.9601219742813918;
            result[1] += 0.03987802571860817;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6880a2))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
            result[0] += 0.9998478238815055;
            result[1] += 0.00015217611849447092;
          } else {
            result[0] += 0.9480620155038759;
            result[1] += 0.05193798449612403;
          }
        }
      } else {
        if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebf8a7a))) ) ) {
            result[0] += 0.9735576923076923;
            result[1] += 0.026442307692307692;
          } else {
            result[0] += 0.9207350521119034;
            result[1] += 0.07926494788809654;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8216457960644007;
            result[1] += 0.17835420393559928;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9789029535864979;
            result[1] += 0.02109704641350211;
          } else {
            result[0] += 0.005399082156033475;
            result[1] += 0.9946009178439665;
          }
        } else {
          if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f393ce4))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9777845404747413;
            result[1] += 0.022215459525258673;
          }
        }
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9984276729559748;
            result[1] += 0.0015723270440251573;
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
            result[0] += 0.8002018163471241;
            result[1] += 0.19979818365287588;
          } else {
            result[0] += 0.2727272727272727;
            result[1] += 0.7272727272727273;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9989310412530814;
            result[1] += 0.0010689587469185629;
          }
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            result[0] += 0.9372067485275033;
            result[1] += 0.06279325147249676;
          } else {
            result[0] += 0.5170973232245087;
            result[1] += 0.48290267677549126;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9996474735605171;
            result[1] += 0.00035252643948296123;
          }
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cfa2b2b))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0.2222222222222222;
          } else {
            result[0] += 0.997957625325446;
            result[1] += 0.0020423746745540355;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.7441809876006091;
            result[1] += 0.2558190123993909;
          }
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            result[0] += 0.9934430285784981;
            result[1] += 0.0065569714215019176;
          } else {
            result[0] += 0.9003129190880643;
            result[1] += 0.09968708091193562;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e22fb72))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb1b232))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9915068334395669;
            result[1] += 0.008493166560433103;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8dbd57))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
            result[0] += 0.9512195121951219;
            result[1] += 0.04878048780487805;
          } else {
            result[0] += 0.000966183574879227;
            result[1] += 0.9990338164251208;
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.4367816091954023;
            result[1] += 0.5632183908045977;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f78b606))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 0.43622350674373794;
            result[1] += 0.563776493256262;
          } else {
            result[0] += 0.9872434943859149;
            result[1] += 0.012756505614085138;
          }
        } else {
          if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
            result[0] += 0.9992145266367879;
            result[1] += 0.000785473363212124;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5f5e7e))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            result[0] += 0.9815124570824897;
            result[1] += 0.018487542917510345;
          } else {
            result[0] += 0.8853070594987564;
            result[1] += 0.11469294050124354;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8969764339706536;
            result[1] += 0.10302356602934637;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e891ac6))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.04395604395604396;
            result[1] += 0.9560439560439561;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9932773109243698;
            result[1] += 0.0067226890756302525;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea757a2))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
            result[0] += 0.9977777777777778;
            result[1] += 0.0022222222222222222;
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
  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f45f0c0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e92d24c))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
            result[0] += 0.7527156549520767;
            result[1] += 0.24728434504792332;
          } else {
            result[0] += 0.009213492032108823;
            result[1] += 0.9907865079678911;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 0.9035639412997903;
            result[1] += 0.09643605870020965;
          } else {
            result[0] += 0.4523290132169896;
            result[1] += 0.5476709867830104;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9991777153015435;
            result[1] += 0.0008222846984564542;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9297936990244683;
            result[1] += 0.07020630097553174;
          } else {
            result[0] += 0.28487544483985766;
            result[1] += 0.7151245551601424;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9979610967893133;
            result[1] += 0.002038903210686665;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb5c326))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb190d6))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += 0.9995688952065808;
            result[1] += 0.0004311047934192436;
          } else {
            result[0] += 0.9602448540293287;
            result[1] += 0.039755145970671334;
          }
        } else {
          if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
            result[0] += 0.6953010843651465;
            result[1] += 0.3046989156348535;
          } else {
            result[0] += 0.9884508313896622;
            result[1] += 0.011549168610337822;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
          result[0] += 0;
          result[1] += 1;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.976172647504944;
            result[1] += 0.023827352495055968;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb7f29b))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb5c326))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
          if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f54e7ca))) ) ) {
            result[0] += 0.025210084033613446;
            result[1] += 0.9747899159663865;
          } else {
            result[0] += 0.20689655172413793;
            result[1] += 0.7931034482758621;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e83d7d8))) ) ) {
            result[0] += 0.9977272727272727;
            result[1] += 0.0022727272727272726;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e16a024))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52bb8a))) ) ) {
            result[0] += 0.9998730891260456;
            result[1] += 0.00012691087395442745;
          } else {
            result[0] += 0.9066666666666666;
            result[1] += 0.09333333333333334;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40971e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e947076))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ed262))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 0.44604708123554226;
            result[1] += 0.5539529187644577;
          } else {
            result[0] += 0.9658064246277397;
            result[1] += 0.03419357537226033;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9915147087746903;
            result[1] += 0.00848529122530977;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
            result[0] += 0.8024158757549612;
            result[1] += 0.19758412424503882;
          } else {
            result[0] += 0.9963141025641026;
            result[1] += 0.003685897435897436;
          }
        }
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb505da))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ad55fa0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea98f88))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9999884474532411;
            result[1] += 1.1552546758933007e-05;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e913962))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
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
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed9bcca))) ) ) {
            result[0] += 0.9134708375094512;
            result[1] += 0.08652916249054879;
          } else {
            result[0] += 0.9996396785933053;
            result[1] += 0.00036032140669477175;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f51edcc))) ) ) {
            result[0] += 0.1323529411764706;
            result[1] += 0.8676470588235294;
          } else {
            result[0] += 0.625;
            result[1] += 0.375;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb4dc48))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebae79c))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073652))) ) ) {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.7230769230769231;
            result[1] += 0.27692307692307694;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
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
    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5a93fc))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e805e98))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4e69d8))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4d78d6))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f4268f5))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            result[0] += 0.9516691579471849;
            result[1] += 0.04833084205281515;
          } else {
            result[0] += 0.2596235373918942;
            result[1] += 0.7403764626081059;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9963105662580268;
            result[1] += 0.0036894337419731463;
          }
        }
      }
    }
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
            result[0] += 0.9920814479638009;
            result[1] += 0.007918552036199095;
          } else {
            result[0] += 0.9996957193802413;
            result[1] += 0.0003042806197587663;
          }
        }
      }
    } else {
      if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 0.8959961969152758;
            result[1] += 0.10400380308472428;
          } else {
            result[0] += 0.1073972602739726;
            result[1] += 0.8926027397260274;
          }
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f48f2de))) ) ) {
            result[0] += 0.9483423557301065;
            result[1] += 0.0516576442698935;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0.9444444444444444;
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
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee2f0e5))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9809131229685807;
            result[1] += 0.019086877031419286;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9922959863039756;
            result[1] += 0.007704013696024348;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e0c14da))) ) ) {
            result[0] += 0.9987841945288753;
            result[1] += 0.0012158054711246201;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8038d9))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9377625641823557;
            result[1] += 0.062237435817644314;
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 0.9615485221030604;
            result[1] += 0.038451477896939576;
          } else {
            result[0] += 0.013690127245767096;
            result[1] += 0.9863098727542329;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
            result[0] += 0.9814818163734018;
            result[1] += 0.018518183626598187;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e64a32c))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.992818671454219;
            result[1] += 0.00718132854578097;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += 0.9383003492433062;
            result[1] += 0.06169965075669383;
          } else {
            result[0] += 0.01806676005990049;
            result[1] += 0.9819332399400995;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 0.7777777777777778;
            result[1] += 0.2222222222222222;
          } else {
            result[0] += 0.001616513305147973;
            result[1] += 0.998383486694852;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
            result[0] += 0.9992704933768478;
            result[1] += 0.0007295066231522365;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
            result[0] += 0.9996733996583258;
            result[1] += 0.0003266003416742036;
          } else {
            result[0] += 0.8532974427994616;
            result[1] += 0.14670255720053835;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += 0.9550893011964626;
            result[1] += 0.04491069880353737;
          } else {
            result[0] += 0.6747829769214483;
            result[1] += 0.32521702307855177;
          }
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
            result[0] += 0.13850627486991124;
            result[1] += 0.8614937251300888;
          } else {
            result[0] += 0.0572544184134813;
            result[1] += 0.9427455815865187;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea8e542))) ) ) {
            result[0] += 0.9999534856677714;
            result[1] += 4.6514332228617944e-05;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += 0.15789473684210525;
            result[1] += 0.8421052631578947;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1320e))) ) ) {
            result[0] += 0.8580946035976016;
            result[1] += 0.1419053964023984;
          } else {
            result[0] += 0.9341344691207788;
            result[1] += 0.06586553087922117;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.9175991861648016;
            result[1] += 0.08240081383519837;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9699248120300752;
            result[1] += 0.03007518796992481;
          } else {
            result[0] += 0.0022254092280302655;
            result[1] += 0.9977745907719697;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f414558))) ) ) {
            result[0] += 0.9822748014745286;
            result[1] += 0.017725198525471345;
          } else {
            result[0] += 0.5120547945205479;
            result[1] += 0.4879452054794521;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f36144d))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9816896803239518;
            result[1] += 0.01831031967604819;
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9530641752863975;
            result[1] += 0.04693582471360249;
          } else {
            result[0] += 0.6918187744458931;
            result[1] += 0.30818122555410693;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9813084112149533;
            result[1] += 0.018691588785046728;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eab0a81))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9997799423217243;
            result[1] += 0.00022005767827567435;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.998000518000518;
            result[1] += 0.0019994819994819993;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += 0.02571283095723014;
            result[1] += 0.9742871690427699;
          } else {
            result[0] += 0.4597191426459719;
            result[1] += 0.5402808573540281;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e88553b))) ) ) {
            result[0] += 0.7982239208633094;
            result[1] += 0.20177607913669066;
          } else {
            result[0] += 0.9968501481365976;
            result[1] += 0.0031498518634024636;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6810810810810811;
            result[1] += 0.31891891891891894;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f45783c))) ) ) {
            result[0] += 0.9764784946236559;
            result[1] += 0.023521505376344086;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.9074768692173043;
            result[1] += 0.09252313078269567;
          }
        } else {
          if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
            result[0] += 0.9258226954308119;
            result[1] += 0.07417730456918817;
          } else {
            result[0] += 0.9921428796819286;
            result[1] += 0.007857120318071377;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
            result[0] += 0.6806118782403368;
            result[1] += 0.31938812175966325;
          } else {
            result[0] += 0.08116378229245047;
            result[1] += 0.9188362177075495;
          }
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f414558))) ) ) {
            result[0] += 0.9811873082552572;
            result[1] += 0.018812691744742784;
          } else {
            result[0] += 0.516872890888639;
            result[1] += 0.4831271091113611;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9577970667464831;
            result[1] += 0.042202933253516914;
          }
        }
      }
    }
  } else {
    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4b7b34))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
        if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f47c300))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.03225806451612903;
            result[1] += 0.967741935483871;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0a43f6))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebc9450))) ) ) {
          if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f686204))) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0.14285714285714285;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6111111111111112;
            result[1] += 0.3888888888888889;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e68b814))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9942011982267014;
            result[1] += 0.005798801773298585;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8941275167785235;
            result[1] += 0.10587248322147651;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            result[0] += 0.7485074626865672;
            result[1] += 0.25149253731343285;
          } else {
            result[0] += 0.00616999397184497;
            result[1] += 0.9938300060281551;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f522de3))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
            result[0] += 0.9934923289464117;
            result[1] += 0.006507671053588308;
          } else {
            result[0] += 0.6923076923076923;
            result[1] += 0.3076923076923077;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb0f485))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e809c0e))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6cab8b))) ) ) {
            result[0] += 0.8780371605526441;
            result[1] += 0.12196283944735588;
          } else {
            result[0] += 0.9949417535254446;
            result[1] += 0.0050582464745554875;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0.00024787242832355615;
            result[1] += 0.9997521275716764;
          } else {
            result[0] += 0.4450906602805337;
            result[1] += 0.5549093397194663;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8478a5))) ) ) {
          if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
            result[0] += 0.8511549723457326;
            result[1] += 0.14884502765426744;
          } else {
            result[0] += 0.47568912710566613;
            result[1] += 0.5243108728943339;
          }
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95c040))) ) ) {
            result[0] += 0.6911134903640257;
            result[1] += 0.3088865096359743;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
            result[0] += 0.984766050054407;
            result[1] += 0.015233949945593036;
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0c7d46))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.010309278350515464;
            result[1] += 0.9896907216494846;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae7f22c))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
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
    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3e61f6))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9991899554475496;
            result[1] += 0.0008100445524503848;
          } else {
            result[0] += 0.1767328739359546;
            result[1] += 0.8232671260640454;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
            result[0] += 0.9452914798206278;
            result[1] += 0.054708520179372194;
          } else {
            result[0] += 0.6887966804979253;
            result[1] += 0.3112033195020747;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e982aca))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9992602910046665;
            result[1] += 0.000739708995333538;
          }
        }
      }
    }
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae8f0da))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e7628e0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068da3))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9772146415421269;
            result[1] += 0.02278535845787308;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.983533716675379;
            result[1] += 0.016466283324621016;
          } else {
            result[0] += 0.2976948097864517;
            result[1] += 0.7023051902135483;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9942857142857143;
            result[1] += 0.005714285714285714;
          } else {
            result[0] += 0.0068411781573880625;
            result[1] += 0.993158821842612;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f51b565))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e02ce3f))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
            result[0] += 0.9993107573866001;
            result[1] += 0.0006892426133999168;
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
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9984576401894899;
            result[1] += 0.0015423598105100804;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb38ba0))) ) ) {
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 0.8746598125188993;
            result[1] += 0.1253401874811007;
          } else {
            result[0] += 0.6932707355242567;
            result[1] += 0.30672926447574334;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.8539325842696629;
            result[1] += 0.14606741573033707;
          } else {
            result[0] += 0.08130081300813008;
            result[1] += 0.9186991869918699;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            result[0] += 0.02531645569620253;
            result[1] += 0.9746835443037974;
          } else {
            result[0] += 0.9985473561882626;
            result[1] += 0.001452643811737362;
          }
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
            result[0] += 0.9464598448836627;
            result[1] += 0.05354015511633725;
          } else {
            result[0] += 0.8348387096774194;
            result[1] += 0.16516129032258065;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
            result[0] += 0.9622074296757569;
            result[1] += 0.037792570324243074;
          } else {
            result[0] += 0.763953488372093;
            result[1] += 0.23604651162790696;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9782082324455206;
            result[1] += 0.021791767554479417;
          } else {
            result[0] += 0.026210153482880756;
            result[1] += 0.9737898465171192;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e131598))) ) ) {
          if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f5f4b62))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9923314881146207;
            result[1] += 0.007668511885379355;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1661c2))) ) ) {
            result[0] += 0.9838383838383838;
            result[1] += 0.01616161616161616;
          } else {
            result[0] += 0.03585196607555898;
            result[1] += 0.964148033924441;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e01c06c))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eba4384))) ) ) {
        if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e23c8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
            result[0] += 0.7643209318167858;
            result[1] += 0.23567906818321413;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9977011494252873;
            result[1] += 0.0022988505747126436;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb35104))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4653b0))) ) ) {
            result[0] += 0.42857142857142855;
            result[1] += 0.5714285714285714;
          } else {
            result[0] += 0.9387755102040817;
            result[1] += 0.061224489795918366;
          }
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
        if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f686204))) ) ) {
          if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6365a0))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0b0981))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f425b6a))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 0.59688995215311;
            result[1] += 0.40311004784689;
          } else {
            result[0] += 0.9998233435863331;
            result[1] += 0.0001766564136669715;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
            result[0] += 0.6265470554032727;
            result[1] += 0.3734529445967273;
          } else {
            result[0] += 0.9963300614569074;
            result[1] += 0.0036699385430926513;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6cab8b))) ) ) {
            result[0] += 0.9849468992983121;
            result[1] += 0.015053100701687843;
          } else {
            result[0] += 0.9976292543517797;
            result[1] += 0.002370745648220317;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f43d275))) ) ) {
            result[0] += 0.13333333333333333;
            result[1] += 0.8666666666666667;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb2cdf4))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9979612640163099;
            result[1] += 0.0020387359836901123;
          }
        }
      } else {
        if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ed262))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += 0.9948453608247423;
            result[1] += 0.005154639175257732;
          } else {
            result[0] += 0.720513687056438;
            result[1] += 0.279486312943562;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 0.6568364611260054;
            result[1] += 0.34316353887399464;
          } else {
            result[0] += 0.9987929758984543;
            result[1] += 0.0012070241015457695;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39c178))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            result[0] += 0.9477938699898956;
            result[1] += 0.052206130010104414;
          } else {
            result[0] += 0.27296405625976733;
            result[1] += 0.7270359437402327;
          }
        } else {
          if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
            result[0] += 0.9964130797464131;
            result[1] += 0.00358692025358692;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e9f1ca7))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9674540682414698;
            result[1] += 0.03254593175853018;
          }
        } else {
          if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
            result[0] += 0.9996884697875603;
            result[1] += 0.00031153021243964104;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ad8b0ba))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9856788942976356;
            result[1] += 0.014321105702364395;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.6981776765375854;
            result[1] += 0.30182232346241455;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0.0022172949002217295;
            result[1] += 0.9977827050997783;
          } else {
            result[0] += 0.8324708926261319;
            result[1] += 0.16752910737386806;
          }
        }
      }
    } else {
      if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38853d80))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed212ea))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9999300136473388;
            result[1] += 6.998635266123106e-05;
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
            result[0] += 0.9037887333289099;
            result[1] += 0.09621126667109017;
          } else {
            result[0] += 0.9977476093945165;
            result[1] += 0.0022523906054835474;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4eb6c9))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e76499a))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.937205906214506;
            result[1] += 0.06279409378549408;
          } else {
            result[0] += 0.2834885386819484;
            result[1] += 0.7165114613180515;
          }
        } else {
          if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
            result[0] += 0.995124340969533;
            result[1] += 0.004875659030467037;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f488d86))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.0054869684499314125;
            result[1] += 0.9945130315500685;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0.0012738853503184713;
            result[1] += 0.9987261146496815;
          } else {
            result[0] += 0.9727468185251903;
            result[1] += 0.027253181474809693;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f389c32))) ) ) {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f4a4fa6))) ) ) {
            result[0] += 0.04572564612326044;
            result[1] += 0.9542743538767395;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.923728813559322;
            result[1] += 0.07627118644067797;
          }
        }
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec72078))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e0c8ab0))) ) ) {
          if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f33afb4))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9983250344678282;
            result[1] += 0.001674965532171872;
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
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f41984c))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0c7d46))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9644984644984645;
            result[1] += 0.0355015355015355;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f389c32))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0.015151515151515152;
            result[1] += 0.9848484848484849;
          } else {
            result[0] += 0.6786885245901639;
            result[1] += 0.32131147540983607;
          }
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ed262))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9925187032418953;
            result[1] += 0.007481296758104738;
          }
        }
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ad30d33))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
            result[0] += 0.999202631316655;
            result[1] += 0.0007973686833449616;
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
          if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f794b48))) ) ) {
            result[0] += 0.005025125628140704;
            result[1] += 0.9949748743718593;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0.9259259259259259;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            result[0] += 0.9058516801853997;
            result[1] += 0.09414831981460023;
          } else {
            result[0] += 0.5159744408945687;
            result[1] += 0.4840255591054313;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
            result[0] += 0.04915514592933948;
            result[1] += 0.9508448540706606;
          } else {
            result[0] += 0.007112375533428165;
            result[1] += 0.9928876244665719;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
            result[0] += 0.9965833934112779;
            result[1] += 0.0034166065887220637;
          } else {
            result[0] += 0.8848167539267016;
            result[1] += 0.11518324607329843;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4d78d6))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += 0.9197949396394907;
            result[1] += 0.08020506036050934;
          } else {
            result[0] += 0.5013918960717599;
            result[1] += 0.49860810392824;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9954905436026293;
            result[1] += 0.004509456397370605;
          }
        }
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
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
        if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
          if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4e7db2))) ) ) {
            result[0] += 0.9871382636655949;
            result[1] += 0.012861736334405145;
          } else {
            result[0] += 0.9995313854588908;
            result[1] += 0.0004686145411092106;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f370d5c))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f3397d0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 0.7406811477607937;
            result[1] += 0.2593188522392062;
          } else {
            result[0] += 0.9987590646449761;
            result[1] += 0.0012409353550238492;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            result[0] += 0.9634268537074149;
            result[1] += 0.03657314629258517;
          } else {
            result[0] += 0.5019059720457433;
            result[1] += 0.49809402795425667;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec5edc8))) ) ) {
            result[0] += 0.9990280737168704;
            result[1] += 0.0009719262831296027;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9997140783425341;
            result[1] += 0.00028592165746585434;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e11fd22))) ) ) {
            result[0] += 0.7297063328228008;
            result[1] += 0.27029366717719916;
          } else {
            result[0] += 0.9955235906771315;
            result[1] += 0.0044764093228684835;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea91902))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.18181818181818182;
            result[1] += 0.8181818181818182;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e64f32e))) ) ) {
            result[0] += 0.8055555555555556;
            result[1] += 0.19444444444444445;
          } else {
            result[0] += 0.09375;
            result[1] += 0.90625;
          }
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
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f41f48b))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            result[0] += 0.9988637002868875;
            result[1] += 0.0011362997131124488;
          } else {
            result[0] += 0.9158717960309208;
            result[1] += 0.08412820396907915;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
            result[0] += 0.11513949013949014;
            result[1] += 0.8848605098605099;
          } else {
            result[0] += 0.9854623359730671;
            result[1] += 0.014537664026932936;
          }
        } else {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
            result[0] += 0.04745617785378367;
            result[1] += 0.9525438221462164;
          } else {
            result[0] += 0.10682321239534212;
            result[1] += 0.8931767876046579;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.3048128342245989;
            result[1] += 0.6951871657754011;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0677c))) ) ) {
            result[0] += 0.9285714285714286;
            result[1] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f420766))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += 0.9857142857142858;
            result[1] += 0.014285714285714285;
          } else {
            result[0] += 0.9998882581683279;
            result[1] += 0.00011174183167210477;
          }
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
            result[0] += 0.6886392009987515;
            result[1] += 0.31136079900124847;
          } else {
            result[0] += 0.9982512738565441;
            result[1] += 0.0017487261434558446;
          }
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
            result[0] += 0.9999500212409725;
            result[1] += 4.997875902741335e-05;
          } else {
            result[0] += 0.9990295300152502;
            result[1] += 0.0009704699847497574;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0a43f6))) ) ) {
            result[0] += 0.8978361120964882;
            result[1] += 0.10216388790351189;
          } else {
            result[0] += 0.9976032708303961;
            result[1] += 0.0023967291696038347;
          }
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0.0033500837520938024;
            result[1] += 0.9966499162479062;
          } else {
            result[0] += 0.9079557616839101;
            result[1] += 0.0920442383160899;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e22fb72))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9992372234935164;
            result[1] += 0.0007627765064836003;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
            result[0] += 0.9899159663865547;
            result[1] += 0.010084033613445379;
          } else {
            result[0] += 0.33520336605890605;
            result[1] += 0.664796633941094;
          }
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8199346405228758;
            result[1] += 0.18006535947712418;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9984356056161758;
            result[1] += 0.001564394383824162;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50881c))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
            result[0] += 0.015748031496062992;
            result[1] += 0.984251968503937;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f324a3c))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += 0.9975236556056617;
            result[1] += 0.0024763443943382948;
          } else {
            result[0] += 0.8581195424084479;
            result[1] += 0.14188045759155216;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f444afa))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            result[0] += 0.776;
            result[1] += 0.224;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1ef9e))) ) ) {
            result[0] += 0.5;
            result[1] += 0.5;
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
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9e003a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0.3891891891891892;
            result[1] += 0.6108108108108108;
          } else {
            result[0] += 0.9999189016972716;
            result[1] += 8.109830272837861e-05;
          }
        }
      }
    }
  }
  if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e23c8))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
            result[0] += 0.9993404380879647;
            result[1] += 0.0006595619120352692;
          } else {
            result[0] += 0.9122999769630168;
            result[1] += 0.08770002303698322;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f43d27c))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
          if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.006097560975609756;
            result[1] += 0.9939024390243902;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9960652235519805;
            result[1] += 0.003934776448019532;
          }
        } else {
          if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
            result[0] += 0.2631578947368421;
            result[1] += 0.7368421052631579;
          } else {
            result[0] += 0.9406810035842293;
            result[1] += 0.05931899641577061;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8664022280361212;
            result[1] += 0.13359777196387881;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1ef5a0))) ) ) {
            result[0] += 0.9998719672236093;
            result[1] += 0.00012803277639075603;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eb6a79e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
            result[0] += 0.9857638729605334;
            result[1] += 0.014236127039466643;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f475a41))) ) ) {
        if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2f0d92))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea662e8))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
            result[0] += 0.968964504153201;
            result[1] += 0.031035495846798964;
          } else {
            result[0] += 0.8540816881492359;
            result[1] += 0.14591831185076412;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
            result[0] += 0.9998147762265287;
            result[1] += 0.00018522377347132503;
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec2bc12))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.998836329126795;
            result[1] += 0.0011636708732050659;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7c951c))) ) ) {
            result[0] += 0.6168005354752343;
            result[1] += 0.3831994645247657;
          } else {
            result[0] += 0.9926103455162772;
            result[1] += 0.007389654483722788;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8603ba))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0.6696401107351584;
            result[1] += 0.3303598892648416;
          } else {
            result[0] += 0.9522998296422487;
            result[1] += 0.04770017035775128;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.47110006215040395;
            result[1] += 0.528899937849596;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e169f44))) ) ) {
          if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f34ff90))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9794607776724021;
            result[1] += 0.020539222327597886;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9670014347202296;
            result[1] += 0.03299856527977044;
          }
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e9db))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9f32e9))) ) ) {
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
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9969673995451099;
            result[1] += 0.003032600454890068;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
            result[0] += 0.9997777777777778;
            result[1] += 0.00022222222222222223;
          } else {
            result[0] += 0.9756992205410362;
            result[1] += 0.024300779458963778;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8590596057943481;
            result[1] += 0.14094039420565185;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8195093457943925;
            result[1] += 0.18049065420560748;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.39919354838709675;
            result[1] += 0.6008064516129032;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f3397d0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9998445795057628;
            result[1] += 0.00015542049423717167;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4fd360))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
            result[0] += 0.0008739265901664261;
            result[1] += 0.9991260734098336;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.7564402810304449;
            result[1] += 0.24355971896955503;
          }
        }
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9855420697020105;
            result[1] += 0.014457930297989445;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            result[0] += 0.7902955939765756;
            result[1] += 0.20970440602342444;
          } else {
            result[0] += 0.40074090215733277;
            result[1] += 0.5992590978426673;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae9ef89))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9983792544570502;
            result[1] += 0.0016207455429497568;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3acd945e))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea0aff2))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
            result[0] += 0.9973655323819978;
            result[1] += 0.0026344676180021956;
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
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += 0.0020512820512820513;
            result[1] += 0.997948717948718;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            result[0] += 0.9893587937162205;
            result[1] += 0.010641206283779521;
          } else {
            result[0] += 0.6802235929067078;
            result[1] += 0.3197764070932922;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2bcf5d))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f5db6))) ) ) {
            result[0] += 0.992517006802721;
            result[1] += 0.007482993197278911;
          } else {
            result[0] += 0.9995853776518554;
            result[1] += 0.000414622348144565;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78e24))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebc946c))) ) ) {
            result[0] += 0.06060606060606061;
            result[1] += 0.9393939393939394;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e54bd7e))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 0.9893937161977314;
            result[1] += 0.010606283802268567;
          } else {
            result[0] += 0.6718446601941748;
            result[1] += 0.32815533980582523;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9999772033009621;
            result[1] += 2.27966990379793e-05;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e8cb9))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eae5e2a))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0bd558))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f54c9f8))) ) ) {
            result[0] += 0.9864864864864865;
            result[1] += 0.013513513513513514;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cfa2b2b))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.004728132387706856;
            result[1] += 0.9952718676122931;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0.43814154511075093;
            result[1] += 0.561858454889249;
          } else {
            result[0] += 0.9888513197005442;
            result[1] += 0.011148680299455767;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f41984c))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073652))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += 0.9990534784666352;
            result[1] += 0.000946521533364884;
          } else {
            result[0] += 0.831504529052213;
            result[1] += 0.16849547094778702;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3adb2d58))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            result[0] += 0.7176470588235294;
            result[1] += 0.2823529411764706;
          } else {
            result[0] += 0.9997008640427074;
            result[1] += 0.0002991359572925895;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea70c21))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea5c7fe))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f41f48b))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9990327348606703;
            result[1] += 0.0009672651393296527;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
            result[0] += 0.6998958875585632;
            result[1] += 0.30010411244143675;
          } else {
            result[0] += 0.9955117193993461;
            result[1] += 0.004488280600653849;
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f392967))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += 0.9958304303553245;
            result[1] += 0.0041695696446754915;
          } else {
            result[0] += 0.9032721835643223;
            result[1] += 0.09672781643567772;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3eda4c68))) ) ) {
            result[0] += 0.9716373012462398;
            result[1] += 0.028362698753760206;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
            result[0] += 0.532724505327245;
            result[1] += 0.4672754946727549;
          } else {
            result[0] += 0.002023998843429232;
            result[1] += 0.9979760011565708;
          }
        }
      } else {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9879807692307693;
            result[1] += 0.01201923076923077;
          }
        } else {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
            result[0] += 0.4536082474226804;
            result[1] += 0.5463917525773195;
          } else {
            result[0] += 0.9983124188662916;
            result[1] += 0.0016875811337083513;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea0818c))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.993421052631579;
            result[1] += 0.006578947368421052;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebc317e))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9356428251455876;
            result[1] += 0.06435717485441242;
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 0.7326478149100257;
            result[1] += 0.26735218508997427;
          } else {
            result[0] += 0.16133486766398158;
            result[1] += 0.8386651323360184;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9980275207814775;
            result[1] += 0.001972479218522519;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ce09f37))) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9989397818657584;
            result[1] += 0.001060218134241662;
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
            result[0] += 0.7136066181010001;
            result[1] += 0.2863933818989999;
          } else {
            result[0] += 0.9988181031997694;
            result[1] += 0.001181896800230614;
          }
        }
      } else {
        if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2cada))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0.7757958521805923;
            result[1] += 0.2242041478194077;
          } else {
            result[0] += 0.9848907679322327;
            result[1] += 0.015109232067767224;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2f1d36))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9745882163424752;
            result[1] += 0.025411783657524868;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
            result[0] += 0.9968085106382979;
            result[1] += 0.0031914893617021275;
          } else {
            result[0] += 0.9161451814768461;
            result[1] += 0.08385481852315395;
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            result[0] += 0.8728476821192053;
            result[1] += 0.1271523178807947;
          } else {
            result[0] += 0.013236514522821577;
            result[1] += 0.9867634854771784;
          }
        }
      }
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73dc0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ad55fa0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eabc76e))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9998154321770928;
            result[1] += 0.00018456782290717392;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f38cdca))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 0.7028985507246377;
            result[1] += 0.2971014492753623;
          } else {
            result[0] += 0.9892637088631071;
            result[1] += 0.010736291136892864;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44c378))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ef746))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9887798036465638;
            result[1] += 0.011220196353436185;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e20efac))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f41f36e))) ) ) {
            result[0] += 0.9999532912175811;
            result[1] += 4.6708782418814295e-05;
          } else {
            result[0] += 0.994729907773386;
            result[1] += 0.005270092226613966;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += 0.6140080486343009;
            result[1] += 0.38599195136569914;
          } else {
            result[0] += 0.998902464120485;
            result[1] += 0.0010975358795149502;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
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
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f425b6a))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e986942))) ) ) {
            result[0] += 0.5502371072910492;
            result[1] += 0.4497628927089508;
          } else {
            result[0] += 0.6436737066459989;
            result[1] += 0.3563262933540012;
          }
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f49dc3c))) ) ) {
            result[0] += 0.9973673174595779;
            result[1] += 0.002632682540422161;
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
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
            result[0] += 0.004701457451810061;
            result[1] += 0.99529854254819;
          } else {
            result[0] += 0.8947089191340013;
            result[1] += 0.10529108086599874;
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            result[0] += 0.009967831090571339;
            result[1] += 0.9900321689094287;
          } else {
            result[0] += 0.9849844350851492;
            result[1] += 0.01501556491485076;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e22fb72))) ) ) {
          if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
            result[0] += 0.9951112872809388;
            result[1] += 0.004888712719061175;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e2046fd))) ) ) {
            result[0] += 0.9996782496782497;
            result[1] += 0.00032175032175032174;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7c1bd1))) ) ) {
        if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaec55a))) ) ) {
            result[0] += 0.9586129753914989;
            result[1] += 0.04138702460850112;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
            result[0] += 0.23714131023280996;
            result[1] += 0.7628586897671901;
          } else {
            result[0] += 0.6484893146647015;
            result[1] += 0.35151068533529845;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaec55a))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            result[0] += 0.90625;
            result[1] += 0.09375;
          } else {
            result[0] += 0.03759398496240601;
            result[1] += 0.9624060150375939;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += 0.005376344086021506;
            result[1] += 0.9946236559139785;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e93eb6e))) ) ) {
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
      if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.05904288377874456;
            result[1] += 0.9409571162212554;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.8030651340996169;
            result[1] += 0.19693486590038314;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9220479704797048;
            result[1] += 0.0779520295202952;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3a4aef))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 0.9991344286839418;
            result[1] += 0.0008655713160582974;
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f392967))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
          if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            result[0] += 0.9549155277377082;
            result[1] += 0.045084472262291876;
          } else {
            result[0] += 0.8119782443713636;
            result[1] += 0.1880217556286365;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
            result[0] += 0.9970187393526405;
            result[1] += 0.002981260647359455;
          } else {
            result[0] += 0.9999019072042152;
            result[1] += 9.809279578481243e-05;
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
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e76870a))) ) ) {
            result[0] += 0.9684663939533498;
            result[1] += 0.03153360604665023;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
            result[0] += 0.9996363636363637;
            result[1] += 0.0003636363636363636;
          } else {
            result[0] += 0.8557701931738565;
            result[1] += 0.14422980682614353;
          }
        }
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d9888))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
            result[0] += 0.9996703361394007;
            result[1] += 0.0003296638605992818;
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0.0004677997816934352;
            result[1] += 0.9995322002183066;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9fff5e))) ) ) {
            result[0] += 0.9793689320388349;
            result[1] += 0.02063106796116505;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
            result[0] += 0.07534246575342465;
            result[1] += 0.9246575342465754;
          } else {
            result[0] += 0.9534214313751145;
            result[1] += 0.04657856862488552;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
            result[0] += 0.9987805744323159;
            result[1] += 0.0012194255676840386;
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
