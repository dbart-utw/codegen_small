
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0002000000094994902611) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3055450022220611572) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8627449870109558105) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.166665002703666687) ) ) {
          result[0] += 0.7692307692307693;
          result[1] += 0.23076923076923078;
        } else {
          result[0] += 0.125;
          result[1] += 0.875;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.983740001916885376) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9756500124931335449) ) ) {
          result[0] += 0.09722222222222222;
          result[1] += 0.9027777777777778;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4330900013446807861) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.584859997034072876) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
          result[0] += 0.07058823529411765;
          result[1] += 0.9294117647058824;
        } else {
          result[0] += 0.9;
          result[1] += 0.1;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.5669200047850608826) ) ) {
          result[0] += 0.9615384615384616;
          result[1] += 0.038461538461538464;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9882499873638153076) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.07142857142857142;
          result[1] += 0.9285714285714286;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9481199979782104492) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7237900048494338989) ) ) {
          result[0] += 0.2857142857142857;
          result[1] += 0.7142857142857143;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.292425006628036499) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3427699953317642212) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.2553400024771690369) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.92;
          result[1] += 0.08;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.833079993724822998) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.03125;
          result[1] += 0.96875;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9882499873638153076) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4921850003302097321) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06219499930739402771) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 0.02702702702702703;
          result[1] += 0.972972972972973;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9318049848079681396) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8091549873352050781) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5256149917840957642) ) ) {
          result[0] += 0.2222222222222222;
          result[1] += 0.7777777777777778;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.08721999824047088623) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2179500013589859009) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.05093999952077865601) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1360049992799758911) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.030303030303030304;
          result[1] += 0.9696969696969697;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7150949984788894653) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4086250066757202148) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 0.023809523809523808;
          result[1] += 0.9761904761904762;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.07860999926924705505) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01812000013887882233) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.579394996166229248) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07190000265836715698) ) ) {
          result[0] += 0.25;
          result[1] += 0.75;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1662300005555152893) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.188470005989074707) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.7204200029373168945) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          result[0] += 0.014388489208633094;
          result[1] += 0.9856115107913669;
        } else {
          result[0] += 0.6666666666666666;
          result[1] += 0.3333333333333333;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3976149857044219971) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3872549980878829956) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7805449962615966797) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8668549954891204834) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4723749905824661255) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04242424242424243;
          result[1] += 0.9575757575757575;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3303000032901763916) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4536300003528594971) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04340999945998191833) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3357000052928924561) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4154199957847595215) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9561049938201904297) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.02631578947368421;
          result[1] += 0.9736842105263158;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.03106500022113323212) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9538150131702423096) ) ) {
          result[0] += 0.03787878787878788;
          result[1] += 0.9621212121212122;
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5714285714285714;
          result[1] += 0.42857142857142855;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2915600091218948364) ) ) {
          result[0] += 0.17307692307692307;
          result[1] += 0.8269230769230769;
        } else {
          result[0] += 0.009259259259259259;
          result[1] += 0.9907407407407407;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9385949969291687012) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.570969998836517334) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5384615384615384;
          result[1] += 0.46153846153846156;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1705899983644485474) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1173599995672702789) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5236699879169464111) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.4444444444444444;
          result[1] += 0.5555555555555556;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.949954986572265625) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.02857142857142857;
          result[1] += 0.9714285714285714;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6467750072479248047) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.04477611940298507;
          result[1] += 0.9552238805970149;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2596349939703941345) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.3333333333333333;
          result[1] += 0.6666666666666666;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.04615999944508075714) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.180895000696182251) ) ) {
          result[0] += 0.42857142857142855;
          result[1] += 0.5714285714285714;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.08;
          result[1] += 0.92;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.684450000524520874) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.04780999943614006042) ) ) {
          result[0] += 0.5294117647058824;
          result[1] += 0.47058823529411764;
        } else {
          result[0] += 0.031007751937984496;
          result[1] += 0.9689922480620154;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3694349974393844604) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.1262550023384392262) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9820950031280517578) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1315250024199485779) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.01008499972522258759) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8571428571428571;
          result[1] += 0.14285714285714285;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.03463499993085861206) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4729650169610977173) ) ) {
          result[0] += 0.8;
          result[1] += 0.2;
        } else {
          result[0] += 0.05806451612903226;
          result[1] += 0.9419354838709677;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2399550005793571472) ) ) {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.05142999999225139618) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.5315800011157989502) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1607200050493702292) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8725500106811523438) ) ) {
          result[0] += 0.038461538461538464;
          result[1] += 0.9615384615384616;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4494450092315673828) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.09098999947309494019) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4369300007820129395) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07933499664068222046) ) ) {
          result[0] += 0.2;
          result[1] += 0.8;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1707299947738647461) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.045454545454545456;
          result[1] += 0.9545454545454546;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7636999785900115967) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1983349993824958801) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.2727272727272727;
          result[1] += 0.7272727272727273;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4541299939155578613) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.2116400003433227539) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6380699872970581055) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.4541999995708465576) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8289699852466583252) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1897749975323677063) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2143850028514862061) ) ) {
          result[0] += 0.8888888888888888;
          result[1] += 0.1111111111111111;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.009045000042533501983) ) ) {
          result[0] += 0.625;
          result[1] += 0.375;
        } else {
          result[0] += 0.9;
          result[1] += 0.1;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.562929987907409668) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.02583499997854232788) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1326549947261810303) ) ) {
          result[0] += 0.14285714285714285;
          result[1] += 0.8571428571428571;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9474450051784515381) ) ) {
          result[0] += 0.0234375;
          result[1] += 0.9765625;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.138994995504617691) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5370100140571594238) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.16666666666666666;
        } else {
          result[0] += 0.056962025316455694;
          result[1] += 0.9430379746835443;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.927460014820098877) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_4/test_data.csv", "r");
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
