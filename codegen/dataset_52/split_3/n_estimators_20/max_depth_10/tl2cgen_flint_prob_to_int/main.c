
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4f06f6))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e3fe868))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 214748364;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7fdee8))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7f4b1f))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef95c00))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f56f2fa))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e143808))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3d878423))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e15aaf8))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f6b1466))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e1be0df))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3eb7e47a))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f10f2d0))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eff8f47))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ea22f06))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e844674))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e95e2ac))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ecf0c34))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3c06ad2e))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3eb8a3d7))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f088ede))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3c41e796))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f53396d))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3f7d522a))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d216c60))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eaee6da))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ed69835))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d073ffb))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef09ca2))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f025658))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f1bdaf9))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3de38da4))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e5a36e3))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d549518))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d530be1))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ee3c361))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e14bf0a))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7fdee8))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3d3dba0a))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f1d249e))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d618bd8))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e14317b))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ed3dd98))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3db94d94))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4c7a3a))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f41f6fd))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e0a161e))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f427efa))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f220903))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e3092cc))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e883904))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 214748364;
      }
    } else {
      result[0] += 214748364;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f416e04))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f627818))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            }
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f6f37ca))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f3a2eb2))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e058794))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4f06f6))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 214748364;
      }
    } else {
      result[0] += 214748364;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f742d38))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3cb458cd))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f688ede))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f181355))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f475d78))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef09ca2))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eb0aefc))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3efbd70a))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3d97f38d))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5fa6df))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eb3ff04))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eded3d9))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f53c361))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f5fddec))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3df02603))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d889ca2))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e85c67e))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3df72c52))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3c6cfe9c))) ) ) {
                      result[0] += 20132659;
                      result[1] += 194615705;
                    } else {
                      result[0] += 0;
                      result[1] += 214748364;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eda4d2b))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f75475a))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f132cf9))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f19f1bf))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3dc15ca7))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2a6cf4))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e56cf42))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3dc7cd8a))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f394b9d))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3cf505d1))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3d855da2))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7eaed1))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e008073))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ec1f0c4))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3c6f49cf))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 30678337;
                      result[1] += 184070026;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f1e1dfc))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f5a8ac6))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e88df7a))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7d7b74))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e133482))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3b694ee4))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3db10cb2))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5cdcdb))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ead0d06))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3eb32421))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3b381d))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7fea0c))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e561e50))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e8bedfa))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f6e8ac6))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ee0b631))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3b353500))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        }
      }
    }
  }
  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f6bf8ca))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddf4341))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f607b35))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3ee1e647))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b6406))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f65b036))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3d300bcc))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e851d69))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f19652c))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e288a48))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f441b86))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 71582788;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e4f0846))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3ecc432d))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3cfc3b4f))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 214748364;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d727bb2))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e04a4d3))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4b7026))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f75e9e2))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e3df267))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea60808))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f44331e))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2e4d7f))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed54e90))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d81d29e))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 214748364;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                }
              }
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dcaa10e))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e937026))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d3f77af))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e188e37))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7fdee8))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f5c764b))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ecb606c))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d90be0e))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3dcce465))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb991bc))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e1a6ca0))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b6406))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c693))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2d44bb))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f4da21f))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e2f2cfa))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec6d289))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 214748364;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f416e04))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 35791394;
                      result[1] += 178956970;
                    }
                  }
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e198f1e))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3dc024b4))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f51743e))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f0fcf81))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e364452))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e8f6b3c))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3eada46a))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3c84ab60))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3b694ee4))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5e3002))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d804189))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ecdce5c))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c7842))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f525d8e))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e400000))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d6fc266))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e81ef74))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f155571))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f660ba2))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7d7b74))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d0b4395))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3e6c5586))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e08d4fe))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e427287))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e12085b))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e9fe08a))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3eed20b0))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d907746))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ecd5f9a))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f5f861a))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7337ca))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ed82d38))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3eb573ea))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f04793e))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c02d384))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ee7db4d))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f169e1b))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f169f6b))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e8ef73c))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 214748364;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d8e4b88))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e049f94))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e35e4a4))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f515768))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4ba5e4))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eacfb54))) ) ) {
                    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7fea0c))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 71582788;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e38ac5c))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f3a39d6))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3eff75b8))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7edd05))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ecce7ac))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7b2420))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebca969))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e37f0ed))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d9a3444))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e5f1561))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f68ad58))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f458794))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ed27d03))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ed9613e))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3c4432ca))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f163f14))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e31ecd5))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3ea016f0))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e78b6d8))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e940980))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e33e426))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f6bdc48))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e634c1a))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eae4b88))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d8eca))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f0f0c35))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d949518))) ) ) {
                      result[0] += 71582788;
                      result[1] += 143165576;
                    } else {
                      result[0] += 214748364;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e8da123))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e64bc6a))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f1d72ef))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f019f2c))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 214748364;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d45974e))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3d21ef74))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3eeb02b4))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3ea20c4a))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3cde742a))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6186ec))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e33736d))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3d931b9b))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f256db1))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6a1230))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f1ebb45))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f277fe0))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e943c9f))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b25c4))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e7b83cf))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e301a37))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6b6406))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0e54b4))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6db328))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3f2737ca))) ) ) {
        result[0] += 0;
        result[1] += 214748364;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f559d34))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e937026))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d064452))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3c761672))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e854e90))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7a86d7))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea921ac))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e9797cc))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7df070))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d8d6a16))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e7509c0))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f04c3a0))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5fc5ac))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eb523f6))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e937026))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d3b98c8))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7df070))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0900e6))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d308ede))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3d69057d))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f559a96))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d530164))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e68bac7))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3dfb8bab))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7fea0c))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f27429a))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ee7ced9))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ee10b63))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f740dc3))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f557d6c))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ec176de))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e018698))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x38bcbe62))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x387ba882))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f30c34c))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3d15da27))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3cfaf63c))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f7147ae))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f5f861a))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f63e9b8))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d5bf488))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e4cfbfc))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d8c692f))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f600000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3ec9f4b2))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f5f079e))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb991bc))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ee07e7c))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e8da123))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                }
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5d67cb))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d918549))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f1abf88))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      result[0] += 214748364;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
