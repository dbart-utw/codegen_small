
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e32680a))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f000000))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3de3760c))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e67bc80))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5a887a))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f14cdc8))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f1b81d8))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ee2f641))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e1e83e4))) ) ) {
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
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2a5604))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f33851f))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ce8fb))) ) ) {
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
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e255da2))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4676c8))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eeb78ab))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f714318))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f628534))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5c299e))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f32cf42))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0cf51b))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f08cc25))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7f2baa))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d96f006))) ) ) {
                      result[0] += 21474836;
                      result[1] += 64424509;
                    } else {
                      result[0] += 1363481;
                      result[1] += 84535864;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3c4f95d5))) ) ) {
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
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e71ab4b))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e26d4))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e047453))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3d974688))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3d4de8))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f01bdf9))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f310c0b))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e141894))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e8d2546))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f4bc16a))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e03721e))) ) ) {
                      result[0] += 28633115;
                      result[1] += 57266230;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f625c92))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea9af3a))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e8b67a1))) ) ) {
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
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3ea20c4a))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5c5d64))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f61ec2d))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f3bca96))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f19999a))) ) ) {
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
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d23b257))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eb7b741))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x377ba882))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e19bf9c))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3ed6e782))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f73635e))) ) ) {
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
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ee95422))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f75a2c6))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d1e4a38))) ) ) {
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
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f3c0b24))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3f8ab0))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea13166))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3eae72da))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e23d31c))) ) ) {
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
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4883ba))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2b0ed4))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbaa79c))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e3c88a4))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
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
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3eca40b8))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f1048be))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d29d734))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3b72cf96))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x387ba882))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ebbbe23))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3eb7a1a1))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6c28f6))) ) ) {
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
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dfb59de))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ab78034))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f0717ad))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e505a70))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df0a138))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e3559b4))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e7bfdb5))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 21474836;
                      result[1] += 64424509;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3edcaf50))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7e0f3c))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
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
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f238e4c))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e7b22d2))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d89eecc))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4a708e))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e753cde))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4174e6))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e0b65aa))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e34b48d))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7f56eb))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e19a954))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3c8d64d8))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3b8f861a))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e9083ba))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f3259f3))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3570a4))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e731a4c))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ee769ec))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3efe0419))) ) ) {
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
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e932768))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea12a30))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f444428))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d2aa8eb))) ) ) {
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f4b9970))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f7515e0))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f740d1c))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e8d9a96))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e136113))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5a887a))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f611244))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f2f6be4))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 3694595;
                      result[1] += 82204750;
                    }
                  }
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f67775c))) ) ) {
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
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f282c3c))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3e3d2b2c))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e27e133))) ) ) {
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
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f536018))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f740d1c))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4a771c))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3c4ed917))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e5559b4))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ebf1801))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e0a03c4))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 49085340;
                      result[1] += 36814005;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7df40a))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e2df7a5))) ) ) {
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
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f30ee39))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
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
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e9a3ad2))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3efc7cd9))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f383958))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f0b1705))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e5e3001))) ) ) {
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
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ee56777))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3bc83665))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3d19d884))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e88b43a))) ) ) {
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
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ec9782d))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f618c7e))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e000000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e5743ea))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de2070c))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f5c9906))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e23419e))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5938f0))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2cab60))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 1684300;
                      result[1] += 84215045;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e22db62))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f795da2))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4676c8))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3c8663d0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d540cc8))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f649a02))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f4704ac))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3d7bc7f7))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e22c669))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f54c88a))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f52d2dc))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3c293f29))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f104ea5))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e0617c2))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
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
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e932768))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f536018))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f5b8cfc))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7b9db2))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df0a138))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f2a017a))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f173a15))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e492b80))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f3e5fd8))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f12d2dd))) ) ) {
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
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f7cfdf4))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e7b2bfe))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3eb84cae))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2957bc))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3daf0846))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e8667b6))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 10737418;
                      result[1] += 75161927;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e611340))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 28633115;
                      result[1] += 57266230;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f537272))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d907746))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f3dc337))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e43ad18))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f5c8fda))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f220903))) ) ) {
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
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7573ea))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ea139eb))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e0137f4))) ) ) {
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e128390))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e4a79bc))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f295da2))) ) ) {
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
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e14562e))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ca71368))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d3dc487))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d4bc16a))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f57e61d))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ec4dc88))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f563f68))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f043127))) ) ) {
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
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f204fa0))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df28b6e))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f02bce8))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e1a8826))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d557bc8))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37a7c5ac))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4b6ae8))) ) ) {
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
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e4cb535))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f01e354))) ) ) {
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f134730))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e55b036))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e2ed3d8))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7ac6bd))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ee1e1b0))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3c94ee39))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f18471b))) ) ) {
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
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7d3dda))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f6f1759))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e4d42c4))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f1f5b2d))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3f6d33))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3dbc486b))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3d09bf9c))) ) ) {
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4883ba))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f673b10))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ecf6944))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f616c62))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f095619))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d3d9fd4))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e3e59f3))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2da900))) ) ) {
                      result[0] += 57266230;
                      result[1] += 28633115;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f361523))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f30c1a9))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x00000000))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1c110a))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2c3904))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ea86983))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0ea2b2))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb64d80))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee10e02))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eb3126f))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e7fb7e9))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d557bc8))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3a30f27c))) ) ) {
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
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3da509c0))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4beea2))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e41e258))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e4fb54a))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ec2454e))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f0427fa))) ) ) {
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
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3dba469c))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e50980c))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f525c3e))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3eac6541))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2a5604))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4bf823))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c7842))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e41cd60))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f219b3d))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e618938))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e844524))) ) ) {
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
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f7183a5))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ee6410b))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f3dc337))) ) ) {
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e043d46))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e76eac8))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f57342e))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f56f2fa))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e3ece9a))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1f9db2))) ) ) {
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
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f17dbf4))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6ed384))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9764ae))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3b862f58))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f0afc7a))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f30c34c))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e077d96))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2e555c))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ef995ab))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
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
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ec5b8ba))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6d9652))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e646738))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f5b40a2))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f74b0f2))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3cc13554))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e836263))) ) ) {
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e13b8e5))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f53d9aa))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f21a566))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1c110a))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f3ecb00))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eea88ce))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f280f))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3edfe47a))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 85899345;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f0e7caf))) ) ) {
                      result[0] += 1363481;
                      result[1] += 84535864;
                    } else {
                      result[0] += 34359738;
                      result[1] += 51539607;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4f06f6))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3d979d0a))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b7510))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f60de2b))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e831705))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3cfc99ac))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3c6703b0))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ec33c60))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e2516db))) ) ) {
                      result[0] += 3579139;
                      result[1] += 82320206;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                }
              }
            }
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
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f33f09a))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e286834))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3de9f6a9))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f0dac47))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e875ec8))) ) ) {
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ecc985f))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3ef540cc))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e167770))) ) ) {
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2aaa3b))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f5418e8))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed99aea))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ee8f1d4))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3ee05682))) ) ) {
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
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3bff6d32))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ee86e1a))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3d79c62b))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f241adf))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7b3482))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                      result[0] += 7158278;
                      result[1] += 78741067;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e95f118))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 4521018;
                      result[1] += 81378327;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dcaa10e))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d3b98c8))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ab78034))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e14da90))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7ff046))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e91743e))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76e632))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3ee011b2))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e9b866e))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f515768))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f644816))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7fdee8))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df0a138))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0e277c))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ec0e4b8))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d2d9168))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e4c6bce))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d3f91e8))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f096c0d))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f348659))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3ebfdc))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f761f9f))) ) ) {
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
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f667a64))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f53ec57))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e9c71b4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e9aba9d))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f439f56))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3efe1134))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d277708))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f33ac1d))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7080c7))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eddbdf9))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 4090445;
                      result[1] += 81808900;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f085921))) ) ) {
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
            }
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d03f91e))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f1e93f3))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f7515e0))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3dfd5e4a))) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e058794))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ddda512))) ) ) {
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6ccec4))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dd928e0))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f2f5200))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3dc25072))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e31d3ed))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3df66f93))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3d3b7415))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f6bffac))) ) ) {
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
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f644816))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3d62e0a0))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f0d70f8))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f6e656b))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f08801f))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    result[0] += 85899345;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3efe3bcd))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3efe1134))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
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
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f5be37e))) ) ) {
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
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f536018))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f297fb7))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d97d6b8))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e50980c))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f49a512))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e34f0d8))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f31a028))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7f3b64))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1f70ce))) ) ) {
                      result[0] += 42949672;
                      result[1] += 42949672;
                    } else {
                      result[0] += 692736;
                      result[1] += 85206609;
                    }
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3ea20c4a))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f4a0222))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f235f70))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f2c9a02))) ) ) {
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
    }
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2eb55f))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3bf69446))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f30c34c))) ) ) {
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
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    } else {
      result[0] += 85899345;
      result[1] += 0;
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e016b12))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e153261))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e68c3f4))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f5f861a))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3a59945b))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x377ba882))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ddeab37))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f45081c))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3eda732e))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f7f32e0))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3deddd70))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f55eecc))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f3adcb2))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e90826b))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76e632))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3eb518d2))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d9cb684))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f000000))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 85899345;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5559b4))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 28633115;
                      result[1] += 57266230;
                    }
                  }
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
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f1be964))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f6d6e05))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e932a06))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3eea6df0))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3daf6168))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d53dd98))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d370261))) ) ) {
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e634c1a))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f20b3e6))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5985f0))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ea86983))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3c01f7))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f783fe6))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f18471b))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3eccf378))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0dde16))) ) ) {
                      result[0] += 14316557;
                      result[1] += 71582788;
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
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f212b80))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3db4c1a9))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d832229))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ea2b9f5))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f49ee24))) ) ) {
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f51743e))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e4ca03c))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3df1c972))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e38476f))) ) ) {
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9e017a))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3eb2d6cb))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f648a48))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f32daba))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f52b0c8))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f4e0aa6))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3be0de))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f28b589))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d9c9470))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ee5e5f3))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3c305fae))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d03e425))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 57266230;
                      result[1] += 28633115;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f6d9503))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
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
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f65c098))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eb853e3))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f326ca0))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f6153ce))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e430e80))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee31d92))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e188ce7))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0c96bc))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f5f079e))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f0c2752))) ) ) {
                      result[0] += 1301505;
                      result[1] += 84597840;
                    } else {
                      result[0] += 17179869;
                      result[1] += 68719476;
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
            }
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d43ba34))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c4c4ef9))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f6f37ca))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3d63150e))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f75b61c))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  } else {
    result[0] += 85899345;
    result[1] += 0;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f7f86c2))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7fb44e))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f32f2fa))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f0b3fa7))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7bd662))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f740d1c))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3ba96920))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
                      result[0] += 34359738;
                      result[1] += 51539607;
                    } else {
                      result[0] += 1662567;
                      result[1] += 84236777;
                    }
                  }
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3eac5a1c))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3dffddec))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3da6cf42))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7348d4))) ) ) {
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
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7fc504))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e22c908))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ec64b88))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f6c1451))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f2d2d23))) ) ) {
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3dc1c2e4))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7b8ca8))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3ee57bc8))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f654cec))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f53d70a))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ed031ce))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edefe72))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d5c0442))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3eefbc80))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 68719476;
                      result[1] += 17179869;
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
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d277708))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d29d734))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d8e2eb2))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        result[0] += 0;
        result[1] += 85899345;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f0840e2))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d4f3236))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3d80d456))) ) ) {
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3f90ea))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e20c9da))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d9ea359))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f2f5200))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e3c88a4))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3dc50f00))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e12085b))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e3c28f6))) ) ) {
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
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f1d59b4))) ) ) {
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
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3be0f3cb))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e64024c))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ef4be62))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f3e42af))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3dc070b9))) ) ) {
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
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f33ea60))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3eeb1af4))) ) ) {
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1c110a))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f21bd51))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f300736))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e739ffe))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6d6723))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d90be0e))) ) ) {
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
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e179d0a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f5f079e))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfb69a))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0dde16))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f1071b4))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ebfdb4d))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e85158c))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3edbb1af))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f67b938))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f4dfc8f))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7edd05))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e8bf3e0))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e880c74))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 3579139;
                      result[1] += 82320206;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e8e9ccc))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 7158278;
                      result[1] += 78741067;
                    }
                  }
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f51bf48))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e966ba5))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
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
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f0c93c9))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d2656ac))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3efbd9a9))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ed9bef4))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f10bf5e))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f788a48))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3eab8716))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e35b186))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e017ebb))) ) ) {
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
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f3b8184))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3b381d))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df0a138))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3dfddebd))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 42949672;
                      result[1] += 42949672;
                    }
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
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d249e48))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f3a55b0))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e010625))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f4dfc8f))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d43b4f6))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e8bbb84))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e86bce8))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b7510))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7eaed1))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f5dea36))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e624745))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e4fb54a))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7fb44e))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ef60c9e))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ea22f06))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e183f92))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f54b296))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ec2d81b))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ed7ae14))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d8b3bb8))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d58adac))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f3770ce))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f0f126f))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f20acb0))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3d4efdca))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f07e718))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea4e315))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2a5a9a))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f49e93a))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de2070c))) ) ) {
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
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5af838))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f644816))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5fa6df))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ee290ac))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ec77660))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e52b170))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e5f4880))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e7877ee))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7fc361))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3dce924f))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 42949672;
                      result[1] += 42949672;
                    }
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
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3e3898b2))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f70331e))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f03bc7f))) ) ) {
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
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e63d70a))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b25c4))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ec33c60))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f27890e))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f18ed3e))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d352546))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e9b8ef3))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f12cd4b))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e3945b7))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e2d6cb6))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f6e2142))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f46cd9e))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 85899345;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7f3b64))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9f290b))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d5148fe))) ) ) {
                    result[0] += 0;
                    result[1] += 85899345;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e66c226))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 85899345;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f32afcd))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3de3a7db))) ) ) {
                      result[0] += 28633115;
                      result[1] += 57266230;
                    } else {
                      result[0] += 2684354;
                      result[1] += 83214991;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e596bb9))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e90fc50))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f2e186a))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e0862f6))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e5adaba))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
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
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e60995b))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f0d9b3d))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7715b6))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f55a36e))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eea88ce))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ec6718a))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e943c9f))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e4a8c16))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5370cd))) ) ) {
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
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
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
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3dc45240))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e655476))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e8bedfa))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f071d3f))) ) ) {
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
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e4bbc2c))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d4c88a5))) ) ) {
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f60fe9c))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d683e42))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7935fc))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f40e758))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f081d2a))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e5e3bcd))) ) ) {
                  result[0] += 0;
                  result[1] += 85899345;
                } else {
                  result[0] += 85899345;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e869ec2))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e3efdca))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3be0f3cb))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e0c8de3))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e90ba1f))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e62a993))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3c777af8))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f4e0aa6))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f0840e2))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e22db62))) ) ) {
          result[0] += 0;
          result[1] += 85899345;
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7dfa44))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e92f05a))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f07fb16))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3eb9fb40))) ) ) {
                    result[0] += 85899345;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 85899345;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d9ea359))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f20d4aa))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f3d2104))) ) ) {
                      result[0] += 85899345;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 85899345;
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
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3df7a4ea))) ) ) {
                result[0] += 0;
                result[1] += 85899345;
              } else {
                result[0] += 85899345;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f346bcf))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f0ecb53))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f021b5c))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f1e53b8))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c1ae925))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f458ada))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 85899345;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3bd1b720))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f1e1dfc))) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e3ece9a))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d501e26))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4835bd))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e8c0980))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3d0d844d))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e3363b2))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eddbff0))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3edd51d6))) ) ) {
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
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f630110))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f1f357f))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
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
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f468eb4))) ) ) {
        result[0] += 0;
        result[1] += 85899345;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3a917d6b))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e0ba344))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f5d172f))) ) ) {
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
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f389aaa))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f19999a))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f26b55f))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3f2aaa8f))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f168922))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f37bdcf))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f739043))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c88a4))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f12a79c))) ) ) {
                      result[0] += 8380423;
                      result[1] += 77518921;
                    } else {
                      result[0] += 68719476;
                      result[1] += 17179869;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
                      result[0] += 0;
                      result[1] += 85899345;
                    } else {
                      result[0] += 14316557;
                      result[1] += 71582788;
                    }
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
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f779432))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3d887010))) ) ) {
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
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3d706a2b))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e29d346))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3eaeafcc))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2c068e))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            result[0] += 85899345;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 85899345;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ecea359))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d98cd21))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 85899345;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3d625d8d))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f573e58))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      result[0] += 85899345;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eb34634))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d9f52fc))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ca0f90a))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 85899345;
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e305921))) ) ) {
            result[0] += 0;
            result[1] += 85899345;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f4f8c00))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e96ef5f))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 85899345;
              }
            }
          }
        } else {
          result[0] += 85899345;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3a811b1e))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e6e69ae))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3c805e5f))) ) ) {
        result[0] += 85899345;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d4c63f2))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1fd370))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f128bc2))) ) ) {
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
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7ec0d7))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eb03516))) ) ) {
          result[0] += 85899345;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e152fc2))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e61e3a8))) ) ) {
              result[0] += 0;
              result[1] += 85899345;
            } else {
              result[0] += 85899345;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e6363b2))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f33de40))) ) ) {
                result[0] += 85899345;
                result[1] += 0;
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
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c1ae925))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e90fc50))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f3fd31c))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f63d85a))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dff3e03))) ) ) {
            result[0] += 85899345;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3510a1))) ) ) {
              result[0] += 85899345;
              result[1] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7b837b))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e6b8f9c))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eda0c49))) ) ) {
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
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f6ef006))) ) ) {
                  result[0] += 85899345;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 85899345;
                }
              }
            }
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
      result[0] += 85899345;
      result[1] += 0;
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
