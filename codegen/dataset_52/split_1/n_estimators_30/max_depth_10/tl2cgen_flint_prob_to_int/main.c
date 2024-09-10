
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f168922))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e02378b))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x00000000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3d8ecbfb))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0888f8))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0fac71))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5fa6df))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f072b02))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f273b10))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 28633115;
                      result[1] += 114532461;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3cc1b328))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f3c6c22))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f1a33f0))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f533190))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f3b6168))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e60624e))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d8d6a16))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f27890e))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3c9d7dc0))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f50c0ad))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2f089a))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                }
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3efcf80e))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f2f357e))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f05efc8))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e3aebc4))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5b6ddb))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f3eb218))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f55af8e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e7c91d2))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e278961))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e0930be))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ea2a066))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f019a41))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x00000000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5a887a))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d3d4bf1))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ee7d566))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e2bc01a))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f24ff43))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f2f84ca))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ee769ec))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ed9613e))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb48fda))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3dd4a234))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e8d1245))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f4c8606))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee46499))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3ddc486b))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e60995b))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f002de0))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e94e65c))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f36b075))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4381d8))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e90a1e0))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f5b6ddb))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ede6f93))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e9a23e2))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee46499))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3b54024b))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e9f7708))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e6974e6))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb5249e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ed936a4))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ecd1cc1))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d2a4a8c))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ddfc654))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7a97e1))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x00000000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d9367a1))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e448fda))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3c3588e0))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f383958))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f39f655))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f6c1451))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e8d38ef))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f2f5200))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f05fe32))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed20ee9))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f032ef1))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f39ffd6))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e19bf9c))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3e24ab60))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f031f8a))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d6223e2))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eddbdf9))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f136849))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f4b2767))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ed56ffc))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2c62a2))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7e7c07))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbaa79c))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e96e04c))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e971de6))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3d12934a))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4aa79c))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3aee63))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e8a8390))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3eab3bb8))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3ecda709))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e87a440))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c8dae3e))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d214cec))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e3c5d64))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e4628cc))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e058e22))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f228630))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5c5d64))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1db76b))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d1cbbc3))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f328db9))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ea22f06))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e8406e2))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3dc7f23d))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e258256))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e073d5c))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e92b607))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d05e5f3))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ebcb87c))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d0a03c5))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f1a8e0d))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f383958))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2c54de))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f591490))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e5cba73))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3cb630a9))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e61f213))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e81d92c))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e8ef49d))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f26324c))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ede1284))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x39ded289))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e9a5a47))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f6e9835))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e1c1fc9))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3edcf80e))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e516873))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ab78034))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c66eeb6))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e36ba4a))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f28769f))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f64a7c6))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ec14f8c))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c2732e0))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e0c471b))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5bced9))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76e0f4))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f6e6e98))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f0c1451))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e35c67e))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f030c35))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3a2eb2))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f43736c))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f3ff38c))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3efa0d9a))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3e255da2))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d3c89f4))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eebb108))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e055c53))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e06277c))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3dc5e5f4))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f44bac7))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e7fe47a))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b6406))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3c4692f7))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f20c9da))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e3c6e6d))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e4f9486))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3e5dbb5a))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e9782d4))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e88b43a))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4cecea))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3dd21038))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f3b5f1c))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e90941d))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ee0fe48))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81d68c))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e10f27c))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d9ea359))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2e555c))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e2b1466))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f679432))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f51743e))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea2e87d))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e1b2e9c))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ea92e1f))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4a5b96))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e50fa59))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3db48fda))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3db9628c))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d325700))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f6815f4))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3bc0ad04))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x39473ac0))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e8c91d2))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e5b2420))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2cfa59))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3ae3e7))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ea22f06))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f2202c9))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3a811b1e))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ecf227d))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f378c00))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3ec13554))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0d172f))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1583a5))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f02fec6))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f4baa26))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f1af2a6))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3f3716b1))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f49f266))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e94d35b))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f1d70a4))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f34a9bd))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f5f1aa0))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d3d4bf1))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e6172f0))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3dce2198))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f1eef5f))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ecdbc02))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f761f9f))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f3579d1))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3efcf80e))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4f9c62))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f75ec81))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3c833c60))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ef17050))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3edb8130))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e4e5de2))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ec17050))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f3ef838))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5bced9))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e959946))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e8fd2c8))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3ec947ae))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3eafb5f2))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e97544c))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3abe0ded))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ab78034))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3c553cde))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f5cdcdb))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1583a5))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f654cec))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e873eab))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3efe147b))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e45119d))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d9249e4))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f65b036))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed59408))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7ee979))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3eb33b11))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f1eef5f))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3d8cb7d4))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e925e36))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f12493c))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3b352c))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f2c65e8))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e2154ca))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ec3c409))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6db328))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e19bf9c))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ca2680a))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc30d30))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7e4d7f))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f16a066))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f313ed5))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3b983510))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e6e7ab8))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f400000))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f219b3d))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e54816f))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 6817408;
                      result[1] += 136348168;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e924010))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3dd61e50))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f04fca4))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3bfe9b80))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f1cafa3))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b25c4))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3da1da7b))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3dcce704))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e9355ef))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3db227d0))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9dd97f))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e956c0e))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2c1648))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3dcefdca))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3eec779a))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ebf1562))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3eb84578))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb705a7))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f57d7b2))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f3e31f9))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e20a138))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f39c582))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5dcc64))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f6b2b56))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed7f77a))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e523cc9))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ed04f4c))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ccc5975))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f17f91e))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3eef69ec))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f021b5c))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f0fc6fc))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3da57a78))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f04624e))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f51743e))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3ed4de7f))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e961912))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e9860fe))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3cf73c0c))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d85eb32))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3c6703b0))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3ec9e59f))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3ed6a6a0))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f53b15c))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e5fd60f))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d68c694))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f25042e))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ee8ba1f))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f609aaa))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5a887a))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e4fb54a))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e261134))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ef4e854))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76017a))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f255571))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3db074a8))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3de22bbf))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3eab8716))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0888f8))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c6fbd))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f2d45b7))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eaebc40))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 40904450;
                      result[1] += 102261126;
                    }
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f02b6ae))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e111f0c))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 143165576;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f10b392))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f15b6c4))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                }
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3dab923a))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f0bcc3a))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef03c4b))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ec489f4))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ea4855e))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3d0577da))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eca6bf8))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f59c0ec))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3de08d8c))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7ecb00))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f740d1c))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f3b160a))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3d9a469e))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c6fbd))) ) ) {
                      result[0] += 7535030;
                      result[1] += 135630546;
                    } else {
                      result[0] += 0;
                      result[1] += 143165576;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ee326c0))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f1b92e2))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3cf7ee4e))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ec6ca03))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e6ac860))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3dd0fa59))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e355b03))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3cf505d1))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb30b39))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d40dc33))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3df2cf96))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3c8d25ee))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3cfc3b4f))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3eb0d306))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ed93016))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0cf51b))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e956c0e))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f56641b))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e39c62a))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ea92e1f))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3df19f80))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f08f473))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3dda2489))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f144a0e))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3da25072))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f57e671))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f1aba9d))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3d95d788))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e6a3982))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de9ccb8))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f331173))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ee88312))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f30faad))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e227525))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3d36fd22))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d1a9004))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f39f655))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e142071))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3eeab218))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e0930be))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f5bced9))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3daff195))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5fa6df))) ) ) {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e4081c3))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ea04ab6))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e587bdd))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f442c90))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ee273d5))) ) ) {
                      result[0] += 143165576;
                      result[1] += 0;
                    } else {
                      result[0] += 2346976;
                      result[1] += 140818599;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f189eed))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e2a0664))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c8dae3e))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b25c4))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2da900))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0a9dc7))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3dae5604))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e10b8d0))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e897636))) ) ) {
                  result[0] += 143165576;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e2cfd4c))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3eee8fb0))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3d93c600))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f3b0164))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4c7208))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f3929dc))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f100000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f59df66))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f37e4ce))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d8e2eb2))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3d20c49c))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e345f5b))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e1317ad))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e819264))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d5b4246))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3e1cb684))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e14894c))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e3324c8))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f30a32f))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7adb62))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea765fd))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5b6ddb))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e874688))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f51743e))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f42b50b))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e53e037))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dd6ddad))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eecba74))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3cae09ff))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3e865d3a))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f30f766))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5bef4a))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e9922fb))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e05b6c3))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f04c597))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f109279))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f49f266))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc85879))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edf6e82))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d9e4a38))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ec42aed))) ) ) {
                      result[0] += 0;
                      result[1] += 143165576;
                    } else {
                      result[0] += 119304647;
                      result[1] += 23860929;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 143165576;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 143165576;
                }
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f7a2db6))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e8d158c))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e4fb54a))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3de1522b))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3efed9be))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3eb22fae))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3edd8e22))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eece7ac))) ) ) {
                    result[0] += 0;
                    result[1] += 143165576;
                  } else {
                    result[0] += 143165576;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eff7a4f))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3ae3e7))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f61ec2d))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f508f32))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e133482))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f40a32f))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3dd4fdf4))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f6619b9))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f41989e))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e574928))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3705fb))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f656f00))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4e6bf8))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e9898b3))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2633f0))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e08e9f6))) ) ) {
                  result[0] += 0;
                  result[1] += 143165576;
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f35f212))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4b0d30))) ) ) {
                    result[0] += 143165576;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3eb0d306))) ) ) {
                      result[0] += 28633115;
                      result[1] += 114532461;
                    } else {
                      result[0] += 1974697;
                      result[1] += 141190878;
                    }
                  }
                } else {
                  result[0] += 143165576;
                  result[1] += 0;
                }
              }
            }
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d87ef9e))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f100000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        result[0] += 143165576;
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
