
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
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11659317;
        result[1] += 0;
        result[2] += 813440;
        result[3] += 0;
        result[4] += 36198114;
        result[5] += 5016218;
      } else {
        result[0] += 199580;
        result[1] += 478992;
        result[2] += 399160;
        result[3] += 10737418;
        result[4] += 2434879;
        result[5] += 39437060;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 47965553;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5721537;
        result[5] += 0;
      } else {
        result[0] += 38208098;
        result[1] += 906264;
        result[2] += 3516305;
        result[3] += 3008797;
        result[4] += 4676323;
        result[5] += 3371302;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20621531;
        result[3] += 28799035;
        result[4] += 0;
        result[5] += 4266523;
      } else {
        result[0] += 778073;
        result[1] += 0;
        result[2] += 43053416;
        result[3] += 8040095;
        result[4] += 0;
        result[5] += 1815505;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42980000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 789516;
        result[1] += 0;
        result[2] += 50844833;
        result[3] += 1894838;
        result[4] += 0;
        result[5] += 157903;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 255652;
        result[1] += 511305;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52153174;
        result[5] += 766958;
      } else {
        result[0] += 14060904;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1278264;
        result[4] += 19813093;
        result[5] += 18534829;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 114106;
        result[2] += 57053;
        result[3] += 2738555;
        result[4] += 3309087;
        result[5] += 47468288;
      } else {
        result[0] += 0;
        result[1] += 528936;
        result[2] += 528936;
        result[3] += 24860032;
        result[4] += 4231494;
        result[5] += 23537690;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 34495778;
        result[1] += 2672208;
        result[2] += 1882692;
        result[3] += 4706730;
        result[4] += 6893082;
        result[5] += 3036600;
      } else {
        result[0] += 535532;
        result[1] += 53151559;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 1726273;
        result[1] += 3279918;
        result[2] += 17090102;
        result[3] += 16226966;
        result[4] += 1726273;
        result[5] += 13637556;
      } else {
        result[0] += 295633;
        result[1] += 0;
        result[2] += 46769261;
        result[3] += 4848393;
        result[4] += 0;
        result[5] += 1773802;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2556528;
        result[4] += 46607474;
        result[5] += 4523088;
      } else {
        result[0] += 2101941;
        result[1] += 262742;
        result[2] += 87580;
        result[3] += 8320185;
        result[4] += 2846379;
        result[5] += 40068261;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 371108;
        result[1] += 50965625;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2350356;
        result[5] += 0;
      } else {
        result[0] += 34114934;
        result[1] += 2332904;
        result[2] += 3363017;
        result[3] += 4635510;
        result[4] += 6180680;
        result[5] += 3060043;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 3253763;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6507526;
        result[5] += 43925801;
      } else {
        result[0] += 0;
        result[1] += 1385473;
        result[2] += 23206678;
        result[3] += 21128468;
        result[4] += 1385473;
        result[5] += 6580998;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 2038750;
        result[1] += 3397917;
        result[2] += 23785420;
        result[3] += 11552918;
        result[4] += 4077500;
        result[5] += 8834584;
      } else {
        result[0] += 440058;
        result[1] += 0;
        result[2] += 50103760;
        result[3] += 3080406;
        result[4] += 0;
        result[5] += 62865;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 454975;
        result[1] += 3488144;
        result[2] += 0;
        result[3] += 2123218;
        result[4] += 42767682;
        result[5] += 4853070;
      } else {
        result[0] += 6016000;
        result[1] += 342683;
        result[2] += 152303;
        result[3] += 5939848;
        result[4] += 3350683;
        result[5] += 37885571;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 115954;
        result[1] += 51020129;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2551006;
        result[5] += 0;
      } else {
        result[0] += 33541518;
        result[1] += 1652970;
        result[2] += 4029114;
        result[3] += 6921812;
        result[4] += 3168192;
        result[5] += 4373483;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4880644;
        result[3] += 6507526;
        result[4] += 3253763;
        result[5] += 39045157;
      } else {
        result[0] += 0;
        result[1] += 3579139;
        result[2] += 12526987;
        result[3] += 29527900;
        result[4] += 1789569;
        result[5] += 6263493;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 11422785;
        result[1] += 571139;
        result[2] += 25130127;
        result[3] += 10851646;
        result[4] += 0;
        result[5] += 5711392;
      } else {
        result[0] += 377634;
        result[1] += 0;
        result[2] += 48337263;
        result[3] += 4657496;
        result[4] += 0;
        result[5] += 314695;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 223696;
        result[1] += 52680458;
        result[2] += 0;
        result[3] += 111848;
        result[4] += 671088;
        result[5] += 0;
      } else {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 13421772;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        result[0] += 984000;
        result[1] += 354240;
        result[2] += 590400;
        result[3] += 6415686;
        result[4] += 11335690;
        result[5] += 34007072;
      } else {
        result[0] += 32988453;
        result[1] += 2618131;
        result[2] += 2125306;
        result[3] += 4189009;
        result[4] += 6529927;
        result[5] += 5236262;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1519445;
        result[3] += 15194459;
        result[4] += 2025927;
        result[5] += 34947257;
      } else {
        result[0] += 613566;
        result[1] += 3067833;
        result[2] += 21168053;
        result[3] += 21168053;
        result[4] += 306783;
        result[5] += 7362801;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17895697;
        result[3] += 23860929;
        result[4] += 0;
        result[5] += 11930464;
      } else {
        result[0] += 1606024;
        result[1] += 172074;
        result[2] += 47779216;
        result[3] += 3326764;
        result[4] += 344148;
        result[5] += 458864;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7145404;
        result[1] += 1738071;
        result[2] += 0;
        result[3] += 2317428;
        result[4] += 37078854;
        result[5] += 5407332;
      } else {
        result[0] += 387787;
        result[1] += 129262;
        result[2] += 301612;
        result[3] += 8358985;
        result[4] += 2843778;
        result[5] += 41665663;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 194871;
        result[1] += 45502489;
        result[2] += 0;
        result[3] += 487178;
        result[4] += 6917937;
        result[5] += 584614;
      } else {
        result[0] += 33432558;
        result[1] += 2012872;
        result[2] += 3176564;
        result[3] += 4183001;
        result[4] += 5818460;
        result[5] += 5063633;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15339168;
        result[3] += 23008753;
        result[4] += 0;
        result[5] += 15339168;
      } else {
        result[0] += 868254;
        result[1] += 0;
        result[2] += 41676232;
        result[3] += 9695512;
        result[4] += 144709;
        result[5] += 1302382;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 48133254;
        result[3] += 5024900;
        result[4] += 0;
        result[5] += 528936;
      } else {
        result[0] += 139085;
        result[1] += 0;
        result[2] += 53408919;
        result[3] += 139085;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 402150;
        result[1] += 0;
        result[2] += 1005376;
        result[3] += 0;
        result[4] += 47654833;
        result[5] += 4624730;
      } else {
        result[0] += 1907888;
        result[1] += 354955;
        result[2] += 88738;
        result[3] += 9273224;
        result[4] += 1996627;
        result[5] += 40065655;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
        result[0] += 463819;
        result[1] += 50788220;
        result[2] += 463819;
        result[3] += 695729;
        result[4] += 1275503;
        result[5] += 0;
      } else {
        result[0] += 32787367;
        result[1] += 2223374;
        result[2] += 3972429;
        result[3] += 4683909;
        result[4] += 6225449;
        result[5] += 3794559;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 1760232;
        result[2] += 880116;
        result[3] += 4400581;
        result[4] += 1760232;
        result[5] += 44885928;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23440842;
        result[3] += 17391592;
        result[4] += 0;
        result[5] += 12854655;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 4129776;
        result[1] += 37167986;
        result[2] += 2064888;
        result[3] += 0;
        result[4] += 0;
        result[5] += 10324440;
      } else {
        result[0] += 761103;
        result[1] += 0;
        result[2] += 46602971;
        result[3] += 5210633;
        result[4] += 0;
        result[5] += 1112382;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6689980;
        result[1] += 0;
        result[2] += 334499;
        result[3] += 0;
        result[4] += 40641629;
        result[5] += 6020982;
      } else {
        result[0] += 0;
        result[1] += 332869;
        result[2] += 142658;
        result[3] += 7893761;
        result[4] += 2139875;
        result[5] += 43177926;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 52050289;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1636801;
        result[5] += 0;
      } else {
        result[0] += 36074588;
        result[1] += 2156632;
        result[2] += 2189309;
        result[3] += 3332978;
        result[4] += 6012431;
        result[5] += 3921150;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 1154561;
        result[2] += 4040963;
        result[3] += 17895697;
        result[4] += 2886402;
        result[5] += 27709466;
      } else {
        result[0] += 3917083;
        result[1] += 1152083;
        result[2] += 26958753;
        result[3] += 13594585;
        result[4] += 2765000;
        result[5] += 5299584;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38865501;
        result[3] += 12845377;
        result[4] += 0;
        result[5] += 1976211;
      } else {
        result[0] += 285569;
        result[1] += 0;
        result[2] += 50188863;
        result[3] += 2998481;
        result[4] += 0;
        result[5] += 214177;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7381975;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41271951;
        result[5] += 5033164;
      } else {
        result[0] += 89181;
        result[1] += 222953;
        result[2] += 89181;
        result[3] += 8204671;
        result[4] += 1961986;
        result[5] += 43119117;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 52450061;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1237029;
        result[5] += 0;
      } else {
        result[0] += 35183287;
        result[1] += 1563701;
        result[2] += 2769055;
        result[3] += 4365333;
        result[4] += 6254806;
        result[5] += 3550905;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 2018311;
        result[1] += 403662;
        result[2] += 5247610;
        result[3] += 13724519;
        result[4] += 2825636;
        result[5] += 29467350;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29826161;
        result[3] += 15658734;
        result[4] += 0;
        result[5] += 8202194;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2720629;
        result[1] += 2176503;
        result[2] += 37544688;
        result[3] += 8887390;
        result[4] += 544125;
        result[5] += 1813753;
      } else {
        result[0] += 497871;
        result[1] += 0;
        result[2] += 50782843;
        result[3] += 2406376;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 636605;
        result[1] += 424403;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49443052;
        result[5] += 3183029;
      } else {
        result[0] += 2563816;
        result[1] += 76531;
        result[2] += 267861;
        result[3] += 8150641;
        result[4] += 4209251;
        result[5] += 38418987;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 43989422;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9397740;
        result[5] += 299927;
      } else {
        result[0] += 36711481;
        result[1] += 1863176;
        result[2] += 3657346;
        result[3] += 4864961;
        result[4] += 3450327;
        result[5] += 3139797;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 6927366;
        result[2] += 8659208;
        result[3] += 0;
        result[4] += 8659208;
        result[5] += 29441308;
      } else {
        result[0] += 0;
        result[1] += 2314098;
        result[2] += 19438429;
        result[3] += 22678167;
        result[4] += 0;
        result[5] += 9256395;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42be0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12389328;
        result[3] += 33038209;
        result[4] += 0;
        result[5] += 8259552;
      } else {
        result[0] += 409825;
        result[1] += 0;
        result[2] += 48827736;
        result[3] += 4215344;
        result[4] += 0;
        result[5] += 234185;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 387632;
        result[1] += 4845405;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47678788;
        result[5] += 775264;
      } else {
        result[0] += 1775478;
        result[1] += 676372;
        result[2] += 1225925;
        result[3] += 7059641;
        result[4] += 2409578;
        result[5] += 40540094;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 199209;
        result[1] += 43128961;
        result[2] += 99604;
        result[3] += 498024;
        result[4] += 9263264;
        result[5] += 498024;
      } else {
        result[0] += 35374193;
        result[1] += 922232;
        result[2] += 2733759;
        result[3] += 4413540;
        result[4] += 4874656;
        result[5] += 5368709;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6710886;
        result[3] += 3355443;
        result[4] += 5592405;
        result[5] += 38028356;
      } else {
        result[0] += 0;
        result[1] += 1301505;
        result[2] += 24077846;
        result[3] += 19522578;
        result[4] += 1301505;
        result[5] += 7483655;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 2191309;
        result[1] += 547827;
        result[2] += 35060957;
        result[3] += 13147859;
        result[4] += 0;
        result[5] += 2739137;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50864991;
        result[3] += 2351749;
        result[4] += 0;
        result[5] += 470349;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 479349;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50091973;
        result[5] += 3115768;
      } else {
        result[0] += 25466953;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2753184;
        result[4] += 10324440;
        result[5] += 15142512;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 540474;
        result[2] += 120105;
        result[3] += 3122739;
        result[4] += 2462159;
        result[5] += 47441613;
      } else {
        result[0] += 456911;
        result[1] += 228455;
        result[2] += 3655291;
        result[3] += 21474836;
        result[4] += 5711392;
        result[5] += 22160203;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 0;
        result[1] += 51124752;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2562338;
        result[5] += 0;
      } else {
        result[0] += 34569844;
        result[1] += 1404781;
        result[2] += 2229327;
        result[3] += 4305961;
        result[4] += 5924514;
        result[5] += 5252661;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 175448;
        result[1] += 1403584;
        result[2] += 21755553;
        result[3] += 19123833;
        result[4] += 2280824;
        result[5] += 8947848;
      } else {
        result[0] += 1506371;
        result[1] += 180764;
        result[2] += 47179564;
        result[3] += 4157586;
        result[4] += 421784;
        result[5] += 241019;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 220029;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53027004;
        result[5] += 440058;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40971727;
        result[5] += 12715363;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
        result[0] += 48359364;
        result[1] += 819650;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2868775;
        result[5] += 1639300;
      } else {
        result[0] += 507507;
        result[1] += 435006;
        result[2] += 1160018;
        result[3] += 9860154;
        result[4] += 3335052;
        result[5] += 38389351;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 39362417;
        result[1] += 3489863;
        result[2] += 1826091;
        result[3] += 1582612;
        result[4] += 5802913;
        result[5] += 1623192;
      } else {
        result[0] += 981226;
        result[1] += 52565689;
        result[2] += 140175;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26008413;
        result[3] += 15986822;
        result[4] += 0;
        result[5] += 11691855;
      } else {
        result[0] += 2038071;
        result[1] += 643601;
        result[2] += 46500207;
        result[3] += 3486174;
        result[4] += 268167;
        result[5] += 750868;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13039971;
        result[1] += 704863;
        result[2] += 0;
        result[3] += 352431;
        result[4] += 34420826;
        result[5] += 5168997;
      } else {
        result[0] += 52174;
        result[1] += 417392;
        result[2] += 104348;
        result[3] += 5634796;
        result[4] += 4852186;
        result[5] += 42626193;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 49085340;
        result[2] += 306783;
        result[3] += 102261;
        result[4] += 4192706;
        result[5] += 0;
      } else {
        result[0] += 33710499;
        result[1] += 1728743;
        result[2] += 2881239;
        result[3] += 7939414;
        result[4] += 2497074;
        result[5] += 4930120;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7734580;
        result[3] += 25478619;
        result[4] += 909950;
        result[5] += 19563940;
      } else {
        result[0] += 0;
        result[1] += 3273603;
        result[2] += 32081310;
        result[3] += 15713294;
        result[4] += 0;
        result[5] += 2618882;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1651910;
        result[1] += 4129776;
        result[2] += 24778657;
        result[3] += 9085507;
        result[4] += 825955;
        result[5] += 13215283;
      } else {
        result[0] += 491977;
        result[1] += 0;
        result[2] += 48459825;
        result[3] += 4120315;
        result[4] += 245988;
        result[5] += 368983;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 820903;
        result[1] += 2791072;
        result[2] += 0;
        result[3] += 985084;
        result[4] += 47284043;
        result[5] += 1805987;
      } else {
        result[0] += 5541098;
        result[1] += 41045;
        result[2] += 0;
        result[3] += 4925421;
        result[4] += 4720195;
        result[5] += 38459330;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 51409457;
        result[2] += 216917;
        result[3] += 433835;
        result[4] += 1626881;
        result[5] += 0;
      } else {
        result[0] += 36195246;
        result[1] += 2460973;
        result[2] += 2309529;
        result[3] += 4959808;
        result[4] += 4354030;
        result[5] += 3407502;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 745654;
        result[3] += 20505486;
        result[4] += 1118481;
        result[5] += 31317469;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33126077;
        result[3] += 15991899;
        result[4] += 0;
        result[5] += 4569114;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 2334221;
        result[1] += 3209554;
        result[2] += 24217546;
        result[3] += 16631327;
        result[4] += 1750666;
        result[5] += 5543775;
      } else {
        result[0] += 653995;
        result[1] += 416179;
        result[2] += 48395672;
        result[3] += 3626702;
        result[4] += 0;
        result[5] += 594541;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 12052204;
        result[1] += 1339133;
        result[2] += 243478;
        result[3] += 730436;
        result[4] += 35182696;
        result[5] += 4139140;
      } else {
        result[0] += 760171;
        result[1] += 332574;
        result[2] += 617639;
        result[3] += 5273687;
        result[4] += 5226177;
        result[5] += 41476841;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 484759;
        result[1] += 51990433;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1211898;
        result[5] += 0;
      } else {
        result[0] += 36638822;
        result[1] += 1869327;
        result[2] += 2280579;
        result[3] += 4785478;
        result[4] += 3589109;
        result[5] += 4523773;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 3080406;
        result[2] += 0;
        result[3] += 14961976;
        result[4] += 6600871;
        result[5] += 29043836;
      } else {
        result[0] += 725501;
        result[1] += 241833;
        result[2] += 21765036;
        result[3] += 27085379;
        result[4] += 483667;
        result[5] += 3385672;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 32212254;
        result[1] += 5010795;
        result[2] += 8589934;
        result[3] += 2147483;
        result[4] += 0;
        result[5] += 5726623;
      } else {
        result[0] += 448794;
        result[1] += 280496;
        result[2] += 48189353;
        result[3] += 3422061;
        result[4] += 0;
        result[5] += 1346384;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42850000))) ) ) {
        result[0] += 766958;
        result[1] += 511305;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51386215;
        result[5] += 1022611;
      } else {
        result[0] += 17699041;
        result[1] += 1769904;
        result[2] += 0;
        result[3] += 3539808;
        result[4] += 22418785;
        result[5] += 8259552;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 107374;
        result[1] += 107374;
        result[2] += 161061;
        result[3] += 3543348;
        result[4] += 3543348;
        result[5] += 46224585;
      } else {
        result[0] += 612400;
        result[1] += 1633067;
        result[2] += 408266;
        result[3] += 25924945;
        result[4] += 1020667;
        result[5] += 24087744;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 289678;
        result[1] += 44610496;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8690356;
        result[5] += 96559;
      } else {
        result[0] += 40809568;
        result[1] += 1328340;
        result[2] += 811763;
        result[3] += 3320851;
        result[4] += 3911224;
        result[5] += 3505342;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17966994;
        result[3] += 22672636;
        result[4] += 0;
        result[5] += 13047460;
      } else {
        result[0] += 1127428;
        result[1] += 0;
        result[2] += 47083578;
        result[3] += 4778151;
        result[4] += 107374;
        result[5] += 590558;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 198107;
        result[1] += 2773502;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45762797;
        result[5] += 4952683;
      } else {
        result[0] += 2069664;
        result[1] += 248359;
        result[2] += 993438;
        result[3] += 9023736;
        result[4] += 3849575;
        result[5] += 37502316;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 32592500;
        result[1] += 1931407;
        result[2] += 3832636;
        result[3] += 4526736;
        result[4] += 6216717;
        result[5] += 4587092;
      } else {
        result[0] += 399655;
        result[1] += 53287435;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1988410;
        result[4] += 7953643;
        result[5] += 43745037;
      } else {
        result[0] += 1376592;
        result[1] += 2294320;
        result[2] += 20648881;
        result[3] += 18813425;
        result[4] += 917728;
        result[5] += 9636144;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 2917776;
        result[1] += 5251998;
        result[2] += 23342213;
        result[3] += 11671106;
        result[4] += 0;
        result[5] += 10503996;
      } else {
        result[0] += 319566;
        result[1] += 0;
        result[2] += 50171864;
        result[3] += 3195660;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 211366;
        result[1] += 1268199;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51150693;
        result[5] += 1056832;
      } else {
        result[0] += 801299;
        result[1] += 4006499;
        result[2] += 0;
        result[3] += 3205199;
        result[4] += 24038996;
        result[5] += 21635096;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 679583;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2310583;
        result[4] += 1698958;
        result[5] += 48997965;
      } else {
        result[0] += 4339370;
        result[1] += 807324;
        result[2] += 302746;
        result[3] += 18265720;
        result[4] += 3330214;
        result[5] += 26641714;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 97259;
        result[1] += 47267982;
        result[2] += 0;
        result[3] += 97259;
        result[4] += 5738294;
        result[5] += 486296;
      } else {
        result[0] += 40364153;
        result[1] += 1739493;
        result[2] += 1660425;
        result[3] += 2727841;
        result[4] += 5099878;
        result[5] += 2095298;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4935025;
        result[1] += 1196369;
        result[2] += 21983293;
        result[3] += 15253713;
        result[4] += 1046823;
        result[5] += 9271865;
      } else {
        result[0] += 234954;
        result[1] += 234954;
        result[2] += 47402059;
        result[3] += 5051520;
        result[4] += 0;
        result[5] += 763601;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 26714799;
        result[1] += 3798007;
        result[2] += 193119;
        result[3] += 0;
        result[4] += 20985601;
        result[5] += 1995563;
      } else {
        result[0] += 3609697;
        result[1] += 1432419;
        result[2] += 1976739;
        result[3] += 11000983;
        result[4] += 4784281;
        result[5] += 30882969;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42900000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 52770929;
        result[1] += 0;
        result[2] += 549697;
        result[3] += 183232;
        result[4] += 183232;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 3663686;
        result[1] += 0;
        result[2] += 37623237;
        result[3] += 10850147;
        result[4] += 140911;
        result[5] += 1409110;
      } else {
        result[0] += 470251;
        result[1] += 0;
        result[2] += 50630453;
        result[3] += 2351259;
        result[4] += 0;
        result[5] += 235125;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 555383;
        result[1] += 2591790;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48873765;
        result[5] += 1666151;
      } else {
        result[0] += 2229815;
        result[1] += 857621;
        result[2] += 42881;
        result[3] += 7847234;
        result[4] += 2144053;
        result[5] += 40565485;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 50568339;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3118752;
        result[5] += 0;
      } else {
        result[0] += 33389630;
        result[1] += 1563701;
        result[2] += 2759473;
        result[3] += 4875069;
        result[4] += 6561414;
        result[5] += 4537800;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11632203;
        result[3] += 35791394;
        result[4] += 0;
        result[5] += 6263493;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30949029;
        result[3] += 12632256;
        result[4] += 0;
        result[5] += 10105805;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 7669584;
        result[1] += 0;
        result[2] += 34218146;
        result[3] += 7079616;
        result[4] += 1179936;
        result[5] += 3539808;
      } else {
        result[0] += 395242;
        result[1] += 0;
        result[2] += 49998162;
        result[3] += 3227812;
        result[4] += 0;
        result[5] += 65873;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8053063;
        result[1] += 789516;
        result[2] += 0;
        result[3] += 157903;
        result[4] += 39317899;
        result[5] += 5368709;
      } else {
        result[0] += 180158;
        result[1] += 450395;
        result[2] += 180158;
        result[3] += 7881913;
        result[4] += 3828358;
        result[5] += 41166108;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        result[0] += 101487;
        result[1] += 46785915;
        result[2] += 0;
        result[3] += 507439;
        result[4] += 5480345;
        result[5] += 811903;
      } else {
        result[0] += 34879311;
        result[1] += 1572556;
        result[2] += 3428173;
        result[3] += 4371708;
        result[4] += 3837038;
        result[5] += 5598302;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 5804009;
        result[2] += 11608019;
        result[3] += 0;
        result[4] += 8706014;
        result[5] += 27569046;
      } else {
        result[0] += 0;
        result[1] += 1731841;
        result[2] += 9525129;
        result[3] += 29441308;
        result[4] += 865920;
        result[5] += 12122891;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1476395;
        result[1] += 939524;
        result[2] += 39460012;
        result[3] += 10603200;
        result[4] += 0;
        result[5] += 1207959;
      } else {
        result[0] += 192082;
        result[1] += 0;
        result[2] += 51093975;
        result[3] += 2208950;
        result[4] += 0;
        result[5] += 192082;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 4636612;
        result[2] += 488064;
        result[3] += 732096;
        result[4] += 45634027;
        result[5] += 2196290;
      } else {
        result[0] += 1066323;
        result[1] += 509981;
        result[2] += 649066;
        result[3] += 7000648;
        result[4] += 3152609;
        result[5] += 41308461;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 30449799;
        result[1] += 2060716;
        result[2] += 2603010;
        result[3] += 6263493;
        result[4] += 7429425;
        result[5] += 4880644;
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 7895160;
        result[2] += 5526612;
        result[3] += 10263708;
        result[4] += 789516;
        result[5] += 29212093;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31876710;
        result[3] += 11744051;
        result[4] += 1118481;
        result[5] += 8947848;
      }
    } else {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 249707;
        result[1] += 0;
        result[2] += 40202891;
        result[3] += 12485370;
        result[4] += 0;
        result[5] += 749122;
      } else {
        result[0] += 407337;
        result[1] += 0;
        result[2] += 50754260;
        result[3] += 2118155;
        result[4] += 0;
        result[5] += 407337;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 535532;
        result[1] += 1472713;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48331770;
        result[5] += 3347075;
      } else {
        result[0] += 0;
        result[1] += 51855548;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1831542;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1851279;
        result[1] += 722450;
        result[2] += 90306;
        result[3] += 7766341;
        result[4] += 2077044;
        result[5] += 41179669;
      } else {
        result[0] += 35416961;
        result[1] += 726840;
        result[2] += 3303820;
        result[3] += 5649533;
        result[4] += 3931546;
        result[5] += 4658387;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5965232;
        result[3] += 9544371;
        result[4] += 0;
        result[5] += 38177487;
      } else {
        result[0] += 7002664;
        result[1] += 5446516;
        result[2] += 14783401;
        result[3] += 18673770;
        result[4] += 0;
        result[5] += 7780737;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 412977;
        result[1] += 0;
        result[2] += 36755008;
        result[3] += 14867194;
        result[4] += 0;
        result[5] += 1651910;
      } else {
        result[0] += 717422;
        result[1] += 0;
        result[2] += 49561913;
        result[3] += 2929473;
        result[4] += 0;
        result[5] += 478281;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8889745;
        result[1] += 697234;
        result[2] += 0;
        result[3] += 348617;
        result[4] += 36953452;
        result[5] += 6798040;
      } else {
        result[0] += 45115;
        result[1] += 225576;
        result[2] += 90230;
        result[3] += 7985390;
        result[4] += 2842257;
        result[5] += 42498520;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 47370962;
        result[2] += 0;
        result[3] += 326696;
        result[4] += 5771634;
        result[5] += 217797;
      } else {
        result[0] += 34106011;
        result[1] += 1440235;
        result[2] += 3830414;
        result[3] += 5178720;
        result[4] += 5270650;
        result[5] += 3861057;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16675535;
        result[3] += 20742739;
        result[4] += 0;
        result[5] += 16268815;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 45476124;
        result[3] += 5684515;
        result[4] += 0;
        result[5] += 2526451;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 44739242;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8947848;
        result[5] += 0;
      } else {
        result[0] += 499414;
        result[1] += 0;
        result[2] += 50003907;
        result[3] += 2746781;
        result[4] += 62426;
        result[5] += 374561;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 898528;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50092976;
        result[5] += 2695586;
      } else {
        result[0] += 1655175;
        result[1] += 297082;
        result[2] += 212201;
        result[3] += 7045104;
        result[4] += 2546423;
        result[5] += 41931103;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 336948;
        result[1] += 50654556;
        result[2] += 0;
        result[3] += 112316;
        result[4] += 2583270;
        result[5] += 0;
      } else {
        result[0] += 35025975;
        result[1] += 2102205;
        result[2] += 2296255;
        result[3] += 4075044;
        result[4] += 7179839;
        result[5] += 3007770;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1466860;
        result[1] += 0;
        result[2] += 6747557;
        result[3] += 26110115;
        result[4] += 3520464;
        result[5] += 15842092;
      } else {
        result[0] += 2863311;
        result[1] += 0;
        result[2] += 36507222;
        result[3] += 13600729;
        result[4] += 0;
        result[5] += 715827;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 15658734;
        result[1] += 20132659;
        result[2] += 11184810;
        result[3] += 0;
        result[4] += 0;
        result[5] += 6710886;
      } else {
        result[0] += 357120;
        result[1] += 0;
        result[2] += 48627886;
        result[3] += 3868803;
        result[4] += 0;
        result[5] += 833280;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3745611;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47444406;
        result[5] += 2497074;
      } else {
        result[0] += 2107254;
        result[1] += 478921;
        result[2] += 239460;
        result[3] += 7902203;
        result[4] += 2155146;
        result[5] += 40804104;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 722247;
        result[1] += 51520347;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1444495;
        result[5] += 0;
      } else {
        result[0] += 34439048;
        result[1] += 1982761;
        result[2] += 1860745;
        result[3] += 4057035;
        result[4] += 6893910;
        result[5] += 4453588;
      }
    }
  } else {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 2025927;
        result[2] += 7090747;
        result[3] += 6077783;
        result[4] += 5571301;
        result[5] += 32921329;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20941773;
        result[3] += 23987849;
        result[4] += 0;
        result[5] += 8757468;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 3355443;
        result[1] += 671088;
        result[2] += 37804660;
        result[3] += 10066329;
        result[4] += 559240;
        result[5] += 1230329;
      } else {
        result[0] += 104449;
        result[1] += 0;
        result[2] += 52329246;
        result[3] += 1148945;
        result[4] += 0;
        result[5] += 104449;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9937823;
        result[1] += 114227;
        result[2] += 0;
        result[3] += 0;
        result[4] += 38494786;
        result[5] += 5140253;
      } else {
        result[0] += 0;
        result[1] += 159466;
        result[2] += 0;
        result[3] += 4624531;
        result[4] += 4146131;
        result[5] += 44756961;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 104449;
        result[1] += 48673510;
        result[2] += 626697;
        result[3] += 104449;
        result[4] += 3969084;
        result[5] += 208899;
      } else {
        result[0] += 29857757;
        result[1] += 1450233;
        result[2] += 4094778;
        result[3] += 9014199;
        result[4] += 3213263;
        result[5] += 6056859;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 1819901;
        result[2] += 10009457;
        result[3] += 17289063;
        result[4] += 0;
        result[5] += 24568668;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40802189;
        result[3] += 2147483;
        result[4] += 4294967;
        result[5] += 6442450;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42260000))) ) ) {
        result[0] += 0;
        result[1] += 42949672;
        result[2] += 0;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 879086;
        result[1] += 62791;
        result[2] += 48914905;
        result[3] += 3453555;
        result[4] += 0;
        result[5] += 376751;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 394758;
        result[1] += 394758;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52108059;
        result[5] += 789516;
      } else {
        result[0] += 3408704;
        result[1] += 284058;
        result[2] += 236715;
        result[3] += 3361361;
        result[4] += 3834792;
        result[5] += 42561459;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 103843;
        result[1] += 50779473;
        result[2] += 0;
        result[3] += 207687;
        result[4] += 2492244;
        result[5] += 103843;
      } else {
        result[0] += 30092318;
        result[1] += 2215752;
        result[2] += 4042251;
        result[3] += 7964732;
        result[4] += 3623055;
        result[5] += 5748980;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3067833;
        result[3] += 3067833;
        result[4] += 9203501;
        result[5] += 38347922;
      } else {
        result[0] += 0;
        result[1] += 1325607;
        result[2] += 21209715;
        result[3] += 19552706;
        result[4] += 331401;
        result[5] += 11267661;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2003249;
        result[1] += 400649;
        result[2] += 40064993;
        result[3] += 9615598;
        result[4] += 200324;
        result[5] += 1402274;
      } else {
        result[0] += 166471;
        result[1] += 0;
        result[2] += 50357659;
        result[3] += 2663545;
        result[4] += 166471;
        result[5] += 332943;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x423c0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 6710886;
        result[2] += 0;
        result[3] += 3355443;
        result[4] += 26843545;
        result[5] += 16777215;
      } else {
        result[0] += 0;
        result[1] += 53217182;
        result[2] += 0;
        result[3] += 0;
        result[4] += 352431;
        result[5] += 117477;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1403348;
        result[1] += 863599;
        result[2] += 215899;
        result[3] += 6548961;
        result[4] += 11694574;
        result[5] += 32960707;
      } else {
        result[0] += 34578662;
        result[1] += 2942191;
        result[2] += 2372735;
        result[3] += 3954558;
        result[4] += 5504745;
        result[5] += 4334196;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 2684354;
        result[2] += 3579139;
        result[3] += 29527900;
        result[4] += 2684354;
        result[5] += 15211342;
      } else {
        result[0] += 6746021;
        result[1] += 1686505;
        result[2] += 26984087;
        result[3] += 6746021;
        result[4] += 843252;
        result[5] += 10681201;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16777215;
        result[3] += 20132659;
        result[4] += 0;
        result[5] += 16777215;
      } else {
        result[0] += 320711;
        result[1] += 0;
        result[2] += 49902696;
        result[3] += 3078829;
        result[4] += 0;
        result[5] += 384853;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1898028;
        result[2] += 0;
        result[3] += 1898028;
        result[4] += 49077593;
        result[5] += 813440;
      } else {
        result[0] += 1719846;
        result[1] += 232411;
        result[2] += 232411;
        result[3] += 6925867;
        result[4] += 3858033;
        result[5] += 40718521;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 33080509;
        result[1] += 2662648;
        result[2] += 2865240;
        result[3] += 4601750;
        result[4] += 6946038;
        result[5] += 3530903;
      } else {
        result[0] += 269784;
        result[1] += 53417306;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1431655;
        result[3] += 7158278;
        result[4] += 6442450;
        result[5] += 38654705;
      } else {
        result[0] += 0;
        result[1] += 1266204;
        result[2] += 21272243;
        result[3] += 22285207;
        result[4] += 0;
        result[5] += 8863434;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42640000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 815205;
        result[1] += 0;
        result[2] += 48504714;
        result[3] += 4017797;
        result[4] += 0;
        result[5] += 349373;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 328361;
        result[1] += 2791072;
        result[2] += 656722;
        result[3] += 328361;
        result[4] += 45970597;
        result[5] += 3611975;
      } else {
        result[0] += 2398692;
        result[1] += 261675;
        result[2] += 741413;
        result[3] += 8242778;
        result[4] += 3009268;
        result[5] += 39033262;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 292838;
        result[1] += 46561349;
        result[2] += 97612;
        result[3] += 0;
        result[4] += 6051999;
        result[5] += 683290;
      } else {
        result[0] += 35269125;
        result[1] += 1822611;
        result[2] += 2270270;
        result[3] += 3709173;
        result[4] += 4028930;
        result[5] += 6586980;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14834590;
        result[3] += 34614045;
        result[4] += 0;
        result[5] += 4238454;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39159995;
        result[3] += 10105805;
        result[4] += 631612;
        result[5] += 3789677;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 2618882;
        result[1] += 0;
        result[2] += 31426589;
        result[3] += 11784971;
        result[4] += 0;
        result[5] += 7856647;
      } else {
        result[0] += 448995;
        result[1] += 0;
        result[2] += 49581985;
        result[3] += 3463683;
        result[4] += 0;
        result[5] += 192426;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 3021351;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49968504;
        result[5] += 697234;
      } else {
        result[0] += 1638228;
        result[1] += 842517;
        result[2] += 234032;
        result[3] += 7208205;
        result[4] += 2012680;
        result[5] += 41751425;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 121189;
        result[1] += 51384484;
        result[2] += 0;
        result[3] += 121189;
        result[4] += 1939037;
        result[5] += 121189;
      } else {
        result[0] += 33506628;
        result[1] += 2029813;
        result[2] += 3059428;
        result[3] += 4559725;
        result[4] += 6707209;
        result[5] += 3824285;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5872025;
        result[3] += 12163481;
        result[4] += 2097151;
        result[5] += 33554431;
      } else {
        result[0] += 2556528;
        result[1] += 0;
        result[2] += 38347922;
        result[3] += 3834792;
        result[4] += 0;
        result[5] += 8947848;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 631612;
        result[1] += 3158064;
        result[2] += 17685159;
        result[3] += 25896126;
        result[4] += 0;
        result[5] += 6316128;
      } else {
        result[0] += 1044721;
        result[1] += 696481;
        result[2] += 47592880;
        result[3] += 3598486;
        result[4] += 174120;
        result[5] += 580400;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53007507;
        result[5] += 679583;
      } else {
        result[0] += 1756883;
        result[1] += 449435;
        result[2] += 204288;
        result[3] += 8498413;
        result[4] += 3186904;
        result[5] += 39591165;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51400217;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2286874;
        result[5] += 0;
      } else {
        result[0] += 33680046;
        result[1] += 2009840;
        result[2] += 3045212;
        result[3] += 4567818;
        result[4] += 6425397;
        result[5] += 3958775;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5965232;
        result[3] += 7158278;
        result[4] += 2386092;
        result[5] += 38177487;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20928866;
        result[3] += 25478619;
        result[4] += 0;
        result[5] += 7279605;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 709521;
        result[1] += 0;
        result[2] += 47715289;
        result[3] += 4138872;
        result[4] += 236507;
        result[5] += 886901;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 654720;
        result[1] += 6285317;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42556840;
        result[5] += 4190211;
      } else {
        result[0] += 11844261;
        result[1] += 594799;
        result[2] += 1137876;
        result[3] += 8482353;
        result[4] += 3698099;
        result[5] += 27929700;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
        result[0] += 0;
        result[1] += 53320209;
        result[2] += 0;
        result[3] += 0;
        result[4] += 366882;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 17895697;
        result[2] += 4473924;
        result[3] += 0;
        result[4] += 31317469;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 41131239;
        result[1] += 1515361;
        result[2] += 4546084;
        result[3] += 1515361;
        result[4] += 2814242;
        result[5] += 2164802;
      } else {
        result[0] += 353204;
        result[1] += 117734;
        result[2] += 40441920;
        result[3] += 9889727;
        result[4] += 117734;
        result[5] += 2766768;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 50746824;
        result[1] += 326696;
        result[2] += 1524582;
        result[3] += 0;
        result[4] += 1088987;
        result[5] += 0;
      } else {
        result[0] += 1592413;
        result[1] += 0;
        result[2] += 51867189;
        result[3] += 0;
        result[4] += 0;
        result[5] += 227487;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 445536;
        result[1] += 668304;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50345570;
        result[5] += 2227680;
      } else {
        result[0] += 1532628;
        result[1] += 540927;
        result[2] += 45077;
        result[3] += 8249150;
        result[4] += 2930025;
        result[5] += 40389281;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 32490150;
        result[1] += 2660703;
        result[2] += 3104154;
        result[3] += 4611886;
        result[4] += 6356125;
        result[5] += 4464069;
      } else {
        result[0] += 593883;
        result[1] += 52618100;
        result[2] += 0;
        result[3] += 237553;
        result[4] += 237553;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3834792;
        result[3] += 0;
        result[4] += 3834792;
        result[5] += 46017506;
      } else {
        result[0] += 0;
        result[1] += 3579139;
        result[2] += 8053063;
        result[3] += 25053975;
        result[4] += 0;
        result[5] += 17000912;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2055008;
        result[1] += 2311884;
        result[2] += 29283867;
        result[3] += 15669438;
        result[4] += 770628;
        result[5] += 3596264;
      } else {
        result[0] += 453328;
        result[1] += 0;
        result[2] += 50060460;
        result[3] += 3043779;
        result[4] += 64761;
        result[5] += 64761;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51246768;
        result[5] += 2440322;
      } else {
        result[0] += 3887807;
        result[1] += 494811;
        result[2] += 212062;
        result[3] += 9542800;
        result[4] += 2792152;
        result[5] += 36757455;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 35095063;
        result[1] += 3307570;
        result[2] += 3516469;
        result[3] += 2471973;
        result[4] += 5883993;
        result[5] += 3412020;
      } else {
        result[0] += 1723897;
        result[1] += 51963193;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 2130440;
        result[1] += 0;
        result[2] += 17043521;
        result[3] += 25139193;
        result[4] += 426088;
        result[5] += 8947848;
      } else {
        result[0] += 1648287;
        result[1] += 0;
        result[2] += 43090954;
        result[3] += 8712378;
        result[4] += 0;
        result[5] += 235469;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17895697;
        result[3] += 0;
        result[4] += 0;
        result[5] += 35791394;
      } else {
        result[0] += 147087;
        result[1] += 0;
        result[2] += 51480772;
        result[3] += 1912142;
        result[4] += 0;
        result[5] += 147087;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 198841;
        result[1] += 3181457;
        result[2] += 0;
        result[3] += 198841;
        result[4] += 48914905;
        result[5] += 1193046;
      } else {
        result[0] += 1929928;
        result[1] += 657930;
        result[2] += 87724;
        result[3] += 8684676;
        result[4] += 4123028;
        result[5] += 38203804;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 50961256;
        result[2] += 0;
        result[3] += 237029;
        result[4] += 1777718;
        result[5] += 711087;
      } else {
        result[0] += 32962074;
        result[1] += 1619610;
        result[2] += 3779091;
        result[3] += 4348954;
        result[4] += 4828838;
        result[5] += 6148521;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 1704352;
        result[1] += 0;
        result[2] += 2556528;
        result[3] += 7669584;
        result[4] += 11930464;
        result[5] += 29826161;
      } else {
        result[0] += 0;
        result[1] += 2910745;
        result[2] += 26843545;
        result[3] += 18111307;
        result[4] += 323416;
        result[5] += 5498075;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41598607;
        result[3] += 9955222;
        result[4] += 355543;
        result[5] += 1777718;
      } else {
        result[0] += 757222;
        result[1] += 151444;
        result[2] += 50961089;
        result[3] += 1665889;
        result[4] += 0;
        result[5] += 151444;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 5567550;
        result[2] += 0;
        result[3] += 397682;
        result[4] += 44341560;
        result[5] += 3380298;
      } else {
        result[0] += 1502354;
        result[1] += 88373;
        result[2] += 353495;
        result[3] += 7997830;
        result[4] += 2916335;
        result[5] += 40828701;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 50791607;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2895483;
        result[5] += 0;
      } else {
        result[0] += 34321603;
        result[1] += 983170;
        result[2] += 3128271;
        result[3] += 4558337;
        result[4] += 6077783;
        result[5] += 4617924;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 1073741;
        result[1] += 5368709;
        result[2] += 9663676;
        result[3] += 5368709;
        result[4] += 3221225;
        result[5] += 28991029;
      } else {
        result[0] += 263172;
        result[1] += 526344;
        result[2] += 29475265;
        result[3] += 19211557;
        result[4] += 0;
        result[5] += 4210752;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2534583;
        result[1] += 691250;
        result[2] += 39170839;
        result[3] += 10138334;
        result[4] += 460833;
        result[5] += 691250;
      } else {
        result[0] += 88446;
        result[1] += 0;
        result[2] += 51918159;
        result[3] += 1680485;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 617093;
        result[1] += 1028488;
        result[2] += 205697;
        result[3] += 0;
        result[4] += 49984533;
        result[5] += 1851279;
      } else {
        result[0] += 2092750;
        result[1] += 845149;
        result[2] += 603677;
        result[3] += 8210019;
        result[4] += 2736673;
        result[5] += 39198820;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 115704;
        result[1] += 49637418;
        result[2] += 0;
        result[3] += 1735574;
        result[4] += 2198393;
        result[5] += 0;
      } else {
        result[0] += 34948407;
        result[1] += 1889103;
        result[2] += 2833654;
        result[3] += 3839144;
        result[4] += 6337636;
        result[5] += 3839144;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 801299;
        result[2] += 7211698;
        result[3] += 24840295;
        result[4] += 3205199;
        result[5] += 17628597;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42044107;
        result[3] += 9055653;
        result[4] += 646832;
        result[5] += 1940497;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 5033164;
        result[1] += 6710886;
        result[2] += 26843545;
        result[3] += 6710886;
        result[4] += 0;
        result[5] += 8388607;
      } else {
        result[0] += 339362;
        result[1] += 0;
        result[2] += 49275383;
        result[3] += 3732983;
        result[4] += 67872;
        result[5] += 271489;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 5368709;
        result[2] += 0;
        result[3] += 2783775;
        result[4] += 41756626;
        result[5] += 3777980;
      } else {
        result[0] += 2454021;
        result[1] += 86106;
        result[2] += 215265;
        result[3] += 7319010;
        result[4] += 2583180;
        result[5] += 41029509;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 473014;
        result[1] += 50021232;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3192844;
        result[5] += 0;
      } else {
        result[0] += 34335143;
        result[1] += 2588889;
        result[2] += 2330000;
        result[3] += 4465833;
        result[4] += 6407500;
        result[5] += 3559722;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 1095654;
        result[1] += 3834792;
        result[2] += 6026102;
        result[3] += 19721788;
        result[4] += 2191309;
        result[5] += 20817443;
      } else {
        result[0] += 4294967;
        result[1] += 9663676;
        result[2] += 20401094;
        result[3] += 0;
        result[4] += 5368709;
        result[5] += 13958643;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14005328;
        result[3] += 19840881;
        result[4] += 1167110;
        result[5] += 18673770;
      } else {
        result[0] += 535799;
        result[1] += 0;
        result[2] += 47686138;
        result[3] += 4715033;
        result[4] += 107159;
        result[5] += 642959;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8109832;
        result[1] += 2270753;
        result[2] += 324393;
        result[3] += 324393;
        result[4] += 37954016;
        result[5] += 4703702;
      } else {
        result[0] += 302340;
        result[1] += 691064;
        result[2] += 302340;
        result[3] += 9415756;
        result[4] += 3196174;
        result[5] += 39779413;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 595200;
        result[1] += 50949168;
        result[2] += 0;
        result[3] += 595200;
        result[4] += 1547521;
        result[5] += 0;
      } else {
        result[0] += 33851650;
        result[1] += 2190032;
        result[2] += 3660483;
        result[3] += 3879486;
        result[4] += 4692927;
        result[5] += 5412509;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 4129776;
        result[2] += 12389328;
        result[3] += 2753184;
        result[4] += 4129776;
        result[5] += 30285025;
      } else {
        result[0] += 0;
        result[1] += 3355443;
        result[2] += 15099494;
        result[3] += 24326963;
        result[4] += 3355443;
        result[5] += 7549747;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2105376;
        result[1] += 657930;
        result[2] += 39344216;
        result[3] += 10263708;
        result[4] += 0;
        result[5] += 1315860;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52097055;
        result[3] += 1590035;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1371568;
        result[2] += 0;
        result[3] += 587814;
        result[4] += 49180510;
        result[5] += 2547197;
      } else {
        result[0] += 1931190;
        result[1] += 987052;
        result[2] += 386238;
        result[3] += 6952285;
        result[4] += 2489089;
        result[5] += 40941235;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 34558753;
        result[1] += 2689397;
        result[2] += 1311081;
        result[3] += 3361746;
        result[4] += 7631164;
        result[5] += 4134948;
      } else {
        result[0] += 1128934;
        result[1] += 50927474;
        result[2] += 627185;
        result[3] += 376311;
        result[4] += 627185;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 256876;
        result[2] += 5908148;
        result[3] += 25687603;
        result[4] += 2825636;
        result[5] += 19008826;
      } else {
        result[0] += 6832902;
        result[1] += 11713547;
        result[2] += 29283867;
        result[3] += 5856773;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 4268698;
        result[1] += 492542;
        result[2] += 36448116;
        result[3] += 9029938;
        result[4] += 328361;
        result[5] += 3119433;
      } else {
        result[0] += 391876;
        result[1] += 0;
        result[2] += 49925076;
        result[3] += 2899886;
        result[4] += 0;
        result[5] += 470251;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 239674;
        result[1] += 3355443;
        result[2] += 0;
        result[3] += 239674;
        result[4] += 47455553;
        result[5] += 2396745;
      } else {
        result[0] += 1920662;
        result[1] += 777411;
        result[2] += 182920;
        result[3] += 7225349;
        result[4] += 1783472;
        result[5] += 41797275;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42560000))) ) ) {
        result[0] += 253839;
        result[1] += 51148694;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2284557;
        result[5] += 0;
      } else {
        result[0] += 34167370;
        result[1] += 2546050;
        result[2] += 1634501;
        result[3] += 4557744;
        result[4] += 6475140;
        result[5] += 4306283;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2718333;
        result[3] += 9514168;
        result[4] += 2038750;
        result[5] += 39415839;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8785160;
        result[3] += 37092899;
        result[4] += 0;
        result[5] += 7809031;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 613566;
        result[2] += 27917287;
        result[3] += 18100219;
        result[4] += 0;
        result[5] += 7056017;
      } else {
        result[0] += 923765;
        result[1] += 434713;
        result[2] += 48035818;
        result[3] += 3314688;
        result[4] += 326034;
        result[5] += 652069;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 400649;
        result[1] += 4006499;
        result[2] += 2003249;
        result[3] += 801299;
        result[4] += 43871167;
        result[5] += 2604224;
      } else {
        result[0] += 2063268;
        result[1] += 294752;
        result[2] += 294752;
        result[3] += 7958321;
        result[4] += 3705461;
        result[5] += 39370533;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 51572501;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2114590;
        result[5] += 0;
      } else {
        result[0] += 35150385;
        result[1] += 1418625;
        result[2] += 2427425;
        result[3] += 4539601;
        result[4] += 5989751;
        result[5] += 4161301;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5651272;
        result[3] += 7535030;
        result[4] += 3767515;
        result[5] += 36733272;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15339168;
        result[3] += 23705988;
        result[4] += 0;
        result[5] += 14641933;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 668998;
        result[1] += 1170746;
        result[2] += 38801885;
        result[3] += 9867720;
        result[4] += 836247;
        result[5] += 2341493;
      } else {
        result[0] += 321479;
        result[1] += 241109;
        result[2] += 51758213;
        result[3] += 1285918;
        result[4] += 0;
        result[5] += 80369;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 485856;
        result[1] += 485856;
        result[2] += 0;
        result[3] += 728784;
        result[4] += 50529027;
        result[5] += 1457568;
      } else {
        result[0] += 0;
        result[1] += 38028356;
        result[2] += 0;
        result[3] += 11184810;
        result[4] += 0;
        result[5] += 4473924;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1335222;
        result[1] += 111268;
        result[2] += 166902;
        result[3] += 1835931;
        result[4] += 4395109;
        result[5] += 45842656;
      } else {
        result[0] += 4222580;
        result[1] += 603225;
        result[2] += 3016128;
        result[3] += 25486287;
        result[4] += 1508064;
        result[5] += 18850804;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 107805;
        result[1] += 47649988;
        result[2] += 0;
        result[3] += 323416;
        result[4] += 5605881;
        result[5] += 0;
      } else {
        result[0] += 36584743;
        result[1] += 1054021;
        result[2] += 2176044;
        result[3] += 3944080;
        result[4] += 5814118;
        result[5] += 4114083;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 662803;
        result[1] += 1988410;
        result[2] += 19884107;
        result[3] += 17674762;
        result[4] += 0;
        result[5] += 13477006;
      } else {
        result[0] += 1256506;
        result[1] += 57113;
        result[2] += 47404559;
        result[3] += 4226430;
        result[4] += 228455;
        result[5] += 514025;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 315806;
        result[1] += 4263386;
        result[2] += 0;
        result[3] += 1736935;
        result[4] += 45002414;
        result[5] += 2368548;
      } else {
        result[0] += 7377945;
        result[1] += 214891;
        result[2] += 107445;
        result[3] += 6840716;
        result[4] += 4082940;
        result[5] += 35063150;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 37017309;
        result[1] += 3397917;
        result[2] += 2358554;
        result[3] += 4797059;
        result[4] += 4077500;
        result[5] += 2038750;
      } else {
        result[0] += 511305;
        result[1] += 52536653;
        result[2] += 0;
        result[3] += 383479;
        result[4] += 255652;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 3355443;
        result[2] += 2236962;
        result[3] += 24047342;
        result[4] += 559240;
        result[5] += 23488102;
      } else {
        result[0] += 1826091;
        result[1] += 1460873;
        result[2] += 21913098;
        result[3] += 18991351;
        result[4] += 2191309;
        result[5] += 7304366;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 406720;
        result[1] += 0;
        result[2] += 34977953;
        result[3] += 15455374;
        result[4] += 0;
        result[5] += 2847042;
      } else {
        result[0] += 1075006;
        result[1] += 0;
        result[2] += 49892950;
        result[3] += 2655898;
        result[4] += 0;
        result[5] += 63235;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 11465836;
        result[1] += 2967628;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34127723;
        result[5] += 5125903;
      } else {
        result[0] += 424823;
        result[1] += 53102;
        result[2] += 531029;
        result[3] += 6159943;
        result[4] += 4195133;
        result[5] += 42323058;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 48922652;
        result[2] += 0;
        result[3] += 232411;
        result[4] += 3950998;
        result[5] += 581029;
      } else {
        result[0] += 34496384;
        result[1] += 2042989;
        result[2] += 2176956;
        result[3] += 5325169;
        result[4] += 3550113;
        result[5] += 6095477;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 571139;
        result[1] += 380759;
        result[2] += 6853671;
        result[3] += 20751393;
        result[4] += 3997974;
        result[5] += 21132152;
      } else {
        result[0] += 5737551;
        result[1] += 4508076;
        result[2] += 31966359;
        result[3] += 6967027;
        result[4] += 409825;
        result[5] += 4098251;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 53687091;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 476160;
        result[1] += 0;
        result[2] += 48270766;
        result[3] += 4523524;
        result[4] += 119040;
        result[5] += 297600;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 749122;
        result[3] += 249707;
        result[4] += 48692943;
        result[5] += 3995318;
      } else {
        result[0] += 2260941;
        result[1] += 945484;
        result[2] += 616620;
        result[3] += 9331523;
        result[4] += 2302049;
        result[5] += 38230470;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 101873;
        result[1] += 48389693;
        result[2] += 0;
        result[3] += 1222476;
        result[4] += 3871175;
        result[5] += 101873;
      } else {
        result[0] += 33613059;
        result[1] += 1250718;
        result[2] += 3408207;
        result[3] += 4721462;
        result[4] += 5503161;
        result[5] += 5190481;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42910000))) ) ) {
        result[0] += 5965232;
        result[1] += 11930464;
        result[2] += 1491308;
        result[3] += 0;
        result[4] += 7456540;
        result[5] += 26843545;
      } else {
        result[0] += 738813;
        result[1] += 1723897;
        result[2] += 20440498;
        result[3] += 23395750;
        result[4] += 0;
        result[5] += 7388131;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 394758;
        result[1] += 0;
        result[2] += 45397172;
        result[3] += 6710886;
        result[4] += 0;
        result[5] += 1184274;
      } else {
        result[0] += 802797;
        result[1] += 0;
        result[2] += 51278698;
        result[3] += 1505245;
        result[4] += 0;
        result[5] += 100349;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6395327;
        result[1] += 504894;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41569628;
        result[5] += 5217240;
      } else {
        result[0] += 48410;
        result[1] += 532513;
        result[2] += 96820;
        result[3] += 9391610;
        result[4] += 2662569;
        result[5] += 40955166;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 397682;
        result[1] += 44242139;
        result[2] += 298261;
        result[3] += 0;
        result[4] += 8649586;
        result[5] += 99420;
      } else {
        result[0] += 35272388;
        result[1] += 1227646;
        result[2] += 3982366;
        result[3] += 5569324;
        result[4] += 3563170;
        result[5] += 4072194;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4473924;
        result[3] += 40265318;
        result[4] += 0;
        result[5] += 8947848;
      } else {
        result[0] += 0;
        result[1] += 770628;
        result[2] += 32623256;
        result[3] += 13357553;
        result[4] += 1541256;
        result[5] += 5394396;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 534199;
        result[1] += 133549;
        result[2] += 50348341;
        result[3] += 2403899;
        result[4] += 0;
        result[5] += 267099;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 204912;
        result[1] += 2254038;
        result[2] += 819650;
        result[3] += 204912;
        result[4] += 49179014;
        result[5] += 1024562;
      } else {
        result[0] += 1792285;
        result[1] += 1018343;
        result[2] += 1466415;
        result[3] += 8594822;
        result[4] += 2240356;
        result[5] += 38574867;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d40000))) ) ) {
        result[0] += 31103499;
        result[1] += 3442976;
        result[2] += 2801065;
        result[3] += 4259953;
        result[4] += 6973486;
        result[5] += 5106109;
      } else {
        result[0] += 465495;
        result[1] += 51669946;
        result[2] += 0;
        result[3] += 775825;
        result[4] += 775825;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 1142278;
        result[2] += 3426835;
        result[3] += 1142278;
        result[4] += 10280506;
        result[5] += 37695191;
      } else {
        result[0] += 1376592;
        result[1] += 1032444;
        result[2] += 21337177;
        result[3] += 20304733;
        result[4] += 344148;
        result[5] += 9291996;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 652069;
        result[1] += 0;
        result[2] += 39341552;
        result[3] += 13258755;
        result[4] += 0;
        result[5] += 434713;
      } else {
        result[0] += 264034;
        result[1] += 0;
        result[2] += 52014870;
        result[3] += 1144151;
        result[4] += 0;
        result[5] += 264034;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        result[0] += 116965;
        result[1] += 53453160;
        result[2] += 0;
        result[3] += 0;
        result[4] += 116965;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 2567643;
        result[1] += 311229;
        result[2] += 311229;
        result[3] += 3540235;
        result[4] += 14199846;
        result[5] += 32756906;
      } else {
        result[0] += 30268603;
        result[1] += 2116296;
        result[2] += 2561832;
        result[3] += 7824726;
        result[4] += 4093362;
        result[5] += 6822270;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 8476909;
        result[2] += 5651272;
        result[3] += 12244424;
        result[4] += 2825636;
        result[5] += 24488848;
      } else {
        result[0] += 3212048;
        result[1] += 917728;
        result[2] += 28908433;
        result[3] += 15601376;
        result[4] += 1376592;
        result[5] += 3670912;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32965757;
        result[3] += 18837575;
        result[4] += 0;
        result[5] += 1883757;
      } else {
        result[0] += 458304;
        result[1] += 0;
        result[2] += 49758767;
        result[3] += 2946242;
        result[4] += 0;
        result[5] += 523776;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 4129776;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48731359;
        result[5] += 825955;
      } else {
        result[0] += 1687978;
        result[1] += 515771;
        result[2] += 468882;
        result[3] += 7830344;
        result[4] += 3047738;
        result[5] += 40136375;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 248551;
        result[1] += 52444334;
        result[2] += 0;
        result[3] += 0;
        result[4] += 994205;
        result[5] += 0;
      } else {
        result[0] += 35791394;
        result[1] += 2283891;
        result[2] += 1376592;
        result[3] += 4067203;
        result[4] += 5568940;
        result[5] += 4599069;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3627506;
        result[3] += 19951283;
        result[4] += 725501;
        result[5] += 29382799;
      } else {
        result[0] += 0;
        result[1] += 3865470;
        result[2] += 23622320;
        result[3] += 16320875;
        result[4] += 3435973;
        result[5] += 6442450;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 4094778;
        result[1] += 0;
        result[2] += 33213200;
        result[3] += 12284334;
        result[4] += 454975;
        result[5] += 3639802;
      } else {
        result[0] += 486957;
        result[1] += 0;
        result[2] += 49669689;
        result[3] += 2921746;
        result[4] += 0;
        result[5] += 608697;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1738071;
        result[2] += 0;
        result[3] += 193119;
        result[4] += 48472877;
        result[5] += 3283023;
      } else {
        result[0] += 1491308;
        result[1] += 165700;
        result[2] += 82850;
        result[3] += 8367895;
        result[4] += 1946985;
        result[5] += 41632350;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        result[0] += 361123;
        result[1] += 52001846;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1324121;
        result[5] += 0;
      } else {
        result[0] += 33786910;
        result[1] += 1921824;
        result[2] += 2944730;
        result[3] += 4494589;
        result[4] += 6726384;
        result[5] += 3812651;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 1819901;
        result[2] += 5459704;
        result[3] += 10009457;
        result[4] += 3639802;
        result[5] += 32758225;
      } else {
        result[0] += 0;
        result[1] += 3038891;
        result[2] += 10129639;
        result[3] += 29375955;
        result[4] += 1012963;
        result[5] += 10129639;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 4113953;
        result[1] += 411395;
        result[2] += 35379998;
        result[3] += 11724767;
        result[4] += 205697;
        result[5] += 1851279;
      } else {
        result[0] += 306345;
        result[1] += 0;
        result[2] += 50470460;
        result[3] += 2757111;
        result[4] += 0;
        result[5] += 153172;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 3665383;
        result[2] += 431221;
        result[3] += 2587329;
        result[4] += 43553383;
        result[5] += 3449772;
      } else {
        result[0] += 1848244;
        result[1] += 132017;
        result[2] += 968127;
        result[3] += 8317098;
        result[4] += 3652482;
        result[5] += 38769120;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 98508;
        result[1] += 45806417;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7782165;
        result[5] += 0;
      } else {
        result[0] += 37668975;
        result[1] += 1267367;
        result[2] += 1126548;
        result[3] += 3626078;
        result[4] += 4294967;
        result[5] += 5703153;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 5413824;
        result[2] += 2255760;
        result[3] += 13985712;
        result[4] += 5864976;
        result[5] += 26166817;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 19976592;
        result[3] += 25386919;
        result[4] += 0;
        result[5] += 8323580;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1272205;
        result[1] += 0;
        result[2] += 39947266;
        result[3] += 9923206;
        result[4] += 127220;
        result[5] += 2417191;
      } else {
        result[0] += 435065;
        result[1] += 0;
        result[2] += 51163710;
        result[3] += 1827275;
        result[4] += 0;
        result[5] += 261039;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 208899;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50971401;
        result[5] += 2506790;
      } else {
        result[0] += 4994148;
        result[1] += 22473666;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14982444;
        result[5] += 11236833;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2013265;
        result[1] += 55924;
        result[2] += 167772;
        result[3] += 1789569;
        result[4] += 3970607;
        result[5] += 45689951;
      } else {
        result[0] += 4955731;
        result[1] += 1651910;
        result[2] += 1651910;
        result[3] += 21828817;
        result[4] += 2477865;
        result[5] += 21120855;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 37504068;
        result[1] += 2551534;
        result[2] += 908765;
        result[3] += 2341819;
        result[4] += 6990506;
        result[5] += 3390395;
      } else {
        result[0] += 383479;
        result[1] += 52408827;
        result[2] += 0;
        result[3] += 511305;
        result[4] += 383479;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 230416;
        result[1] += 460833;
        result[2] += 25115420;
        result[3] += 20276669;
        result[4] += 0;
        result[5] += 7603751;
      } else {
        result[0] += 1339265;
        result[1] += 0;
        result[2] += 47747738;
        result[3] += 3377279;
        result[4] += 232915;
        result[5] += 989892;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42760000))) ) ) {
        result[0] += 231409;
        result[1] += 3702558;
        result[2] += 0;
        result[3] += 925639;
        result[4] += 46050565;
        result[5] += 2776918;
      } else {
        result[0] += 2008245;
        result[1] += 357021;
        result[2] += 490904;
        result[3] += 8791651;
        result[4] += 3704096;
        result[5] += 38335171;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 368983;
        result[1] += 43632292;
        result[2] += 0;
        result[3] += 92245;
        result[4] += 9593569;
        result[5] += 0;
      } else {
        result[0] += 39695694;
        result[1] += 996842;
        result[2] += 1886880;
        result[3] += 3880565;
        result[4] += 3951768;
        result[5] += 3275339;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42970000))) ) ) {
        result[0] += 1477626;
        result[1] += 1477626;
        result[2] += 985084;
        result[3] += 5910505;
        result[4] += 3447794;
        result[5] += 40388453;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14891309;
        result[3] += 27039483;
        result[4] += 391876;
        result[5] += 11364420;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 778826;
        result[1] += 0;
        result[2] += 46833419;
        result[3] += 4828722;
        result[4] += 51921;
        result[5] += 1194200;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 4473924;
        result[2] += 0;
        result[3] += 4473924;
        result[4] += 44739242;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 53311656;
        result[2] += 0;
        result[3] += 375434;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1752287;
        result[1] += 633805;
        result[2] += 633805;
        result[3] += 7307409;
        result[4] += 10588287;
        result[5] += 32771495;
      } else {
        result[0] += 31188572;
        result[1] += 2390467;
        result[2] += 3937240;
        result[3] += 4865304;
        result[4] += 5905861;
        result[5] += 5399644;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1130254;
        result[3] += 14128181;
        result[4] += 2260509;
        result[5] += 36168145;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 44350205;
        result[3] += 2334221;
        result[4] += 0;
        result[5] += 7002664;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 1917396;
        result[2] += 15339168;
        result[3] += 34513130;
        result[4] += 1917396;
        result[5] += 0;
      } else {
        result[0] += 241290;
        result[1] += 120645;
        result[2] += 48559672;
        result[3] += 4162257;
        result[4] += 0;
        result[5] += 603225;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8045327;
        result[1] += 0;
        result[2] += 618871;
        result[3] += 0;
        result[4] += 38679460;
        result[5] += 6343431;
      } else {
        result[0] += 0;
        result[1] += 407063;
        result[2] += 0;
        result[3] += 8186489;
        result[4] += 2306690;
        result[5] += 42786847;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 518215;
        result[1] += 44773790;
        result[2] += 0;
        result[3] += 621858;
        result[4] += 7358655;
        result[5] += 414572;
      } else {
        result[0] += 37837976;
        result[1] += 2677215;
        result[2] += 1963291;
        result[3] += 3319746;
        result[4] += 4247848;
        result[5] += 3641012;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1037431;
        result[1] += 1296789;
        result[2] += 7780737;
        result[3] += 28529372;
        result[4] += 1037431;
        result[5] += 14005328;
      } else {
        result[0] += 1206451;
        result[1] += 0;
        result[2] += 21716126;
        result[3] += 4825805;
        result[4] += 6635483;
        result[5] += 19303223;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 246271;
        result[1] += 0;
        result[2] += 35463032;
        result[3] += 17238974;
        result[4] += 0;
        result[5] += 738813;
      } else {
        result[0] += 1065220;
        result[1] += 0;
        result[2] += 51059548;
        result[3] += 1349278;
        result[4] += 0;
        result[5] += 213044;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7438572;
        result[1] += 323416;
        result[2] += 970248;
        result[3] += 0;
        result[4] += 38809945;
        result[5] += 6144908;
      } else {
        result[0] += 0;
        result[1] += 491640;
        result[2] += 344148;
        result[3] += 8161224;
        result[4] += 2458200;
        result[5] += 42231878;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 360316;
        result[1] += 43868478;
        result[2] += 810711;
        result[3] += 540474;
        result[4] += 7836874;
        result[5] += 270237;
      } else {
        result[0] += 38951546;
        result[1] += 1136234;
        result[2] += 1171742;
        result[3] += 3124645;
        result[4] += 4615953;
        result[5] += 4686968;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1804608;
        result[3] += 18046081;
        result[4] += 2255760;
        result[5] += 31580641;
      } else {
        result[0] += 339791;
        result[1] += 4757084;
        result[2] += 14950835;
        result[3] += 22766044;
        result[4] += 1019375;
        result[5] += 9853959;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 40101638;
        result[3] += 11948651;
        result[4] += 0;
        result[5] += 1636801;
      } else {
        result[0] += 2259688;
        result[1] += 0;
        result[2] += 49401474;
        result[3] += 1948007;
        result[4] += 77920;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
        result[0] += 0;
        result[1] += 1273211;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50928465;
        result[5] += 1485413;
      } else {
        result[0] += 0;
        result[1] += 36909875;
        result[2] += 0;
        result[3] += 10066329;
        result[4] += 3355443;
        result[5] += 3355443;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 4092496;
        result[1] += 161545;
        result[2] += 0;
        result[3] += 2315491;
        result[4] += 3823253;
        result[5] += 43294304;
      } else {
        result[0] += 1090093;
        result[1] += 0;
        result[2] += 681308;
        result[3] += 29023732;
        result[4] += 272523;
        result[5] += 22619434;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 197379;
        result[1] += 43916830;
        result[2] += 197379;
        result[3] += 296068;
        result[4] += 8684676;
        result[5] += 394758;
      } else {
        result[0] += 40255806;
        result[1] += 2092693;
        result[2] += 1255615;
        result[3] += 2663427;
        result[4] += 4527826;
        result[5] += 2891721;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 982080;
        result[1] += 0;
        result[2] += 19968979;
        result[3] += 23242582;
        result[4] += 654720;
        result[5] += 8838728;
      } else {
        result[0] += 871710;
        result[1] += 153831;
        result[2] += 46149362;
        result[3] += 4717490;
        result[4] += 0;
        result[5] += 1794697;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7491222;
        result[1] += 3901678;
        result[2] += 0;
        result[3] += 624268;
        result[4] += 34646901;
        result[5] += 7023020;
      } else {
        result[0] += 230416;
        result[1] += 276500;
        result[2] += 276500;
        result[3] += 8617584;
        result[4] += 3686667;
        result[5] += 40599422;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        result[0] += 4032833;
        result[1] += 48646049;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1008208;
        result[5] += 0;
      } else {
        result[0] += 30588155;
        result[1] += 3845040;
        result[2] += 2324240;
        result[3] += 4390232;
        result[4] += 7259665;
        result[5] += 5279756;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12201611;
        result[3] += 27331610;
        result[4] += 0;
        result[5] += 14153869;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39832357;
        result[3] += 11689931;
        result[4] += 0;
        result[5] += 2164802;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 10226112;
        result[1] += 0;
        result[2] += 23008753;
        result[3] += 20452225;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 561433;
        result[1] += 0;
        result[2] += 49757055;
        result[3] += 3017705;
        result[4] += 70179;
        result[5] += 280716;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6970423;
        result[1] += 1927989;
        result[2] += 0;
        result[3] += 2372910;
        result[4] += 35148730;
        result[5] += 7267037;
      } else {
        result[0] += 339791;
        result[1] += 48541;
        result[2] += 97083;
        result[3] += 8397709;
        result[4] += 2330000;
        result[5] += 42473964;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 33166315;
        result[1] += 2907345;
        result[2] += 3613011;
        result[3] += 4149317;
        result[4] += 6492129;
        result[5] += 3358971;
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 4668442;
        result[2] += 7780737;
        result[3] += 11671106;
        result[4] += 5446516;
        result[5] += 24120287;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28908433;
        result[3] += 20648881;
        result[4] += 0;
        result[5] += 4129776;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41318006;
        result[3] += 11053224;
        result[4] += 0;
        result[5] += 1315860;
      } else {
        result[0] += 539956;
        result[1] += 0;
        result[2] += 50293079;
        result[3] += 2159825;
        result[4] += 0;
        result[5] += 694229;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 923251;
        result[1] += 323138;
        result[2] += 0;
        result[3] += 1892666;
        result[4] += 14079589;
        result[5] += 36468445;
      } else {
        result[0] += 2571836;
        result[1] += 3857755;
        result[2] += 803698;
        result[3] += 24110969;
        result[4] += 5625892;
        result[5] += 16716938;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 50600359;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3086732;
        result[5] += 0;
      } else {
        result[0] += 32566682;
        result[1] += 2178859;
        result[2] += 4502975;
        result[3] += 4880644;
        result[4] += 4502975;
        result[5] += 5054953;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 1563701;
        result[1] += 0;
        result[2] += 4691105;
        result[3] += 15637016;
        result[4] += 4169871;
        result[5] += 27625396;
      } else {
        result[0] += 0;
        result[1] += 1451002;
        result[2] += 33373056;
        result[3] += 13784523;
        result[4] += 0;
        result[5] += 5078508;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 874382;
        result[1] += 0;
        result[2] += 42145240;
        result[3] += 9793085;
        result[4] += 349753;
        result[5] += 524629;
      } else {
        result[0] += 105268;
        result[1] += 0;
        result[2] += 51686983;
        result[3] += 1579032;
        result[4] += 0;
        result[5] += 315806;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 441263;
        result[1] += 3383022;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45891431;
        result[5] += 3971373;
      } else {
        result[0] += 5769249;
        result[1] += 110240;
        result[2] += 845176;
        result[3] += 6945147;
        result[4] += 3895161;
        result[5] += 36122115;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 120916;
        result[1] += 49696834;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3627506;
        result[5] += 241833;
      } else {
        result[0] += 39245679;
        result[1] += 2538691;
        result[2] += 3038106;
        result[3] += 3912082;
        result[4] += 2288984;
        result[5] += 2663545;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0;
        result[1] += 6947741;
        result[2] += 2210644;
        result[3] += 14842901;
        result[4] += 3789677;
        result[5] += 25896126;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23673048;
        result[3] += 16909320;
        result[4] += 0;
        result[5] += 13104723;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1451002;
        result[1] += 0;
        result[2] += 42079071;
        result[3] += 9040861;
        result[4] += 0;
        result[5] += 1116155;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52256902;
        result[3] += 1100145;
        result[4] += 0;
        result[5] += 330043;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 619466;
        result[1] += 3716798;
        result[2] += 0;
        result[3] += 0;
        result[4] += 44395094;
        result[5] += 4955731;
      } else {
        result[0] += 1212126;
        result[1] += 50505;
        result[2] += 555557;
        result[3] += 7575788;
        result[4] += 2323241;
        result[5] += 41969870;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 115954;
        result[1] += 51252039;
        result[2] += 0;
        result[3] += 231909;
        result[4] += 1971232;
        result[5] += 115954;
      } else {
        result[0] += 31519518;
        result[1] += 1847297;
        result[2] += 2944130;
        result[3] += 6032581;
        result[4] += 6754182;
        result[5] += 4589380;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2477865;
        result[3] += 15280172;
        result[4] += 2064888;
        result[5] += 33864165;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35013320;
        result[3] += 11671106;
        result[4] += 0;
        result[5] += 7002664;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 308546;
        result[1] += 2468372;
        result[2] += 28077731;
        result[3] += 17895697;
        result[4] += 0;
        result[5] += 4936744;
      } else {
        result[0] += 692330;
        result[1] += 251756;
        result[2] += 49784864;
        result[3] += 2454626;
        result[4] += 62939;
        result[5] += 440574;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 660087;
        result[1] += 440058;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49286509;
        result[5] += 3300435;
      } else {
        result[0] += 1991689;
        result[1] += 265558;
        result[2] += 486857;
        result[3] += 9250290;
        result[4] += 3717819;
        result[5] += 37974875;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 33151045;
        result[1] += 2640348;
        result[2] += 3285767;
        result[3] += 4400581;
        result[4] += 5984790;
        result[5] += 4224557;
      } else {
        result[0] += 126322;
        result[1] += 53434446;
        result[2] += 0;
        result[3] += 126322;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4400581;
        result[3] += 14961976;
        result[4] += 2640348;
        result[5] += 31684184;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23342213;
        result[3] += 25676434;
        result[4] += 0;
        result[5] += 4668442;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 1883757;
        result[2] += 24959788;
        result[3] += 17895697;
        result[4] += 0;
        result[5] += 8947848;
      } else {
        result[0] += 1230817;
        result[1] += 410272;
        result[2] += 48177717;
        result[3] += 3516621;
        result[4] += 58610;
        result[5] += 293051;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c80000))) ) ) {
        result[0] += 357913;
        result[1] += 178956;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52613349;
        result[5] += 536870;
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 38606447;
        result[1] += 1809677;
        result[2] += 0;
        result[3] += 1508064;
        result[4] += 6333870;
        result[5] += 5429031;
      } else {
        result[0] += 998407;
        result[1] += 181528;
        result[2] += 181528;
        result[3] += 6262737;
        result[4] += 3403661;
        result[5] += 42659227;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 51886266;
        result[2] += 0;
        result[3] += 112551;
        result[4] += 1688273;
        result[5] += 0;
      } else {
        result[0] += 35960221;
        result[1] += 2568587;
        result[2] += 1808864;
        result[3] += 4703047;
        result[4] += 4920110;
        result[5] += 3726260;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 230416;
        result[1] += 2073750;
        result[2] += 16820419;
        result[3] += 22580836;
        result[4] += 1382500;
        result[5] += 10599168;
      } else {
        result[0] += 837116;
        result[1] += 0;
        result[2] += 47771465;
        result[3] += 4408815;
        result[4] += 167423;
        result[5] += 502270;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 200324;
        result[1] += 400649;
        result[2] += 0;
        result[3] += 200324;
        result[4] += 44472142;
        result[5] += 8413648;
      } else {
        result[0] += 1833633;
        result[1] += 724924;
        result[2] += 724924;
        result[3] += 8102102;
        result[4] += 1705705;
        result[5] += 40595798;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 193466;
        result[1] += 43626807;
        result[2] += 193466;
        result[3] += 967334;
        result[4] += 8222347;
        result[5] += 483667;
      } else {
        result[0] += 39286740;
        result[1] += 1651910;
        result[2] += 1328710;
        result[3] += 3231998;
        result[4] += 4847998;
        result[5] += 3339732;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 443694;
        result[1] += 0;
        result[2] += 11092374;
        result[3] += 7542814;
        result[4] += 7542814;
        result[5] += 27065393;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10814665;
        result[3] += 35533902;
        result[4] += 0;
        result[5] += 7338523;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 3463683;
        result[2] += 21359380;
        result[3] += 19050258;
        result[4] += 0;
        result[5] += 9813769;
      } else {
        result[0] += 1318209;
        result[1] += 239674;
        result[2] += 48114658;
        result[3] += 3595117;
        result[4] += 0;
        result[5] += 419430;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7644188;
        result[1] += 355543;
        result[2] += 0;
        result[3] += 0;
        result[4] += 41243063;
        result[5] += 4444295;
      } else {
        result[0] += 43330;
        result[1] += 866619;
        result[2] += 433309;
        result[3] += 8232887;
        result[4] += 3119830;
        result[5] += 40991112;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 33786910;
        result[1] += 2324787;
        result[2] += 2851739;
        result[3] += 4339603;
        result[4] += 6509404;
        result[5] += 3874645;
      } else {
        result[0] += 244032;
        result[1] += 51734833;
        result[2] += 122016;
        result[3] += 366048;
        result[4] += 854112;
        result[5] += 366048;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42970000))) ) ) {
        result[0] += 1073741;
        result[1] += 6442450;
        result[2] += 6442450;
        result[3] += 3221225;
        result[4] += 8589934;
        result[5] += 27917287;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24159191;
        result[3] += 24159191;
        result[4] += 0;
        result[5] += 5368709;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 17895697;
        result[1] += 35791394;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 382568;
        result[1] += 0;
        result[2] += 48841225;
        result[3] += 3251830;
        result[4] += 382568;
        result[5] += 828898;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 236507;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52504556;
        result[5] += 946028;
      } else {
        result[0] += 0;
        result[1] += 23008753;
        result[2] += 23008753;
        result[3] += 0;
        result[4] += 7669584;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
        result[0] += 50943955;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2743136;
        result[5] += 0;
      } else {
        result[0] += 260797;
        result[1] += 372568;
        result[2] += 782393;
        result[3] += 10580939;
        result[4] += 3986480;
        result[5] += 37703911;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 193816;
        result[1] += 45934442;
        result[2] += 0;
        result[3] += 193816;
        result[4] += 7171199;
        result[5] += 193816;
      } else {
        result[0] += 42896604;
        result[1] += 2122718;
        result[2] += 1768932;
        result[3] += 2034271;
        result[4] += 2786068;
        result[5] += 2078495;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 490293;
        result[1] += 1961172;
        result[2] += 20102015;
        result[3] += 19611722;
        result[4] += 2941758;
        result[5] += 8580128;
      } else {
        result[0] += 2143301;
        result[1] += 627307;
        result[2] += 45950295;
        result[3] += 4077500;
        result[4] += 156826;
        result[5] += 731859;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 14068944;
        result[1] += 787860;
        result[2] += 0;
        result[3] += 0;
        result[4] += 33990569;
        result[5] += 4839716;
      } else {
        result[0] += 323694;
        result[1] += 184968;
        result[2] += 231210;
        result[3] += 6335169;
        result[4] += 3606884;
        result[5] += 43005163;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 0;
        result[1] += 48906051;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4781039;
        result[5] += 0;
      } else {
        result[0] += 36999592;
        result[1] += 753628;
        result[2] += 2870967;
        result[3] += 5490725;
        result[4] += 2763306;
        result[5] += 4808870;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 2941758;
        result[1] += 735439;
        result[2] += 6618956;
        result[3] += 5148077;
        result[4] += 2941758;
        result[5] += 35301101;
      } else {
        result[0] += 378078;
        result[1] += 3024624;
        result[2] += 17769671;
        result[3] += 23062764;
        result[4] += 0;
        result[5] += 9451952;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 869929;
        result[1] += 0;
        result[2] += 42750831;
        result[3] += 9444951;
        result[4] += 0;
        result[5] += 621378;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52519980;
        result[3] += 1167110;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 169895;
        result[1] += 2888229;
        result[2] += 0;
        result[3] += 169895;
        result[4] += 48590215;
        result[5] += 1868854;
      } else {
        result[0] += 216917;
        result[1] += 49565657;
        result[2] += 0;
        result[3] += 759211;
        result[4] += 2386092;
        result[5] += 759211;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
        result[0] += 1298520;
        result[1] += 268659;
        result[2] += 716424;
        result[3] += 8641875;
        result[4] += 3626901;
        result[5] += 39134710;
      } else {
        result[0] += 35140641;
        result[1] += 1616713;
        result[2] += 3233427;
        result[3] += 5124676;
        result[4] += 4057035;
        result[5] += 4514596;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42810000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 53687091;
      } else {
        result[0] += 252052;
        result[1] += 1008208;
        result[2] += 26213415;
        result[3] += 19408009;
        result[4] += 504104;
        result[5] += 6301301;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 13421772;
        result[1] += 35791394;
        result[2] += 0;
        result[3] += 4473924;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 594322;
        result[1] += 0;
        result[2] += 49592872;
        result[3] += 3037645;
        result[4] += 66035;
        result[5] += 396214;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 4158859;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49339192;
        result[5] += 189039;
      } else {
        result[0] += 2500030;
        result[1] += 381360;
        result[2] += 932214;
        result[3] += 9025533;
        result[4] += 2923764;
        result[5] += 37924188;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 399903;
        result[1] += 48988221;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4298966;
        result[5] += 0;
      } else {
        result[0] += 34961292;
        result[1] += 1552397;
        result[2] += 3072454;
        result[3] += 4075044;
        result[4] += 4366118;
        result[5] += 5659783;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1579032;
        result[1] += 0;
        result[2] += 12632256;
        result[3] += 16316664;
        result[4] += 526344;
        result[5] += 22632793;
      } else {
        result[0] += 3355443;
        result[1] += 5033164;
        result[2] += 36909875;
        result[3] += 0;
        result[4] += 8388607;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33628177;
        result[3] += 19468945;
        result[4] += 0;
        result[5] += 589968;
      } else {
        result[0] += 188817;
        result[1] += 0;
        result[2] += 50288377;
        result[3] += 2769322;
        result[4] += 0;
        result[5] += 440574;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 216480;
        result[1] += 3247203;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48924526;
        result[5] += 1298881;
      } else {
        result[0] += 2262973;
        result[1] += 819352;
        result[2] += 585251;
        result[3] += 9559111;
        result[4] += 2380023;
        result[5] += 38080378;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 32110789;
        result[1] += 3223016;
        result[2] += 3969084;
        result[3] += 4207826;
        result[4] += 6177447;
        result[5] += 3998927;
      } else {
        result[0] += 0;
        result[1] += 53098739;
        result[2] += 0;
        result[3] += 0;
        result[4] += 588351;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11852994;
        result[3] += 16036403;
        result[4] += 697234;
        result[5] += 25100458;
      } else {
        result[0] += 0;
        result[1] += 3668062;
        result[2] += 36013700;
        result[3] += 11337646;
        result[4] += 0;
        result[5] += 2667681;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3253763;
        result[1] += 271146;
        result[2] += 40129744;
        result[3] += 8405554;
        result[4] += 271146;
        result[5] += 1355734;
      } else {
        result[0] += 89181;
        result[1] += 0;
        result[2] += 51903466;
        result[3] += 1337718;
        result[4] += 0;
        result[5] += 356724;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52165594;
        result[5] += 1521496;
      } else {
        result[0] += 1624420;
        result[1] += 203052;
        result[2] += 203052;
        result[3] += 8446985;
        result[4] += 2355409;
        result[5] += 40854170;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 52771319;
        result[2] += 0;
        result[3] += 0;
        result[4] += 915771;
        result[5] += 0;
      } else {
        result[0] += 33615999;
        result[1] += 1785465;
        result[2] += 3386227;
        result[3] += 5017772;
        result[4] += 5818153;
        result[5] += 4063472;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 994205;
        result[2] += 1988410;
        result[3] += 14913080;
        result[4] += 3976821;
        result[5] += 31814572;
      } else {
        result[0] += 4260880;
        result[1] += 6817408;
        result[2] += 25565281;
        result[3] += 3408704;
        result[4] += 0;
        result[5] += 13634816;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 422733;
        result[1] += 0;
        result[2] += 30436776;
        result[3] += 18600252;
        result[4] += 0;
        result[5] += 4227330;
      } else {
        result[0] += 536870;
        result[1] += 0;
        result[2] += 50532974;
        result[3] += 2415919;
        result[4] += 0;
        result[5] += 201326;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 712660;
        result[1] += 0;
        result[2] += 0;
        result[3] += 475107;
        result[4] += 51786663;
        result[5] += 712660;
      } else {
        result[0] += 28689927;
        result[1] += 1988410;
        result[2] += 568117;
        result[3] += 852176;
        result[4] += 10510171;
        result[5] += 11078288;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 118253;
        result[2] += 0;
        result[3] += 1892056;
        result[4] += 4848393;
        result[5] += 46828387;
      } else {
        result[0] += 120916;
        result[1] += 241833;
        result[2] += 1692836;
        result[3] += 26118044;
        result[4] += 1813753;
        result[5] += 23699706;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 9203501;
        result[2] += 0;
        result[3] += 0;
        result[4] += 44483589;
        result[5] += 0;
      } else {
        result[0] += 109342;
        result[1] += 53249721;
        result[2] += 0;
        result[3] += 0;
        result[4] += 328027;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 41285209;
        result[1] += 1876600;
        result[2] += 1591030;
        result[3] += 1672622;
        result[4] += 5507414;
        result[5] += 1754213;
      } else {
        result[0] += 882285;
        result[1] += 485257;
        result[2] += 41776232;
        result[3] += 6440686;
        result[4] += 397028;
        result[5] += 3705600;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 891072;
        result[2] += 0;
        result[3] += 1782144;
        result[4] += 47895122;
        result[5] += 3118752;
      } else {
        result[0] += 2290995;
        result[1] += 43226;
        result[2] += 216131;
        result[3] += 7651058;
        result[4] += 3631010;
        result[5] += 39854668;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42560000))) ) ) {
        result[0] += 235469;
        result[1] += 51450129;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2001492;
        result[5] += 0;
      } else {
        result[0] += 32918506;
        result[1] += 1975110;
        result[2] += 3740739;
        result[3] += 5117331;
        result[4] += 6254516;
        result[5] += 3680887;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 852176;
        result[1] += 852176;
        result[2] += 5113056;
        result[3] += 1704352;
        result[4] += 5113056;
        result[5] += 40052274;
      } else {
        result[0] += 3555436;
        result[1] += 1066630;
        result[2] += 23110337;
        result[3] += 20977075;
        result[4] += 0;
        result[5] += 4977611;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 341955;
        result[1] += 0;
        result[2] += 36931247;
        result[3] += 15729975;
        result[4] += 0;
        result[5] += 683911;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51010172;
        result[3] += 2230765;
        result[4] += 0;
        result[5] += 446153;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8089835;
        result[1] += 0;
        result[2] += 0;
        result[3] += 183859;
        result[4] += 40081458;
        result[5] += 5331937;
      } else {
        result[0] += 0;
        result[1] += 229628;
        result[2] += 137776;
        result[3] += 8450320;
        result[4] += 3490349;
        result[5] += 41379015;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        result[0] += 330043;
        result[1] += 51816844;
        result[2] += 330043;
        result[3] += 110014;
        result[4] += 1100145;
        result[5] += 0;
      } else {
        result[0] += 33978361;
        result[1] += 2527580;
        result[2] += 2879522;
        result[3] += 4223299;
        result[4] += 5983007;
        result[5] += 4095320;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6049249;
        result[3] += 11342343;
        result[4] += 4536937;
        result[5] += 31758560;
      } else {
        result[0] += 2657776;
        result[1] += 2480591;
        result[2] += 26400582;
        result[3] += 12757328;
        result[4] += 1417480;
        result[5] += 7973330;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 189039;
        result[1] += 0;
        result[2] += 44802255;
        result[3] += 7939640;
        result[4] += 189039;
        result[5] += 567117;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51900829;
        result[3] += 1786261;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 5086145;
        result[2] += 0;
        result[3] += 188375;
        result[4] += 45210182;
        result[5] += 3202387;
      } else {
        result[0] += 1935428;
        result[1] += 168298;
        result[2] += 631117;
        result[3] += 8162457;
        result[4] += 3912930;
        result[5] += 38876859;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 240749;
        result[1] += 52603719;
        result[2] += 0;
        result[3] += 0;
        result[4] += 842622;
        result[5] += 0;
      } else {
        result[0] += 34823232;
        result[1] += 1956704;
        result[2] += 3179645;
        result[3] += 4005130;
        result[4] += 5442085;
        result[5] += 4280292;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 5804009;
        result[4] += 5804009;
        result[5] += 42079071;
      } else {
        result[0] += 6391320;
        result[1] += 2045222;
        result[2] += 23008753;
        result[3] += 15339168;
        result[4] += 766958;
        result[5] += 6135667;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 3834792;
        result[2] += 26843545;
        result[3] += 8947848;
        result[4] += 0;
        result[5] += 14060904;
      } else {
        result[0] += 416179;
        result[1] += 0;
        result[2] += 49941480;
        result[3] += 3260068;
        result[4] += 0;
        result[5] += 69363;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_3/test_data.csv", "r");
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
