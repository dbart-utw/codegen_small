
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f030e2c))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3ea5a5ba))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f52b0c8))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f2b544c))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e08850a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e11d29e))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f01ae3e))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f3c3f3e))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f39d884))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f104a62))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3b3334))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e823cc9))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dda07b3))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 1263225;
                      result[1] += 41686447;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3effab76))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d1a9004))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3ebdd24a))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x38bcbe62))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3d21ef74))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e047453))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e477857))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d884380))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e4b19a4))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3dd018e7))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f21ea36))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5ca772))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d625d8e))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3edff4dc))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ee6f156))) ) ) {
                      result[0] += 14316557;
                      result[1] += 28633115;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f6c27a6))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f1a33f0))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f358e22))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f59c0ec))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e00fa59))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5a3540))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eacfb54))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e30e172))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f736114))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f27de94))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e98d6f6))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3c06594b))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3d943958))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e5dd441))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3b19ae93))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d17a787))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f538866))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e865c92))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3da15ca7))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2c62a2))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f07952e))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e848b44))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7249e5))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2f4cc2))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d8924f2))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3c189df1))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e124895))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f2e186a))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f4af545))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f524e7b))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3caa10e0))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2650c6))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7686d7))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f654cec))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f523886))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3ef74c6e))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3edb78ab))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3cfae148))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e2edfa4))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2a5604))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eadba0a))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f13482c))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3c2efb2c))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1ab368))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3efe1134))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f5fdc9c))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f604136))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e141894))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f49f84c))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d300bcc))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d5ce076))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e99dbcb))) ) ) {
                      result[0] += 10737418;
                      result[1] += 32212254;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3dbe7ea6))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e7db0de))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7adb62))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e202364))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2ace9a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f2c9a02))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e1c6e6e))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0a1cac))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f262878))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5cdcdb))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2a5604))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2b0ed4))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7b0c88))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e8e5a9a))) ) ) {
                      result[0] += 9544371;
                      result[1] += 33405301;
                    } else {
                      result[0] += 681740;
                      result[1] += 42267932;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9ba14d))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f2a57fc))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e90a1e0))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f3c3c4b))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e4ebaf1))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ea0da3c))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f2cf51b))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3d3ae7))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3c9c5825))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7b9043))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3eaabfdb))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6827fa))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eb34634))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3916db))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f600347))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e819264))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3d93b4))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3dcca57a))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f12cd4b))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7fc361))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3b877ee5))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f48ee8d))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e802be9))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3d374688))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d1b328c))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4835bd))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3c6002))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e5c7e28))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3dd3d85a))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f01d590))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3d79c62b))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f20d4aa))) ) ) {
                      result[0] += 3579139;
                      result[1] += 39370533;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3c01f7))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f17d370))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f7a2db6))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f44d5a6))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e495572))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f4b79a6))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e96b9a2))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e133482))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3c839043))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e858cd2))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f51743e))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3eef9b13))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3c76fd22))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d209aaa))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f022e5e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e3ece9a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ed69835))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f49a512))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4a771c))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3d26277c))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e03721e))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e6bdba0))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 10737418;
                      result[1] += 32212254;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f4e4f76))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e91dfb9))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3db851ec))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f19999a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f20e65c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f4a4b34))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3efb8280))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f158106))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e257bc8))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f530942))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e3363b2))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e5edfa3))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eac3958))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ea07550))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7bd418))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4e425a))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d63ec03))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3eb5d639))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e90fc50))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d8b3bb8))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4f06f6))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e216b12))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e9f86c2))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6cf9b1))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f765700))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eaece9a))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3b8b4396))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3d321d54))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7bc654))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3f90ea))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f5e0f3c))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3eb53e2e))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7e22e6))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f28ba20))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e82862f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f19c044))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4e6bf8))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dc60568))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3da4284e))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f5e0f3c))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f1f1af4))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3eee6f93))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5465e9))) ) ) {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    } else {
                      result[0] += 547129;
                      result[1] += 42402543;
                    }
                  }
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3edf7b9e))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d3a3982))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3dbdcc64))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d203c4b))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e39f01b))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7ec3ca))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b7510))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7ff046))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f41f070))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f474342))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6dbf9c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f611244))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e000000))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d8e2eb2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f0afc7a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e858cd2))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ebc36b9))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b6406))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f01d590))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f612d77))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e840980))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e9ebf88))) ) ) {
                      result[0] += 14316557;
                      result[1] += 28633115;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f2ed528))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6e3c75))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f189eed))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e381451))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e45edd0))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f5edaba))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3dd0fa59))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e8f6b3c))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3dae703b))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e3d883c))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ef86a2b))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3d970a3d))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d9ea359))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f20a288))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2c6c76))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 4294967;
                      result[1] += 38654705;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ea07550))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e412ec7))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e6974e6))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3cca03c5))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e7ab368))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4fa9d2))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f2014f9))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3dca2878))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3de1450f))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6442d9))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e8ae72e))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e925e36))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3bff6d32))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3efd9408))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e609fe8))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f0fced9))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7fdee8))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7e4d7f))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3dda14cf))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7c85b2))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ef17050))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f02fe72))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 10737418;
                      result[1] += 32212254;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ec05bc0))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f3ec56e))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f49b281))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f75b9b6))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e333482))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e744fa0))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3bd028))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3f3b64))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e3eb314))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f3062f6))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f772df5))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f0afc7a))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3bf2cf96))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x377ba882))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1583a5))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3d9328b7))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2c54de))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e08e9f6))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7dc2e4))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 3390763;
                      result[1] += 39558909;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3d2cca2c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7edd05))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eddde15))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f1cafa3))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e5f6fd2))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ef760c0))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3f079431))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f14bac7))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e2a0f90))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3a59945b))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e3a2f06))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x38bcbe62))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d530be1))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3ea9a4be))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f5bc654))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3cc08312))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5a887a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f564f76))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5dc1e8))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e6363b2))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2f9bbb))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e4f6406))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f538866))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e2d9168))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d29d734))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d2656ac))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d7afb7f))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee46499))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e6d97f6))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7f1f36))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0e277c))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d492791))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ecbc600))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e256d5d))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3eeff6d3))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c1ae925))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e124895))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e595182))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3bfe9b80))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ed12c28))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3d89320e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6ed384))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f469692))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eaaaae2))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3b2efb2b))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2c54de))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e92bf34))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e843aa8))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e831705))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f75f30e))) ) ) {
                      result[0] += 1263225;
                      result[1] += 41686447;
                    } else {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ef0a47e))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f5e42af))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e7db0de))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3cf80dc4))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f377953))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dd928e0))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3da41b32))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d3eb075))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e03c212))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3eff0e2c))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0888f8))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3c1fc9))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eef9b13))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f777414))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3efc4524))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f399018))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f4dd441))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f283d9a))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e260568))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8a7914))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7ba637))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e4c7f78))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ebecbfb))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3da8a9bd))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e2bc01a))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3eee8c69))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5985f0))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e5cdf26))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f5896bc))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f6a1b08))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f57e61d))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6827fa))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3a59945b))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3d369446))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f72b702))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f34d014))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f536018))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f6153ce))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3f90ea))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e8562e0))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3dca5f84))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e420d98))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e5d9fd3))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f551cc1))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f53482c))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3ecb83d0))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e124895))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f300000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x37fba884))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee5b424))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3d4e8a72))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3cdf3b64))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3eb5b0de))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3e92a3))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e251c19))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3b381d))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e3b04ac))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9ff584))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebe65be))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e8562e0))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 1385473;
                      result[1] += 41564199;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f5be37e))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3ede0fe4))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f2e186a))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f228390))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3d5adea8))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f6ffd61))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ec33c60))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e95e2ac))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f05ffd6))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f68ab60))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3deeac86))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d404428))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f0e108c))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb64d80))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d33679e))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2b837c))) ) ) {
                      result[0] += 4772185;
                      result[1] += 38177487;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb1bf9c))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dfb59de))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d222e5e))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ea8d456))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e931af4))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3dbd6e05))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d824b34))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed11149))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e609fe8))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d98cd21))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e5b6ed6))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3ef38327))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2a5a9a))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f11e15d))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e6363b2))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7eaed1))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e2df7a5))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c1ae925))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f021b5c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ede6f93))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f053f29))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3d584a0e))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f22abde))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d1d4413))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3a8bc2))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e01b328))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e609fe8))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee46499))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e89ce07))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8123a2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e3d883c))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7bd9aa))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e41cfff))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e3898b3))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3c3328b7))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f38cfc0))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f55c62a))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f72b702))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3ba96920))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f418fc5))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f15f7a5))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f0ebd3c))) ) ) {
                      result[0] += 3904515;
                      result[1] += 39045157;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed99aea))) ) ) {
                      result[0] += 1789569;
                      result[1] += 41160103;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e33ad19))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f692ad8))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f7147ae))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3c5e15ca))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f009f94))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0a1b08))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3deee393))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f625b42))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f2c6e1a))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d16cb58))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0f212e))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f22f8e0))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d97aa26))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f1c14a5))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f3a55b0))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f3c3c4b))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f40294a))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f777f8c))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f253d86))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e98d6f6))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x377ba882))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed4a03c))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f091b1e))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e7badc1))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e56f694))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e0f2cfa))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eaf5254))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f079e))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3efe1134))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e179d0a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3efc4ef8))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0bb4a2))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f0bf67f))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f1ed18d))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2b837c))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e985c68))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3be0f3cb))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3d153cde))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d03f91e))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f6ef006))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f4a4b34))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f682f84))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e010625))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e39b3d1))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3c658a33))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x39ebedfa))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6ced91))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f536018))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7f9c0e))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e11d29e))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3efe57fb))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3c6a3593))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3cb7414b))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f31a028))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f032ef1))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f28ba20))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e8123a2))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f7cfdf4))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f64100e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e0d0a67))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3a7fa2))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e45b424))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f2e392e))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e844524))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e05bc02))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c51b720))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f1dfc3c))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3ddc0c20))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f4c169c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e09ae92))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ed571f4))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f04b9cb))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e894468))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ee4f6be))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3d273d5c))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3d4a6ca0))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7f9c0e))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f0c1b33))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3eaaaae3))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e924b34))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f07357e))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3dd3d85a))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3df7ee4e))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e8562e0))) ) ) {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f20125a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ec4dfce))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3edbb2ff))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e300000))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f044bb2))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e9a3ad2))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e9d51d6))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f41c4da))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d527e52))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7e96e6))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ededa66))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da8eb46))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3ddacc50))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f211c1a))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ea5bf48))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3e8d436c))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e5f1561))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3d766a56))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e00fa59))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f41f070))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0888f8))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0d62e0))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e7bfdb5))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f2f5200))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7db718))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e4b313c))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 8589934;
                      result[1] += 34359738;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3eb7c5ad))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e2eaf25))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3eff5b80))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e6374bd))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3c112988))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f158106))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6e13d4))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d70f27c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f395960))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f36eac8))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f4a4c30))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ec769ec))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f21815a))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d6a4a8c))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3da75254))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f09a900))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d6c02f2))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3da4284e))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f12fd22))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3eec88a4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e52046c))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f12c41e))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42ecc0))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e92f05a))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3d81bda5))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de5119d))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f34840e))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ef7cc3a))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3bdf7a40))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e010625))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e1290ac))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f378c00))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e692642))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3b2b606b))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f0d6b66))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3d1bea0c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e0758e2))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f611244))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e250720))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e423f68))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2a464a))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3df04577))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f10b780))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f523886))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f1338c5))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ebbfa6e))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ec5feda))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3f10ce1c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f30f0d8))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f25c2e3))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e24ae00))) ) ) {
                      result[0] += 676372;
                      result[1] += 42273300;
                    } else {
                      result[0] += 6135667;
                      result[1] += 36814005;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec602c9))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3ddacc50))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e6fcb92))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ef05db7))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3b8e0c9e))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3cc18937))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e3197a2))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f0c1b33))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f0d6239))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3efbd70a))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 2726963;
                      result[1] += 40222709;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f7cfdf4))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1e78c0))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e0fca42))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e33ad19))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f740d1c))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f658d7a))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3da769ec))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eddde16))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7ec3ca))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                      result[0] += 1867377;
                      result[1] += 41082295;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f611244))) ) ) {
                      result[0] += 2863311;
                      result[1] += 40086361;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f1ca1e0))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f644816))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eaed5d0))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e2ef34e))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x37fba884))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d8cc251))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3dda6612))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ec450f0))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3dba2f06))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x00000000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4883ba))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c80b242))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7dd638))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f3e96e6))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eecb7d4))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e937bf2))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7dfa44))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f2cefdc))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f48ce70))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f40b7d4))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e791298))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e00fa59))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f67b938))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f60fe9c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ec91490))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ec8adac))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f098e76))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f515768))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7ec0d7))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e8e48e9))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3ed39e06))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5e92a3))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e6b8cfc))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e133482))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ce718a8))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d336263))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3b19ae93))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d399c3a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dd1800a))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f4b68f0))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e818938))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eb45048))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3d438088))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3ea79097))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3db0092d))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e01797d))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f20b8d0))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ddf06f7))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d70f27c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e128390))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f2eb021))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3d93b8e5))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3e180735))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ec10625))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f76b3bc))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e9d898b))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f3c509c))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f44bac7))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3b381d))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e247454))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f4481c3))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7fb69a))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df4d6a2))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f75f7a5))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f4f8c00))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f729004))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7ec3ca))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f51d442))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ef0d994))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d58bd66))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d9b9b67))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f487cd8))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e8be8bc))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f0ad0e5))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3edb6262))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e7db0de))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e3c1bdb))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3dc5974e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5c5d64))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f68ad58))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f5418e8))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f04c3a0))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f322b6b))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f178961))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ed6171a))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f168922))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e02378b))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x00000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3d510a12))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3beb08))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f5d9503))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3da779a7))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3d8a3594))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e1ae536))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5cd552))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f0375b8))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e565a9c))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d277708))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e66bce8))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ea139eb))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f6e6e98))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e764c2f))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f49a512))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7ac6bd))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e01d92c))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f3f9e5a))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e994af5))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f06d71f))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f3a12d8))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7368f1))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ed5a46a))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f0058cd))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed96c61))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3b2efb2b))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d0ccccd))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e337de9))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f075158))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f57f91e))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2a5604))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e5f4880))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e6a6612))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3ebf9e5a))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7417ec))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f394a4d))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2ace9a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d2a4010))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ee9e648))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f3a6ba4))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f4f4a77))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5861fa))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f267efa))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ead898c))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e1ab4b7))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d8029f1))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1e78c0))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76017a))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e6ad03d))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2eb55f))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eddbff0))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2263c7))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f020c4a))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e52b170))) ) ) {
                      result[0] += 6135667;
                      result[1] += 36814005;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e01d29e))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f3c8366))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3c3fdb4d))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3b72cf96))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e4c7f78))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ccbbc2c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3c95768a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0f2b56))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f09e59f))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e64024c))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f510e56))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e3b7bf2))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3edadd59))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7c8ede))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee1c044))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3a9aaa3b))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e6b8f9c))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f399a96))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e98d6f6))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e45edd0))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3922877f))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3c117d6b))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f111687))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed81301))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f0f83cf))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d059210))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e95ca6c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c63f1))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d6e3e6c))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3be0f3cb))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c4c4ef9))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d816f00))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f06d384))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f078d50))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f0642af))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b544c))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e7408d9))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ea0385c))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e9f7708))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3eb20f90))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e23d31c))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f63c266))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f075158))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e83c4b0))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e297b74))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d9cddd7))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d9ea359))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e01a8ac))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 10737418;
                      result[1] += 32212254;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dcabde4))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e11782d))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3f6aa455))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f262878))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e801451))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d9cddd7))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f0d3554))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edfc7a4))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f252696))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f7f95d5))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed950da))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb8f5c2))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3de50efe))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f6e4a38))) ) ) {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3df4d402))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3d1244))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f163f14))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dedd830))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f362974))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e11d29e))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f702c90))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f74b0f2))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ec113e8))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c1ae925))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f6d259a))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f70331e))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3bad81ae))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ef247ed))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3a59945b))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x387ba882))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3eae540d))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f384ff4))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f74956c))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d134acb))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3c54562e))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d06b26c))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebf5792))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea99653))) ) ) {
                      result[0] += 1227133;
                      result[1] += 41722539;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e783e42))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f41f070))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7fdee8))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f6a7c5b))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3db25700))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e507b36))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d7ecfea))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e37c6fc))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3d681990))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7fb44e))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e51ef74))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e936502))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eee74d2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eba2e5e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f1e53b8))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3efe0fe4))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f24ff43))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7b5548))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f394a4d))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f1a33f0))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f3e0f90))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e08572a))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5ec51a))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f05c821))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e60995b))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f6b2b56))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e8e9ccc))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eb57fb6))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3eb7f62c))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e32007e))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e0dc098))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eebec03))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3da6e6d8))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e50980c))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f1bf972))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7db718))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f26cf96))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f564f76))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7b9043))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3cf7c45d))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5ec51a))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de5119d))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f2a017a))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 14316557;
                      result[1] += 28633115;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e2516db))) ) ) {
                      result[0] += 4294967;
                      result[1] += 38654705;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f2a6c4c))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cc6e7))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e56f694))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3efb7fe0))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7c5294))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f53d9aa))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3df02de0))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ed5edd0))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e3dc726))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eff2325))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f19a2c6))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f22ff6d))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f60f95e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f23bcd3))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f516580))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e18ca82))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3efdfe32))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e42c12b))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ce45a1c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6ed384))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3ca95428))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3de44d00))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f400000))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e9b66fa))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e077d96))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e6bdba0))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 7158278;
                      result[1] += 35791394;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3edb404e))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f017785))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eda1038))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f6d259a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e135697))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e94faad))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e27de94))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f508f32))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d478e9f))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eaece9a))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3dc1b089))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f26b314))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e75b036))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e7b83cf))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f136263))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e2f227d))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f5c18e8))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 28633115;
                      result[1] += 14316557;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f740dc3))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3df1b478))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4f24c8))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f3bca96))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3cd32618))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb64d80))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3ce06b7b))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eea88ce))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3efc69d8))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f1653b9))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e10b8d0))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ea03afc))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e830be1))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f16a162))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f661816))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c1ae925))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f04b9cb))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e578c01))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3dc80f13))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e9696e6))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7bd662))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eab1466))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3c8df7a5))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3df72c52))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f03d85a))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3bd20afa))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e483904))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ca92a31))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e6c1bdb))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eac6888))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e70cdc9))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3cbff045))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e89b08a))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2c54de))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ee7ced9))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e1e48e8))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3dab4634))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d0cf180))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f14cec4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3c7d36fc))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f220903))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f41f6fd))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x00000000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f6c9afe))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3dcd6a16))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eddbff0))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ef9eadd))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f56f2fa))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e56f7e4))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f21e98e))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f39d496))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f0ab218))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f67b938))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3df0d5a6))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3f3b64))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e16e58a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3ee813a9))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f661e50))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3b2b606b))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7f1f36))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f14c3f4))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1e949a))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 550636;
                      result[1] += 42399036;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e025d8e))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f4cfa05))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f761f9f))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f0702b4))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x00000000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f52b0c8))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e410625))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e346b27))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f2c9afe))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f1bdaf9))) ) ) {
                      result[0] += 31236125;
                      result[1] += 11713547;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3cf95d4f))) ) ) {
                      result[0] += 2801065;
                      result[1] += 40148607;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3dff6555))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f5be37e))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f241adf))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f3c3c4b))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0b544c))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5c2e34))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3f90ea))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1dba0a))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f67bc7f))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de5119d))) ) ) {
                      result[0] += 2260509;
                      result[1] += 40689163;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ee3f727))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3d341f22))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e994ee4))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f074c6e))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e96833c))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d0c8de3))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3d9815a0))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3d473abc))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f058e76))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e43c212))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4414a5))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e141b33))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f2cfb54))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e856430))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3bd028))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f394a4d))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3efc1f22))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f51743e))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f373a15))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f19d734))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3c01f7))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3eae0fe4))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f1dea8a))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f604136))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1800a7))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d059210))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e8f8fef))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f36b075))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ebcd20b))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e966ba5))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f36a162))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ecf635e))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f44d5a6))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f564f76))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f673b10))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1400fc))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d4b19a4))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e94985f))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f7ec083))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e939d5e))) ) ) {
                      result[0] += 3579139;
                      result[1] += 39370533;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f0ccad6))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 17179869;
                      result[1] += 25769803;
                    }
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2c54de))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f77f4dc))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f2080c7))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3de2e0a0))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3a12ccf7))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f78c155))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eb7b742))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f319be4))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d94f378))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ebbbb84))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7715b6))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f754270))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3eca5850))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f783fe6))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e96ef5f))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6ed384))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3eaab7fe))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3eb6809d))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3dfd0a68))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d3b44e5))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ee88d8f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f1731e4))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f6efcce))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e188a48))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb10386))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3da6cf42))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f4fb2ab))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3ce7d560))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e60f909))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f55eecc))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3b3334))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5256ac))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e6363b2))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e152fc2))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e1e1c58))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0eb852))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3dceee0f))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3cf559b4))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f05f3b6))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f709279))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1c110a))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f21bd51))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ef182aa))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3ddaa79c))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3a59945b))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3df5bab2))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3c18dcdc))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f783fe6))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e2ed3d8))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3a2eb2))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ea39d5e))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                      result[0] += 5153960;
                      result[1] += 37795712;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea9c0ec))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d6c02f2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e05b6c3))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f04c597))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f3fd31c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e286834))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e833db0))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e99c8c9))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3d4e8a72))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ebff972))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3efb9b67))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed92ec7))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ea26ca0))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e059360))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3eeb06a3))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3e8743e9))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f52b0c8))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f72f987))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e8ec02f))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3cb6d86e))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3dddb76c))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e1bc947))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3cd25edd))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e27fb6a))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e85edd0))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f20d4aa))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5426aa))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f2dea8a))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e1cd20b))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f61a07b))) ) ) {
                      result[0] += 1431655;
                      result[1] += 41518017;
                    } else {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e133482))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e5debd9))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7a3498))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c4725c4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3dab5350))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e6505d1))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3cc2c3ca))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e17aa26))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d33679e))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3be5de16))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0888f8))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e305921))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2c11b2))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7818e8))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f27c654))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f0f4880))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d4d6a16))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f740d1c))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x39fba882))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ee36e2e))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6d6723))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee8f862))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e3e8e60))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e9961e5))) ) ) {
                      result[0] += 2770946;
                      result[1] += 40178726;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e84a772))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7e22e6))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1cb3e6))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c56f540))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d81ab4c))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2eb55f))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfb69a))) ) ) {
                      result[0] += 2770946;
                      result[1] += 40178726;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb24f22))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f19681f))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f08ad58))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f79696e))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ee4c8de))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ea0da3c))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0ea2b2))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0cc4f0))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ed47a3a))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3efc7cd9))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f79d7dc))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f611244))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed7f77a))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e136113))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de5119d))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e056191))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d2b0c8a))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e40fe48))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee10e02))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f6d8106))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f2562e0))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5b5bd5))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d2c8b44))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3c740a28))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e27fb6a))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3eb20514))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e0ae148))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dde1b09))) ) ) {
                      result[0] += 7158278;
                      result[1] += 35791394;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f2dea8a))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f713b3a))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e2ab368))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f4913e8))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3eb060fe))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f1173eb))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f67beca))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6a1230))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eba4fca))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3c4aab8a))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3cc65e89))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d2a7efa))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3da78ea0))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c3645a0))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f255bab))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3df2ef0b))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e2aaa3b))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e179d0a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f5fb98c))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ea43d47))) ) ) {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e57a4e8))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3eaf396d))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e95566d))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e36db0e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3dfb2ab0))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dcaa10e))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f07d124))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b25c4))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e216873))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0888f8))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f793a92))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e84a18c))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e066906))) ) ) {
                      result[0] += 3067833;
                      result[1] += 39881839;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f18cc79))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f04c3a0))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f145ac4))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f322b6b))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3cef1560))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76e0f4))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3f6aa455))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e416096))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e9d71f3))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f612d77))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f219b3d))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e7d5cfa))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e3f9c63))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3d9a469e))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f13e575))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f40865a))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f57e61d))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f4abc94))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3c9ec2ce))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f3fd31c))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e44ecea))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e7d82fe))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3d9ee244))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3de41355))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e2dc337))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ec824b4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3da95960))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e01b328))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f2807dd))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3c93165e))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2aaa3b))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5dc1e8))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f3cc932))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f16c41e))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3de1d29e))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e23d31c))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ebd5bac))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da8eb46))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eac41dd))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3c196fa8))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ab827fa))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e9b2b56))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3efffac2))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3b65b424))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f56f2fa))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3d858794))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3debd664))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f2b9336))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e7d31ba))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e8b63b2))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f6d9503))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3efb2e9d))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ecf47d8))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 8589934;
                      result[1] += 34359738;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e595bff))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e4fa97e))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7adb62))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e60995b))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7715b6))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e96b9a2))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eddf3b6))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e40fe48))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3bf2cf96))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f266fe8))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f242a45))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ec8b4e2))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e2894c4))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e063c75))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f433190))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e23419e))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f00b09f))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3cffeb07))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3e3652bd))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3eb3443e))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e8c9279))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f66defc))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e083665))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f37a6df))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x00000000))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f2a493c))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f2ce9a3))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d832229))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e43ad18))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f040b24))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0ffdb5))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4450f0))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3dac8604))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f08bbc3))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3eb3fbbd))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3efb87be))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ef76dda))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e01b328))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3df3e037))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3d1c8218))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f081302))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f4c7ae1))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d2c8b44))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ef16484))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed99aea))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e06afcd))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f1d3166))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3dab923a))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e569596))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e5a4d2b))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d98cd21))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb48fda))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ea4ef88))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3cfb0b39))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3bc0ad04))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f41a9a8))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ed58256))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7e4d7f))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5570a4))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3eaf4928))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f31a954))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eade354))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f1e53b8))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e124895))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f4ec4c6))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f3bca96))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e0a161e))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ee66f93))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee1c044))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x38fba880))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3cc8f324))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e93313c))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e60dd83))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e179d0a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eddde15))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e3b04ac))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f31a954))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f14c3f4))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e47a8d6))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 35791394;
                      result[1] += 7158278;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3eabf3e0))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3a956c0d))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2a5a9a))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3c5e15ca))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3e83fe5d))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7818e8))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f1a33f0))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f092253))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3d4de8))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e3ad6cb))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3aa67620))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3cf80dc4))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5439ac))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f1c855e))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f7a2db6))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e265bea))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3cecfe9c))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f3fd31c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f0f0f28))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ef57929))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f50ffeb))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3c088f86))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f03079e))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e8aa79c))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dbc432d))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ebd9408))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ed7b353))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f3e949a))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f611244))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f2f357e))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f57674d))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3dc9d9d3))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ed27d03))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f19999a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f04624e))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e84c2f8))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e16cb54))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e690abb))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f26238e))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ee8e6b0))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d83a53c))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3ef540cc))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e9fe08a))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7916db))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f53482c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e8bedfa))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f24ff43))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    result[0] += 42949672;
    result[1] += 0;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3b2a64c3))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e47064f))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3efd83a5))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3d8e6320))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3cc1d29d))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dd1800a))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ed5db76))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e0d512f))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e16cf42))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3dd374bc))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f031b48))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f1a62cc))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e124895))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f068eb4))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e932768))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f692ad8))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e247c31))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f14bc6a))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f075158))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2957bc))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ece3d1d))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d04816f))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3d5cd5fa))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d894467))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f6bb108))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_0/test_data.csv", "r");
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
