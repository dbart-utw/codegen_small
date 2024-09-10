
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
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)-0.9774450063705444336) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)-0.8264750242233276367) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9872500002384185791) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9427549839019775391) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9454649984836578369) ) ) {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1194399893283843994) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2995750010013580322) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1282450016587972641) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1262999996542930603) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.1;
                      result[1] += 0.9;
                    }
                  }
                } else {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4454549998044967651) ) ) {
                    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4699449986219406128) ) ) {
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
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.6186250001192092896) ) ) {
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
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2943250089883804321) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.5777199864387512207) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.01818000071216374636) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.1096150018274784088) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.731334984302520752) ) ) {
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
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.7950850129127502441) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.9453200101852416992) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4002950042486190796) ) ) {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.3099600076675415039) ) ) {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.3058600053191184998) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.2363749966025352478) ) ) {
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
            } else {
              if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4257400110363960266) ) ) {
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
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8774850070476531982) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.6302399933338165283) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.1742250025272369385) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4771399945020675659) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5382650010287761688) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7857150137424468994) ) ) {
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
  if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.0457650013267993927) ) ) {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.7215200066566467285) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.003109999894149950705) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.05296000116504728794) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9788799881935119629) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.555429995059967041) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.8238550126552581787) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.9320099949836730957) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8219699859619140625) ) ) {
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
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.1515449956059455872) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1338449977338314056) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4099750065943226218) ) ) {
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
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.8554150164127349854) ) ) {
            if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)-0.4564400017261505127) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1071449965238571167) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.7272749990224838257) ) ) {
                  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5281199812889099121) ) ) {
                    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9608399868011474609) ) ) {
                      result[0] += 0.07692307692307693;
                      result[1] += 0.9230769230769231;
                    } else {
                      result[0] += 0.4;
                      result[1] += 0.6;
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
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9585700035095214844) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.9031099975109100342) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1193349994719028473) ) ) {
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9338650107383728027) ) ) {
            if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1684800013899803162) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.9632549881935119629) ) ) {
                if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.5874799787998199463) ) ) {
                  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.01884500123560428619) ) ) {
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
            }
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2323050051927566528) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.266680009663105011) ) ) {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.005549998953938484192) ) ) {
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
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.2736600041389465332) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.1983349993824958801) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.5) ) ) {
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
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8484800159931182861) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1630349978804588318) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1439899997785687447) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5322400182485580444) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1342250015586614609) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.7037000060081481934) ) ) {
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
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8989500105381011963) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.9949400126934051514) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.995559990406036377) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.4580750018358230591) ) ) {
                if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.6188549995422363281) ) ) {
                  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6953400075435638428) ) ) {
                    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1390350013971328735) ) ) {
                      result[0] += 0.058823529411764705;
                      result[1] += 0.9411764705882353;
                    } else {
                      result[0] += 0.6666666666666666;
                      result[1] += 0.3333333333333333;
                    }
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.2563700079917907715) ) ) {
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
            } else {
              if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9945949912071228027) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.7237900048494338989) ) ) {
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
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.6636350005865097046) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9876999855041503906) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.0005600000149570405483) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3272499963641166687) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.0155549999326467514) ) ) {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.05289499834179878235) ) ) {
              if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.02606499940156936646) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.09093999862670898438) ) ) {
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
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1700950115919113159) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.3704949915409088135) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.004089999943971633911) ) ) {
            if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5091550052165985107) ) ) {
              if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.4242049902677536011) ) ) {
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
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
              if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.213075004518032074) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2989600002765655518) ) ) {
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
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9508799910545349121) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.7465550005435943604) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.7902100086212158203) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.4771399945020675659) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2194750010967254639) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.05956500023603439331) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.0002350000049773370847) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)-0.5002300000051036477) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.3928650021553039551) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.4422750025987625122) ) ) {
        if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.2254200056195259094) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.002510000020265579224) ) ) {
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
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.5071649849414825439) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1593749970197677612) ) ) {
                    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6312749981880187988) ) ) {
                      result[0] += 0.07142857142857142;
                      result[1] += 0.9285714285714286;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.1607799939811229706) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0.03333333333333333;
                      result[1] += 0.9666666666666667;
                    }
                  }
                } else {
                  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.1314900219440460205) ) ) {
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
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9571999907493591309) ) ) {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.7749550044536590576) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2318000048398971558) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7216299772262573242) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.06695500262139830738) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.3554199934005737305) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.9826250076293945312) ) ) {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8900200128555297852) ) ) {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9963699877262115479) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9994949996471405029) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.7558549940586090088) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.9342049956321716309) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.3711349964141845703) ) ) {
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
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1091099982149899006) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.09490999765694141388) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.6641400158405303955) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.3125) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9600049853324890137) ) ) {
              if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.5667299926280975342) ) ) {
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
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.08117000013589859009) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.198045000433921814) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.004080000217072665691) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.06564500182867050171) ) ) {
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
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9352599978446960449) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1322299987077713013) ) ) {
          if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2812850028276443481) ) ) {
            if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.3190249985636910424) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.03484000079333782196) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            }
          } else {
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.6696349978446960449) ) ) {
              if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.5484149754047393799) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.9108049869537353516) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.9763750135898590088) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.3585000038146972656) ) ) {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1995100043714046478) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2843250073492527008) ) ) {
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
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3389199972152709961) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.8854599893093109131) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            result[0] += 1;
            result[1] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)-0.7105650007724761963) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.2745099961757659912) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.2429150119423866272) ) ) {
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.8478700220584869385) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.06562499701976776123) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.96096000075340271) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1288950014859437943) ) ) {
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
          if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8182350099086761475) ) ) {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6958750039339065552) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9684099853038787842) ) ) {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-0.2629749998450279236) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.07933999970555305481) ) ) {
                    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.01262500042503233999) ) ) {
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
            if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.5935999751091003418) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7182250022888183594) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.5131050050258636475) ) ) {
                  if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7912000119686126709) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.9186049997806549072) ) ) {
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
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.8900200128555297852) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7371549904346466064) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2075249999761581421) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.07311999797821044922) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.3688299953937530518) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  result[0] += 0;
                  result[1] += 1;
                }
              } else {
                if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9217050075531005859) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.171070002019405365) ) ) {
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
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1605999991297721863) ) ) {
              if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.186399996280670166) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.05387500114738941193) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.2931700050830841064) ) ) {
          if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.9500699937343597412) ) ) {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.8479700088500976562) ) ) {
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
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.3644200116395950317) ) ) {
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.002094999887049198151) ) ) {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5290249884128570557) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.07780000194907188416) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.02474500145763158798) ) ) {
            if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.8278700113296508789) ) ) {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.03020999953150749207) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.01729499921202659607) ) ) {
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
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.004429999768035486341) ) ) {
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
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.8257950246334075928) ) ) {
          if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.1081349998712539673) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.5179800000041723251) ) ) {
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
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.3664000034332275391) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.0302099958062171936) ) ) {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.5704499855637550354) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.5884049981832504272) ) ) {
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
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2522249966859817505) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.07240500114858150482) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.05976499989628791809) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.500845000147819519) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.9946700036525726318) ) ) {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.2686599940061569214) ) ) {
              if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.1611550003290176392) ) ) {
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
            if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7205500006675720215) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.727770000696182251) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.03749000001698732376) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.1847000047564506531) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.1014549983665347099) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.1657399963587522507) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1506249979138374329) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.9955250024795532227) ) ) {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.8791849911212921143) ) ) {
          if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.03773500025272369385) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          } else {
            if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.9105649888515472412) ) ) {
              if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
                if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.9118300080299377441) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.09113999828696250916) ) ) {
                    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.7228749990463256836) ) ) {
                      result[0] += 0.25;
                      result[1] += 0.75;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.2357800006866455078) ) ) {
                      result[0] += 0.045454545454545456;
                      result[1] += 0.9545454545454546;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  }
                }
              } else {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9598099887371063232) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.6764699965715408325) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7865900099277496338) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.6742250025272369385) ) ) {
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
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001044999997247941792) ) ) {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-2.999999924213625491e-05) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.384104996919631958) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.009634999558329582214) ) ) {
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
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.36716499924659729) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1295600049197673798) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4603350013494491577) ) ) {
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9622650146484375) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1263850033283233643) ) ) {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1083850003778934479) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.2822699993848800659) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              result[0] += 0;
              result[1] += 1;
            }
          }
        } else {
          if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.6077099889516830444) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1861499994993209839) ) ) {
              if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1521050035953521729) ) ) {
                result[0] += 0;
                result[1] += 1;
              } else {
                result[0] += 1;
                result[1] += 0;
              }
            } else {
              if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.1045450009405612946) ) ) {
                if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)0.702610015869140625) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.3220450058579444885) ) ) {
                    result[0] += 0;
                    result[1] += 1;
                  } else {
                    result[0] += 1;
                    result[1] += 0;
                  }
                }
              } else {
                if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.0895499885082244873) ) ) {
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
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9983600080013275146) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2891950011253356934) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1832699999213218689) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.00498000066727399826) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.02259499905630946159) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.002695000031962990761) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.1198299974203109741) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.3586550056934356689) ) ) {
            if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.09160500019788742065) ) ) {
              if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.1431300044059753418) ) ) {
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
            if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2818900048732757568) ) ) {
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
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.7805150151252746582) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1898349970579147339) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.89342498779296875) ) ) {
          if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.6332649886608123779) ) ) {
              if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2412150055170059204) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.2140100002288818359) ) ) {
                  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6544350087642669678) ) ) {
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
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.3964300081133842468) ) ) {
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
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.189065001904964447) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.3707450032234191895) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.002695000031962990761) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.08884499967098236084) ) ) {
          if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.4083350002765655518) ) ) {
            if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.1826099976897239685) ) ) {
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
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2346950024366378784) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)0.8806400001049041748) ) ) {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.8634400069713592529) ) ) {
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
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8980149924755096436) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.03905000165104866028) ) ) {
          if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.6644950062036514282) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.7107249796390533447) ) ) {
            if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)-0.9491199851036071777) ) ) {
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
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.09204499982297420502) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.5710550025105476379) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420354992151260376) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2021749988198280334) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09523999691009521484) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.03397999890148639679) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.06430000066757202148) ) ) {
            if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.343774992972612381) ) ) {
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
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)0.1874099969863891602) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.4713749997317790985) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7340550124645233154) ) ) {
        if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.01954499969724565744) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.02687000017613172531) ) ) {
            result[0] += 0;
            result[1] += 1;
          } else {
            if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.2407750040292739868) ) ) {
              if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.1615849994122982025) ) ) {
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
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4068550020456314087) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.4326900094747543335) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.4802449941635131836) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.03719500079751014709) ) ) {
          if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
          }
        } else {
          if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.5) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.06134499981999397278) ) ) {
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02312999917194247246) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.7903949916362762451) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.9814800024032592773) ) ) {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.5961750000715255737) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9941000044345855713) ) ) {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1408099979162216187) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.972685009241104126) ) ) {
              if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7183350026607513428) ) ) {
                if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.1995999962091445923) ) ) {
                  if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.1665499992668628693) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                } else {
                  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.2867400050163269043) ) ) {
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
              result[0] += 1;
              result[1] += 0;
            }
          }
        } else {
          if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.7300400137901306152) ) ) {
            result[0] += 1;
            result[1] += 0;
          } else {
            if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5382650010287761688) ) ) {
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
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)-0.9874550104141235352) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.04773000068962574005) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8146849870681762695) ) ) {
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
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.205454997718334198) ) ) {
        if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.5964650064706802368) ) ) {
          result[0] += 0;
          result[1] += 1;
        } else {
          result[0] += 1;
          result[1] += 0;
        }
      } else {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.8274700045585632324) ) ) {
          if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5249050110578536987) ) ) {
            if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.2016550004482269287) ) ) {
              result[0] += 0;
              result[1] += 1;
            } else {
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.9671449959278106689) ) ) {
              if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.05153499916195869446) ) ) {
                if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.01260000001639127731) ) ) {
                  result[0] += 1;
                  result[1] += 0;
                } else {
                  if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.4460799992084503174) ) ) {
                    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.02670500078238546848) ) ) {
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
                if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.6698200106620788574) ) ) {
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
          result[0] += 1;
          result[1] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1902799978852272034) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9361749887466430664) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.7766600251197814941) ) ) {
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)-0.9060499966144561768) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.02098999917507171631) ) ) {
          result[0] += 1;
          result[1] += 0;
        } else {
          if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
            if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9533250033855438232) ) ) {
              if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.6117149889469146729) ) ) {
                if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.638209998607635498) ) ) {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.1153599992394447327) ) ) {
                    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.4575750008225440979) ) ) {
                      result[0] += 1;
                      result[1] += 0;
                    } else {
                      result[0] += 0;
                      result[1] += 1;
                    }
                  } else {
                    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.1203299984335899353) ) ) {
                      result[0] += 0;
                      result[1] += 1;
                    } else {
                      result[0] += 0.3333333333333333;
                      result[1] += 0.6666666666666666;
                    }
                  }
                } else {
                  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.05719499848783016205) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    result[0] += 0;
                    result[1] += 1;
                  }
                }
              } else {
                if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.143504999577999115) ) ) {
                  result[0] += 0;
                  result[1] += 1;
                } else {
                  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.3680499903857707977) ) ) {
                    result[0] += 1;
                    result[1] += 0;
                  } else {
                    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.2194599956274032593) ) ) {
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
              result[0] += 1;
              result[1] += 0;
            }
          } else {
            if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.9140450060367584229) ) ) {
              result[0] += 1;
              result[1] += 0;
            } else {
              if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
                result[0] += 1;
                result[1] += 0;
              } else {
                if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.8146849870681762695) ) ) {
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
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  
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
