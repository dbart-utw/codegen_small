
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
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 416042615;
        result[1] += 0;
        result[2] += 13454114;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 22143603;
        result[1] += 1188918;
        result[2] += 148614;
        result[3] += 287569609;
        result[4] += 118445983;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 12389328;
        result[1] += 41297762;
        result[2] += 0;
        result[3] += 375809638;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 297197610;
        result[1] += 0;
        result[2] += 4618244;
        result[3] += 115456110;
        result[4] += 11681441;
        result[5] += 362215;
        result[6] += 181107;
      } else {
        result[0] += 421789695;
        result[1] += 384477;
        result[2] += 419430;
        result[3] += 6763315;
        result[4] += 69905;
        result[5] += 17476;
        result[6] += 52428;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 161097573;
        result[1] += 0;
        result[2] += 2686169;
        result[3] += 216345546;
        result[4] += 48641448;
        result[5] += 217797;
        result[6] += 508194;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 428688645;
        result[1] += 0;
        result[2] += 808084;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 429445916;
        result[1] += 0;
        result[2] += 50812;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 223661951;
        result[1] += 756503;
        result[2] += 2532642;
        result[3] += 202052259;
        result[4] += 197348;
        result[5] += 164457;
        result[6] += 131565;
      } else {
        result[0] += 251565688;
        result[1] += 0;
        result[2] += 8594580;
        result[3] += 232285;
        result[4] += 167013601;
        result[5] += 232285;
        result[6] += 1858287;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1090093;
        result[1] += 5450466;
        result[2] += 0;
        result[3] += 422956170;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 343597383;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 85899345;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 429266515;
        result[1] += 0;
        result[2] += 197326;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 32887;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 2606169;
        result[1] += 1042467;
        result[2] += 5386083;
        result[3] += 303358126;
        result[4] += 116408903;
        result[5] += 694978;
        result[6] += 0;
      } else {
        result[0] += 5792826;
        result[1] += 3206743;
        result[2] += 3930846;
        result[3] += 235643918;
        result[4] += 180198290;
        result[5] += 724103;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 308551974;
        result[1] += 0;
        result[2] += 2793474;
        result[3] += 117579888;
        result[4] += 0;
        result[5] += 63488;
        result[6] += 507904;
      } else {
        result[0] += 330796527;
        result[1] += 0;
        result[2] += 215502;
        result[3] += 98376947;
        result[4] += 0;
        result[5] += 0;
        result[6] += 107751;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 427175125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2321603;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 453534;
        result[1] += 113383;
        result[2] += 2607820;
        result[3] += 344459098;
        result[4] += 80955824;
        result[5] += 907068;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 30180851;
        result[2] += 0;
        result[3] += 399315878;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 180423831;
        result[1] += 12321627;
        result[2] += 0;
        result[3] += 236751270;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 428078780;
        result[1] += 220569;
        result[2] += 1024074;
        result[3] += 110284;
        result[4] += 0;
        result[5] += 0;
        result[6] += 63019;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 175377188;
        result[1] += 0;
        result[2] += 4241752;
        result[3] += 249492174;
        result[4] += 0;
        result[5] += 77122;
        result[6] += 308491;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1033686;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 428463043;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 132847;
        result[1] += 664238;
        result[2] += 3454041;
        result[3] += 424049972;
        result[4] += 0;
        result[5] += 1195629;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 427941492;
        result[1] += 345608;
        result[2] += 1005405;
        result[3] += 109966;
        result[4] += 0;
        result[5] += 0;
        result[6] += 94256;
      } else {
        result[0] += 150323855;
        result[1] += 8403196;
        result[2] += 0;
        result[3] += 270769677;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 429496729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 175846967;
        result[1] += 0;
        result[2] += 3637122;
        result[3] += 249854503;
        result[4] += 0;
        result[5] += 0;
        result[6] += 158135;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 62292199;
        result[1] += 159723;
        result[2] += 0;
        result[3] += 365767017;
        result[4] += 638894;
        result[5] += 638894;
        result[6] += 0;
      } else {
        result[0] += 873848;
        result[1] += 0;
        result[2] += 10049262;
        result[3] += 0;
        result[4] += 414204373;
        result[5] += 4369244;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 425488317;
        result[1] += 137693;
        result[2] += 1132146;
        result[3] += 2646775;
        result[4] += 0;
        result[5] += 0;
        result[6] += 91795;
      } else {
        result[0] += 281321343;
        result[1] += 0;
        result[2] += 1872519;
        result[3] += 145711545;
        result[4] += 0;
        result[5] += 98553;
        result[6] += 492768;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 106776552;
        result[1] += 0;
        result[2] += 7171559;
        result[3] += 174507947;
        result[4] += 141040669;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 38523561;
        result[1] += 2732167;
        result[2] += 0;
        result[3] += 258463044;
        result[4] += 129777955;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f70000))) ) ) {
        result[0] += 0;
        result[1] += 2667681;
        result[2] += 0;
        result[3] += 88922718;
        result[4] += 337906329;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 2895483;
        result[1] += 6756128;
        result[2] += 0;
        result[3] += 8686450;
        result[4] += 411158666;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 156782452;
        result[1] += 1291719;
        result[2] += 1937579;
        result[3] += 269162048;
        result[4] += 322929;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1308111;
        result[1] += 0;
        result[2] += 1744149;
        result[3] += 72818227;
        result[4] += 353626241;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 2902004;
        result[1] += 11608019;
        result[2] += 0;
        result[3] += 105923179;
        result[4] += 309063524;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 1323564;
        result[2] += 0;
        result[3] += 23824163;
        result[4] += 404349001;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 82624814;
        result[1] += 0;
        result[2] += 0;
        result[3] += 77674940;
        result[4] += 269196974;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4994148;
        result[3] += 382052323;
        result[4] += 41340447;
        result[5] += 1109810;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 380951512;
        result[1] += 230540;
        result[2] += 889227;
        result[3] += 47277245;
        result[4] += 0;
        result[5] += 65868;
        result[6] += 82335;
      } else {
        result[0] += 423700723;
        result[1] += 0;
        result[2] += 1269198;
        result[3] += 4230661;
        result[4] += 0;
        result[5] += 0;
        result[6] += 296146;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 429075280;
        result[1] += 0;
        result[2] += 361242;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 60207;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 429496729;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 214748364;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 214748364;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 359888941;
        result[1] += 2106666;
        result[2] += 1404444;
        result[3] += 65921120;
        result[4] += 0;
        result[5] += 87777;
        result[6] += 87777;
      } else {
        result[0] += 70976154;
        result[1] += 1158119;
        result[2] += 2647129;
        result[3] += 339163442;
        result[4] += 15220993;
        result[5] += 330891;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 552496;
        result[1] += 483434;
        result[2] += 3660287;
        result[3] += 263609746;
        result[4] += 160776392;
        result[5] += 414372;
        result[6] += 0;
      } else {
        result[0] += 423654892;
        result[1] += 0;
        result[2] += 3772853;
        result[3] += 1217049;
        result[4] += 0;
        result[5] += 0;
        result[6] += 851934;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 422576649;
        result[1] += 82137;
        result[2] += 205343;
        result[3] += 6488858;
        result[4] += 102671;
        result[5] += 0;
        result[6] += 41068;
      } else {
        result[0] += 17482906;
        result[1] += 0;
        result[2] += 5244871;
        result[3] += 0;
        result[4] += 406768951;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 3975458;
        result[1] += 1914109;
        result[2] += 8539873;
        result[3] += 373251357;
        result[4] += 40343539;
        result[5] += 1472391;
        result[6] += 0;
      } else {
        result[0] += 359904232;
        result[1] += 0;
        result[2] += 1272703;
        result[3] += 68049005;
        result[4] += 0;
        result[5] += 27078;
        result[6] += 243709;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 4210752;
        result[1] += 19650177;
        result[2] += 0;
        result[3] += 46318274;
        result[4] += 359317525;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 73399610;
        result[1] += 3270279;
        result[2] += 0;
        result[3] += 352826839;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 105566536;
        result[1] += 0;
        result[2] += 10122818;
        result[3] += 313807374;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9700471;
        result[4] += 419796258;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
        result[0] += 712857;
        result[1] += 356428;
        result[2] += 1782144;
        result[3] += 376210620;
        result[4] += 49008962;
        result[5] += 1425715;
        result[6] += 0;
      } else {
        result[0] += 102399785;
        result[1] += 0;
        result[2] += 7764912;
        result[3] += 0;
        result[4] += 319332031;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 423102722;
        result[1] += 195581;
        result[2] += 1007996;
        result[3] += 5100160;
        result[4] += 0;
        result[5] += 0;
        result[6] += 90268;
      } else {
        result[0] += 281572325;
        result[1] += 0;
        result[2] += 1803345;
        result[3] += 145620129;
        result[4] += 0;
        result[5] += 150278;
        result[6] += 350650;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 429496729;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 5933185;
        result[2] += 0;
        result[3] += 423563543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 413935253;
        result[1] += 0;
        result[2] += 15561475;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
