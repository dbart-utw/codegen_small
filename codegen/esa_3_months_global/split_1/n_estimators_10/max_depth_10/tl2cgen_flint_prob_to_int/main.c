
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      result[0] += 429496729;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f37694a))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                result[0] += 429496729;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4514c0))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                      result[0] += 420890401;
                      result[1] += 8606327;
                    } else {
                      result[0] += 318612004;
                      result[1] += 110884724;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 421745726;
                      result[1] += 7751002;
                    }
                  }
                } else {
                  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                      result[0] += 281694211;
                      result[1] += 147802518;
                    } else {
                      result[0] += 423361061;
                      result[1] += 6135667;
                    }
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e714cea))) ) ) {
                      result[0] += 239125206;
                      result[1] += 190371523;
                    } else {
                      result[0] += 402411350;
                      result[1] += 27085379;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e797ef2))) ) ) {
                      result[0] += 419200575;
                      result[1] += 10296154;
                    } else {
                      result[0] += 107374182;
                      result[1] += 322122547;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 394107485;
                      result[1] += 35389243;
                    } else {
                      result[0] += 81164736;
                      result[1] += 348331993;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e766705))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 427363467;
                      result[1] += 2133261;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                }
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0e7812))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec5878e))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37ac08))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 311014873;
                      result[1] += 118481856;
                    } else {
                      result[0] += 417632178;
                      result[1] += 11864550;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e741665))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 214748364;
                      result[1] += 214748364;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed60d85))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 161061273;
                      result[1] += 268435455;
                    }
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e64f32e))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0e7812))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e113798))) ) ) {
                      result[0] += 322122547;
                      result[1] += 107374182;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e98f0c4))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              result[0] += 429496729;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 112487238;
                      result[1] += 317009490;
                    } else {
                      result[0] += 405635800;
                      result[1] += 23860929;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 428137562;
                      result[1] += 1359166;
                    } else {
                      result[0] += 285379886;
                      result[1] += 144116842;
                    }
                  } else {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                      result[0] += 295736190;
                      result[1] += 133760538;
                    } else {
                      result[0] += 217772989;
                      result[1] += 211723739;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
              }
            } else {
              result[0] += 429496729;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4488e))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              result[0] += 429496729;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7ccaf4))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0c9496))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
            result[0] += 429496729;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ecf1b04))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec056d2))) ) ) {
          if ( ( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
            result[0] += 429496729;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 429496729;
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
          if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                result[0] += 429496729;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                result[0] += 429496729;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8e201c))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              result[0] += 429496729;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            result[0] += 429496729;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              result[0] += 429496729;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ca900))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6880a2))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4c4994))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90d462))) ) ) {
                      result[0] += 429020304;
                      result[1] += 476424;
                    } else {
                      result[0] += 429481186;
                      result[1] += 15543;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0f04ba))) ) ) {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3fb56c))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 418755912;
                      result[1] += 10740817;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 429496729;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99538a))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e144ea4))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4eb97e))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fe908))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              } else {
                if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49d35c))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49f156))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f50ec99))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f331ea6))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                      result[0] += 211079297;
                      result[1] += 218417432;
                    } else {
                      result[0] += 426621093;
                      result[1] += 2875635;
                    }
                  } else {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                      result[0] += 425087112;
                      result[1] += 4409617;
                    } else {
                      result[0] += 406652283;
                      result[1] += 22844445;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
              if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d53bf14))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4282aa))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3e12bb51))) ) ) {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                      result[0] += 286331153;
                      result[1] += 143165576;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 424383673;
                      result[1] += 5113056;
                    } else {
                      result[0] += 363420309;
                      result[1] += 66076419;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09d9cc))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f88))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f488b22))) ) ) {
                      result[0] += 429034158;
                      result[1] += 462570;
                    } else {
                      result[0] += 422624781;
                      result[1] += 6871947;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 429496729;
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea18ff1))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6d22c4))) ) ) {
                    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb72d14))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 415577854;
                      result[1] += 13918875;
                    } else {
                      result[0] += 58773236;
                      result[1] += 370723492;
                    }
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec386ec))) ) ) {
                      result[0] += 424194300;
                      result[1] += 5302428;
                    } else {
                      result[0] += 309890045;
                      result[1] += 119606684;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9f3f24))) ) ) {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f4a698f))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 423086330;
                      result[1] += 6410398;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 322122547;
                      result[1] += 107374182;
                    } else {
                      result[0] += 427649431;
                      result[1] += 1847297;
                    }
                  }
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e662e42))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 419406965;
                      result[1] += 10089764;
                    }
                  }
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea861ee))) ) ) {
                      result[0] += 165087805;
                      result[1] += 264408924;
                    } else {
                      result[0] += 419660926;
                      result[1] += 9835802;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 377704476;
                      result[1] += 51792252;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e75a17a))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6809ba))) ) ) {
                      result[0] += 424460754;
                      result[1] += 5035975;
                    } else {
                      result[0] += 386547056;
                      result[1] += 42949672;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6367e9))) ) ) {
                      result[0] += 122713351;
                      result[1] += 306783378;
                    } else {
                      result[0] += 411966250;
                      result[1] += 17530478;
                    }
                  } else {
                    if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
                      result[0] += 14810232;
                      result[1] += 414686497;
                    } else {
                      result[0] += 152113425;
                      result[1] += 277383304;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 39881839;
                      result[1] += 389614890;
                    } else {
                      result[0] += 181710154;
                      result[1] += 247786574;
                    }
                  } else {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 416481677;
                      result[1] += 13015052;
                    } else {
                      result[0] += 95003884;
                      result[1] += 334492844;
                    }
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f493c46))) ) ) {
                      result[0] += 47009592;
                      result[1] += 382487137;
                    } else {
                      result[0] += 293866183;
                      result[1] += 135630546;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4dcc76))) ) ) {
                      result[0] += 334053011;
                      result[1] += 95443717;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed3bc9c))) ) ) {
                      result[0] += 4113953;
                      result[1] += 425382776;
                    } else {
                      result[0] += 46899068;
                      result[1] += 382597661;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39a3a0))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x37a1ac00))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09da8c))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                      result[0] += 257698037;
                      result[1] += 171798691;
                    } else {
                      result[0] += 429447564;
                      result[1] += 49164;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
            }
          }
        }
      } else {
        if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3adc01aa))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 429496729;
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3dad68))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
            if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8038d9))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6293aa))) ) ) {
                      result[0] += 425313319;
                      result[1] += 4183409;
                    } else {
                      result[0] += 335898145;
                      result[1] += 93598584;
                    }
                  }
                } else {
                  if ( ( !(data[65].missing != -1) || ((*( ((int*)(data)) + 65 ))<=((int)(0x3e592ef8))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                      result[0] += 428333595;
                      result[1] += 1163134;
                    } else {
                      result[0] += 418883682;
                      result[1] += 10613046;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81c45f))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f52e2a6))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7c951c))) ) ) {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3e12bb51))) ) ) {
                      result[0] += 381774870;
                      result[1] += 47721858;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb8b858))) ) ) {
                      result[0] += 428750643;
                      result[1] += 746085;
                    } else {
                      result[0] += 422889087;
                      result[1] += 6607641;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 429452487;
                      result[1] += 44241;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 337461716;
                      result[1] += 92035013;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
          }
        }
      }
    } else {
      if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f389c32))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e988e00))) ) ) {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e99538a))) ) ) {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4753fd))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 171798691;
                      result[1] += 257698037;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            } else {
              result[0] += 429496729;
              result[1] += 0;
            }
          } else {
            result[0] += 429496729;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4eb6c9))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                      result[0] += 372984001;
                      result[1] += 56512727;
                    } else {
                      result[0] += 53687091;
                      result[1] += 375809638;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 416967653;
                      result[1] += 12529076;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 103015820;
                      result[1] += 326480908;
                    }
                  }
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 250192269;
                      result[1] += 179304459;
                    }
                  }
                } else {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 426450653;
                      result[1] += 3046076;
                    }
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 292423305;
                      result[1] += 137073424;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f2dad22))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0bd498))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f51b565))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
              if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                  if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4988bc))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 398818391;
                      result[1] += 30678337;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea004c8))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 257698037;
                      result[1] += 171798691;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f78209e))) ) ) {
                    if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f76ba52))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 11660544;
                      result[1] += 417836184;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 190887435;
                      result[1] += 238609294;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48e78c))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e9f3559))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50b882))) ) ) {
                if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f0d78))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1914))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cfa2b2b))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52bb8a))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 343597383;
                      result[1] += 85899345;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb35104))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1cfad4))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e24e543))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              }
            } else {
              if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed798ca))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed60d85))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4bc58a))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea3464e))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                result[0] += 429496729;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        result[0] += 429496729;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
            if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                      result[0] += 104755299;
                      result[1] += 324741429;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e6c5d38))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 426202561;
                      result[1] += 3294167;
                    }
                  }
                } else {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 399843631;
                      result[1] += 29653097;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 408021893;
                      result[1] += 21474836;
                    } else {
                      result[0] += 23860929;
                      result[1] += 405635800;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9603e4))) ) ) {
                      result[0] += 327155711;
                      result[1] += 102341017;
                    } else {
                      result[0] += 420809058;
                      result[1] += 8687670;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e853e30))) ) ) {
                      result[0] += 47332292;
                      result[1] += 382164436;
                    } else {
                      result[0] += 234791545;
                      result[1] += 194705184;
                    }
                  }
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea0cbd2))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
              }
            } else {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                      result[0] += 422107538;
                      result[1] += 7389191;
                    } else {
                      result[0] += 429432531;
                      result[1] += 64198;
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 429496729;
  } else {
    if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
            if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7bcf92))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebfaabe))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f46bbd4))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                      result[0] += 417047548;
                      result[1] += 12449180;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
                      result[0] += 313116970;
                      result[1] += 116379758;
                    } else {
                      result[0] += 397203742;
                      result[1] += 32292987;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                      result[0] += 418912946;
                      result[1] += 10583782;
                    } else {
                      result[0] += 402496935;
                      result[1] += 26999794;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f439766))) ) ) {
                    if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4ece6f))) ) ) {
                      result[0] += 107374182;
                      result[1] += 322122547;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f451990))) ) ) {
                      result[0] += 322122547;
                      result[1] += 107374182;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              } else {
                if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49292d))) ) ) {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e913962))) ) ) {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 357913941;
                      result[1] += 71582788;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                      result[0] += 74583264;
                      result[1] += 354913465;
                    } else {
                      result[0] += 374433046;
                      result[1] += 55063683;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 356482285;
                      result[1] += 73014444;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 343597383;
                      result[1] += 85899345;
                    } else {
                      result[0] += 11332367;
                      result[1] += 418164361;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6e9f4d))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6c2591))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 214748364;
                      result[1] += 214748364;
                    }
                  }
                }
              } else {
                if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f469e2a))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb97de0))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f51fba2))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4a3ab2))) ) ) {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              }
            }
          } else {
            if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
              if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5505c4))) ) ) {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6a8ca7))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 42594716;
                      result[1] += 386902012;
                    } else {
                      result[0] += 394672670;
                      result[1] += 34824059;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e667e74))) ) ) {
                      result[0] += 8765239;
                      result[1] += 420731490;
                    } else {
                      result[0] += 543666;
                      result[1] += 428953062;
                    }
                  } else {
                    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4e835f))) ) ) {
                      result[0] += 245426702;
                      result[1] += 184070026;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                }
              } else {
                if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec18964))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            } else {
              if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb7f29b))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f67ea94))) ) ) {
                      result[0] += 357913941;
                      result[1] += 71582788;
                    } else {
                      result[0] += 419679661;
                      result[1] += 9817068;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e15142e))) ) ) {
                      result[0] += 377436519;
                      result[1] += 52060209;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                      result[0] += 98640397;
                      result[1] += 330856332;
                    } else {
                      result[0] += 1945625;
                      result[1] += 427551104;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                  if ( ( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6eae4a))) ) ) {
                    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 412542911;
                      result[1] += 16953818;
                    } else {
                      result[0] += 184070026;
                      result[1] += 245426702;
                    }
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          if ( ( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
            if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e89e0c1))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0c7e06))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 427897114;
                      result[1] += 1599615;
                    }
                  }
                }
              } else {
                if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f36d9ae))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7ee69c))) ) ) {
                      result[0] += 403466624;
                      result[1] += 26030104;
                    } else {
                      result[0] += 429457325;
                      result[1] += 39403;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb26f7e))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 428398592;
                      result[1] += 1098137;
                    }
                  }
                }
              }
            } else {
              result[0] += 0;
              result[1] += 429496729;
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      result[0] += 429496729;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4268f4))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e182b3a))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 92035013;
                      result[1] += 337461716;
                    } else {
                      result[0] += 374313261;
                      result[1] += 55183468;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                      result[0] += 355085442;
                      result[1] += 74411287;
                    } else {
                      result[0] += 425848092;
                      result[1] += 3648637;
                    }
                  }
                } else {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                      result[0] += 428406636;
                      result[1] += 1090093;
                    } else {
                      result[0] += 429398408;
                      result[1] += 98320;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                      result[0] += 401787263;
                      result[1] += 27709466;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 368503111;
                      result[1] += 60993618;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e984ca4))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63bfa7))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                      result[0] += 148671944;
                      result[1] += 280824784;
                    } else {
                      result[0] += 373550261;
                      result[1] += 55946467;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 28984441;
                      result[1] += 400512287;
                    }
                  }
                } else {
                  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                      result[0] += 352511466;
                      result[1] += 76985262;
                    } else {
                      result[0] += 195859807;
                      result[1] += 233636921;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e80fed4))) ) ) {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0b2be9))) ) ) {
                if ( ( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f49204a))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49292d))) ) ) {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f53817e))) ) ) {
                    if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f5283ca))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 61356675;
                      result[1] += 368140053;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4c3fb8))) ) ) {
                      result[0] += 303174162;
                      result[1] += 126322567;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
                      result[0] += 425488093;
                      result[1] += 4008636;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 0;
                result[1] += 429496729;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      }
    }
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
              if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38ba1c))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e138919))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb66772))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af36342))) ) ) {
                  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                    if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f790f7c))) ) ) {
                      result[0] += 428941824;
                      result[1] += 554905;
                    } else {
                      result[0] += 418935334;
                      result[1] += 10561394;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4af2f6))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                result[0] += 429496729;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f513ce0))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 346473063;
                      result[1] += 83023665;
                    } else {
                      result[0] += 408478804;
                      result[1] += 21017925;
                    }
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9a022c))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 407354099;
                      result[1] += 22142630;
                    } else {
                      result[0] += 293914075;
                      result[1] += 135582654;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                      result[0] += 7715510;
                      result[1] += 421781219;
                    } else {
                      result[0] += 120259084;
                      result[1] += 309237645;
                    }
                  }
                }
              } else {
                if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 350508825;
                      result[1] += 78987904;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                    if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                      result[0] += 245426702;
                      result[1] += 184070026;
                    } else {
                      result[0] += 427193797;
                      result[1] += 2302931;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 31580641;
                      result[1] += 397916087;
                    } else {
                      result[0] += 400863614;
                      result[1] += 28633115;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e913962))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            result[0] += 429496729;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
              if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e65c1ea))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0ee618))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63a1bd))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f377c0e))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 429496729;
              }
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb8c0b6))) ) ) {
            if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed5b8a4))) ) ) {
              result[0] += 429496729;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 429496729;
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
          if ( ( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
            if ( ( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
              if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4eb49d))) ) ) {
                if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae9ef89))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5301a))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f493c46))) ) ) {
                      result[0] += 425519907;
                      result[1] += 3976821;
                    } else {
                      result[0] += 257698037;
                      result[1] += 171798691;
                    }
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0fca30))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              }
            } else {
              result[0] += 429496729;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea3464e))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            result[0] += 429496729;
            result[1] += 0;
          }
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 429496729;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd32c8))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            result[0] += 429496729;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              result[0] += 429496729;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += 429496729;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                  if ( ( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4a1217))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f688ed2))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb79c96))) ) ) {
                      result[0] += 418156881;
                      result[1] += 11339847;
                    } else {
                      result[0] += 295279001;
                      result[1] += 134217727;
                    }
                  }
                } else {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e7ee69c))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 428536423;
                      result[1] += 960305;
                    }
                  }
                }
              } else {
                if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae99aa4))) ) ) {
                      result[0] += 428798360;
                      result[1] += 698368;
                    } else {
                      result[0] += 381774870;
                      result[1] += 47721858;
                    }
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
                      result[0] += 20452225;
                      result[1] += 409044504;
                    } else {
                      result[0] += 326417514;
                      result[1] += 103079215;
                    }
                  }
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6809ba))) ) ) {
                      result[0] += 364244391;
                      result[1] += 65252337;
                    } else {
                      result[0] += 419328261;
                      result[1] += 10168468;
                    }
                  } else {
                    if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                      result[0] += 60706251;
                      result[1] += 368790477;
                    } else {
                      result[0] += 418156881;
                      result[1] += 11339847;
                    }
                  }
                }
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
                  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e49292d))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed16bed))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                      result[0] += 297343889;
                      result[1] += 132152839;
                    } else {
                      result[0] += 7904847;
                      result[1] += 421591881;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7fac27))) ) ) {
                  if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4ed750))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e83b31a))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                      result[0] += 428466761;
                      result[1] += 1029968;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9935b8))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb9e0b2))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea0cbd3))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb05e44))) ) ) {
                      result[0] += 4190211;
                      result[1] += 425306517;
                    } else {
                      result[0] += 297343889;
                      result[1] += 132152839;
                    }
                  } else {
                    if ( ( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f45e906))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
                  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebebe06))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51d0b7))) ) ) {
                      result[0] += 306783378;
                      result[1] += 122713351;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 412977624;
                      result[1] += 16519104;
                    } else {
                      result[0] += 7916990;
                      result[1] += 421579739;
                    }
                  }
                } else {
                  if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9d33c6))) ) ) {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 414293305;
                      result[1] += 15203424;
                    }
                  } else {
                    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 393370836;
                      result[1] += 36125893;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e18f0c4))) ) ) {
              if ( ( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea463a6))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7f1122))) ) ) {
                  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed48240))) ) ) {
                      result[0] += 277909648;
                      result[1] += 151587081;
                    } else {
                      result[0] += 26843545;
                      result[1] += 402653183;
                    }
                  } else {
                    if ( ( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f79c290))) ) ) {
                      result[0] += 2322388;
                      result[1] += 427174340;
                    } else {
                      result[0] += 114532461;
                      result[1] += 314964268;
                    }
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9d4da))) ) ) {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f60da))) ) ) {
                      result[0] += 178956970;
                      result[1] += 250539758;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
              if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e982aca))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                  if ( ( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                      result[0] += 429394437;
                      result[1] += 102291;
                    } else {
                      result[0] += 428882786;
                      result[1] += 613942;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
      result[0] += 0;
      result[1] += 429496729;
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed547e2))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f444afa))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 429496729;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += 0;
          result[1] += 429496729;
        } else {
          result[0] += 429496729;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50881c))) ) ) {
          result[0] += 429496729;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 429496729;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
            if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += 0;
              result[1] += 429496729;
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                    if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                      result[0] += 262470223;
                      result[1] += 167026505;
                    } else {
                      result[0] += 413706408;
                      result[1] += 15790320;
                    }
                  } else {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 38462393;
                      result[1] += 391034335;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea06598))) ) ) {
                      result[0] += 11608019;
                      result[1] += 417888709;
                    } else {
                      result[0] += 143165576;
                      result[1] += 286331153;
                    }
                  }
                }
              } else {
                if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 383243235;
                      result[1] += 46253493;
                    } else {
                      result[0] += 428045727;
                      result[1] += 1451002;
                    }
                  } else {
                    if ( ( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f532d44))) ) ) {
                      result[0] += 429146405;
                      result[1] += 350323;
                    } else {
                      result[0] += 408373939;
                      result[1] += 21122789;
                    }
                  }
                } else {
                  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                      result[0] += 283467841;
                      result[1] += 146028888;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                }
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
              if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f470cdc))) ) ) {
                result[0] += 429496729;
                result[1] += 0;
              } else {
                if ( ( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
                  result[0] += 429496729;
                  result[1] += 0;
                } else {
                  if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f503896))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                      result[0] += 85899345;
                      result[1] += 343597383;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0bd498))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68bba0))) ) ) {
                      result[0] += 85899345;
                      result[1] += 343597383;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                result[0] += 429496729;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            if ( ( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f402eb2))) ) ) {
              if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e946b36))) ) ) {
                  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e828a5a))) ) ) {
                    result[0] += 429496729;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                  if ( ( !(data[69].missing != -1) || ((*( ((int*)(data)) + 69 ))<=((int)(0x3f53cc1e))) ) ) {
                    if ( ( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f510e80))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6a8ca7))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              }
            } else {
              if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec3241b))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  result[0] += 429496729;
                  result[1] += 0;
                }
              } else {
                result[0] += 429496729;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb35104))) ) ) {
                  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6be5af))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                } else {
                  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
                      result[0] += 342939990;
                      result[1] += 86556738;
                    } else {
                      result[0] += 95443717;
                      result[1] += 334053011;
                    }
                  }
                }
              }
            } else {
              if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e96d05a))) ) ) {
                if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e96c15e))) ) ) {
                  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e940dc2))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 214748364;
                      result[1] += 214748364;
                    }
                  } else {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                      result[0] += 33936917;
                      result[1] += 395559811;
                    } else {
                      result[0] += 192622775;
                      result[1] += 236873953;
                    }
                  }
                }
              } else {
                if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  } else {
                    if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  }
                } else {
                  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                      result[0] += 124491805;
                      result[1] += 305004923;
                    } else {
                      result[0] += 4090445;
                      result[1] += 425406284;
                    }
                  } else {
                    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 24750658;
                      result[1] += 404746070;
                    }
                  }
                }
              }
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
          if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edc51c2))) ) ) {
            result[0] += 0;
            result[1] += 429496729;
          } else {
            result[0] += 429496729;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2cada))) ) ) {
            if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
              if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea2caf8))) ) ) {
                  if ( ( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f482198))) ) ) {
                    if ( ( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4b41f4))) ) ) {
                      result[0] += 396458519;
                      result[1] += 33038209;
                    } else {
                      result[0] += 122713351;
                      result[1] += 306783378;
                    }
                  } else {
                    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0c9578))) ) ) {
                      result[0] += 429496729;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 429496729;
                    }
                  }
                } else {
                  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                    result[0] += 0;
                    result[1] += 429496729;
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                  result[0] += 0;
                  result[1] += 429496729;
                } else {
                  if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea19848))) ) ) {
                    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429496729;
                      result[1] += 0;
                    }
                  } else {
                    result[0] += 429496729;
                    result[1] += 0;
                  }
                }
              }
            } else {
              if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += 0;
                result[1] += 429496729;
              } else {
                if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb190d6))) ) ) {
                  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
                    if ( ( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                      result[0] += 0;
                      result[1] += 429496729;
                    } else {
                      result[0] += 429361559;
                      result[1] += 135170;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 429496729;
                  }
                } else {
                  result[0] += 0;
                  result[1] += 429496729;
                }
              }
            }
          } else {
            result[0] += 0;
            result[1] += 429496729;
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_1/test_data.csv", "r");
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
