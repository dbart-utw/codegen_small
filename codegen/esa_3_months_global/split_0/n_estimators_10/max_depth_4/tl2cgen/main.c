
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
  if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2304814010858535767) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3653041869401931763) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7447038888931274414) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9964954720258032;
          result[1] += 0.0035045279741967496;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2858879715204238892) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
          result[0] += 0.8645728135730155;
          result[1] += 0.13542718642698445;
        } else {
          result[0] += 0.03711935248457507;
          result[1] += 0.9628806475154249;
        }
      } else {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.734235614538192749) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9950330104275931;
          result[1] += 0.0049669895724069844;
        }
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2805211693048477173) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8108993470668792725) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8118190765380859375) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.03125;
          result[1] += 0.96875;
        }
      }
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7352985739707946777) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6702883243560791016) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.8069133707984307;
          result[1] += 0.1930866292015693;
        }
      } else {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2272647097706794739) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9964685918701176;
          result[1] += 0.003531408129882439;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9418604651162791;
          result[1] += 0.05813953488372093;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1384864374995231628) ) ) {
          result[0] += 0.8426001635322976;
          result[1] += 0.15739983646770236;
        } else {
          result[0] += 0.009152253160629798;
          result[1] += 0.9908477468393702;
        }
      }
    } else {
      if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7401399314403533936) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
          result[0] += 0.966683115865252;
          result[1] += 0.03331688413474797;
        } else {
          result[0] += 0.8350077279752705;
          result[1] += 0.16499227202472952;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1591623052954673767) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
          result[0] += 0.9967695060586773;
          result[1] += 0.0032304939413227013;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
          result[0] += 0.003401360544217687;
          result[1] += 0.9965986394557823;
        } else {
          result[0] += 0.9797893538286365;
          result[1] += 0.020210646171363505;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2602400630712509155) ) ) {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
          result[0] += 0.8230491967631824;
          result[1] += 0.1769508032368176;
        } else {
          result[0] += 0.4460131180328833;
          result[1] += 0.5539868819671167;
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158466756343841553) ) ) {
          result[0] += 0.8518077075883989;
          result[1] += 0.14819229241160112;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7256083786487579346) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9811928053013569;
          result[1] += 0.018807194698643104;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          result[0] += 0.953757225433526;
          result[1] += 0.046242774566473986;
        } else {
          result[0] += 0.001316896513882284;
          result[1] += 0.9986831034861177;
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04574106819927692413) ) ) {
          result[0] += 0.9980890726152406;
          result[1] += 0.001910927384759379;
        } else {
          result[0] += 0.7470859907631405;
          result[1] += 0.25291400923685947;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3032366335391998291) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8823183178901672363) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3234125673770904541) ) ) {
          result[0] += 0.9896995336658624;
          result[1] += 0.010300466334137606;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001787317683920264244) ) ) {
          result[0] += 0.4276426627500108;
          result[1] += 0.5723573372499892;
        } else {
          result[0] += 0.8621275776915429;
          result[1] += 0.13787242230845706;
        }
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7597486972808837891) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          result[0] += 0.606792777300086;
          result[1] += 0.39320722269991404;
        } else {
          result[0] += 0.9977386210141298;
          result[1] += 0.0022613789858701755;
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
        if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7183859944343566895) ) ) {
          result[0] += 0.411522633744856;
          result[1] += 0.588477366255144;
        } else {
          result[0] += 0.8681318681318682;
          result[1] += 0.13186813186813187;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9260852561595619;
          result[1] += 0.07391474384043802;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7447038888931274414) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 0.9968200327442173;
          result[1] += 0.003179967255782713;
        }
      } else {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
          result[0] += 0.38931383894549665;
          result[1] += 0.6106861610545034;
        } else {
          result[0] += 0.8466989929130921;
          result[1] += 0.15330100708690786;
        }
      }
    } else {
      if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7522055208683013916) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
          result[0] += 0.9705882352941176;
          result[1] += 0.029411764705882353;
        } else {
          result[0] += 0.1549045716822015;
          result[1] += 0.8450954283177985;
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3637954890727996826) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          result[0] += 0.599377051940399;
          result[1] += 0.40062294805960097;
        } else {
          result[0] += 0.9970821207924182;
          result[1] += 0.002917879207581817;
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3382305502891540527) ) ) {
          result[0] += 0.5433526011560693;
          result[1] += 0.45664739884393063;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_0/test_data.csv", "r");
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
