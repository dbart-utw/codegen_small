
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
  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eca2e64))) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
              if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                result[0] += 0.9972682571480604;
                result[1] += 0.0027317428519395373;
              } else {
                result[0] += 0.9067891552767197;
                result[1] += 0.0932108447232803;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6ad143))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9983152765538333;
                result[1] += 0.0016847234461666062;
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e8e07ac))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4db5a0))) ) ) {
                result[0] += 0.25;
                result[1] += 0.75;
              } else {
                result[0] += 0.9192618223760092;
                result[1] += 0.08073817762399077;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                result[0] += 0.7534039334341907;
                result[1] += 0.24659606656580937;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                result[0] += 0.5804195804195804;
                result[1] += 0.4195804195804196;
              } else {
                result[0] += 0;
                result[1] += 1;
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09da8c))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9903846153846154;
                result[1] += 0.009615384615384616;
              }
            } else {
              if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f76d84c))) ) ) {
                result[0] += 0.9969325153374233;
                result[1] += 0.003067484662576687;
              } else {
                result[0] += 0.9998594683218175;
                result[1] += 0.00014053167818245697;
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
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f322cd8))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += 0.9695130459048417;
                result[1] += 0.030486954095158364;
              } else {
                result[0] += 0.997186840665781;
                result[1] += 0.0028131593342189576;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eb86eca))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
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
        if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( ( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9719626168224299;
                result[1] += 0.028037383177570093;
              }
            } else {
              if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
                result[0] += 0.9518459069020867;
                result[1] += 0.048154093097913325;
              } else {
                result[0] += 0.9890202702702703;
                result[1] += 0.01097972972972973;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e867191))) ) ) {
                result[0] += 0.9984555984555985;
                result[1] += 0.0015444015444015444;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                result[0] += 0.7213114754098361;
                result[1] += 0.2786885245901639;
              } else {
                result[0] += 0.2384492830589485;
                result[1] += 0.7615507169410515;
              }
            }
          }
        } else {
          if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f5084ea))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049397))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0.985202492211838;
                result[1] += 0.014797507788161994;
              } else {
                result[0] += 0.9992408138475555;
                result[1] += 0.0007591861524445794;
              }
            }
          } else {
            if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6419ae))) ) ) {
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
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f36144d))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += 0.8181818181818182;
                result[1] += 0.18181818181818182;
              } else {
                result[0] += 0.4060873679230405;
                result[1] += 0.5939126320769594;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.928480529396793;
                result[1] += 0.07151947060320692;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0f1bba))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.999281777444689;
                result[1] += 0.0007182225553109435;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e81619a))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9e003a))) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e853ea0))) ) ) {
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
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e91fd23))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f404ae7))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6244f4))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                result[0] += 0.9954333600112989;
                result[1] += 0.004566639988701097;
              } else {
                result[0] += 0.9998865988149576;
                result[1] += 0.0001134011850423837;
              }
            }
          }
        }
      }
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e182b3a))) ) ) {
          if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0.6766068326577881;
                result[1] += 0.3233931673422119;
              } else {
                result[0] += 0.9569259962049336;
                result[1] += 0.043074003795066415;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03417a))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f80))) ) ) {
                result[0] += 0.9992301770592764;
                result[1] += 0.0007698229407236335;
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
    }
  }
  if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e4c4f))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
              if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += 0.9811169144234633;
                result[1] += 0.01888308557653676;
              } else {
                result[0] += 0.9133790737564322;
                result[1] += 0.08662092624356775;
              }
            } else {
              if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                result[0] += 0.10399590163934426;
                result[1] += 0.8960040983606558;
              } else {
                result[0] += 0.35997882477501325;
                result[1] += 0.6400211752249868;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
                result[0] += 0.9989313058678941;
                result[1] += 0.0010686941321058619;
              } else {
                result[0] += 0;
                result[1] += 1;
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
  
  // Average tree outputs
  result[0] /= 5;
  result[1] /= 5;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_3/test_data.csv", "r");
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
