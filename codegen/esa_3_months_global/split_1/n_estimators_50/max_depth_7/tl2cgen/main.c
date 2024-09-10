
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
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7851407229900360107) ) ) {
                result[0] += 0.8263598326359832;
                result[1] += 0.17364016736401675;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.999231038098567;
                result[1] += 0.0007689619014330653;
              } else {
                result[0] += 0.9962294105973407;
                result[1] += 0.003770589402659258;
              }
            }
          }
        } else {
          if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3413494378328323364) ) ) {
                result[0] += 0.43256997455470736;
                result[1] += 0.5674300254452926;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0.9285714285714286;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
                result[0] += 0.890818858560794;
                result[1] += 0.10918114143920596;
              } else {
                result[0] += 0.9551569506726457;
                result[1] += 0.04484304932735426;
              }
            }
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3335509002208709717) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9076163610719323;
                result[1] += 0.0923836389280677;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9821587867975022;
                result[1] += 0.01784121320249777;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.13797808438539505) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9609996213555472;
                result[1] += 0.03900037864445286;
              } else {
                result[0] += 0.7886178861788617;
                result[1] += 0.21138211382113822;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3600607514381408691) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378344297409058) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
                result[0] += 0.9873188405797102;
                result[1] += 0.012681159420289856;
              } else {
                result[0] += 0.7096774193548387;
                result[1] += 0.2903225806451613;
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.410533517599105835) ) ) {
                result[0] += 0.41025641025641024;
                result[1] += 0.5897435897435898;
              } else {
                result[0] += 0.26706231454005935;
                result[1] += 0.7329376854599406;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.282870367169380188) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7235853672027587891) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9997166336072542;
                result[1] += 0.00028336639274582036;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3268404752016067505) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001560852513648569584) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4135483652353286743) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2949374020099639893) ) ) {
                result[0] += 0.9996636394214599;
                result[1] += 0.0003363605785401951;
              } else {
                result[0] += 0.9873096446700508;
                result[1] += 0.012690355329949238;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546375900506973267) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2889055609703063965) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4275181293487548828) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1531271114945411682) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7305175364017486572) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.291439443826675415) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
                result[0] += 0.9902485058194401;
                result[1] += 0.009751494180559924;
              } else {
                result[0] += 0.8809523809523809;
                result[1] += 0.11904761904761904;
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
                result[0] += 0.5909090909090909;
                result[1] += 0.4090909090909091;
              } else {
                result[0] += 0.8878853939582685;
                result[1] += 0.11211460604173155;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.6441515650741351;
                result[1] += 0.35584843492586493;
              } else {
                result[0] += 0.20354729729729729;
                result[1] += 0.7964527027027027;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001789847679901868105) ) ) {
                result[0] += 0.9998159412414325;
                result[1] += 0.00018405875856749698;
              } else {
                result[0] += 0.9975574010747436;
                result[1] += 0.002442598925256473;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2024775072932243347) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001653216080740094185) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9991370270034082;
                result[1] += 0.0008629729965918028;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1493559554219245911) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.972853470437018;
                result[1] += 0.027146529562982004;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.9974823766364552;
                result[1] += 0.0025176233635448137;
              } else {
                result[0] += 0.11864847303443794;
                result[1] += 0.8813515269655621;
              }
            }
          } else {
            if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04964188672602176666) ) ) {
                result[0] += 0.9981523843040647;
                result[1] += 0.0018476156959352456;
              } else {
                result[0] += 0.7295081967213115;
                result[1] += 0.27049180327868855;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001773399999365210533) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4334493279457092285) ) ) {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9769923985004425049) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.14545454545454545;
                result[1] += 0.8545454545454545;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3728417009115219116) ) ) {
                result[0] += 0.9977966635190432;
                result[1] += 0.0022033364809568774;
              } else {
                result[0] += 0.9773890784982935;
                result[1] += 0.022610921501706484;
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0.03488372093023256;
                result[1] += 0.9651162790697675;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001789847679901868105) ) ) {
                result[0] += 0.941066417212348;
                result[1] += 0.05893358278765201;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.02857142857142857;
                result[1] += 0.9714285714285714;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3592728078365325928) ) ) {
                result[0] += 0.926530612244898;
                result[1] += 0.07346938775510205;
              } else {
                result[0] += 0.7032085561497327;
                result[1] += 0.2967914438502674;
              }
            }
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9572649572649573;
                result[1] += 0.042735042735042736;
              } else {
                result[0] += 0.032512772875058056;
                result[1] += 0.967487227124942;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.008447043534762833;
                result[1] += 0.9915529564652371;
              }
            }
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1381837725639343262) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 0.9981801984268995;
                result[1] += 0.0018198015731004393;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3163948804140090942) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1410567238926887512) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.08928571428571429;
                result[1] += 0.9107142857142857;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.8957597173144877;
                result[1] += 0.10424028268551237;
              } else {
                result[0] += 0.7385100074128984;
                result[1] += 0.26148999258710154;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9995764626157669;
                result[1] += 0.000423537384233115;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 0.9974363498604004;
                result[1] += 0.0025636501395995726;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9992934859403703;
                result[1] += 0.0007065140596297867;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                result[0] += 0.9944237918215614;
                result[1] += 0.0055762081784386614;
              } else {
                result[0] += 0.9235654343388523;
                result[1] += 0.07643456566114765;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3179547637701034546) ) ) {
                result[0] += 0.8417030567685589;
                result[1] += 0.15829694323144106;
              } else {
                result[0] += 0.37270341207349084;
                result[1] += 0.6272965879265092;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                result[0] += 0.21843532145623548;
                result[1] += 0.7815646785437645;
              } else {
                result[0] += 0.08969759097898514;
                result[1] += 0.9103024090210149;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.994263862332696;
                result[1] += 0.0057361376673040155;
              }
            } else {
              if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 0.9987173229508383;
                result[1] += 0.0012826770491617195;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7128912806510925293) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3993570804595947266) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7128891646862030029) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1546342372894287109) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3506746441125869751) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3521160334348678589) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7406133711338043213) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4434407800436019897) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1395496055483818054) ) ) {
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                result[0] += 0.9799876511822178;
                result[1] += 0.020012348817782296;
              } else {
                result[0] += 0.899314326957777;
                result[1] += 0.10068567304222302;
              }
            } else {
              if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.177672624588012695e-06) ) ) {
                result[0] += 0.9985810803435968;
                result[1] += 0.0014189196564031478;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7191888689994812012) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3517352938652038574) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.999874191681554;
                result[1] += 0.00012580831844601566;
              }
            } else {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8173351287841796875) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9804751057598438;
                result[1] += 0.019524894240156198;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2655183523893356323) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2466625571250915527) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.7153768392676626;
                result[1] += 0.2846231607323374;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                result[0] += 0.9863646868500116;
                result[1] += 0.013635313149988445;
              } else {
                result[0] += 0.27876106194690264;
                result[1] += 0.7212389380530974;
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                result[0] += 0.25783132530120484;
                result[1] += 0.7421686746987952;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                result[0] += 0.9967585089141004;
                result[1] += 0.0032414910858995136;
              } else {
                result[0] += 0.952247191011236;
                result[1] += 0.047752808988764044;
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8231741487979888916) ) ) {
                result[0] += 0.9998701804491756;
                result[1] += 0.00012981955082435416;
              } else {
                result[0] += 0.6875;
                result[1] += 0.3125;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2843808382749557495) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)1.92727893590927124e-05) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
                result[0] += 0.7876823338735819;
                result[1] += 0.21231766612641814;
              } else {
                result[0] += 0.9971910112359551;
                result[1] += 0.0028089887640449437;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.346341937780380249) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001664598763454705477) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7400808334350585938) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1042889803647994995) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9391061452513967;
                result[1] += 0.06089385474860335;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                result[0] += 0.9932523616734144;
                result[1] += 0.006747638326585695;
              } else {
                result[0] += 0.5887541345093715;
                result[1] += 0.41124586549062847;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4517073631286621094) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9937616712154481;
                result[1] += 0.006238328784551928;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3297289460897445679) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001560852513648569584) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)3.175809979438781738e-06) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04041793011128902435) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
                result[0] += 0.9838709677419355;
                result[1] += 0.016129032258064516;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7317222356796264648) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8887280821800231934) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
                result[0] += 0.8695652173913043;
                result[1] += 0.13043478260869565;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.7420758234928527;
                result[1] += 0.2579241765071473;
              }
            }
          } else {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3140443116426467896) ) ) {
                result[0] += 0.9722222222222222;
                result[1] += 0.027777777777777776;
              } else {
                result[0] += 0.4;
                result[1] += 0.6;
              }
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1415413469076156616) ) ) {
                result[0] += 0.9979406919275123;
                result[1] += 0.002059308072487644;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1335144117474555969) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1391299143433570862) ) ) {
                result[0] += 0.9736842105263158;
                result[1] += 0.02631578947368421;
              } else {
                result[0] += 0.5833333333333334;
                result[1] += 0.4166666666666667;
              }
            } else {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.994306415319442749) ) ) {
                result[0] += 0.9914984059511158;
                result[1] += 0.008501594048884165;
              } else {
                result[0] += 0.7142857142857143;
                result[1] += 0.2857142857142857;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.9142857142857143;
                result[1] += 0.08571428571428572;
              } else {
                result[0] += 0.3471502590673575;
                result[1] += 0.6528497409326425;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2196946591138839722) ) ) {
                result[0] += 0.10940919037199125;
                result[1] += 0.8905908096280087;
              } else {
                result[0] += 0.029850746268656716;
                result[1] += 0.9701492537313433;
              }
            }
          }
        }
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2507216855883598328) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1391299143433570862) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3535602688789367676) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9444444444444444;
                result[1] += 0.05555555555555555;
              }
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7603332698345184326) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2647681385278701782) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 0.6887755102040817;
                result[1] += 0.3112244897959184;
              } else {
                result[0] += 0.03333333333333333;
                result[1] += 0.9666666666666667;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8832333683967590332) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1017081402242183685) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9994975545035603;
                result[1] += 0.0005024454964397026;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2370446100831031799) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3741033822298049927) ) ) {
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7762517929077148438) ) ) {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2401684895157814026) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1576551869511604309) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1359096989035606384) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2851343899965286255) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.815496593713760376) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
            if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2259324193000793457) ) ) {
                result[0] += 0.970917225950783;
                result[1] += 0.029082774049217;
              } else {
                result[0] += 0.4785276073619632;
                result[1] += 0.5214723926380368;
              }
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                result[0] += 0.8346007604562737;
                result[1] += 0.16539923954372623;
              } else {
                result[0] += 0.9945305378304466;
                result[1] += 0.0054694621695533276;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                result[0] += 0.8256716417910448;
                result[1] += 0.17432835820895523;
              } else {
                result[0] += 0.6545287637698899;
                result[1] += 0.34547123623011017;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2617471963167190552) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
              if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
                result[0] += 0.9565217391304348;
                result[1] += 0.043478260869565216;
              } else {
                result[0] += 0.9993597401481967;
                result[1] += 0.0006402598518032684;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2341379672288894653) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7666589617729187012) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7165536880493164062) ) ) {
          if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8878130018711090088) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.018867924528301886;
                result[1] += 0.9811320754716981;
              }
            }
          } else {
            if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3741025030612945557) ) ) {
                result[0] += 0.13793103448275862;
                result[1] += 0.8620689655172413;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7834516763687133789) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7183859944343566895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3226326256990432739) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.4;
                result[1] += 0.6;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                result[0] += 0.9995521218228641;
                result[1] += 0.00044787817713581906;
              } else {
                result[0] += 0.9174542529660165;
                result[1] += 0.08254574703398351;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
            if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7760818898677825928) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                result[0] += 0.5517241379310345;
                result[1] += 0.4482758620689655;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7612525224685668945) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001856900984421372414) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9295987887963664;
                result[1] += 0.07040121120363362;
              } else {
                result[0] += 0.19701492537313434;
                result[1] += 0.8029850746268656;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1571642681956291199) ) ) {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.353482604026794434e-06) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7087681293487548828) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9995111159999511;
                result[1] += 0.0004888840000488884;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3492304086685180664) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2843774855136871338) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7070246040821075439) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3195137530565261841) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9993238674780257;
                result[1] += 0.000676132521974307;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.291439443826675415) ) ) {
                result[0] += 0.9999308914996544;
                result[1] += 6.910850034554251e-05;
              } else {
                result[0] += 0.9915373765867419;
                result[1] += 0.00846262341325811;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04474986717104911804) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
                result[0] += 0.8752280189711784;
                result[1] += 0.1247719810288216;
              } else {
                result[0] += 0.9867256637168141;
                result[1] += 0.01327433628318584;
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.8737758433079434;
                result[1] += 0.12622415669205658;
              } else {
                result[0] += 0.43562753036437246;
                result[1] += 0.5643724696356275;
              }
            }
          }
        }
      } else {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7464606761932373047) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
            if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7422067224979400635) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2858879715204238892) ) ) {
                result[0] += 0.9740932642487047;
                result[1] += 0.025906735751295335;
              } else {
                result[0] += 0.7608695652173914;
                result[1] += 0.2391304347826087;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2356449663639068604) ) ) {
                result[0] += 0.9442190669371197;
                result[1] += 0.055780933062880324;
              } else {
                result[0] += 0.9785905441570026;
                result[1] += 0.021409455842997322;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2813598960638046265) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                result[0] += 0.567929582854956;
                result[1] += 0.432070417145044;
              } else {
                result[0] += 0.9418803418803419;
                result[1] += 0.05811965811965812;
              }
            }
          }
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8658536585365854;
                result[1] += 0.13414634146341464;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.0033578174186778592;
                result[1] += 0.9966421825813221;
              }
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.383395761251449585) ) ) {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8239593505859375) ) ) {
                result[0] += 0.9835013003901171;
                result[1] += 0.016498699609882966;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
                result[0] += 0.05128205128205128;
                result[1] += 0.9487179487179487;
              } else {
                result[0] += 0.8;
                result[1] += 0.2;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8054080307483673096) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8035443127155303955) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
            if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9665153026580810547) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4075186997652053833) ) ) {
                result[0] += 0.9890710382513661;
                result[1] += 0.01092896174863388;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3319918960332870483) ) ) {
                result[0] += 0.44638069705093836;
                result[1] += 0.5536193029490617;
              } else {
                result[0] += 0.9777227722772277;
                result[1] += 0.022277227722772276;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2308210209012031555) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.980720871751886;
                result[1] += 0.019279128248113998;
              }
            }
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8042944073677062988) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2436483129858970642) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.8333333333333334;
                result[1] += 0.16666666666666666;
              }
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2265996038913726807) ) ) {
                result[0] += 0.6470588235294118;
                result[1] += 0.35294117647058826;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8837209302325582;
                result[1] += 0.11627906976744186;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.0742218675179569;
                result[1] += 0.9257781324820431;
              }
            }
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
                result[0] += 0.9714285714285714;
                result[1] += 0.02857142857142857;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0.1511627906976744;
                result[1] += 0.8488372093023255;
              } else {
                result[0] += 0.9166666666666666;
                result[1] += 0.08333333333333333;
              }
            }
          } else {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7875304520130157471) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2929984480142593384) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.66775473952293396) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.99958455159007;
                result[1] += 0.00041544840993000087;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7156386375427246094) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3190125897526741028) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3460290580987930298) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2898804396390914917) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3725434988737106323) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.7636363636363637;
                result[1] += 0.23636363636363636;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0.008733624454148471;
                result[1] += 0.9912663755458515;
              } else {
                result[0] += 0.9544246107102164;
                result[1] += 0.04557538928978352;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.13973799126637554;
                result[1] += 0.8602620087336245;
              }
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                result[0] += 0.6749435665914221;
                result[1] += 0.32505643340857787;
              } else {
                result[0] += 0.9348484848484848;
                result[1] += 0.06515151515151515;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3163948804140090942) ) ) {
                result[0] += 0.35106382978723405;
                result[1] += 0.648936170212766;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7270844876766204834) ) ) {
                result[0] += 0.003476749239461104;
                result[1] += 0.9965232507605389;
              } else {
                result[0] += 0.07407407407407407;
                result[1] += 0.9259259259259259;
              }
            }
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2889022082090377808) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.08010595850646495819) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1372889205813407898) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.04954954954954955;
                result[1] += 0.9504504504504504;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                result[0] += 0.9992211659603711;
                result[1] += 0.0007788340396289085;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
            if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.34482712484896183e-05) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
                result[0] += 0.997319932998325;
                result[1] += 0.002680067001675042;
              } else {
                result[0] += 0.9998770169224714;
                result[1] += 0.00012298307752853208;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
      if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3429093062877655029) ) ) {
          if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7165536880493164062) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1346227526664733887) ) ) {
                result[0] += 0.06626506024096386;
                result[1] += 0.9337349397590361;
              } else {
                result[0] += 0.2222222222222222;
                result[1] += 0.7777777777777778;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2542048841714859009) ) ) {
                result[0] += 0.9862542955326461;
                result[1] += 0.013745704467353952;
              } else {
                result[0] += 0.4875;
                result[1] += 0.5125;
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2345921769738197327) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2278067693114280701) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3226326256990432739) ) ) {
                result[0] += 0.9726027397260274;
                result[1] += 0.0273972602739726;
              } else {
                result[0] += 0.9978500403117442;
                result[1] += 0.002149959688255845;
              }
            } else {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
                result[0] += 0.2682926829268293;
                result[1] += 0.7317073170731707;
              } else {
                result[0] += 0.9826619071902091;
                result[1] += 0.017338092809790925;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
          if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7120918035507202148) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.6906501948833465576) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.9942085394733757;
                result[1] += 0.005791460526624306;
              } else {
                result[0] += 0.17362768496420047;
                result[1] += 0.8263723150357996;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1949382945895195007) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0.9090909090909091;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
                result[0] += 0.9834254143646409;
                result[1] += 0.016574585635359115;
              } else {
                result[0] += 0.7297297297297297;
                result[1] += 0.2702702702702703;
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001655741129070520401) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9848484848484849;
                result[1] += 0.015151515151515152;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
                result[0] += 0.005412591396828412;
                result[1] += 0.9945874086031716;
              } else {
                result[0] += 0.9917971662938105;
                result[1] += 0.00820283370618941;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7630910873413085938) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3304320275783538818) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2398738041520118713) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.07142857142857142;
                result[1] += 0.9285714285714286;
              }
            } else {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7695259153842926025) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            }
          }
        } else {
          if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7084342539310455322) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2384096980094909668) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1427365243434906006) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7738927602767944336) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1410631909966468811) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2376131191849708557) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2891004979610443115) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.18181818181818182;
                result[1] += 0.8181818181818182;
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2679240033030509949) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3524883687496185303) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2723104655742645264) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2987119108438491821) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
                result[0] += 0.9907996396298016;
                result[1] += 0.009200360370198477;
              } else {
                result[0] += 0.9513005948909367;
                result[1] += 0.048699405109063336;
              }
            }
          }
        } else {
          if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7687848806381225586) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3012284934520721436) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001568447623867541552) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3253962397575378418) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.177672624588012695e-06) ) ) {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.723869591951370239e-05) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9461938245184959;
                result[1] += 0.053806175481504126;
              }
            } else {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9847393929958343506) ) ) {
                result[0] += 0.9996301319196154;
                result[1] += 0.0003698680803846628;
              } else {
                result[0] += 0.9981836070536593;
                result[1] += 0.001816392946340725;
              }
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9266204647370566;
                result[1] += 0.07337953526294333;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
                result[0] += 0.5966587112171837;
                result[1] += 0.4033412887828162;
              } else {
                result[0] += 0.9977528089887641;
                result[1] += 0.0022471910112359553;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9928977272727273;
                result[1] += 0.007102272727272727;
              } else {
                result[0] += 0.36418359668924005;
                result[1] += 0.63581640331076;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1380424797534942627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3578929752111434937) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7686076164245605469) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      }
    } else {
      if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7768823504447937012) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1545875221490859985) ) ) {
            if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
                result[0] += 0.992153443766347;
                result[1] += 0.007846556233653008;
              } else {
                result[0] += 0.9999505256648114;
                result[1] += 4.9474335188620906e-05;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1471809595823287964) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3203428387641906738) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546342372894287109) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1546342372894287109) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2926767170429229736) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3347852081060409546) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1436370685696601868) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04574106819927692413) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2655183523893356323) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1288257911801338196) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2851310521364212036) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9998801404753629;
                result[1] += 0.0001198595246371253;
              }
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                result[0] += 0.46469465648854963;
                result[1] += 0.5353053435114504;
              } else {
                result[0] += 0.8105263157894737;
                result[1] += 0.18947368421052632;
              }
            }
          } else {
            if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6711328625679016113) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9914183404675667;
                result[1] += 0.008581659532433322;
              }
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7966897189617156982) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.294940754771232605) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3641804903745651245) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0.004885993485342019;
                result[1] += 0.995114006514658;
              } else {
                result[0] += 0.76;
                result[1] += 0.24;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8090462386608123779) ) ) {
                result[0] += 0.9993077668558771;
                result[1] += 0.0006922331441229406;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6776489615440368652) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9958417069312011;
                result[1] += 0.004158293068798905;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9337143003940582275) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9091129601001739502) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
          if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4320280700922012329) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1508630812168121338) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06224480783566832542) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.6774668097496032715) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9948543305825709;
                result[1] += 0.005145669417429087;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0.25307125307125306;
                result[1] += 0.7469287469287469;
              } else {
                result[0] += 0.9474007997539219;
                result[1] += 0.05259920024607813;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2511906176805496216) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1387960389256477356) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9523809523809523;
                result[1] += 0.047619047619047616;
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2924157828092575073) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.694077545803153;
                result[1] += 0.30592245419684705;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3864114433526992798) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
                result[0] += 0.9599383667180277;
                result[1] += 0.040061633281972264;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6822138428688049316) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7877640128135681152) ) ) {
              if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7193010449409484863) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9867549668874173;
                result[1] += 0.013245033112582781;
              }
            }
          }
        }
      } else {
        if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.770910799503326416) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8173351287841796875) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2262962982058525085) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9971590909090909;
                result[1] += 0.002840909090909091;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.270799979567527771) ) ) {
                result[0] += 0.3627450980392157;
                result[1] += 0.6372549019607843;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1561447158455848694) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                result[0] += 0.012084592145015106;
                result[1] += 0.9879154078549849;
              } else {
                result[0] += 0.9986638671502195;
                result[1] += 0.0013361328497804924;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3550045043230056763) ) ) {
                result[0] += 0.002105263157894737;
                result[1] += 0.9978947368421053;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3681567758321762085) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2399695739150047302) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3772213906049728394) ) ) {
              if ( ( !(data[49].missing != -1) || (data[49].fvalue <= (float)0.6500808894634246826) ) ) {
                result[0] += 0.9626865671641791;
                result[1] += 0.03731343283582089;
              } else {
                result[0] += 0.9968520461699895;
                result[1] += 0.0031479538300104933;
              }
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2274922952055931091) ) ) {
                result[0] += 0.9814951887490747;
                result[1] += 0.018504811250925242;
              } else {
                result[0] += 0.7943770672546858;
                result[1] += 0.20562293274531424;
              }
            }
          } else {
            if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4523910582065582275) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
                result[0] += 0.84;
                result[1] += 0.16;
              } else {
                result[0] += 0.9836065573770492;
                result[1] += 0.01639344262295082;
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
              if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.9091129601001739502) ) ) {
                result[0] += 0.2222222222222222;
                result[1] += 0.7777777777777778;
              } else {
                result[0] += 0.8181818181818182;
                result[1] += 0.18181818181818182;
              }
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2898804396390914917) ) ) {
                result[0] += 0.9607843137254902;
                result[1] += 0.0392156862745098;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                result[0] += 0.3780392156862745;
                result[1] += 0.6219607843137255;
              } else {
                result[0] += 0.045288326300984526;
                result[1] += 0.9547116736990154;
              }
            }
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2979550063610076904) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1098809279501438141) ) ) {
            if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9983932784174184;
                result[1] += 0.0016067215825815704;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1486023887991905212) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1508630812168121338) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3273122608661651611) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.24515543133020401) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8356070941336972;
                result[1] += 0.16439290586630287;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                result[0] += 0.8802395209580839;
                result[1] += 0.11976047904191617;
              } else {
                result[0] += 0.3210548346588531;
                result[1] += 0.6789451653411469;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2647681385278701782) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
                result[0] += 0.6350710900473934;
                result[1] += 0.36492890995260663;
              } else {
                result[0] += 0.032679738562091505;
                result[1] += 0.9673202614379085;
              }
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
                result[0] += 0.9993153637447068;
                result[1] += 0.0006846362552932525;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2625041007995605469) ) ) {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                result[0] += 0.4084507042253521;
                result[1] += 0.5915492957746479;
              } else {
                result[0] += 0.8138297872340425;
                result[1] += 0.18617021276595744;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3296512067317962646) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9840662842574889;
                result[1] += 0.015933715742511154;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3521160334348678589) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05921705067157745361) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                result[0] += 0.43644859813084114;
                result[1] += 0.5635514018691589;
              } else {
                result[0] += 0.7943874797625472;
                result[1] += 0.20561252023745277;
              }
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3155513107776641846) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9883371871323678;
                result[1] += 0.011662812867632145;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
          if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)6.351619958877563477e-06) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                result[0] += 0.041666666666666664;
                result[1] += 0.9583333333333334;
              } else {
                result[0] += 0.9999767249706153;
                result[1] += 2.3275029384724597e-05;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7411437630653381348) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3877691775560379028) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3257523924112319946) ) ) {
                result[0] += 0.9926372963186482;
                result[1] += 0.00736270368135184;
              } else {
                result[0] += 0.9995573262505534;
                result[1] += 0.0004426737494466578;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.8552521980564554;
                result[1] += 0.14474780194354467;
              }
            }
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3054766058921813965) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
            if ( ( !(data[64].missing != -1) || (data[64].fvalue <= (float)0.709514915943145752) ) ) {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2866415232419967651) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.286760672926902771) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9929078014184397;
                result[1] += 0.0070921985815602835;
              }
            }
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1571642681956291199) ) ) {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8251364231109619141) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
                result[0] += 0.9976226496650097;
                result[1] += 0.0023773503349902745;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1516199931502342224) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3179538697004318237) ) ) {
        if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3787812590599060059) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9180327868852459;
                result[1] += 0.08196721311475409;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2321719378232955933) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.004830917874396135;
                result[1] += 0.9951690821256038;
              }
            } else {
              if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7174687683582305908) ) ) {
                result[0] += 0.1835564053537285;
                result[1] += 0.8164435946462715;
              } else {
                result[0] += 0.7432;
                result[1] += 0.2568;
              }
            }
          }
        } else {
          if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.706625819206237793) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9926959943074798;
                result[1] += 0.007304005692520196;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8210126757621765137) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)3.812834620475769043e-06) ) ) {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2240921184420585632) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3107654750347137451) ) ) {
                result[0] += 0.8567193675889329;
                result[1] += 0.1432806324110672;
              } else {
                result[0] += 0.9995011698754113;
                result[1] += 0.0004988301245887621;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1436370685696601868) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3412856906652450562) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3101553469896316528) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2617505490779876709) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8246906399726867676) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1397733837366104126) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3593372106552124023) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8421345353126525879) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7695273160934448242) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[73].missing != -1) || (data[73].fvalue <= (float)0.9687927067279815674) ) ) {
          if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9838270246982574463) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2617471963167190552) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                result[0] += 0.9928027681660899;
                result[1] += 0.007197231833910035;
              } else {
                result[0] += 0.9200379867046534;
                result[1] += 0.07996201329534663;
              }
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.375662386417388916) ) ) {
                result[0] += 0.8235955056179776;
                result[1] += 0.17640449438202246;
              } else {
                result[0] += 0.39448173005219983;
                result[1] += 0.6055182699478001;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                result[0] += 0.34576612903225806;
                result[1] += 0.6542338709677419;
              } else {
                result[0] += 0.9832935560859188;
                result[1] += 0.016706443914081145;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                result[0] += 0.5862068965517241;
                result[1] += 0.41379310344827586;
              } else {
                result[0] += 0.13274336283185842;
                result[1] += 0.8672566371681416;
              }
            }
          } else {
            if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3039176017045974731) ) ) {
                result[0] += 0.9897435897435898;
                result[1] += 0.010256410256410256;
              } else {
                result[0] += 0.8709677419354839;
                result[1] += 0.12903225806451613;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.05555555555555555;
                result[1] += 0.9444444444444444;
              }
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8228516578674316406) ) ) {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9995827610785626;
                result[1] += 0.0004172389214373881;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2858879715204238892) ) ) {
            if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7741240859031677246) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.013293943870014771;
                result[1] += 0.9867060561299852;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7667690515518188477) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3441713005304336548) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.153880678117275238) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4221533834934234619) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2391202375292778015) ) ) {
                result[0] += 0.9940500615510874;
                result[1] += 0.005949938448912597;
              } else {
                result[0] += 0.7798072044647387;
                result[1] += 0.22019279553526128;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3803411275148391724) ) ) {
                result[0] += 0.9979229607250756;
                result[1] += 0.0020770392749244714;
              } else {
                result[0] += 0.9310344827586207;
                result[1] += 0.06896551724137931;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
                result[0] += 0.5384615384615384;
                result[1] += 0.46153846153846156;
              } else {
                result[0] += 0.9750240153698367;
                result[1] += 0.024975984630163303;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7432717978954315186) ) ) {
                result[0] += 0.00015895724050230488;
                result[1] += 0.9998410427594977;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.9452554744525548;
                result[1] += 0.05474452554744526;
              } else {
                result[0] += 0.19207317073170732;
                result[1] += 0.8079268292682927;
              }
            }
          }
        }
      } else {
        if ( ( !(data[40].missing != -1) || (data[40].fvalue <= (float)0.7112472653388977051) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7842374145984649658) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3470626324415206909) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9996641101718636;
                result[1] += 0.0003358898281363713;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.351395338773727417) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001610195613466203213) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1591623052954673767) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1584540680050849915) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2883205562829971313) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.176741302013397217e-06) ) ) {
                result[0] += 0.9999345635388038;
                result[1] += 6.543646119617851e-05;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3292691260576248169) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1629334688186645508) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3297289460897445679) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3721477985382080078) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
        if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2437759265303611755) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3877691775560379028) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3062565475702285767) ) ) {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7183859944343566895) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7225069999694824219) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3101553469896316528) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.003076923076923077;
                result[1] += 0.9969230769230769;
              }
            } else {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001830333145335316658) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.09090909090909091;
                result[1] += 0.9090909090909091;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
                result[0] += 0.989060489060489;
                result[1] += 0.010939510939510939;
              } else {
                result[0] += 0.8657668711656442;
                result[1] += 0.13423312883435584;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2602400630712509155) ) ) {
                result[0] += 0.2249216300940439;
                result[1] += 0.7750783699059561;
              } else {
                result[0] += 0.8302107728337237;
                result[1] += 0.16978922716627634;
              }
            }
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
            if ( ( !(data[50].missing != -1) || (data[50].fvalue <= (float)0.5) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4261494725942611694) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0.5158730158730159;
                result[1] += 0.48412698412698413;
              } else {
                result[0] += 0.999248417721519;
                result[1] += 0.0007515822784810127;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2293138951063156128) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3850509226322174072) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9981080858764498;
                result[1] += 0.001891914123550218;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2321719378232955933) ) ) {
              if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7678692936897277832) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9793788187372708;
                result[1] += 0.020621181262729125;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
                result[0] += 0.9546558704453442;
                result[1] += 0.045344129554655874;
              } else {
                result[0] += 0.7327586206896551;
                result[1] += 0.2672413793103448;
              }
            }
          } else {
            if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7677219212055206299) ) ) {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.7111147940158843994) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9674721189591078;
                result[1] += 0.032527881040892194;
              }
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
                result[0] += 0.07677350140807296;
                result[1] += 0.9232264985919271;
              } else {
                result[0] += 0.9630516592541909;
                result[1] += 0.0369483407458091;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.1381894275546073914) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2670288234949111938) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9994196394026155;
                result[1] += 0.0005803605973845082;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1516199931502342224) ) ) {
          if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001787317683920264244) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
                result[0] += 0.5278969957081545;
                result[1] += 0.4721030042918455;
              } else {
                result[0] += 0.3254901960784314;
                result[1] += 0.6745098039215687;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1501128673553466797) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.01119664100769769;
                result[1] += 0.9888033589923023;
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3241925090551376343) ) ) {
                result[0] += 0.875;
                result[1] += 0.125;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2352908104658126831) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.0038910505836575876;
                result[1] += 0.9961089494163424;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                result[0] += 0.8947368421052632;
                result[1] += 0.10526315789473684;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8173351287841796875) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3725434988737106323) ) ) {
                result[0] += 0.9418238993710691;
                result[1] += 0.05817610062893082;
              } else {
                result[0] += 0.7947939262472885;
                result[1] += 0.2052060737527115;
              }
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.4090265333652496338) ) ) {
                result[0] += 0.8143047534429143;
                result[1] += 0.18569524655708575;
              } else {
                result[0] += 0.4112116991643454;
                result[1] += 0.5887883008356546;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8652849740932642;
                result[1] += 0.13471502590673576;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 0.7792746113989637;
                result[1] += 0.22072538860103627;
              } else {
                result[0] += 0.07175773535220539;
                result[1] += 0.9282422646477946;
              }
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2496801465749740601) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0.6538461538461539;
                result[1] += 0.34615384615384615;
              } else {
                result[0] += 0.9853111712408195;
                result[1] += 0.014688828759180518;
              }
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                result[0] += 0.9069212410501193;
                result[1] += 0.09307875894988067;
              } else {
                result[0] += 0.10358565737051793;
                result[1] += 0.896414342629482;
              }
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2692928612232208252) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                result[0] += 0.9666666666666667;
                result[1] += 0.03333333333333333;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3499511033296585083) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9997283238379852;
                result[1] += 0.0002716761620148783;
              }
            }
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3819010108709335327) ) ) {
        if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.6808442473411560059) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9923439060345237;
                result[1] += 0.007656093965476247;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3532431274652481079) ) ) {
                result[0] += 0.9978136102760317;
                result[1] += 0.002186389723968297;
              } else {
                result[0] += 0.9580033597312215;
                result[1] += 0.041996640268778494;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.16757161580228422;
                result[1] += 0.8324283841977158;
              }
            }
          }
        } else {
          if ( ( !(data[44].missing != -1) || (data[44].fvalue <= (float)3.175809979438781738e-06) ) ) {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
                result[0] += 0.9984014456491521;
                result[1] += 0.001598554350847929;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1380424797534942627) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3195137530565261841) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2641230523586273193) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
              if ( ( !(data[70].missing != -1) || (data[70].fvalue <= (float)0.9441913962364196777) ) ) {
                result[0] += 0.998062015503876;
                result[1] += 0.001937984496124031;
              } else {
                result[0] += 0.9771428571428571;
                result[1] += 0.022857142857142857;
              }
            } else {
              if ( ( !(data[48].missing != -1) || (data[48].fvalue <= (float)0.9291158616542816162) ) ) {
                result[0] += 0.9047619047619048;
                result[1] += 0.09523809523809523;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
                result[0] += 0.8925619834710744;
                result[1] += 0.10743801652892562;
              } else {
                result[0] += 0.6785225718194254;
                result[1] += 0.32147742818057456;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.9680511182108626;
                result[1] += 0.03194888178913738;
              } else {
                result[0] += 0.22615803814713897;
                result[1] += 0.773841961852861;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3819010108709335327) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2341379672288894653) ) ) {
                result[0] += 0.875968992248062;
                result[1] += 0.12403100775193798;
              } else {
                result[0] += 0.9669368600682594;
                result[1] += 0.033063139931740614;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.9857142857142858;
                result[1] += 0.014285714285714285;
              } else {
                result[0] += 0.4716981132075472;
                result[1] += 0.5283018867924528;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7768823504447937012) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3521160334348678589) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9994555264069692;
                result[1] += 0.000544473593030738;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
            if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.783373028039932251) ) ) {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8249094188213348389) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9;
                result[1] += 0.1;
              }
            } else {
              if ( ( !(data[71].missing != -1) || (data[71].fvalue <= (float)0.9861044585704803467) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.014388489208633094;
                result[1] += 0.9856115107913669;
              }
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1410567238926887512) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.9148936170212766;
                result[1] += 0.0851063829787234;
              } else {
                result[0] += 0.011756238003838772;
                result[1] += 0.9882437619961613;
              }
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.4;
                result[1] += 0.6;
              } else {
                result[0] += 0.0007415341517673231;
                result[1] += 0.9992584658482326;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
              if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7889041304588317871) ) ) {
                result[0] += 0.3912087912087912;
                result[1] += 0.6087912087912087;
              } else {
                result[0] += 0.8584474885844748;
                result[1] += 0.1415525114155251;
              }
            } else {
              if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001772137475199997425) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7750433683395385742) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2919231504201889038) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2368498146533966064) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9992816091954023;
                result[1] += 0.0007183908045977011;
              }
            } else {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7475236356258392334) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9457831325301205;
                result[1] += 0.05421686746987952;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001755689794663339853) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3557280451059341431) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1320072859525680542) ) ) {
                result[0] += 0.9988031119090365;
                result[1] += 0.0011968880909634949;
              } else {
                result[0] += 0.8652482269503546;
                result[1] += 0.1347517730496454;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7713658511638641357) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001825273095164448023) ) ) {
                result[0] += 0.9993171148100726;
                result[1] += 0.0006828851899274435;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2496801465749740601) ) ) {
                result[0] += 0.9685863874345549;
                result[1] += 0.031413612565445025;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8966687884574581;
                result[1] += 0.1033312115425419;
              }
            }
          } else {
            if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.177672624588012695e-06) ) ) {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
                result[0] += 0.9987560030087369;
                result[1] += 0.001243996991263091;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7621722519397735596) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2511906176805496216) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
                result[0] += 0.8816265060240964;
                result[1] += 0.11837349397590362;
              } else {
                result[0] += 0.9976412869138598;
                result[1] += 0.002358713086140202;
              }
            }
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3296520859003067017) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.3864005208015441895) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.409673541784286499) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9672131147540983;
                result[1] += 0.03278688524590164;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2087755054235458374) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2866415232419967651) ) ) {
                result[0] += 0.02086677367576244;
                result[1] += 0.9791332263242376;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.8;
                result[1] += 0.2;
              } else {
                result[0] += 0.355956678700361;
                result[1] += 0.644043321299639;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1501128673553466797) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.07322080291970803;
                result[1] += 0.926779197080292;
              }
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3297289460897445679) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001568447623867541552) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[66].missing != -1) || (data[66].fvalue <= (float)3.177672624588012695e-06) ) ) {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.752838432788848877) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1301127299666404724) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.353249773383140564e-05) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7537131011486053467) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3413494378328323364) ) ) {
                result[0] += 0.9998975274845925;
                result[1] += 0.00010247251540747464;
              } else {
                result[0] += 0.9983702898908589;
                result[1] += 0.001629710109141192;
              }
            }
          } else {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7156386375427246094) ) ) {
              if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8210126757621765137) ) ) {
                result[0] += 0.900352733686067;
                result[1] += 0.09964726631393298;
              } else {
                result[0] += 0.3407780979827089;
                result[1] += 0.659221902017291;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0.2033567525370804;
                result[1] += 0.7966432474629196;
              } else {
                result[0] += 0.9685912378220071;
                result[1] += 0.03140876217799295;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04389595240354537964) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7695273160934448242) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7271780669689178467) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
                result[0] += 0.9777623349548298;
                result[1] += 0.022237665045170257;
              } else {
                result[0] += 0.43209876543209874;
                result[1] += 0.5679012345679012;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9927334785461425781) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3217779546976089478) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.745397716760635376) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.813657611608505249) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.00176707742502912879) ) ) {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
                result[0] += 0.998707021663984;
                result[1] += 0.0012929783360160435;
              } else {
                result[0] += 0.7423285198555957;
                result[1] += 0.25767148014440433;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2542048841714859009) ) ) {
                result[0] += 0.7693024990675121;
                result[1] += 0.23069750093248786;
              } else {
                result[0] += 0.9981509303131861;
                result[1] += 0.0018490696868138218;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.287395089864730835) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1539440527558326721) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)3.175809979438781738e-06) ) ) {
            if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8087992370128631592) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1320460066199302673) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1333329528570175171) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9999608027594857;
                result[1] += 3.9197240514267794e-05;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001801235310267657042) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2806063294410705566) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
            if ( ( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7843245267868041992) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.7635239567233385;
                result[1] += 0.23647604327666152;
              } else {
                result[0] += 0.1024793388429752;
                result[1] += 0.8975206611570248;
              }
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.906224180666483;
                result[1] += 0.09377581933351693;
              }
            }
          } else {
            if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
                result[0] += 0.9751552795031055;
                result[1] += 0.024844720496894408;
              } else {
                result[0] += 0.9993324798829554;
                result[1] += 0.0006675201170446232;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1371966376900672913) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.781479179859161377) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2964478731155395508) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7943507134914398193) ) ) {
              if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.8138871192932128906) ) ) {
                result[0] += 0.08070175438596491;
                result[1] += 0.9192982456140351;
              } else {
                result[0] += 0.2329192546583851;
                result[1] += 0.7670807453416149;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4437147527933120728) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7218900918960571289) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7517754733562469482) ) ) {
            if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8191741108894348145) ) ) {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
                result[0] += 0.9990653524956302;
                result[1] += 0.0009346475043697806;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0.2857142857142857;
                result[1] += 0.7142857142857143;
              } else {
                result[0] += 0.897038748293605;
                result[1] += 0.10296125170639504;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397733837366104126) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                result[0] += 0.9995229576624926;
                result[1] += 0.0004770423375074538;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3017295151948928833) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3850198984146118164) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2708033323287963867) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0.6449511400651465;
                result[1] += 0.3550488599348534;
              } else {
                result[0] += 0.9202733485193622;
                result[1] += 0.07972665148063782;
              }
            }
          } else {
            if ( ( !(data[72].missing != -1) || (data[72].fvalue <= (float)0.4521647095680236816) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7786253094673156738) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.997639653815893;
                result[1] += 0.0023603461841070024;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8182544112205505371) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001764542423188686371) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.153880678117275238) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.758422166109085083) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001772137475199997425) ) ) {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4317925423383712769) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
                result[0] += 0.9968730953705912;
                result[1] += 0.003126904629408803;
              } else {
                result[0] += 0.8538718623337836;
                result[1] += 0.14612813766621632;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)3.812834620475769043e-06) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.04574106819927692413) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9996951312459986;
                result[1] += 0.0003048687540014024;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.957159857199524;
                result[1] += 0.042840142800476;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7485989928245544434) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.745397716760635376) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.996010895952769;
                result[1] += 0.003989104047230992;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
                result[0] += 0.7074426989441154;
                result[1] += 0.2925573010558846;
              } else {
                result[0] += 0.9853789919199692;
                result[1] += 0.014621008080030782;
              }
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              if ( ( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.00177719752537086606) ) ) {
                result[0] += 0.9;
                result[1] += 0.1;
              } else {
                result[0] += 0.054690786705931846;
                result[1] += 0.9453092132940681;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2852367013692855835) ) ) {
                result[0] += 0.9801512287334594;
                result[1] += 0.01984877126654064;
              } else {
                result[0] += 0.7690179806362379;
                result[1] += 0.23098201936376211;
              }
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2406273633241653442) ) ) {
                result[0] += 0.9475218658892128;
                result[1] += 0.052478134110787174;
              } else {
                result[0] += 0.26294820717131473;
                result[1] += 0.7370517928286853;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9993463309270733;
                result[1] += 0.0006536690729267322;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[39].missing != -1) || (data[39].fvalue <= (float)0.7218900918960571289) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3607806414365768433) ) ) {
                result[0] += 0.9957604663487016;
                result[1] += 0.0042395336512983575;
              } else {
                result[0] += 0.9624413145539906;
                result[1] += 0.03755868544600939;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9148514851485149;
                result[1] += 0.08514851485148515;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7507125139236450195) ) ) {
                result[0] += 0.9889908256880734;
                result[1] += 0.011009174311926606;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1397762447595596313) ) ) {
                result[0] += 0.4520884520884521;
                result[1] += 0.547911547911548;
              } else {
                result[0] += 0.06459948320413436;
                result[1] += 0.9354005167958657;
              }
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                result[0] += 0.9966978536048432;
                result[1] += 0.003302146395156852;
              } else {
                result[0] += 0.9997569393806816;
                result[1] += 0.00024306061931845803;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2511906176805496216) ) ) {
                result[0] += 0.7634228187919463;
                result[1] += 0.23657718120805368;
              } else {
                result[0] += 0.9984913920605809;
                result[1] += 0.0015086079394190381;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
        if ( ( !(data[53].missing != -1) || (data[53].fvalue <= (float)0.7202161252498626709) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8099800944328308105) ) ) {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4320280700922012329) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2889055609703063965) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.3237914443016052246) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7667690515518188477) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1531271114945411682) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2806063294410705566) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3002223819494247437) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2437759265303611755) ) ) {
        if ( ( !(data[67].missing != -1) || (data[67].fvalue <= (float)0.7742594778537750244) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7649300694465637207) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3132751137018203735) ) ) {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.232331492006778717) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8248175182481752;
                result[1] += 0.17518248175182483;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8861111111111111;
                result[1] += 0.11388888888888889;
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
                result[0] += 0.481981981981982;
                result[1] += 0.5180180180180181;
              } else {
                result[0] += 0.10198812290214304;
                result[1] += 0.8980118770978569;
              }
            } else {
              if ( ( !(data[68].missing != -1) || (data[68].fvalue <= (float)0.817994922399520874) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.9259259259259259;
                result[1] += 0.07407407407407407;
              }
            }
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3499511033296585083) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2421378418803215027) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2361026480793952942) ) ) {
                result[0] += 0.9595959595959596;
                result[1] += 0.04040404040404041;
              } else {
                result[0] += 0.17777777777777778;
                result[1] += 0.8222222222222222;
              }
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                result[0] += 0.9998361346504986;
                result[1] += 0.00016386534950138114;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4284365326166152954) ) ) {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4158186167478561401) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06339415721595287323) ) ) {
              if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8859807252883911133) ) ) {
                result[0] += 0.4579831932773109;
                result[1] += 0.542016806722689;
              } else {
                result[0] += 0.810392482034273;
                result[1] += 0.18960751796572692;
              }
            } else {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2781266868114471436) ) ) {
                result[0] += 0.9996714386294298;
                result[1] += 0.00032856137057028865;
              } else {
                result[0] += 0.9182224965283136;
                result[1] += 0.08177750347168647;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[55].missing != -1) || (data[55].fvalue <= (float)3.812834620475769043e-06) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1346227526664733887) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[36].missing != -1) || (data[36].fvalue <= (float)0.7963845431804656982) ) ) {
              if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
                result[0] += 0.9999874220165024;
                result[1] += 1.257798349768565e-05;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
                result[0] += 0.9837587006960556;
                result[1] += 0.016241299303944315;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[46].missing != -1) || (data[46].fvalue <= (float)0.7655960023403167725) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2805211693048477173) ) ) {
          if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.025720199104398489) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2511906176805496216) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1335144117474555969) ) ) {
                result[0] += 0.7470433639947438;
                result[1] += 0.25295663600525625;
              } else {
                result[0] += 0.9897156684815487;
                result[1] += 0.0102843315184513;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9863013698630136;
                result[1] += 0.0136986301369863;
              } else {
                result[0] += 0.13936377407487557;
                result[1] += 0.8606362259251245;
              }
            }
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1070554032921791077) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
                result[0] += 0.999391621101622;
                result[1] += 0.0006083788983779097;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4268460869789123535) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          if ( ( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7118854820728302002) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7485865950584411621) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9993771992650952;
                result[1] += 0.0006228007349048672;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9607668301382077;
                result[1] += 0.03923316986179224;
              }
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
            if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001658276189118623734) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.06770694628357887268) ) ) {
                result[0] += 0.8975265017667845;
                result[1] += 0.10247349823321555;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4127316027879714966) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2945583313703536987) ) ) {
                result[0] += 0.9966555183946488;
                result[1] += 0.0033444816053511705;
              } else {
                result[0] += 0.7722222222222223;
                result[1] += 0.22777777777777777;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9988864142538976;
                result[1] += 0.0011135857461024498;
              } else {
                result[0] += 0.16465942744323792;
                result[1] += 0.8353405725567621;
              }
            }
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.351395338773727417) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[38].missing != -1) || (data[38].fvalue <= (float)0.8161026239395141602) ) ) {
            if ( ( !(data[75].missing != -1) || (data[75].fvalue <= (float)6.34482712484896183e-05) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2670288234949111938) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9998844838739488;
                result[1] += 0.00011551612605119675;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.287395089864730835) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.3132751137018203735) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7658493518829345703) ) ) {
          if ( ( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9919604361057281494) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7251529991626739502) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.148147091269493103) ) ) {
                result[0] += 0.9999003256030301;
                result[1] += 9.967439696989833e-05;
              } else {
                result[0] += 0.9915134370579916;
                result[1] += 0.008486562942008486;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1493559554219245911) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3557280451059341431) ) ) {
                result[0] += 0.6702155975512377;
                result[1] += 0.32978440244876234;
              } else {
                result[0] += 0.9290196927072062;
                result[1] += 0.07098030729279377;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2670288234949111938) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.839572192513369;
                result[1] += 0.16042780748663102;
              }
            } else {
              if ( ( !(data[74].missing != -1) || (data[74].fvalue <= (float)6.342725828289985657e-05) ) ) {
                result[0] += 0.9996675431438329;
                result[1] += 0.0003324568561670747;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3163948804140090942) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2399695739150047302) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2384096980094909668) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1546375900506973267) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2685359418392181396) ) ) {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.419579729437828064) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.010869565217391304;
                result[1] += 0.9891304347826086;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2768351733684539795) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7242422401905059814) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9901334881021474;
                result[1] += 0.009866511897852582;
              }
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.02653165394440293312) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001743039640132337809) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2504337131977081299) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3080129474401473999) ) ) {
              if ( ( !(data[58].missing != -1) || (data[58].fvalue <= (float)0.2209661528468132019) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.998745294855709;
                result[1] += 0.0012547051442910915;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1294692680239677429) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9906522200977268;
                result[1] += 0.00934777990227321;
              }
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2542048841714859009) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.13653535395860672) ) ) {
                result[0] += 0.9783870967741936;
                result[1] += 0.021612903225806453;
              } else {
                result[0] += 0.4280623608017817;
                result[1] += 0.5719376391982183;
              }
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)3.175809979438781738e-06) ) ) {
              if ( ( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001832863199524581432) ) ) {
                result[0] += 0.9882753403933434;
                result[1] += 0.011724659606656581;
              } else {
                result[0] += 0.9991103891080684;
                result[1] += 0.000889610891931616;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += 0;
      result[1] += 1;
    } else {
      if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2039853483438491821) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
        if ( ( !(data[54].missing != -1) || (data[54].fvalue <= (float)0.8868957757949829102) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1307562068104743958) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.153880678117275238) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2813632339239120483) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4500495195388793945) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2300674542784690857) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7805594503879547119) ) ) {
                result[0] += 0.9998150773593046;
                result[1] += 0.00018492264069530913;
              } else {
                result[0] += 0.9759751725613998;
                result[1] += 0.024024827438600245;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
            if ( ( !(data[56].missing != -1) || (data[56].fvalue <= (float)0.7147214412689208984) ) ) {
              if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4420037120580673218) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7422067224979400635) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.048920229175848394;
                result[1] += 0.9510797708241516;
              }
            }
          } else {
            if ( ( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4237040430307388306) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3586165159940719604) ) ) {
                result[0] += 0.7125562089242476;
                result[1] += 0.28744379107575235;
              } else {
                result[0] += 0.9222222222222223;
                result[1] += 0.07777777777777778;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2738175839185714722) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.9992840266342092;
                result[1] += 0.0007159733657907926;
              }
            }
          }
        }
      }
    } else {
      result[0] += 0;
      result[1] += 1;
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
