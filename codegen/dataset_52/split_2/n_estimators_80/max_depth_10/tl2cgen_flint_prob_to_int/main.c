
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e95475a))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8e3886))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3dcbf877))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e7509c0))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e141894))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ec24207))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f75f602))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e1f23cc))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3deacb00))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eb01e26))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ebaa844))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f2dd8d8))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f336f2a))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f18aea8))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3ef28588))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3c1eecc0))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d0c2507))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ebe19b9))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d03f91e))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f1745e1))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d87bdcf))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee523f6))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f661576))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f372d4d))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f7209fe))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e32f2fa))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e10941c))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f692a84))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e41cfff))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f0fa4e8))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e2eeb70))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f581d7e))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0e30a9))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7edaba))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3c293f29))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3df91149))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ebcc78e))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e224894))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3f90ea))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9348d4))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f0daaf8))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e400000))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3d79cb68))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3cbf1412))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f0000fc))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e6fc266))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f24ed92))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e5b313c))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f2e5b96))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x00000000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f45628c))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3c752fc2))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d8c9d9d))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3eca7914))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ee6f156))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f3164d8))) ) ) {
                      result[0] += 32212254;
                      result[1] += 21474836;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f17cf2d))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dbbbadc))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f200000))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ed4f228))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3db14b9d))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3efe3498))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3da4ff43))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e430e80))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3827c5ac))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e9deb32))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3d533094))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9904d6))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e429b28))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f3a2eb2))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3eee5a9a))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f12af79))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3efbbd7b))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea7c30d))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3de7ef9e))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d63c750))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e191299))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e438866))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e652934))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f399a96))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f57f91e))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d12ad82))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3c116873))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ee4ed92))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e74d6a1))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3d5db76c))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e2029f1))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
                      result[0] += 1709779;
                      result[1] += 51977311;
                    } else {
                      result[0] += 21474836;
                      result[1] += 32212254;
                    }
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3d8d42c4))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f16031d))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3cc97b74))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eab1466))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3eef6f2a))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3ea5f8))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e90ac5c))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f77cd8a))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3decd4a8))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f372d4d))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de9ccb8))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f34840e))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0a1b08))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eff58e2))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f19999a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f22abde))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ee147ae))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f65b036))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f32afcd))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2e85dc))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef09ca2))) ) ) {
                      result[0] += 1731841;
                      result[1] += 51955249;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e718938))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d5cfb))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e4703b0))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f003761))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e2703b0))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f4183a5))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3effe718))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e425460))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f18d306))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef807dd))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f68ab60))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f54dcdc))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f000000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3df21038))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee51a22))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3adcdb38))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e9df1bf))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eaee19c))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3c0d64d8))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3cdac472))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x39766a55))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f60fe9c))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4934ac))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9dd97f))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f12978d))) ) ) {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e47a4e8))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ed99aea))) ) ) {
                      result[0] += 7669584;
                      result[1] += 46017506;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e107f24))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3eb94707))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3daae538))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3deebc40))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d3b98c8))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e7209aa))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f43e5c9))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e775643))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee77a4e))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3df465e8))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ec6b5b3))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3ee2dc0a))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e6667b6))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e3ebd90))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3db19f80))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d94562e))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d3b98c8))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3df72c52))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3eff3c0c))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6dba5e))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f1586ec))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ec23ec0))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f0dea8a))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e10941c))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f51af3a))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3da2b94e))) ) ) {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3ec33722))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e253a3f))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f100000))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f2ce26e))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e024745))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e446888))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e891926))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb64d80))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3cca42af))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e20980c))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f1104d5))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0c7cd8))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e60624e))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e619a42))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e936cde))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e842ce4))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f5ca1e0))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edfc7a4))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f21d1f6))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e3b98c8))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 4880644;
                      result[1] += 48806446;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f3f98c8))) ) ) {
                      result[0] += 35791394;
                      result[1] += 17895697;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3d81ecd4))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ddabc95))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3908509c))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3df72c52))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3d5374bd))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7bd662))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e8f4880))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f653a92))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f3b5e20))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f1b2aae))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea516db))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c2656))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3c2b2182))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e08c693))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3f1e3a))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f28b7d4))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7c41dd))) ) ) {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e3db76c))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f49f948))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e3b4a24))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e142071))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3dd85c68))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4ba5e4))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f7901e2))) ) ) {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9dd97f))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2b0ed4))) ) ) {
                      result[0] += 23860929;
                      result[1] += 29826161;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f076167))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3edf7f8d))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3a956c0d))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e0f2cfa))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e8fbf1e))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3cbf1412))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x387ba882))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ec176de))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6718a8))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3c347842))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3c5527e5))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e0ae148))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5fe08a))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e364452))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e10bb6f))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d9590c1))) ) ) {
                      result[0] += 35791394;
                      result[1] += 17895697;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f736cdf))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3cd44135))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3dcfaace))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dcaa10e))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3da4284e))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdd590c))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e55f84c))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f06602d))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f5fddec))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ec562e1))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7ba637))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3c9d5e48))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f13d178))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f525d8e))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3cf21d54))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e898dce))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 3579139;
                      result[1] += 50107951;
                    }
                  }
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7e9dc7))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7417ec))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e800000))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3cf58e22))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8a7914))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f076e2e))) ) ) {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f2613d4))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3e107f24))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f510e56))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f500dc3))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edc115e))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ec820c5))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f1523f6))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eb62585))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e839c0f))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e110b63))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e214120))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ebe6a55))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d650720))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3d1729b3))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c8dae3e))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e07a398))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e4df267))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f308606))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e2aaa3b))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42176e))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed81301))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0d335d))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f06d0e6))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f169ccc))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f633cb4))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5cd552))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d262cba))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e4562e0))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f271562))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c56d6))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0bdcf0))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f0085b2))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f12af79))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f604136))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f558e76))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2263c7))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e3e0760))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f581d2a))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e32680a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f09d346))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f149279))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef44bb2))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e265d3a))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e883d9a))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e543fe6))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e2f0069))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f54a969))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5fa6df))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7b21d5))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2263c7))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e54816f))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 1851279;
                      result[1] += 51835812;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ebb9432))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e3e8e60))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e286594))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3da8fda0))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3cc13554))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3eb5efc8))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec100e6))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3d47cd8a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f18b589))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e828e0c))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f63d85a))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f515768))) ) ) {
                  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7f7d42))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 5368709;
                      result[1] += 48318382;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f330e2c))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3acbd120))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e202c90))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x387ba882))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f0e42af))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3dcb7564))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3b7d4bf1))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3cea7efa))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3a790980))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ee3f727))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f7901e2))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dfcd0bc))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e23fe5d))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f21e450))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5325c4))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e9fe08a))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3be5de16))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e8943c0))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e40663c))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e60995b))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f22c8b4))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e167cae))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f7a002a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3db505d1))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dee8534))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e48a47e))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e29c23c))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3c81cd60))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3dcc2ce4))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d9c30d3))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3efd0dae))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f226d48))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e3db76c))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0d335d))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f115df6))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e3c88a4))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e634acb))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ee8f7ba))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e381451))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e014cec))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e2e6afd))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eb71f36))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e91ed7c))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5a3540))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f683fe6))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e218937))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f017493))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3b381d))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ee7689d))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e41dbcb))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f563f68))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f2f07f2))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f389aaa))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d800000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e29fa98))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de0aa65))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3ebe9100))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f050236))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ebaa844))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3eddaa50))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3da5de16))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f30346e))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e143808))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f08a0e4))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eaf0e2c))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0d782d))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0a42af))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f251394))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f11bb5a))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ec1a21f))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3d89f40a))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f1adfa4))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f690efe))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f100000))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3da8c155))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3eb96b12))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e33e426))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3ec234ec))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ab2e9cd))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3efb94d9))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e00fa59))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3eb01062))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4a771c))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3eb8533b))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df0a138))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3ea795d5))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3dbdd6e0))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f347358))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ded3847))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0bfc12))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f673626))) ) ) {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f7b160a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5cd552))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e51743e))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e1c5586))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb64d80))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e037b4a))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3d1bea0c))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d3c5586))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7053e3))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f37e4ce))) ) ) {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f2d45b7))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f2d7881))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3d03c4b0))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d3e8bc1))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f0aa550))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d29d734))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f0f38c5))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3dcf9db2))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e418d26))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3efe809e))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d530be1))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3efa0cf2))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 53687091;
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3dab0f28))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e3e8e60))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3d3fe5c9))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ba4d2b3))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f39460a))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3eba599f))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3ebea93f))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3d8894c4))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3ae3e7))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3f1e3a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f0ceee1))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ef37803))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3d183516))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4b8716))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed71d3e))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e3729b2))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e01b328))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f3ecb00))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f3ff38c))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d7a82e8))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3dfc0443))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ec2f598))) ) ) {
                      result[0] += 40265318;
                      result[1] += 13421772;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2dbcfe))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3f90ea))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f565f31))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e133482))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x38fba882))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3bf2cf96))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3cca03c5))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3cea7efa))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f27f77b))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f52d773))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f6a8db8))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f31c52e))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f7416f0))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f4e7b0c))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ee82e88))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f348366))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f61883c))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6eb852))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e0b367a))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f08e464))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e852b2c))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e2555c5))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d63c750))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9527e5))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e0eee10))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f08a0e4))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f52d773))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f7afad7))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f6479e6))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ee5ae3e))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f076e2e))) ) ) {
                      result[0] += 3463683;
                      result[1] += 50223407;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f238bac))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e4a36e3))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dcaa10e))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e29b7bf))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e1290ac))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f59b281))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e927e52))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3d69a805))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f0e9a80))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4f2e49))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f6e6e98))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f5d0918))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3c0150))) ) ) {
                      result[0] += 35791394;
                      result[1] += 17895697;
                    } else {
                      result[0] += 2147483;
                      result[1] += 51539607;
                    }
                  } else {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e42641b))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 443694;
                      result[1] += 53243396;
                    }
                  }
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e473ffb))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d214cec))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3afe1e))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f0597a2))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3f67f2e4))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f11389c))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3dbe7ea6))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f43e5c9))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0d335d))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3eabffac))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3eac3808))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f61a07b))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ee48fda))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e146738))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e4ee393))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e37c5ac))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e83d5bb))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed81301))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3daf6168))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e4ca96a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d28b6d8))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3efa9889))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f6420c4))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f26f252))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df8adac))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e8e501e))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f098938))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f4598f2))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e27fb6a))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ef17050))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e67e671))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3dc3d46b))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d7a82e8))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e44d552))) ) ) {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3dbfc3b6))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f33fbbe))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5a4010))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f40e704))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f351cc1))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d5fa440))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e8387be))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e087550))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f47abc9))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2e8bc2))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f13d178))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3d684380))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3efb0c88))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e03c212))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3df414a4))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e443fe6))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 32212254;
                      result[1] += 21474836;
                    }
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08548a))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3dcfa590))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e564ae0))) ) ) {
                      result[0] += 26843545;
                      result[1] += 26843545;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4eab8a))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3cdcf030))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e69b670))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e2e2435))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3edd62e0))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f6e9835))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f79c433))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f772c52))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eea88ce))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e01d29e))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 1142278;
                      result[1] += 52544812;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e66c376))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 4473924;
                      result[1] += 49213166;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f71f506))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x00000000))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f150d06))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ece7ab8))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4df267))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb523f6))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e61c044))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de12839))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e3ec6bc))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e38f324))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e85859d))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3cf0ed3e))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3d3a2f06))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e87c8f3))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d3f6d33))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e2e7ab8))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ec4a969))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f0f9820))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3ecf7c46))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e634d6a))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f3c793e))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f604136))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3ef779a7))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f029596))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f11234f))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3705fb))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ed0587a))) ) ) {
                      result[0] += 4628197;
                      result[1] += 49058893;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e1f8a0a))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f3d5960))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5ebc40))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e2d5a5c))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3dc1c2e4))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef95c00))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e69e44f))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f342657))) ) ) {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e433b10))) ) ) {
                      result[0] += 2386092;
                      result[1] += 51300998;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f3c9b52))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3de82e88))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f3b5e20))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f5d0918))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e257bc8))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f4ec4c6))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7417ec))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5a9ec3))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f3adcb2))) ) ) {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2361bb))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f510a14))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f31bb06))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f079778))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ca7daa5))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ec7dd44))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e51ef74))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f4b2d4e))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e6a3594))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3d686d72))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3edba68b))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8e09ff))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e7c3b50))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3dc6bce9))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3912ccf7))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f74ff44))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3efb1a4c))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e2ac5c1))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eadd590))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f5418e8))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f510e56))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3f05bda5))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5c43d4))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e96b9a2))) ) ) {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f017636))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3dd70a3d))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e970111))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5800a8))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f0840e2))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f555572))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f299f2c))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3a12ccf7))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f416e04))) ) ) {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f251394))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f27f727))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3cb8f9b1))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e991149))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f2a2878))) ) ) {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f0bd513))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3ef1f4b2))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e1c432c))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d028a1e))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f19999a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e400000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ea3eab4))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdd590c))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3cc13554))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f2e415f))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f772df5))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3da5de16))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f1c6fbd))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f0a1b08))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3efa10e0))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f396f54))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f372d4d))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3e5d1782))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d4779a6))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e904d55))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4f06f6))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d3f62b7))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7cd9e8))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ef807dd))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6d70a4))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7ea2b2))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ef0c693))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f75d7dc))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f67313c))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3d5f01b9))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3dc2db62))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f5a695a))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e23a7db))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4c985f))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f3dc337))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ed85532))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3c4e703b))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3afe1e))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f3ecb00))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ebec8b4))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ecf4b1f))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f740d1c))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e15d638))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e22e48f))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3de19114))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f55c62a))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x39ded289))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e67d955))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f09a900))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3b65b424))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e61800a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4d729c))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e2bf877))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e7fb7e9))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f2fbcd4))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3dc3dee8))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f117bc8))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f315ca7))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f1d47ae))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e78533a))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c1c77a0))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3eccb9cc))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f39c582))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f3dc38b))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d4a0e41))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eea4160))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e10f3cc))) ) ) {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e7b65aa))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e8ff4dc))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f4471b4))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e4f3cb4))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f28fdf4))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e952934))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e97c45d))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f317f63))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3db05a70))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3dbbd513))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f04e2c1))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d0a68))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3e670e))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f3ff38c))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3ef07bdd))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4fa9d2))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ef0c693))) ) ) {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ebaa844))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3d0816f0))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 15790320;
                      result[1] += 37896770;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f11dc1e))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3da9ec2c))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e970111))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d6963dc))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ea4f56e))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d6ea748))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3c96f007))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8729b2))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e99fc90))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f5e8976))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f1804ea))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f64dd83))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f7cfdf4))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3eac0f66))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d4c0592))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ec4b3e6))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2fef4a))) ) ) {
                      result[0] += 4880644;
                      result[1] += 48806446;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3ae3e7))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e9cfb55))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3db22292))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee1dbca))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f63d85a))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f6420c4))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d9c30d3))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f17630a))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f3b9097))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e505a70))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f2ac083))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e3230fd))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3cfab756))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e9fe08a))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3daaea74))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d81f9f0))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e831854))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f1c85b2))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e5f91e6))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e000000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f3ba92a))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb098b3))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f7209fe))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4b80dc))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e94985f))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f796e58))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3ec31854))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f4f7122))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ebc634a))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e91ddc2))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f37a051))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f09ec80))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f14d940))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d6c02f2))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9527e5))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3efebe38))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3f20307f))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7ea2b2))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5a3540))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ebd197a))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3efb482c))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e2216c6))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f073776))) ) ) {
                      result[0] += 16106127;
                      result[1] += 37580963;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e332617))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e8258f7))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f62b7aa))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f4c5db8))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f32e4e2))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f60a2dc))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f1e1dfc))) ) ) {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f09e0b5))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d87ef9e))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0e30a9))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ebbd46b))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f5dea36))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e60995b))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6d9652))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e0ff823))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3eaf0a3e))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f7fc361))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 17895697;
                      result[1] += 35791394;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3dd44912))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3eea1ff4))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f029985))) ) ) {
                      result[0] += 17895697;
                      result[1] += 35791394;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f0cfc50))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3effeb07))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f6c27a6))) ) ) {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d27620f))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f3425af))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3da8c155))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e0baf10))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d3b98c8))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e574928))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3ef8fb01))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3eea4160))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e905144))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f2ef449))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f72b702))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f35f212))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e350efe))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f3adcb2))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f0a4160))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ec1335d))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f747e28))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f14115e))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 10737418;
                      result[1] += 42949672;
                    }
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f372d4d))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ed4f228))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e3928e1))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f254de8))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3ca324c8))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4d6d5d))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3dc12ad8))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0e5c92))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ce516db))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e20c9da))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10b242))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e533334))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f2a017a))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f47b257))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d5ad96a))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4c2fd8))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e3c6e6e))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e64d7f1))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e2c8606))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2a0d9a))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f591490))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4934ac))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d9c0443))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d3dc487))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ea5681e))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e2216c6))) ) ) {
                      result[0] += 3355443;
                      result[1] += 50331647;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f23b352))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ac3f3e0))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3c0bd662))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb4710d))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e99a6b5))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3dd8201d))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3e071c97))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f73d7b2))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f551634))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f67b3fa))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f3ff38c))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f336f2a))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e302752))) ) ) {
                    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e4595ff))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 1731841;
                      result[1] += 51955249;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f724160))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x00000000))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eddbdf9))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f78c155))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ce7d567))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3cc50480))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e075e20))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e77ea5f))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3a59945b))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3c9a415f))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3de0f66a))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1fd370))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e4bca97))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3dc2f2fa))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5c4c5a))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d9c30d3))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3da64990))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f661e50))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3b21dfb9))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e08c693))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f2cc005))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ee67c07))) ) ) {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7f56eb))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e124895))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e4eadd6))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x00000000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f4e7b0c))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3dd9f7f9))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbd14e4))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f648ce7))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e47ea60))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3cb4d6a1))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e5555c5))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3d501e26))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ead4bf1))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3cfc3b4f))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f5f5f70))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f1ba53b))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f458890))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f7209fe))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e56cf42))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f6b06a2))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d549518))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3d3ae7))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4df267))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eb1d53d))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4fa9d2))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f77d4bf))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f767232))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f559d34))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e9fc8f3))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f1765aa))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e02d235))) ) ) {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3c6fdc9d))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d65460b))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e0dfa44))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f348a9c))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e221576))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          }
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3c41e796))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ab2e9cd))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3cea7efa))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3eb0c34c))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3827c5ac))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e329dc7))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c71d3ec))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f19bb5a))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f7cbc6a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f65b036))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3e86a4a9))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e9fe08a))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5e0e95))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3eb32421))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                      result[0] += 1917396;
                      result[1] += 51769695;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f485a70))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3dc34c1b))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3a2eb2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d1249e4))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0e54b4))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f39c582))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d0f7b9e))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e2193b4))) ) ) {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f3d8f1e))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e1aa79c))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e73e187))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3c3630a9))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ea4f56e))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e8258f7))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f4f65fe))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e731a4c))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3dc6bce9))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3f3ebee0))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f6e9835))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1a3d70))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f56c376))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
                  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f10d014))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec100e6))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3df8793e))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2ebd3c))) ) ) {
                      result[0] += 3579139;
                      result[1] += 50107951;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3dad6f54))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f06602d))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f59b281))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f4f4a77))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3a956c0d))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ddaf640))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ea139eb))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d93404f))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ea6cdf2))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f232325))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3e3c88a4))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3d3df8f5))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f570500))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3dff8ca8))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f280f))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f259d34))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f457492))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f633cb4))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f0d8698))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e5602ca))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4b0d30))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e1923a2))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3908509c))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e02d235))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e9764ae))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ec816f0))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3d5273d6))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e93126e))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e714270))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e143808))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e8ee782))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f414d94))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbfd370))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3b19a4))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f3a3c75))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f3ecb00))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f512ad8))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e182e88))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ee66666))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f777414))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d4d8ec9))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3db5421c))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3ed14270))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3d21ef74))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x37fba882))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3cbe6c4d))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3ca4c836))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e62031d))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec48366))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f44bac7))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3b381d))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e167dfe))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e732618))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ecbf727))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3ecf876a))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e19374c))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ddb6ed6))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dea4010))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e8a656b))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d867382))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3ec7952d))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f04f616))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3edc9afe))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eea88ce))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ebaa844))) ) ) {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3c93165e))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e94912a))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ddf8f47))) ) ) {
                      result[0] += 46976204;
                      result[1] += 6710886;
                    } else {
                      result[0] += 13421772;
                      result[1] += 40265318;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dce8295))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e59d494))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f736cdf))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f67111f))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f3dc337))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f17e4ce))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7417ec))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3dcbf877))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e1e5604))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3d865be9))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f682f84))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f33ea60))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f3f90ea))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4cbe0e))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e92f05a))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eaf357e))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e400000))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f72b702))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f10a71e))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f291aca))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f3ff38c))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 1481023;
                      result[1] += 52206067;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3c134acc))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f0840e2))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c97396d))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e59042d))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7e96e6))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3edb8280))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e259ddc))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3df0a138))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f2ae4e2))) ) ) {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f089afe))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e2f7271))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3dba92a3))) ) ) {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3de137f4))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f3cd4aa))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d08beb8))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dea0126))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f0b3626))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e8729b3))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d9dd97f))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e78aefc))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f458890))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0ea2b2))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e2aaa3b))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f27890e))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3da8a9bd))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f54cd75))) ) ) {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3ade2ac3))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f46c669))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e5227d0))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3d899d88))) ) ) {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7759de))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e44816e))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7f84cb))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f43736c))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e257bc8))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3eb80f13))) ) ) {
              if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3d6d03da))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f2c1648))) ) ) {
                  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f35ad96))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e47a4e8))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edd55c6))) ) ) {
                if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e20c34c))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3eebb108))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5a81ed))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ddab4b8))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f32eb1c))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3f09e892))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e4595ff))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e5b87be))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3cc13554))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4c21c0))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3ebe6f93))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3ebef5ec))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d7b4a24))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3c9082))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3eb9b9b6))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f4a5754))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3edefe72))) ) ) {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee1c044))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f182310))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3da7fa1a))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f110abb))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3de0663d))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3ea7eef6))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7f7d42))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ec9d884))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e90a1e0))) ) ) {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f067286))) ) ) {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e0816f0))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e92f05a))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dcaa10e))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f60816f))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e2d1783))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f471ceb))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3cbf1412))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3c2f78ff))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4888f8))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f396f54))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e4d234f))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e21743f))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f65cac0))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f715864))) ) ) {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f7ec0d7))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ea29fbe))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f7f68f0))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e59335d))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              } else {
                if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e4c154d))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 53687091;
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d827525))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e0b7804))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f14d940))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f1cafa3))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e10b242))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e23b8e5))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee523f6))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e2bf877))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e7a31a5))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f63c266))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f55fc8f))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f417fb6))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f530b39))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3efe3d1d))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f048c3f))) ) ) {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f762cba))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3efb74bc))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f3164d8))) ) ) {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3dbf30e8))) ) ) {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3ebe70e3))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f64e5b4))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e6e5366))) ) ) {
                    result[0] += 0;
                    result[1] += 53687091;
                  } else {
                    result[0] += 53687091;
                    result[1] += 0;
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3dbc8217))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3dd111f2))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e33e426))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f5dea36))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f087400))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3eee238e))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2b7953))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f384ab6))) ) ) {
                result[0] += 53687091;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f726906))) ) ) {
                if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfb5f2))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3d9a6b51))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e239970))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e513943))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 53687091;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eb62585))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1753a4))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e92f102))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f49a512))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e6374bd))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e2d3309))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d530be1))) ) ) {
            result[0] += 0;
            result[1] += 53687091;
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f754270))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e37f0ed))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3ecf88ba))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 53687091;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f77e9b8))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e143808))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e156abe))) ) ) {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e146dc6))) ) ) {
                      result[0] += 53687091;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3ec1ca19))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3cda5b96))) ) ) {
                      result[0] += 40265318;
                      result[1] += 13421772;
                    } else {
                      result[0] += 0;
                      result[1] += 53687091;
                    }
                  }
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3caa10e0))) ) ) {
                  result[0] += 53687091;
                  result[1] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f6b8866))) ) ) {
                    result[0] += 53687091;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                }
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3f414706))) ) ) {
          result[0] += 0;
          result[1] += 53687091;
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ed5a46a))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f7745e0))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1ef74))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3b2b606b))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e982c90))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 53687091;
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e2efdca))) ) ) {
          result[0] += 53687091;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e182fd8))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0ba344))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e60995b))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f2aad82))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7cac08))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3eb1eade))) ) ) {
            if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f5da21e))) ) ) {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f081d2a))) ) ) {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ed8294a))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                result[0] += 0;
                result[1] += 53687091;
              }
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3edc2ce4))) ) ) {
              result[0] += 0;
              result[1] += 53687091;
            } else {
              result[0] += 53687091;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3ebabc94))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e829c78))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d2493c8))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f01081c))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e79906c))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e9a49e4))) ) ) {
              result[0] += 53687091;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 53687091;
            }
          } else {
            result[0] += 0;
            result[1] += 53687091;
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
        }
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f7209fe))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f35f212))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42176e))) ) ) {
            result[0] += 53687091;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f43721d))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ed2a5a4))) ) ) {
                  result[0] += 0;
                  result[1] += 53687091;
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e488ce7))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f79f7f9))) ) ) {
                      result[0] += 0;
                      result[1] += 53687091;
                    } else {
                      result[0] += 35791394;
                      result[1] += 17895697;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 53687091;
                  }
                } else {
                  result[0] += 53687091;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e8abfdb))) ) ) {
                result[0] += 0;
                result[1] += 53687091;
              } else {
                result[0] += 53687091;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 53687091;
          result[1] += 0;
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
