
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
    result[1] += 4294967295;
  } else {
    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
        result[0] += 0;
        result[1] += 4294967295;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 4294967295;
        } else {
          result[0] += 4294967295;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9f9924))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eb2e968))) ) ) {
              result[0] += 0;
              result[1] += 4294967295;
            } else {
              result[0] += 4294967295;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f444afa))) ) ) {
                result[0] += 4294967295;
                result[1] += 0;
              } else {
                if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3e5b512c))) ) ) {
                  result[0] += 4294967295;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 4294967295;
                }
              }
            } else {
              if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7e6ce4))) ) ) {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae8f0da))) ) ) {
                  result[0] += 4294967295;
                  result[1] += 0;
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
                    result[0] += 4294967295;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 4294967295;
                  }
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f52e2a6))) ) ) {
                  result[0] += 0;
                  result[1] += 4294967295;
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4733b9))) ) ) {
                    result[0] += 0;
                    result[1] += 4294967295;
                  } else {
                    result[0] += 4294967295;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d035998))) ) ) {
            result[0] += 4294967295;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 4294967295;
          }
        }
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += 0;
          result[1] += 4294967295;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f485169))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                      result[0] += 3374617160;
                      result[1] += 920350134;
                    } else {
                      result[0] += 4294967295;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 4294967295;
                    } else {
                      result[0] += 4287422337;
                      result[1] += 7544957;
                    }
                  }
                } else {
                  if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
                    result[0] += 4294967295;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 4140403185;
                      result[1] += 154564109;
                    } else {
                      result[0] += 3288269869;
                      result[1] += 1006697425;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                  result[0] += 0;
                  result[1] += 4294967295;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                    if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
                      result[0] += 4252382633;
                      result[1] += 42584661;
                    } else {
                      result[0] += 4293045967;
                      result[1] += 1921327;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 4294967295;
                  }
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee618))) ) ) {
                if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9e7982))) ) ) {
                      result[0] += 3954637081;
                      result[1] += 340330213;
                    } else {
                      result[0] += 3378971201;
                      result[1] += 915996093;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                      result[0] += 3501110780;
                      result[1] += 793856514;
                    } else {
                      result[0] += 2205523746;
                      result[1] += 2089443548;
                    }
                  }
                } else {
                  result[0] += 4294967295;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0a833a))) ) ) {
                    result[0] += 0;
                    result[1] += 4294967295;
                  } else {
                    if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                      result[0] += 4250382859;
                      result[1] += 44584435;
                    } else {
                      result[0] += 4294967295;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 4294967295;
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 4294967295;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_4/test_data.csv", "r");
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
