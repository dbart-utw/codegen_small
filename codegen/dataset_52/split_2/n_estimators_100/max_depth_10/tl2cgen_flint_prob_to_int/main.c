
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f43736c))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3da2eb1d))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e5f7a4f))) ) ) {
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
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f0840e2))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d8a1dfb))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee61134))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e4de54c))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d98a5ce))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f04092c))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d8d6a16))) ) ) {
                      result[0] += 1952257;
                      result[1] += 40997415;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3cb630))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f05f4b2))) ) ) {
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
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3efed288))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7417ec))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ea00000))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f57d7b2))) ) ) {
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
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ec16484))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e430e80))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3db05a70))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e69b670))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f280f))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e4548aa))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d0894c4))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ef408d9))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ed63a7e))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3dc15ca7))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3dd121ac))) ) ) {
                      result[0] += 10737418;
                      result[1] += 32212254;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f106540))) ) ) {
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
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eff7a4f))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3d5de15d))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3c088f86))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ef489f4))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e227a64))) ) ) {
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f302118))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8cbf0a))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f24ed92))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f03a344))) ) ) {
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f644816))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f1b92e2))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e10f27c))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0ff823))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e247454))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e310625))) ) ) {
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
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3da3d46b))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f500a28))) ) ) {
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
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3d8d42c4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f00577e))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x39766a55))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c8dae3e))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f7901e2))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1ef74))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d513e81))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e4a86d8))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                }
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f44255b))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f524010))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e600150))) ) ) {
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
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f41f6fd))) ) ) {
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e447ed0))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f48b242))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e77b890))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3eb51e10))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d064452))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f13c750))) ) ) {
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x38fba882))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3b72cf96))) ) ) {
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
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f49a512))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e075e20))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3dc154ca))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f2ce26e))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f221da8))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f6db3d0))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2f0110))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e934a23))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f5fddec))) ) ) {
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6d9652))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7bd662))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3e6bdba0))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3d438088))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea516db))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e01d29e))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 1684300;
                      result[1] += 41265372;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e0d6388))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 2526451;
                      result[1] += 40423221;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f0aac32))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f095768))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ecc88a4))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dab33db))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f205d10))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3e6bdba0))) ) ) {
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
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f2831cf))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f000000))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4fa9d2))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c4725c4))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ef5249e))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3baa3ad0))) ) ) {
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
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e9d6e05))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f28b589))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3db721d6))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f28b04b))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f1f68f0))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3eba9dc7))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3ce718a8))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ebae48f))) ) ) {
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
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e8e1a61))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d81adea))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f2be133))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f510e56))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f3acb54))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e258256))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e27fb6a))) ) ) {
                      result[0] += 1227133;
                      result[1] += 41722539;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3df7a4ea))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3db4f378))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f0b8ab1))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ddcd899))) ) ) {
                      result[0] += 14316557;
                      result[1] += 28633115;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                }
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e81a4be))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f6bb108))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f3ba92a))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e226bf8))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f335d78))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eea641c))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb7c84c))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e7fb939))) ) ) {
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
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3dc9d9d3))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3eb6dbb6))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f63d85a))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f0dbb5a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f3e3b7a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f644816))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3cfab756))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df0a138))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e80d456))) ) ) {
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
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0691fc))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ea29fbe))) ) ) {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    } else {
                      result[0] += 1431655;
                      result[1] += 41518017;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e7299d8))) ) ) {
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
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef44bb2))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e0bb59e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f1a72da))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7cd9e8))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e10941c))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e646738))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e80294a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7ea162))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ef42aed))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9a0514))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f090386))) ) ) {
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
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f406ad3))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e20f51b))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3eab588e))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ede09ff))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d0c2507))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3d9fd60f))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3ddab756))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f6f37ca))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f02186a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3edfe47a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f43a1f4))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ee4039b))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x39ebedfa))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f699ce0))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f697732))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4b80dc))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e425700))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f77f4dc))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4da21e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f2ac083))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e22ec6c))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1d9168))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d91537a))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f6f429a))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f07aa26))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f75b9b6))) ) ) {
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
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f504a0e))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e51c044))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c8dae3e))) ) ) {
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
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ee34a23))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f507fcc))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f5449ba))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f6a8db8))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e62070b))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e0cf80e))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f32afcd))) ) ) {
                      result[0] += 3482405;
                      result[1] += 39467267;
                    } else {
                      result[0] += 354955;
                      result[1] += 42594716;
                    }
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d3e8bc1))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f1c4c5a))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e80587a))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3d5a21ea))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f6a3fbc))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2eb55f))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3201ce))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e4e4f76))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e4f7510))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3badab9f))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed59408))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ec62f5a))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ee33e58))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e547065))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e253b8e))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2cdcdb))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3bb8f9c0))) ) ) {
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
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3df7a4ea))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e81a4be))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3c86b7aa))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3d583516))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f203e96))) ) ) {
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
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e98a526))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f53dfe3))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2947ae))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0ff823))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df5a859))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x38fba882))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ec824b4))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3d074539))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ddb549f))) ) ) {
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
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0e277c))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f1f07f2))) ) ) {
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
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e6fb54a))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3cf0ed3e))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f53ef4a))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f12ef0b))) ) ) {
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
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4b80dc))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f660fe4))) ) ) {
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
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f716580))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3dc7bb30))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f28769f))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d5c0442))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f35ad96))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3dffa440))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3db4f378))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f59dd6e))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f000000))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ee3d85a))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f21974e))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3edba9d2))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f1e4ae0))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3abeb5b3))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3b8de2ac))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e4e22e6))) ) ) {
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
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e2ed3d8))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f36d81b))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f6d1c6d))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e865365))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3eb32421))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5dcc64))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3cd41742))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f073776))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f02fe72))) ) ) {
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3df9db23))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6827fa))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e000000))) ) ) {
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
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3c1595ff))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e13d46c))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e562b6b))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3cfa2489))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e074539))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f08fe9c))) ) ) {
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e991149))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e88d1b7))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3d888f86))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9ba14d))) ) ) {
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f21b6c4))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e90e608))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f505a1c))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4b8130))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3deb40f7))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f2f458d))) ) ) {
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
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5dcc64))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f726224))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f1745e1))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e3ebd90))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d14f377))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f750093))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f729004))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7f9486))) ) ) {
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f5d9ddc))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3f4e87d3))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e5a57a8))) ) ) {
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
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76017a))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3705fb))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3c7eda66))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3efbd70a))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2517d6))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3c5e15ca))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f054413))) ) ) {
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
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d2209aa))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8328b7))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f63becb))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 14316557;
                      result[1] += 28633115;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e766f94))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e9a49e4))) ) ) {
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
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e6be37e))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee1b281))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f16031d))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3de4e50c))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ed9e300))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3c8c0054))) ) ) {
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f531412))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eea4160))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f4f1d93))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3c405920))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d7a7daa))) ) ) {
                      result[0] += 5368709;
                      result[1] += 37580963;
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
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ecedbb6))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f25042e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ebfeef6))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f0ab218))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e23b8e5))) ) ) {
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e058794))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e7a31a5))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5fa6df))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f32afcd))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3a117d6b))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f27ad19))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e226bf8))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e7d5cfa))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3dec5975))) ) ) {
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
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7fea0c))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f32eb1c))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3a584500))) ) ) {
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
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3efe58a3))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1861a6))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3f3190))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f54cd75))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e7639d6))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ebde00e))) ) ) {
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
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edefe72))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d694ee4))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e89a0cf))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 34359738;
                      result[1] += 8589934;
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
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3be0f3cb))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e0594b0))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e265bea))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f04b19a))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f087400))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eed9c8d))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3de602c9))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e57d2c8))) ) ) {
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f57d7b2))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f7fac71))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df0a138))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3d175e20))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eefad6d))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e15a46a))) ) ) {
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
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3b381d))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e152fc2))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3eb18548))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e1e83e4))) ) ) {
                      result[0] += 6135667;
                      result[1] += 36814005;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e38255b))) ) ) {
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
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e9df5ae))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f000000))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3dc13fd0))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e9caab9))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ccccccd))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee1dbca))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5e92a3))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3da64990))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e2ed7c7))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f67b3fa))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f0732df))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e12085b))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e5d1783))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f017e13))) ) ) {
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
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e71782e))) ) ) {
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
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0906cd))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ea12d77))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f3fe22e))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3b7df3b6))) ) ) {
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ecd551e))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3d956eac))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f08f473))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9527e5))) ) ) {
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
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ed03516))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3c3630a9))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f429dc8))) ) ) {
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
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f611244))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef6a162))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f612d77))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3c86b7aa))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3c4db37a))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3d91de68))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f020d9a))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3a68b2))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f61e258))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eac52e7))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f4e4fca))) ) ) {
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
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3ee1d9d4))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2da900))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ecce7ac))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f1d1926))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e775b82))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3eb55715))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f5be5c9))) ) ) {
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
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f55c62a))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dc617c2))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f15b6c4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f3c509c))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d153261))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d92f449))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3c430d30))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ebb6e2f))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f1dbb06))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f65b036))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f4f87be))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3dcbbc))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3dc378ab))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f492696))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e3c88a4))) ) ) {
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f6ef1fe))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f37dd44))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d2afcce))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f23c504))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3d583516))) ) ) {
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
      result[0] += 42949672;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f000000))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f6b2b56))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e1b295e))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f54dcdc))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3f77dc48))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e533334))) ) ) {
                      result[0] += 4994148;
                      result[1] += 37955524;
                    } else {
                      result[0] += 421075;
                      result[1] += 42528597;
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e8c2268))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e7a31a5))) ) ) {
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
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3f479abf))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f44bbc2))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f32afcd))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f2d45b7))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3db2031d))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3d9bf727))) ) ) {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d6a79bc))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2b5dcc))) ) ) {
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
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3d70f27c))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3cd44135))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f736cdf))) ) ) {
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
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d198f1d))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e56f694))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e1290ac))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e5ce9a3))) ) ) {
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0e8145))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eaca6ca))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3da5de16))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3dd8e9f6))) ) ) {
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
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e77dfe3))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ccf95d6))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e9300bd))) ) ) {
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
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f21fddf))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ea00000))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d6602c9))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e439042))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e3c2657))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4b6ae8))) ) ) {
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
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x00000000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f43a1f4))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f53d9aa))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3dd22292))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3da25072))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f654cec))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3e670e))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d479e5a))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e9f67f5))) ) ) {
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
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eaef694))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ec7bd27))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42176e))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f7796d0))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f3ff38c))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f67f2e4))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef6a162))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3db46b26))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f74ff44))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e6d2200))) ) ) {
                      result[0] += 2741468;
                      result[1] += 40208204;
                    } else {
                      result[0] += 363980;
                      result[1] += 42585692;
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
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e675f70))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e7a31a5))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ef63a7e))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3edbbd7b))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ce77708))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e01a9fc))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5b342f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3a2eb2))) ) ) {
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f54dcdc))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3eb8c1fd))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ed9ad42))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e222920))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f4ecba7))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3c762b6b))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f460e95))) ) ) {
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
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4c8606))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eacfb54))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f3027a6))) ) ) {
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x00000000))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5fa6df))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4450f0))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f12af79))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f5ca1e0))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3d4de8))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e107f24))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5f573e))) ) ) {
                      result[0] += 4772185;
                      result[1] += 38177487;
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
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f67d5ba))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f3ba92a))) ) ) {
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
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3ea7559b))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eddbdf9))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f609aaa))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e136502))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f590e02))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ecbd274))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3ef540cc))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ccd35a8))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f4074a8))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e7522a7))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e9872b0))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 5368709;
                      result[1] += 37580963;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e855a5c))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e90ff98))) ) ) {
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
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3cd379f8))) ) ) {
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df28b6e))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ecd104d))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eb766a5))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f348659))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e226bf8))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e17ecfe))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f13d956))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e03721e))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e686ec2))) ) ) {
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
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f4dbf48))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e253a3f))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d6c95c0))) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ede0f3c))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3d8ecbfb))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f2ee6da))) ) ) {
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e96425c))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f3ea066))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f087400))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3bb3bb84))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3dd0fa59))) ) ) {
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f69696e))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dd928e0))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e017c1c))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4a30fd))) ) ) {
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
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d36262d))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3d9003ef))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3e1dd053))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3eda0903))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e8924f2))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edc115e))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f5591bc))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f772df5))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f74ff44))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f34a9bd))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50d456))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e819264))) ) ) {
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
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e27fb6a))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e097786))) ) ) {
                      result[0] += 14316557;
                      result[1] += 28633115;
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
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2957bc))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f1b4a24))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ee4039b))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3de3d9a9))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e60c1fc))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 1717986;
                      result[1] += 41231686;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3dd8d79d))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f156a16))) ) ) {
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
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f6f37ca))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e8c1d2a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f1745e1))) ) ) {
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d94562e))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6cb3e6))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3c84ab60))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e3599ee))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e8b2f44))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f475e20))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3c609fe8))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f30e9f7))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e54a234))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f68ab60))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ea94468))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f386b7b))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3eafe910))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3ea61c58))) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d8a4010))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e8e61d0))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e851394))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e11782d))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e446888))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3dbce075))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d4b1466))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7dd638))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3dcbbc))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e57d2c8))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e618938))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3df12c28))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e94985f))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e1c2507))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 6135667;
                      result[1] += 36814005;
                    }
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ee61da8))) ) ) {
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
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f5b6ddb))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eb5182a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f080000))) ) ) {
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f14678c))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e42c12b))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3f10ce1c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dd866e4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee10e02))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ab2e9cd))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d70f27c))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f470846))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f529c24))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f57d806))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3da7913f))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f54dcdc))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e9d22a7))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0ba344))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ee9450f))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3eddb0de))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e10a288))) ) ) {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3efef73c))) ) ) {
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
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee10e02))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3c14317b))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e0f1173))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3cc6d1e1))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eb8e9f6))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3dd4d402))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0e277c))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d2aa8eb))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e056580))) ) ) {
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
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f1d096c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3f05dc1e))) ) ) {
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
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f27bc2c))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef44bb2))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f3bca96))) ) ) {
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
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df4341a))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee10e02))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e058794))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e00fa59))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e430e80))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3d273d5c))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f79aa50))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ee0a47e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f3217c2))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e84840e))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3b05fb))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e8dc5d6))) ) ) {
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
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4a771c))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e770111))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f065311))) ) ) {
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
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f369e6e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3bbdba0a))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f038e4c))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e42c12b))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ddcc8de))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d42d384))) ) ) {
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
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4d6d5d))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7edd05))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f65b036))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ef30e80))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d7fd0d0))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f2a2878))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb64d80))) ) ) {
                      result[0] += 19522578;
                      result[1] += 23427094;
                    } else {
                      result[0] += 1867377;
                      result[1] += 41082295;
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
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f51bf48))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e33cc8e))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x00000000))) ) ) {
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
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
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
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f2c74fb))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9b50b1))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e65e4a4))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eac41dd))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e058794))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3f1ebc40))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f670ed4))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f7eb464))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ea1389c))) ) ) {
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
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6eb852))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1ab368))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3d974688))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3eb95ab0))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edc115e))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f44255b))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f6cbfb2))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e38f324))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44be0e))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 4772185;
                      result[1] += 38177487;
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
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f70331e))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ecfab75))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e9b1854))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3ef478ea))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e9a3ad2))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f41c4da))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3dbdc9c5))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3c1eadd0))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3ddd46b2))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3ecdef20))) ) ) {
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
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e543fe6))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5b342f))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f5da028))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f0732df))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d28a71e))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f2d5b03))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f1ece46))) ) ) {
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
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f369e6e))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f5d6ffc))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
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
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f526afd))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3eea6df0))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x39ebedfa))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e2003ef))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d37952e))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e3f9c63))) ) ) {
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f56a79c))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3cf58e22))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e4c7f78))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f32a306))) ) ) {
                      result[0] += 17179869;
                      result[1] += 25769803;
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
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e5e0f3d))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f6e6e98))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e4d6f54))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dcabde4))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3ef5fb94))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3cd0d067))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3cfb0b39))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e2aff6d))) ) ) {
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
        }
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f3ff38c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4934ac))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3eb32421))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f716580))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3caa8eb4))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ebba9d2))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e44b9cc))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ebec8b4))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dde1b09))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e56809d))) ) ) {
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f3dc337))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ec00000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f4a4b34))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f400c74))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5c5d64))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f450a68))) ) ) {
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
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42176e))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e812a30))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ea4a81a))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f575547))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d386c20))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e10f3cc))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9dd97f))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2517d6))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e37674d))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 14316557;
                      result[1] += 28633115;
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
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e3a7c5b))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e115b58))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f6cd940))) ) ) {
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f3929dc))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f5b82d4))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f7515e0))) ) ) {
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
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f777f8c))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3ea2e536))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7c2070))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ee3d85a))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ea97eba))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e889614))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e78b439))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d557bc8))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d53dd98))) ) ) {
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
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3e1566d0))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6eb852))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f372d4d))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e30403a))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3cacd9e8))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3c01f7))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f12af79))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3eb9e259))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f26c615))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e64f616))) ) ) {
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
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e587d2c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3edbb108))) ) ) {
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
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7e0f3c))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dc617c2))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f4a4b34))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e64024c))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f7db6c4))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ea8fe48))) ) ) {
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
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3b4bd124))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f0aa550))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e99a6b5))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f6b0be1))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3ddce5b4))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4cecea))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f4a29c8))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f1b92e2))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ecf0c34))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f43736c))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3cf58e22))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2a5a9a))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f256388))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
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
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3eab0554))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e9ae48e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x00000000))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e943bf7))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3edf4e66))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3ea19ae9))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3dd197a2))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e7f6556))) ) ) {
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3edc74fc))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3eb533b1))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f070cdc))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e49b281))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f31c52e))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f499503))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f71b90e))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f06a7f0))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eea88ce))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f19a272))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3de23b7a))) ) ) {
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
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e6e94ee))) ) ) {
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
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b6406))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d27bb30))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3be368f0))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f77d4bf))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dbbbadc))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d93eff2))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f076e2e))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ed99503))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f386b7b))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 28633115;
                      result[1] += 14316557;
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
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e50c34c))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ee94f8c))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eea0a52))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb11fb4))) ) ) {
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
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ef147ae))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f7257fc))) ) ) {
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
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3ed4de7f))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f6a6f40))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ec919ce))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e3dc338))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e847992))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e7c3b50))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ed501e2))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dd1800a))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3ee98a87))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de1cd60))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f156a16))) ) ) {
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
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eabcdde))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3dec41dd))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e9da5ba))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3efebe38))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3c4ed917))) ) ) {
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
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f1a62cc))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3c0509c0))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d549518))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0ff823))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2e9004))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e14e7ac))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ecfb4a2))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3eeb7aa3))) ) ) {
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
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d8d6a16))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3eeffac2))) ) ) {
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
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ea5f84c))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d03afb8))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eacc836))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d91a75d))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f3d8d26))) ) ) {
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
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3e27d0))) ) ) {
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
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f2080c7))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef88701))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d29b280))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f60fe9c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f576fd2))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f5ef0ae))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eb24f22))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e939d5e))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f701744))) ) ) {
                      result[0] += 2863311;
                      result[1] += 40086361;
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
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f37afb8))) ) ) {
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
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f7515e0))) ) ) {
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f60902e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e96b7aa))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e202c90))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f4595ab))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3dce171a))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ed0fba9))) ) ) {
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
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d3d1244))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f01551d))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3eaf4fb6))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e4c7f78))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f1417ec))) ) ) {
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
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5d172f))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfe282))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e322292))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e003c4b))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8387be))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3ce50c60))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f39782d))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e179d0a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ec9ffd6))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dddcc64))) ) ) {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3edf689c))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e2cd749))) ) ) {
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
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d0aff6d))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e851d69))) ) ) {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3de7c06e))) ) ) {
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
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dc0a526))) ) ) {
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
    } else {
      result[0] += 42949672;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3dc88f86))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e37f0ed))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e90a9bd))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3c4985f0))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f0f3387))) ) ) {
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
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f7eb464))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7e4ece))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0888f8))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee31d92))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3c4b5350))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0ff823))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e1a526a))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e34f0d8))) ) ) {
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
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f76e0f4))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e2ed7c7))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3d198f1d))) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ebe6f93))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f3c509c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f44ec42))) ) ) {
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d93404f))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dc2046c))) ) ) {
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3e670e))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4cbe0e))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3c55f99c))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f29714c))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e96b1c4))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ef0811c))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7bba34))) ) ) {
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
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f2b1ee2))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f137122))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e218698))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3c6fb2aa))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e78548b))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
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
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e4562e0))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e094d94))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e9ac27b))) ) ) {
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
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f12af79))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f78092d))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de9ccb8))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e03c212))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f716580))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f095619))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f0b5ec8))) ) ) {
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
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e31d3ed))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ee27e52))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e160e95))) ) ) {
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f5935fc))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3dec1d2a))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f612d77))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e97d178))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f6c82be))) ) ) {
                    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e9ebf88))) ) ) {
                      result[0] += 11930464;
                      result[1] += 31019208;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5bef4a))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7d8740))) ) ) {
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
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d064452))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3ece2ac3))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3f3a233a))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2ebd3c))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e6fd60e))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f5aa25e))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e939d5e))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f27ad19))) ) ) {
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
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e2516db))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3c89613e))) ) ) {
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
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f328db9))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f04f616))) ) ) {
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
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f779432))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0ff823))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1dba0a))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f36b075))) ) ) {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e8196fb))) ) ) {
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
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f68fca4))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x00000000))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3d21f4b2))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e90ff98))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3eaf3040))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0ef34e))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ebb2f44))) ) ) {
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
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f6337ca))) ) ) {
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e65e4a4))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3b82e87d))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d058256))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3ec00000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c8dae3e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3effbdce))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e936502))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3d03d9a9))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f2d93b4))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c6fbd))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e3b606b))) ) ) {
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3db6cb52))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f7fac71))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b6406))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb991bc))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3c6fdc9d))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e659c8d))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e0602c9))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e5b2570))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3eb4855e))) ) ) {
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
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c55f99c))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d56f545))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f6128e1))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3da8c155))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3dcc8606))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3b65b424))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ed74b1f))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e06f544))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e8f9486))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c56d6))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e3cd0bb))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x38fba882))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3c766a55))) ) ) {
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
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e110b63))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f26ce46))) ) ) {
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f35f212))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3705fb))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f219b3d))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eb66666))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f59e0b5))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f2d45b7))) ) ) {
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
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f1c6fbd))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ea00000))) ) ) {
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
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3f32df))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x38fba882))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ddabc95))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e7104d5))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3b72cf96))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e2cf180))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f189b52))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e29b520))) ) ) {
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
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f5935fc))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4cecea))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3dfd07c8))) ) ) {
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
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f761f9f))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f098938))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f4b8088))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d2c8b44))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edfc7a4))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f7f68f0))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f2a5461))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0260d4))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f02a20a))) ) ) {
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
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e8badc0))) ) ) {
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
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3d83b795))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ed85532))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d3b98c8))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5f573e))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f26e43b))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3c9a415f))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f084817))) ) ) {
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
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f12d480))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3165e))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f40a8c2))) ) ) {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3d8dcb15))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c6fbd))) ) ) {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbaa79c))) ) ) {
                      result[0] += 28633115;
                      result[1] += 14316557;
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
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ec00000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f316724))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f2202c9))) ) ) {
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f44cccd))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f3425af))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e01f4b2))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e933483))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3c394d94))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de38866))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f555572))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f545fae))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f7a97e1))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7f6ed6))) ) ) {
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f06a79c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbaa79c))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f076e2e))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ec346dc))) ) ) {
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
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3d9158b8))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0cb19a))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3deafa2e))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9527e5))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f252fc2))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e3d2200))) ) ) {
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
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4d6d5d))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3eae9a2c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e8b5c7d))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f67f2e4))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f44bac7))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ba93f29))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ee4039b))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3dd22d0e))) ) ) {
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
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f72b702))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e22fec6))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
                      result[0] += 4294967;
                      result[1] += 38654705;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d027a63))) ) ) {
                      result[0] += 28633115;
                      result[1] += 14316557;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e7111f1))) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f0732df))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e01b328))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7f08ee))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e02d235))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e30678c))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f02f694))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ed9cac0))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 21474836;
                      result[1] += 21474836;
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
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f5691a7))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f634a23))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f4ec4c6))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e2ca2db))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3d9a6b51))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc2edbb))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0e5c92))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3ee2dc0a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7e4ece))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f63d85a))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f39bf9c))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f5b72c5))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7bba34))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef1bda5))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de9ccb8))) ) ) {
                      result[0] += 5368709;
                      result[1] += 37580963;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f395034))) ) ) {
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7e425c))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f5418e8))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f06ddad))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ddb352b))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3dd9e300))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3c9d883c))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3df396d0))) ) ) {
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3dc67382))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ccca2dc))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e4b2e9c))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f25930c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e99dbcb))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ef0811c))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f515768))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed7f77a))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e846f16))) ) ) {
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
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e983a54))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d98c543))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3b8bc170))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3de262cc))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f34b48d))) ) ) {
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f21b962))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f4b1d3e))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f6f08ee))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3f3190))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb0b4e2))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f03079e))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f37938a))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e142071))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6b620f))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f4beb5c))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 876523;
                      result[1] += 42073149;
                    }
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f7fcaea))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f0c06e2))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3edba68b))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f581d2a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e8a99d9))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f3eb218))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f5935fc))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f00c1a9))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3da7ecff))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f3c9d49))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e20ad04))) ) ) {
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
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f128e60))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e0c0ebf))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f219b3d))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f56209a))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f364b34))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e4154ca))) ) ) {
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
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f14faad))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f0aa550))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3eec779a))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e836263))) ) ) {
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e40d1b7))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f72594b))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3df4f8b6))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e96abde))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3d20afa3))) ) ) {
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
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7e7c07))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f21c486))) ) ) {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f5c1798))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f1bacc5))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5935fc))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3d42de01))) ) ) {
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
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f1878ea))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3a2eb2))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5cd552))) ) ) {
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
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f682c90))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e09ff))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f09cc64))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3922877f))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3b2b606b))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3d6388))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f4bc16a))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f40fa59))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e15460b))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3cf6fd22))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f2ac083))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f6afec6))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1dba0a))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e62085b))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d98a5ce))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f42b7fe))) ) ) {
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
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f0af88c))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3eee5a9a))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f766f3f))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3b712c00))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3da7913f))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0bc01a))) ) ) {
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
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3c7eda66))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f3adcb2))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e3c88a4))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f07eb07))) ) ) {
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
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e49f40a))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f168390))) ) ) {
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
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f14c9da))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e4cf180))) ) ) {
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
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d61815a))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3d2ac860))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3922877f))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3cbca969))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f0bd31c))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x38fba882))) ) ) {
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ee4039b))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f44bac7))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efddacf))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f255571))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f357492))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d5bc558))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3d5e108c))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d1e3fbc))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f02fe72))) ) ) {
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
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5e28cc))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f2ddbcb))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f3ff38c))) ) ) {
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
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ef665be))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f34b48d))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f57e61d))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e970111))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eed9c8d))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f000000))) ) ) {
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e08d3ae))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3b0a47ed))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3e6331e3))) ) ) {
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
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3b72cf96))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d5dcc64))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e90e411))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e1b9629))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e8a3cc9))) ) ) {
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f716580))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f510bb7))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7adb62))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f087400))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x00000000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f0840e2))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e979485))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95bf48))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e037b4a))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0e277c))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f27126f))) ) ) {
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
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3dedfce3))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f038280))) ) ) {
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
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f300000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f6a6f40))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0d32b6))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e4bf9c6))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ac1fc8f))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5a3540))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f494f38))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f28769f))) ) ) {
                      result[0] += 3955890;
                      result[1] += 38993782;
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
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f5b280f))) ) ) {
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
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f15a21e))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d5ba5e4))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e06d71f))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f138280))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f4ff877))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2dfd37))) ) ) {
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3b3fb15b))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f523a2a))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d2a8eb4))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e1e7968))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ec88e37))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3c113e81))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e90adac))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f6e04c0))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d9c169c))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d9d60ea))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef6a162))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f51c822))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2f089a))) ) ) {
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
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d93404f))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e9da272))) ) ) {
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
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f03079e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e0cf80e))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3dffa440))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9dd97f))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3da41b32))) ) ) {
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
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e59999a))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3dbaa4fd))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f611244))) ) ) {
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
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ded42c4))) ) ) {
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e37c5ac))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f02186a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f6686d7))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3eb65216))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ec425af))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eaeeeb7))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ddbcfd5))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d242071))) ) ) {
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
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3705fb))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f004da9))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f6ac3ca))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7bba34))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f204f4c))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 7809031;
                      result[1] += 35140641;
                    }
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ed49082))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 42949672;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f411bc6))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3eaaebc4))) ) ) {
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
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e5bb98d))) ) ) {
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
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e381451))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e6bab21))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e7115df))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 42949672;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7e4ece))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f7901e2))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7dfa44))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e5cc3a0))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e80a526))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              }
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d8811b2))) ) ) {
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
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3d888f86))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3f1e3a))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f29cf03))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7e96e6))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ebd7a78))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e01b328))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f65e8e6))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f616430))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f6afcce))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0ff823))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3cf0f7ba))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e0f559c))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f0e809d))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 42949672;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f16f838))) ) ) {
                      result[0] += 3303820;
                      result[1] += 39645851;
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
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3dbbdf8f))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d0cf180))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    result[0] += 42949672;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3dd44912))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f28fb01))) ) ) {
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
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eea2142))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f1efa83))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f79d7dc))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3b8b4380))) ) ) {
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
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3a811b1e))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdae3e7))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3b72cf96))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d17a787))) ) ) {
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6b620f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f23721d))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3db721d6))) ) ) {
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
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0a2d0e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dbec80c))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3eaf3626))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dbb938a))) ) ) {
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
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e3486ad))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee48754))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f3d8d26))) ) ) {
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
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e8d7881))) ) ) {
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
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f6ba97e))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e10307f))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e906f69))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e10bb6f))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f6afec6))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9348d4))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3dda5b96))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f29ca18))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                result[0] += 42949672;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2f089a))) ) ) {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f5258a3))) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3deafa2e))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3efa454e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e762a1c))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ee1667b))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f6e9835))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3705fb))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3f90ea))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3dbf01b8))) ) ) {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3df2617c))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7fc361))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 3904515;
                      result[1] += 39045157;
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
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3ee2b0c8))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 42949672;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e117ebb))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f117732))) ) ) {
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
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dcaa10e))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3da4284e))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e16b7aa))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f5dea36))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3ca4b33e))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f6619b9))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e075e20))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e9428f6))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3dc809d4))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f056b12))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3dcbde40))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e96a93f))) ) ) {
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f5c5921))) ) ) {
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
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e4b00bc))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3b21dfb9))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f302118))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f4da21f))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e08572a))) ) ) {
              result[0] += 0;
              result[1] += 42949672;
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3ea11e64))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f63d85a))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e42641b))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e06d71f))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 42949672;
                }
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e966cf4))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f413848))) ) ) {
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
        }
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 42949672;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f1d83a5))) ) ) {
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
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c6fbd))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e1861a6))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e9da5ba))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eb01e26))) ) ) {
                      result[0] += 2386092;
                      result[1] += 40563580;
                    } else {
                      result[0] += 21474836;
                      result[1] += 21474836;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eba3982))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e3042d8))) ) ) {
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
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e6c7e28))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f729004))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e7313be))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ea00000))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d6f73c0))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e5ce9a3))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3f10ce1c))) ) ) {
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
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f0814a5))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f626fe7))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f13d956))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
                result[0] += 42949672;
                result[1] += 0;
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f0d5422))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f372d4d))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 1034931;
                      result[1] += 41914741;
                    }
                  }
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3da4c2f8))) ) ) {
                result[0] += 0;
                result[1] += 42949672;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f65b036))) ) ) {
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3e859a95))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e059360))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3ece2ac3))) ) ) {
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ec2d8c3))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
      } else {
        result[0] += 42949672;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f43e5c9))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 42949672;
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eea88ce))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f0af4f1))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1ef74))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d4029f2))) ) ) {
                      result[0] += 0;
                      result[1] += 42949672;
                    } else {
                      result[0] += 32212254;
                      result[1] += 10737418;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 42949672;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ebb074b))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f5c53e3))) ) ) {
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
            } else {
              result[0] += 42949672;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f7416f0))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 42949672;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f212b80))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f300000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f000000))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ece0b4e))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 42949672;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da0663d))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb991bc))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e05bc02))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f761ef7))) ) ) {
                  result[0] += 42949672;
                  result[1] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dcd4024))) ) ) {
                    result[0] += 0;
                    result[1] += 42949672;
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3ef8d1b8))) ) ) {
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
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f42786c))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed99aea))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f5fa5e4))) ) ) {
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
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e4f0846))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x00000000))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3db05a70))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e7d1782))) ) ) {
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f661576))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f3ea066))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3eb5c67e))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3ea7342f))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f5935fc))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e000000))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
            result[0] += 42949672;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
              result[0] += 42949672;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea60808))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  result[0] += 42949672;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f23c558))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
                    result[0] += 42949672;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee10e02))) ) ) {
                      result[0] += 42949672;
                      result[1] += 0;
                    } else {
                      result[0] += 1814774;
                      result[1] += 41134898;
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d89eecc))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3cdc13fe))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dd3dd98))) ) ) {
          result[0] += 42949672;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ee76dda))) ) ) {
            result[0] += 0;
            result[1] += 42949672;
          } else {
            result[0] += 42949672;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ec8adac))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d530be1))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f783fe6))) ) ) {
          result[0] += 0;
          result[1] += 42949672;
        } else {
          result[0] += 42949672;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
      result[0] += 42949672;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
        result[0] += 42949672;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ea2bb45))) ) ) {
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
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3b381d))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e008073))) ) ) {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d715619))) ) ) {
                  result[0] += 0;
                  result[1] += 42949672;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e5d9019))) ) ) {
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
            result[0] += 42949672;
            result[1] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_52/split_2/test_data.csv", "r");
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
