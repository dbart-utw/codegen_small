
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
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 3422284;
        result[1] += 0;
        result[2] += 2281523;
        result[3] += 1140761;
        result[4] += 268078967;
        result[5] += 11407615;
      } else {
        result[0] += 14994386;
        result[1] += 2259428;
        result[2] += 1027012;
        result[3] += 55047883;
        result[4] += 17048411;
        result[5] += 195954031;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 3767515;
        result[1] += 243004728;
        result[2] += 0;
        result[3] += 0;
        result[4] += 39558909;
        result[5] += 0;
      } else {
        result[0] += 195510787;
        result[1] += 4560018;
        result[2] += 32300130;
        result[3] += 25080100;
        result[4] += 13300053;
        result[5] += 15580062;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 18179755;
        result[2] += 0;
        result[3] += 27269633;
        result[4] += 68174084;
        result[5] += 172707679;
      } else {
        result[0] += 4210752;
        result[1] += 0;
        result[2] += 130533319;
        result[3] += 63161283;
        result[4] += 4210752;
        result[5] += 84215045;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 5131382;
        result[1] += 3078829;
        result[2] += 209360412;
        result[3] += 54392656;
        result[4] += 0;
        result[5] += 14367871;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 272363779;
        result[3] += 13967373;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 57557661;
        result[1] += 9471513;
        result[2] += 0;
        result[3] += 0;
        result[4] += 192344591;
        result[5] += 26957385;
      } else {
        result[0] += 653724;
        result[1] += 1743264;
        result[2] += 653724;
        result[3] += 56438180;
        result[4] += 14381930;
        result[5] += 212460330;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42560000))) ) ) {
        result[0] += 1278264;
        result[1] += 274187644;
        result[2] += 0;
        result[3] += 639132;
        result[4] += 10226112;
        result[5] += 0;
      } else {
        result[0] += 181982542;
        result[1] += 11295468;
        result[2] += 20977297;
        result[3] += 26714678;
        result[4] += 28507610;
        result[5] += 16853555;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9236488;
        result[3] += 9236488;
        result[4] += 9236488;
        result[5] += 258621686;
      } else {
        result[0] += 2327895;
        result[1] += 16295268;
        result[2] += 104755299;
        result[3] += 90787926;
        result[4] += 0;
        result[5] += 72164762;
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 1925994;
        result[1] += 0;
        result[2] += 262256224;
        result[3] += 19259943;
        result[4] += 0;
        result[5] += 2888991;
      } else {
        result[0] += 132939463;
        result[1] += 0;
        result[2] += 153391689;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 45974297;
        result[1] += 3226266;
        result[2] += 0;
        result[3] += 5645966;
        result[4] += 200028523;
        result[5] += 31456098;
      } else {
        result[0] += 0;
        result[1] += 908987;
        result[2] += 1136234;
        result[3] += 50221575;
        result[4] += 23179188;
        result[5] += 210885166;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 177907984;
        result[1] += 15441070;
        result[2] += 14601881;
        result[3] += 24168631;
        result[4] += 35413759;
        result[5] += 18797824;
      } else {
        result[0] += 1417480;
        result[1] += 284913672;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 84955397;
        result[3] += 144738824;
        result[4] += 3146496;
        result[5] += 53490435;
      } else {
        result[0] += 3146496;
        result[1] += 0;
        result[2] += 213961740;
        result[3] += 59783427;
        result[4] += 0;
        result[5] += 9439488;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 5067808;
        result[1] += 0;
        result[2] += 240720880;
        result[3] += 27872944;
        result[4] += 0;
        result[5] += 12669520;
      } else {
        result[0] += 1239528;
        result[1] += 0;
        result[2] += 278893980;
        result[3] += 6197644;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
        result[0] += 0;
        result[1] += 278723320;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7607832;
        result[5] += 0;
      } else {
        result[0] += 136266030;
        result[1] += 18283796;
        result[2] += 689954;
        result[3] += 344977;
        result[4] += 119017166;
        result[5] += 11729227;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1844917;
        result[3] += 8117635;
        result[4] += 12914420;
        result[5] += 263454179;
      } else {
        result[0] += 21434846;
        result[1] += 17275846;
        result[2] += 9277769;
        result[3] += 82860076;
        result[4] += 43509538;
        result[5] += 111973076;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 209241996;
        result[1] += 16519104;
        result[2] += 7341824;
        result[3] += 20190017;
        result[4] += 14683648;
        result[5] += 18354561;
      } else {
        result[0] += 0;
        result[1] += 314995;
        result[2] += 218292067;
        result[3] += 49769331;
        result[4] += 944987;
        result[5] += 17009771;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 272485352;
        result[1] += 0;
        result[2] += 6645984;
        result[3] += 0;
        result[4] += 7199816;
        result[5] += 0;
      } else {
        result[0] += 20017071;
        result[1] += 0;
        result[2] += 262832851;
        result[3] += 3481229;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 7669584;
        result[2] += 3834792;
        result[3] += 2556528;
        result[4] += 254374551;
        result[5] += 17895697;
      } else {
        result[0] += 12393437;
        result[1] += 1923119;
        result[2] += 2350479;
        result[3] += 45513832;
        result[4] += 30342555;
        result[5] += 193807728;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 193877679;
        result[1] += 12998409;
        result[2] += 5492285;
        result[3] += 17575313;
        result[4] += 30573722;
        result[5] += 25813742;
      } else {
        result[0] += 8127303;
        result[1] += 278203849;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23373971;
        result[3] += 167513463;
        result[4] += 3895661;
        result[5] += 91548055;
      } else {
        result[0] += 10082082;
        result[1] += 2016416;
        result[2] += 157280492;
        result[3] += 54443247;
        result[4] += 0;
        result[5] += 62508913;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        result[0] += 35791394;
        result[1] += 64424509;
        result[2] += 107374182;
        result[3] += 28633115;
        result[4] += 50107951;
        result[5] += 0;
      } else {
        result[0] += 942912;
        result[1] += 0;
        result[2] += 263072640;
        result[3] += 19172557;
        result[4] += 0;
        result[5] += 3143042;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42870000))) ) ) {
        result[0] += 3217203;
        result[1] += 1072401;
        result[2] += 2144802;
        result[3] += 0;
        result[4] += 268100330;
        result[5] += 11796414;
      } else {
        result[0] += 0;
        result[1] += 81808900;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 204522252;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 19480125;
        result[1] += 1067404;
        result[2] += 0;
        result[3] += 13075700;
        result[4] += 16544763;
        result[5] += 236163159;
      } else {
        result[0] += 0;
        result[1] += 1659890;
        result[2] += 2489836;
        result[3] += 163499238;
        result[4] += 2489836;
        result[5] += 116192351;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 193643701;
        result[1] += 22691118;
        result[2] += 9614880;
        result[3] += 19614357;
        result[4] += 31344511;
        result[5] += 9422583;
      } else {
        result[0] += 0;
        result[1] += 284927568;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1403584;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 13106707;
        result[1] += 12098499;
        result[2] += 112919327;
        result[3] += 70574579;
        result[4] += 6049249;
        result[5] += 71582788;
      } else {
        result[0] += 6609953;
        result[1] += 600904;
        result[2] += 256285911;
        result[3] += 21332121;
        result[4] += 0;
        result[5] += 1502262;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 37590961;
        result[1] += 8797884;
        result[2] += 0;
        result[3] += 0;
        result[4] += 206350384;
        result[5] += 33591922;
      } else {
        result[0] += 931158;
        result[1] += 0;
        result[2] += 931158;
        result[3] += 43531646;
        result[4] += 10941109;
        result[5] += 229996080;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 278812610;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7518542;
        result[5] += 0;
      } else {
        result[0] += 178699478;
        result[1] += 10128020;
        result[2] += 16994474;
        result[3] += 24375913;
        result[4] += 35018917;
        result[5] += 21114347;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 68415408;
        result[3] += 174839376;
        result[4] += 0;
        result[5] += 43076368;
      } else {
        result[0] += 30140121;
        result[1] += 0;
        result[2] += 248656001;
        result[3] += 7535030;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 233155367;
        result[3] += 44994895;
        result[4] += 0;
        result[5] += 8180890;
      } else {
        result[0] += 3046076;
        result[1] += 0;
        result[2] += 273766089;
        result[3] += 6853671;
        result[4] += 0;
        result[5] += 2665316;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 61997628;
        result[1] += 3263033;
        result[2] += 0;
        result[3] += 5710307;
        result[4] += 187624402;
        result[5] += 27735781;
      } else {
        result[0] += 435153;
        result[1] += 2175768;
        result[2] += 1740614;
        result[3] += 53088754;
        result[4] += 23280724;
        result[5] += 205610136;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1092866;
        result[1] += 237698571;
        result[2] += 1092866;
        result[3] += 1092866;
        result[4] += 43714679;
        result[5] += 1639300;
      } else {
        result[0] += 190567583;
        result[1] += 7868349;
        result[2] += 17463897;
        result[3] += 24948424;
        result[4] += 21685938;
        result[5] += 23796959;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 15070060;
        result[1] += 17581737;
        result[2] += 30140121;
        result[3] += 67815273;
        result[4] += 7535030;
        result[5] += 148188930;
      } else {
        result[0] += 48530703;
        result[1] += 0;
        result[2] += 169857463;
        result[3] += 43677633;
        result[4] += 0;
        result[5] += 24265351;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 165770667;
        result[3] += 92304121;
        result[4] += 0;
        result[5] += 28256363;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 275129934;
        result[3] += 9451028;
        result[4] += 350038;
        result[5] += 1400152;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 2457778;
        result[1] += 6144445;
        result[2] += 0;
        result[3] += 0;
        result[4] += 270355595;
        result[5] += 7373334;
      } else {
        result[0] += 154568144;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2533904;
        result[4] += 40542464;
        result[5] += 88686640;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 876523;
        result[1] += 1753047;
        result[2] += 584349;
        result[3] += 19867875;
        result[4] += 15485256;
        result[5] += 247764099;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6170930;
        result[3] += 165380924;
        result[4] += 17278604;
        result[5] += 97500694;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cd0000))) ) ) {
        result[0] += 185241299;
        result[1] += 16578015;
        result[2] += 7748420;
        result[3] += 19100756;
        result[4] += 36039163;
        result[5] += 21623498;
      } else {
        result[0] += 6522349;
        result[1] += 279808803;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 8142118;
        result[2] += 120774751;
        result[3] += 100419456;
        result[4] += 6785098;
        result[5] += 50209728;
      } else {
        result[0] += 4730446;
        result[1] += 1391307;
        result[2] += 254052811;
        result[3] += 17530478;
        result[4] += 1947830;
        result[5] += 6678277;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 3463683;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 257467125;
        result[5] += 25400344;
      } else {
        result[0] += 7180036;
        result[1] += 4351537;
        result[2] += 6309729;
        result[3] += 46779025;
        result[4] += 14142496;
        result[5] += 207568328;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 275907963;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10423189;
        result[5] += 0;
      } else {
        result[0] += 174338069;
        result[1] += 8301812;
        result[2] += 19533677;
        result[3] += 24905438;
        result[4] += 34835057;
        result[5] += 24417096;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 5965232;
        result[2] += 29826161;
        result[3] += 29826161;
        result[4] += 23860929;
        result[5] += 196852667;
      } else {
        result[0] += 3310186;
        result[1] += 1655093;
        result[2] += 139027843;
        result[3] += 114201442;
        result[4] += 0;
        result[5] += 28136587;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 71582788;
        result[1] += 47721858;
        result[2] += 47721858;
        result[3] += 0;
        result[4] += 95443717;
        result[5] += 23860929;
      } else {
        result[0] += 1426307;
        result[1] += 0;
        result[2] += 270641774;
        result[3] += 12480187;
        result[4] += 0;
        result[5] += 1782883;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 3205199;
        result[1] += 3205199;
        result[2] += 0;
        result[3] += 0;
        result[4] += 267099956;
        result[5] += 12820797;
      } else {
        result[0] += 7109802;
        result[1] += 1292691;
        result[2] += 1077242;
        result[3] += 48906825;
        result[4] += 15296848;
        result[5] += 212647741;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1581940;
        result[1] += 228853997;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53258649;
        result[5] += 2636566;
      } else {
        result[0] += 184929802;
        result[1] += 7112684;
        result[2] += 17325770;
        result[3] += 27538856;
        result[4] += 20973301;
        result[5] += 28450738;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18472977;
        result[3] += 221675731;
        result[4] += 0;
        result[5] += 46182444;
      } else {
        result[0] += 3388534;
        result[1] += 0;
        result[2] += 191452191;
        result[3] += 60993618;
        result[4] += 1694267;
        result[5] += 28802542;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 18325193;
        result[1] += 0;
        result[2] += 206158430;
        result[3] += 38941036;
        result[4] += 0;
        result[5] += 22906492;
      } else {
        result[0] += 3257876;
        result[1] += 0;
        result[2] += 269317797;
        result[3] += 13031506;
        result[4] += 0;
        result[5] += 723972;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 40904450;
        result[2] += 0;
        result[3] += 0;
        result[4] += 245426702;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 286331153;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
        result[0] += 8561396;
        result[1] += 4185571;
        result[2] += 1141519;
        result[3] += 36909132;
        result[4] += 59929776;
        result[5] += 175603756;
      } else {
        result[0] += 158603408;
        result[1] += 8775188;
        result[2] += 16900363;
        result[3] += 32013187;
        result[4] += 39325845;
        result[5] += 30713159;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 35163474;
        result[2] += 35163474;
        result[3] += 105490424;
        result[4] += 5023353;
        result[5] += 105490424;
      } else {
        result[0] += 11426360;
        result[1] += 4704971;
        result[2] += 193575990;
        result[3] += 56459663;
        result[4] += 3360694;
        result[5] += 16803471;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 47721858;
        result[3] += 0;
        result[4] += 0;
        result[5] += 238609294;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 278414162;
        result[3] += 7916990;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42420000))) ) ) {
        result[0] += 0;
        result[1] += 190887435;
        result[2] += 0;
        result[3] += 0;
        result[4] += 95443717;
        result[5] += 0;
      } else {
        result[0] += 1183186;
        result[1] += 2366373;
        result[2] += 0;
        result[3] += 1183186;
        result[4] += 274499287;
        result[5] += 7099119;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 382284;
        result[1] += 0;
        result[2] += 0;
        result[3] += 6881122;
        result[4] += 13379960;
        result[5] += 265687785;
      } else {
        result[0] += 22400056;
        result[1] += 6817408;
        result[2] += 6817408;
        result[3] += 107130703;
        result[4] += 25321802;
        result[5] += 117843773;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 652234;
        result[1] += 279808803;
        result[2] += 0;
        result[3] += 0;
        result[4] += 5870114;
        result[5] += 0;
      } else {
        result[0] += 186832439;
        result[1] += 12709689;
        result[2] += 6354844;
        result[3] += 21061771;
        result[4] += 34860863;
        result[5] += 24511544;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 2281523;
        result[1] += 22815231;
        result[2] += 80994071;
        result[3] += 104950064;
        result[4] += 6844569;
        result[5] += 68445693;
      } else {
        result[0] += 10352882;
        result[1] += 1183186;
        result[2] += 250539758;
        result[3] += 19522578;
        result[4] += 887389;
        result[5] += 3845356;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 9336885;
        result[2] += 0;
        result[3] += 4149726;
        result[4] += 246908747;
        result[5] += 25935792;
      } else {
        result[0] += 7858144;
        result[1] += 1227835;
        result[2] += 736701;
        result[3] += 43956497;
        result[4] += 15225155;
        result[5] += 217326818;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 276414922;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9916230;
        result[5] += 0;
      } else {
        result[0] += 164640412;
        result[1] += 10204354;
        result[2] += 24825520;
        result[3] += 25739343;
        result[4] += 38380558;
        result[5] += 22540963;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 5669923;
        result[1] += 8504885;
        result[2] += 25514657;
        result[3] += 68039085;
        result[4] += 25514657;
        result[5] += 153087943;
      } else {
        result[0] += 0;
        result[1] += 3718586;
        result[2] += 141306283;
        result[3] += 111557592;
        result[4] += 0;
        result[5] += 29748691;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 5944591;
        result[1] += 0;
        result[2] += 235802126;
        result[3] += 39630609;
        result[4] += 0;
        result[5] += 4953826;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 280853513;
        result[3] += 5477639;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 1159235;
        result[1] += 2318470;
        result[2] += 0;
        result[3] += 0;
        result[4] += 280534975;
        result[5] += 2318470;
      } else {
        result[0] += 8342124;
        result[1] += 1962852;
        result[2] += 490713;
        result[3] += 40483839;
        result[4] += 17420318;
        result[5] += 217631304;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 487787;
        result[1] += 241942507;
        result[2] += 0;
        result[3] += 2438936;
        result[4] += 41461921;
        result[5] += 0;
      } else {
        result[0] += 181765380;
        result[1] += 8784200;
        result[2] += 23142989;
        result[3] += 25845820;
        result[4] += 20609085;
        result[5] += 26183674;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 6658864;
        result[1] += 39953184;
        result[2] += 0;
        result[3] += 39953184;
        result[4] += 26635456;
        result[5] += 173130464;
      } else {
        result[0] += 6927366;
        result[1] += 0;
        result[2] += 122383476;
        result[3] += 129310843;
        result[4] += 0;
        result[5] += 27709466;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 236420218;
        result[3] += 45970597;
        result[4] += 0;
        result[5] += 3940336;
      } else {
        result[0] += 2306022;
        result[1] += 0;
        result[2] += 272879353;
        result[3] += 8839753;
        result[4] += 0;
        result[5] += 2306022;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_1/test_data.csv", "r");
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
