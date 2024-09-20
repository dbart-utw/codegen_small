
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                result[0] += (float)0.9959543949981611;
                result[1] += (float)0.004045605001838912;
              } else {
                result[0] += (float)0.999910615856747;
                result[1] += (float)8.938414325298692e-05;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.924435211633342;
                result[1] += (float)0.07556478836665802;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb5063a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
        if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e81243a))) ) ) {
          if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39fd28))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                result[0] += (float)0.9905034532897128;
                result[1] += (float)0.00949654671028717;
              } else {
                result[0] += (float)0.9989113139603049;
                result[1] += (float)0.001088686039695168;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f42dbf8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae89bf6))) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8dbd57))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.987218045112782;
                result[1] += (float)0.012781954887218045;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                result[0] += (float)0.8707818930041152;
                result[1] += (float)0.12921810699588476;
              } else {
                result[0] += (float)0.6119246861924686;
                result[1] += (float)0.3880753138075314;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                result[0] += (float)0.8658536585365854;
                result[1] += (float)0.13414634146341464;
              } else {
                result[0] += (float)0.5;
                result[1] += (float)0.5;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.0023925489190805777;
                result[1] += (float)0.9976074510809194;
              } else {
                result[0] += (float)0.7049608355091384;
                result[1] += (float)0.2950391644908616;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea5dd0a))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
                result[0] += (float)0.4555256064690027;
                result[1] += (float)0.5444743935309974;
              } else {
                result[0] += (float)0.049723756906077346;
                result[1] += (float)0.9502762430939227;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.7073170731707317;
                result[1] += (float)0.2926829268292683;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f540b83))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fd23))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                result[0] += (float)0.9895448954489545;
                result[1] += (float)0.010455104551045511;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0ee618))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                result[0] += (float)0.4732142857142857;
                result[1] += (float)0.5267857142857143;
              } else {
                result[0] += (float)0.776949826130154;
                result[1] += (float)0.223050173869846;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.687192118226601;
                result[1] += (float)0.312807881773399;
              } else {
                result[0] += (float)0.32848837209302323;
                result[1] += (float)0.6715116279069767;
              }
            }
          } else {
            if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.9970330129544505;
                result[1] += (float)0.0029669870455495194;
              } else {
                result[0] += (float)0.8855421686746988;
                result[1] += (float)0.1144578313253012;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.8791973791973792;
                result[1] += (float)0.1208026208026208;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.041977800201816344;
                result[1] += (float)0.9580221997981837;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb1b232))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9997553017944535;
                result[1] += (float)0.00024469820554649265;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
                result[0] += (float)0.01094224924012158;
                result[1] += (float)0.9890577507598785;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e92e56a))) ) ) {
                result[0] += (float)0.75;
                result[1] += (float)0.25;
              } else {
                result[0] += (float)0.9771112865035517;
                result[1] += (float)0.022888713496448304;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.38857142857142857;
                result[1] += (float)0.6114285714285714;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
              if ( UNLIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f45dc42))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9951014695591323;
                result[1] += (float)0.00489853044086774;
              }
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.99921875;
                result[1] += (float)0.00078125;
              }
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3bc354))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.043478260869565216;
                result[1] += (float)0.9565217391304348;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.9037485531119224;
                result[1] += (float)0.09625144688807764;
              } else {
                result[0] += (float)0.9976003952290211;
                result[1] += (float)0.0023996047709788975;
              }
            }
          }
        }
      }
    }
  } else {
    if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea99480))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea69a56))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e90d3f2))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e7212c6))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae69e6e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f37b7ed))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.8487282463186078;
                result[1] += (float)0.15127175368139223;
              } else {
                result[0] += (float)0.20843373493975903;
                result[1] += (float)0.791566265060241;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += (float)0.7435294117647059;
                result[1] += (float)0.2564705882352941;
              } else {
                result[0] += (float)0.9760038013779996;
                result[1] += (float)0.023996198622000475;
              }
            } else {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
                result[0] += (float)0.5168067226890757;
                result[1] += (float)0.4831932773109244;
              } else {
                result[0] += (float)0.8679525222551929;
                result[1] += (float)0.13204747774480713;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e766705))) ) ) {
                result[0] += (float)0.9726027397260274;
                result[1] += (float)0.0273972602739726;
              } else {
                result[0] += (float)0.2916666666666667;
                result[1] += (float)0.7083333333333334;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.006063947078280044;
                result[1] += (float)0.9939360529217199;
              } else {
                result[0] += (float)0.1978021978021978;
                result[1] += (float)0.8021978021978022;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ec0970a))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9994502599812172;
                result[1] += (float)0.000549740018782784;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eb72cf8))) ) ) {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e9388a8))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1320e))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e925fe8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd32c8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
        if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.023809523809523808;
                result[1] += (float)0.9761904761904762;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.020618556701030927;
                result[1] += (float)0.979381443298969;
              } else {
                result[0] += (float)0.9180327868852459;
                result[1] += (float)0.08196721311475409;
              }
            } else {
              if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += (float)0.9417721518987342;
                result[1] += (float)0.05822784810126582;
              } else {
                result[0] += (float)0.8862102217936355;
                result[1] += (float)0.11378977820636452;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0efb41))) ) ) {
                result[0] += (float)0.9256637168141593;
                result[1] += (float)0.0743362831858407;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += (float)0.905940594059406;
                result[1] += (float)0.09405940594059406;
              } else {
                result[0] += (float)0.30612244897959184;
                result[1] += (float)0.6938775510204082;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                result[0] += (float)0.9448123620309051;
                result[1] += (float)0.05518763796909492;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8279569892473119;
                result[1] += (float)0.17204301075268819;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
                result[0] += (float)0.9993215847779587;
                result[1] += (float)0.0006784152220413115;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9935b8))) ) ) {
            if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                result[0] += (float)0.8156028368794326;
                result[1] += (float)0.18439716312056736;
              } else {
                result[0] += (float)0.3644859813084112;
                result[1] += (float)0.6355140186915887;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.948090692124105;
                result[1] += (float)0.05190930787589499;
              }
            }
          } else {
            if ( LIKELY( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f5274ce))) ) ) {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                result[0] += (float)0.905511811023622;
                result[1] += (float)0.09448818897637795;
              } else {
                result[0] += (float)0.9945332211942809;
                result[1] += (float)0.0054667788057190915;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                result[0] += (float)0.1038961038961039;
                result[1] += (float)0.8961038961038961;
              } else {
                result[0] += (float)0.7025823686553874;
                result[1] += (float)0.29741763134461263;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.7391304347826086;
                result[1] += (float)0.2608695652173913;
              } else {
                result[0] += (float)0.07468879668049792;
                result[1] += (float)0.9253112033195021;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f37694a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)0.9991946833463643;
                result[1] += (float)0.0008053166536356528;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9f9924))) ) ) {
                result[0] += (float)0.9214553855038984;
                result[1] += (float)0.07854461449610164;
              } else {
                result[0] += (float)0.9753030983385721;
                result[1] += (float)0.02469690166142793;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.6559883509282854;
                result[1] += (float)0.3440116490717146;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
            if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e96c15e))) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e925fe8))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                result[0] += (float)0.4692028985507246;
                result[1] += (float)0.5307971014492754;
              } else {
                result[0] += (float)0.9987875645297809;
                result[1] += (float)0.0012124354702190772;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e5a93fc))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4268f4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f42a1a7))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99538a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
            if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                result[0] += (float)0.92578125;
                result[1] += (float)0.07421875;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9821573398215734;
                result[1] += (float)0.017842660178426603;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += (float)0.49444444444444446;
                result[1] += (float)0.5055555555555555;
              } else {
                result[0] += (float)0.9797033567525371;
                result[1] += (float)0.02029664324746292;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
              if ( LIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f78f1aa))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.8571428571428571;
                result[1] += (float)0.14285714285714285;
              }
            } else {
              if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed4e511))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e6d22c4))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9726651480637813;
                result[1] += (float)0.02733485193621868;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                result[0] += (float)0.28011363636363634;
                result[1] += (float)0.7198863636363636;
              } else {
                result[0] += (float)0.04710144927536232;
                result[1] += (float)0.9528985507246377;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ca900))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                result[0] += (float)0.5209580838323353;
                result[1] += (float)0.47904191616766467;
              } else {
                result[0] += (float)0.9988771544108986;
                result[1] += (float)0.001122845589101331;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f37694a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
            if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9971973094170403;
                result[1] += (float)0.002802690582959641;
              } else {
                result[0] += (float)0.6349514563106796;
                result[1] += (float)0.3650485436893204;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                result[0] += (float)0.6546572934973638;
                result[1] += (float)0.3453427065026362;
              } else {
                result[0] += (float)0.8659265584970111;
                result[1] += (float)0.1340734415029889;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                result[0] += (float)0.25;
                result[1] += (float)0.75;
              } else {
                result[0] += (float)0.9982361269060274;
                result[1] += (float)0.00176387309397266;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46e1c3))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4fb430))) ) ) {
                result[0] += (float)0.5085616438356164;
                result[1] += (float)0.4914383561643836;
              } else {
                result[0] += (float)0.6157742402315485;
                result[1] += (float)0.3842257597684515;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9828872312417727;
                result[1] += (float)0.017112768758227294;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4a101a))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
                result[0] += (float)0.9985210851009888;
                result[1] += (float)0.0014789148990112398;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f504bde))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4b554a))) ) ) {
            if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5301a))) ) ) {
                result[0] += (float)0.9710144927536232;
                result[1] += (float)0.028985507246376812;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += (float)0.3076923076923077;
                result[1] += (float)0.6923076923076923;
              } else {
                result[0] += (float)0.9333333333333333;
                result[1] += (float)0.06666666666666667;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d610a91))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                result[0] += (float)0.8776295536172396;
                result[1] += (float)0.12237044638276039;
              } else {
                result[0] += (float)0.9991272092515819;
                result[1] += (float)0.0008727907484180668;
              }
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
                result[0] += (float)0.9967132292522597;
                result[1] += (float)0.003286770747740345;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
              if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
                result[0] += (float)0.046937151949085126;
                result[1] += (float)0.9530628480509149;
              } else {
                result[0] += (float)0.18921953958450308;
                result[1] += (float)0.8107804604154969;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9957314707023671;
                result[1] += (float)0.004268529297632906;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f45a012))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
                result[0] += (float)0.9994029850746269;
                result[1] += (float)0.0005970149253731343;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.5359628770301624;
                result[1] += (float)0.46403712296983757;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                result[0] += (float)0.9287015945330296;
                result[1] += (float)0.07129840546697039;
              } else {
                result[0] += (float)0.9988457098884186;
                result[1] += (float)0.0011542901115813775;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e900e68))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af09194))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                result[0] += (float)0.9938515590689504;
                result[1] += (float)0.006148440931049627;
              } else {
                result[0] += (float)0.9999535919806942;
                result[1] += (float)4.640801930573603e-05;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    }
  } else {
    result[0] += (float)0;
    result[1] += (float)1;
  }
  if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39c178))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += (float)0.7475323535863128;
                result[1] += (float)0.2524676464136872;
              } else {
                result[0] += (float)0.9891297518064719;
                result[1] += (float)0.010870248193528118;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e891ac6))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
          if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
            if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3edb120b))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += (float)0.9797453209127425;
                result[1] += (float)0.0202546790872575;
              } else {
                result[0] += (float)0.9987239325868531;
                result[1] += (float)0.0012760674131469432;
              }
            }
          } else {
            if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4ed78))) ) ) {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += (float)0.9797639123102867;
                result[1] += (float)0.02023608768971332;
              } else {
                result[0] += (float)0.5503377291733677;
                result[1] += (float)0.44966227082663235;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
                result[0] += (float)0.9982330827067669;
                result[1] += (float)0.0017669172932330828;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e809c0e))) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                result[0] += (float)0.7444046553267681;
                result[1] += (float)0.25559534467323186;
              } else {
                result[0] += (float)0.3464658169177289;
                result[1] += (float)0.6535341830822712;
              }
            } else {
              if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
      if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49b983))) ) ) {
        if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e93eb6e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e982aca))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f477b8e))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e10712c))) ) ) {
          if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                result[0] += (float)0.8693001060445387;
                result[1] += (float)0.1306998939554613;
              } else {
                result[0] += (float)0.9991002339391758;
                result[1] += (float)0.0008997660608241857;
              }
            }
          } else {
            if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += (float)0.8997975708502024;
                result[1] += (float)0.10020242914979757;
              } else {
                result[0] += (float)0.992550549840369;
                result[1] += (float)0.007449450159631075;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.9025866813428729;
                result[1] += (float)0.09741331865712713;
              } else {
                result[0] += (float)0.08278145695364239;
                result[1] += (float)0.9172185430463576;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8aa6bc))) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4f511d))) ) ) {
                result[0] += (float)0.782608695652174;
                result[1] += (float)0.21739130434782608;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                result[0] += (float)0.42857142857142855;
                result[1] += (float)0.5714285714285714;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9996984902978485;
                result[1] += (float)0.0003015097021514871;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f504bde))) ) ) {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea72f3f))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e68b814))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += (float)0.9454068241469816;
                result[1] += (float)0.05459317585301837;
              } else {
                result[0] += (float)0.5600472115668339;
                result[1] += (float)0.43995278843316615;
              }
            } else {
              if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9973312550186576;
                result[1] += (float)0.0026687449813424025;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( LIKELY( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51a3e8))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( UNLIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f77c729))) ) ) {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e979cce))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb3b3d4))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.18604651162790697;
                result[1] += (float)0.813953488372093;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f43d275))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e88b800))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f5084ea))) ) ) {
                result[0] += (float)0.9999429067324381;
                result[1] += (float)5.7093267561889105e-05;
              } else {
                result[0] += (float)0.6153846153846154;
                result[1] += (float)0.38461538461538464;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4d3606))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9922380336351876;
                result[1] += (float)0.007761966364812419;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed60d85))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e81619a))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9924174843889384;
                result[1] += (float)0.007582515611061552;
              }
            } else {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += (float)0.4636363636363636;
                result[1] += (float)0.5363636363636364;
              } else {
                result[0] += (float)0.9360323886639677;
                result[1] += (float)0.06396761133603239;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9770408163265306;
                result[1] += (float)0.02295918367346939;
              } else {
                result[0] += (float)0.6631205673758865;
                result[1] += (float)0.33687943262411346;
              }
            } else {
              if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f515378))) ) ) {
                result[0] += (float)0.9974597798475868;
                result[1] += (float)0.002540220152413209;
              } else {
                result[0] += (float)0.9863636363636363;
                result[1] += (float)0.013636363636363636;
              }
            }
          } else {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                result[0] += (float)0.8741679873217115;
                result[1] += (float)0.12583201267828842;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += (float)0.24793388429752067;
                result[1] += (float)0.7520661157024794;
              } else {
                result[0] += (float)0.8870151770657673;
                result[1] += (float)0.11298482293423272;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
              if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39a3a0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9999474127050905;
                result[1] += (float)5.2587294909549855e-05;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb98d2b))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4488e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9872047244094488;
                result[1] += (float)0.012795275590551181;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
                result[0] += (float)0.7278481012658228;
                result[1] += (float)0.2721518987341772;
              } else {
                result[0] += (float)0.1396103896103896;
                result[1] += (float)0.8603896103896104;
              }
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
                result[0] += (float)0.007585103952478867;
                result[1] += (float)0.9924148960475211;
              } else {
                result[0] += (float)0.08096895074946467;
                result[1] += (float)0.9190310492505354;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
        if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e22fb72))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e20efac))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
                result[0] += (float)0.9999709086677624;
                result[1] += (float)2.909133223755982e-05;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
      if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f355a8c))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebebe06))) ) ) {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d854398))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
            if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee76429))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6244f4))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9966553248616994;
                result[1] += (float)0.003344675138300581;
              }
            }
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d7548))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9f9924))) ) ) {
                result[0] += (float)0.984308327598073;
                result[1] += (float)0.015691672401927047;
              } else {
                result[0] += (float)0.9506219374293253;
                result[1] += (float)0.04937806257067471;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                result[0] += (float)0.9931673987310884;
                result[1] += (float)0.006832601268911664;
              } else {
                result[0] += (float)0.8979591836734694;
                result[1] += (float)0.10204081632653061;
              }
            } else {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f490576))) ) ) {
                result[0] += (float)0.5714285714285714;
                result[1] += (float)0.42857142857142855;
              } else {
                result[0] += (float)0.8486111111111111;
                result[1] += (float)0.15138888888888888;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.6169989506820567;
                result[1] += (float)0.3830010493179433;
              } else {
                result[0] += (float)0.9634146341463414;
                result[1] += (float)0.036585365853658534;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f444a25))) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f515378))) ) ) {
                result[0] += (float)0.03571428571428571;
                result[1] += (float)0.9642857142857143;
              } else {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0.3333333333333333;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e068da3))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9965437788018433;
                result[1] += (float)0.0034562211981566822;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f386016))) ) ) {
                result[0] += (float)0.00785130002921414;
                result[1] += (float)0.9921486999707858;
              } else {
                result[0] += (float)0.020503807850029292;
                result[1] += (float)0.9794961921499707;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae7f22c))) ) ) {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d126762))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e93f0a2))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb38b41))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb2cdf4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988e00))) ) ) {
                result[0] += (float)0.9964714184897672;
                result[1] += (float)0.0035285815102328866;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae8f0da))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9994138717030283;
                result[1] += (float)0.0005861282969716704;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  } else {
    if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9154322650148128;
                result[1] += (float)0.08456773498518717;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9997611464968152;
                result[1] += (float)0.00023885350318471338;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cf10a1a))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
                result[0] += (float)0.9030136331021287;
                result[1] += (float)0.09698636689787132;
              } else {
                result[0] += (float)0.7379454926624738;
                result[1] += (float)0.2620545073375262;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9953819856083372;
                result[1] += (float)0.0046180143916627605;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd2b32b))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8f48dc))) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f3c0e21))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e83b31a))) ) ) {
                result[0] += (float)0.9796954314720813;
                result[1] += (float)0.02030456852791878;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                result[0] += (float)0.9849146486701071;
                result[1] += (float)0.015085351329892815;
              } else {
                result[0] += (float)0.8311688311688312;
                result[1] += (float)0.16883116883116883;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9175187457396047;
                result[1] += (float)0.08248125426039536;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.8624469589816125;
                result[1] += (float)0.13755304101838756;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1da382))) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2cada))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9996689472522622;
                result[1] += (float)0.0003310527477378062;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
          if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += (float)0.9003370245546461;
                result[1] += (float)0.09966297544535388;
              } else {
                result[0] += (float)0.4618298368298368;
                result[1] += (float)0.5381701631701632;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
                result[0] += (float)0.4585858585858586;
                result[1] += (float)0.5414141414141415;
              } else {
                result[0] += (float)0.9950355818809392;
                result[1] += (float)0.004964418119060809;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e15142e))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.8095238095238095;
                result[1] += (float)0.19047619047619047;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09311e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9998019017432647;
                result[1] += (float)0.00019809825673534074;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2f9bc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e919a5e))) ) ) {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e83b31a))) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9571428571428572;
                result[1] += (float)0.04285714285714286;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9376854599406528;
                result[1] += (float)0.06231454005934718;
              } else {
                result[0] += (float)0.4;
                result[1] += (float)0.6;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8109452736318408;
                result[1] += (float)0.1890547263681592;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.5211267605633803;
                result[1] += (float)0.4788732394366197;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440ebb))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb0960f))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ad48b4e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e7e2112))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb5c386))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                result[0] += (float)0.9994054850466565;
                result[1] += (float)0.0005945149533435004;
              } else {
                result[0] += (float)0.9103322712790168;
                result[1] += (float)0.08966772872098316;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += (float)0.9717568214456678;
                result[1] += (float)0.028243178554332216;
              } else {
                result[0] += (float)0.5484978540772533;
                result[1] += (float)0.4515021459227468;
              }
            } else {
              if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f386016))) ) ) {
                result[0] += (float)0.013513513513513514;
                result[1] += (float)0.9864864864864865;
              } else {
                result[0] += (float)0.8536585365853658;
                result[1] += (float)0.14634146341463414;
              }
            }
          } else {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec4bb37))) ) ) {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                result[0] += (float)0.9992810927390366;
                result[1] += (float)0.0007189072609633358;
              } else {
                result[0] += (float)0.923886355664679;
                result[1] += (float)0.07611364433532095;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0ee618))) ) ) {
        if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0c0))) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
              if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += (float)0.1875;
                result[1] += (float)0.8125;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e20efac))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f80))) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb2ee32))) ) ) {
                result[0] += (float)0.8461538461538461;
                result[1] += (float)0.15384615384615385;
              } else {
                result[0] += (float)0.9948253557567918;
                result[1] += (float)0.00517464424320828;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
          if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee3ea25))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0.8838838327027303;
                result[1] += (float)0.11611616729726966;
              } else {
                result[0] += (float)0.9784810279012078;
                result[1] += (float)0.02151897209879219;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += (float)0.9882088714205502;
                result[1] += (float)0.011791128579449747;
              } else {
                result[0] += (float)0.3700189753320683;
                result[1] += (float)0.6299810246679317;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90d462))) ) ) {
                result[0] += (float)0.19642857142857142;
                result[1] += (float)0.8035714285714286;
              } else {
                result[0] += (float)0.9993830778247325;
                result[1] += (float)0.00061692217526759;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e88553b))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6568b6))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                result[0] += (float)0.06866952789699571;
                result[1] += (float)0.9313304721030042;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.7142857142857143;
                result[1] += (float)0.2857142857142857;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8c31d2))) ) ) {
                result[0] += (float)0.8790322580645161;
                result[1] += (float)0.12096774193548387;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e81619a))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9977578475336323;
                result[1] += (float)0.002242152466367713;
              }
            } else {
              if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                result[0] += (float)0.08609271523178808;
                result[1] += (float)0.9139072847682119;
              } else {
                result[0] += (float)0.2676056338028169;
                result[1] += (float)0.7323943661971831;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed8247d))) ) ) {
                result[0] += (float)0.9565353345841151;
                result[1] += (float)0.04346466541588493;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.6851441241685144;
                result[1] += (float)0.3148558758314856;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.09355509355509356;
                result[1] += (float)0.9064449064449065;
              }
            }
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
              if ( UNLIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a57f8))) ) ) {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0.3333333333333333;
              } else {
                result[0] += (float)0.9882352941176471;
                result[1] += (float)0.011764705882352941;
              }
            } else {
              if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
                result[0] += (float)0.19140625;
                result[1] += (float)0.80859375;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6c0351))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f41b410))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09da8c))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)0.9981798519511378;
                result[1] += (float)0.0018201480488622172;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f495c16))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e872c7a))) ) ) {
          if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e8e6de6))) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4ce450))) ) ) {
                result[0] += (float)0.75;
                result[1] += (float)0.25;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e9f1ca7))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea59655))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
          if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += (float)0.9975849114467531;
                result[1] += (float)0.0024150885532469523;
              } else {
                result[0] += (float)0.9095687492533747;
                result[1] += (float)0.09043125074662525;
              }
            }
          } else {
            if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.7931499460625674;
                result[1] += (float)0.20685005393743258;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.957371707846864;
                result[1] += (float)0.04262829215313603;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed8efbc))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e766705))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9864061172472387;
                result[1] += (float)0.013593882752761258;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += (float)0.7054108216432866;
                result[1] += (float)0.29458917835671344;
              } else {
                result[0] += (float)0.20512820512820512;
                result[1] += (float)0.7948717948717948;
              }
            } else {
              if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f415241))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9568052159739201;
                result[1] += (float)0.04319478402607987;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9981851179673321;
                result[1] += (float)0.0018148820326678765;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                result[0] += (float)0.8678707224334601;
                result[1] += (float)0.13212927756653992;
              } else {
                result[0] += (float)0.9466348068498606;
                result[1] += (float)0.053365193150139385;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.42551622418879054;
                result[1] += (float)0.5744837758112095;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8a4386))) ) ) {
                result[0] += (float)0.1746031746031746;
                result[1] += (float)0.8253968253968254;
              } else {
                result[0] += (float)0.5384615384615384;
                result[1] += (float)0.46153846153846156;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.9354636591478697;
                result[1] += (float)0.06453634085213032;
              } else {
                result[0] += (float)0.9990990297243185;
                result[1] += (float)0.0009009702756815032;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae84711))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
              if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9990663158277656;
                result[1] += (float)0.0009336841722344154;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                result[0] += (float)0.8948159278737791;
                result[1] += (float)0.10518407212622088;
              } else {
                result[0] += (float)0.9991395382188442;
                result[1] += (float)0.000860461781155887;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0.18435754189944134;
                result[1] += (float)0.8156424581005587;
              } else {
                result[0] += (float)0.9557739557739557;
                result[1] += (float)0.044226044226044224;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb6efb))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8405977584059776;
                result[1] += (float)0.15940224159402241;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f479680))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
            if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e479de8))) ) ) {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                result[0] += (float)0.29411764705882354;
                result[1] += (float)0.7058823529411765;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4a698f))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea0f9b0))) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.9702276707530648;
                result[1] += (float)0.0297723292469352;
              } else {
                result[0] += (float)0.736120182887002;
                result[1] += (float)0.263879817112998;
              }
            }
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
              if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0.3333333333333333;
              } else {
                result[0] += (float)0.379746835443038;
                result[1] += (float)0.620253164556962;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)0.9994206257242179;
                result[1] += (float)0.0005793742757821553;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( LIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f6a03f4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( UNLIKELY( !(data[51].missing != -1) || ((*( ((int*)(data)) + 51 ))<=((int)(0x3f4cd768))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.5;
                result[1] += (float)0.5;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3a4aef))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
                result[0] += (float)0.9998861274802858;
                result[1] += (float)0.00011387251971417997;
              } else {
                result[0] += (float)0.9187368421052632;
                result[1] += (float)0.08126315789473684;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb8c0b6))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e9f1ca7))) ) ) {
                result[0] += (float)0.9236031927023945;
                result[1] += (float)0.07639680729760548;
              } else {
                result[0] += (float)0.9995679610379409;
                result[1] += (float)0.00043203896205912387;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1232a))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e479de8))) ) ) {
                result[0] += (float)0.375;
                result[1] += (float)0.625;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39c178))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e170b30))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.9233128834355828;
                result[1] += (float)0.07668711656441718;
              } else {
                result[0] += (float)0.32558139534883723;
                result[1] += (float)0.6744186046511628;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e151064))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9953703703703703;
                result[1] += (float)0.004629629629629629;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8e8352))) ) ) {
              if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
                result[0] += (float)0.001392757660167131;
                result[1] += (float)0.9986072423398329;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += (float)0.4742014742014742;
                result[1] += (float)0.5257985257985258;
              } else {
                result[0] += (float)0.9992903187651546;
                result[1] += (float)0.0007096812348453487;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                result[0] += (float)0.9998606635896543;
                result[1] += (float)0.00013933641034572847;
              } else {
                result[0] += (float)0.9726916254317991;
                result[1] += (float)0.027308374568200913;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f270258))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f439636))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f355a8c))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec13604))) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                result[0] += (float)0.9144796380090497;
                result[1] += (float)0.08552036199095023;
              } else {
                result[0] += (float)0.9984286612193589;
                result[1] += (float)0.0015713387806411063;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.8480243161094225;
                result[1] += (float)0.1519756838905775;
              } else {
                result[0] += (float)0.9611650485436893;
                result[1] += (float)0.038834951456310676;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e70f013))) ) ) {
                result[0] += (float)0.9936908517350158;
                result[1] += (float)0.006309148264984227;
              } else {
                result[0] += (float)0.9154929577464789;
                result[1] += (float)0.08450704225352113;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.5654345654345654;
                result[1] += (float)0.43456543456543456;
              } else {
                result[0] += (float)0.0035512448449671603;
                result[1] += (float)0.9964487551550328;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3fe908))) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae7f22c))) ) ) {
                result[0] += (float)0.9906766475135684;
                result[1] += (float)0.00932335248643152;
              } else {
                result[0] += (float)0.9653802775462168;
                result[1] += (float)0.03461972245378316;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6244f4))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                result[0] += (float)0.9665924276169265;
                result[1] += (float)0.0334075723830735;
              } else {
                result[0] += (float)0.47191011235955055;
                result[1] += (float)0.5280898876404494;
              }
            } else {
              if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f351906))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9996367127695461;
                result[1] += (float)0.00036328723045384953;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                result[0] += (float)0.8765290519877675;
                result[1] += (float)0.12347094801223242;
              } else {
                result[0] += (float)0.6198529411764706;
                result[1] += (float)0.3801470588235294;
              }
            } else {
              if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += (float)0.9955237242614146;
                result[1] += (float)0.004476275738585497;
              } else {
                result[0] += (float)0.8115942028985508;
                result[1] += (float)0.18840579710144928;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3eacc636))) ) ) {
          if ( LIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3e0657a2))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb0960f))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c5f4a))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9998755670184727;
                result[1] += (float)0.00012443298152735828;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
            if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3748c8))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb1c5be))) ) ) {
                result[0] += (float)0.9990485252140818;
                result[1] += (float)0.0009514747859181732;
              } else {
                result[0] += (float)0.999893441312803;
                result[1] += (float)0.00010655868719697373;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += (float)0.9963636363636363;
                result[1] += (float)0.0036363636363636364;
              } else {
                result[0] += (float)0.8879251312485734;
                result[1] += (float)0.11207486875142661;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9829222011385199;
                result[1] += (float)0.017077798861480076;
              } else {
                result[0] += (float)0.4780952380952381;
                result[1] += (float)0.5219047619047619;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1ef5a0))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e878fb0))) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                result[0] += (float)0.9543307086614173;
                result[1] += (float)0.04566929133858268;
              } else {
                result[0] += (float)0.9999769039782898;
                result[1] += (float)2.3096021710260407e-05;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f494192))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ce09f37))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1764ce))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f351906))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3974e))) ) ) {
                result[0] += (float)0.999986776509792;
                result[1] += (float)1.32234902080055e-05;
              } else {
                result[0] += (float)0.9994028266206622;
                result[1] += (float)0.0005971733793378011;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e18f0c4))) ) ) {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.9399975102701357;
                result[1] += (float)0.06000248972986431;
              } else {
                result[0] += (float)0.4544840626688277;
                result[1] += (float)0.5455159373311723;
              }
            } else {
              if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4a66bd))) ) ) {
                result[0] += (float)0.9959628343277822;
                result[1] += (float)0.00403716567221777;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef92e5))) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6cab8b))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.8135593220338984;
                result[1] += (float)0.1864406779661017;
              } else {
                result[0] += (float)0.19883040935672514;
                result[1] += (float)0.8011695906432749;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                result[0] += (float)0.9921875;
                result[1] += (float)0.0078125;
              } else {
                result[0] += (float)0.7377049180327869;
                result[1] += (float)0.26229508196721313;
              }
            }
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                result[0] += (float)0.9894598155467721;
                result[1] += (float)0.010540184453227932;
              } else {
                result[0] += (float)0.25;
                result[1] += (float)0.75;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
                result[0] += (float)0.7631578947368421;
                result[1] += (float)0.23684210526315788;
              } else {
                result[0] += (float)0.5314553990610329;
                result[1] += (float)0.46854460093896716;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
              if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                result[0] += (float)0.9983558040118382;
                result[1] += (float)0.001644195988161789;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                result[0] += (float)0.9995105237395986;
                result[1] += (float)0.0004894762604013706;
              } else {
                result[0] += (float)0.9665738161559888;
                result[1] += (float)0.033426183844011144;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
                result[0] += (float)0.3448275862068966;
                result[1] += (float)0.6551724137931034;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f52e2a6))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.3333333333333333;
                result[1] += (float)0.6666666666666666;
              }
            }
          } else {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
              if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee7bdc6))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6293aa))) ) ) {
                result[0] += (float)0.7535545023696683;
                result[1] += (float)0.24644549763033174;
              } else {
                result[0] += (float)0.9044205495818399;
                result[1] += (float)0.0955794504181601;
              }
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += (float)0.32673267326732675;
                result[1] += (float)0.6732673267326733;
              } else {
                result[0] += (float)0.7431192660550459;
                result[1] += (float)0.25688073394495414;
              }
            }
          } else {
            if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                result[0] += (float)0.8594436310395315;
                result[1] += (float)0.14055636896046853;
              } else {
                result[0] += (float)0.40540540540540543;
                result[1] += (float)0.5945945945945946;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9104477611940298;
                result[1] += (float)0.08955223880597014;
              } else {
                result[0] += (float)0.13612565445026178;
                result[1] += (float)0.8638743455497382;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
            if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
                result[0] += (float)0.9991076408254322;
                result[1] += (float)0.0008923591745677636;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af06737))) ) ) {
                result[0] += (float)0.6567164179104478;
                result[1] += (float)0.34328358208955223;
              } else {
                result[0] += (float)0.039473684210526314;
                result[1] += (float)0.9605263157894737;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += (float)0.0728051391862955;
                result[1] += (float)0.9271948608137045;
              } else {
                result[0] += (float)0.0012460823924781935;
                result[1] += (float)0.9987539176075219;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb35104))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e913728))) ) ) {
            if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb7fb6c))) ) ) {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                result[0] += (float)0.058823529411764705;
                result[1] += (float)0.9411764705882353;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcf0c))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f341265))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4858f1))) ) ) {
              if ( LIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f491175))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9444444444444444;
                result[1] += (float)0.05555555555555555;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36638000))) ) ) {
          if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f53226a))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb1b232))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9968970867091881;
                result[1] += (float)0.003102913290811929;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4ab473))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.8861788617886179;
                result[1] += (float)0.11382113821138211;
              }
            }
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                result[0] += (float)0.8692307692307693;
                result[1] += (float)0.13076923076923078;
              } else {
                result[0] += (float)0.03296703296703297;
                result[1] += (float)0.967032967032967;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.034013605442176874;
                result[1] += (float)0.9659863945578231;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += (float)0.6697416974169742;
                result[1] += (float)0.33025830258302585;
              } else {
                result[0] += (float)0.9633118492811106;
                result[1] += (float)0.03668815071888944;
              }
            } else {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                result[0] += (float)0.3793103448275862;
                result[1] += (float)0.6206896551724138;
              } else {
                result[0] += (float)0.99906919019547;
                result[1] += (float)0.000930809804529941;
              }
            }
          } else {
            if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e0142))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                result[0] += (float)0.1546118115461181;
                result[1] += (float)0.8453881884538819;
              } else {
                result[0] += (float)0.09279918864097363;
                result[1] += (float)0.9072008113590264;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2f1d36))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                result[0] += (float)0.6101694915254238;
                result[1] += (float)0.3898305084745763;
              } else {
                result[0] += (float)0.9985062782990244;
                result[1] += (float)0.001493721700975587;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.625;
                result[1] += (float)0.375;
              }
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.4608294930875576;
                result[1] += (float)0.5391705069124424;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                result[0] += (float)0.5193621867881549;
                result[1] += (float)0.4806378132118451;
              } else {
                result[0] += (float)0.9508670520231214;
                result[1] += (float)0.049132947976878616;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.21026894865525672;
                result[1] += (float)0.7897310513447433;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9a022c))) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += (float)0.7037773359840954;
                result[1] += (float)0.2962226640159046;
              } else {
                result[0] += (float)0.4742268041237113;
                result[1] += (float)0.5257731958762887;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e699500))) ) ) {
                result[0] += (float)0.92;
                result[1] += (float)0.08;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9cee3c))) ) ) {
              if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9205d6))) ) ) {
                result[0] += (float)0.9583333333333334;
                result[1] += (float)0.041666666666666664;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
                result[0] += (float)0.9851301115241635;
                result[1] += (float)0.01486988847583643;
              } else {
                result[0] += (float)0.19318181818181818;
                result[1] += (float)0.8068181818181818;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)0.9967105513055237;
                result[1] += (float)0.0032894486944763093;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68ca76))) ) ) {
        if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebdf190))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( LIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f787a3c))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9992371992499126;
                result[1] += (float)0.0007628007500874043;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0.017361111111111112;
                result[1] += (float)0.9826388888888888;
              } else {
                result[0] += (float)0.9459255533199196;
                result[1] += (float)0.05407444668008048;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f38241d))) ) ) {
                result[0] += (float)0.7643356643356644;
                result[1] += (float)0.23566433566433567;
              } else {
                result[0] += (float)0.8438403701561596;
                result[1] += (float)0.15615962984384038;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += (float)0.9415637860082304;
                result[1] += (float)0.05843621399176955;
              } else {
                result[0] += (float)0.9975103734439834;
                result[1] += (float)0.0024896265560165973;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9224678816850911;
                result[1] += (float)0.07753211831490887;
              }
            } else {
              if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                result[0] += (float)0.9175050301810865;
                result[1] += (float)0.08249496981891348;
              } else {
                result[0] += (float)0.3181818181818182;
                result[1] += (float)0.6818181818181818;
              }
            }
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
              if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
                result[0] += (float)0.4267326732673267;
                result[1] += (float)0.5732673267326732;
              } else {
                result[0] += (float)0.799347471451876;
                result[1] += (float)0.200652528548124;
              }
            } else {
              if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed798ca))) ) ) {
                result[0] += (float)0.0008406893652795292;
                result[1] += (float)0.9991593106347205;
              } else {
                result[0] += (float)0.023890784982935155;
                result[1] += (float)0.9761092150170648;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08892e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f5084ea))) ) ) {
                result[0] += (float)0.9998279717873731;
                result[1] += (float)0.0001720282126268708;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51791f))) ) ) {
        if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f618596))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f439636))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f387685))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
              if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                result[0] += (float)0.7183098591549296;
                result[1] += (float)0.28169014084507044;
              } else {
                result[0] += (float)0.43478260869565216;
                result[1] += (float)0.5652173913043478;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.972183588317107;
                result[1] += (float)0.027816411682892908;
              }
            }
          } else {
            if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9ace84))) ) ) {
                result[0] += (float)0.3125;
                result[1] += (float)0.6875;
              } else {
                result[0] += (float)0.011306532663316583;
                result[1] += (float)0.9886934673366834;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                result[0] += (float)0.7957446808510639;
                result[1] += (float)0.20425531914893616;
              } else {
                result[0] += (float)0.051764025448235974;
                result[1] += (float)0.948235974551764;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
                result[0] += (float)0.9998410481737571;
                result[1] += (float)0.00015895182624294651;
              } else {
                result[0] += (float)0.9978903483436723;
                result[1] += (float)0.0021096516563276994;
              }
            }
          }
        }
      }
    }
  } else {
    result[0] += (float)0;
    result[1] += (float)1;
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
        if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f1e9c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3a715e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e97653f))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
          if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36bc04))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d82f538))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e92d24c))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.5217391304347826;
                result[1] += (float)0.4782608695652174;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.33478893740902477;
                result[1] += (float)0.6652110625909753;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed6d328))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.011111111111111112;
                result[1] += (float)0.9888888888888889;
              }
            } else {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                result[0] += (float)0.9113556472566101;
                result[1] += (float)0.08864435274338989;
              } else {
                result[0] += (float)0.5655048076923077;
                result[1] += (float)0.4344951923076923;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0c9578))) ) ) {
              if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f4858f1))) ) ) {
                result[0] += (float)0.9558823529411765;
                result[1] += (float)0.04411764705882353;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0.5;
              } else {
                result[0] += (float)0.06666666666666667;
                result[1] += (float)0.9333333333333333;
              }
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4db514))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9998202029361642;
                result[1] += (float)0.00017979706383577492;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e91fcb2))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd958e9))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3c3c87))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                result[0] += (float)0.7772277227722773;
                result[1] += (float)0.22277227722772278;
              } else {
                result[0] += (float)0.4623955431754875;
                result[1] += (float)0.5376044568245125;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e69462e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9848973358221619;
                result[1] += (float)0.015102664177838112;
              }
            }
          } else {
            if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f52e2a6))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.6145339652448657;
                result[1] += (float)0.3854660347551343;
              } else {
                result[0] += (float)0.026203208556149733;
                result[1] += (float)0.9737967914438502;
              }
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0fc970))) ) ) {
                result[0] += (float)0.3025210084033613;
                result[1] += (float)0.6974789915966386;
              } else {
                result[0] += (float)0.8235294117647058;
                result[1] += (float)0.17647058823529413;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
              if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
                result[0] += (float)0.9992202425045811;
                result[1] += (float)0.0007797574954189247;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f3e61f6))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edaa3bc))) ) ) {
                result[0] += (float)0.9901922236784622;
                result[1] += (float)0.00980777632153779;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ec7002c))) ) ) {
                result[0] += (float)0.7037037037037037;
                result[1] += (float)0.2962962962962963;
              } else {
                result[0] += (float)0.9841156946420104;
                result[1] += (float)0.01588430535798957;
              }
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += (float)0.1583268178264269;
                result[1] += (float)0.8416731821735731;
              } else {
                result[0] += (float)0.9930555555555556;
                result[1] += (float)0.006944444444444444;
              }
            }
          } else {
            if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9932754272905576;
                result[1] += (float)0.0067245727094424204;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e16a024))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( UNLIKELY( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f4eb97e))) ) ) {
                result[0] += (float)0.034482758620689655;
                result[1] += (float)0.9655172413793104;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.9197283112071627;
                result[1] += (float)0.08027168879283729;
              } else {
                result[0] += (float)0.4963325183374083;
                result[1] += (float)0.5036674816625917;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
                result[0] += (float)0.8846153846153846;
                result[1] += (float)0.11538461538461539;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9975129137172374;
                result[1] += (float)0.002487086282762579;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f427ee4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                result[0] += (float)0.9993867924528302;
                result[1] += (float)0.0006132075471698114;
              } else {
                result[0] += (float)0.9177456207159177;
                result[1] += (float)0.08225437928408226;
              }
            }
          }
        }
      }
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
      if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f3397d0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.7677833868747131;
                result[1] += (float)0.23221661312528682;
              } else {
                result[0] += (float)0.8965960179833012;
                result[1] += (float)0.10340398201669879;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6244f4))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.998804548546992;
                result[1] += (float)0.001195451453008067;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e64a32c))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ef526))) ) ) {
                result[0] += (float)0.9919786096256684;
                result[1] += (float)0.008021390374331552;
              } else {
                result[0] += (float)0.782608695652174;
                result[1] += (float)0.21739130434782608;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                result[0] += (float)0.838943894389439;
                result[1] += (float)0.16105610561056105;
              } else {
                result[0] += (float)0.27155172413793105;
                result[1] += (float)0.728448275862069;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ada2eaa))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb03738))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9995523056260259;
                result[1] += (float)0.0004476943739740337;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f453782))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.8823529411764706;
                result[1] += (float)0.11764705882352941;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
            if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f402eb2))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e576228))) ) ) {
                result[0] += (float)0.042105263157894736;
                result[1] += (float)0.9578947368421052;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb5c326))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec8b260))) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae6498a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e913962))) ) ) {
                result[0] += (float)0.9968404423380727;
                result[1] += (float)0.00315955766192733;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9576158940397351;
                result[1] += (float)0.0423841059602649;
              }
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += (float)0.5209260908281389;
                result[1] += (float)0.4790739091718611;
              } else {
                result[0] += (float)0.7787144362486829;
                result[1] += (float)0.22128556375131717;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                result[0] += (float)0.9998937498339842;
                result[1] += (float)0.0001062501660158844;
              } else {
                result[0] += (float)0.9913294797687862;
                result[1] += (float)0.008670520231213872;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                result[0] += (float)0.9926030292356464;
                result[1] += (float)0.007396970764353646;
              } else {
                result[0] += (float)0.8699163541967119;
                result[1] += (float)0.13008364580328816;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f63fbc3))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49f59f))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73dc0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec5edc8))) ) ) {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f444afa))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f5db6))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb9172e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9979029358897543;
                result[1] += (float)0.002097064110245656;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec454fc))) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea2dade))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
                result[0] += (float)0.9986468200270636;
                result[1] += (float)0.0013531799729364006;
              } else {
                result[0] += (float)0.9828787342071083;
                result[1] += (float)0.01712126579289172;
              }
            } else {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                result[0] += (float)0.9908133971291866;
                result[1] += (float)0.009186602870813397;
              } else {
                result[0] += (float)0.8949522510231923;
                result[1] += (float)0.10504774897680765;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
                result[0] += (float)0.37843833185448095;
                result[1] += (float)0.621561668145519;
              } else {
                result[0] += (float)0.12596242685555897;
                result[1] += (float)0.874037573144441;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9960186096448063;
                result[1] += (float)0.003981390355193701;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f80))) ) ) {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9999191639240141;
                result[1] += (float)8.083607598591142e-05;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0dcf64))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f34f9e3))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f420766))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += (float)0.8067605633802817;
                result[1] += (float)0.19323943661971832;
              } else {
                result[0] += (float)0.9542429284525791;
                result[1] += (float)0.045757071547420966;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.1895895895895896;
                result[1] += (float)0.8104104104104104;
              }
            }
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f475a41))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
                result[0] += (float)0.998185954678934;
                result[1] += (float)0.0018140453210659772;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e15142e))) ) ) {
            if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b6c47))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f5084ea))) ) ) {
                result[0] += (float)0.9995408307431478;
                result[1] += (float)0.00045916925685221815;
              } else {
                result[0] += (float)0.2857142857142857;
                result[1] += (float)0.7142857142857143;
              }
            }
          }
        }
      }
    }
  } else {
    result[0] += (float)0;
    result[1] += (float)1;
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec056d2))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9849570200573066;
                result[1] += (float)0.01504297994269341;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb28b60))) ) ) {
                result[0] += (float)0.983433734939759;
                result[1] += (float)0.016566265060240965;
              } else {
                result[0] += (float)0.8576032815704658;
                result[1] += (float)0.14239671842953414;
              }
            }
          } else {
            if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.5908412145345944;
                result[1] += (float)0.4091587854654057;
              }
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e8fa078))) ) ) {
                result[0] += (float)0.37037037037037035;
                result[1] += (float)0.6296296296296297;
              } else {
                result[0] += (float)0.09169764560099132;
                result[1] += (float)0.9083023543990086;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f80))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e81619a))) ) ) {
                result[0] += (float)0.5506756756756757;
                result[1] += (float)0.44932432432432434;
              } else {
                result[0] += (float)0.9994346600500954;
                result[1] += (float)0.0005653399499045989;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f50c45b))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f1e9c))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51791f))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99538a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += (float)0.9825436408977556;
                result[1] += (float)0.017456359102244388;
              } else {
                result[0] += (float)0.8934051144010767;
                result[1] += (float)0.10659488559892329;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.3786008230452675;
                result[1] += (float)0.6213991769547325;
              }
            } else {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                result[0] += (float)0.3407250967969025;
                result[1] += (float)0.6592749032030975;
              } else {
                result[0] += (float)0.10566258026853473;
                result[1] += (float)0.8943374197314653;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f355a8c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e88553b))) ) ) {
                result[0] += (float)0.5218253968253969;
                result[1] += (float)0.4781746031746032;
              } else {
                result[0] += (float)0.9992066073737911;
                result[1] += (float)0.000793392626208932;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ce09f37))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
        if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae89bf6))) ) ) {
          if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae84711))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e073712))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb05e44))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dbb29ae))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f370319))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                result[0] += (float)0.9916773367477593;
                result[1] += (float)0.008322663252240717;
              } else {
                result[0] += (float)0.7861892583120205;
                result[1] += (float)0.21381074168797953;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += (float)0.9077380952380952;
                result[1] += (float)0.09226190476190477;
              } else {
                result[0] += (float)0.3574766355140187;
                result[1] += (float)0.6425233644859814;
              }
            } else {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                result[0] += (float)0.04568527918781726;
                result[1] += (float)0.9543147208121827;
              } else {
                result[0] += (float)0.40756302521008403;
                result[1] += (float)0.592436974789916;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
          if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38853d80))) ) ) {
            if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
                result[0] += (float)0.9983742760448012;
                result[1] += (float)0.0016257239551987995;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e90d462))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.8969643252825171;
                result[1] += (float)0.10303567471748283;
              } else {
                result[0] += (float)0.7434343434343434;
                result[1] += (float)0.25656565656565655;
              }
            }
          } else {
            if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
              if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x3671a000))) ) ) {
                result[0] += (float)0.998829528619253;
                result[1] += (float)0.0011704713807469736;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen_small/esa_3_months_global/split_2/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        
    }
    

    return 0;
}
