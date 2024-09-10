
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 858993459;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4bf290))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0d172f))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d31af3a))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0bddec))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3cbb7952))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3d15f99c))) ) ) {
                    result[0] += 858993459;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f1b9bbb))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f56f2fa))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ead4de8))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3dd5b574))) ) ) {
                    result[0] += 0;
                    result[1] += 858993459;
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f34a9bd))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f5bd70a))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
              } else {
                result[0] += 858993459;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 858993459;
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e9e7968))) ) ) {
            result[0] += 858993459;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e124895))) ) ) {
              result[0] += 858993459;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ee77f8d))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e82a25e))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6b6406))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
        } else {
          result[0] += 858993459;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 858993459;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
      result[0] += 858993459;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d8e5604))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f607b35))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f0d9b3d))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfb69a))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f27890e))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f797dc0))) ) ) {
                      result[0] += 53687091;
                      result[1] += 805306367;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 858993459;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ed55e4a))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d1a75cd))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3effaf64))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f2bf7cf))) ) ) {
                      result[0] += 85899345;
                      result[1] += 773094113;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 858993459;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 858993459;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eb523f6))) ) ) {
              result[0] += 858993459;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 858993459;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 858993459;
    result[1] += 0;
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e94bfb2))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e534eba))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f529c24))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3eb0d64e))) ) ) {
              result[0] += 858993459;
              result[1] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3dac1a8b))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                }
              } else {
                result[0] += 858993459;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 858993459;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f2ce26e))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3c761672))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f575254))) ) ) {
                result[0] += 0;
                result[1] += 858993459;
              } else {
                result[0] += 858993459;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eea88ce))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f13482c))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ea68922))) ) ) {
                    result[0] += 0;
                    result[1] += 858993459;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e98e172))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7197a2))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                }
              }
            }
          } else {
            result[0] += 858993459;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e84b1ee))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e86924f))) ) ) {
      result[0] += 858993459;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e00c1fd))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f20307f))) ) ) {
          result[0] += 0;
          result[1] += 858993459;
        } else {
          result[0] += 858993459;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3705fb))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e247454))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f06602d))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3edec226))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ede9c24))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
            } else {
              result[0] += 858993459;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 858993459;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f78c598))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7d3dda))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3dea4010))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e6fc654))) ) ) {
                  result[0] += 858993459;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 858993459;
                }
              } else {
                result[0] += 0;
                result[1] += 858993459;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3dd9d0a7))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f032ef1))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3da5e5f4))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
            } else {
              result[0] += 858993459;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e5a36e3))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3ee44da9))) ) ) {
            result[0] += 858993459;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 858993459;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
    result[0] += 858993459;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5262cc))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4eb314))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3c96fa84))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f7d97f6))) ) ) {
            result[0] += 0;
            result[1] += 858993459;
          } else {
            result[0] += 858993459;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 858993459;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e45b813))) ) ) {
        result[0] += 858993459;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f780c74))) ) ) {
          result[0] += 858993459;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ed47a3a))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3ddff823))) ) ) {
              result[0] += 0;
              result[1] += 858993459;
            } else {
              result[0] += 858993459;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f31b185))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d9cb684))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e9ca57a))) ) ) {
                  result[0] += 0;
                  result[1] += 858993459;
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f2fa9d2))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3eb25f85))) ) ) {
                    result[0] += 858993459;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f4e1038))) ) ) {
                      result[0] += 0;
                      result[1] += 858993459;
                    } else {
                      result[0] += 858993459;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 858993459;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e1bf338))) ) ) {
                result[0] += 858993459;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 858993459;
              }
            }
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
