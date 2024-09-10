
#include "header.h"


static const int32_t num_class[] = {  6, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 36;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 1127288;
          result[1] += 1127288;
          result[2] += 0;
          result[3] += 1127288;
          result[4] += 276185560;
          result[5] += 6763728;
        } else {
          result[0] += 0;
          result[1] += 250539758;
          result[2] += 0;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 8097600;
          result[1] += 323904;
          result[2] += 323904;
          result[3] += 13280064;
          result[4] += 14575680;
          result[5] += 249729998;
        } else {
          result[0] += 39972155;
          result[1] += 815758;
          result[2] += 815758;
          result[3] += 103601300;
          result[4] += 38340638;
          result[5] += 102785542;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 78090314;
          result[2] += 0;
          result[3] += 0;
          result[4] += 208240838;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 285646150;
          result[2] += 0;
          result[3] += 0;
          result[4] += 685002;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
          result[0] += 39172340;
          result[1] += 24249543;
          result[2] += 23316869;
          result[3] += 46633738;
          result[4] += 35441641;
          result[5] += 117517020;
        } else {
          result[0] += 221568413;
          result[1] += 7762657;
          result[2] += 12420251;
          result[3] += 12420251;
          result[4] += 26393034;
          result[5] += 5766545;
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 66076419;
          result[4] += 11012736;
          result[5] += 209241996;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 42562738;
          result[3] += 203140345;
          result[4] += 5804009;
          result[5] += 34824059;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 200431807;
          result[5] += 85899345;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 176203786;
          result[3] += 74886609;
          result[4] += 0;
          result[5] += 35240757;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          result[0] += 0;
          result[1] += 45552683;
          result[2] += 32537631;
          result[3] += 0;
          result[4] += 84597840;
          result[5] += 123642997;
        } else {
          result[0] += 257698037;
          result[1] += 0;
          result[2] += 28633115;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 222352397;
          result[3] += 49295106;
          result[4] += 0;
          result[5] += 14683648;
        } else {
          result[0] += 1797997;
          result[1] += 0;
          result[2] += 276891664;
          result[3] += 7641490;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 4979672;
          result[2] += 0;
          result[3] += 0;
          result[4] += 272637054;
          result[5] += 8714426;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 16281575;
          result[1] += 1122867;
          result[2] += 1122867;
          result[3] += 17965876;
          result[4] += 18808026;
          result[5] += 231029940;
        } else {
          result[0] += 0;
          result[1] += 9873488;
          result[2] += 1410498;
          result[3] += 194648764;
          result[4] += 9873488;
          result[5] += 70524914;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 45210182;
          result[2] += 0;
          result[3] += 30140121;
          result[4] += 210980849;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 283489156;
          result[2] += 0;
          result[3] += 710499;
          result[4] += 1420998;
          result[5] += 710499;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 224602077;
          result[1] += 11261385;
          result[2] += 208544;
          result[3] += 5422148;
          result[4] += 31281626;
          result[5] += 13555371;
        } else {
          result[0] += 46482330;
          result[1] += 1859293;
          result[2] += 86767016;
          result[3] += 79949607;
          result[4] += 8056937;
          result[5] += 63215968;
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 52060209;
          result[3] += 0;
          result[4] += 234270943;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 11453246;
          result[2] += 11453246;
          result[3] += 22906492;
          result[4] += 22906492;
          result[5] += 217611676;
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 108396793;
          result[3] += 153391689;
          result[4] += 0;
          result[5] += 24542670;
        } else {
          result[0] += 7341824;
          result[1] += 0;
          result[2] += 271647504;
          result[3] += 0;
          result[4] += 0;
          result[5] += 7341824;
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42eb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26030104;
          result[3] += 0;
          result[4] += 0;
          result[5] += 260301048;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          result[0] += 150700606;
          result[1] += 15070060;
          result[2] += 120560485;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 348759;
          result[1] += 0;
          result[2] += 269939479;
          result[3] += 13252842;
          result[4] += 697518;
          result[5] += 2092554;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 4110016;
          result[2] += 0;
          result[3] += 1370005;
          result[4] += 265781070;
          result[5] += 15070060;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3195660;
          result[1] += 0;
          result[2] += 0;
          result[3] += 11504376;
          result[4] += 16297866;
          result[5] += 255333249;
        } else {
          result[0] += 15123124;
          result[1] += 16131332;
          result[2] += 14114915;
          result[3] += 121993202;
          result[4] += 9073874;
          result[5] += 109894703;
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 31814572;
          result[2] += 0;
          result[3] += 0;
          result[4] += 254516580;
          result[5] += 0;
        } else {
          result[0] += 1275417;
          result[1] += 281229484;
          result[2] += 1275417;
          result[3] += 637708;
          result[4] += 1913125;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 216468854;
          result[1] += 7716134;
          result[2] += 2085441;
          result[3] += 10844297;
          result[4] += 37120863;
          result[5] += 12095562;
        } else {
          result[0] += 37489278;
          result[1] += 5976551;
          result[2] += 66828713;
          result[3] += 78781816;
          result[4] += 13583071;
          result[5] += 83671722;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 79536431;
          result[2] += 0;
          result[3] += 0;
          result[4] += 190887435;
          result[5] += 15907286;
        } else {
          result[0] += 0;
          result[1] += 5506368;
          result[2] += 88101893;
          result[3] += 27531841;
          result[4] += 5506368;
          result[5] += 159684681;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 71582788;
          result[3] += 189694388;
          result[4] += 3579139;
          result[5] += 21474836;
        } else {
          result[0] += 0;
          result[1] += 12449180;
          result[2] += 199186889;
          result[3] += 41497268;
          result[4] += 0;
          result[5] += 33197814;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426c0000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 286331153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 4360372;
          result[1] += 0;
          result[2] += 220925559;
          result[3] += 53777932;
          result[4] += 0;
          result[5] += 7267288;
        } else {
          result[0] += 1792370;
          result[1] += 0;
          result[2] += 276025023;
          result[3] += 7169481;
          result[4] += 0;
          result[5] += 1344277;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 1272582;
          result[1] += 5090331;
          result[2] += 0;
          result[3] += 3817748;
          result[4] += 257061746;
          result[5] += 19088743;
        } else {
          result[0] += 0;
          result[1] += 196341362;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8180890;
          result[5] += 81808900;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 1775697;
          result[1] += 0;
          result[2] += 0;
          result[3] += 5327091;
          result[4] += 14649500;
          result[5] += 264578863;
        } else {
          result[0] += 18673770;
          result[1] += 5266961;
          result[2] += 1915258;
          result[3] += 87144263;
          result[4] += 30644136;
          result[5] += 142686761;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 24112097;
          result[2] += 0;
          result[3] += 0;
          result[4] += 256191031;
          result[5] += 6028024;
        } else {
          result[0] += 0;
          result[1] += 282547040;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3784112;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 245562937;
          result[1] += 5960265;
          result[2] += 953642;
          result[3] += 5960265;
          result[4] += 22649008;
          result[5] += 5245033;
        } else {
          result[0] += 50419181;
          result[1] += 7469508;
          result[2] += 63490820;
          result[3] += 65358197;
          result[4] += 21786065;
          result[5] += 77807378;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 26430567;
          result[3] += 224659827;
          result[4] += 0;
          result[5] += 35240757;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 204522252;
          result[3] += 81808900;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 235802126;
          result[3] += 50529027;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 154178313;
          result[3] += 128481927;
          result[4] += 0;
          result[5] += 3670912;
        } else {
          result[0] += 1514979;
          result[1] += 0;
          result[2] += 234821845;
          result[3] += 43934409;
          result[4] += 0;
          result[5] += 6059918;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 6882960;
          result[1] += 0;
          result[2] += 253292943;
          result[3] += 23402065;
          result[4] += 0;
          result[5] += 2753184;
        } else {
          result[0] += 1045004;
          result[1] += 0;
          result[2] += 282673638;
          result[3] += 2612510;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42be0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 9624576;
          result[1] += 0;
          result[2] += 4812288;
          result[3] += 0;
          result[4] += 226177549;
          result[5] += 45716738;
        } else {
          result[0] += 183955768;
          result[1] += 18128974;
          result[2] += 533205;
          result[3] += 4265641;
          result[4] += 76781538;
          result[5] += 2666025;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 2670445;
          result[1] += 593432;
          result[2] += 1186864;
          result[3] += 15132527;
          result[4] += 26704459;
          result[5] += 240043422;
        } else {
          result[0] += 33442877;
          result[1] += 9394066;
          result[2] += 9394066;
          result[3] += 103334733;
          result[4] += 31939826;
          result[5] += 98825581;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 204522252;
          result[2] += 0;
          result[3] += 0;
          result[4] += 81808900;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42640000))) ) ) {
          result[0] += 122713351;
          result[1] += 163617801;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 280460009;
          result[1] += 0;
          result[2] += 903252;
          result[3] += 451626;
          result[4] += 3613011;
          result[5] += 903252;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42da0000))) ) ) {
          result[0] += 45812984;
          result[1] += 0;
          result[2] += 137438953;
          result[3] += 91625968;
          result[4] += 0;
          result[5] += 11453246;
        } else {
          result[0] += 263424660;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 22906492;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 139463018;
          result[3] += 113545112;
          result[4] += 0;
          result[5] += 33323022;
        } else {
          result[0] += 30056861;
          result[1] += 0;
          result[2] += 230963250;
          result[3] += 20565220;
          result[4] += 4745820;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 242837813;
          result[3] += 36244449;
          result[4] += 0;
          result[5] += 7248889;
        } else {
          result[0] += 1937943;
          result[1] += 0;
          result[2] += 276641435;
          result[3] += 6782802;
          result[4] += 0;
          result[5] += 968971;
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 3029959;
          result[2] += 0;
          result[3] += 0;
          result[4] += 283301193;
          result[5] += 0;
        } else {
          result[0] += 161744315;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 93986561;
          result[5] += 30600275;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          result[0] += 0;
          result[1] += 1493252;
          result[2] += 1119939;
          result[3] += 5599696;
          result[4] += 12319332;
          result[5] += 265798932;
        } else {
          result[0] += 1871445;
          result[1] += 3275029;
          result[2] += 4210752;
          result[3] += 92636549;
          result[4] += 28539543;
          result[5] += 155797833;
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
          result[0] += 1475933;
          result[1] += 281903351;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2951867;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 127258290;
          result[2] += 0;
          result[3] += 0;
          result[4] += 152709948;
          result[5] += 6362914;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
          result[0] += 221365261;
          result[1] += 16624268;
          result[2] += 1312442;
          result[3] += 7655913;
          result[4] += 30623652;
          result[5] += 8749615;
        } else {
          result[0] += 46033947;
          result[1] += 5524073;
          result[2] += 97591968;
          result[3] += 80099068;
          result[4] += 16572221;
          result[5] += 40509873;
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 40904450;
          result[3] += 0;
          result[4] += 0;
          result[5] += 245426702;
        } else {
          result[0] += 0;
          result[1] += 8180890;
          result[2] += 16361780;
          result[3] += 130894241;
          result[4] += 0;
          result[5] += 130894241;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 39493952;
          result[2] += 88861392;
          result[3] += 148102320;
          result[4] += 0;
          result[5] += 9873488;
        } else {
          result[0] += 0;
          result[1] += 7158278;
          result[2] += 200431807;
          result[3] += 14316557;
          result[4] += 7158278;
          result[5] += 57266230;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 93708377;
          result[3] += 166592670;
          result[4] += 0;
          result[5] += 26030104;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 264305679;
          result[3] += 22025473;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          result[0] += 23860929;
          result[1] += 0;
          result[2] += 178956970;
          result[3] += 83513252;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 339254;
          result[1] += 0;
          result[2] += 271743191;
          result[3] += 13230941;
          result[4] += 0;
          result[5] += 1017764;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
          result[0] += 0;
          result[1] += 9873488;
          result[2] += 0;
          result[3] += 0;
          result[4] += 271520920;
          result[5] += 4936744;
        } else {
          result[0] += 0;
          result[1] += 55418932;
          result[2] += 0;
          result[3] += 120074354;
          result[4] += 46182444;
          result[5] += 64655421;
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
          result[0] += 1156115;
          result[1] += 0;
          result[2] += 1156115;
          result[3] += 13102636;
          result[4] += 11561150;
          result[5] += 259355135;
        } else {
          result[0] += 24624479;
          result[1] += 572662;
          result[2] += 0;
          result[3] += 81318047;
          result[4] += 30923764;
          result[5] += 148892199;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 150700606;
          result[2] += 0;
          result[3] += 30140121;
          result[4] += 105490424;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 285005545;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1325607;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          result[0] += 208423377;
          result[1] += 13051560;
          result[2] += 6224590;
          result[3] += 13653939;
          result[4] += 33331676;
          result[5] += 11646007;
        } else {
          result[0] += 27889398;
          result[1] += 1859293;
          result[2] += 89246073;
          result[3] += 92964660;
          result[4] += 16733638;
          result[5] += 57638089;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42bf0000))) ) ) {
          result[0] += 0;
          result[1] += 9873488;
          result[2] += 9873488;
          result[3] += 9873488;
          result[4] += 118481856;
          result[5] += 138228832;
        } else {
          result[0] += 0;
          result[1] += 286331153;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 33686018;
          result[3] += 252645135;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 195082763;
          result[3] += 56636931;
          result[4] += 0;
          result[5] += 34611458;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 57266230;
          result[1] += 0;
          result[2] += 200431807;
          result[3] += 28633115;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 163617801;
          result[1] += 122713351;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 254159113;
          result[3] += 31099638;
          result[4] += 0;
          result[5] += 1072401;
        } else {
          result[0] += 544355;
          result[1] += 0;
          result[2] += 279254527;
          result[3] += 5443558;
          result[4] += 0;
          result[5] += 1088711;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427e0000))) ) ) {
          result[0] += 5614336;
          result[1] += 4210752;
          result[2] += 0;
          result[3] += 2807168;
          result[4] += 265277391;
          result[5] += 8421504;
        } else {
          result[0] += 101356160;
          result[1] += 2533904;
          result[2] += 0;
          result[3] += 20271232;
          result[4] += 78551024;
          result[5] += 83618832;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 605351;
          result[2] += 908026;
          result[3] += 13620403;
          result[4] += 27240807;
          result[5] += 243956563;
        } else {
          result[0] += 0;
          result[1] += 1131743;
          result[2] += 11317436;
          result[3] += 140336217;
          result[4] += 6790462;
          result[5] += 126755293;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 48806446;
          result[2] += 0;
          result[3] += 0;
          result[4] += 237524706;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 283278582;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3052570;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 90623327;
          result[1] += 12533013;
          result[2] += 29886416;
          result[3] += 60736911;
          result[4] += 26030104;
          result[5] += 66521378;
        } else {
          result[0] += 239289320;
          result[1] += 5040196;
          result[2] += 12480486;
          result[3] += 11040430;
          result[4] += 13440523;
          result[5] += 5040196;
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 286331153;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 8676701;
          result[5] += 277654451;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 6049249;
          result[2] += 44361164;
          result[3] += 191559574;
          result[4] += 0;
          result[5] += 44361164;
        } else {
          result[0] += 8878485;
          result[1] += 0;
          result[2] += 122079173;
          result[3] += 51051290;
          result[4] += 39953184;
          result[5] += 64369018;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 190887435;
          result[3] += 0;
          result[4] += 0;
          result[5] += 95443717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 286331153;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 3777455;
          result[1] += 0;
          result[2] += 237224227;
          result[3] += 40041031;
          result[4] += 0;
          result[5] += 5288438;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 274253916;
          result[3] += 11070800;
          result[4] += 0;
          result[5] += 1006436;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42910000))) ) ) {
          result[0] += 1015358;
          result[1] += 1015358;
          result[2] += 0;
          result[3] += 0;
          result[4] += 282269718;
          result[5] += 2030717;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 6658864;
          result[1] += 0;
          result[2] += 0;
          result[3] += 6658864;
          result[4] += 173130464;
          result[5] += 99882960;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 76354974;
          result[4] += 38177487;
          result[5] += 171798691;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
          result[0] += 0;
          result[1] += 5843492;
          result[2] += 0;
          result[3] += 35060957;
          result[4] += 175304787;
          result[5] += 70121915;
        } else {
          result[0] += 10933886;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8883782;
          result[4] += 8542098;
          result[5] += 257971384;
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 5883516;
          result[2] += 9805861;
          result[3] += 58835168;
          result[4] += 15689378;
          result[5] += 196117228;
        } else {
          result[0] += 1547735;
          result[1] += 0;
          result[2] += 3095471;
          result[3] += 185728315;
          result[4] += 4643207;
          result[5] += 91316421;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
          result[0] += 0;
          result[1] += 86886694;
          result[2] += 5924092;
          result[3] += 0;
          result[4] += 191545667;
          result[5] += 1974697;
        } else {
          result[0] += 0;
          result[1] += 283530848;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2800304;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          result[0] += 243787793;
          result[1] += 10516336;
          result[2] += 0;
          result[3] += 3585114;
          result[4] += 23183741;
          result[5] += 5258168;
        } else {
          result[0] += 75940001;
          result[1] += 6224590;
          result[2] += 49796722;
          result[3] += 95858690;
          result[4] += 11204262;
          result[5] += 47306886;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 27012372;
          result[2] += 27012372;
          result[3] += 124256915;
          result[4] += 2701237;
          result[5] += 105348254;
        } else {
          result[0] += 1599615;
          result[1] += 0;
          result[2] += 153563076;
          result[3] += 103974999;
          result[4] += 0;
          result[5] += 27193461;
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 39898603;
          result[1] += 4693953;
          result[2] += 147859529;
          result[3] += 63368369;
          result[4] += 11734883;
          result[5] += 18775813;
        } else {
          result[0] += 11126010;
          result[1] += 0;
          result[2] += 257207184;
          result[3] += 16034544;
          result[4] += 0;
          result[5] += 1963413;
        }
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 10661266;
          result[1] += 3046076;
          result[2] += 761519;
          result[3] += 2284557;
          result[4] += 242924568;
          result[5] += 26653165;
        } else {
          result[0] += 2834961;
          result[1] += 178602600;
          result[2] += 0;
          result[3] += 2834961;
          result[4] += 102058628;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
          result[0] += 544355;
          result[1] += 0;
          result[2] += 272177;
          result[3] += 25856900;
          result[4] += 15514140;
          result[5] += 244143578;
        } else {
          result[0] += 127358651;
          result[1] += 5118432;
          result[2] += 4817348;
          result[3] += 56904929;
          result[4] += 31312765;
          result[5] += 60819025;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 35791394;
          result[1] += 214748364;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 284986875;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1344277;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 286331153;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 283357387;
          result[1] += 0;
          result[2] += 849647;
          result[3] += 0;
          result[4] += 2124118;
          result[5] += 0;
        } else {
          result[0] += 143165576;
          result[1] += 0;
          result[2] += 143165576;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 26030104;
          result[1] += 0;
          result[2] += 86767016;
          result[3] += 130150524;
          result[4] += 0;
          result[5] += 43383508;
        } else {
          result[0] += 234270943;
          result[1] += 0;
          result[2] += 39045157;
          result[3] += 0;
          result[4] += 13015052;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 5174659;
          result[1] += 0;
          result[2] += 103493187;
          result[3] += 106942960;
          result[4] += 8624432;
          result[5] += 62095912;
        } else {
          result[0] += 21474836;
          result[1] += 0;
          result[2] += 250539758;
          result[3] += 7158278;
          result[4] += 0;
          result[5] += 7158278;
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 200431807;
          result[3] += 75673233;
          result[4] += 0;
          result[5] += 10226112;
        } else {
          result[0] += 5493163;
          result[1] += 0;
          result[2] += 264701821;
          result[3] += 12359618;
          result[4] += 0;
          result[5] += 3776549;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 2447274;
          result[1] += 2447274;
          result[2] += 0;
          result[3] += 0;
          result[4] += 274094778;
          result[5] += 7341824;
        } else {
          result[0] += 0;
          result[1] += 271261092;
          result[2] += 0;
          result[3] += 0;
          result[4] += 15070060;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 9324960;
          result[1] += 2468372;
          result[2] += 822790;
          result[3] += 16455813;
          result[4] += 15358759;
          result[5] += 241900456;
        } else {
          result[0] += 3639802;
          result[1] += 0;
          result[2] += 0;
          result[3] += 166217660;
          result[4] += 9706140;
          result[5] += 106767548;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0;
          result[1] += 71582788;
          result[2] += 0;
          result[3] += 0;
          result[4] += 214748364;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 282417743;
          result[2] += 0;
          result[3] += 0;
          result[4] += 3913409;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 227059490;
          result[1] += 8467380;
          result[2] += 1336954;
          result[3] += 6907599;
          result[4] += 36097779;
          result[5] += 6461948;
        } else {
          result[0] += 47960468;
          result[1] += 5726623;
          result[2] += 57266230;
          result[3] += 73014444;
          result[4] += 15748213;
          result[5] += 86615173;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 16843009;
          result[2] += 0;
          result[3] += 67372036;
          result[4] += 25264513;
          result[5] += 176851594;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 41358944;
          result[3] += 222702007;
          result[4] += 0;
          result[5] += 22270200;
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 117600294;
          result[3] += 61356675;
          result[4] += 0;
          result[5] += 107374182;
        } else {
          result[0] += 36837926;
          result[1] += 8372255;
          result[2] += 187538532;
          result[3] += 46884633;
          result[4] += 0;
          result[5] += 6697804;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 190887435;
          result[3] += 61356675;
          result[4] += 0;
          result[5] += 34087042;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 249385197;
          result[3] += 36945955;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 240012878;
          result[3] += 33686018;
          result[4] += 0;
          result[5] += 12632256;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 281181312;
          result[3] += 5149840;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 4388216;
          result[1] += 2194108;
          result[2] += 2194108;
          result[3] += 0;
          result[4] += 267681231;
          result[5] += 9873488;
        } else {
          result[0] += 0;
          result[1] += 190887435;
          result[2] += 0;
          result[3] += 40904450;
          result[4] += 54539267;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 382284;
          result[3] += 5351984;
          result[4] += 15291383;
          result[5] += 265305500;
        } else {
          result[0] += 24003809;
          result[1] += 14859500;
          result[2] += 10287346;
          result[3] += 75440543;
          result[4] += 16574058;
          result[5] += 145165893;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 15248404;
          result[1] += 83019091;
          result[2] += 6777068;
          result[3] += 20331206;
          result[4] += 155872580;
          result[5] += 5082801;
        } else {
          result[0] += 0;
          result[1] += 281712908;
          result[2] += 0;
          result[3] += 659749;
          result[4] += 3958495;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          result[0] += 243902743;
          result[1] += 4364064;
          result[2] += 727344;
          result[3] += 7030993;
          result[4] += 22305221;
          result[5] += 8000785;
        } else {
          result[0] += 87746643;
          result[1] += 4618244;
          result[2] += 66194836;
          result[3] += 70813080;
          result[4] += 15394148;
          result[5] += 41564199;
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 38177487;
          result[3] += 0;
          result[4] += 248153665;
          result[5] += 0;
        } else {
          result[0] += 3869339;
          result[1] += 0;
          result[2] += 7738679;
          result[3] += 11608019;
          result[4] += 19346699;
          result[5] += 243768414;
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 36384621;
          result[3] += 192996688;
          result[4] += 1581940;
          result[5] += 55367902;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 177722784;
          result[3] += 54304184;
          result[4] += 0;
          result[5] += 54304184;
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 150252981;
          result[3] += 119068400;
          result[4] += 0;
          result[5] += 17009771;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 237245812;
          result[3] += 49085340;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 122713351;
          result[1] += 8180890;
          result[2] += 57266230;
          result[3] += 49085340;
          result[4] += 16361780;
          result[5] += 32723560;
        } else {
          result[0] += 724888;
          result[1] += 0;
          result[2] += 273283151;
          result[3] += 10148445;
          result[4] += 0;
          result[5] += 2174666;
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 1213267;
          result[2] += 4853070;
          result[3] += 0;
          result[4] += 269345406;
          result[5] += 10919408;
        } else {
          result[0] += 0;
          result[1] += 250539758;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 203613264;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 76354974;
          result[5] += 6362914;
        } else {
          result[0] += 7158278;
          result[1] += 7158278;
          result[2] += 0;
          result[3] += 0;
          result[4] += 35791394;
          result[5] += 236223201;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 8841579;
          result[4] += 20063584;
          result[5] += 257425989;
        } else {
          result[0] += 4338350;
          result[1] += 0;
          result[2] += 28922338;
          result[3] += 76644197;
          result[4] += 18799520;
          result[5] += 157626745;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 1664716;
          result[1] += 3329432;
          result[2] += 6658864;
          result[3] += 204760068;
          result[4] += 0;
          result[5] += 69918072;
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 284204931;
          result[2] += 0;
          result[3] += 0;
          result[4] += 2126221;
          result[5] += 0;
        } else {
          result[0] += 7953643;
          result[1] += 74234002;
          result[2] += 0;
          result[3] += 0;
          result[4] += 198841078;
          result[5] += 5302428;
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 250105547;
          result[1] += 5954893;
          result[2] += 0;
          result[3] += 9180461;
          result[4] += 12157908;
          result[5] += 8932340;
        } else {
          result[0] += 74927778;
          result[1] += 28097916;
          result[2] += 42815873;
          result[3] += 57533829;
          result[4] += 42815873;
          result[5] += 40139881;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0;
          result[1] += 2386092;
          result[2] += 42949672;
          result[3] += 132428158;
          result[4] += 8351325;
          result[5] += 100215903;
        } else {
          result[0] += 47295770;
          result[1] += 17895697;
          result[2] += 154669953;
          result[3] += 38347922;
          result[4] += 15339168;
          result[5] += 12782640;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 6362914;
          result[1] += 9544371;
          result[2] += 133621204;
          result[3] += 54084773;
          result[4] += 0;
          result[5] += 82717888;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 264439329;
          result[3] += 18764420;
          result[4] += 0;
          result[5] += 3127403;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0;
          result[1] += 1357019;
          result[2] += 0;
          result[3] += 0;
          result[4] += 284974133;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 222702007;
          result[5] += 63629145;
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 8370567;
          result[1] += 288640;
          result[2] += 0;
          result[3] += 17029776;
          result[4] += 15297934;
          result[5] += 245344233;
        } else {
          result[0] += 17650550;
          result[1] += 2614896;
          result[2] += 6537240;
          result[3] += 120285233;
          result[4] += 15689378;
          result[5] += 123553853;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 23860929;
          result[1] += 54539267;
          result[2] += 0;
          result[3] += 0;
          result[4] += 207930956;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 272891119;
          result[2] += 0;
          result[3] += 0;
          result[4] += 13440033;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 247999309;
          result[1] += 4116171;
          result[2] += 1286303;
          result[3] += 8232342;
          result[4] += 19294552;
          result[5] += 5402474;
        } else {
          result[0] += 76463432;
          result[1] += 7320966;
          result[2] += 54500531;
          result[3] += 70769347;
          result[4] += 17082256;
          result[5] += 60194617;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 286331153;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 19746976;
          result[3] += 167849296;
          result[4] += 0;
          result[5] += 98734880;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 245426702;
          result[3] += 0;
          result[4] += 0;
          result[5] += 40904450;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 111026365;
          result[3] += 81808900;
          result[4] += 0;
          result[5] += 93495886;
        } else {
          result[0] += 8947848;
          result[1] += 0;
          result[2] += 227051656;
          result[3] += 45857723;
          result[4] += 0;
          result[5] += 4473924;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 286331153;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 276076869;
          result[3] += 7099119;
          result[4] += 0;
          result[5] += 3155164;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0;
          result[1] += 1295616;
          result[2] += 0;
          result[3] += 0;
          result[4] += 260418831;
          result[5] += 24616705;
        } else {
          result[0] += 112956326;
          result[1] += 5253782;
          result[2] += 0;
          result[3] += 0;
          result[4] += 52537826;
          result[5] += 115583217;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 91105366;
          result[2] += 0;
          result[3] += 13015052;
          result[4] += 153577618;
          result[5] += 28633115;
        } else {
          result[0] += 2063647;
          result[1] += 1289779;
          result[2] += 1289779;
          result[3] += 40499091;
          result[4] += 9544371;
          result[5] += 231644482;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          result[0] += 7040929;
          result[1] += 68062323;
          result[2] += 0;
          result[3] += 0;
          result[4] += 211227899;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 275726295;
          result[2] += 0;
          result[3] += 0;
          result[4] += 10604857;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          result[0] += 245628367;
          result[1] += 4234971;
          result[2] += 1176381;
          result[3] += 8469943;
          result[4] += 20939583;
          result[5] += 5881905;
        } else {
          result[0] += 57734346;
          result[1] += 3900969;
          result[2] += 31987948;
          result[3] += 70997642;
          result[4] += 31987948;
          result[5] += 89722295;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d60000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 14316557;
          result[3] += 229064922;
          result[4] += 0;
          result[5] += 42949672;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 286331153;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 286331153;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 250539758;
          result[3] += 35791394;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 72719022;
          result[3] += 122713351;
          result[4] += 0;
          result[5] += 90898778;
        } else {
          result[0] += 4273599;
          result[1] += 0;
          result[2] += 224363963;
          result[3] += 47009592;
          result[4] += 0;
          result[5] += 10683998;
        }
      } else {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
          result[0] += 52060209;
          result[1] += 0;
          result[2] += 52060209;
          result[3] += 0;
          result[4] += 0;
          result[5] += 182210733;
        } else {
          result[0] += 3550893;
          result[1] += 0;
          result[2] += 265348599;
          result[3] += 15494808;
          result[4] += 0;
          result[5] += 1936851;
        }
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
