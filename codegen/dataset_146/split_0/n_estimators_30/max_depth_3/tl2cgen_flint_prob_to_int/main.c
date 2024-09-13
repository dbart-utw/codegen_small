
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
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 3112295;
        result[1] += 1556147;
        result[2] += 0;
        result[3] += 0;
        result[4] += 132272543;
        result[5] += 6224590;
      } else {
        result[0] += 0;
        result[1] += 114532461;
        result[2] += 0;
        result[3] += 0;
        result[4] += 14316557;
        result[5] += 14316557;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 200512;
        result[2] += 0;
        result[3] += 6015360;
        result[4] += 8020480;
        result[5] += 128929223;
      } else {
        result[0] += 15502005;
        result[1] += 2507677;
        result[2] += 1595794;
        result[3] += 44682249;
        result[4] += 10486650;
        result[5] += 68391198;
      }
    }
  } else {
    if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 1651003;
        result[1] += 114155089;
        result[2] += 0;
        result[3] += 471715;
        result[4] += 26651911;
        result[5] += 235857;
      } else {
        result[0] += 113375788;
        result[1] += 3273603;
        result[2] += 2073281;
        result[3] += 6874566;
        result[4] += 11130250;
        result[5] += 6438086;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 4388216;
        result[1] += 1097054;
        result[2] += 48818913;
        result[3] += 53755657;
        result[4] += 2194108;
        result[5] += 32911626;
      } else {
        result[0] += 5062829;
        result[1] += 0;
        result[2] += 123195525;
        result[3] += 12235172;
        result[4] += 140634;
        result[5] += 2531414;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 11885444;
        result[2] += 0;
        result[3] += 2701237;
        result[4] += 117233698;
        result[5] += 11345196;
      } else {
        result[0] += 5368709;
        result[1] += 255652;
        result[2] += 894784;
        result[3] += 17256565;
        result[4] += 10865244;
        result[5] += 108524620;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 137875393;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5290182;
        result[5] += 0;
      } else {
        result[0] += 90092754;
        result[1] += 6060785;
        result[2] += 4914150;
        result[3] += 11056838;
        result[4] += 15315768;
        result[5] += 15725280;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9544371;
        result[3] += 7635497;
        result[4] += 24815366;
        result[5] += 101170340;
      } else {
        result[0] += 0;
        result[1] += 2793474;
        result[2] += 40505382;
        result[3] += 74725447;
        result[4] += 1396737;
        result[5] += 23744534;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 6781527;
        result[1] += 0;
        result[2] += 103229915;
        result[3] += 28256363;
        result[4] += 0;
        result[5] += 4897769;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 135768688;
        result[3] += 7158278;
        result[4] += 0;
        result[5] += 238609;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 50764776;
        result[1] += 8238143;
        result[2] += 445305;
        result[3] += 2449177;
        result[4] += 74588597;
        result[5] += 6679575;
      } else {
        result[0] += 2978612;
        result[1] += 2113854;
        result[2] += 1056927;
        result[3] += 26038839;
        result[4] += 13547883;
        result[5] += 97429459;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42910000))) ) ) {
        result[0] += 857278;
        result[1] += 128306075;
        result[2] += 1143038;
        result[3] += 0;
        result[4] += 10858866;
        result[5] += 2000317;
      } else {
        result[0] += 118844011;
        result[1] += 4283912;
        result[2] += 6633154;
        result[3] += 4560293;
        result[4] += 6080391;
        result[5] += 2763814;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22497447;
        result[3] += 89989790;
        result[4] += 1022611;
        result[5] += 29655726;
      } else {
        result[0] += 3609216;
        result[1] += 0;
        result[2] += 104667270;
        result[3] += 30076801;
        result[4] += 0;
        result[5] += 4812288;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 20452225;
        result[3] += 61356675;
        result[4] += 0;
        result[5] += 61356675;
      } else {
        result[0] += 2412902;
        result[1] += 0;
        result[2] += 130296760;
        result[3] += 8847310;
        result[4] += 0;
        result[5] += 1608601;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1114129;
        result[1] += 8355967;
        result[2] += 0;
        result[3] += 557064;
        result[4] += 120882996;
        result[5] += 12255419;
      } else {
        result[0] += 4764438;
        result[1] += 464823;
        result[2] += 1743087;
        result[3] += 23241165;
        result[4] += 6623732;
        result[5] += 106328329;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 311229;
        result[1] += 137874674;
        result[2] += 0;
        result[3] += 1244918;
        result[4] += 3734754;
        result[5] += 0;
      } else {
        result[0] += 89508427;
        result[1] += 5190051;
        result[2] += 8383929;
        result[3] += 13653827;
        result[4] += 15330613;
        result[5] += 11098725;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4772185;
        result[3] += 9544371;
        result[4] += 0;
        result[5] += 128849018;
      } else {
        result[0] += 0;
        result[1] += 4693953;
        result[2] += 61021393;
        result[3] += 49286509;
        result[4] += 7040929;
        result[5] += 21122789;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 107847196;
        result[3] += 32795638;
        result[4] += 0;
        result[5] += 2522741;
      } else {
        result[0] += 1218430;
        result[1] += 0;
        result[2] += 136667280;
        result[3] += 4467578;
        result[4] += 0;
        result[5] += 812286;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1301505;
        result[1] += 6941361;
        result[2] += 0;
        result[3] += 433835;
        result[4] += 130150524;
        result[5] += 4338350;
      } else {
        result[0] += 10295324;
        result[1] += 847850;
        result[2] += 1332336;
        result[3] += 12596632;
        result[4] += 10295324;
        result[5] += 107798107;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 138954824;
        result[2] += 0;
        result[3] += 1295616;
        result[4] += 971712;
        result[5] += 1943424;
      } else {
        result[0] += 83379503;
        result[1] += 6821229;
        result[2] += 9389222;
        result[3] += 19179693;
        result[4] += 11636215;
        result[5] += 12759712;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5965232;
        result[3] += 23860929;
        result[4] += 0;
        result[5] += 113339414;
      } else {
        result[0] += 0;
        result[1] += 12757328;
        result[2] += 59534200;
        result[3] += 48194352;
        result[4] += 1417480;
        result[5] += 21262214;
      }
    } else {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 103397360;
        result[3] += 32950807;
        result[4] += 0;
        result[5] += 6817408;
      } else {
        result[0] += 1232667;
        result[1] += 0;
        result[2] += 133480328;
        result[3] += 7748198;
        result[4] += 0;
        result[5] += 704381;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 4618244;
        result[1] += 1679361;
        result[2] += 0;
        result[3] += 0;
        result[4] += 127631481;
        result[5] += 9236488;
      } else {
        result[0] += 13818590;
        result[1] += 373475;
        result[2] += 248983;
        result[3] += 11453246;
        result[4] += 9336885;
        result[5] += 107934395;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 128081080;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15084495;
        result[5] += 0;
      } else {
        result[0] += 90401408;
        result[1] += 2881319;
        result[2] += 7923629;
        result[3] += 20079197;
        result[4] += 8283794;
        result[5] += 13596227;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2849066;
        result[1] += 3561332;
        result[2] += 16382130;
        result[3] += 61967189;
        result[4] += 5698132;
        result[5] += 52707724;
      } else {
        result[0] += 22457345;
        result[1] += 0;
        result[2] += 96847301;
        result[3] += 21053761;
        result[4] += 0;
        result[5] += 2807168;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 107743165;
        result[3] += 31732576;
        result[4] += 1475933;
        result[5] += 2213900;
      } else {
        result[0] += 6113130;
        result[1] += 0;
        result[2] += 132714095;
        result[3] += 3746757;
        result[4] += 0;
        result[5] += 591593;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0;
        result[1] += 4563046;
        result[2] += 0;
        result[3] += 0;
        result[4] += 136891387;
        result[5] += 1711142;
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 4838929;
        result[1] += 500578;
        result[2] += 0;
        result[3] += 7842403;
        result[4] += 7508684;
        result[5] += 122474980;
      } else {
        result[0] += 16354120;
        result[1] += 3753404;
        result[2] += 2681003;
        result[3] += 55496768;
        result[4] += 8579210;
        result[5] += 56301069;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0;
        result[1] += 55675501;
        result[2] += 0;
        result[3] += 0;
        result[4] += 87490074;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        result[0] += 107053515;
        result[1] += 4440007;
        result[2] += 5525342;
        result[3] += 4045340;
        result[4] += 15293359;
        result[5] += 6808011;
      } else {
        result[0] += 5179970;
        result[1] += 991909;
        result[2] += 105693447;
        result[3] += 18956488;
        result[4] += 4849334;
        result[5] += 7494425;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1154561;
        result[1] += 9813769;
        result[2] += 0;
        result[3] += 1154561;
        result[4] += 122960757;
        result[5] += 8081927;
      } else {
        result[0] += 6834241;
        result[1] += 589158;
        result[2] += 471327;
        result[3] += 21681042;
        result[4] += 8719549;
        result[5] += 104870257;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 254290;
        result[1] += 112905001;
        result[2] += 254290;
        result[3] += 1017162;
        result[4] += 28226250;
        result[5] += 508581;
      } else {
        result[0] += 94233480;
        result[1] += 4043292;
        result[2] += 8251618;
        result[3] += 10892136;
        result[4] += 12129878;
        result[5] += 13615170;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 7341824;
        result[1] += 4894549;
        result[2] += 23249110;
        result[3] += 67300057;
        result[4] += 4894549;
        result[5] += 35485484;
      } else {
        result[0] += 2236962;
        result[1] += 0;
        result[2] += 96189371;
        result[3] += 29080507;
        result[4] += 0;
        result[5] += 15658734;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 4051855;
        result[1] += 0;
        result[2] += 83738356;
        result[3] += 45921033;
        result[4] += 0;
        result[5] += 9454330;
      } else {
        result[0] += 3680349;
        result[1] += 0;
        result[2] += 132492564;
        result[3] += 6624628;
        result[4] += 0;
        result[5] += 368034;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
        result[0] += 12271335;
        result[1] += 0;
        result[2] += 908987;
        result[3] += 0;
        result[4] += 111805497;
        result[5] += 18179755;
      } else {
        result[0] += 109280232;
        result[1] += 1694267;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32191076;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 315342;
        result[1] += 1261370;
        result[2] += 315342;
        result[3] += 5991510;
        result[4] += 16870833;
        result[5] += 118411176;
      } else {
        result[0] += 479616;
        result[1] += 1918466;
        result[2] += 7673866;
        result[3] += 72422117;
        result[4] += 1438850;
        result[5] += 59232658;
      }
    }
  } else {
    if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 106114907;
        result[1] += 8283231;
        result[2] += 4925164;
        result[3] += 4365486;
        result[4] += 16118720;
        result[5] += 3358066;
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
        result[0] += 48806446;
        result[1] += 19522578;
        result[2] += 3253763;
        result[3] += 0;
        result[4] += 61821498;
        result[5] += 9761289;
      } else {
        result[0] += 2586550;
        result[1] += 258655;
        result[2] += 121050568;
        result[3] += 15648631;
        result[4] += 258655;
        result[5] += 3362515;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 3670912;
        result[2] += 0;
        result[3] += 1573248;
        result[4] += 127957511;
        result[5] += 9963904;
      } else {
        result[0] += 3966492;
        result[1] += 371858;
        result[2] += 123952;
        result[3] += 13634816;
        result[4] += 7685078;
        result[5] += 117383377;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 492824;
        result[1] += 117538691;
        result[2] += 0;
        result[3] += 985649;
        result[4] += 23409173;
        result[5] += 739237;
      } else {
        result[0] += 91636431;
        result[1] += 5144195;
        result[2] += 8457406;
        result[3] += 14909447;
        result[4] += 11944996;
        result[5] += 11073098;
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 7368816;
        result[2] += 11579568;
        result[3] += 47370962;
        result[4] += 4210752;
        result[5] += 72635476;
      } else {
        result[0] += 3329432;
        result[1] += 6658864;
        result[2] += 93224096;
        result[3] += 16647160;
        result[4] += 3329432;
        result[5] += 19976592;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 3829531;
        result[1] += 0;
        result[2] += 108699789;
        result[3] += 26806723;
        result[4] += 294579;
        result[5] += 3534952;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 140358408;
        result[3] += 2526451;
        result[4] += 0;
        result[5] += 280716;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 967334;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 133008559;
        result[5] += 9189682;
      } else {
        result[0] += 0;
        result[1] += 88861392;
        result[2] += 0;
        result[3] += 44430696;
        result[4] += 9873488;
        result[5] += 0;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 5797982;
        result[1] += 0;
        result[2] += 743331;
        result[3] += 6243981;
        result[4] += 9663304;
        result[5] += 120716976;
      } else {
        result[0] += 15671185;
        result[1] += 3718586;
        result[2] += 3452973;
        result[3] += 70121915;
        result[4] += 4781039;
        result[5] += 45419876;
      }
    }
  } else {
    if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1531182;
        result[1] += 121473822;
        result[2] += 3572759;
        result[3] += 0;
        result[4] += 15567023;
        result[5] += 1020788;
      } else {
        result[0] += 112783531;
        result[1] += 3587547;
        result[2] += 3699658;
        result[3] += 6390319;
        result[4] += 10314199;
        result[5] += 6390319;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1289779;
        result[1] += 5804009;
        result[2] += 47076968;
        result[3] += 41917848;
        result[4] += 14187579;
        result[5] += 32889389;
      } else {
        result[0] += 3811650;
        result[1] += 0;
        result[2] += 126546782;
        result[3] += 11282484;
        result[4] += 0;
        result[5] += 1524660;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 23427094;
        result[1] += 7809031;
        result[2] += 0;
        result[3] += 371858;
        result[4] += 95939529;
        result[5] += 15618062;
      } else {
        result[0] += 719425;
        result[1] += 1558754;
        result[2] += 1199041;
        result[3] += 22901696;
        result[4] += 11510800;
        result[5] += 105275859;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42460000))) ) ) {
        result[0] += 7274001;
        result[1] += 133577119;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2314455;
        result[5] += 0;
      } else {
        result[0] += 93456524;
        result[1] += 9205379;
        result[2] += 3769822;
        result[3] += 9468390;
        result[4] += 15517640;
        result[5] += 11747818;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 17278604;
        result[3] += 86393020;
        result[4] += 4936744;
        result[5] += 34557208;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 80530636;
        result[3] += 42502280;
        result[4] += 0;
        result[5] += 20132659;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 7635497;
        result[1] += 0;
        result[2] += 106515188;
        result[3] += 23670041;
        result[4] += 0;
        result[5] += 5344848;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 136304606;
        result[3] += 6174873;
        result[4] += 0;
        result[5] += 686097;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 17546755;
        result[1] += 12362487;
        result[2] += 0;
        result[3] += 0;
        result[4] += 98501106;
        result[5] += 14755226;
      } else {
        result[0] += 638561;
        result[1] += 255424;
        result[2] += 638561;
        result[3] += 21072542;
        result[4] += 9450716;
        result[5] += 111109769;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 298884;
        result[1] += 132106857;
        result[2] += 0;
        result[3] += 597768;
        result[4] += 9564297;
        result[5] += 597768;
      } else {
        result[0] += 99279306;
        result[1] += 5619583;
        result[2] += 2229993;
        result[3] += 9811970;
        result[4] += 13915158;
        result[5] += 12309563;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39414004;
        result[3] += 67235655;
        result[4] += 0;
        result[5] += 36515916;
      } else {
        result[0] += 1704352;
        result[1] += 0;
        result[2] += 102261126;
        result[3] += 27269633;
        result[4] += 3408704;
        result[5] += 8521760;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 1273998;
        result[1] += 0;
        result[2] += 130266342;
        result[3] += 9714238;
        result[4] += 159249;
        result[5] += 1751747;
      } else {
        result[0] += 71582788;
        result[1] += 0;
        result[2] += 62634939;
        result[3] += 4473924;
        result[4] += 4473924;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 8539701;
        result[2] += 0;
        result[3] += 502335;
        result[4] += 129100186;
        result[5] += 5023353;
      } else {
        result[0] += 5627577;
        result[1] += 1238067;
        result[2] += 900412;
        result[3] += 20596934;
        result[4] += 10579846;
        result[5] += 104222738;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 140038173;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3127403;
        result[5] += 0;
      } else {
        result[0] += 85868206;
        result[1] += 3503235;
        result[2] += 10198309;
        result[3] += 13156597;
        result[4] += 16426284;
        result[5] += 14012943;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32723560;
        result[3] += 79763678;
        result[4] += 0;
        result[5] += 30678337;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 85217605;
        result[3] += 13634816;
        result[4] += 3408704;
        result[5] += 40904450;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x426c0000))) ) ) {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1166657;
        result[1] += 0;
        result[2] += 132498991;
        result[3] += 8166604;
        result[4] += 166665;
        result[5] += 1166657;
      }
    }
  }
  if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3805065;
        result[1] += 1426899;
        result[2] += 1902532;
        result[3] += 0;
        result[4] += 113676321;
        result[5] += 22354757;
      } else {
        result[0] += 75350303;
        result[1] += 7535030;
        result[2] += 0;
        result[3] += 7535030;
        result[4] += 40186828;
        result[5] += 12558383;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 3006978;
        result[2] += 167054;
        result[3] += 5345739;
        result[4] += 8853880;
        result[5] += 125791924;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10287346;
        result[3] += 75869182;
        result[4] += 0;
        result[5] += 57009046;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 258421;
        result[1] += 122233425;
        result[2] += 0;
        result[3] += 0;
        result[4] += 20673729;
        result[5] += 0;
      } else {
        result[0] += 106573425;
        result[1] += 1941228;
        result[2] += 4950131;
        result[3] += 8638465;
        result[4] += 13103290;
        result[5] += 7959035;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 12288890;
        result[1] += 14746668;
        result[2] += 30722226;
        result[3] += 27650004;
        result[4] += 4915556;
        result[5] += 52842229;
      } else {
        result[0] += 1410498;
        result[1] += 0;
        result[2] += 123559650;
        result[3] += 16361780;
        result[4] += 0;
        result[5] += 1833647;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 1346384;
        result[1] += 12117462;
        result[2] += 897589;
        result[3] += 0;
        result[4] += 125662574;
        result[5] += 3141564;
      } else {
        result[0] += 7222962;
        result[1] += 431221;
        result[2] += 3557578;
        result[3] += 25334269;
        result[4] += 9594680;
        result[5] += 97024863;
      }
    } else {
      if ( LIKELY( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 87648960;
        result[1] += 7486331;
        result[2] += 10009814;
        result[3] += 11271555;
        result[4] += 15477359;
        result[5] += 11271555;
      } else {
        result[0] += 374778;
        result[1] += 139417786;
        result[2] += 749557;
        result[3] += 1124336;
        result[4] += 1499115;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 24368608;
        result[2] += 0;
        result[3] += 12184304;
        result[4] += 3046076;
        result[5] += 103566587;
      } else {
        result[0] += 0;
        result[1] += 1674451;
        result[2] += 64466370;
        result[3] += 50233535;
        result[4] += 2511676;
        result[5] += 24279542;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 47721858;
        result[1] += 47721858;
        result[2] += 0;
        result[3] += 47721858;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 2474059;
        result[1] += 0;
        result[2] += 130465404;
        result[3] += 8906614;
        result[4] += 0;
        result[5] += 1319498;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42be0000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 45473184;
        result[1] += 4247495;
        result[2] += 0;
        result[3] += 0;
        result[4] += 82201526;
        result[5] += 11243369;
      } else {
        result[0] += 2132026;
        result[1] += 2025425;
        result[2] += 3411242;
        result[3] += 23239088;
        result[4] += 10127125;
        result[5] += 102230668;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 96782339;
        result[1] += 5521813;
        result[2] += 9537678;
        result[3] += 11144024;
        result[4] += 12348783;
        result[5] += 7830936;
      } else {
        result[0] += 3072222;
        result[1] += 137021131;
        result[2] += 0;
        result[3] += 1843333;
        result[4] += 1228889;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1001157;
        result[1] += 3003473;
        result[2] += 32037052;
        result[3] += 55063683;
        result[4] += 10011578;
        result[5] += 42048630;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 140302264;
        result[3] += 0;
        result[4] += 0;
        result[5] += 2863311;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 4618244;
        result[1] += 2309122;
        result[2] += 71582788;
        result[3] += 50800688;
        result[4] += 2309122;
        result[5] += 11545611;
      } else {
        result[0] += 375270;
        result[1] += 0;
        result[2] += 130781660;
        result[3] += 11445740;
        result[4] += 0;
        result[5] += 562905;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 15625741;
        result[2] += 0;
        result[3] += 7601712;
        result[4] += 112758728;
        result[5] += 7179394;
      } else {
        result[0] += 10698814;
        result[1] += 220594;
        result[2] += 1102970;
        result[3] += 21507925;
        result[4] += 10698814;
        result[5] += 98936457;
      }
    } else {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 90153996;
        result[1] += 7205457;
        result[2] += 10207731;
        result[3] += 9864614;
        result[4] += 13724680;
        result[5] += 12009095;
      } else {
        result[0] += 0;
        result[1] += 143165576;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
      if ( UNLIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 23860929;
        result[2] += 26512143;
        result[3] += 5302428;
        result[4] += 23860929;
        result[5] += 63629145;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 67441635;
        result[3] += 60342515;
        result[4] += 0;
        result[5] += 15381425;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 2482640;
        result[1] += 1241320;
        result[2] += 106339749;
        result[3] += 27309040;
        result[4] += 1241320;
        result[5] += 4551506;
      } else {
        result[0] += 1928155;
        result[1] += 0;
        result[2] += 135452952;
        result[3] += 4820389;
        result[4] += 482038;
        result[5] += 482038;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 528286;
        result[2] += 0;
        result[3] += 2641431;
        result[4] += 129430133;
        result[5] += 10565725;
      } else {
        result[0] += 5159119;
        result[1] += 234505;
        result[2] += 938021;
        result[3] += 24388566;
        result[4] += 8676701;
        result[5] += 103768661;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 719425;
        result[1] += 116067234;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26378916;
        result[5] += 0;
      } else {
        result[0] += 96230341;
        result[1] += 1660650;
        result[2] += 11886763;
        result[3] += 13984427;
        result[4] += 8915072;
        result[5] += 10488320;
      }
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 2626891;
        result[2] += 17074793;
        result[3] += 35463032;
        result[4] += 14447902;
        result[5] += 73552956;
      } else {
        result[0] += 5965232;
        result[1] += 0;
        result[2] += 101408950;
        result[3] += 31814572;
        result[4] += 994205;
        result[5] += 2982616;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 31019208;
        result[1] += 4772185;
        result[2] += 78741067;
        result[3] += 11930464;
        result[4] += 0;
        result[5] += 16702650;
      } else {
        result[0] += 1639300;
        result[1] += 0;
        result[2] += 131508328;
        result[3] += 10017947;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 16384071;
        result[1] += 4681163;
        result[2] += 390096;
        result[3] += 2340581;
        result[4] += 100645010;
        result[5] += 18724653;
      } else {
        result[0] += 0;
        result[1] += 367405;
        result[2] += 734810;
        result[3] += 23513935;
        result[4] += 7225636;
        result[5] += 111323788;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 141362483;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1803092;
        result[5] += 0;
      } else {
        result[0] += 89568614;
        result[1] += 5688167;
        result[2] += 9774034;
        result[3] += 11376335;
        result[4] += 17064503;
        result[5] += 9693919;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6607641;
        result[3] += 59468777;
        result[4] += 13215283;
        result[5] += 63873872;
      } else {
        result[0] += 0;
        result[1] += 5873459;
        result[2] += 82962616;
        result[3] += 36709122;
        result[4] += 0;
        result[5] += 17620378;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 68470493;
        result[1] += 0;
        result[2] += 62245902;
        result[3] += 12449180;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 347911;
        result[1] += 0;
        result[2] += 134815700;
        result[3] += 7654052;
        result[4] += 173955;
        result[5] += 173955;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 8103711;
        result[2] += 0;
        result[3] += 2701237;
        result[4] += 128038647;
        result[5] += 4321979;
      } else {
        result[0] += 10787828;
        result[1] += 1411491;
        result[2] += 504104;
        result[3] += 25306027;
        result[4] += 9073874;
        result[5] += 96082249;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 313272;
        result[1] += 140032850;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2819453;
        result[5] += 0;
      } else {
        result[0] += 92182474;
        result[1] += 5026502;
        result[2] += 13284329;
        result[3] += 11040354;
        result[4] += 15348785;
        result[5] += 6283128;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 3046076;
        result[2] += 9138228;
        result[3] += 9138228;
        result[4] += 9138228;
        result[5] += 112704815;
      } else {
        result[0] += 0;
        result[1] += 4880644;
        result[2] += 43925801;
        result[3] += 50433328;
        result[4] += 3253763;
        result[5] += 40672038;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 25478619;
        result[1] += 6066337;
        result[2] += 82502196;
        result[3] += 13345943;
        result[4] += 2426535;
        result[5] += 13345943;
      } else {
        result[0] += 342501;
        result[1] += 0;
        result[2] += 133746788;
        result[3] += 8905035;
        result[4] += 0;
        result[5] += 171250;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 507679;
        result[1] += 10661266;
        result[2] += 0;
        result[3] += 3553755;
        result[4] += 120320005;
        result[5] += 8122869;
      } else {
        result[0] += 4909186;
        result[1] += 114167;
        result[2] += 2283342;
        result[3] += 22833425;
        result[4] += 9818372;
        result[5] += 103207082;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
        result[0] += 1815505;
        result[1] += 122157584;
        result[2] += 0;
        result[3] += 0;
        result[4] += 18414412;
        result[5] += 778073;
      } else {
        result[0] += 96273911;
        result[1] += 2490582;
        result[2] += 9618802;
        result[3] += 13741147;
        result[4] += 9447038;
        result[5] += 11594092;
      }
    }
  } else {
    if ( UNLIKELY( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 11930464;
        result[1] += 17895697;
        result[2] += 16404388;
        result[3] += 28334853;
        result[4] += 4473924;
        result[5] += 64126247;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 118796967;
        result[3] += 21322532;
        result[4] += 0;
        result[5] += 3046076;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 87851603;
        result[3] += 32537631;
        result[4] += 0;
        result[5] += 22776341;
      } else {
        result[0] += 2045222;
        result[1] += 0;
        result[2] += 132087287;
        result[3] += 8862630;
        result[4] += 0;
        result[5] += 170435;
      }
    }
  }
  if ( LIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 26389968;
        result[1] += 10555987;
        result[2] += 0;
        result[3] += 1649373;
        result[4] += 89725891;
        result[5] += 14844357;
      } else {
        result[0] += 503218;
        result[1] += 125804;
        result[2] += 1132240;
        result[3] += 23148036;
        result[4] += 11196604;
        result[5] += 107059671;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 288059;
        result[1] += 120120815;
        result[2] += 0;
        result[3] += 0;
        result[4] += 22180582;
        result[5] += 576119;
      } else {
        result[0] += 104403355;
        result[1] += 3112295;
        result[2] += 5281470;
        result[3] += 9525509;
        result[4] += 8676701;
        result[5] += 12166244;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42860000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8421504;
        result[3] += 0;
        result[4] += 8421504;
        result[5] += 126322567;
      } else {
        result[0] += 467861;
        result[1] += 935722;
        result[2] += 46786136;
        result[3] += 67839897;
        result[4] += 7953643;
        result[5] += 19182315;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 89478485;
        result[2] += 0;
        result[3] += 17895697;
        result[4] += 35791394;
        result[5] += 0;
      } else {
        result[0] += 2892233;
        result[1] += 0;
        result[2] += 127097610;
        result[3] += 10926216;
        result[4] += 0;
        result[5] += 2249515;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b30000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 34332272;
        result[1] += 1373290;
        result[2] += 686645;
        result[3] += 1716613;
        result[4] += 94757072;
        result[5] += 10299681;
      } else {
        result[0] += 1163947;
        result[1] += 775965;
        result[2] += 1293275;
        result[3] += 9828892;
        result[4] += 13191408;
        result[5] += 116912087;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 141065347;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2100228;
        result[5] += 0;
      } else {
        result[0] += 82579801;
        result[1] += 3761060;
        result[2] += 9484412;
        result[3] += 20604069;
        result[4] += 11037894;
        result[5] += 15698338;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 2714039;
        result[1] += 3392549;
        result[2] += 48852708;
        result[3] += 43424629;
        result[4] += 4071059;
        result[5] += 40710590;
      } else {
        result[0] += 117901063;
        result[1] += 4210752;
        result[2] += 21053761;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 1337996;
        result[1] += 0;
        result[2] += 96335715;
        result[3] += 38801885;
        result[4] += 0;
        result[5] += 6689980;
      } else {
        result[0] += 1087333;
        result[1] += 0;
        result[2] += 133560797;
        result[3] += 8517445;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 5302428;
        result[2] += 0;
        result[3] += 3534952;
        result[4] += 119599226;
        result[5] += 14728968;
      } else {
        result[0] += 4932491;
        result[1] += 739873;
        result[2] += 369936;
        result[3] += 18743469;
        result[4] += 9988296;
        result[5] += 108391508;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 137021131;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6144445;
        result[5] += 0;
      } else {
        result[0] += 96632518;
        result[1] += 4160802;
        result[2] += 7812119;
        result[3] += 8491433;
        result[4] += 17237610;
        result[5] += 8831091;
      }
    }
  } else {
    if ( UNLIKELY( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
      if ( UNLIKELY( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 2753184;
        result[2] += 21107745;
        result[3] += 88101893;
        result[4] += 917728;
        result[5] += 30285025;
      } else {
        result[0] += 2766484;
        result[1] += 0;
        result[2] += 62245902;
        result[3] += 20748634;
        result[4] += 19365391;
        result[5] += 38039162;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 7158278;
        result[1] += 7158278;
        result[2] += 0;
        result[3] += 21474836;
        result[4] += 42949672;
        result[5] += 64424509;
      } else {
        result[0] += 1775446;
        result[1] += 0;
        result[2] += 127509363;
        result[3] += 13073744;
        result[4] += 0;
        result[5] += 807021;
      }
    }
  }
  if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 688296;
        result[2] += 0;
        result[3] += 688296;
        result[4] += 141788984;
        result[5] += 0;
      } else {
        result[0] += 26030104;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 104120419;
        result[5] += 13015052;
      }
    } else {
      if ( LIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 5965232;
        result[1] += 447392;
        result[2] += 298261;
        result[3] += 5219578;
        result[4] += 9246110;
        result[5] += 121989001;
      } else {
        result[0] += 2443098;
        result[1] += 1465859;
        result[2] += 3908957;
        result[3] += 78179154;
        result[4] += 5863436;
        result[5] += 51305070;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1313445;
        result[1] += 112956326;
        result[2] += 1576134;
        result[3] += 1050756;
        result[4] += 25743534;
        result[5] += 525378;
      } else {
        result[0] += 105564637;
        result[1] += 3760093;
        result[2] += 3572089;
        result[3] += 10622265;
        result[4] += 11468286;
        result[5] += 8178204;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1954478;
        result[1] += 1954478;
        result[2] += 55214027;
        result[3] += 56191267;
        result[4] += 488619;
        result[5] += 27362704;
      } else {
        result[0] += 6852120;
        result[1] += 2332636;
        result[2] += 120859738;
        result[3] += 8747387;
        result[4] += 1020528;
        result[5] += 3353165;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 19690394;
        result[1] += 4102165;
        result[2] += 0;
        result[3] += 0;
        result[4] += 104605220;
        result[5] += 14767795;
      } else {
        result[0] += 123312;
        result[1] += 1109810;
        result[2] += 369936;
        result[3] += 25279020;
        result[4] += 6042302;
        result[5] += 110241193;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 85451703;
        result[1] += 7194250;
        result[2] += 10871311;
        result[3] += 11830544;
        result[4] += 18784986;
        result[5] += 9032780;
      } else {
        result[0] += 1997659;
        result[1] += 137838485;
        result[2] += 0;
        result[3] += 1331772;
        result[4] += 1664716;
        result[5] += 332943;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13015052;
        result[3] += 0;
        result[4] += 26030104;
        result[5] += 104120419;
      } else {
        result[0] += 0;
        result[1] += 6607641;
        result[2] += 26430567;
        result[3] += 85899345;
        result[4] += 0;
        result[5] += 24228020;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 87746643;
        result[1] += 32327710;
        result[2] += 18472977;
        result[3] += 0;
        result[4] += 0;
        result[5] += 4618244;
      } else {
        result[0] += 1971559;
        result[1] += 0;
        result[2] += 126331488;
        result[3] += 12435992;
        result[4] += 0;
        result[5] += 2426535;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( UNLIKELY( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 2759818;
        result[1] += 11039273;
        result[2] += 0;
        result[3] += 344977;
        result[4] += 117637256;
        result[5] += 11384250;
      } else {
        result[0] += 0;
        result[1] += 138086531;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5079044;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
        result[0] += 5911047;
        result[1] += 472883;
        result[2] += 945767;
        result[3] += 24589958;
        result[4] += 7329699;
        result[5] += 103916219;
      } else {
        result[0] += 93614656;
        result[1] += 3574982;
        result[2] += 9893556;
        result[3] += 12886564;
        result[4] += 11556338;
        result[5] += 11639477;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( LIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c40000))) ) ) {
        result[0] += 0;
        result[1] += 15907286;
        result[2] += 10604857;
        result[3] += 21209715;
        result[4] += 13256071;
        result[5] += 82187645;
      } else {
        result[0] += 19088743;
        result[1] += 0;
        result[2] += 95443717;
        result[3] += 28633115;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38177487;
        result[3] += 71582788;
        result[4] += 0;
        result[5] += 33405301;
      } else {
        result[0] += 771366;
        result[1] += 0;
        result[2] += 126349792;
        result[3] += 13884592;
        result[4] += 0;
        result[5] += 2159825;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( UNLIKELY( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 143165576;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 142818928;
        result[2] += 0;
        result[3] += 0;
        result[4] += 346647;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        result[0] += 4298705;
        result[1] += 654150;
        result[2] += 934501;
        result[3] += 20278675;
        result[4] += 30558187;
        result[5] += 86441356;
      } else {
        result[0] += 90661191;
        result[1] += 7135012;
        result[2] += 6902349;
        result[3] += 10857627;
        result[4] += 17915085;
        result[5] += 9694310;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( UNLIKELY( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 63517121;
        result[3] += 55451455;
        result[4] += 0;
        result[5] += 24196998;
      } else {
        result[0] += 9004124;
        result[1] += 0;
        result[2] += 112551553;
        result[3] += 17107836;
        result[4] += 900412;
        result[5] += 3601649;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 5159119;
        result[1] += 0;
        result[2] += 115435307;
        result[3] += 21281369;
        result[4] += 0;
        result[5] += 1289779;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 140347356;
        result[3] += 2536398;
        result[4] += 0;
        result[5] += 281822;
      }
    }
  }
  if ( UNLIKELY( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 611818;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1223637;
        result[4] += 135211933;
        result[5] += 6118187;
      } else {
        result[0] += 0;
        result[1] += 71582788;
        result[2] += 0;
        result[3] += 20452225;
        result[4] += 5113056;
        result[5] += 46017506;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 3583034;
        result[1] += 1090488;
        result[2] += 0;
        result[3] += 6075579;
        result[4] += 10281749;
        result[5] += 122134724;
      } else {
        result[0] += 908987;
        result[1] += 454493;
        result[2] += 6817408;
        result[3] += 78627443;
        result[4] += 7271902;
        result[5] += 49085340;
      }
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 1062453;
        result[1] += 115807405;
        result[2] += 0;
        result[3] += 1593679;
        result[4] += 22577131;
        result[5] += 2124906;
      } else {
        result[0] += 101972141;
        result[1] += 3494086;
        result[2] += 4137733;
        result[3] += 9930560;
        result[4] += 13240746;
        result[5] += 10390308;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 3817748;
        result[1] += 6999205;
        result[2] += 36904904;
        result[3] += 55993647;
        result[4] += 7635497;
        result[5] += 31814572;
      } else {
        result[0] += 3263437;
        result[1] += 0;
        result[2] += 128834829;
        result[3] += 9790311;
        result[4] += 0;
        result[5] += 1276997;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_0/test_data.csv", "r");
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
