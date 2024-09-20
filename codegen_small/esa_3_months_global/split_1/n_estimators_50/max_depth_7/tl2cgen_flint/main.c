
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
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
              if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f48fefc))) ) ) {
                result[0] += (float)0.8263598326359832;
                result[1] += (float)0.17364016736401675;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += (float)0.999231038098567;
                result[1] += (float)0.0007689619014330653;
              } else {
                result[0] += (float)0.9962294105973407;
                result[1] += (float)0.003770589402659258;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaec55a))) ) ) {
                result[0] += (float)0.43256997455470736;
                result[1] += (float)0.5674300254452926;
              } else {
                result[0] += (float)0.07142857142857142;
                result[1] += (float)0.9285714285714286;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
                result[0] += (float)0.890818858560794;
                result[1] += (float)0.10918114143920596;
              } else {
                result[0] += (float)0.9551569506726457;
                result[1] += (float)0.04484304932735426;
              }
            }
          } else {
            if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaac72f))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9076163610719323;
                result[1] += (float)0.0923836389280677;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9821587867975022;
                result[1] += (float)0.01784121320249777;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d4a20))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9609996213555472;
                result[1] += (float)0.03900037864445286;
              } else {
                result[0] += (float)0.7886178861788617;
                result[1] += (float)0.21138211382113822;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb859e2))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fb))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
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
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
                result[0] += (float)0.9873188405797102;
                result[1] += (float)0.012681159420289856;
              } else {
                result[0] += (float)0.7096774193548387;
                result[1] += (float)0.2903225806451613;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed23173))) ) ) {
                result[0] += (float)0.41025641025641024;
                result[1] += (float)0.5897435897435898;
              } else {
                result[0] += (float)0.26706231454005935;
                result[1] += (float)0.7329376854599406;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e90d462))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f393ce4))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9997166336072542;
                result[1] += (float)0.00028336639274582036;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea757a2))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3acc9585))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
          if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed3bc9c))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e970209))) ) ) {
                result[0] += (float)0.9996636394214599;
                result[1] += (float)0.0003363605785401951;
              } else {
                result[0] += (float)0.9873096446700508;
                result[1] += (float)0.012690355329949238;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5951))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
        if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e93eb6e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edae3a8))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b0332))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e95378d))) ) ) {
              if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
                result[0] += (float)0.9902485058194401;
                result[1] += (float)0.009751494180559924;
              } else {
                result[0] += (float)0.8809523809523809;
                result[1] += (float)0.11904761904761904;
              }
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
                result[0] += (float)0.5909090909090909;
                result[1] += (float)0.4090909090909091;
              } else {
                result[0] += (float)0.8878853939582685;
                result[1] += (float)0.11211460604173155;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.6441515650741351;
                result[1] += (float)0.35584843492586493;
              } else {
                result[0] += (float)0.20354729729729729;
                result[1] += (float)0.7964527027027027;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                result[0] += (float)0.9998159412414325;
                result[1] += (float)0.00018405875856749698;
              } else {
                result[0] += (float)0.9975574010747436;
                result[1] += (float)0.002442598925256473;
              }
            }
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e4f5644))) ) ) {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ad8b0ba))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9991370270034082;
                result[1] += (float)0.0008629729965918028;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e18f0c4))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.972853470437018;
                result[1] += (float)0.027146529562982004;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.9974823766364552;
                result[1] += (float)0.0025176233635448137;
              } else {
                result[0] += (float)0.11864847303443794;
                result[1] += (float)0.8813515269655621;
              }
            }
          } else {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d4b554a))) ) ) {
                result[0] += (float)0.9981523843040647;
                result[1] += (float)0.0018476156959352456;
              } else {
                result[0] += (float)0.7295081967213115;
                result[1] += (float)0.27049180327868855;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae8716e))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edded12))) ) ) {
              if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7a1c2c))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.14545454545454545;
                result[1] += (float)0.8545454545454545;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
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
  } else {
    result[0] += (float)0;
    result[1] += (float)1;
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
        if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ebee51c))) ) ) {
                result[0] += (float)0.9977966635190432;
                result[1] += (float)0.0022033364809568774;
              } else {
                result[0] += (float)0.9773890784982935;
                result[1] += (float)0.022610921501706484;
              }
            }
          } else {
            if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0.03488372093023256;
                result[1] += (float)0.9651162790697675;
              } else {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0.3333333333333333;
              }
            } else {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea9952))) ) ) {
                result[0] += (float)0.941066417212348;
                result[1] += (float)0.05893358278765201;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.02857142857142857;
                result[1] += (float)0.9714285714285714;
              }
            } else {
              if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb7f29b))) ) ) {
                result[0] += (float)0.926530612244898;
                result[1] += (float)0.07346938775510205;
              } else {
                result[0] += (float)0.7032085561497327;
                result[1] += (float)0.2967914438502674;
              }
            }
          } else {
            if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9572649572649573;
                result[1] += (float)0.042735042735042736;
              } else {
                result[0] += (float)0.032512772875058056;
                result[1] += (float)0.967487227124942;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.008447043534762833;
                result[1] += (float)0.9915529564652371;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d800c))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)0.9981801984268995;
                result[1] += (float)0.0018198015731004393;
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
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebebe06))) ) ) {
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
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
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
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e10712c))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += (float)0.08928571428571429;
                result[1] += (float)0.9107142857142857;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += (float)0.8957597173144877;
                result[1] += (float)0.10424028268551237;
              } else {
                result[0] += (float)0.7385100074128984;
                result[1] += (float)0.26148999258710154;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9995764626157669;
                result[1] += (float)0.000423537384233115;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)0.9974363498604004;
                result[1] += (float)0.0025636501395995726;
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
  if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9992934859403703;
                result[1] += (float)0.0007065140596297867;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                result[0] += (float)0.9944237918215614;
                result[1] += (float)0.0055762081784386614;
              } else {
                result[0] += (float)0.9235654343388523;
                result[1] += (float)0.07643456566114765;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea2caf8))) ) ) {
                result[0] += (float)0.8417030567685589;
                result[1] += (float)0.15829694323144106;
              } else {
                result[0] += (float)0.37270341207349084;
                result[1] += (float)0.6272965879265092;
              }
            } else {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                result[0] += (float)0.21843532145623548;
                result[1] += (float)0.7815646785437645;
              } else {
                result[0] += (float)0.08969759097898514;
                result[1] += (float)0.9103024090210149;
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
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.994263862332696;
                result[1] += (float)0.0057361376673040155;
              }
            } else {
              if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)0.9987173229508383;
                result[1] += (float)0.0012826770491617195;
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
  if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ecc7888))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f367fe8))) ) ) {
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
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb38ba0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb4488e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3d98d6))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee30aac))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0ee618))) ) ) {
              if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                result[0] += (float)0.9799876511822178;
                result[1] += (float)0.020012348817782296;
              } else {
                result[0] += (float)0.899314326957777;
                result[1] += (float)0.10068567304222302;
              }
            } else {
              if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
                result[0] += (float)0.9985810803435968;
                result[1] += (float)0.0014189196564031478;
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
  if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
        if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f381cc3))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb416a6))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.999874191681554;
                result[1] += (float)0.00012580831844601566;
              }
            } else {
              if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f513ce0))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9804751057598438;
                result[1] += (float)0.019524894240156198;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e87f206))) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7c951c))) ) ) {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.7153768392676626;
                result[1] += (float)0.2846231607323374;
              }
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += (float)0.9863646868500116;
                result[1] += (float)0.013635313149988445;
              } else {
                result[0] += (float)0.27876106194690264;
                result[1] += (float)0.7212389380530974;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                result[0] += (float)0.25783132530120484;
                result[1] += (float)0.7421686746987952;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                result[0] += (float)0.9967585089141004;
                result[1] += (float)0.0032414910858995136;
              } else {
                result[0] += (float)0.952247191011236;
                result[1] += (float)0.047752808988764044;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52bb8a))) ) ) {
                result[0] += (float)0.9998701804491756;
                result[1] += (float)0.00012981955082435416;
              } else {
                result[0] += (float)0.6875;
                result[1] += (float)0.3125;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e919a5e))) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x37a1ac00))) ) ) {
            if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
                result[0] += (float)0.7876823338735819;
                result[1] += (float)0.21231766612641814;
              } else {
                result[0] += (float)0.9971910112359551;
                result[1] += (float)0.0028089887640449437;
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
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb153bb))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ada2eaa))) ) ) {
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
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3d75f0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd59576))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9391061452513967;
                result[1] += (float)0.06089385474860335;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                result[0] += (float)0.9932523616734144;
                result[1] += (float)0.006747638326585695;
              } else {
                result[0] += (float)0.5887541345093715;
                result[1] += (float)0.41124586549062847;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee74630))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9937616712154481;
                result[1] += (float)0.006238328784551928;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3acc9585))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x36552000))) ) ) {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d258d46))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
                result[0] += (float)0.9838709677419355;
                result[1] += (float)0.016129032258064516;
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
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
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
    if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f3b5226))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
        if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6383af))) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6e36d0))) ) ) {
                result[0] += (float)0.8695652173913043;
                result[1] += (float)0.13043478260869565;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.7420758234928527;
                result[1] += (float)0.2579241765071473;
              }
            }
          } else {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
              if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea0ca6a))) ) ) {
                result[0] += (float)0.9722222222222222;
                result[1] += (float)0.027777777777777776;
              } else {
                result[0] += (float)0.4;
                result[1] += (float)0.6;
              }
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e10f037))) ) ) {
                result[0] += (float)0.9979406919275123;
                result[1] += (float)0.002059308072487644;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e08b800))) ) ) {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0e7812))) ) ) {
                result[0] += (float)0.9736842105263158;
                result[1] += (float)0.02631578947368421;
              } else {
                result[0] += (float)0.5833333333333334;
                result[1] += (float)0.4166666666666667;
              }
            } else {
              if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7e8ade))) ) ) {
                result[0] += (float)0.9914984059511158;
                result[1] += (float)0.008501594048884165;
              } else {
                result[0] += (float)0.7142857142857143;
                result[1] += (float)0.2857142857142857;
              }
            }
          } else {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                result[0] += (float)0.9142857142857143;
                result[1] += (float)0.08571428571428572;
              } else {
                result[0] += (float)0.3471502590673575;
                result[1] += (float)0.6528497409326425;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e60f7a3))) ) ) {
                result[0] += (float)0.10940919037199125;
                result[1] += (float)0.8905908096280087;
              } else {
                result[0] += (float)0.029850746268656716;
                result[1] += (float)0.9701492537313433;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
          if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e805e98))) ) ) {
            if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
              if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0e7812))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb505da))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9444444444444444;
                result[1] += (float)0.05555555555555555;
              }
            }
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f42a534))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                result[0] += (float)0.6887755102040817;
                result[1] += (float)0.3112244897959184;
              } else {
                result[0] += (float)0.03333333333333333;
                result[1] += (float)0.9666666666666667;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd04c5c))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9994975545035603;
                result[1] += (float)0.0005024454964397026;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e72bbd2))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f448739))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebf8a7a))) ) ) {
          if ( LIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f46b870))) ) ) {
            if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e75eeba))) ) ) {
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
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e21705c))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0b2bea))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e91fd22))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c462))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
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
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e675ad4))) ) ) {
                result[0] += (float)0.970917225950783;
                result[1] += (float)0.029082774049217;
              } else {
                result[0] += (float)0.4785276073619632;
                result[1] += (float)0.5214723926380368;
              }
            } else {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                result[0] += (float)0.8346007604562737;
                result[1] += (float)0.16539923954372623;
              } else {
                result[0] += (float)0.9945305378304466;
                result[1] += (float)0.0054694621695533276;
              }
            }
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                result[0] += (float)0.8256716417910448;
                result[1] += (float)0.17432835820895523;
              } else {
                result[0] += (float)0.6545287637698899;
                result[1] += (float)0.34547123623011017;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8603ba))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
              if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
                result[0] += (float)0.9565217391304348;
                result[1] += (float)0.043478260869565216;
              } else {
                result[0] += (float)0.9993597401481967;
                result[1] += (float)0.0006402598518032684;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
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
  if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f4443c3))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f377010))) ) ) {
          if ( LIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f6347b6))) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.018867924528301886;
                result[1] += (float)0.9811320754716981;
              }
            }
          } else {
            if ( LIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebf8a5d))) ) ) {
                result[0] += (float)0.13793103448275862;
                result[1] += (float)0.8620689655172413;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
            if ( LIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f48904a))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37e825))) ) ) {
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
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea5301a))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.4;
                result[1] += (float)0.6;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                result[0] += (float)0.9995521218228641;
                result[1] += (float)0.00044787817713581906;
              } else {
                result[0] += (float)0.9174542529660165;
                result[1] += (float)0.08254574703398351;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
            if ( UNLIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f46ad4e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                result[0] += (float)0.5517241379310345;
                result[1] += (float)0.4482758620689655;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
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
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42e172))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af36342))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
                result[0] += (float)0.5;
                result[1] += (float)0.5;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9295987887963664;
                result[1] += (float)0.07040121120363362;
              } else {
                result[0] += (float)0.19701492537313434;
                result[1] += (float)0.8029850746268656;
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
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e20efac))) ) ) {
            if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d53000))) ) ) {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f3571d4))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9995111159999511;
                result[1] += (float)0.0004888840000488884;
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
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb2ce54))) ) ) {
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
  if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9199ed))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f34ff90))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
            if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3974e))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9993238674780257;
                result[1] += (float)0.000676132521974307;
              }
            } else {
              if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e95378d))) ) ) {
                result[0] += (float)0.9999308914996544;
                result[1] += (float)6.910850034554251e-05;
              } else {
                result[0] += (float)0.9915373765867419;
                result[1] += (float)0.00846262341325811;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d374ba3))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
                result[0] += (float)0.8752280189711784;
                result[1] += (float)0.1247719810288216;
              } else {
                result[0] += (float)0.9867256637168141;
                result[1] += (float)0.01327433628318584;
              }
            } else {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += (float)0.8737758433079434;
                result[1] += (float)0.12622415669205658;
              } else {
                result[0] += (float)0.43562753036437246;
                result[1] += (float)0.5643724696356275;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f180c))) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e0142))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
                result[0] += (float)0.9740932642487047;
                result[1] += (float)0.025906735751295335;
              } else {
                result[0] += (float)0.7608695652173914;
                result[1] += (float)0.2391304347826087;
              }
            } else {
              if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e714cea))) ) ) {
                result[0] += (float)0.9442190669371197;
                result[1] += (float)0.055780933062880324;
              } else {
                result[0] += (float)0.9785905441570026;
                result[1] += (float)0.021409455842997322;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e900e68))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += (float)0.567929582854956;
                result[1] += (float)0.432070417145044;
              } else {
                result[0] += (float)0.9418803418803419;
                result[1] += (float)0.05811965811965812;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8658536585365854;
                result[1] += (float)0.13414634146341464;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.0033578174186778592;
                result[1] += (float)0.9966421825813221;
              }
            }
          } else {
            if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec44c73))) ) ) {
              if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f52ef00))) ) ) {
                result[0] += (float)0.9835013003901171;
                result[1] += (float)0.016498699609882966;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
                result[0] += (float)0.05128205128205128;
                result[1] += (float)0.9487179487179487;
              } else {
                result[0] += (float)0.8;
                result[1] += (float)0.2;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
      if ( LIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4e2f38))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4db514))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f776d8c))) ) ) {
              if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed0a64a))) ) ) {
                result[0] += (float)0.9890710382513661;
                result[1] += (float)0.01092896174863388;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea9fad8))) ) ) {
                result[0] += (float)0.44638069705093836;
                result[1] += (float)0.5536193029490617;
              } else {
                result[0] += (float)0.9777227722772277;
                result[1] += (float)0.022277227722772276;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6c5c58))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.980720871751886;
                result[1] += (float)0.019279128248113998;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f4de63d))) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e797ef2))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.8333333333333334;
                result[1] += (float)0.16666666666666666;
              }
            } else {
              if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6809ba))) ) ) {
                result[0] += (float)0.6470588235294118;
                result[1] += (float)0.35294117647058826;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8837209302325582;
                result[1] += (float)0.11627906976744186;
              }
            } else {
              if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.0742218675179569;
                result[1] += (float)0.9257781324820431;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
                result[0] += (float)0.9714285714285714;
                result[1] += (float)0.02857142857142857;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.1511627906976744;
                result[1] += (float)0.8488372093023255;
              } else {
                result[0] += (float)0.9166666666666666;
                result[1] += (float)0.08333333333333333;
              }
            }
          } else {
            if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f499b98))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9603e4))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2af1fa))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.99958455159007;
                result[1] += (float)0.00041544840993000087;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f373418))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea3559e))) ) ) {
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
    }
  } else {
    if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eb12ab8))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e946b36))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ebebe06))) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.7636363636363637;
                result[1] += (float)0.23636363636363636;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0.008733624454148471;
                result[1] += (float)0.9912663755458515;
              } else {
                result[0] += (float)0.9544246107102164;
                result[1] += (float)0.04557538928978352;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.13973799126637554;
                result[1] += (float)0.8602620087336245;
              }
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += (float)0.6749435665914221;
                result[1] += (float)0.32505643340857787;
              } else {
                result[0] += (float)0.9348484848484848;
                result[1] += (float)0.06515151515151515;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea1fe82))) ) ) {
                result[0] += (float)0.35106382978723405;
                result[1] += (float)0.648936170212766;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f3a2236))) ) ) {
                result[0] += (float)0.003476749239461104;
                result[1] += (float)0.9965232507605389;
              } else {
                result[0] += (float)0.07407407407407407;
                result[1] += (float)0.9259259259259259;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3da40e98))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0c9578))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.04954954954954955;
                result[1] += (float)0.9504504504504504;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += (float)0.9992211659603711;
                result[1] += (float)0.0007788340396289085;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850f88))) ) ) {
              if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
                result[0] += (float)0.997319932998325;
                result[1] += (float)0.002680067001675042;
              } else {
                result[0] += (float)0.9998770169224714;
                result[1] += (float)0.00012298307752853208;
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
  if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
      if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
        if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaf91cf))) ) ) {
          if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f377010))) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e09da8c))) ) ) {
                result[0] += (float)0.06626506024096386;
                result[1] += (float)0.9337349397590361;
              } else {
                result[0] += (float)0.2222222222222222;
                result[1] += (float)0.7777777777777778;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e822724))) ) ) {
                result[0] += (float)0.9862542955326461;
                result[1] += (float)0.013745704467353952;
              } else {
                result[0] += (float)0.4875;
                result[1] += (float)0.5125;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7038ee))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e69462e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5301a))) ) ) {
                result[0] += (float)0.9726027397260274;
                result[1] += (float)0.0273972602739726;
              } else {
                result[0] += (float)0.9978500403117442;
                result[1] += (float)0.002149959688255845;
              }
            } else {
              if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
                result[0] += (float)0.2682926829268293;
                result[1] += (float)0.7317073170731707;
              } else {
                result[0] += (float)0.9826619071902091;
                result[1] += (float)0.017338092809790925;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f364ba6))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f30ce74))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.9942085394733757;
                result[1] += (float)0.005791460526624306;
              } else {
                result[0] += (float)0.17362768496420047;
                result[1] += (float)0.8263723150357996;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e479de8))) ) ) {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
                result[0] += (float)0.09090909090909091;
                result[1] += (float)0.9090909090909091;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
                result[0] += (float)0.9834254143646409;
                result[1] += (float)0.016574585635359115;
              } else {
                result[0] += (float)0.7297297297297297;
                result[1] += (float)0.2702702702702703;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ad90574))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9848484848484849;
                result[1] += (float)0.015151515151515152;
              }
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
                result[0] += (float)0.005412591396828412;
                result[1] += (float)0.9945874086031716;
              } else {
                result[0] += (float)0.9917971662938105;
                result[1] += (float)0.00820283370618941;
              }
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  } else {
    if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f4359f0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea92e63))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e75a17a))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.07142857142857142;
                result[1] += (float)0.9285714285714286;
              }
            } else {
              if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f44ffa6))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0.3333333333333333;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f355bf2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e122986))) ) ) {
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
        if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f461dd6))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
            if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e1072de))) ) ) {
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
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7350da))) ) ) {
            if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e9404fb))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.18181818181818182;
                result[1] += (float)0.8181818181818182;
              }
            }
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e892d56))) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4795b))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.16666666666666666;
                result[1] += (float)0.8333333333333334;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
            if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8b6c47))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e98f0c4))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
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
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae945bf))) ) ) {
                result[0] += (float)0.9907996396298016;
                result[1] += (float)0.009200360370198477;
              } else {
                result[0] += (float)0.9513005948909367;
                result[1] += (float)0.048699405109063336;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44cf16))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9a3a9f))) ) ) {
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
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3acd945e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea69a56))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x388d0280))) ) ) {
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
          }
        }
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
    if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9461938245184959;
                result[1] += (float)0.053806175481504126;
              }
            } else {
              if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7c17e2))) ) ) {
                result[0] += (float)0.9996301319196154;
                result[1] += (float)0.0003698680803846628;
              } else {
                result[0] += (float)0.9981836070536593;
                result[1] += (float)0.001816392946340725;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9266204647370566;
                result[1] += (float)0.07337953526294333;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                result[0] += (float)0.5966587112171837;
                result[1] += (float)0.4033412887828162;
              } else {
                result[0] += (float)0.9977528089887641;
                result[1] += (float)0.0022471910112359553;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9928977272727273;
                result[1] += (float)0.007102272727272727;
              } else {
                result[0] += (float)0.36418359668924005;
                result[1] += (float)0.63581640331076;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0d5b02))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb73dc0))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44c378))) ) ) {
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
      if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
        if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46e1c3))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1e4c31))) ) ) {
            if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
                result[0] += (float)0.992153443766347;
                result[1] += (float)0.007846556233653008;
              } else {
                result[0] += (float)0.9999505256648114;
                result[1] += (float)4.9474335188620906e-05;
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
          if ( LIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e16b69b))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea403fa))) ) ) {
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
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5870))) ) ) {
      if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1e5870))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e95d9b9))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eab68f8))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  } else {
    if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e87f206))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e03eae8))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e91fcb2))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9998801404753629;
                result[1] += (float)0.0001198595246371253;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += (float)0.46469465648854963;
                result[1] += (float)0.5353053435114504;
              } else {
                result[0] += (float)0.8105263157894737;
                result[1] += (float)0.18947368421052632;
              }
            }
          } else {
            if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2bcf5d))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9914183404675667;
                result[1] += (float)0.008581659532433322;
              }
            }
          }
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
    if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f4bf3dc))) ) ) {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e97027a))) ) ) {
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
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3eba75de))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0.004885993485342019;
                result[1] += (float)0.995114006514658;
              } else {
                result[0] += (float)0.76;
                result[1] += (float)0.24;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4f1da8))) ) ) {
                result[0] += (float)0.9993077668558771;
                result[1] += (float)0.0006922331441229406;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2d7a67))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9958417069312011;
                result[1] += (float)0.004158293068798905;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f6f07e6))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68bba0))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
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
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
          if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f497d8a))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd32c8))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1a7bda))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d7ef469))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f2d6e77))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9948543305825709;
                result[1] += (float)0.005145669417429087;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0.25307125307125306;
                result[1] += (float)0.7469287469287469;
              } else {
                result[0] += (float)0.9474007997539219;
                result[1] += (float)0.05259920024607813;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e809c0e))) ) ) {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0e208c))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9523809523809523;
                result[1] += (float)0.047619047619047616;
              }
            }
          } else {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e95b786))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.694077545803153;
                result[1] += (float)0.30592245419684705;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ec5d7b8))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                result[0] += (float)0.9599383667180277;
                result[1] += (float)0.040061633281972264;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2ea591))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f49aae7))) ) ) {
              if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38241d))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.5;
                result[1] += (float)0.5;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9867549668874173;
                result[1] += (float)0.013245033112582781;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f455a69))) ) ) {
          if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f513ce0))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e67ba38))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9971590909090909;
                result[1] += (float)0.002840909090909091;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8aa64c))) ) ) {
                result[0] += (float)0.3627450980392157;
                result[1] += (float)0.6372549019607843;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1fe466))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += (float)0.012084592145015106;
                result[1] += (float)0.9879154078549849;
              } else {
                result[0] += (float)0.9986638671502195;
                result[1] += (float)0.0013361328497804924;
              }
            } else {
              if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb5c326))) ) ) {
                result[0] += (float)0.002105263157894737;
                result[1] += (float)0.9978947368421053;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
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
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebc7f0c))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec1232a))) ) ) {
              if ( UNLIKELY( !(data[49].missing != -1) || ((*( ((int*)(data)) + 49 ))<=((int)(0x3f266bb4))) ) ) {
                result[0] += (float)0.9626865671641791;
                result[1] += (float)0.03731343283582089;
              } else {
                result[0] += (float)0.9968520461699895;
                result[1] += (float)0.0031479538300104933;
              }
            } else {
              if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e68f3be))) ) ) {
                result[0] += (float)0.9814951887490747;
                result[1] += (float)0.018504811250925242;
              } else {
                result[0] += (float)0.7943770672546858;
                result[1] += (float)0.20562293274531424;
              }
            }
          } else {
            if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee79fcd))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
                result[0] += (float)0.84;
                result[1] += (float)0.16;
              } else {
                result[0] += (float)0.9836065573770492;
                result[1] += (float)0.01639344262295082;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
            if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
              if ( LIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3f68bba0))) ) ) {
                result[0] += (float)0.2222222222222222;
                result[1] += (float)0.7777777777777778;
              } else {
                result[0] += (float)0.8181818181818182;
                result[1] += (float)0.18181818181818182;
              }
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e946b36))) ) ) {
                result[0] += (float)0.9607843137254902;
                result[1] += (float)0.0392156862745098;
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
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += (float)0.3780392156862745;
                result[1] += (float)0.6219607843137255;
              } else {
                result[0] += (float)0.045288326300984526;
                result[1] += (float)0.9547116736990154;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e988d8f))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3de10940))) ) ) {
            if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9983932784174184;
                result[1] += (float)0.0016067215825815704;
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
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e182b3a))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1a7bda))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea79579))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7b0a06))) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8356070941336972;
                result[1] += (float)0.16439290586630287;
              }
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += (float)0.8802395209580839;
                result[1] += (float)0.11976047904191617;
              } else {
                result[0] += (float)0.3210548346588531;
                result[1] += (float)0.6789451653411469;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e878fb0))) ) ) {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
                result[0] += (float)0.6350710900473934;
                result[1] += (float)0.36492890995260663;
              } else {
                result[0] += (float)0.032679738562091505;
                result[1] += (float)0.9673202614379085;
              }
            } else {
              if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
                result[0] += (float)0.9993153637447068;
                result[1] += (float)0.0006846362552932525;
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
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
        if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8666f0))) ) ) {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += (float)0.4084507042253521;
                result[1] += (float)0.5915492957746479;
              } else {
                result[0] += (float)0.8138297872340425;
                result[1] += (float)0.18617021276595744;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          } else {
            if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea8c80b))) ) ) {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9840662842574889;
                result[1] += (float)0.015933715742511154;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb4488e))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d728d94))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += (float)0.43644859813084114;
                result[1] += (float)0.5635514018691589;
              } else {
                result[0] += (float)0.7943874797625472;
                result[1] += (float)0.20561252023745277;
              }
            }
          } else {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ea18ff1))) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9883371871323678;
                result[1] += (float)0.011662812867632145;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x36d52000))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += (float)0.041666666666666664;
                result[1] += (float)0.9583333333333334;
              } else {
                result[0] += (float)0.9999767249706153;
                result[1] += (float)2.3275029384724597e-05;
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
  if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea6c904))) ) ) {
                result[0] += (float)0.9926372963186482;
                result[1] += (float)0.00736270368135184;
              } else {
                result[0] += (float)0.9995573262505534;
                result[1] += (float)0.0004426737494466578;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.8552521980564554;
                result[1] += (float)0.14474780194354467;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9c676e))) ) ) {
          if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
            if ( LIKELY( !(data[64].missing != -1) || ((*( ((int*)(data)) + 64 ))<=((int)(0x3f35a2c5))) ) ) {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e92d24c))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9929078014184397;
                result[1] += (float)0.0070921985815602835;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
        if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
          if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e20efac))) ) ) {
            if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f533c24))) ) ) {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
                result[0] += (float)0.9976226496650097;
                result[1] += (float)0.0023773503349902745;
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
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea2cada))) ) ) {
        if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec1ef9e))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9180327868852459;
                result[1] += (float)0.08196721311475409;
              }
            }
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6dbe7b))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.004830917874396135;
                result[1] += (float)0.9951690821256038;
              }
            } else {
              if ( UNLIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f37ac08))) ) ) {
                result[0] += (float)0.1835564053537285;
                result[1] += (float)0.8164435946462715;
              } else {
                result[0] += (float)0.7432;
                result[1] += (float)0.2568;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f34e56e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9926959943074798;
                result[1] += (float)0.007304005692520196;
              }
            }
          }
        }
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  } else {
    if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f522de3))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
            if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e657868))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e9f1ca7))) ) ) {
                result[0] += (float)0.8567193675889329;
                result[1] += (float)0.1432806324110672;
              } else {
                result[0] += (float)0.9995011698754113;
                result[1] += (float)0.0004988301245887621;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e131598))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eaebd00))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3e9eccae))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e86042b))) ) ) {
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
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f531eed))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0f20c1))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb7fb0c))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
            if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f579621))) ) ) {
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
      }
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dc55866))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f44ffbe))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[73].missing != -1) || ((*( ((int*)(data)) + 73 ))<=((int)(0x3f7802cc))) ) ) {
          if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7bdc16))) ) ) {
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
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8603ba))) ) ) {
        if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                result[0] += (float)0.9928027681660899;
                result[1] += (float)0.007197231833910035;
              } else {
                result[0] += (float)0.9200379867046534;
                result[1] += (float)0.07996201329534663;
              }
            } else {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec056d2))) ) ) {
                result[0] += (float)0.8235955056179776;
                result[1] += (float)0.17640449438202246;
              } else {
                result[0] += (float)0.39448173005219983;
                result[1] += (float)0.6055182699478001;
              }
            }
          } else {
            if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += (float)0.34576612903225806;
                result[1] += (float)0.6542338709677419;
              } else {
                result[0] += (float)0.9832935560859188;
                result[1] += (float)0.016706443914081145;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += (float)0.5862068965517241;
                result[1] += (float)0.41379310344827586;
              } else {
                result[0] += (float)0.13274336283185842;
                result[1] += (float)0.8672566371681416;
              }
            }
          } else {
            if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
              if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9b9b16))) ) ) {
                result[0] += (float)0.9897435897435898;
                result[1] += (float)0.010256410256410256;
              } else {
                result[0] += (float)0.8709677419354839;
                result[1] += (float)0.12903225806451613;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.05555555555555555;
                result[1] += (float)0.9444444444444444;
              }
            }
          }
        }
      } else {
        if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f52a668))) ) ) {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9995827610785626;
                result[1] += (float)0.0004172389214373881;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e925fe8))) ) ) {
            if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e380c))) ) ) {
              if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f462cff))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.013293943870014771;
                result[1] += (float)0.9867060561299852;
              }
            } else {
              if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f444afa))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb03738))) ) ) {
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
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
    if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8dbd57))) ) ) {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed8247d))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e74dbf0))) ) ) {
                result[0] += (float)0.9940500615510874;
                result[1] += (float)0.005949938448912597;
              } else {
                result[0] += (float)0.7798072044647387;
                result[1] += (float)0.22019279553526128;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec2bc12))) ) ) {
                result[0] += (float)0.9979229607250756;
                result[1] += (float)0.0020770392749244714;
              } else {
                result[0] += (float)0.9310344827586207;
                result[1] += (float)0.06896551724137931;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
                result[0] += (float)0.5384615384615384;
                result[1] += (float)0.46153846153846156;
              } else {
                result[0] += (float)0.9750240153698367;
                result[1] += (float)0.024975984630163303;
              }
            }
          } else {
            if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e4710))) ) ) {
                result[0] += (float)0.00015895724050230488;
                result[1] += (float)0.9998410427594977;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.9452554744525548;
                result[1] += (float)0.05474452554744526;
              } else {
                result[0] += (float)0.19207317073170732;
                result[1] += (float)0.8079268292682927;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[40].missing != -1) || ((*( ((int*)(data)) + 40 ))<=((int)(0x3f36144d))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f48c3c8))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb1b232))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9996641101718636;
                result[1] += (float)0.0003358898281363713;
              }
            } else {
              if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb3ea17))) ) ) {
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
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ad30d33))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e22fb72))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e2241c8))) ) ) {
            if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e939ec0))) ) ) {
              if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36553000))) ) ) {
                result[0] += (float)0.9999345635388038;
                result[1] += (float)6.543646119617851e-05;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea895f6))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e26d808))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea8d23c))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
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
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ebe8a28))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3f180c))) ) ) {
        if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec689ae))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3e9ccda8))) ) ) {
            if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f37e825))) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( LIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f38f638))) ) ) {
              if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e9eccae))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.003076923076923077;
                result[1] += (float)0.9969230769230769;
              }
            } else {
              if ( LIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aefe7ca))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.09090909090909091;
                result[1] += (float)0.9090909090909091;
              }
            }
          } else {
            if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
                result[0] += (float)0.989060489060489;
                result[1] += (float)0.010939510939510939;
              } else {
                result[0] += (float)0.8657668711656442;
                result[1] += (float)0.13423312883435584;
              }
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e853e30))) ) ) {
                result[0] += (float)0.2249216300940439;
                result[1] += (float)0.7750783699059561;
              } else {
                result[0] += (float)0.8302107728337237;
                result[1] += (float)0.16978922716627634;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
            if ( UNLIKELY( !(data[50].missing != -1) || ((*( ((int*)(data)) + 50 ))<=((int)(0x3f000000))) ) ) {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda3044))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += (float)0.5158730158730159;
                result[1] += (float)0.48412698412698413;
              } else {
                result[0] += (float)0.999248417721519;
                result[1] += (float)0.0007515822784810127;
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
    if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f422cae))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6ad143))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec52565))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9981080858764498;
                result[1] += (float)0.001891914123550218;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
            if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e6dbe7b))) ) ) {
              if ( UNLIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f449315))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9793788187372708;
                result[1] += (float)0.020621181262729125;
              }
            } else {
              if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e979cce))) ) ) {
                result[0] += (float)0.9546558704453442;
                result[1] += (float)0.045344129554655874;
              } else {
                result[0] += (float)0.7327586206896551;
                result[1] += (float)0.2672413793103448;
              }
            }
          } else {
            if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f44896c))) ) ) {
              if ( UNLIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f360b9e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9674721189591078;
                result[1] += (float)0.032527881040892194;
              }
            } else {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
                result[0] += (float)0.07677350140807296;
                result[1] += (float)0.9232264985919271;
              } else {
                result[0] += (float)0.9630516592541909;
                result[1] += (float)0.0369483407458091;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3e0d8188))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88b800))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9994196394026155;
                result[1] += (float)0.0005803605973845082;
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
      } else {
        if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1b4246))) ) ) {
          if ( LIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3aea446e))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
              if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
                result[0] += (float)0.5278969957081545;
                result[1] += (float)0.4721030042918455;
              } else {
                result[0] += (float)0.3254901960784314;
                result[1] += (float)0.6745098039215687;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.01119664100769769;
                result[1] += (float)0.9888033589923023;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3ea5fc90))) ) ) {
                result[0] += (float)0.875;
                result[1] += (float)0.125;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e70f013))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.0038910505836575876;
                result[1] += (float)0.9961089494163424;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += (float)0.8947368421052632;
                result[1] += (float)0.10526315789473684;
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
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee58c9f))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aee9437))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f513ce0))) ) ) {
            if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
              if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ebebe06))) ) ) {
                result[0] += (float)0.9418238993710691;
                result[1] += (float)0.05817610062893082;
              } else {
                result[0] += (float)0.7947939262472885;
                result[1] += (float)0.2052060737527115;
              }
            } else {
              if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed16bed))) ) ) {
                result[0] += (float)0.8143047534429143;
                result[1] += (float)0.18569524655708575;
              } else {
                result[0] += (float)0.4112116991643454;
                result[1] += (float)0.5887883008356546;
              }
            }
          } else {
            if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8652849740932642;
                result[1] += (float)0.13471502590673576;
              }
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)0.7792746113989637;
                result[1] += (float)0.22072538860103627;
              } else {
                result[0] += (float)0.07175773535220539;
                result[1] += (float)0.9282422646477946;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += (float)0.6538461538461539;
                result[1] += (float)0.34615384615384615;
              } else {
                result[0] += (float)0.9853111712408195;
                result[1] += (float)0.014688828759180518;
              }
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                result[0] += (float)0.9069212410501193;
                result[1] += (float)0.09307875894988067;
              } else {
                result[0] += (float)0.10358565737051793;
                result[1] += (float)0.896414342629482;
              }
            }
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e89e0c1))) ) ) {
              if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                result[0] += (float)0.9666666666666667;
                result[1] += (float)0.03333333333333333;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb32cca))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9997283238379852;
                result[1] += (float)0.0002716761620148783;
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
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec38888))) ) ) {
        if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
          if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f2e4bcf))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9923439060345237;
                result[1] += (float)0.007656093965476247;
              }
            }
          } else {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb4dc48))) ) ) {
                result[0] += (float)0.9978136102760317;
                result[1] += (float)0.002186389723968297;
              } else {
                result[0] += (float)0.9580033597312215;
                result[1] += (float)0.041996640268778494;
              }
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.16757161580228422;
                result[1] += (float)0.8324283841977158;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[44].missing != -1) || ((*( ((int*)(data)) + 44 ))<=((int)(0x36552000))) ) ) {
            if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
                result[0] += (float)0.9984014456491521;
                result[1] += (float)0.001598554350847929;
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
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0d5b02))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
        if ( LIKELY( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x3ea3974e))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
        } else {
          if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e873b23))) ) ) {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
              if ( LIKELY( !(data[70].missing != -1) || ((*( ((int*)(data)) + 70 ))<=((int)(0x3f71b687))) ) ) {
                result[0] += (float)0.998062015503876;
                result[1] += (float)0.001937984496124031;
              } else {
                result[0] += (float)0.9771428571428571;
                result[1] += (float)0.022857142857142857;
              }
            } else {
              if ( LIKELY( !(data[48].missing != -1) || ((*( ((int*)(data)) + 48 ))<=((int)(0x3f6dda8a))) ) ) {
                result[0] += (float)0.9047619047619048;
                result[1] += (float)0.09523809523809523;
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
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
                result[0] += (float)0.8925619834710744;
                result[1] += (float)0.10743801652892562;
              } else {
                result[0] += (float)0.6785225718194254;
                result[1] += (float)0.32147742818057456;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.9680511182108626;
                result[1] += (float)0.03194888178913738;
              } else {
                result[0] += (float)0.22615803814713897;
                result[1] += (float)0.773841961852861;
              }
            }
          } else {
            if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3ec38888))) ) ) {
              if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e6fc1dd))) ) ) {
                result[0] += (float)0.875968992248062;
                result[1] += (float)0.12403100775193798;
              } else {
                result[0] += (float)0.9669368600682594;
                result[1] += (float)0.033063139931740614;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += (float)0.9857142857142858;
                result[1] += (float)0.014285714285714285;
              } else {
                result[0] += (float)0.4716981132075472;
                result[1] += (float)0.5283018867924528;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46e1c3))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e98cf7d))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4488e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9994555264069692;
                result[1] += (float)0.000544473593030738;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
            if ( LIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f488b22))) ) ) {
              if ( LIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f532d44))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9;
                result[1] += (float)0.1;
              }
            } else {
              if ( LIKELY( !(data[71].missing != -1) || ((*( ((int*)(data)) + 71 ))<=((int)(0x3f7c7158))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          } else {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e82ed20))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.014388489208633094;
                result[1] += (float)0.9856115107913669;
              }
            }
          }
        } else {
          if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e10712c))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += (float)0.9148936170212766;
                result[1] += (float)0.0851063829787234;
              } else {
                result[0] += (float)0.011756238003838772;
                result[1] += (float)0.9882437619961613;
              }
            } else {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += (float)0.4;
                result[1] += (float)0.6;
              } else {
                result[0] += (float)0.0007415341517673231;
                result[1] += (float)0.9992584658482326;
              }
            }
          } else {
            if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
              if ( LIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f49f59f))) ) ) {
                result[0] += (float)0.3912087912087912;
                result[1] += (float)0.6087912087912087;
              } else {
                result[0] += (float)0.8584474885844748;
                result[1] += (float)0.1415525114155251;
              }
            } else {
              if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae84711))) ) ) {
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
  } else {
    if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
      } else {
        if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38853cc0))) ) ) {
            if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e9576f4))) ) ) {
              if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7288c2))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9992816091954023;
                result[1] += (float)0.0007183908045977011;
              }
            } else {
              if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3f5db6))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9457831325301205;
                result[1] += (float)0.05421686746987952;
              }
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
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae61f2c))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb621fc))) ) ) {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e072ceb))) ) ) {
                result[0] += (float)0.9988031119090365;
                result[1] += (float)0.0011968880909634949;
              } else {
                result[0] += (float)0.8652482269503546;
                result[1] += (float)0.1347517730496454;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45783c))) ) ) {
              if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aef3e00))) ) ) {
                result[0] += (float)0.9993171148100726;
                result[1] += (float)0.0006828851899274435;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e7fac27))) ) ) {
                result[0] += (float)0.9685863874345549;
                result[1] += (float)0.031413612565445025;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8966687884574581;
                result[1] += (float)0.1033312115425419;
              }
            }
          } else {
            if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
              if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
                result[0] += (float)0.9987560030087369;
                result[1] += (float)0.001243996991263091;
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
  if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f431db8))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e809c0e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                result[0] += (float)0.8816265060240964;
                result[1] += (float)0.11837349397590362;
              } else {
                result[0] += (float)0.9976412869138598;
                result[1] += (float)0.002358713086140202;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
          if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea8c828))) ) ) {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec5d64a))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed1c0bb))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9672131147540983;
                result[1] += (float)0.03278688524590164;
              }
            }
          } else {
            result[0] += (float)0;
            result[1] += (float)1;
          }
        } else {
          if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e55c93f))) ) ) {
            if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e92c2ae))) ) ) {
                result[0] += (float)0.02086677367576244;
                result[1] += (float)0.9791332263242376;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += (float)0.8;
                result[1] += (float)0.2;
              } else {
                result[0] += (float)0.355956678700361;
                result[1] += (float)0.644043321299639;
              }
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e19b730))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.07322080291970803;
                result[1] += (float)0.926779197080292;
              }
            }
          }
        }
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3ea8d23c))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3acd945e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[66].missing != -1) || ((*( ((int*)(data)) + 66 ))<=((int)(0x36554000))) ) ) {
          if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40ba05))) ) ) {
            result[0] += (float)1;
            result[1] += (float)0;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e053c46))) ) ) {
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
    if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e11c43c))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f40f358))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
            if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3eaec55a))) ) ) {
                result[0] += (float)0.9998975274845925;
                result[1] += (float)0.00010247251540747464;
              } else {
                result[0] += (float)0.9983702898908589;
                result[1] += (float)0.001629710109141192;
              }
            }
          } else {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f373418))) ) ) {
              if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f522de3))) ) ) {
                result[0] += (float)0.900352733686067;
                result[1] += (float)0.09964726631393298;
              } else {
                result[0] += (float)0.3407780979827089;
                result[1] += (float)0.659221902017291;
              }
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0.2033567525370804;
                result[1] += (float)0.7966432474629196;
              } else {
                result[0] += (float)0.9685912378220071;
                result[1] += (float)0.03140876217799295;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d33cc3e))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f44ffbe))) ) ) {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
            if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e89e0c1))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        }
      } else {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3a2858))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
                result[0] += (float)0.9777623349548298;
                result[1] += (float)0.022237665045170257;
              } else {
                result[0] += (float)0.43209876543209874;
                result[1] += (float)0.5679012345679012;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7e23c8))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea4c014))) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3ed262))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f504bde))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae79d48))) ) ) {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
                result[0] += (float)0.998707021663984;
                result[1] += (float)0.0012929783360160435;
              } else {
                result[0] += (float)0.7423285198555957;
                result[1] += (float)0.25767148014440433;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
                result[0] += (float)0.7693024990675121;
                result[1] += (float)0.23069750093248786;
              } else {
                result[0] += (float)0.9981509303131861;
                result[1] += (float)0.0018490696868138218;
              }
            }
          }
        }
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e932573))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e1da382))) ) ) {
          if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x36552000))) ) ) {
            if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f4f0d78))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e073712))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e08886f))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9999608027594857;
                result[1] += (float)3.9197240514267794e-05;
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
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
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
      if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aec176e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8faba2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
            if ( UNLIKELY( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f48c97e))) ) ) {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.7635239567233385;
                result[1] += (float)0.23647604327666152;
              } else {
                result[0] += (float)0.1024793388429752;
                result[1] += (float)0.8975206611570248;
              }
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.906224180666483;
                result[1] += (float)0.09377581933351693;
              }
            }
          } else {
            if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
              if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
                result[0] += (float)0.9751552795031055;
                result[1] += (float)0.024844720496894408;
              } else {
                result[0] += (float)0.9993324798829554;
                result[1] += (float)0.0006675201170446232;
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
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e0c7d46))) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f480f05))) ) ) {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e97c804))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4b5a92))) ) ) {
              if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f505ae8))) ) ) {
                result[0] += (float)0.08070175438596491;
                result[1] += (float)0.9192982456140351;
              } else {
                result[0] += (float)0.2329192546583851;
                result[1] += (float)0.7670807453416149;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee32e94))) ) ) {
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
        if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f38cdca))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f40745c))) ) ) {
            if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51b565))) ) ) {
              if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
                result[0] += (float)0.9990653524956302;
                result[1] += (float)0.0009346475043697806;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0.2857142857142857;
                result[1] += (float)0.7142857142857143;
              } else {
                result[0] += (float)0.897038748293605;
                result[1] += (float)0.10296125170639504;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f20c1))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += (float)0.9995229576624926;
                result[1] += (float)0.0004770423375074538;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      }
    } else {
      if ( LIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
        if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1ccd5a))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a7c4a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec52154))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8aa6bc))) ) ) {
            if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0.6449511400651465;
                result[1] += (float)0.3550488599348534;
              } else {
                result[0] += (float)0.9202733485193622;
                result[1] += (float)0.07972665148063782;
              }
            }
          } else {
            if ( UNLIKELY( !(data[72].missing != -1) || ((*( ((int*)(data)) + 72 ))<=((int)(0x3ee78222))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f4753fd))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.997639653815893;
                result[1] += (float)0.0023603461841070024;
              }
            }
          }
        } else {
          result[0] += (float)0;
          result[1] += (float)1;
        }
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f51791f))) ) ) {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      } else {
        if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae74838))) ) ) {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
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
      }
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f4227f4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae84711))) ) ) {
          if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd13ea))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
                result[0] += (float)0.9968730953705912;
                result[1] += (float)0.003126904629408803;
              } else {
                result[0] += (float)0.8538718623337836;
                result[1] += (float)0.14612813766621632;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d3b5afc))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9996951312459986;
                result[1] += (float)0.0003048687540014024;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.957159857199524;
                result[1] += (float)0.042840142800476;
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
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e913728))) ) ) {
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
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f3fa42f))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3ed262))) ) ) {
          if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f448739))) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.996010895952769;
                result[1] += (float)0.003989104047230992;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
                result[0] += (float)0.7074426989441154;
                result[1] += (float)0.2925573010558846;
              } else {
                result[0] += (float)0.9853789919199692;
                result[1] += (float)0.014621008080030782;
              }
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              if ( UNLIKELY( !(data[43].missing != -1) || ((*( ((int*)(data)) + 43 ))<=((int)(0x3ae8f0da))) ) ) {
                result[0] += (float)0.9;
                result[1] += (float)0.1;
              } else {
                result[0] += (float)0.054690786705931846;
                result[1] += (float)0.9453092132940681;
              }
            } else {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e920a8c))) ) ) {
                result[0] += (float)0.9801512287334594;
                result[1] += (float)0.01984877126654064;
              } else {
                result[0] += (float)0.7690179806362379;
                result[1] += (float)0.23098201936376211;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
              if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e766705))) ) ) {
                result[0] += (float)0.9475218658892128;
                result[1] += (float)0.052478134110787174;
              } else {
                result[0] += (float)0.26294820717131473;
                result[1] += (float)0.7370517928286853;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9993463309270733;
                result[1] += (float)0.0006536690729267322;
              }
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
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[39].missing != -1) || ((*( ((int*)(data)) + 39 ))<=((int)(0x3f38cdca))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e797ef2))) ) ) {
          if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3eb8b83e))) ) ) {
                result[0] += (float)0.9957604663487016;
                result[1] += (float)0.0042395336512983575;
              } else {
                result[0] += (float)0.9624413145539906;
                result[1] += (float)0.03755868544600939;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9148514851485149;
                result[1] += (float)0.08514851485148515;
              }
            }
          } else {
            if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f402eb2))) ) ) {
                result[0] += (float)0.9889908256880734;
                result[1] += (float)0.011009174311926606;
              } else {
                result[0] += (float)0.6666666666666666;
                result[1] += (float)0.3333333333333333;
              }
            } else {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0f2181))) ) ) {
                result[0] += (float)0.4520884520884521;
                result[1] += (float)0.547911547911548;
              } else {
                result[0] += (float)0.06459948320413436;
                result[1] += (float)0.9354005167958657;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f45f0b9))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += (float)0.9966978536048432;
                result[1] += (float)0.003302146395156852;
              } else {
                result[0] += (float)0.9997569393806816;
                result[1] += (float)0.00024306061931845803;
              }
            } else {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e809c0e))) ) ) {
                result[0] += (float)0.7634228187919463;
                result[1] += (float)0.23657718120805368;
              } else {
                result[0] += (float)0.9984913920605809;
                result[1] += (float)0.0015086079394190381;
              }
            }
          }
        }
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
        if ( LIKELY( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f386016))) ) ) {
          if ( LIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4f5adb))) ) ) {
            if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd32c8))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e93eb6e))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3ea5c7fe))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f444afa))) ) ) {
          if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1ccd5a))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8faba2))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e99b6c0))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
      if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e79a066))) ) ) {
        if ( UNLIKELY( !(data[67].missing != -1) || ((*( ((int*)(data)) + 67 ))<=((int)(0x3f4635de))) ) ) {
          if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f43d275))) ) ) {
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
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e86c9b6))) ) ) {
        if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
          if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea06598))) ) ) {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              result[0] += (float)1;
              result[1] += (float)0;
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e6de84e))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8248175182481752;
                result[1] += (float)0.17518248175182483;
              }
            }
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        } else {
          if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e08886e))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.8861111111111111;
                result[1] += (float)0.11388888888888889;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
                result[0] += (float)0.481981981981982;
                result[1] += (float)0.5180180180180181;
              } else {
                result[0] += (float)0.10198812290214304;
                result[1] += (float)0.8980118770978569;
              }
            } else {
              if ( LIKELY( !(data[68].missing != -1) || ((*( ((int*)(data)) + 68 ))<=((int)(0x3f51681e))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.9259259259259259;
                result[1] += (float)0.07407407407407407;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb32cca))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e77f2fc))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e71c4e4))) ) ) {
                result[0] += (float)0.9595959595959596;
                result[1] += (float)0.04040404040404041;
              } else {
                result[0] += (float)0.17777777777777778;
                result[1] += (float)0.8222222222222222;
              }
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += (float)0.9998361346504986;
                result[1] += (float)0.00016386534950138114;
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
  if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edb5c08))) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed4e62e))) ) ) {
        if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d81d4cc))) ) ) {
              if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f62cfa2))) ) ) {
                result[0] += (float)0.4579831932773109;
                result[1] += (float)0.542016806722689;
              } else {
                result[0] += (float)0.810392482034273;
                result[1] += (float)0.18960751796572692;
              }
            } else {
              if ( LIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e8e669f))) ) ) {
                result[0] += (float)0.9996714386294298;
                result[1] += (float)0.00032856137057028865;
              } else {
                result[0] += (float)0.9182224965283136;
                result[1] += (float)0.08177750347168647;
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
      if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[55].missing != -1) || ((*( ((int*)(data)) + 55 ))<=((int)(0x367fe000))) ) ) {
          if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e09da8c))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[36].missing != -1) || ((*( ((int*)(data)) + 36 ))<=((int)(0x3f4bdfdc))) ) ) {
              if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
                result[0] += (float)0.9999874220165024;
                result[1] += (float)1.257798349768565e-05;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            } else {
              if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3edd01ac))) ) ) {
                result[0] += (float)0.9837587006960556;
                result[1] += (float)0.016241299303944315;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
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
    if ( UNLIKELY( !(data[46].missing != -1) || ((*( ((int*)(data)) + 46 ))<=((int)(0x3f43fe1a))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
        if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e8fa078))) ) ) {
          if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3cd2b32b))) ) ) {
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
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e809c0e))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e08b800))) ) ) {
                result[0] += (float)0.7470433639947438;
                result[1] += (float)0.25295663600525625;
              } else {
                result[0] += (float)0.9897156684815487;
                result[1] += (float)0.0102843315184513;
              }
            } else {
              if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9863013698630136;
                result[1] += (float)0.0136986301369863;
              } else {
                result[0] += (float)0.13936377407487557;
                result[1] += (float)0.8606362259251245;
              }
            }
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3ddb3fdd))) ) ) {
              if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
                result[0] += (float)0.999391621101622;
                result[1] += (float)0.0006083788983779097;
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
  if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3eda8b92))) ) ) {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[37].missing != -1) || ((*( ((int*)(data)) + 37 ))<=((int)(0x3f363e20))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[47].missing != -1) || ((*( ((int*)(data)) + 47 ))<=((int)(0x3f3fa35f))) ) ) {
              if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9993771992650952;
                result[1] += (float)0.0006228007349048672;
              }
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9607668301382077;
                result[1] += (float)0.03923316986179224;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f50c45b))) ) ) {
            if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3ad95a84))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3d8aa9f0))) ) ) {
                result[0] += (float)0.8975265017667845;
                result[1] += (float)0.10247349823321555;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed3518e))) ) ) {
              if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3e96d05a))) ) ) {
                result[0] += (float)0.9966555183946488;
                result[1] += (float)0.0033444816053511705;
              } else {
                result[0] += (float)0.7722222222222223;
                result[1] += (float)0.22777777777777777;
              }
            } else {
              if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9988864142538976;
                result[1] += (float)0.0011135857461024498;
              } else {
                result[0] += (float)0.16465942744323792;
                result[1] += (float)0.8353405725567621;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb3ea17))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          if ( LIKELY( !(data[38].missing != -1) || ((*( ((int*)(data)) + 38 ))<=((int)(0x3f50ec1a))) ) ) {
            if ( LIKELY( !(data[75].missing != -1) || ((*( ((int*)(data)) + 75 ))<=((int)(0x38850f88))) ) ) {
              if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88b800))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9998844838739488;
                result[1] += (float)0.00011551612605119675;
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
  }
  if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e932573))) ) ) {
          result[0] += (float)0;
          result[1] += (float)1;
        } else {
          result[0] += (float)1;
          result[1] += (float)0;
        }
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3ea06598))) ) ) {
        if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f440eb4))) ) ) {
          if ( UNLIKELY( !(data[62].missing != -1) || ((*( ((int*)(data)) + 62 ))<=((int)(0x3f7df11e))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f39a3a0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e17b3df))) ) ) {
                result[0] += (float)0.9999003256030301;
                result[1] += (float)9.967439696989833e-05;
              } else {
                result[0] += (float)0.9915134370579916;
                result[1] += (float)0.008486562942008486;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e18f0c4))) ) ) {
            if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb621fc))) ) ) {
                result[0] += (float)0.6702155975512377;
                result[1] += (float)0.32978440244876234;
              } else {
                result[0] += (float)0.9290196927072062;
                result[1] += (float)0.07098030729279377;
              }
            }
          } else {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e88b800))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.839572192513369;
                result[1] += (float)0.16042780748663102;
              }
            } else {
              if ( LIKELY( !(data[74].missing != -1) || ((*( ((int*)(data)) + 74 ))<=((int)(0x38850440))) ) ) {
                result[0] += (float)0.9996675431438329;
                result[1] += (float)0.0003324568561670747;
              } else {
                result[0] += (float)0;
                result[1] += (float)1;
              }
            }
          }
        }
      } else {
        if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3ea1fe82))) ) ) {
          result[0] += (float)1;
          result[1] += (float)0;
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
  if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e9a1985))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e75ba96))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( UNLIKELY( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb564b0))) ) ) {
          if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e7421ac))) ) ) {
            if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
              if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e0b2bea))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1d92e6))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            }
          } else {
            if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e5951))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb4a764))) ) ) {
            if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e897d8b))) ) ) {
              if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3ed6d328))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.010869565217391304;
                result[1] += (float)0.9891304347826086;
              }
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e8dbd57))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x3f3967f0))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9901334881021474;
                result[1] += (float)0.009866511897852582;
              }
            }
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
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
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae476b4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e8038d9))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3e9db3e0))) ) ) {
              if ( UNLIKELY( !(data[58].missing != -1) || ((*( ((int*)(data)) + 58 ))<=((int)(0x3e6244f4))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.998745294855709;
                result[1] += (float)0.0012547051442910915;
              }
            } else {
              if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9906522200977268;
                result[1] += (float)0.00934777990227321;
              }
            }
          }
        } else {
          if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e822724))) ) ) {
            if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e0bcfec))) ) ) {
                result[0] += (float)0.9783870967741936;
                result[1] += (float)0.021612903225806453;
              } else {
                result[0] += (float)0.4280623608017817;
                result[1] += (float)0.5719376391982183;
              }
            }
          } else {
            if ( LIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x36552000))) ) ) {
              if ( UNLIKELY( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3af03caf))) ) ) {
                result[0] += (float)0.9882753403933434;
                result[1] += (float)0.011724659606656581;
              } else {
                result[0] += (float)0.9991103891080684;
                result[1] += (float)0.000889610891931616;
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
    if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3e50e189))) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
        if ( UNLIKELY( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f630b9a))) ) ) {
          if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e05e4f4))) ) ) {
            if ( LIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e1d92e6))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          } else {
            if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e900ed8))) ) ) {
              result[0] += (float)0;
              result[1] += (float)1;
            } else {
              result[0] += (float)1;
              result[1] += (float)0;
            }
          }
        } else {
          if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee66ce4))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            result[0] += (float)1;
            result[1] += (float)0;
          }
        }
      } else {
        if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f484b44))) ) ) {
          if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e6b96ce))) ) ) {
            result[0] += (float)0;
            result[1] += (float)1;
          } else {
            if ( LIKELY( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
              if ( LIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f47d2be))) ) ) {
                result[0] += (float)0.9998150773593046;
                result[1] += (float)0.00018492264069530913;
              } else {
                result[0] += (float)0.9759751725613998;
                result[1] += (float)0.024024827438600245;
              }
            } else {
              result[0] += (float)0;
              result[1] += (float)1;
            }
          }
        } else {
          if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb6df49))) ) ) {
            if ( UNLIKELY( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36f7fc))) ) ) {
              if ( LIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ee24e50))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)1;
                result[1] += (float)0;
              }
            } else {
              if ( UNLIKELY( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3e0142))) ) ) {
                result[0] += (float)1;
                result[1] += (float)0;
              } else {
                result[0] += (float)0.048920229175848394;
                result[1] += (float)0.9510797708241516;
              }
            }
          } else {
            if ( UNLIKELY( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ed8efbc))) ) ) {
              if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb79c96))) ) ) {
                result[0] += (float)0.7125562089242476;
                result[1] += (float)0.28744379107575235;
              } else {
                result[0] += (float)0.9222222222222223;
                result[1] += (float)0.07777777777777778;
              }
            } else {
              if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8c31d2))) ) ) {
                result[0] += (float)0;
                result[1] += (float)1;
              } else {
                result[0] += (float)0.9992840266342092;
                result[1] += (float)0.0007159733657907926;
              }
            }
          }
        }
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
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
    

    FILE* file = fopen("./codegen_small/esa_3_months_global/split_1/test_data.csv", "r");
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
