
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2129049971699714661) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.05992499832063913345) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.458634987473487854) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.390535011887550354) ) ) {
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
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2665649950504302979) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1279450021684169769) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.5103299999609589577) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.03305000066757202148) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7652249932289123535) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3099600076675415039) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7616699934005737305) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9423100054264068604) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.2104850038886070251) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.3185699880123138428) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1516650021076202393) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7752499878406524658) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2409100010991096497) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.06972499936819076538) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01501999981701374054) ) ) {
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
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7993400096893310547) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.11204499751329422) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3563050031661987305) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.2101900056004524231) ) ) {
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
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2290799990296363831) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02937499992549419403) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.05845999903976917267) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7913199961185455322) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4618399962782859802) ) ) {
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
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.33636501245200634) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9948549866676330566) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0.03205128205128205;
                result[1] += 0.967948717948718;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2536100000143051147) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.15384615384615385;
                result[1] += 0.8461538461538461;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1507249996066093445) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4409199953079223633) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.05518000014126300812) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01260000001639127731) ) ) {
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
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1074000000953674316) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.09447000175714492798) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2037050053477287292) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.4508149921894073486) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5296200215816497803) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7908999919891357422) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03719500079751014709) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4724499881267547607) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2351749986410140991) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4754300005733966827) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1105400025844573975) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4146199971437454224) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1875) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6775150001049041748) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.5294100008904933929) ) ) {
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
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2288749963045120239) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6438149809837341309) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.02082999981939792633) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1598850004374980927) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.0367999994195997715) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1165399998426437378) ) ) {
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1944350004196166992) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.02201499976217746735) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8177399933338165283) ) ) {
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
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.0004250000056345015764) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6727450191974639893) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2013199999928474426) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.8420400023460388184) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.817499995231628418) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3761250078678131104) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8648650050163269043) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1870450004935264587) ) ) {
                result[0] += 0.4;
                result[1] += 0.6;
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
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.9688900113105773926) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7468499839305877686) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.02849999908357858658) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.234755001962184906) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7196249961853027344) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4580750018358230591) ) ) {
                result[0] += 0.13114754098360656;
                result[1] += 0.8688524590163934;
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
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.6478999853134155273) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.362630009651184082) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8723399937152862549) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9124599993228912354) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3831000030040740967) ) ) {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2225549966096878052) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5697000026702880859) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.02564102564102564;
                result[1] += 0.9743589743589743;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.02058002352714538574) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.767360001802444458) ) ) {
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
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1105400025844573975) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.01644499972462654114) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.350144997239112854) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9609250128269195557) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.0340149998664855957) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.4541299939155578613) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2843600064516067505) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.07526000216603279114) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2279850021004676819) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.16666666666666666;
                result[1] += 0.8333333333333334;
              }
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.1757300049066543579) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2040800005197525024) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8987649977207183838) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.2388400062918663025) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03759398496240601;
                result[1] += 0.9624060150375939;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.05621000099927186966) ) ) {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.2107100039720535278) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2551000118255615234) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.4647350013256072998) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3969550058245658875) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.7669900059700012207) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.009200000204145908356) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4029550105333328247) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.189489997923374176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6731700003147125244) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.8664250075817108154) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
                result[0] += 0.036231884057971016;
                result[1] += 0.9637681159420289;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.8741100132465362549) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7623949944972991943) ) ) {
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
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6667099893093109131) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5515550076961517334) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2452850043773651123) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7157849967479705811) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6824550032615661621) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3199900016188621521) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
              } else {
                result[0] += 0.038461538461538464;
                result[1] += 0.9615384615384616;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0.007407407407407408;
                result[1] += 0.9925925925925926;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02878000028431415558) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4024299979209899902) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04756499826908111572) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1768149957060813904) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6590549945831298828) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.5963250100612640381) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3011000007390975952) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4113550037145614624) ) ) {
                result[0] += 0.1;
                result[1] += 0.9;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.716214984655380249) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5014800131320953369) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8571428571428571;
                result[1] += 0.14285714285714285;
              }
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.5174749940633773804) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03719500079751014709) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5344449989497661591) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8471750020980834961) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.003469999879598617554) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.5438200011849403381) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5507950037717819214) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6597450077533721924) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7468499839305877686) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.1087849996984004974) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5874799787998199463) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.3761350065469741821) ) ) {
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
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5868500024080276489) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9221850037574768066) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.08305500075221061707) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3277849853038787842) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7300400137901306152) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7909249961376190186) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.5417800098657608032) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5342149995267391205) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1539949998259544373) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.569690018892288208) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9773649871349334717) ) ) {
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
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.04484999924898147583) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8431349992752075195) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7960099875926971436) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.7480899989604949951) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2568950057029724121) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6184649765491485596) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1315400004386901855) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.07707499712705612183) ) ) {
                result[0] += 0.18181818181818182;
                result[1] += 0.8181818181818182;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9194949865341186523) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9983600080013275146) ) ) {
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
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.007985000032931566238) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2719449996948242188) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.04756499826908111572) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.07190000265836715698) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9084300100803375244) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.789719998836517334) ) ) {
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
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9955250024795532227) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3122599869966506958) ) ) {
        if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.06835999712347984314) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.07593500148504972458) ) ) {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2176549956202507019) ) ) {
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
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9928199946880340576) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7552649974822998047) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7207550108432769775) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6041649878025054932) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8419100046157836914) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1184800006449222565) ) ) {
                result[0] += 0.25;
                result[1] += 0.75;
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
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9550499916076660156) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.02878000028431415558) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0002350000049773370847) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.106919996440410614) ) ) {
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.4457850046455860138) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.676109999418258667) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7483049929141998291) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.06846500188112258911) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.00464499741792678833) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.024242424242424242;
                result[1] += 0.9757575757575757;
              }
            }
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9772599935531616211) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6195650026202201843) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1074300035834312439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8694249987602233887) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8562650084495544434) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6800599992275238037) ) ) {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7157849967479705811) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
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
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9119749963283538818) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.4914500070735812187) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.04604500159621238708) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1545699983835220337) ) ) {
                result[0] += 0.034482758620689655;
                result[1] += 0.9655172413793104;
              } else {
                result[0] += 0.20689655172413793;
                result[1] += 0.7931034482758621;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9902099967002868652) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6044850051403045654) ) ) {
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7446549832820892334) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2719449996948242188) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1449500024318695068) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8965050280094146729) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2918400019407272339) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.02351000066846609116) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6720599979162216187) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.199650004506111145) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6367100030183792114) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2303299978375434875) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
                result[0] += 0.75;
                result[1] += 0.25;
              } else {
                result[0] += 0.011976047904191617;
                result[1] += 0.9880239520958084;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2591699957847595215) ) ) {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1673249974846839905) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5406100004911422729) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9221850037574768066) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4688049927353858948) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0.01910828025477707;
                result[1] += 0.9808917197452229;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.7050150036811828613) ) ) {
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
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.775615006685256958) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3732099980115890503) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.4289350062608718872) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6363649964332580566) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4500699937343597412) ) ) {
                result[0] += 1;
                result[1] += 0;
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.427630007266998291) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.02830000035464763641) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2284649908542633057) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8389199972152709961) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8744599819183349609) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.4238199964165687561) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1126950010657310486) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.63190498948097229) ) ) {
                result[0] += 0.35;
                result[1] += 0.65;
              } else {
                result[0] += 0.05333333333333334;
                result[1] += 0.9466666666666667;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3694349974393844604) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.1654050052165985107) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1835000067949295044) ) ) {
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
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8004899919033050537) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5809950008988380432) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4656949937343597412) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.1075600003823637962) ) ) {
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.9117650091648101807) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7620150148868560791) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.04081632653061224;
                result[1] += 0.9591836734693877;
              }
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3634900078177452087) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.6381250172853469849) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7183800041675567627) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.184745006263256073) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1413299962878227234) ) ) {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.4062199890613555908) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4975449889898300171) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8824099898338317871) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.388635002076625824) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7429500073194503784) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4771399945020675659) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.4121949970722198486) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.016129032258064516;
                result[1] += 0.9838709677419355;
              }
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7696900069713592529) ) ) {
                result[0] += 0.8;
                result[1] += 0.2;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9161600172519683838) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.7031950056552886963) ) ) {
                result[0] += 1;
                result[1] += 0;
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.7444249987602233887) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9257999956607818604) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.166665002703666687) ) ) {
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
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8230099976062774658) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3274150043725967407) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4133599996566772461) ) ) {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2452000007033348083) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1636100001633167267) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6539550125598907471) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
              }
            }
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.134529992938041687) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8114149868488311768) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.522945016622543335) ) ) {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
                result[0] += 0.007692307692307693;
                result[1] += 0.9923076923076923;
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2940999865531921387) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1189500093460083008) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9830049872398376465) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.4425100013613700867) ) ) {
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
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9826700091361999512) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03932584269662921;
                result[1] += 0.9606741573033708;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4961250000633299351) ) ) {
                result[0] += 0;
                result[1] += 1;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5364150106906890869) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.0357150007039308548) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.0200300007127225399) ) ) {
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
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.6138400137424468994) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2496300041675567627) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1483249962329864502) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5593799985945224762) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.211340002715587616) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6653500199317932129) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.2222222222222222;
                result[1] += 0.7777777777777778;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8531700074672698975) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5204949826002120972) ) ) {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2949300110340118408) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2719449996948242188) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3122050017118453979) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1452600061893463135) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1002500057220458984) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.03941500000655651093) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.07985000312328338623) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9162249863147735596) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7313249707221984863) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4355349987745285034) ) ) {
                result[0] += 0.12903225806451613;
                result[1] += 0.8709677419354839;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.655910000205039978) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9910700023174285889) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.125;
                result[1] += 0.875;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.09663000330328941345) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.6812500059604644775) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9108099937438964844) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8574050068855285645) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5552899837493896484) ) ) {
                result[0] += 0.11267605633802817;
                result[1] += 0.8873239436619719;
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
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.9573650062084197998) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5071349963545799255) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7636999785900115967) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9194949865341186523) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.8524749875068664551) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.149645000696182251) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.842229992151260376) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2925050035119056702) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.4454350024461746216) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9984749853610992432) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8736400008201599121) ) ) {
                result[0] += 0.006756756756756757;
                result[1] += 0.9932432432432432;
              } else {
                result[0] += 0.125;
                result[1] += 0.875;
              }
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3420649915933609009) ) ) {
                result[0] += 0.0625;
                result[1] += 0.9375;
              } else {
                result[0] += 0.75;
                result[1] += 0.25;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.07105500251054763794) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.5691950023174285889) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8744599819183349609) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.001754999975673854351) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6801400035619735718) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.6956749856472015381) ) ) {
                result[0] += 0.07142857142857142;
                result[1] += 0.9285714285714286;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9554049968719482422) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2524199932813644409) ) ) {
                result[0] += 0.1951219512195122;
                result[1] += 0.8048780487804879;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.7956550121307373047) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.854674994945526123) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.8347100019454956055) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.5204949826002120972) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2826699912548065186) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.6001650020480155945) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2951499968767166138) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.03953500092029571533) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7101500034332275391) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1928700059652328491) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.6847299933433532715) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4715250134468078613) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1445349976420402527) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8571450114250183105) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1480599939823150635) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6733799874782562256) ) ) {
              if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9376699924468994141) ) ) {
                result[0] += 0.08163265306122448;
                result[1] += 0.9183673469387755;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1044149994850158691) ) ) {
                result[0] += 0.04;
                result[1] += 0.96;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        }
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.511855006217956543) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1023399978876113892) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9882499873638153076) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2816650047898292542) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.0147900022566318512) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2008349969983100891) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4355349987745285034) ) ) {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5320850014686584473) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6921049952507019043) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4699800014495849609) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4242800027132034302) ) ) {
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
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.02941000089049339294) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.4260849878191947937) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5330200009047985077) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7949300110340118408) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7555849850177764893) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4964650124311447144) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6976850032806396484) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.8969399929046630859) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9221850037574768066) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5487850010395050049) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.04;
                result[1] += 0.96;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5252999961376190186) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1388499997556209564) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09473499655723571777) ) ) {
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
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9315849840641021729) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2074250057339668274) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.05;
                result[1] += 0.95;
              }
            }
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.125) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9186049997806549072) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.813050001859664917) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2667350023984909058) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1623949967324733734) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.07164499908685684204) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6747550070285797119) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2530699968338012695) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.446054995059967041) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1132849995046854019) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7326700091361999512) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4897850006818771362) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9951750040054321289) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2599650025367736816) ) ) {
                result[0] += 1;
                result[1] += 0;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3781900107860565186) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0568700004369020462) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1773849986493587494) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7256699800491333008) ) ) {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2791799977421760559) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9311050176620483398) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3919499963521957397) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2080549970269203186) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8;
                result[1] += 0.2;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3333350121974945068) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9483700096607208252) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.04778499901294708252) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.52447500079870224) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6407900005578994751) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.829645007848739624) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.7960099875926971436) ) ) {
                result[0] += 0.038461538461538464;
                result[1] += 0.9615384615384616;
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
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3013800084590911865) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2404499948024749756) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2251749932765960693) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.02379499934613704681) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3304300010204315186) ) ) {
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
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4528450071811676025) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0299100000411272049) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.3840900063514709473) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.4872700124979019165) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.618779987096786499) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.5025800019502639771) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6580600142478942871) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0.010526315789473684;
                result[1] += 0.9894736842105263;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1945549994707107544) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.21714000403881073) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.4094550013542175293) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2825650125741958618) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.004435000204466632567) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.0239899992011487484) ) ) {
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
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1008350029587745667) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.817499995231628418) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.057974998839199543) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5917200148105621338) ) ) {
              result[0] += 0;
              result[1] += 1;
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
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.6782800108194351196) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4690600000321865082) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5776700079441070557) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1825399994850158691) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9263550043106079102) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.01190499961376190186) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.1075600003823637962) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.03850500099360942841) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.5044300002045929432) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6800599992275238037) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8972199857234954834) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8927049934864044189) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2155549973249435425) ) ) {
                result[0] += 0.041666666666666664;
                result[1] += 0.9583333333333334;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5819500014185905457) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.1078450009226799011) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3749499917030334473) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9424299895763397217) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.434239998459815979) ) ) {
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
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.2895199954509735107) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2361699938774108887) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1234300024807453156) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.9071100056171417236) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.2483250051736831665) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3528150022029876709) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4565350115299224854) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.3112149983644485474) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9429549872875213623) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.09752500290051102638) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4207450002431869507) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9717650115489959717) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.655910000205039978) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.04065040650406504;
                result[1] += 0.959349593495935;
              }
            }
          }
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.349780011922121048) ) ) {
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
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.3178249970078468323) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.783749997615814209) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.05051999911665916443) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
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
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.05560999922454357147) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2007849961519241333) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.8177399933338165283) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5178900007158517838) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.04596000909805297852) ) ) {
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7483049929141998291) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8674199879169464111) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1148349978029727936) ) ) {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.4412549883127212524) ) ) {
                result[0] += 0.10526315789473684;
                result[1] += 0.8947368421052632;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
                result[0] += 0.03225806451612903;
                result[1] += 0.967741935483871;
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9581199884414672852) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2798900008201599121) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.08712999895215034485) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.7388449907302856445) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.9284299910068511963) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2640250027179718018) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9470750093460083008) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2129350006580352783) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.6451200246810913086) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.73069000244140625) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9965699911117553711) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.4816999882459640503) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.278540000319480896) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.043478260869565216;
                result[1] += 0.9565217391304348;
              }
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6888949871063232422) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7890950143337249756) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.7432049959897994995) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1101399995386600494) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.8615700006484985352) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.3670500069856643677) ) ) {
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
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.7102600038051605225) ) ) {
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
    if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.04230500012636184692) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.006250000093132257462) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5894549936056137085) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7196249961853027344) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9491199851036071777) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8920450210571289062) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5812650024890899658) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5728699862957000732) ) ) {
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
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.753805011510848999) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6184649765491485596) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.02857142857142857;
                result[1] += 0.9714285714285714;
              }
            }
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.4157600104808807373) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2821049988269805908) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9944899976253509521) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3059100061655044556) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2493149936199188232) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2152249962091445923) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.6469850242137908936) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.5640150010585784912) ) ) {
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
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.003504999913275241852) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.04360000044107437134) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5296200215816497803) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.2937999963760375977) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8088499903678894043) ) ) {
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
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9534899890422821045) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8571450114250183105) ) ) {
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
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7028900086879730225) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2147799953818321228) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.01942499913275241852) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1548000015318393707) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4603350162506103516) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
                result[0] += 0.012422360248447204;
                result[1] += 0.9875776397515528;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.07004499681352172047) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8690499961376190186) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.1919199973344802856) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5609500110149383545) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9357950091361999512) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0.019230769230769232;
                result[1] += 0.9807692307692307;
              }
            } else {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4739699997007846832) ) ) {
                result[0] += 0.6666666666666666;
                result[1] += 0.3333333333333333;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.09760500118136405945) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.8656899929046630859) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.9021950066089630127) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2037050053477287292) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6768300086259841919) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.1620350033044815063) ) ) {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3770699948072433472) ) ) {
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
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9581199884414672852) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1515449956059455872) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5343949794769287109) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4481100142002105713) ) ) {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1901900023221969604) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.07213000208139419556) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.7346950024366378784) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6772049963474273682) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.009294997900724411011) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0002350000049773370847) ) ) {
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
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9329150021076202393) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.2305750101804733276) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.8151000142097473145) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3306000083684921265) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.426575005054473877) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.2;
                result[1] += 0.8;
              }
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5092049911618232727) ) ) {
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
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.9924199879169464111) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.3544049859046936035) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6030699983239173889) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.4271250069141387939) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3536999970674514771) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.6001650020480155945) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2949300110340118408) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08303000032901763916) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4411299973726272583) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1492149978876113892) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01260000001639127731) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.09378999471664428711) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1904799938201904297) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.3907250016927719116) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.5485449992120265961) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3979200124740600586) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.321390002965927124) ) ) {
                result[0] += 0.043478260869565216;
                result[1] += 0.9565217391304348;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3298850152641534805) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9581199884414672852) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7183800041675567627) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1797650009393692017) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.3526699990034103394) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0157600007951259613) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.04726999998092651367) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4096949994564056396) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.08503000065684318542) ) ) {
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
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01501999981701374054) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2922049909830093384) ) ) {
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
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9566900134086608887) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.04879498481750488281) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5330200009047985077) ) ) {
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
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.06219499930739402771) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03748499974608421326) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.6862699985504150391) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.2983600050210952759) ) ) {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7597500085830688477) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7944949865341186523) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.007633587786259542;
                result[1] += 0.9923664122137404;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1074300035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8674199879169464111) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3756899982690811157) ) ) {
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
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7671350240707397461) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.270830005407333374) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.1097400039434432983) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1249050013720989227) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.1997050046920776367) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.348514992743730545) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9221850037574768066) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9952850043773651123) ) ) {
                result[0] += 0.009615384615384616;
                result[1] += 0.9903846153846154;
              } else {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.4992000013589859009) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0) ) ) {
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
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2672250047326087952) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4460799992084503174) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.148965001106262207) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.01439499959997192491) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1020400002598762512) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1224500015377998352) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.5519750118255615234) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.04270499944686889648) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.8371500074863433838) ) ) {
                result[0] += 0.041379310344827586;
                result[1] += 0.9586206896551724;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.739674985408782959) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7468499839305877686) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9088949859142303467) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.024242424242424242;
                result[1] += 0.9757575757575757;
              }
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.9166649878025054932) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4817700088024139404) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.416665002703666687) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.7027949988842010498) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.07692307692307693;
                result[1] += 0.9230769230769231;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2599149942398071289) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5100950151681900024) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.938935011625289917) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03409090909090909;
                result[1] += 0.9659090909090909;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5567100010812282562) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1960400007665157318) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3749499917030334473) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1909999996423721313) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.3350349999964237213) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9314199984073638916) ) ) {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9970000088214874268) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9981200098991394043) ) ) {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1417199969291687012) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.02631578947368421;
                result[1] += 0.9736842105263158;
              }
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3341150060296058655) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5726500004529953003) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.04570500552654266357) ) ) {
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
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.6062450036406517029) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5777650028467178345) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6597450077533721924) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1768149957060813904) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6942600011825561523) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.0407399982213973999) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.613994985818862915) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.1844399943947792053) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.02469000034034252167) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.241315007209777832) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.0883550010621547699) ) ) {
                result[0] += 0.14285714285714285;
                result[1] += 0.8571428571428571;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4731000065803527832) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.09382000192999839783) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.4549099951982498169) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5879449993371963501) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7287800014019012451) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4298199862241744995) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3224399983882904053) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1107100024819374084) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2032250016927719116) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2704150080680847168) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3055799948051571846) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.8614600002765655518) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1437549963593482971) ) ) {
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
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.655149996280670166) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9984749853610992432) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.08622500300407409668) ) ) {
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
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4077649936079978943) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7597500085830688477) ) ) {
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.4058049991726875305) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.466524999588727951) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5082300007343292236) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.3691949993371963501) ) ) {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.133619997650384903) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.02030500024557113647) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.436015002429485321) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1264899969100952148) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.170329999178647995) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.4524350017309188843) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2773300036787986755) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.08717500045895576477) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.0500650014728307724) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5595250017940998077) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7935449779033660889) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.01642999984323978424) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1363649964332580566) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.229169994592666626) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.024;
                result[1] += 0.976;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.4313300102949142456) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5419000014662742615) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03301499970257282257) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3909050077199935913) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2143850028514862061) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-0.3265299946069717407) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9092800021171569824) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7671350240707397461) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1142599992454051971) ) ) {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6486249864101409912) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.3047700002789497375) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.8925450146198272705) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
                result[0] += 0.03125;
                result[1] += 0.96875;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2551449984312057495) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1305799968540668488) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9811899960041046143) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.9965699911117553711) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.4093549884855747223) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1148349978029727936) ) ) {
                result[0] += 0.00847457627118644;
                result[1] += 0.9915254237288136;
              } else {
                result[0] += 0.13333333333333333;
                result[1] += 0.8666666666666667;
              }
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.7215900123119354248) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1346099972724914551) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.36363636363636365;
                result[1] += 0.6363636363636364;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3778600096702575684) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7521849870681762695) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.3666500002145767212) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0001199999824166297913) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.0500650014728307724) ) ) {
            if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.5075249997898936272) ) ) {
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
        if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1942499950528144836) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9643700122833251953) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.898245006799697876) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.1601550057530403137) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9313749969005584717) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.1786600043997168541) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.5) ) ) {
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
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2451200038194656372) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4486800134181976318) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.9943900108337402344) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7272749990224838257) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1555349975824356079) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1655350029468536377) ) ) {
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
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1074300035834312439) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.9987249970436096191) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2847799956798553467) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8074199855327606201) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.001195000484585762024) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.00464499741792678833) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03424657534246575;
                result[1] += 0.9657534246575342;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.01305999979376792908) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2752100024372339249) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.05882500112056732178) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2030850052833557129) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1990549936890602112) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3339049965143203735) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4082499891519546509) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.6076700091361999512) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.4140249863266944885) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3603750020265579224) ) ) {
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
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.07466499693691730499) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2726600039750337601) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9366349875926971436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7250150144100189209) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9221850037574768066) ) ) {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5956000089645385742) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.015625;
                result[1] += 0.984375;
              }
            }
          }
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.6229100003838539124) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3953550010919570923) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.7808400094509124756) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.3470750004053115845) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.6811750084161758423) ) ) {
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
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2700150012969970703) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.8114149868488311768) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3224399983882904053) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01978500001132488251) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.5368200093507766724) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.3639350086450576782) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.3242450058460235596) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1074300035834312439) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3985200077295303345) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1315549970604479313) ) ) {
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
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3099600076675415039) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2692100033164024353) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.8;
                result[1] += 0.2;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.154879995621740818) ) ) {
                result[0] += 1;
                result[1] += 0;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.983574986457824707) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.1501450017094612122) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.05803500115871429443) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3244949877262115479) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.6445949971675872803) ) ) {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.05391500145196914673) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.2957699978724122047) ) ) {
                result[0] += 0;
                result[1] += 1;
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
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8646399974822998047) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.6733799874782562256) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3218200057744979858) ) ) {
                result[0] += 0.4666666666666667;
                result[1] += 0.5333333333333333;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          } else {
            if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1969700008630752563) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6775150001049041748) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2630599960684776306) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.9124599993228912354) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3671350032091140747) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
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
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6023550033569335938) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.3802649974822998047) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9940800070762634277) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.6367100030183792114) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6979950070381164551) ) ) {
                result[0] += 0.09090909090909091;
                result[1] += 0.9090909090909091;
              } else {
                result[0] += 0.007874015748031496;
                result[1] += 0.9921259842519685;
              }
            }
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5338950008153915405) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.6917600035667419434) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.1111111111111111;
                result[1] += 0.8888888888888888;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.413065001368522644) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.7134000062942504883) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2262849956750869751) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.05743499891832470894) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
              if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.2672250047326087952) ) ) {
                result[0] += 0.17777777777777778;
                result[1] += 0.8222222222222222;
              } else {
                result[0] += 0.00819672131147541;
                result[1] += 0.9918032786885246;
              }
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8612200021743774414) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.2;
                result[1] += 0.8;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.100174998864531517) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5005600000149570405) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.2649399973452091217) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.08712999895215034485) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.001399999950081110001) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.0415400015190243721) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5100950151681900024) ) ) {
          if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3079150021076202393) ) ) {
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.2714950069785118103) ) ) {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.0114500001072883606) ) ) {
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
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4220199882984161377) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2378650009632110596) ) ) {
                result[0] += 0.11428571428571428;
                result[1] += 0.8857142857142857;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7688849866390228271) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8285749852657318115) ) ) {
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
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.6948049962520599365) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.0761800035834312439) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3302749991416931152) ) ) {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.3536899983882904053) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6407900005578994751) ) ) {
                result[0] += 0.5;
                result[1] += 0.5;
              } else {
                result[0] += 0.018867924528301886;
                result[1] += 0.9811320754716981;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8231399953365325928) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.3648650050163269043) ) ) {
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
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8768799901008605957) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.9165700078010559082) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3933999985456466675) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.2792750000953674316) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1644499972462654114) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.01183500001206994057) ) ) {
                result[0] += 0.8333333333333334;
                result[1] += 0.16666666666666666;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.9604949951171875) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1686200026888400316) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2303299978375434875) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03821656050955414;
                result[1] += 0.9617834394904459;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.9387849867343902588) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.8571450114250183105) ) ) {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4077649936079978943) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6590900123119354248) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8952199816703796387) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.1419349908828735352) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.09663000330328941345) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8766050040721893311) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.30750998854637146) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7729800045490264893) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.6580600142478942871) ) ) {
                result[0] += 0.125;
                result[1] += 0.875;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.7909249961376190186) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.5256149917840957642) ) ) {
            if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.690970003604888916) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
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
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4123449921607971191) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.07289499975740909576) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1601350009441375732) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.329225003719329834) ) ) {
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
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6912750005722045898) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6828050017356872559) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.7480899989604949951) ) ) {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.4266099929809570312) ) ) {
            if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.3984649963676929474) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.2480599991977214813) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.5552899837493896484) ) ) {
                result[0] += 0.0625;
                result[1] += 0.9375;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            }
          }
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.78125) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.6105400025844573975) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4572850018739700317) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.03773500025272369385) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.0004250000056345015764) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9759500026702880859) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7745099961757659912) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
            if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.4651149995625019073) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2193350046873092651) ) ) {
                result[0] += 0.2;
                result[1] += 0.8;
              } else {
                result[0] += 0.029069767441860465;
                result[1] += 0.9709302325581395;
              }
            }
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0536899864673614502) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5119050145149230957) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9708600044250488281) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.4207450002431869507) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.5792549997568130493) ) ) {
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
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6503849923610687256) ) ) {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9097950160503387451) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.02498000022023916245) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1442549964413046837) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.09523809523809523;
                result[1] += 0.9047619047619048;
              }
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9357950091361999512) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.03333333333333333;
                result[1] += 0.9666666666666667;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7562499940395355225) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3831000030040740967) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.007100000046193599701) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.229169994592666626) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.457574993371963501) ) ) {
          if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.2445449978113174438) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.6940500140190124512) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1498049944639205933) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 0.5;
                result[1] += 0.5;
              }
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5696799978613853455) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1008599996566772461) ) ) {
                result[0] += 0.3333333333333333;
                result[1] += 0.6666666666666666;
              } else {
                result[0] += 0.007874015748031496;
                result[1] += 0.9921259842519685;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2276500016450881958) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7192199826240539551) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.6145699918270111084) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8701950013637542725) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7498099952936172485) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.03455000044777989388) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.5656450018286705017) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.017142857142857144;
                result[1] += 0.9828571428571429;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.4069150090217590332) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08204999938607215881) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01978500001132488251) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.6380699872970581055) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.02082999981939792633) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6396300047636032104) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.2786850035190582275) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.2227599937468767166) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.7493149936199188232) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.2481500059366226196) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4296299964189529419) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9026100039482116699) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.0612250007688999176) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.035211267605633804;
                result[1] += 0.9647887323943662;
              }
            }
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08303000032901763916) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.09663000330328941345) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.0969000011682510376) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.0299100000411272049) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7424499988555908203) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.4738549999892711639) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.8788850009441375732) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5176050066947937012) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.7169799953699111938) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1339750031766016036) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
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
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8586249947547912598) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-0.1670300066471099854) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.032;
                result[1] += 0.968;
              }
            }
          } else {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.09536000341176986694) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.1049150004982948303) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3707450032234191895) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9919500052928924561) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8536449968814849854) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.158195003867149353) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.03463499993085861206) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8125) ) ) {
                result[0] += 1;
                result[1] += 0;
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
    }
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.8474049866199493408) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7165350019931793213) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09366500005125999451) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5290249884128570557) ) ) {
                result[0] += 0.5714285714285714;
                result[1] += 0.42857142857142855;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.2585650011897087097) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1316950023174285889) ) ) {
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
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.9754950106143951416) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9927799999713897705) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1863349974155426025) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9162249863147735596) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0542850014753639698) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7652349770069122314) ) ) {
                result[0] += 0.02097902097902098;
                result[1] += 0.9790209790209791;
              } else {
                result[0] += 0.25;
                result[1] += 0.75;
              }
            }
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7272749990224838257) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3636350035667419434) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.655910000205039978) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.8531700074672698975) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.09523809523809523;
                result[1] += 0.9047619047619048;
              }
            }
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.3856399953365325928) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.0009699999936856329441) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.07174000144004821777) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4308699965476989746) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.6242149993777275085) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4603350162506103516) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.1812650030478835106) ) ) {
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
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.0004799999878741800785) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4063199982047080994) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.1316950023174285889) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.8845050036907196045) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0.05263157894736842;
                result[1] += 0.9473684210526315;
              }
            } else {
              if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7133549749851226807) ) ) {
                result[0] += 1;
                result[1] += 0;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.08616000041365623474) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.6486249864101409912) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1436150074005126953) ) ) {
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
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9614199995994567871) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.5224250108003616333) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.786119997501373291) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9945150017738342285) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.7472899854183197021) ) ) {
              if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8804349899291992188) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                result[0] += 0;
                result[1] += 1;
              }
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3694349974393844604) ) ) {
                result[0] += 0.4444444444444444;
                result[1] += 0.5555555555555556;
              } else {
                result[0] += 0.030120481927710843;
                result[1] += 0.9698795180722891;
              }
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4754950106143951416) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5665400028228759766) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
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
