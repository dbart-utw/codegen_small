
#include "header.h"


static const int32_t num_class[] = {  7, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 7;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44628000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        result[0] += 429121661;
        result[1] += 0;
        result[2] += 330942;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 44125;
      } else {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 316739672;
        result[1] += 283309;
        result[2] += 2347418;
        result[3] += 97417888;
        result[4] += 12222767;
        result[5] += 121418;
        result[6] += 364254;
      } else {
        result[0] += 39856145;
        result[1] += 3309355;
        result[2] += 1294965;
        result[3] += 178992941;
        result[4] += 206043322;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 554368;
        result[2] += 2078880;
        result[3] += 426863480;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9409943;
        result[3] += 0;
        result[4] += 419414646;
        result[5] += 672138;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 429107111;
        result[1] += 0;
        result[2] += 343780;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 45837;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 6566240;
        result[1] += 3552228;
        result[2] += 5166877;
        result[3] += 413565522;
        result[4] += 0;
        result[5] += 645859;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 243087372;
        result[1] += 0;
        result[2] += 747731;
        result[3] += 185362533;
        result[4] += 0;
        result[5] += 0;
        result[6] += 299092;
      } else {
        result[0] += 416555372;
        result[1] += 86854;
        result[2] += 3561044;
        result[3] += 8598620;
        result[4] += 0;
        result[5] += 86854;
        result[6] += 607983;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 33971492;
        result[1] += 1668242;
        result[2] += 3488144;
        result[3] += 390368849;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 197716597;
        result[1] += 0;
        result[2] += 370255;
        result[3] += 231409875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 429149187;
        result[1] += 0;
        result[2] += 347541;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 314109548;
        result[1] += 0;
        result[2] += 0;
        result[3] += 115387181;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 429120440;
        result[1] += 0;
        result[2] += 376289;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 297797590;
        result[1] += 608837;
        result[2] += 2701715;
        result[3] += 128084166;
        result[4] += 0;
        result[5] += 0;
        result[6] += 304418;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 2162622;
        result[1] += 1585922;
        result[2] += 3171845;
        result[3] += 294837466;
        result[4] += 127738872;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 424297011;
        result[1] += 0;
        result[2] += 5199718;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 8421504;
        result[1] += 8421504;
        result[2] += 0;
        result[3] += 412653720;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 509486;
        result[1] += 6113832;
        result[2] += 0;
        result[3] += 1018972;
        result[4] += 421854438;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 429236339;
        result[1] += 0;
        result[2] += 244115;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 16274;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 349129362;
        result[1] += 665886;
        result[2] += 2407435;
        result[3] += 73964612;
        result[4] += 2356213;
        result[5] += 307332;
        result[6] += 665886;
      } else {
        result[0] += 0;
        result[1] += 362037;
        result[2] += 3137655;
        result[3] += 351658743;
        result[4] += 73976256;
        result[5] += 362037;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 428639;
        result[1] += 285759;
        result[2] += 2286077;
        result[3] += 417066185;
        result[4] += 8715668;
        result[5] += 714399;
        result[6] += 0;
      } else {
        result[0] += 229144074;
        result[1] += 0;
        result[2] += 5045918;
        result[3] += 0;
        result[4] += 195306736;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 129243052;
        result[4] += 300253676;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 4239527;
        result[2] += 0;
        result[3] += 0;
        result[4] += 425257202;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 428520459;
        result[1] += 154963;
        result[2] += 743824;
        result[3] += 46489;
        result[4] += 0;
        result[5] += 0;
        result[6] += 30992;
      } else {
        result[0] += 124692598;
        result[1] += 9591738;
        result[2] += 0;
        result[3] += 295212392;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 349362440;
        result[1] += 0;
        result[2] += 2075420;
        result[3] += 77251760;
        result[4] += 0;
        result[5] += 0;
        result[6] += 807107;
      } else {
        result[0] += 231514900;
        result[1] += 0;
        result[2] += 1286640;
        result[3] += 196695188;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 571139;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 428354450;
        result[5] += 571139;
        result[6] += 0;
      } else {
        result[0] += 52927879;
        result[1] += 144611;
        result[2] += 3036845;
        result[3] += 372953557;
        result[4] += 0;
        result[5] += 433835;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 117621510;
        result[4] += 311875218;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 4843948;
        result[2] += 0;
        result[3] += 0;
        result[4] += 424652781;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 48753682;
        result[1] += 8125613;
        result[2] += 0;
        result[3] += 372617432;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 429265052;
        result[1] += 0;
        result[2] += 231677;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 299718773;
        result[1] += 507402;
        result[2] += 3005384;
        result[3] += 125640673;
        result[4] += 0;
        result[5] += 117092;
        result[6] += 507402;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429325068;
        result[5] += 171661;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1946948;
        result[2] += 2855523;
        result[3] += 424175071;
        result[4] += 0;
        result[5] += 519186;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 429300552;
        result[1] += 0;
        result[2] += 152582;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 43594;
      } else {
        result[0] += 311301893;
        result[1] += 0;
        result[2] += 0;
        result[3] += 118194836;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 334015787;
        result[1] += 0;
        result[2] += 2546158;
        result[3] += 91929721;
        result[4] += 0;
        result[5] += 134008;
        result[6] += 871054;
      } else {
        result[0] += 345629061;
        result[1] += 1259640;
        result[2] += 1909777;
        result[3] += 80698250;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 427299815;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2196914;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 197469;
        result[2] += 3258251;
        result[3] += 268065200;
        result[4] += 157877073;
        result[5] += 98734;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43460000))) ) ) {
        result[0] += 0;
        result[1] += 5461808;
        result[2] += 0;
        result[3] += 0;
        result[4] += 424034921;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 429496729;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 428510197;
        result[1] += 0;
        result[2] += 907609;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 78922;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 215973271;
        result[1] += 1558971;
        result[2] += 3452008;
        result[3] += 208345444;
        result[4] += 0;
        result[5] += 111355;
        result[6] += 55677;
      } else {
        result[0] += 414645528;
        result[1] += 0;
        result[2] += 3762304;
        result[3] += 10593856;
        result[4] += 0;
        result[5] += 0;
        result[6] += 495040;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d7b000))) ) ) {
        result[0] += 429301036;
        result[1] += 0;
        result[2] += 195692;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 357913941;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 71582788;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += 23860929;
        result[1] += 0;
        result[2] += 0;
        result[3] += 278377509;
        result[4] += 127258290;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 266437035;
        result[1] += 1706835;
        result[2] += 1763730;
        result[3] += 154980671;
        result[4] += 4323983;
        result[5] += 113789;
        result[6] += 170683;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 188514899;
        result[1] += 0;
        result[2] += 4825182;
        result[3] += 199829121;
        result[4] += 35495597;
        result[5] += 221847;
        result[6] += 610080;
      } else {
        result[0] += 0;
        result[1] += 2611644;
        result[2] += 0;
        result[3] += 36563016;
        result[4] += 390322069;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 286331153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 429267943;
        result[1] += 0;
        result[2] += 228786;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 4107983;
        result[2] += 3116401;
        result[3] += 408673504;
        result[4] += 13315531;
        result[5] += 283309;
        result[6] += 0;
      } else {
        result[0] += 428567887;
        result[1] += 92884;
        result[2] += 650189;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 185768;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 128604181;
        result[1] += 2319514;
        result[2] += 3221547;
        result[3] += 77703728;
        result[4] += 217647757;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 160483436;
        result[1] += 0;
        result[2] += 4553700;
        result[3] += 219405558;
        result[4] += 44778052;
        result[5] += 0;
        result[6] += 275981;
      }
    }
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  result[2] += 0;
  result[3] += 0;
  result[4] += 0;
  result[5] += 0;
  result[6] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
