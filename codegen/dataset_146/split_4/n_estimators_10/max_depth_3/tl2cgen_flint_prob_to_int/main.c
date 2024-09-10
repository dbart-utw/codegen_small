
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
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 38876859;
        result[2] += 0;
        result[3] += 5553837;
        result[4] += 338784058;
        result[5] += 46281975;
      } else {
        result[0] += 20942951;
        result[1] += 997283;
        result[2] += 2991850;
        result[3] += 63493711;
        result[4] += 24267230;
        result[5] += 316803702;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 4294967;
        result[1] += 344313211;
        result[2] += 715827;
        result[3] += 5726623;
        result[4] += 62992853;
        result[5] += 11453246;
      } else {
        result[0] += 292303495;
        result[1] += 11518088;
        result[2] += 30714903;
        result[3] += 30202988;
        result[4] += 36090011;
        result[5] += 28667242;
      }
    }
  } else {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 75350303;
        result[3] += 192143273;
        result[4] += 26372606;
        result[5] += 135630546;
      } else {
        result[0] += 24542670;
        result[1] += 0;
        result[2] += 343597383;
        result[3] += 49085340;
        result[4] += 12271335;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 8421504;
        result[1] += 92636549;
        result[2] += 75793540;
        result[3] += 101058054;
        result[4] += 33686018;
        result[5] += 117901063;
      } else {
        result[0] += 4169871;
        result[1] += 0;
        result[2] += 390404187;
        result[3] += 31795267;
        result[4] += 0;
        result[5] += 3127403;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1523038;
        result[1] += 3046076;
        result[2] += 0;
        result[3] += 9138228;
        result[4] += 379236473;
        result[5] += 36552913;
      } else {
        result[0] += 34686196;
        result[1] += 2380425;
        result[2] += 3400607;
        result[3] += 42507593;
        result[4] += 53389538;
        result[5] += 293132368;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 254463732;
        result[1] += 24970740;
        result[2] += 25208556;
        result[3] += 56600344;
        result[4] += 33294320;
        result[5] += 34959036;
      } else {
        result[0] += 4914150;
        result[1] += 422616919;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1965660;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 9336885;
        result[1] += 65358197;
        result[2] += 18673770;
        result[3] += 28010656;
        result[4] += 0;
        result[5] += 308117218;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 168730858;
        result[3] += 168730858;
        result[4] += 0;
        result[5] += 92035013;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ca0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 316778130;
        result[3] += 87454085;
        result[4] += 0;
        result[5] += 25264513;
      } else {
        result[0] += 4624460;
        result[1] += 0;
        result[2] += 404640256;
        result[3] += 18497840;
        result[4] += 0;
        result[5] += 1734172;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1651910;
        result[1] += 21474836;
        result[2] += 1651910;
        result[3] += 4955731;
        result[4] += 378287504;
        result[5] += 21474836;
      } else {
        result[0] += 16341480;
        result[1] += 5683993;
        result[2] += 7104991;
        result[3] += 66076419;
        result[4] += 17407228;
        result[5] += 316882615;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 413255256;
        result[2] += 0;
        result[3] += 0;
        result[4] += 16241472;
        result[5] += 0;
      } else {
        result[0] += 259265024;
        result[1] += 12820797;
        result[2] += 28015817;
        result[3] += 41311459;
        result[4] += 55794213;
        result[5] += 32289416;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 53687091;
        result[3] += 191739611;
        result[4] += 23008753;
        result[5] += 161061273;
      } else {
        result[0] += 2618882;
        result[1] += 0;
        result[2] += 282839309;
        result[3] += 120468594;
        result[4] += 5237764;
        result[5] += 18332177;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 26843545;
        result[1] += 107374182;
        result[2] += 26843545;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 214748364;
      } else {
        result[0] += 3082512;
        result[1] += 1027504;
        result[2] += 395589092;
        result[3] += 23118843;
        result[4] += 1027504;
        result[5] += 5651272;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 4880644;
        result[1] += 30910749;
        result[2] += 0;
        result[3] += 9761289;
        result[4] += 361167704;
        result[5] += 22776341;
      } else {
        result[0] += 13269004;
        result[1] += 698368;
        result[2] += 7682055;
        result[3] += 71233603;
        result[4] += 34569248;
        result[5] += 302044447;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 394806609;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34690120;
        result[5] += 0;
      } else {
        result[0] += 284889888;
        result[1] += 10329060;
        result[2] += 26182966;
        result[3] += 34109919;
        result[4] += 43478136;
        result[5] += 30506758;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 34359738;
        result[3] += 128849018;
        result[4] += 0;
        result[5] += 266287972;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 429496729;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 9336885;
        result[1] += 8169774;
        result[2] += 320955436;
        result[3] += 67692419;
        result[4] += 1167110;
        result[5] += 22175102;
      } else {
        result[0] += 1434045;
        result[1] += 0;
        result[2] += 417307339;
        result[3] += 9321297;
        result[4] += 0;
        result[5] += 1434045;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 3922344;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 411846178;
        result[5] += 13728205;
      } else {
        result[0] += 14810232;
        result[1] += 1009788;
        result[2] += 3029365;
        result[3] += 64626467;
        result[4] += 30293656;
        result[5] += 315727219;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 414590118;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14906611;
        result[5] += 0;
      } else {
        result[0] += 264573701;
        result[1] += 13472585;
        result[2] += 30197174;
        result[3] += 40185470;
        result[4] += 49244622;
        result[5] += 31823175;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 72796055;
        result[3] += 123753294;
        result[4] += 0;
        result[5] += 232947378;
      } else {
        result[0] += 55418932;
        result[1] += 96983132;
        result[2] += 263239930;
        result[3] += 0;
        result[4] += 0;
        result[5] += 13854733;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 211543165;
        result[3] += 166670372;
        result[4] += 0;
        result[5] += 51283191;
      } else {
        result[0] += 3976821;
        result[1] += 0;
        result[2] += 396190848;
        result[3] += 27340648;
        result[4] += 0;
        result[5] += 1988410;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 8454660;
        result[1] += 3381864;
        result[2] += 0;
        result[3] += 13527456;
        result[4] += 363550381;
        result[5] += 40582368;
      } else {
        result[0] += 13888334;
        result[1] += 694416;
        result[2] += 1736041;
        result[3] += 60067044;
        result[4] += 25693417;
        result[5] += 327417474;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 1793305;
        result[1] += 416943589;
        result[2] += 0;
        result[3] += 5379917;
        result[4] += 5379917;
        result[5] += 0;
      } else {
        result[0] += 261602553;
        result[1] += 17082256;
        result[2] += 35140641;
        result[3] += 37580963;
        result[4] += 51978865;
        result[5] += 26111448;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 8947848;
        result[2] += 44739242;
        result[3] += 17895697;
        result[4] += 71582788;
        result[5] += 286331153;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 79536431;
        result[3] += 270423866;
        result[4] += 0;
        result[5] += 79536431;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 33907636;
        result[1] += 33907636;
        result[2] += 113025455;
        result[3] += 135630546;
        result[4] += 56512727;
        result[5] += 56512727;
      } else {
        result[0] += 8985287;
        result[1] += 1797057;
        result[2] += 380526914;
        result[3] += 33245562;
        result[4] += 0;
        result[5] += 4941907;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 191613880;
        result[1] += 16596477;
        result[2] += 0;
        result[3] += 4526312;
        result[4] += 185075874;
        result[5] += 31684184;
      } else {
        result[0] += 29127083;
        result[1] += 9198026;
        result[2] += 7665021;
        result[3] += 70518201;
        result[4] += 48800639;
        result[5] += 264187756;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x426a0000))) ) ) {
        result[0] += 0;
        result[1] += 429496729;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 264305679;
        result[2] += 0;
        result[3] += 0;
        result[4] += 165191049;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
        result[0] += 412345445;
        result[1] += 0;
        result[2] += 7861005;
        result[3] += 5002457;
        result[4] += 2143910;
        result[5] += 2143910;
      } else {
        result[0] += 208432236;
        result[1] += 0;
        result[2] += 145270952;
        result[3] += 25264513;
        result[4] += 31580641;
        result[5] += 18948385;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 83362234;
        result[1] += 0;
        result[2] += 183034471;
        result[3] += 114170016;
        result[4] += 3624444;
        result[5] += 45305562;
      } else {
        result[0] += 1825703;
        result[1] += 0;
        result[2] += 390700531;
        result[3] += 29211254;
        result[4] += 0;
        result[5] += 7759239;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 61356675;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 327235603;
        result[5] += 40904450;
      } else {
        result[0] += 0;
        result[1] += 1556147;
        result[2] += 389036;
        result[3] += 60300718;
        result[4] += 24509324;
        result[5] += 342741502;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 377002684;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52494044;
        result[5] += 0;
      } else {
        result[0] += 315003816;
        result[1] += 11567936;
        result[2] += 14830688;
        result[3] += 25805397;
        result[4] += 34110582;
        result[5] += 28178307;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 50107951;
        result[3] += 219520550;
        result[4] += 47721858;
        result[5] += 112146368;
      } else {
        result[0] += 0;
        result[1] += 4569114;
        result[2] += 228455707;
        result[3] += 105089625;
        result[4] += 0;
        result[5] += 91382282;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42910000))) ) ) {
        result[0] += 170317668;
        result[1] += 59240928;
        result[2] += 155507436;
        result[3] += 22215348;
        result[4] += 14810232;
        result[5] += 7405116;
      } else {
        result[0] += 5080068;
        result[1] += 1385473;
        result[2] += 396707194;
        result[3] += 23091222;
        result[4] += 0;
        result[5] += 3232771;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 47458202;
        result[1] += 1186455;
        result[2] += 3559365;
        result[3] += 0;
        result[4] += 333393870;
        result[5] += 43898836;
      } else {
        result[0] += 0;
        result[1] += 1523038;
        result[2] += 1142278;
        result[3] += 70059750;
        result[4] += 25130127;
        result[5] += 331641534;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 396591738;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32904991;
        result[5] += 0;
      } else {
        result[0] += 283478215;
        result[1] += 21267350;
        result[2] += 19192486;
        result[3] += 38644331;
        result[4] += 42794058;
        result[5] += 24120287;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 45210182;
        result[3] += 0;
        result[4] += 82885333;
        result[5] += 301401213;
      } else {
        result[0] += 2180186;
        result[1] += 17441491;
        result[2] += 152613051;
        result[3] += 163513983;
        result[4] += 0;
        result[5] += 93748017;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        result[0] += 290949397;
        result[1] += 0;
        result[2] += 124692598;
        result[3] += 13854733;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 6210742;
        result[1] += 0;
        result[2] += 394621021;
        result[3] += 22454222;
        result[4] += 955498;
        result[5] += 5255243;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 14810232;
        result[2] += 0;
        result[3] += 3291162;
        result[4] += 386711614;
        result[5] += 24683720;
      } else {
        result[0] += 19167622;
        result[1] += 709911;
        result[2] += 709911;
        result[3] += 59277647;
        result[4] += 24137006;
        result[5] += 325494628;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 2629571;
        result[1] += 413719298;
        result[2] += 0;
        result[3] += 0;
        result[4] += 13147859;
        result[5] += 0;
      } else {
        result[0] += 259722446;
        result[1] += 14953019;
        result[2] += 32666596;
        result[3] += 38647804;
        result[4] += 49920080;
        result[5] += 33586782;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 12271335;
        result[2] += 0;
        result[3] += 24542670;
        result[4] += 49085340;
        result[5] += 343597383;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 189183083;
        result[3] += 138052520;
        result[4] += 0;
        result[5] += 102261126;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 16843008;
        result[1] += 5052902;
        result[2] += 318332870;
        result[3] += 74109239;
        result[4] += 0;
        result[5] += 15158708;
      } else {
        result[0] += 4129776;
        result[1] += 0;
        result[2] += 406094664;
        result[3] += 19272289;
        result[4] += 0;
        result[5] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_4/test_data.csv", "r");
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
