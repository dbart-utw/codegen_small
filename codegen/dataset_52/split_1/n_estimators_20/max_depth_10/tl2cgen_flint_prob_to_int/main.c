
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
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6d6239))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7c4285))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f087400))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ecc154c))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f39c582))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e93cf2d))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3caaa3ad))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3c9fd36f))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3d2f9336))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e9f7708))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7fe08b))) ) ) {
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
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ee52934))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e4af102))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e430d30))) ) ) {
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
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3dd38477))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f61729b))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e7b00bd))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f06680a))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c6fbd))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3deb5dcc))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f573e58))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3cfc3b4f))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f3a656b))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec2f640))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3bff6d32))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e8462a2))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e60995b))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f26cf96))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1e0610))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3db3abca))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f3af838))) ) ) {
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
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f3e42af))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f6686d7))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d03f91e))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3d153cde))) ) ) {
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ed9613e))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3f1e3a))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e3230fd))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ca21427))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f78ffeb))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f04b33e))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76e0f4))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d952546))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3dc9aaa4))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e2696e6))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3e40068e))) ) ) {
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
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f3b9097))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f4a9100))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f1aaa8f))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x00000000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e81d92c))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3eab4eba))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3efea748))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f50b72c))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dc6bce8))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e389a02))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4f61bb))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d81dd1a))) ) ) {
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e4a36e3))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 214748364;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ba93f29))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d40dc33))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdae3e7))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f25af3a))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e9fa398))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f66de01))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f416e04))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f71f99c))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f24985f))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e7d5cfa))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f27890e))) ) ) {
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
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7fea0c))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e81f16b))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e4471b4))) ) ) {
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
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e4cca2e))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20e854))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f3556c1))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3cb3482b))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e23a7db))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f1cf12c))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f34b48d))) ) ) {
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
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3aa137f4))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e149e45))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f3ce369))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 214748364;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e95e2ac))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ee1ffd6))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f240ad0))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d779a6b))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f0e7daa))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f299c8c))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b6406))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e810a13))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3dcf66a5))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e4c7f78))) ) ) {
                      result[0] += 214748364;
                      result[1] += 0;
                    } else {
                      result[0] += 16519104;
                      result[1] += 198229259;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f13e22e))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e7313be))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f0e7ab7))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3d2f9336))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3c833c60))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f3f8b05))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e34f0d8))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3dfb938a))) ) ) {
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
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ec77660))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3df7d178))) ) ) {
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
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f24ff43))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3a2eb2))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e1dd442))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3c96fa84))) ) ) {
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
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3dc5e5f4))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f158106))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ed56ffc))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e080dc3))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5bced9))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f343958))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5bef4a))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3da1da7b))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3c3923a0))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f49f266))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f5ca1e0))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f322585))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f0732df))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f03866e))) ) ) {
                      result[0] += 3767515;
                      result[1] += 210980849;
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
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2b3c60))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ebef694))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f39fbe8))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f545d10))) ) ) {
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eca6bf8))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f6a1672))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f7147ae))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f1aaa8f))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f74ff44))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e6523f6))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ca1ab4c))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ec64b88))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f76b3bc))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 214748364;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de5119d))) ) ) {
                      result[0] += 19522578;
                      result[1] += 195225786;
                    } else {
                      result[0] += 1512312;
                      result[1] += 213236052;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d6b8520))) ) ) {
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e7408d9))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b25c4))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f6d4802))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3eb78ca8))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f08509c))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eef2086))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
                      result[0] += 53687091;
                      result[1] += 161061273;
                    } else {
                      result[0] += 4129776;
                      result[1] += 210618588;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e400000))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f5d60e9))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ea015a0))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eae5365))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e89eecc))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3edec80c))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3db4fb55))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42176e))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ec84cae))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3efef49d))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f714318))) ) ) {
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
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f2c8020))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e9ecb53))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e008850))) ) ) {
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
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f1a646f))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f33ea60))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f19f55a))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7b1800))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f44bac7))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3de5d638))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2da900))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ee79874))) ) ) {
                      result[0] += 214748364;
                      result[1] += 0;
                    } else {
                      result[0] += 20452225;
                      result[1] += 194296139;
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
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3d90385c))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              }
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f089c4e))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ebff972))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f6a3fbc))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f2ebc94))) ) ) {
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
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3cb55ef2))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eeca234))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3cc8f324))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d01b329))) ) ) {
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ee178d5))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f682b95))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f416e04))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f073776))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f14c3f4))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e976556))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f2d0fa6))) ) ) {
                    result[0] += 0;
                    result[1] += 214748364;
                  } else {
                    result[0] += 214748364;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f6c1451))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f4b8088))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3ee93943))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0a2d0e))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e9428f6))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d3d4bf1))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3bcaab8a))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f58ef88))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3edb94d9))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7fea0c))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3eed7342))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f75b9b6))) ) ) {
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
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f3875f7))) ) ) {
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e218d26))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7337ca))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f4b3a68))) ) ) {
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e72949b))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f6686d7))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3eaf8812))) ) ) {
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
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e7eeb70))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e0930be))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f39bef4))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f313be2))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f75a2c6))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f5326c0))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f156484))) ) ) {
                  result[0] += 214748364;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 214748364;
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f291cc1))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ec3d46b))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ec93554))) ) ) {
                      result[0] += 9873488;
                      result[1] += 204874876;
                    } else {
                      result[0] += 161061273;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f7737ca))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3e9aa066))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eeccec4))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f439f56))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e1d4174))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f607b35))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f40fa59))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f1de354))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e1e8bc2))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f4609fe))) ) ) {
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
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3cd90c0a))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e188a48))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e1e72da))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d93404f))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 214748364;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebf0c35))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f30c88a))) ) ) {
          result[0] += 0;
          result[1] += 214748364;
        } else {
          result[0] += 214748364;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e9f82d4))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f3ecb00))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e94dd2f))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7b9043))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dce8295))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6826fe))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f756fa8))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f1294ee))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3af1d3ed))) ) ) {
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
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3a9542))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f612d77))) ) ) {
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
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e943bf7))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d752546))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f04f228))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6a0e41))) ) ) {
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
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f280f))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f66f1fe))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd9ddc2))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f6e2920))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ea86834))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e2f227d))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e9fe08a))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ebecfea))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f16c51a))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e628241))) ) ) {
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
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8fa248))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f77a6df))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f1e1134))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ef6f73c))) ) ) {
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edefe72))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f020d9a))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e410625))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c8dae3e))) ) ) {
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3be631f9))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d2c2ce4))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f252696))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f531d3f))) ) ) {
                result[0] += 0;
                result[1] += 214748364;
              } else {
                result[0] += 214748364;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f71551d))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df28b6e))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f77d370))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
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
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ecbc0c2))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3b840e17))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ec9a416))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f78b924))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 214748364;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f610cb2))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e882364))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2c54de))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f51743e))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f4f75b8))) ) ) {
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed81301))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e1aefb2))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ed877ee))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e233483))) ) ) {
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e0d0529))) ) ) {
          result[0] += 214748364;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 214748364;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f515768))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e5cba73))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7b7026))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2b06f6))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f187208))) ) ) {
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
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f44d5a6))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e86d86f))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5fc5ac))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    result[0] += 214748364;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7bcb92))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1ab368))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f373db0))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e284b5e))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f416e04))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3d9a469e))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2eb55f))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f53c4b0))) ) ) {
                  result[0] += 0;
                  result[1] += 214748364;
                } else {
                  result[0] += 214748364;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eacfb54))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e2516db))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e3324c8))) ) ) {
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
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d8d5f9a))) ) ) {
              result[0] += 214748364;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 214748364;
            }
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3f3187e8))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfe282))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3c088f86))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ef4a03c))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e9f7708))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ec71f36))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d37952e))) ) ) {
              result[0] += 0;
              result[1] += 214748364;
            } else {
              result[0] += 214748364;
              result[1] += 0;
            }
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
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f607b35))) ) ) {
      result[0] += 214748364;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f57d7b2))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3deafa2e))) ) ) {
            result[0] += 0;
            result[1] += 214748364;
          } else {
            result[0] += 214748364;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
            result[0] += 214748364;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f297fb7))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f36c472))) ) ) {
                result[0] += 214748364;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 214748364;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f2ecc4f))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eec985f))) ) ) {
                      result[0] += 0;
                      result[1] += 214748364;
                    } else {
                      result[0] += 28633115;
                      result[1] += 186115249;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5af838))) ) ) {
                    result[0] += 214748364;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 214748364;
                  }
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e476f2a))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3cd7dbf4))) ) ) {
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
