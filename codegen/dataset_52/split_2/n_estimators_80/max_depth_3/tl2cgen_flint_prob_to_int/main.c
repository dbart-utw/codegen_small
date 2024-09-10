
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
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f60fe9c))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5140253;
        result[1] += 48546837;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e65e4a4))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ec822bc))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3b985f07))) ) ) {
        result[0] += 29699241;
        result[1] += 23987849;
      } else {
        result[0] += 52634403;
        result[1] += 1052688;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f5461fa))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4b8130))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed738c5))) ) ) {
        result[0] += 46976204;
        result[1] += 6710886;
      } else {
        result[0] += 4801284;
        result[1] += 48885806;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f0d782d))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7c1f21))) ) ) {
        result[0] += 15080643;
        result[1] += 38606447;
      } else {
        result[0] += 45427538;
        result[1] += 8259552;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1e8145))) ) ) {
        result[0] += 2038750;
        result[1] += 51648340;
      } else {
        result[0] += 20648881;
        result[1] += 33038209;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7e0f3c))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3eae92f7))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 23860929;
        result[1] += 29826161;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3ed4de7f))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x00000000))) ) ) {
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
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e024745))) ) ) {
        result[0] += 52310499;
        result[1] += 1376592;
      } else {
        result[0] += 18889902;
        result[1] += 34797188;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e27e133))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 2825636;
        result[1] += 50861454;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
        result[0] += 41297762;
        result[1] += 12389328;
      } else {
        result[0] += 2363582;
        result[1] += 51323508;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d3a2f06))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 22106449;
        result[1] += 31580641;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e55c28f))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 31317469;
        result[1] += 22369621;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdd590c))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ec84cae))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3bf2cf96))) ) ) {
        result[0] += 32212254;
        result[1] += 21474836;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3dc2f2fa))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 2064888;
        result[1] += 51622203;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e024745))) ) ) {
        result[0] += 43925801;
        result[1] += 9761289;
      } else {
        result[0] += 4601750;
        result[1] += 49085340;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e16cf42))) ) ) {
        result[0] += 40265318;
        result[1] += 13421772;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3de8509c))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3e391926))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 38347922;
        result[1] += 15339168;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3ed4f228))) ) ) {
        result[0] += 37167986;
        result[1] += 16519104;
      } else {
        result[0] += 2334221;
        result[1] += 51352869;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f4687d2))) ) ) {
        result[0] += 16106127;
        result[1] += 37580963;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f736cdf))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 25430727;
        result[1] += 28256363;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
        result[0] += 50529027;
        result[1] += 3158064;
      } else {
        result[0] += 3441480;
        result[1] += 50245610;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f70d552))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 26843545;
        result[1] += 26843545;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e157a78))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3efae48f))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e313a93))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 35791394;
        result[1] += 17895697;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f3705fb))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f73736d))) ) ) {
        result[0] += 6170930;
        result[1] += 47516161;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ee19f80))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3d1475a4))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e69b670))) ) ) {
        result[0] += 47370962;
        result[1] += 6316128;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 6593151;
        result[1] += 47093939;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 6071754;
        result[1] += 47615336;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f7e0f3c))) ) ) {
        result[0] += 50861454;
        result[1] += 2825636;
      } else {
        result[0] += 26843545;
        result[1] += 26843545;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3d0801f7))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5337313;
        result[1] += 48349778;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ec100e6))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3dfcd0bc))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3e61758e))) ) ) {
        result[0] += 42949672;
        result[1] += 10737418;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e9b760c))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 8947848;
        result[1] += 44739242;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f7adb62))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 29826161;
        result[1] += 23860929;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4ba5e4))) ) ) {
        result[0] += 2587329;
        result[1] += 51099761;
      } else {
        result[0] += 33038209;
        result[1] += 20648881;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 4334982;
        result[1] += 49352108;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f68eee1))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3deacd9f))) ) ) {
        result[0] += 20132659;
        result[1] += 33554431;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e381451))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee10e02))) ) ) {
        result[0] += 50933907;
        result[1] += 2753184;
      } else {
        result[0] += 2825636;
        result[1] += 50861454;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f27f727))) ) ) {
        result[0] += 13421772;
        result[1] += 40265318;
      } else {
        result[0] += 1234186;
        result[1] += 52452905;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3ee18c7e))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3e080dc3))) ) ) {
        result[0] += 23008753;
        result[1] += 30678337;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f5baa26))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 49213166;
        result[1] += 4473924;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3edfe282))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e4d9a95))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ) ^ (0b1 << 31))>((int)(0x3f189b52))) ) ) {
        result[0] += 35791394;
        result[1] += 17895697;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f1104d5))) ) ) {
        result[0] += 32212254;
        result[1] += 21474836;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f64b780))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f302118))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 2426535;
        result[1] += 51260555;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ee207b4))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3d67daa5))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f378c00))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e903665))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e5f7a4f))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 43925801;
        result[1] += 9761289;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 4601750;
        result[1] += 49085340;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3df4f8b6))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e133482))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3ea13166))) ) ) {
        result[0] += 52692885;
        result[1] += 994205;
      } else {
        result[0] += 33038209;
        result[1] += 20648881;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3cea7efa))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5651272;
        result[1] += 48035818;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f75c2e3))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d1ff2e5))) ) ) {
        result[0] += 38347922;
        result[1] += 15339168;
      } else {
        result[0] += 5410327;
        result[1] += 48276764;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x3e7d8d7a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5965232;
        result[1] += 47721858;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f581d2a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 32212254;
        result[1] += 21474836;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3f6aa455))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 11271323;
        result[1] += 42415768;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3a9154))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 34164512;
        result[1] += 19522578;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f7416f0))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 17895697;
        result[1] += 35791394;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x3f7e4ece))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f754270))) ) ) {
        result[0] += 8511368;
        result[1] += 45175723;
      } else {
        result[0] += 37167986;
        result[1] += 16519104;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3e1f1173))) ) ) {
        result[0] += 50331647;
        result[1] += 3355443;
      } else {
        result[0] += 26843545;
        result[1] += 26843545;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3d03cf2d))) ) ) {
        result[0] += 2902004;
        result[1] += 50785086;
      } else {
        result[0] += 11053224;
        result[1] += 42633866;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3eba9542))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 35791394;
        result[1] += 17895697;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3e3c2657))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3c5a9004))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 17895697;
        result[1] += 35791394;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f60fe9c))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f53d9aa))) ) ) {
        result[0] += 28908433;
        result[1] += 24778657;
      } else {
        result[0] += 3877401;
        result[1] += 49809690;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cbd7b20))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
        result[0] += 12155567;
        result[1] += 41531523;
      } else {
        result[0] += 1309441;
        result[1] += 52377649;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 28908433;
        result[1] += 24778657;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e75b6c4))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3edc8a9c))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e805294))) ) ) {
        result[0] += 21474836;
        result[1] += 32212254;
      } else {
        result[0] += 52613349;
        result[1] += 1073741;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f5449ba))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 1412818;
        result[1] += 52274272;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc30d30))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5183581;
        result[1] += 48503509;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e5f2e49))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f4a0275))) ) ) {
        result[0] += 49557314;
        result[1] += 4129776;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f5936f8))) ) ) {
        result[0] += 7711957;
        result[1] += 45975133;
      } else {
        result[0] += 43925801;
        result[1] += 9761289;
      }
    }
  }
  if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f73736d))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ) ^ (0b1 << 31))>((int)(0x3d3c89f4))) ) ) {
        result[0] += 8134407;
        result[1] += 45552683;
      } else {
        result[0] += 50861454;
        result[1] += 2825636;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        result[0] += 44739242;
        result[1] += 8947848;
      } else {
        result[0] += 5129339;
        result[1] += 48557751;
      }
    }
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3df2085c))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3d557bc8))) ) ) {
        result[0] += 37580963;
        result[1] += 16106127;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d40dc33))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5195524;
        result[1] += 48491566;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e0e8145))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5965232;
        result[1] += 47721858;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
        result[0] += 45427538;
        result[1] += 8259552;
      } else {
        result[0] += 5070447;
        result[1] += 48616643;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d1d4413))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e702b41))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 37167986;
        result[1] += 16519104;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x3e16e829))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 2236962;
        result[1] += 51450129;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f2f0110))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f44d5a6))) ) ) {
        result[0] += 26843545;
        result[1] += 26843545;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cfe7c07))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 7158278;
        result[1] += 46528812;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f705e0c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e5ebee0))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 42182714;
        result[1] += 11504376;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f4fa9d2))) ) ) {
        result[0] += 2928386;
        result[1] += 50758704;
      } else {
        result[0] += 45634027;
        result[1] += 8053063;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3c39cb68))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3eb14af5))) ) ) {
        result[0] += 51622203;
        result[1] += 2064888;
      } else {
        result[0] += 8053063;
        result[1] += 45634027;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 3105864;
        result[1] += 50581226;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f75b61c))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 46976204;
        result[1] += 6710886;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
        result[0] += 48318382;
        result[1] += 5368709;
      } else {
        result[0] += 6710886;
        result[1] += 46976204;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3eaaaae3))) ) ) {
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
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3e0906cd))) ) ) {
        result[0] += 34959036;
        result[1] += 18728055;
      } else {
        result[0] += 6035826;
        result[1] += 47651264;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d63c750))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f314de8))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f0c1f21))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 40265318;
        result[1] += 13421772;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3e3afe1e))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 3158064;
        result[1] += 50529027;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3ebbd46b))) ) ) {
        result[0] += 26843545;
        result[1] += 26843545;
      } else {
        result[0] += 51002736;
        result[1] += 2684354;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
        result[0] += 39045157;
        result[1] += 14641933;
      } else {
        result[0] += 7394030;
        result[1] += 46293060;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e419a42))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ed342ee))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f3dfc3b))) ) ) {
        result[0] += 48716064;
        result[1] += 4971026;
      } else {
        result[0] += 12632256;
        result[1] += 41054834;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f2c2364))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 3579139;
        result[1] += 50107951;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3df2085c))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ee99652))) ) ) {
        result[0] += 50331647;
        result[1] += 3355443;
      } else {
        result[0] += 6316128;
        result[1] += 47370962;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f74c34c))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f1b59de))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        result[0] += 5404740;
        result[1] += 48282350;
      } else {
        result[0] += 37580963;
        result[1] += 16106127;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f34f377))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f678b04))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 35791394;
        result[1] += 17895697;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f267fa2))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 7758250;
        result[1] += 45928841;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3e66bce8))) ) ) {
        result[0] += 38347922;
        result[1] += 15339168;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 4502788;
        result[1] += 49184302;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ) ^ (0b1 << 31))>((int)(0x3d98c543))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3f60a2dc))) ) ) {
        result[0] += 43925801;
        result[1] += 9761289;
      } else {
        result[0] += 13421772;
        result[1] += 40265318;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3c2c710d))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 45634027;
        result[1] += 8053063;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ) ^ (0b1 << 31))>((int)(0x3f5d9ddc))) ) ) {
      result[0] += 0;
      result[1] += 53687091;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3de602c9))) ) ) {
        result[0] += 47721858;
        result[1] += 5965232;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x3f63d85a))) ) ) {
        result[0] += 7941877;
        result[1] += 45745213;
      } else {
        result[0] += 48806446;
        result[1] += 4880644;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f1db328))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3b05b185))) ) ) {
        result[0] += 40265318;
        result[1] += 13421772;
      } else {
        result[0] += 51130563;
        result[1] += 2556528;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x3f529c24))) ) ) {
        result[0] += 6242685;
        result[1] += 47444406;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f3b9097))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e900496))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 2113665;
        result[1] += 51573426;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f750b0f))) ) ) {
        result[0] += 26843545;
        result[1] += 26843545;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e664064))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3da0663d))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f125754))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
        result[0] += 46017506;
        result[1] += 7669584;
      } else {
        result[0] += 3812101;
        result[1] += 49874990;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6d013a))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f545d10))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3ed4de7f))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f7209fe))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 7793287;
        result[1] += 45893803;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3dc00a7c))) ) ) {
        result[0] += 41756626;
        result[1] += 11930464;
      } else {
        result[0] += 4654950;
        result[1] += 49032141;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f563f68))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3c4f95d5))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 48318382;
        result[1] += 5368709;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 14641933;
        result[1] += 39045157;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3dc31f8a))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x3e06d71f))) ) ) {
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
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f691aca))) ) ) {
        result[0] += 1032444;
        result[1] += 52654647;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f38e8a8))) ) ) {
        result[0] += 22713769;
        result[1] += 30973321;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3ee00347))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3ed236e3))) ) ) {
        result[0] += 38347922;
        result[1] += 15339168;
      } else {
        result[0] += 51495781;
        result[1] += 2191309;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f2378ab))) ) ) {
        result[0] += 2236962;
        result[1] += 51450129;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f4ba5e4))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        result[0] += 4323792;
        result[1] += 49363298;
      } else {
        result[0] += 44739242;
        result[1] += 8947848;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ef5ec))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3f12af79))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 6525502;
        result[1] += 47161588;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f27bc2c))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 34164512;
        result[1] += 19522578;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3da8c155))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3eae5365))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e1b9629))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 35791394;
        result[1] += 17895697;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3e0baf10))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 9256395;
        result[1] += 44430696;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f395960))) ) ) {
        result[0] += 5293093;
        result[1] += 48393997;
      } else {
        result[0] += 37167986;
        result[1] += 16519104;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ) ^ (0b1 << 31))>((int)(0x3de0370d))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e7fdf3b))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3daba9d2))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 23488102;
        result[1] += 30198988;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3dc67382))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 10737418;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3f795f9a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5131854;
        result[1] += 48555236;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e193c8a))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ) ^ (0b1 << 31))>((int)(0x3e26f2a6))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3cea7efa))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 13421772;
        result[1] += 40265318;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f5a3540))) ) ) {
        result[0] += 3885250;
        result[1] += 49801841;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3d7b44e5))) ) ) {
        result[0] += 51246768;
        result[1] += 2440322;
      } else {
        result[0] += 28633115;
        result[1] += 25053975;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f4d6d5d))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5237764;
        result[1] += 48449326;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f705436))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3ec1a21f))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 17256565;
        result[1] += 36430526;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e86afcd))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f381ecd))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3da28241))) ) ) {
        result[0] += 35791394;
        result[1] += 17895697;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f6d9503))) ) ) {
        result[0] += 1412818;
        result[1] += 52274272;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3eda5a46))) ) ) {
        result[0] += 28256363;
        result[1] += 25430727;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3ee412ae))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3edbc01a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 25053975;
        result[1] += 28633115;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f7b8d50))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
        result[0] += 6519146;
        result[1] += 47167944;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3e8f8fef))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 12526987;
        result[1] += 41160103;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3c3630a9))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e455da2))) ) ) {
        result[0] += 24066627;
        result[1] += 29620464;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e67b741))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 7523031;
        result[1] += 46164059;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f4e7b0c))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ) ^ (0b1 << 31))>((int)(0x3edca384))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7337ca))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f04e704))) ) ) {
        result[0] += 46017506;
        result[1] += 7669584;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3e5ebd90))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 42949672;
        result[1] += 10737418;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3903126f))) ) ) {
        result[0] += 28334853;
        result[1] += 25352237;
      } else {
        result[0] += 3501332;
        result[1] += 50185759;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e44dd2f))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3efebe38))) ) ) {
        result[0] += 52108059;
        result[1] += 1579032;
      } else {
        result[0] += 3579139;
        result[1] += 50107951;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f09797d))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 2640348;
        result[1] += 51046742;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f563f68))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3d9158b8))) ) ) {
        result[0] += 13421772;
        result[1] += 40265318;
      } else {
        result[0] += 50331647;
        result[1] += 3355443;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x3f662196))) ) ) {
        result[0] += 7158278;
        result[1] += 46528812;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3f000000))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3f439f56))) ) ) {
        result[0] += 26843545;
        result[1] += 26843545;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3a956c0d))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 9842633;
        result[1] += 43844457;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 4353007;
        result[1] += 49334083;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3d85b6c4))) ) ) {
        result[0] += 35791394;
        result[1] += 17895697;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3becfe))) ) ) {
        result[0] += 50704475;
        result[1] += 2982616;
      } else {
        result[0] += 7158278;
        result[1] += 46528812;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e4ce5b4))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f493f29))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 3526889;
        result[1] += 50160201;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3df6e04c))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3becfe))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3ce516db))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 43460978;
        result[1] += 10226112;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f366278))) ) ) {
        result[0] += 6710886;
        result[1] += 46976204;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x3f75f602))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3e900496))) ) ) {
        result[0] += 36507222;
        result[1] += 17179869;
      } else {
        result[0] += 3579139;
        result[1] += 50107951;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ) ^ (0b1 << 31))>((int)(0x3e9b1854))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4ea359))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 6907111;
        result[1] += 46779980;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3efc7cd9))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3f79d7dc))) ) ) {
        result[0] += 32212254;
        result[1] += 21474836;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ) ^ (0b1 << 31))>((int)(0x3f784285))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5113056;
        result[1] += 48574034;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3d706a2b))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ebc5e0b))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3d36262d))) ) ) {
        result[0] += 26843545;
        result[1] += 26843545;
      } else {
        result[0] += 52568610;
        result[1] += 1118481;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3eb10d5a))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 1917396;
        result[1] += 51769695;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3ea921ac))) ) ) {
        result[0] += 22513941;
        result[1] += 31173149;
      } else {
        result[0] += 3253763;
        result[1] += 50433328;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3df9db23))) ) ) {
        result[0] += 30344877;
        result[1] += 23342213;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb098b3))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3ebaa844))) ) ) {
        result[0] += 43620761;
        result[1] += 10066329;
      } else {
        result[0] += 7669584;
        result[1] += 46017506;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f0481c3))) ) ) {
        result[0] += 44739242;
        result[1] += 8947848;
      } else {
        result[0] += 4400581;
        result[1] += 49286509;
      }
    }
  } else {
    result[0] += 53687091;
    result[1] += 0;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a7e4799))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3e6f5ad9))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e7fdf3b))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3dfb8e4c))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 34738706;
        result[1] += 18948385;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x3f5d590c))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ) ^ (0b1 << 31))>((int)(0x3ee1d9d4))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 6357681;
        result[1] += 47329409;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e1861a6))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 42949672;
        result[1] += 10737418;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
        result[0] += 49852298;
        result[1] += 3834792;
      } else {
        result[0] += 5070447;
        result[1] += 48616643;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f189eed))) ) ) {
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
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3ee94467))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3eb6e8d1))) ) ) {
        result[0] += 4737096;
        result[1] += 48949994;
      } else {
        result[0] += 41518017;
        result[1] += 12169074;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f6fc750))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 4751070;
        result[1] += 48936021;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7e7d56))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e9a23e2))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e42d8c2))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 13828493;
        result[1] += 39858598;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3eda3444))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 1563701;
        result[1] += 52123389;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3d3a2f06))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3ebb588e))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 11930464;
        result[1] += 41756626;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f7b3333))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 40265318;
        result[1] += 13421772;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed5273e))) ) ) {
        result[0] += 51130563;
        result[1] += 2556528;
      } else {
        result[0] += 8739759;
        result[1] += 44947332;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f765700))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 6224590;
        result[1] += 47462500;
      }
    }
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e5754f4))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3ec762b6))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x39ebedfa))) ) ) {
        result[0] += 31471743;
        result[1] += 22215348;
      } else {
        result[0] += 52408827;
        result[1] += 1278264;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3eaf7f8c))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 3463683;
        result[1] += 50223407;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f776b3c))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 2684354;
        result[1] += 51002736;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f0cb589))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 28422577;
        result[1] += 25264513;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3da8c155))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ) ^ (0b1 << 31))>((int)(0x3cca6ca0))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3eb8ec96))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 16661511;
        result[1] += 37025580;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3e49c77a))) ) ) {
        result[0] += 39681763;
        result[1] += 14005328;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7ea2b2))) ) ) {
        result[0] += 5368709;
        result[1] += 48318382;
      } else {
        result[0] += 33554431;
        result[1] += 20132659;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 32679098;
        result[1] += 21007992;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3da809d4))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x3e5fec56))) ) ) {
        result[0] += 52344913;
        result[1] += 1342177;
      } else {
        result[0] += 11811160;
        result[1] += 41875931;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f661576))) ) ) {
        result[0] += 48806446;
        result[1] += 4880644;
      } else {
        result[0] += 6009749;
        result[1] += 47677342;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3f37dd44))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed96c61))) ) ) {
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
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d250720))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3bdd590c))) ) ) {
        result[0] += 51002736;
        result[1] += 2684354;
      } else {
        result[0] += 0;
        result[1] += 53687091;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f644816))) ) ) {
        result[0] += 6947741;
        result[1] += 46739349;
      } else {
        result[0] += 47721858;
        result[1] += 5965232;
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3f27bc2c))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3e400000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
      } else {
        result[0] += 40265318;
        result[1] += 13421772;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0cc4f0))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3ed950da))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3daf6168))) ) ) {
        result[0] += 51002736;
        result[1] += 2684354;
      } else {
        result[0] += 30198988;
        result[1] += 23488102;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf84231))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5127418;
        result[1] += 48559672;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e87a97e))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3c835159))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3cc13554))) ) ) {
        result[0] += 47721858;
        result[1] += 5965232;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x3d3d1244))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 5459704;
        result[1] += 48227386;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f4b8ab1))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f536018))) ) ) {
        result[0] += 3896643;
        result[1] += 49790447;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f66f640))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x3d63c750))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3df90c0b))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 20878313;
        result[1] += 32808777;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f3d4de8))) ) ) {
        result[0] += 24992266;
        result[1] += 28694824;
      } else {
        result[0] += 4006499;
        result[1] += 49680591;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3efe3c75))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ) ^ (0b1 << 31))>((int)(0x3f7745e0))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 17895697;
        result[1] += 35791394;
      }
    } else {
      result[0] += 53687091;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0df948))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3e95475a))) ) ) {
        result[0] += 19418735;
        result[1] += 34268356;
      } else {
        result[0] += 2182402;
        result[1] += 51504689;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3cabf338))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3f7d6a16))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f7ea2b2))) ) ) {
        result[0] += 4158859;
        result[1] += 49528232;
      } else {
        result[0] += 29283867;
        result[1] += 24403223;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 22605091;
        result[1] += 31082000;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3e00b0f2))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ) ^ (0b1 << 31))>((int)(0x3e1d64d8))) ) ) {
        result[0] += 3834792;
        result[1] += 49852298;
      } else {
        result[0] += 42633866;
        result[1] += 11053224;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3d454de8))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 3329432;
        result[1] += 50357659;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3c4f95d5))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f4394d9))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 38347922;
        result[1] += 15339168;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
      } else {
        result[0] += 13421772;
        result[1] += 40265318;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3f6c74a7))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
        result[0] += 49710269;
        result[1] += 3976821;
      } else {
        result[0] += 6533349;
        result[1] += 47153741;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3e0fc8f3))) ) ) {
        result[0] += 35791394;
        result[1] += 17895697;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7c2070))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3f3164d8))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ) ^ (0b1 << 31))>((int)(0x3ddabc94))) ) ) {
        result[0] += 7491222;
        result[1] += 46195869;
      } else {
        result[0] += 27211265;
        result[1] += 26475825;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3f7da661))) ) ) {
        result[0] += 1579032;
        result[1] += 52108059;
      } else {
        result[0] += 53687091;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f55c62a))) ) ) {
      result[0] += 53687091;
      result[1] += 0;
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x3deacd9f))) ) ) {
        result[0] += 21007992;
        result[1] += 32679098;
      } else {
        result[0] += 46017506;
        result[1] += 7669584;
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
