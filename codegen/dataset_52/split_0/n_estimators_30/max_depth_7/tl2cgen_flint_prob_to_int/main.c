
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
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e4f06f6))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e3fe868))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3dabf877))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3f19081c))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f795da2))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4a771c))) ) ) {
              if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f60850a))) ) ) {
                result[0] += 71582788;
                result[1] += 71582788;
              } else {
                result[0] += 2701237;
                result[1] += 140464339;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e4d1b71))) ) ) {
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
    result[0] += 143165576;
    result[1] += 0;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eca6bf8))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7e96e6))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f1ef1aa))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6fbc2c))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f4f24c8))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2eb55f))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 1835456;
                result[1] += 141330120;
              }
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f644816))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3d366a55))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f022e5e))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f2263c7))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e6363b2))) ) ) {
                result[0] += 71582788;
                result[1] += 71582788;
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
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f6a1b08))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5c5d64))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3ee58c2a))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e075e20))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eb7b741))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f5ba787))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3ab78034))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3c795d4f))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ea5883b))) ) ) {
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f6d6723))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3dbbdcf0))) ) ) {
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
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3d1f6018))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f7515e0))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f144a0e))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e08c693))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e27b0b3))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dc754f3))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d0c5437))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f14b589))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3da81c2e))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3d941c82))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3cc38b04))) ) ) {
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f25b8ba))) ) ) {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f1653b9))) ) ) {
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f6da31a))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e20c9da))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ee79874))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3d5cd5fa))) ) ) {
                result[0] += 4936744;
                result[1] += 138228832;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f563f68))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e7dcdb4))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3eb96c62))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3c1ae925))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3ef6aa8f))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f238e4c))) ) ) {
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
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3d494c44))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e34b48d))) ) ) {
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
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f769542))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e47396d))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e3ece9a))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3dad7732))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3c844d01))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e153e2d))) ) ) {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3e4dd830))) ) ) {
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
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ef0d994))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3c71d3ec))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f3cf6be))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5dc1e8))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e7d31ba))) ) ) {
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f23d0d0))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f71c098))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7fb44e))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 17895697;
                result[1] += 125269879;
              }
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3ef2fad7))) ) ) {
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3eb831cf))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f3a656b))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f189eed))) ) ) {
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
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d8eee0f))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3b980b24))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e800000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ef09ca2))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f79d7dc))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6ca03c))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3e1eb852))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              result[0] += 143165576;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f40fa59))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
                result[0] += 4418690;
                result[1] += 138746885;
              } else {
                result[0] += 40904450;
                result[1] += 102261126;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f42ecc0))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f324010))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e141894))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f26c12a))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3d79d5e5))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 15339168;
                result[1] += 127826407;
              }
            } else {
              if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f428b1a))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 95443717;
                result[1] += 47721858;
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6dbf9c))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f3cc932))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f6a8db8))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e3b04ac))) ) ) {
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
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e1d2dcc))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f54afa3))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb91fb4))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f49ee24))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x00000000))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f220903))) ) ) {
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
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3d42d384))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3dfd7dbf))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d684381))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f117bc8))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3dda6612))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e050b0f))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e078fef))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3efe43aa))) ) ) {
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
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e7b61bb))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d4d0678))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ) ^ (0b1 << 31))>((int)(0x3f2f84ca))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e32f2fa))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3e45e0b4))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f2a5a9a))) ) ) {
                result[0] += 6092152;
                result[1] += 137073424;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3d1bf488))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3eed6627))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3ec05879))) ) ) {
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7ea0ba))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e000000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f7e5d3a))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f795da2))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f2ecc4f))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f6e9835))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de12839))) ) ) {
                result[0] += 16843009;
                result[1] += 126322567;
              } else {
                result[0] += 3046076;
                result[1] += 140119500;
              }
            }
          } else {
            if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f44d164))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
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
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f67b938))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ead8106))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3efebe38))) ) ) {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3e43c750))) ) ) {
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f4b30e8))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x3e0cddd8))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f46464a))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e9fe08a))) ) ) {
                result[0] += 35791394;
                result[1] += 107374182;
              } else {
                result[0] += 1193046;
                result[1] += 141972530;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3d008850))) ) ) {
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
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3bf78fef))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ef75ec8))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f400c74))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x00000000))) ) ) {
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
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e350efe))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f33ac1d))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3bd9e83e))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3b72cf96))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e46833c))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e3f9c63))) ) ) {
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f77cc8e))) ) ) {
            if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d9096bc))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dff01b8))) ) ) {
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
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7fb69a))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f3bfd0d))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3db0092d))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d03f91e))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3a917d6b))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3df20d99))) ) ) {
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
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e90b589))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f4a0222))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e68bac8))) ) ) {
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x00000000))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3f7e5d3a))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f3705fb))) ) ) {
                result[0] += 19231196;
                result[1] += 123934379;
              } else {
                result[0] += 1301505;
                result[1] += 141864071;
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
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f6ea79c))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3c01f7))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d3f77af))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
            if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dc209ac))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
                result[0] += 19976592;
                result[1] += 123188984;
              } else {
                result[0] += 1203072;
                result[1] += 141962504;
              }
            }
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
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e873387))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f053f29))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f6a1b08))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3eb03c4b))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e8c1d2a))) ) ) {
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ea0da3c))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f667a64))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f6a1b08))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e008073))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f0fc504))) ) ) {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3ec31a4c))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 35791394;
                result[1] += 107374182;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f2e186a))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f55dcc6))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3e3f88ba))) ) ) {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3d428a1e))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
                result[0] += 71582788;
                result[1] += 71582788;
              } else {
                result[0] += 8009263;
                result[1] += 135156313;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1c110a))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3eed6627))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e7a4bdc))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f57e671))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f602e88))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d5bd513))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e81d92c))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f6ffd61))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 71582788;
                result[1] += 71582788;
              }
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          } else {
            if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f1b5d24))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ecd1a22))) ) ) {
                result[0] += 119304647;
                result[1] += 23860929;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
                result[0] += 6658864;
                result[1] += 136506712;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e058794))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d3b98c8))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e8bb98c))) ) ) {
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
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e000000))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f60fe9c))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ec52d24))) ) ) {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f72c860))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 19272289;
                result[1] += 123893287;
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3e3917d7))) ) ) {
                result[0] += 23860929;
                result[1] += 119304647;
              } else {
                result[0] += 1223637;
                result[1] += 141941939;
              }
            }
          }
        }
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d3f77af))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3dd85c68))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3dbb9b67))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3f17736d))) ) ) {
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
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7f7953))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f74e9a3))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f000000))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3e008073))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 19088743;
                result[1] += 124076832;
              }
            } else {
              if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3e80da3c))) ) ) {
                result[0] += 6362914;
                result[1] += 136802661;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3d6b4b72))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f22abde))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f15eadd))) ) ) {
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
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3a811b1e))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e5f1561))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3c761672))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3ec092cd))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f383958))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ee5e5f3))) ) ) {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3ec75b82))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 107374182;
                result[1] += 35791394;
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
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f6f9043))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e1cb3e5))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x00000000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3dff3e03))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f79f3b6))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5fa6df))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f7edd05))) ) ) {
              if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ec77660))) ) ) {
                result[0] += 17895697;
                result[1] += 125269879;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f4d0eaa))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f66a3ad))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 143165576;
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f4b4b73))) ) ) {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f7afad7))) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3db71c97))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d530be1))) ) ) {
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
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3edb78ab))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ca046c7))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e02e5de))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f7f9e06))) ) ) {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f43e670))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e5ccf6c))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3e43c212))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e9f342f))) ) ) {
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
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f7e96e6))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f17d4bf))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f1e53b8))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f17e4ce))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e664d80))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3d91e647))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3db84cae))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f3c01f7))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3cb851ec))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
                result[0] += 4473924;
                result[1] += 138691652;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3ef879e5))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e831316))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3db851ec))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f5c8fda))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f5be37e))) ) ) {
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
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3c3fdb4d))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3cb65a9a))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e8b2f44))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3b19ae93))) ) ) {
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
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f59c0ec))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f09db23))) ) ) {
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
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e179d0a))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3de5119d))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f34840e))) ) ) {
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
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da38866))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3f696db1))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f510e56))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3c48de20))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ed6fa83))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e844524))) ) ) {
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
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f081302))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3dd80348))) ) ) {
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
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f7b4246))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5c2e34))) ) ) {
            if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e40fe48))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3ded25ee))) ) ) {
                result[0] += 104620998;
                result[1] += 38544578;
              } else {
                result[0] += 4473924;
                result[1] += 138691652;
              }
            } else {
              if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
                result[0] += 4338350;
                result[1] += 138827225;
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3c6f1fde))) ) ) {
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dbb4a24))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d12ad82))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3e72877e))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3dda6612))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3ea8ede6))) ) ) {
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
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e937bf2))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d2aa8eb))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f444428))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
            if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f6a8db8))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f18793e))) ) ) {
                result[0] += 0;
                result[1] += 143165576;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
                result[0] += 1823765;
                result[1] += 141341811;
              } else {
                result[0] += 28633115;
                result[1] += 114532461;
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
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f474f62))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x00000000))) ) ) {
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
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e2eaf25))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ecbc16a))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d29bcfd))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f1501e2))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3b694ee4))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e528b6e))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 47721858;
                result[1] += 95443717;
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ecf4342))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3f68385c))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f61729b))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f1be964))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eca339c))) ) ) {
              if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3c8df7a5))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e8562e0))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 1278264;
                result[1] += 141887312;
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
    }
  }
  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3ec33c60))) ) ) {
    result[0] += 143165576;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d277708))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e7afb7f))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e858cd2))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f12680a))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ec9e8e6))) ) ) {
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
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f772df5))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e95cbbc))) ) ) {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb78d50))) ) ) {
                result[0] += 114532461;
                result[1] += 28633115;
              } else {
                result[0] += 10226112;
                result[1] += 132939463;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f5ed235))) ) ) {
                result[0] += 1266952;
                result[1] += 141898624;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ee18c7e))) ) ) {
              result[0] += 0;
              result[1] += 143165576;
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e04d402))) ) ) {
                result[0] += 57266230;
                result[1] += 85899345;
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
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f00509c))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ) ^ (0b1 << 31))>((int)(0x3e58b828))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3c397786))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d3c89f4))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3ea626d4))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3eaebce8))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3df9db22))) ) ) {
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
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3f399a96))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6ed384))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3dc0bf5d))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3ea02de0))) ) ) {
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
            if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f65e450))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f6ae782))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 3381864;
                result[1] += 139783712;
              }
            }
          }
        }
      }
    } else {
      result[0] += 143165576;
      result[1] += 0;
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d8b3bb8))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e04ab61))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d6223e2))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3dbe0ded))) ) ) {
          result[0] += 0;
          result[1] += 143165576;
        } else {
          result[0] += 143165576;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3eb0a330))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e2fbbd8))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e9ad2dd))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3cf8a090))) ) ) {
            result[0] += 143165576;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 143165576;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f041c82))) ) ) {
            if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f031c97))) ) ) {
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3f5c9c4e))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eb7b741))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3c4aab8a))) ) ) {
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
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f1e78c0))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3d67daa5))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3dfb2ab0))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f3f4e66))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3d68c694))) ) ) {
            result[0] += 0;
            result[1] += 143165576;
          } else {
            result[0] += 143165576;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3f3c663c))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea7c30d))) ) ) {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f1582aa))) ) ) {
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
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3ea5c098))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ed38da4))) ) ) {
      result[0] += 143165576;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3eaf414a))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef7342f))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3d5e8e60))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
      } else {
        result[0] += 143165576;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3c4432ca))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3da8fda0))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e3a2f06))) ) ) {
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f716096))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e32be8c))) ) ) {
            if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3db32b56))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x387ba882))) ) ) {
                result[0] += 57266230;
                result[1] += 85899345;
              } else {
                result[0] += 143165576;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee10e02))) ) ) {
                result[0] += 57266230;
                result[1] += 85899345;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e095d4f))) ) ) {
              result[0] += 143165576;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5ec51a))) ) ) {
                result[0] += 2468372;
                result[1] += 140697204;
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
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cebc409))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ) ^ (0b1 << 31))>((int)(0x3e058794))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3eb0678c))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3df119ce))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3e0ac322))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3d064452))) ) ) {
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
        result[0] += 143165576;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e4a18be))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 143165576;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f515768))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f648850))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3e287011))) ) ) {
              if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ec10f52))) ) ) {
                result[0] += 143165576;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 143165576;
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ec704ff))) ) ) {
                result[0] += 28633115;
                result[1] += 114532461;
              } else {
                result[0] += 1076432;
                result[1] += 142089143;
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
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7417ec))) ) ) {
        result[0] += 143165576;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f6f6d33))) ) ) {
          result[0] += 143165576;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f2e186a))) ) ) {
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
