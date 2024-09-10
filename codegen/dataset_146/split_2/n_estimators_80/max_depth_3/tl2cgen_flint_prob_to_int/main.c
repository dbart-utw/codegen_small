
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
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 5213707;
        result[1] += 422733;
        result[2] += 422733;
        result[3] += 1409110;
        result[4] += 39877813;
        result[5] += 6340995;
      } else {
        result[0] += 0;
        result[1] += 93776;
        result[2] += 375106;
        result[3] += 7877232;
        result[4] += 2953962;
        result[5] += 42387013;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 36156612;
        result[1] += 3834792;
        result[2] += 1579032;
        result[3] += 3383640;
        result[4] += 6219452;
        result[5] += 2513561;
      } else {
        result[0] += 1677721;
        result[1] += 51450129;
        result[2] += 279620;
        result[3] += 0;
        result[4] += 279620;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9983136;
        result[3] += 28840172;
        result[4] += 443694;
        result[5] += 14420086;
      } else {
        result[0] += 1263225;
        result[1] += 631612;
        result[2] += 38528383;
        result[3] += 3158064;
        result[4] += 0;
        result[5] += 10105805;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 649678;
        result[1] += 0;
        result[2] += 47308426;
        result[3] += 4547751;
        result[4] += 295308;
        result[5] += 885925;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 357913;
        result[1] += 3937053;
        result[2] += 1252698;
        result[3] += 1252698;
        result[4] += 43844457;
        result[5] += 3042268;
      } else {
        result[0] += 2676244;
        result[1] += 932630;
        result[2] += 689335;
        result[3] += 7704340;
        result[4] += 4014367;
        result[5] += 37670171;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 118253;
        result[1] += 50730753;
        result[2] += 0;
        result[3] += 473014;
        result[4] += 1773802;
        result[5] += 591267;
      } else {
        result[0] += 33368786;
        result[1] += 1105973;
        result[2] += 4044701;
        result[3] += 4961079;
        result[4] += 5593063;
        result[5] += 4613487;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
        result[0] += 0;
        result[1] += 29826161;
        result[2] += 0;
        result[3] += 2982616;
        result[4] += 20878313;
        result[5] += 0;
      } else {
        result[0] += 454975;
        result[1] += 454975;
        result[2] += 19108964;
        result[3] += 13194285;
        result[4] += 0;
        result[5] += 20473890;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37078854;
        result[3] += 15063284;
        result[4] += 0;
        result[5] += 1544952;
      } else {
        result[0] += 762994;
        result[1] += 0;
        result[2] += 50288296;
        result[3] += 2358347;
        result[4] += 0;
        result[5] += 277452;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 6292992;
        result[2] += 0;
        result[3] += 393312;
        result[4] += 43460978;
        result[5] += 3539808;
      } else {
        result[0] += 30457099;
        result[1] += 0;
        result[2] += 1032444;
        result[3] += 3097332;
        result[4] += 9291996;
        result[5] += 9808218;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 59454;
        result[1] += 59454;
        result[2] += 59454;
        result[3] += 1843078;
        result[4] += 3983427;
        result[5] += 47682222;
      } else {
        result[0] += 838860;
        result[1] += 0;
        result[2] += 4697620;
        result[3] += 26675773;
        result[4] += 335544;
        result[5] += 21139292;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 36522296;
        result[1] += 2432535;
        result[2] += 616699;
        result[3] += 3426106;
        result[4] += 6269775;
        result[5] += 4419677;
      } else {
        result[0] += 871948;
        result[1] += 51444938;
        result[2] += 0;
        result[3] += 249128;
        result[4] += 996512;
        result[5] += 124564;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 965595;
        result[1] += 0;
        result[2] += 20856855;
        result[3] += 21629331;
        result[4] += 772476;
        result[5] += 9462832;
      } else {
        result[0] += 960716;
        result[1] += 56512;
        result[2] += 49166072;
        result[3] += 3221225;
        result[4] += 0;
        result[5] += 282563;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13532696;
        result[1] += 2773093;
        result[2] += 110923;
        result[3] += 221847;
        result[4] += 31946037;
        result[5] += 5102492;
      } else {
        result[0] += 557787;
        result[1] += 185929;
        result[2] += 557787;
        result[3] += 6135667;
        result[4] += 3950998;
        result[5] += 42298920;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 951898;
        result[1] += 45786331;
        result[2] += 285569;
        result[3] += 2189367;
        result[4] += 4283544;
        result[5] += 190379;
      } else {
        result[0] += 31085295;
        result[1] += 500870;
        result[2] += 4914794;
        result[3] += 8702630;
        result[4] += 3380878;
        result[5] += 5102621;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8259552;
        result[3] += 4129776;
        result[4] += 2064888;
        result[5] += 39232874;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31317469;
        result[3] += 17895697;
        result[4] += 0;
        result[5] += 4473924;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 30973321;
        result[3] += 21681325;
        result[4] += 0;
        result[5] += 1032444;
      } else {
        result[0] += 65632;
        result[1] += 196896;
        result[2] += 50274219;
        result[3] += 2297124;
        result[4] += 131264;
        result[5] += 721953;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3432051;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48784160;
        result[5] += 1470879;
      } else {
        result[0] += 1380883;
        result[1] += 585829;
        result[2] += 167379;
        result[3] += 8536373;
        result[4] += 2761767;
        result[5] += 40254857;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 255652;
        result[1] += 50619257;
        result[2] += 383479;
        result[3] += 127826;
        result[4] += 1917396;
        result[5] += 383479;
      } else {
        result[0] += 33190093;
        result[1] += 2037163;
        result[2] += 1880458;
        result[3] += 4011644;
        result[4] += 7271106;
        result[5] += 5296624;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6026102;
        result[3] += 31773992;
        result[4] += 0;
        result[5] += 15886996;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 29558061;
        result[3] += 14477417;
        result[4] += 0;
        result[5] += 9651611;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 195225;
        result[1] += 0;
        result[2] += 41192640;
        result[3] += 10737418;
        result[4] += 0;
        result[5] += 1561806;
      } else {
        result[0] += 1104672;
        result[1] += 0;
        result[2] += 50888587;
        result[3] += 1546541;
        result[4] += 0;
        result[5] += 147289;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 13161996;
        result[1] += 2540034;
        result[2] += 0;
        result[3] += 692736;
        result[4] += 32558623;
        result[5] += 4733700;
      } else {
        result[0] += 567424;
        result[1] += 261888;
        result[2] += 1003904;
        result[3] += 6940038;
        result[4] += 4495748;
        result[5] += 40418086;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 53100987;
        result[2] += 0;
        result[3] += 0;
        result[4] += 586103;
        result[5] += 0;
      } else {
        result[0] += 33344588;
        result[1] += 1185000;
        result[2] += 4015833;
        result[3] += 6978334;
        result[4] += 4081667;
        result[5] += 4081667;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8476909;
        result[3] += 11302545;
        result[4] += 2825636;
        result[5] += 31082000;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31138512;
        result[3] += 15032385;
        result[4] += 0;
        result[5] += 7516192;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41017571;
        result[3] += 10769092;
        result[4] += 158369;
        result[5] += 1742059;
      } else {
        result[0] += 436480;
        result[1] += 174592;
        result[2] += 51417393;
        result[3] += 1484033;
        result[4] += 0;
        result[5] += 174592;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 219130;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51495781;
        result[5] += 1972178;
      } else {
        result[0] += 1672361;
        result[1] += 171524;
        result[2] += 85762;
        result[3] += 7547067;
        result[4] += 2572863;
        result[5] += 41637512;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 217797;
        result[1] += 51291318;
        result[2] += 0;
        result[3] += 544493;
        result[4] += 1633481;
        result[5] += 0;
      } else {
        result[0] += 35353310;
        result[1] += 2464217;
        result[2] += 2365649;
        result[3] += 3581329;
        result[4] += 5881266;
        result[5] += 4041317;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 1193046;
        result[1] += 2087831;
        result[2] += 7754802;
        result[3] += 25948760;
        result[4] += 596523;
        result[5] += 16106127;
      } else {
        result[0] += 813440;
        result[1] += 0;
        result[2] += 33351071;
        result[3] += 8947848;
        result[4] += 0;
        result[5] += 10574730;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 985084;
        result[1] += 0;
        result[2] += 33000322;
        result[3] += 18224058;
        result[4] += 0;
        result[5] += 1477626;
      } else {
        result[0] += 1521239;
        result[1] += 0;
        result[2] += 49123371;
        result[3] += 3042479;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 180764;
        result[1] += 180764;
        result[2] += 361529;
        result[3] += 1084587;
        result[4] += 47721858;
        result[5] += 4157586;
      } else {
        result[0] += 2236962;
        result[1] += 43018;
        result[2] += 387166;
        result[3] += 7227108;
        result[4] += 3355443;
        result[5] += 40437392;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        result[0] += 388333;
        result[1] += 45143756;
        result[2] += 0;
        result[3] += 291250;
        result[4] += 7863751;
        result[5] += 0;
      } else {
        result[0] += 40096844;
        result[1] += 1572425;
        result[2] += 1871934;
        result[3] += 2957657;
        result[4] += 3931063;
        result[5] += 3257166;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3030722;
        result[3] += 21215060;
        result[4] += 3463683;
        result[5] += 25977624;
      } else {
        result[0] += 1080948;
        result[1] += 1801580;
        result[2] += 23060227;
        result[3] += 19817382;
        result[4] += 2161896;
        result[5] += 5765056;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 185127;
        result[1] += 0;
        result[2] += 40728138;
        result[3] += 11292801;
        result[4] += 0;
        result[5] += 1481023;
      } else {
        result[0] += 293773;
        result[1] += 0;
        result[2] += 50235253;
        result[3] += 2717404;
        result[4] += 0;
        result[5] += 440660;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 208899;
        result[2] += 208899;
        result[3] += 0;
        result[4] += 50971401;
        result[5] += 2297891;
      } else {
        result[0] += 1909817;
        result[1] += 212201;
        result[2] += 339523;
        result[3] += 8488077;
        result[4] += 2885946;
        result[5] += 39851524;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 34708431;
        result[1] += 3892233;
        result[2] += 3055885;
        result[3] += 3184554;
        result[4] += 5693598;
        result[5] += 3152387;
      } else {
        result[0] += 243478;
        result[1] += 53443612;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5070447;
        result[3] += 26843545;
        result[4] += 3579139;
        result[5] += 18193958;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36084766;
        result[3] += 14961976;
        result[4] += 0;
        result[5] += 2640348;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 18302417;
        result[1] += 0;
        result[2] += 14641933;
        result[3] += 8541128;
        result[4] += 6100805;
        result[5] += 6100805;
      } else {
        result[0] += 177185;
        result[1] += 295308;
        result[2] += 48784969;
        result[3] += 3839010;
        result[4] += 177185;
        result[5] += 413431;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 345254;
        result[1] += 3970427;
        result[2] += 0;
        result[3] += 1208391;
        result[4] += 45918862;
        result[5] += 2244154;
      } else {
        result[0] += 5002660;
        result[1] += 0;
        result[2] += 122016;
        result[3] += 5368709;
        result[4] += 4311236;
        result[5] += 38882469;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 0;
        result[1] += 52821170;
        result[2] += 0;
        result[3] += 371108;
        result[4] += 494811;
        result[5] += 0;
      } else {
        result[0] += 35360718;
        result[1] += 1564031;
        result[2] += 2822057;
        result[3] += 5916120;
        result[4] += 4182085;
        result[5] += 3842078;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 1594666;
        result[2] += 2126221;
        result[3] += 29767100;
        result[4] += 1594666;
        result[5] += 18604437;
      } else {
        result[0] += 9409077;
        result[1] += 1106950;
        result[2] += 27673758;
        result[3] += 3320851;
        result[4] += 553475;
        result[5] += 11622978;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 24245783;
        result[3] += 23091222;
        result[4] += 0;
        result[5] += 6350086;
      } else {
        result[0] += 482038;
        result[1] += 0;
        result[2] += 50132053;
        result[3] += 2952488;
        result[4] += 0;
        result[5] += 120509;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 596523;
        result[1] += 1988410;
        result[2] += 0;
        result[3] += 596523;
        result[4] += 48716064;
        result[5] += 1789569;
      } else {
        result[0] += 2206318;
        result[1] += 137894;
        result[2] += 45964;
        result[3] += 6986676;
        result[4] += 3033688;
        result[5] += 41276547;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 389036;
        result[1] += 44739242;
        result[2] += 97259;
        result[3] += 97259;
        result[4] += 8169774;
        result[5] += 194518;
      } else {
        result[0] += 36849322;
        result[1] += 1904271;
        result[2] += 3006744;
        result[3] += 4276258;
        result[4] += 3875359;
        result[5] += 3775134;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 9533221;
        result[4] += 11038467;
        result[5] += 33115402;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16372659;
        result[3] += 29318482;
        result[4] += 0;
        result[5] += 7995949;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 438261;
        result[1] += 0;
        result[2] += 38786184;
        result[3] += 10737418;
        result[4] += 1314785;
        result[5] += 2410440;
      } else {
        result[0] += 656499;
        result[1] += 145888;
        result[2] += 49602203;
        result[3] += 2917776;
        result[4] += 72944;
        result[5] += 291777;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42c20000))) ) ) {
        result[0] += 360316;
        result[1] += 6485688;
        result[2] += 0;
        result[3] += 0;
        result[4] += 43838452;
        result[5] += 3002633;
      } else {
        result[0] += 0;
        result[1] += 52096362;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1590728;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
        result[0] += 3799157;
        result[1] += 153501;
        result[2] += 345377;
        result[3] += 10015961;
        result[4] += 2187393;
        result[5] += 37185697;
      } else {
        result[0] += 38964651;
        result[1] += 1143848;
        result[2] += 4870581;
        result[3] += 3837427;
        result[4] += 3099460;
        result[5] += 1771120;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42960000))) ) ) {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 1376592;
        result[1] += 344148;
        result[2] += 17895697;
        result[3] += 12389328;
        result[4] += 688296;
        result[5] += 20993029;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
        result[0] += 21091357;
        result[1] += 0;
        result[2] += 17256565;
        result[3] += 15339168;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 49427137;
        result[3] += 3851465;
        result[4] += 0;
        result[5] += 408488;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6894243;
        result[1] += 3960523;
        result[2] += 0;
        result[3] += 0;
        result[4] += 35938080;
        result[5] += 6894243;
      } else {
        result[0] += 307536;
        result[1] += 131801;
        result[2] += 307536;
        result[3] += 9489698;
        result[4] += 3031431;
        result[5] += 40419086;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 296613;
        result[1] += 45876262;
        result[2] += 0;
        result[3] += 0;
        result[4] += 7415344;
        result[5] += 98871;
      } else {
        result[0] += 36145107;
        result[1] += 1160622;
        result[2] += 3382386;
        result[3] += 4609330;
        result[4] += 3083940;
        result[5] += 5305703;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
        result[0] += 3904515;
        result[1] += 3416451;
        result[2] += 9273224;
        result[3] += 17082256;
        result[4] += 976128;
        result[5] += 19034514;
      } else {
        result[0] += 6529511;
        result[1] += 0;
        result[2] += 37000562;
        result[3] += 10157017;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31250694;
        result[3] += 18429896;
        result[4] += 0;
        result[5] += 4006499;
      } else {
        result[0] += 260301;
        result[1] += 0;
        result[2] += 49522274;
        result[3] += 3774365;
        result[4] += 0;
        result[5] += 130150;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 522926;
        result[1] += 348617;
        result[2] += 174308;
        result[3] += 3137557;
        result[4] += 42879949;
        result[5] += 6623732;
      } else {
        result[0] += 1953872;
        result[1] += 88812;
        result[2] += 266437;
        result[3] += 7149397;
        result[4] += 2664371;
        result[5] += 41564199;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 89181;
        result[1] += 45482419;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8115490;
        result[5] += 0;
      } else {
        result[0] += 39014842;
        result[1] += 815124;
        result[2] += 2186016;
        result[3] += 4594340;
        result[4] += 3927420;
        result[5] += 3149346;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 925639;
        result[3] += 28694824;
        result[4] += 3702558;
        result[5] += 20364069;
      } else {
        result[0] += 2195382;
        result[1] += 199580;
        result[2] += 30735360;
        result[3] += 15567260;
        result[4] += 598740;
        result[5] += 4390765;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31580641;
        result[3] += 13684944;
        result[4] += 3158064;
        result[5] += 5263440;
      } else {
        result[0] += 65312;
        result[1] += 0;
        result[2] += 50878642;
        result[3] += 2351259;
        result[4] += 0;
        result[5] += 391876;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 913822;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51630989;
        result[5] += 1142278;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 46976204;
        result[3] += 0;
        result[4] += 6710886;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 2668019;
        result[1] += 326696;
        result[2] += 0;
        result[3] += 2177975;
        result[4] += 4628197;
        result[5] += 43886202;
      } else {
        result[0] += 635350;
        result[1] += 0;
        result[2] += 2223725;
        result[3] += 27320058;
        result[4] += 317675;
        result[5] += 23190281;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 311530;
        result[1] += 44237332;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9034384;
        result[5] += 103843;
      } else {
        result[0] += 41236817;
        result[1] += 943202;
        result[2] += 2112773;
        result[3] += 3282344;
        result[4] += 3508713;
        result[5] += 2603239;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 514572;
        result[1] += 1029145;
        result[2] += 11320600;
        result[3] += 18353095;
        result[4] += 5145727;
        result[5] += 17323949;
      } else {
        result[0] += 907237;
        result[1] += 0;
        result[2] += 47709999;
        result[3] += 4482818;
        result[4] += 160100;
        result[5] += 426935;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 3181457;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47523017;
        result[5] += 2982616;
      } else {
        result[0] += 1947429;
        result[1] += 619636;
        result[2] += 88519;
        result[3] += 8984731;
        result[4] += 1814650;
        result[5] += 40232123;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 50867637;
        result[2] += 0;
        result[3] += 704863;
        result[4] += 2114590;
        result[5] += 0;
      } else {
        result[0] += 31528153;
        result[1] += 1576407;
        result[2] += 4907684;
        result[3] += 5175376;
        result[4] += 6335374;
        result[5] += 4164095;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4006499;
        result[3] += 24038996;
        result[4] += 4006499;
        result[5] += 21635096;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 31471743;
        result[3] += 0;
        result[4] += 0;
        result[5] += 22215348;
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 801299;
        result[2] += 23237696;
        result[3] += 22436396;
        result[4] += 0;
        result[5] += 7211698;
      } else {
        result[0] += 1052688;
        result[1] += 467861;
        result[2] += 48657581;
        result[3] += 2690202;
        result[4] += 0;
        result[5] += 818757;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 427785;
        result[4] += 51762056;
        result[5] += 1497249;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 46017506;
        result[3] += 0;
        result[4] += 7669584;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 63384;
        result[3] += 1711394;
        result[4] += 2028319;
        result[5] += 49883991;
      } else {
        result[0] += 5534751;
        result[1] += 332085;
        result[2] += 221390;
        result[3] += 17711205;
        result[4] += 3763631;
        result[5] += 26124027;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 428639;
        result[1] += 45221462;
        result[2] += 0;
        result[3] += 321479;
        result[4] += 7608350;
        result[5] += 107159;
      } else {
        result[0] += 40660359;
        result[1] += 1772868;
        result[2] += 1426003;
        result[3] += 2273896;
        result[4] += 4470712;
        result[5] += 3083250;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2208646;
        result[1] += 1698958;
        result[2] += 14611043;
        result[3] += 19198231;
        result[4] += 4587188;
        result[5] += 11383022;
      } else {
        result[0] += 2302370;
        result[1] += 0;
        result[2] += 46570673;
        result[3] += 4290781;
        result[4] += 0;
        result[5] += 523265;
      }
    }
  }
  if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
        result[0] += 230416;
        result[1] += 2995417;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49539590;
        result[5] += 921666;
      } else {
        result[0] += 39841472;
        result[1] += 1695381;
        result[2] += 282563;
        result[3] += 0;
        result[4] += 9889727;
        result[5] += 1977945;
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 111268;
        result[1] += 55634;
        result[2] += 0;
        result[3] += 3059886;
        result[4] += 4395109;
        result[5] += 46065193;
      } else {
        result[0] += 2034787;
        result[1] += 626088;
        result[2] += 5321752;
        result[3] += 23478319;
        result[4] += 3756531;
        result[5] += 18469611;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
        result[0] += 451152;
        result[1] += 46355870;
        result[2] += 112788;
        result[3] += 112788;
        result[4] += 6654492;
        result[5] += 0;
      } else {
        result[0] += 46280261;
        result[1] += 1143336;
        result[2] += 1690149;
        result[3] += 1292467;
        result[4] += 2435803;
        result[5] += 845074;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 2123218;
        result[1] += 4549753;
        result[2] += 15469161;
        result[3] += 11526042;
        result[4] += 3336485;
        result[5] += 16682429;
      } else {
        result[0] += 1475209;
        result[1] += 52686;
        result[2] += 46732531;
        result[3] += 4372942;
        result[4] += 0;
        result[5] += 1053721;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10737418;
        result[1] += 1833217;
        result[2] += 0;
        result[3] += 1571329;
        result[4] += 34045472;
        result[5] += 5499653;
      } else {
        result[0] += 238080;
        result[1] += 595200;
        result[2] += 119040;
        result[3] += 9483529;
        result[4] += 3968003;
        result[5] += 39283237;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 35514027;
        result[1] += 3261831;
        result[2] += 3361683;
        result[3] += 2962275;
        result[4] += 5425291;
        result[5] += 3161979;
      } else {
        result[0] += 706409;
        result[1] += 52415554;
        result[2] += 0;
        result[3] += 565127;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 6882960;
        result[3] += 31661617;
        result[4] += 0;
        result[5] += 15142512;
      } else {
        result[0] += 0;
        result[1] += 1505245;
        result[2] += 31108407;
        result[3] += 18062946;
        result[4] += 0;
        result[5] += 3010491;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 1032444;
        result[1] += 5162220;
        result[2] += 19616437;
        result[3] += 3097332;
        result[4] += 1032444;
        result[5] += 23746213;
      } else {
        result[0] += 61567;
        result[1] += 0;
        result[2] += 49931457;
        result[3] += 3201523;
        result[4] += 0;
        result[5] += 492542;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7772878;
        result[1] += 4519115;
        result[2] += 0;
        result[3] += 1084587;
        result[4] += 33802983;
        result[5] += 6507526;
      } else {
        result[0] += 272985;
        result[1] += 545970;
        result[2] += 45497;
        result[3] += 8098561;
        result[4] += 2729852;
        result[5] += 41994224;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 125144;
        result[1] += 51684775;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1877171;
        result[5] += 0;
      } else {
        result[0] += 34444406;
        result[1] += 1475272;
        result[2] += 2533620;
        result[3] += 3944750;
        result[4] += 6670797;
        result[5] += 4618244;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 1512312;
        result[1] += 2016416;
        result[2] += 6049249;
        result[3] += 19660061;
        result[4] += 3780781;
        result[5] += 20668269;
      } else {
        result[0] += 5293093;
        result[1] += 0;
        result[2] += 33459912;
        result[3] += 13043694;
        result[4] += 0;
        result[5] += 1890390;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41634887;
        result[3] += 9860894;
        result[4] += 0;
        result[5] += 2191309;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51616303;
        result[3] += 2070787;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 405185;
        result[1] += 3038891;
        result[2] += 405185;
        result[3] += 0;
        result[4] += 48622271;
        result[5] += 1215556;
      } else {
        result[0] += 2967819;
        result[1] += 837077;
        result[2] += 1103420;
        result[3] += 8675164;
        result[4] += 3728798;
        result[5] += 36374811;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
        result[0] += 114716;
        result[1] += 50360326;
        result[2] += 0;
        result[3] += 1261876;
        result[4] += 1376592;
        result[5] += 573580;
      } else {
        result[0] += 34218876;
        result[1] += 1195999;
        result[2] += 3853776;
        result[3] += 4285665;
        result[4] += 5581331;
        result[5] += 4551442;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 10182034;
        result[2] += 3702558;
        result[3] += 2776918;
        result[4] += 2776918;
        result[5] += 34248661;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 21359380;
        result[3] += 23668502;
        result[4] += 577280;
        result[5] += 8081927;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 10545678;
        result[1] += 0;
        result[2] += 22050055;
        result[3] += 18215263;
        result[4] += 0;
        result[5] += 2876094;
      } else {
        result[0] += 374997;
        result[1] += 0;
        result[2] += 49687121;
        result[3] += 3562472;
        result[4] += 0;
        result[5] += 62499;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
        result[0] += 688296;
        result[1] += 229432;
        result[2] += 0;
        result[3] += 229432;
        result[4] += 50245610;
        result[5] += 2294320;
      } else {
        result[0] += 0;
        result[1] += 2440322;
        result[2] += 9761289;
        result[3] += 7320966;
        result[4] += 2440322;
        result[5] += 31724190;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 132560;
        result[3] += 1789569;
        result[4] += 2916335;
        result[5] += 48848624;
      } else {
        result[0] += 4290781;
        result[1] += 418612;
        result[2] += 0;
        result[3] += 20512027;
        result[4] += 4500087;
        result[5] += 23965582;
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 211366;
        result[1] += 43964232;
        result[2] += 0;
        result[3] += 211366;
        result[4] += 9194442;
        result[5] += 105683;
      } else {
        result[0] += 40274142;
        result[1] += 1482483;
        result[2] += 2823778;
        result[3] += 3000264;
        result[4] += 3176750;
        result[5] += 2929670;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7620103;
        result[3] += 26323993;
        result[4] += 2770946;
        result[5] += 16972048;
      } else {
        result[0] += 1262631;
        result[1] += 202021;
        result[2] += 44899175;
        result[3] += 5555578;
        result[4] += 555557;
        result[5] += 1212126;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        result[0] += 6026102;
        result[1] += 1095654;
        result[2] += 0;
        result[3] += 547827;
        result[4] += 38895749;
        result[5] += 7121756;
      } else {
        result[0] += 148306;
        result[1] += 444920;
        result[2] += 0;
        result[3] += 6426631;
        result[4] += 3806543;
        result[5] += 42860688;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 42910485;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10580667;
        result[5] += 195938;
      } else {
        result[0] += 39643117;
        result[1] += 1315511;
        result[2] += 1208848;
        result[3] += 4195415;
        result[4] += 4159860;
        result[5] += 3164338;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 1412818;
        result[2] += 3296575;
        result[3] += 10831606;
        result[4] += 1883757;
        result[5] += 36262333;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9010420;
        result[3] += 34164512;
        result[4] += 0;
        result[5] += 10512157;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
        result[0] += 16860408;
        result[1] += 6655424;
        result[2] += 17747798;
        result[3] += 5324339;
        result[4] += 3105864;
        result[5] += 3993254;
      } else {
        result[0] += 318933;
        result[1] += 53155;
        result[2] += 46617404;
        result[3] += 4943464;
        result[4] += 106311;
        result[5] += 1647821;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2368548;
        result[2] += 263172;
        result[3] += 0;
        result[4] += 49476338;
        result[5] += 1579032;
      } else {
        result[0] += 27889398;
        result[1] += 11852994;
        result[2] += 697234;
        result[3] += 3486174;
        result[4] += 3486174;
        result[5] += 6275114;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 110467;
        result[1] += 607569;
        result[2] += 0;
        result[3] += 2706448;
        result[4] += 4529157;
        result[5] += 45733448;
      } else {
        result[0] += 176602;
        result[1] += 0;
        result[2] += 4768261;
        result[3] += 27726556;
        result[4] += 176602;
        result[5] += 20839068;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0;
        result[1] += 26155249;
        result[2] += 0;
        result[3] += 0;
        result[4] += 27531841;
        result[5] += 0;
      } else {
        result[0] += 370255;
        result[1] += 52699742;
        result[2] += 0;
        result[3] += 0;
        result[4] += 617093;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 36324747;
        result[1] += 1838365;
        result[2] += 1225577;
        result[3] += 2723504;
        result[4] += 7898164;
        result[5] += 3676731;
      } else {
        result[0] += 1763122;
        result[1] += 220390;
        result[2] += 39978810;
        result[3] += 8683380;
        result[4] += 352624;
        result[5] += 2688762;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 542293;
        result[1] += 6145996;
        result[2] += 0;
        result[3] += 0;
        result[4] += 43383508;
        result[5] += 3615292;
      } else {
        result[0] += 3255078;
        result[1] += 217005;
        result[2] += 0;
        result[3] += 7725385;
        result[4] += 2213453;
        result[5] += 40276168;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0;
        result[1] += 52581407;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1105683;
        result[5] += 0;
      } else {
        result[0] += 35768332;
        result[1] += 1764202;
        result[2] += 1971755;
        result[3] += 3147890;
        result[4] += 5742304;
        result[5] += 5292606;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
        result[0] += 1179936;
        result[1] += 1769904;
        result[2] += 4129776;
        result[3] += 9439488;
        result[4] += 10029456;
        result[5] += 27138529;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14358175;
        result[3] += 31525559;
        result[4] += 0;
        result[5] += 7803356;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 2059607;
        result[1] += 0;
        result[2] += 41741370;
        result[3] += 7551892;
        result[4] += 274614;
        result[5] += 2059607;
      } else {
        result[0] += 248168;
        result[1] += 0;
        result[2] += 51453575;
        result[3] += 1654455;
        result[4] += 0;
        result[5] += 330891;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 605493;
        result[1] += 201831;
        result[2] += 0;
        result[3] += 0;
        result[4] += 52072441;
        result[5] += 807324;
      } else {
        result[0] += 0;
        result[1] += 43362650;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10324440;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2216989;
        result[1] += 59918;
        result[2] += 59918;
        result[3] += 2276907;
        result[4] += 3355443;
        result[5] += 45717913;
      } else {
        result[0] += 4807799;
        result[1] += 1831542;
        result[2] += 2518371;
        result[3] += 22321924;
        result[4] += 2060485;
        result[5] += 20146968;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 52429782;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1257308;
        result[5] += 0;
      } else {
        result[0] += 37626850;
        result[1] += 1305997;
        result[2] += 1482483;
        result[3] += 2647292;
        result[4] += 7659499;
        result[5] += 2964967;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 348617;
        result[2] += 14641933;
        result[3] += 23705988;
        result[4] += 348617;
        result[5] += 14641933;
      } else {
        result[0] += 1207582;
        result[1] += 201263;
        result[2] += 45988754;
        result[3] += 4327169;
        result[4] += 301895;
        result[5] += 1660425;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 4342338;
        result[2] += 0;
        result[3] += 1381653;
        result[4] += 42239108;
        result[5] += 5723991;
      } else {
        result[0] += 647482;
        result[1] += 0;
        result[2] += 215827;
        result[3] += 5503601;
        result[4] += 2859714;
        result[5] += 44460465;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 50777938;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2909152;
        result[5] += 0;
      } else {
        result[0] += 29000384;
        result[1] += 1767048;
        result[2] += 3897901;
        result[3] += 6106711;
        result[4] += 6990235;
        result[5] += 5924809;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 3355443;
        result[4] += 8388607;
        result[5] += 15099494;
      } else {
        result[0] += 0;
        result[1] += 1073741;
        result[2] += 10200547;
        result[3] += 35970351;
        result[4] += 0;
        result[5] += 6442450;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 2236962;
        result[1] += 8947848;
        result[2] += 0;
        result[3] += 4473924;
        result[4] += 8947848;
        result[5] += 29080507;
      } else {
        result[0] += 749658;
        result[1] += 0;
        result[2] += 48843143;
        result[3] += 3575295;
        result[4] += 0;
        result[5] += 518994;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9112029;
        result[1] += 2339575;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37556336;
        result[5] += 4679150;
      } else {
        result[0] += 113144;
        result[1] += 169716;
        result[2] += 339433;
        result[3] += 4695499;
        result[4] += 4242920;
        result[5] += 44126376;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        result[0] += 105475;
        result[1] += 48518785;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4535451;
        result[5] += 527378;
      } else {
        result[0] += 33641882;
        result[1] += 1490463;
        result[2] += 2615914;
        result[3] += 6478952;
        result[4] += 2980926;
        result[5] += 6478952;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c30000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8642312;
        result[3] += 27498266;
        result[4] += 3666435;
        result[5] += 13880077;
      } else {
        result[0] += 1567506;
        result[1] += 0;
        result[2] += 34093262;
        result[3] += 9796914;
        result[4] += 1175629;
        result[5] += 7053778;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 10737418;
        result[1] += 5368709;
        result[2] += 20132659;
        result[3] += 1342177;
        result[4] += 1342177;
        result[5] += 14763950;
      } else {
        result[0] += 136782;
        result[1] += 0;
        result[2] += 49652010;
        result[3] += 3624733;
        result[4] += 0;
        result[5] += 273564;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 813440;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50636688;
        result[5] += 2236962;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 33554431;
        result[5] += 20132659;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 535532;
        result[3] += 1138005;
        result[4] += 1539654;
        result[5] += 50473898;
      } else {
        result[0] += 3761515;
        result[1] += 683911;
        result[2] += 569926;
        result[3] += 19947433;
        result[4] += 2963618;
        result[5] += 25760684;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 44229261;
        result[2] += 0;
        result[3] += 0;
        result[4] += 9457829;
        result[5] += 0;
      } else {
        result[0] += 41979145;
        result[1] += 847285;
        result[2] += 1270928;
        result[3] += 3350629;
        result[4] += 3697245;
        result[5] += 2541856;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 626697;
        result[1] += 1880092;
        result[2] += 15667439;
        result[3] += 20681019;
        result[4] += 1671193;
        result[5] += 13160648;
      } else {
        result[0] += 731859;
        result[1] += 0;
        result[2] += 48354975;
        result[3] += 4077500;
        result[4] += 0;
        result[5] += 522756;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 171524;
        result[1] += 6003348;
        result[2] += 0;
        result[3] += 1372194;
        result[4] += 40136675;
        result[5] += 6003348;
      } else {
        result[0] += 2244443;
        result[1] += 0;
        result[2] += 224444;
        result[3] += 6867997;
        result[4] += 3860443;
        result[5] += 40489762;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 47345235;
        result[2] += 0;
        result[3] += 0;
        result[4] += 6341855;
        result[5] += 0;
      } else {
        result[0] += 35857187;
        result[1] += 1282963;
        result[2] += 2072479;
        result[3] += 4605510;
        result[4] += 4835785;
        result[5] += 5033164;
      }
    }
  } else {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7105644;
        result[3] += 33949190;
        result[4] += 1184274;
        result[5] += 11447982;
      } else {
        result[0] += 941878;
        result[1] += 941878;
        result[2] += 35791394;
        result[3] += 8947848;
        result[4] += 0;
        result[5] += 7064090;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 4880644;
        result[1] += 11388170;
        result[2] += 6507526;
        result[3] += 8134407;
        result[4] += 3253763;
        result[5] += 19522578;
      } else {
        result[0] += 648252;
        result[1] += 0;
        result[2] += 49561848;
        result[3] += 2887670;
        result[4] += 0;
        result[5] += 589320;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15675063;
        result[1] += 2547197;
        result[2] += 293907;
        result[3] += 783753;
        result[4] += 30468403;
        result[5] += 3918765;
      } else {
        result[0] += 685549;
        result[1] += 685549;
        result[2] += 814089;
        result[3] += 6855494;
        result[4] += 3599134;
        result[5] += 41047273;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        result[0] += 571139;
        result[1] += 48775293;
        result[2] += 114227;
        result[3] += 114227;
        result[4] += 4112202;
        result[5] += 0;
      } else {
        result[0] += 40461734;
        result[1] += 1745921;
        result[2] += 2007809;
        result[3] += 3404547;
        result[4] += 2837122;
        result[5] += 3229955;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 727960;
        result[1] += 2183881;
        result[2] += 8007566;
        result[3] += 22748767;
        result[4] += 2547861;
        result[5] += 17471053;
      } else {
        result[0] += 13421772;
        result[1] += 0;
        result[2] += 32212254;
        result[3] += 7158278;
        result[4] += 447392;
        result[5] += 447392;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 27656986;
        result[3] += 18709137;
        result[4] += 0;
        result[5] += 7320966;
      } else {
        result[0] += 190830;
        result[1] += 0;
        result[2] += 49870473;
        result[3] += 3498566;
        result[4] += 0;
        result[5] += 127220;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 226527;
        result[2] += 226527;
        result[3] += 0;
        result[4] += 50062646;
        result[5] += 3171389;
      } else {
        result[0] += 1658288;
        result[1] += 1160801;
        result[2] += 829144;
        result[3] += 7462298;
        result[4] += 3026376;
        result[5] += 39550181;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42620000))) ) ) {
        result[0] += 107374;
        result[1] += 49821620;
        result[2] += 214748;
        result[3] += 0;
        result[4] += 3543348;
        result[5] += 0;
      } else {
        result[0] += 32820607;
        result[1] += 1672968;
        result[2] += 3376355;
        result[3] += 4866818;
        result[4] += 5901017;
        result[5] += 5049324;
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 1130254;
        result[1] += 0;
        result[2] += 6216400;
        result[3] += 23735345;
        result[4] += 1695381;
        result[5] += 20909709;
      } else {
        result[0] += 3520464;
        result[1] += 2640348;
        result[2] += 29923952;
        result[3] += 3520464;
        result[4] += 8801162;
        result[5] += 5280697;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42058118;
        result[3] += 10466075;
        result[4] += 0;
        result[5] += 1162897;
      } else {
        result[0] += 270237;
        result[1] += 0;
        result[2] += 51164878;
        result[3] += 1801580;
        result[4] += 0;
        result[5] += 450395;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1561806;
        result[2] += 195225;
        result[3] += 1561806;
        result[4] += 48415994;
        result[5] += 1952257;
      } else {
        result[0] += 1349557;
        result[1] += 716952;
        result[2] += 759126;
        result[3] += 7338219;
        result[4] += 3120852;
        result[5] += 40402382;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 98328;
        result[1] += 45132554;
        result[2] += 98328;
        result[3] += 98328;
        result[4] += 8161224;
        result[5] += 98328;
      } else {
        result[0] += 36473444;
        result[1] += 1266664;
        result[2] += 2078629;
        result[3] += 5131615;
        result[4] += 3929908;
        result[5] += 4806829;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 53687091;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 14060904;
        result[3] += 26843545;
        result[4] += 0;
        result[5] += 12782640;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 444920;
        result[1] += 0;
        result[2] += 39746244;
        result[3] += 11271323;
        result[4] += 0;
        result[5] += 2224603;
      } else {
        result[0] += 1376592;
        result[1] += 0;
        result[2] += 49557314;
        result[3] += 2186352;
        result[4] += 0;
        result[5] += 566832;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2265278;
        result[2] += 226527;
        result[3] += 1132639;
        result[4] += 48023895;
        result[5] += 2038750;
      } else {
        result[0] += 1641671;
        result[1] += 177477;
        result[2] += 0;
        result[3] += 6921641;
        result[4] += 3372081;
        result[5] += 41574218;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 33395190;
        result[1] += 1941228;
        result[2] += 2305208;
        result[3] += 4155441;
        result[4] += 6763966;
        result[5] += 5126055;
      } else {
        result[0] += 676159;
        result[1] += 53010931;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 9405037;
        result[3] += 31742002;
        result[4] += 783753;
        result[5] += 11756297;
      } else {
        result[0] += 436480;
        result[1] += 654720;
        result[2] += 32081310;
        result[3] += 16149775;
        result[4] += 436480;
        result[5] += 3928323;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 3183029;
        result[1] += 636605;
        result[2] += 44774609;
        result[3] += 4456240;
        result[4] += 0;
        result[5] += 636605;
      } else {
        result[0] += 0;
        result[1] += 279620;
        result[2] += 52009369;
        result[3] += 1211687;
        result[4] += 0;
        result[5] += 186413;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 427785;
        result[1] += 2352820;
        result[2] += 0;
        result[3] += 213892;
        result[4] += 47698092;
        result[5] += 2994499;
      } else {
        result[0] += 1302031;
        result[1] += 607614;
        result[2] += 911421;
        result[3] += 6857364;
        result[4] += 3689088;
        result[5] += 40319569;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42560000))) ) ) {
        result[0] += 440961;
        result[1] += 48946752;
        result[2] += 220480;
        result[3] += 661442;
        result[4] += 3417453;
        result[5] += 0;
      } else {
        result[0] += 36761441;
        result[1] += 1471795;
        result[2] += 1404895;
        result[3] += 3779838;
        result[4] += 5385434;
        result[5] += 4883685;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2284557;
        result[3] += 4569114;
        result[4] += 3426835;
        result[5] += 43406584;
      } else {
        result[0] += 735439;
        result[1] += 0;
        result[2] += 17282830;
        result[3] += 26843545;
        result[4] += 0;
        result[5] += 8825275;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 553475;
        result[1] += 1106950;
        result[2] += 32101559;
        result[3] += 15774042;
        result[4] += 553475;
        result[5] += 3597588;
      } else {
        result[0] += 312497;
        result[1] += 124999;
        result[2] += 49937119;
        result[3] += 2749979;
        result[4] += 374997;
        result[5] += 187498;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 619466;
        result[1] += 206488;
        result[2] += 0;
        result[3] += 412977;
        result[4] += 46047005;
        result[5] += 6401153;
      } else {
        result[0] += 0;
        result[1] += 50107951;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3579139;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1933753;
        result[1] += 610658;
        result[2] += 50888;
        result[3] += 3307735;
        result[4] += 2646188;
        result[5] += 45137867;
      } else {
        result[0] += 1626881;
        result[1] += 0;
        result[2] += 5577879;
        result[3] += 30678337;
        result[4] += 232411;
        result[5] += 15571580;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 130308;
        result[1] += 52123389;
        result[2] += 130308;
        result[3] += 0;
        result[4] += 1303084;
        result[5] += 0;
      } else {
        result[0] += 35189029;
        result[1] += 1774236;
        result[2] += 1741380;
        result[3] += 3121342;
        result[4] += 7721215;
        result[5] += 4139885;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 3471148;
        result[2] += 13421772;
        result[3] += 23372397;
        result[4] += 2082688;
        result[5] += 11339083;
      } else {
        result[0] += 2012585;
        result[1] += 0;
        result[2] += 46833419;
        result[3] += 4351537;
        result[4] += 54394;
        result[5] += 435153;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 7752648;
        result[1] += 3876324;
        result[2] += 0;
        result[3] += 193816;
        result[4] += 39150875;
        result[5] += 2713426;
      } else {
        result[0] += 84546;
        result[1] += 211366;
        result[2] += 1099105;
        result[3] += 7905107;
        result[4] += 4227330;
        result[5] += 40159635;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 32056030;
        result[1] += 3214615;
        result[2] += 2794012;
        result[3] += 4776859;
        result[4] += 6038671;
        result[5] += 4806902;
      } else {
        result[0] += 130944;
        result[1] += 52901426;
        result[2] += 130944;
        result[3] += 130944;
        result[4] += 392832;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15678531;
        result[3] += 28506420;
        result[4] += 0;
        result[5] += 9502140;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 45210182;
        result[3] += 2825636;
        result[4] += 0;
        result[5] += 5651272;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42528597;
        result[3] += 10316343;
        result[4] += 0;
        result[5] += 842150;
      } else {
        result[0] += 849723;
        result[1] += 0;
        result[2] += 52142138;
        result[3] += 617980;
        result[4] += 0;
        result[5] += 77247;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 2613978;
        result[2] += 201075;
        result[3] += 0;
        result[4] += 50067736;
        result[5] += 804300;
      } else {
        result[0] += 2417515;
        result[1] += 729816;
        result[2] += 182454;
        result[3] += 9077086;
        result[4] += 3192945;
        result[5] += 38087273;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 94519;
        result[1] += 43289943;
        result[2] += 0;
        result[3] += 0;
        result[4] += 10208108;
        result[5] += 94519;
      } else {
        result[0] += 35518497;
        result[1] += 881664;
        result[2] += 3589635;
        result[3] += 5069572;
        result[4] += 4250884;
        result[5] += 4376836;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0;
        result[1] += 2147483;
        result[2] += 2147483;
        result[3] += 10021590;
        result[4] += 5726623;
        result[5] += 33643910;
      } else {
        result[0] += 589968;
        result[1] += 0;
        result[2] += 28023481;
        result[3] += 20943865;
        result[4] += 0;
        result[5] += 4129776;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 919974;
        result[1] += 197137;
        result[2] += 47641543;
        result[3] += 4402735;
        result[4] += 262849;
        result[5] += 262849;
      } else {
        result[0] += 29144420;
        result[1] += 0;
        result[2] += 21474836;
        result[3] += 3067833;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 192426;
        result[1] += 1539414;
        result[2] += 0;
        result[3] += 192426;
        result[4] += 47337005;
        result[5] += 4425817;
      } else {
        result[0] += 2905063;
        result[1] += 113184;
        result[2] += 528193;
        result[3] += 9130201;
        result[4] += 3433257;
        result[5] += 37577191;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 32805158;
        result[1] += 2964517;
        result[2] += 4104716;
        result[3] += 4235025;
        result[4] += 6841194;
        result[5] += 2736477;
      } else {
        result[0] += 286331;
        result[1] += 53400760;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2025927;
        result[3] += 7090747;
        result[4] += 2025927;
        result[5] += 42544487;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 44739242;
        result[3] += 8947848;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 2295829;
        result[2] += 33377829;
        result[3] += 12362159;
        result[4] += 0;
        result[5] += 5651272;
      } else {
        result[0] += 1018454;
        result[1] += 290986;
        result[2] += 49904260;
        result[3] += 2182402;
        result[4] += 0;
        result[5] += 290986;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8032981;
        result[1] += 3882607;
        result[2] += 401649;
        result[3] += 1606596;
        result[4] += 34943468;
        result[5] += 4819788;
      } else {
        result[0] += 445536;
        result[1] += 44553;
        result[2] += 222768;
        result[3] += 6905808;
        result[4] += 4098931;
        result[5] += 41969493;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42620000))) ) ) {
        result[0] += 0;
        result[1] += 51034566;
        result[2] += 106100;
        result[3] += 0;
        result[4] += 2546423;
        result[5] += 0;
      } else {
        result[0] += 38282556;
        result[1] += 2097151;
        result[2] += 1067641;
        result[3] += 2783492;
        result[4] += 5338205;
        result[5] += 4118043;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 7669584;
        result[3] += 34655159;
        result[4] += 0;
        result[5] += 11362347;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 33373056;
        result[3] += 13059022;
        result[4] += 0;
        result[5] += 7255012;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2275753;
        result[1] += 0;
        result[2] += 41170447;
        result[3] += 8172023;
        result[4] += 103443;
        result[5] += 1965423;
      } else {
        result[0] += 102456;
        result[1] += 0;
        result[2] += 51842878;
        result[3] += 1741756;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1491308;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48218961;
        result[5] += 3976821;
      } else {
        result[0] += 11784971;
        result[1] += 654720;
        result[2] += 1636801;
        result[3] += 2618882;
        result[4] += 22915221;
        result[5] += 14076493;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 60800;
        result[1] += 668808;
        result[2] += 0;
        result[3] += 1945625;
        result[4] += 3040039;
        result[5] += 47971817;
      } else {
        result[0] += 419430;
        result[1] += 0;
        result[2] += 4054493;
        result[3] += 29080507;
        result[4] += 419430;
        result[5] += 19713228;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425e0000))) ) ) {
        result[0] += 346368;
        result[1] += 49184302;
        result[2] += 0;
        result[3] += 230912;
        result[4] += 3925507;
        result[5] += 0;
      } else {
        result[0] += 38522464;
        result[1] += 1257729;
        result[2] += 1653016;
        result[3] += 3737254;
        result[4] += 5785556;
        result[5] += 2731070;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0;
        result[1] += 6234629;
        result[2] += 8312839;
        result[3] += 12122891;
        result[4] += 1731841;
        result[5] += 25284888;
      } else {
        result[0] += 1562722;
        result[1] += 50410;
        result[2] += 45470193;
        result[3] += 5645966;
        result[4] += 151231;
        result[5] += 806566;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 208089;
        result[1] += 3745611;
        result[2] += 0;
        result[3] += 2080895;
        result[4] += 44114974;
        result[5] += 3537521;
      } else {
        result[0] += 1741673;
        result[1] += 130625;
        result[2] += 522502;
        result[3] += 8316491;
        result[4] += 3047928;
        result[5] += 39927869;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 466844;
        result[1] += 51352869;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1867377;
        result[5] += 0;
      } else {
        result[0] += 34588411;
        result[1] += 2299506;
        result[2] += 3353447;
        result[3] += 4119949;
        result[4] += 5493265;
        result[5] += 3832510;
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 10175984;
        result[3] += 23860929;
        result[4] += 4210752;
        result[5] += 15439424;
      } else {
        result[0] += 0;
        result[1] += 1376592;
        result[2] += 32694061;
        result[3] += 13421772;
        result[4] += 688296;
        result[5] += 5506368;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
        result[0] += 12958953;
        result[1] += 25917906;
        result[2] += 1851279;
        result[3] += 0;
        result[4] += 1851279;
        result[5] += 11107674;
      } else {
        result[0] += 376311;
        result[1] += 0;
        result[2] += 49234073;
        result[3] += 3512239;
        result[4] += 0;
        result[5] += 564467;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 872960;
        result[2] += 0;
        result[3] += 1745921;
        result[4] += 47794605;
        result[5] += 3273603;
      } else {
        result[0] += 1209363;
        result[1] += 86383;
        result[2] += 86383;
        result[3] += 6953838;
        result[4] += 3714472;
        result[5] += 41636649;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 688296;
        result[1] += 40806122;
        result[2] += 196656;
        result[3] += 294984;
        result[4] += 11307720;
        result[5] += 393312;
      } else {
        result[0] += 36776688;
        result[1] += 2234097;
        result[2] += 1615424;
        result[3] += 4915015;
        result[4] += 4468195;
        result[5] += 3677668;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
        result[0] += 732096;
        result[1] += 0;
        result[2] += 15862095;
        result[3] += 28063706;
        result[4] += 0;
        result[5] += 9029192;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41756626;
        result[3] += 7243496;
        result[4] += 0;
        result[5] += 4686968;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26219277;
        result[3] += 22473666;
        result[4] += 0;
        result[5] += 4994148;
      } else {
        result[0] += 1086524;
        result[1] += 0;
        result[2] += 49149253;
        result[3] += 2876094;
        result[4] += 0;
        result[5] += 575218;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        result[0] += 847690;
        result[1] += 3390763;
        result[2] += 0;
        result[3] += 282563;
        result[4] += 46057872;
        result[5] += 3108200;
      } else {
        result[0] += 39263693;
        result[1] += 0;
        result[2] += 0;
        result[3] += 267099;
        result[4] += 7745898;
        result[5] += 6410398;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 2770946;
        result[4] += 3925507;
        result[5] += 46990636;
      } else {
        result[0] += 2880770;
        result[1] += 916608;
        result[2] += 785664;
        result[3] += 21082004;
        result[4] += 4583044;
        result[5] += 23438998;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 265121;
        result[1] += 50373073;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3048896;
        result[5] += 0;
      } else {
        result[0] += 40818109;
        result[1] += 1813155;
        result[2] += 2255388;
        result[3] += 3316747;
        result[4] += 3184077;
        result[5] += 2299611;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 2403899;
        result[1] += 2083379;
        result[2] += 12500277;
        result[3] += 20192756;
        result[4] += 3205199;
        result[5] += 13301577;
      } else {
        result[0] += 1467785;
        result[1] += 0;
        result[2] += 48041760;
        result[3] += 3951731;
        result[4] += 0;
        result[5] += 225813;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 5630106;
        result[2] += 804300;
        result[3] += 0;
        result[4] += 44839780;
        result[5] += 2412902;
      } else {
        result[0] += 3021174;
        result[1] += 0;
        result[2] += 734880;
        result[3] += 8451123;
        result[4] += 3674401;
        result[5] += 37805510;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 36751316;
        result[1] += 3222596;
        result[2] += 1851279;
        result[3] += 2708352;
        result[4] += 6033798;
        result[5] += 3119747;
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
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 745654;
        result[1] += 2236962;
        result[2] += 5965232;
        result[3] += 7456540;
        result[4] += 6710886;
        result[5] += 30571815;
      } else {
        result[0] += 865920;
        result[1] += 0;
        result[2] += 7360327;
        result[3] += 39399397;
        result[4] += 1298881;
        result[5] += 4762564;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 1451002;
        result[2] += 8706014;
        result[3] += 14510024;
        result[4] += 0;
        result[5] += 29020049;
      } else {
        result[0] += 1818189;
        result[1] += 606063;
        result[2] += 45454733;
        result[3] += 5000020;
        result[4] += 202021;
        result[5] += 606063;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15074129;
        result[1] += 1623367;
        result[2] += 115954;
        result[3] += 1043593;
        result[4] += 31191852;
        result[5] += 4638193;
      } else {
        result[0] += 481302;
        result[1] += 262528;
        result[2] += 437547;
        result[3] += 6388195;
        result[4] += 5075552;
        result[5] += 41041965;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 31378465;
        result[1] += 4041648;
        result[2] += 3055104;
        result[3] += 6460272;
        result[4] += 3978000;
        result[5] += 4773600;
      } else {
        result[0] += 281084;
        result[1] += 52422212;
        result[2] += 421626;
        result[3] += 421626;
        result[4] += 140542;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 3038891;
        result[3] += 41531523;
        result[4] += 0;
        result[5] += 9116675;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 38347922;
        result[3] += 0;
        result[4] += 0;
        result[5] += 15339168;
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 186413;
        result[1] += 0;
        result[2] += 38587596;
        result[3] += 11744051;
        result[4] += 0;
        result[5] += 3169029;
      } else {
        result[0] += 448014;
        result[1] += 0;
        result[2] += 50924334;
        result[3] += 2016066;
        result[4] += 0;
        result[5] += 298676;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15462871;
        result[1] += 371108;
        result[2] += 123702;
        result[3] += 989623;
        result[4] += 32410179;
        result[5] += 4329604;
      } else {
        result[0] += 153941;
        result[1] += 153941;
        result[2] += 346368;
        result[3] += 11237728;
        result[4] += 3887022;
        result[5] += 37908089;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 52236088;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1451002;
        result[5] += 0;
      } else {
        result[0] += 36578417;
        result[1] += 2143124;
        result[2] += 4031980;
        result[3] += 2905931;
        result[4] += 5775539;
        result[5] += 2252097;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        result[0] += 0;
        result[1] += 5965232;
        result[2] += 3976821;
        result[3] += 9942053;
        result[4] += 0;
        result[5] += 33802983;
      } else {
        result[0] += 1342177;
        result[1] += 1789569;
        result[2] += 23264406;
        result[3] += 23711798;
        result[4] += 894784;
        result[5] += 2684354;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        result[0] += 35103098;
        result[1] += 0;
        result[2] += 18583993;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 490853;
        result[1] += 0;
        result[2] += 49085340;
        result[3] += 3620043;
        result[4] += 0;
        result[5] += 490853;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 3243933;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46388241;
        result[5] += 4054916;
      } else {
        result[0] += 2930606;
        result[1] += 325622;
        result[2] += 1098977;
        result[3] += 9687284;
        result[4] += 2279360;
        result[5] += 37365238;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 34364773;
        result[1] += 2769322;
        result[2] += 3178426;
        result[3] += 4216922;
        result[4] += 4279861;
        result[5] += 4877783;
      } else {
        result[0] += 801299;
        result[1] += 50882541;
        result[2] += 267099;
        result[3] += 400649;
        result[4] += 1335499;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1579032;
        result[3] += 4737096;
        result[4] += 4737096;
        result[5] += 42633866;
      } else {
        result[0] += 0;
        result[1] += 2064888;
        result[2] += 22713769;
        result[3] += 16519104;
        result[4] += 1651910;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 348617;
        result[1] += 0;
        result[2] += 43228566;
        result[3] += 9064054;
        result[4] += 0;
        result[5] += 1045852;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52155747;
        result[3] += 1441264;
        result[4] += 0;
        result[5] += 90079;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 739491;
        result[1] += 3549559;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46735870;
        result[5] += 2662169;
      } else {
        result[0] += 3673062;
        result[1] += 50315;
        result[2] += 402527;
        result[3] += 3622746;
        result[4] += 3371166;
        result[5] += 42567271;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 49557314;
        result[2] += 0;
        result[3] += 0;
        result[4] += 4129776;
        result[5] += 0;
      } else {
        result[0] += 34319598;
        result[1] += 1337996;
        result[2] += 1170746;
        result[3] += 6890679;
        result[4] += 3211190;
        result[5] += 6756880;
      }
    }
  } else {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 453055;
        result[1] += 0;
        result[2] += 15630418;
        result[3] += 28769031;
        result[4] += 0;
        result[5] += 8834584;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 43383508;
        result[3] += 6507526;
        result[4] += 0;
        result[5] += 3796056;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42890000))) ) ) {
        result[0] += 46976204;
        result[1] += 0;
        result[2] += 6710886;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 329032;
        result[1] += 0;
        result[2] += 48696769;
        result[3] += 3290322;
        result[4] += 329032;
        result[5] += 1041935;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 223696;
        result[1] += 3802835;
        result[2] += 0;
        result[3] += 0;
        result[4] += 46305116;
        result[5] += 3355443;
      } else {
        result[0] += 2347451;
        result[1] += 478184;
        result[2] += 130413;
        result[3] += 7216240;
        result[4] += 4738374;
        result[5] += 38776425;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 31778127;
        result[1] += 2344288;
        result[2] += 4254448;
        result[3] += 4514925;
        result[4] += 5498947;
        result[5] += 5296354;
      } else {
        result[0] += 514984;
        result[1] += 51498408;
        result[2] += 0;
        result[3] += 128746;
        result[4] += 643730;
        result[5] += 901222;
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 2317428;
        result[2] += 15063284;
        result[3] += 25877950;
        result[4] += 1931190;
        result[5] += 8497237;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 43505056;
        result[3] += 8639302;
        result[4] += 0;
        result[5] += 1542732;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 29826161;
        result[2] += 0;
        result[3] += 0;
        result[4] += 23860929;
        result[5] += 0;
      } else {
        result[0] += 780129;
        result[1] += 0;
        result[2] += 50070127;
        result[3] += 2411309;
        result[4] += 0;
        result[5] += 425525;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 10273455;
        result[1] += 165700;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40928121;
        result[5] += 2319812;
      } else {
        result[0] += 201679;
        result[1] += 282351;
        result[2] += 80671;
        result[3] += 8793227;
        result[4] += 3751239;
        result[5] += 40577921;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42520000))) ) ) {
        result[0] += 231409;
        result[1] += 52298631;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1157049;
        result[5] += 0;
      } else {
        result[0] += 33038209;
        result[1] += 2510903;
        result[2] += 3898508;
        result[3] += 4658387;
        result[4] += 6376374;
        result[5] += 3204706;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 1293664;
        result[1] += 1293664;
        result[2] += 7761989;
        result[3] += 20698637;
        result[4] += 1940497;
        result[5] += 20698637;
      } else {
        result[0] += 0;
        result[1] += 1789569;
        result[2] += 31615731;
        result[3] += 16702650;
        result[4] += 0;
        result[5] += 3579139;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 7456540;
        result[1] += 0;
        result[2] += 39892491;
        result[3] += 5219578;
        result[4] += 0;
        result[5] += 1118481;
      } else {
        result[0] += 280716;
        result[1] += 0;
        result[2] += 50879923;
        result[3] += 2245734;
        result[4] += 0;
        result[5] += 280716;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0;
        result[1] += 10737418;
        result[2] += 0;
        result[3] += 0;
        result[4] += 42949672;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 53329177;
        result[2] += 119304;
        result[3] += 0;
        result[4] += 238609;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 3526615;
        result[1] += 750343;
        result[2] += 337654;
        result[3] += 3414063;
        result[4] += 13093497;
        result[5] += 32564916;
      } else {
        result[0] += 32302161;
        result[1] += 2761417;
        result[2] += 2921964;
        result[3] += 6742995;
        result[4] += 4334783;
        result[5] += 4623768;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 1298881;
        result[1] += 2164802;
        result[2] += 432960;
        result[3] += 6061445;
        result[4] += 13421772;
        result[5] += 30307228;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 18140843;
        result[3] += 26475825;
        result[4] += 245146;
        result[5] += 8825275;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 16106127;
        result[3] += 37580963;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 293372;
        result[1] += 0;
        result[2] += 49403858;
        result[3] += 3696488;
        result[4] += 0;
        result[5] += 293372;
      }
    }
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c50000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 22998486;
        result[1] += 4096605;
        result[2] += 0;
        result[3] += 71870;
        result[4] += 24220280;
        result[5] += 2299848;
      } else {
        result[0] += 3503336;
        result[1] += 737544;
        result[2] += 1905323;
        result[3] += 9926119;
        result[4] += 5685238;
        result[5] += 31929529;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
        result[0] += 0;
        result[1] += 27917287;
        result[2] += 0;
        result[3] += 12884901;
        result[4] += 12884901;
        result[5] += 0;
      } else {
        result[0] += 522502;
        result[1] += 52250210;
        result[2] += 0;
        result[3] += 261251;
        result[4] += 653127;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 16746432;
        result[1] += 0;
        result[2] += 5417963;
        result[3] += 8373216;
        result[4] += 2462710;
        result[5] += 20686769;
      } else {
        result[0] += 49918106;
        result[1] += 753796;
        result[2] += 1005062;
        result[3] += 1172572;
        result[4] += 753796;
        result[5] += 83755;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 735439;
        result[1] += 0;
        result[2] += 25372666;
        result[3] += 19121429;
        result[4] += 0;
        result[5] += 8457555;
      } else {
        result[0] += 1932735;
        result[1] += 0;
        result[2] += 47674136;
        result[3] += 3758096;
        result[4] += 0;
        result[5] += 322122;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 0;
        result[1] += 1664716;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50773838;
        result[5] += 1248537;
      } else {
        result[0] += 0;
        result[1] += 40265318;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 13421772;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x428b0000))) ) ) {
        result[0] += 58482;
        result[1] += 58482;
        result[2] += 116965;
        result[3] += 4503165;
        result[4] += 3508960;
        result[5] += 45441034;
      } else {
        result[0] += 8998401;
        result[1] += 1314373;
        result[2] += 606633;
        result[3] += 18603436;
        result[4] += 5358598;
        result[5] += 18805647;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 101487;
        result[1] += 46582939;
        result[2] += 101487;
        result[3] += 101487;
        result[4] += 6495224;
        result[5] += 304463;
      } else {
        result[0] += 44575811;
        result[1] += 1634310;
        result[2] += 1144017;
        result[3] += 1716025;
        result[4] += 2982616;
        result[5] += 1634310;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 6540559;
        result[1] += 1635139;
        result[2] += 16896444;
        result[3] += 13898688;
        result[4] += 2180186;
        result[5] += 12536072;
      } else {
        result[0] += 549356;
        result[1] += 0;
        result[2] += 46395635;
        result[3] += 5743270;
        result[4] += 0;
        result[5] += 998829;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        result[0] += 368983;
        result[1] += 1106950;
        result[2] += 0;
        result[3] += 922458;
        result[4] += 47414372;
        result[5] += 3874326;
      } else {
        result[0] += 1641278;
        result[1] += 431915;
        result[2] += 1166171;
        result[3] += 8767883;
        result[4] += 2937025;
        result[5] += 38742816;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 33341902;
        result[1] += 2737667;
        result[2] += 3054660;
        result[3] += 4697260;
        result[4] += 6022867;
        result[5] += 3832733;
      } else {
        result[0] += 676159;
        result[1] += 52334771;
        result[2] += 0;
        result[3] += 270463;
        result[4] += 405695;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1376592;
        result[3] += 19272289;
        result[4] += 1376592;
        result[5] += 31661617;
      } else {
        result[0] += 0;
        result[1] += 2236962;
        result[2] += 27402786;
        result[3] += 11744051;
        result[4] += 3355443;
        result[5] += 8947848;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 8259552;
        result[1] += 0;
        result[2] += 24778657;
        result[3] += 12389328;
        result[4] += 0;
        result[5] += 8259552;
      } else {
        result[0] += 62572;
        result[1] += 0;
        result[2] += 50120466;
        result[3] += 3253763;
        result[4] += 0;
        result[5] += 250289;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d70000))) ) ) {
        result[0] += 0;
        result[1] += 1069463;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51334270;
        result[5] += 1283356;
      } else {
        result[0] += 0;
        result[1] += 51450129;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2236962;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2358064;
        result[1] += 54838;
        result[2] += 493548;
        result[3] += 3016128;
        result[4] += 3509677;
        result[5] += 44254834;
      } else {
        result[0] += 4931885;
        result[1] += 845466;
        result[2] += 1127288;
        result[3] += 23109404;
        result[4] += 2536398;
        result[5] += 21136650;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 53687091;
        result[5] += 0;
      } else {
        result[0] += 249707;
        result[1] += 53187676;
        result[2] += 0;
        result[3] += 0;
        result[4] += 249707;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 36834641;
        result[1] += 2029172;
        result[2] += 1066175;
        result[3] += 3164133;
        result[4] += 5812375;
        result[5] += 4780593;
      } else {
        result[0] += 542750;
        result[1] += 316604;
        result[2] += 42741618;
        result[3] += 7417593;
        result[4] += 180916;
        result[5] += 2487607;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 1290555;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50589759;
        result[5] += 1806777;
      } else {
        result[0] += 1410498;
        result[1] += 396702;
        result[2] += 969717;
        result[3] += 8110365;
        result[4] += 3217699;
        result[5] += 39582108;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 488064;
        result[1] += 44901930;
        result[2] += 0;
        result[3] += 683290;
        result[4] += 7613805;
        result[5] += 0;
      } else {
        result[0] += 37704993;
        result[1] += 1665540;
        result[2] += 1736414;
        result[3] += 4110694;
        result[4] += 4004383;
        result[5] += 4465065;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 2006994;
        result[1] += 2006994;
        result[2] += 4013988;
        result[3] += 7526227;
        result[4] += 2508742;
        result[5] += 35624144;
      } else {
        result[0] += 654720;
        result[1] += 436480;
        result[2] += 19423378;
        result[3] += 26407065;
        result[4] += 654720;
        result[5] += 6110725;
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 4930447;
        result[1] += 1643482;
        result[2] += 36704439;
        result[3] += 5752188;
        result[4] += 821741;
        result[5] += 3834792;
      } else {
        result[0] += 819650;
        result[1] += 0;
        result[2] += 49930360;
        result[3] += 2937080;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 4829980;
        result[2] += 0;
        result[3] += 185768;
        result[4] += 46256351;
        result[5] += 2414990;
      } else {
        result[0] += 2129857;
        result[1] += 110165;
        result[2] += 1211815;
        result[3] += 10208626;
        result[4] += 3415115;
        result[5] += 36611511;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        result[0] += 35063657;
        result[1] += 2877866;
        result[2] += 3043260;
        result[3] += 3770997;
        result[4] += 6284995;
        result[5] += 2646313;
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
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 2119227;
        result[2] += 5651272;
        result[3] += 12715363;
        result[4] += 3532045;
        result[5] += 29669181;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 45210182;
        result[3] += 8476909;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 22260501;
        result[3] += 23569942;
        result[4] += 0;
        result[5] += 7856647;
      } else {
        result[0] += 348995;
        result[1] += 0;
        result[2] += 49150153;
        result[3] += 3838946;
        result[4] += 0;
        result[5] += 348995;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1110767;
        result[1] += 2406662;
        result[2] += 0;
        result[3] += 0;
        result[4] += 45356335;
        result[5] += 4813325;
      } else {
        result[0] += 980993;
        result[1] += 445906;
        result[2] += 758040;
        result[3] += 8026309;
        result[4] += 2363302;
        result[5] += 41112539;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 51460437;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2226653;
        result[5] += 0;
      } else {
        result[0] += 34510899;
        result[1] += 1186800;
        result[2] += 2685916;
        result[3] += 4591042;
        result[4] += 6402474;
        result[5] += 4309958;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2788939;
        result[3] += 9064054;
        result[4] += 2788939;
        result[5] += 39045157;
      } else {
        result[0] += 2284557;
        result[1] += 5254481;
        result[2] += 19418735;
        result[3] += 15991899;
        result[4] += 1599189;
        result[5] += 9138228;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 568117;
        result[1] += 0;
        result[2] += 38916039;
        result[3] += 13066699;
        result[4] += 0;
        result[5] += 1136234;
      } else {
        result[0] += 950214;
        result[1] += 0;
        result[2] += 51232371;
        result[3] += 1029398;
        result[4] += 158369;
        result[5] += 316738;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 422733;
        result[1] += 4861429;
        result[2] += 0;
        result[3] += 634099;
        result[4] += 44598331;
        result[5] += 3170497;
      } else {
        result[0] += 1985213;
        result[1] += 129470;
        result[2] += 215784;
        result[3] += 7595601;
        result[4] += 3150448;
        result[5] += 40610572;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0;
        result[1] += 45210182;
        result[2] += 0;
        result[3] += 302746;
        result[4] += 7972331;
        result[5] += 201831;
      } else {
        result[0] += 36287577;
        result[1] += 2017814;
        result[2] += 1653946;
        result[3] += 3804076;
        result[4] += 5325706;
        result[5] += 4597970;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12657932;
        result[3] += 31863070;
        result[4] += 0;
        result[5] += 9166088;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37167986;
        result[3] += 8259552;
        result[4] += 0;
        result[5] += 8259552;
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 2231151;
        result[1] += 0;
        result[2] += 41973544;
        result[3] += 8227372;
        result[4] += 278893;
        result[5] += 976128;
      } else {
        result[0] += 85762;
        result[1] += 0;
        result[2] += 52486421;
        result[3] += 686097;
        result[4] += 0;
        result[5] += 428810;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 10859781;
        result[1] += 1223637;
        result[2] += 152954;
        result[3] += 305909;
        result[4] += 36709122;
        result[5] += 4435685;
      } else {
        result[0] += 220390;
        result[1] += 969717;
        result[2] += 264468;
        result[3] += 9344551;
        result[4] += 3614401;
        result[5] += 39273561;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 33171059;
        result[1] += 2560781;
        result[2] += 3751843;
        result[3] += 4228267;
        result[4] += 5389552;
        result[5] += 4585586;
      } else {
        result[0] += 261251;
        result[1] += 53425840;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 2684354;
        result[3] += 2684354;
        result[4] += 5368709;
        result[5] += 42949672;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 13958643;
        result[3] += 27917287;
        result[4] += 0;
        result[5] += 11811160;
      }
    } else {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 23402065;
        result[3] += 27531841;
        result[4] += 0;
        result[5] += 2753184;
      } else {
        result[0] += 229923;
        result[1] += 344884;
        result[2] += 48858701;
        result[3] += 3506330;
        result[4] += 114961;
        result[5] += 632289;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        result[0] += 352046;
        result[1] += 1760232;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50166626;
        result[5] += 1408185;
      } else {
        result[0] += 5350132;
        result[1] += 222922;
        result[2] += 185768;
        result[3] += 6724819;
        result[4] += 4309828;
        result[5] += 36893620;
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 31243316;
        result[1] += 3559365;
        result[2] += 3954850;
        result[3] += 7151687;
        result[4] += 3032051;
        result[5] += 4745820;
      } else {
        result[0] += 768788;
        result[1] += 52405776;
        result[2] += 0;
        result[3] += 256262;
        result[4] += 256262;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 12271335;
        result[3] += 27610504;
        result[4] += 0;
        result[5] += 13805252;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 15339168;
        result[3] += 0;
        result[4] += 0;
        result[5] += 38347922;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 0;
        result[1] += 36507222;
        result[2] += 0;
        result[3] += 0;
        result[4] += 15032385;
        result[5] += 2147483;
      } else {
        result[0] += 117734;
        result[1] += 117734;
        result[2] += 48742227;
        result[3] += 4002984;
        result[4] += 0;
        result[5] += 706409;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 1376592;
        result[1] += 786624;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48574034;
        result[5] += 2949840;
      } else {
        result[0] += 2487101;
        result[1] += 85762;
        result[2] += 0;
        result[3] += 7589948;
        result[4] += 2186934;
        result[5] += 41337344;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 101487;
        result[1] += 43436814;
        result[2] += 202975;
        result[3] += 101487;
        result[4] += 9235397;
        result[5] += 608927;
      } else {
        result[0] += 35927602;
        result[1] += 1163010;
        result[2] += 3709061;
        result[3] += 5374995;
        result[4] += 3771926;
        result[5] += 3740494;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4583044;
        result[3] += 25534104;
        result[4] += 0;
        result[5] += 23569942;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 41297762;
        result[3] += 0;
        result[4] += 0;
        result[5] += 12389328;
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0;
        result[1] += 403662;
        result[2] += 37944259;
        result[3] += 10091558;
        result[4] += 807324;
        result[5] += 4440285;
      } else {
        result[0] += 195700;
        result[1] += 65233;
        result[2] += 50099253;
        result[3] += 3065969;
        result[4] += 0;
        result[5] += 260933;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 3225019;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48944415;
        result[5] += 1517656;
      } else {
        result[0] += 5484810;
        result[1] += 160140;
        result[2] += 80070;
        result[3] += 6205443;
        result[4] += 3923441;
        result[5] += 37833185;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 201831;
        result[1] += 47531240;
        result[2] += 100915;
        result[3] += 807324;
        result[4] += 4944863;
        result[5] += 100915;
      } else {
        result[0] += 35483867;
        result[1] += 2093548;
        result[2] += 3725806;
        result[3] += 6351612;
        result[4] += 2483870;
        result[5] += 3548386;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 825955;
        result[2] += 3303820;
        result[3] += 4129776;
        result[4] += 12389328;
        result[5] += 33038209;
      } else {
        result[0] += 0;
        result[1] += 766958;
        result[2] += 15722648;
        result[3] += 25693107;
        result[4] += 0;
        result[5] += 11504376;
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 1646066;
        result[1] += 0;
        result[2] += 42797728;
        result[3] += 7470609;
        result[4] += 253240;
        result[5] += 1519445;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 52365249;
        result[3] += 1118481;
        result[4] += 0;
        result[5] += 203360;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
        result[0] += 9761289;
        result[1] += 4575604;
        result[2] += 0;
        result[3] += 0;
        result[4] += 34164512;
        result[5] += 5185684;
      } else {
        result[0] += 230416;
        result[1] += 46083;
        result[2] += 967750;
        result[3] += 7465501;
        result[4] += 3548417;
        result[5] += 41428922;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 100162;
        result[1] += 44972955;
        result[2] += 0;
        result[3] += 0;
        result[4] += 8413648;
        result[5] += 200324;
      } else {
        result[0] += 38677796;
        result[1] += 1154561;
        result[2] += 1984401;
        result[3] += 4401764;
        result[4] += 3680163;
        result[5] += 3788403;
      }
    }
  } else {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b10000))) ) ) {
        result[0] += 985084;
        result[1] += 0;
        result[2] += 8373216;
        result[3] += 3447794;
        result[4] += 4925421;
        result[5] += 35955574;
      } else {
        result[0] += 2982616;
        result[1] += 2982616;
        result[2] += 9693502;
        result[3] += 27962026;
        result[4] += 2236962;
        result[5] += 7829367;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 8580128;
        result[1] += 0;
        result[2] += 24269506;
        result[3] += 15689378;
        result[4] += 0;
        result[5] += 5148077;
      } else {
        result[0] += 528286;
        result[1] += 0;
        result[2] += 48932514;
        result[3] += 3962146;
        result[4] += 0;
        result[5] += 264143;
      }
    }
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
        result[0] += 24467442;
        result[1] += 3596264;
        result[2] += 0;
        result[3] += 577971;
        result[4] += 22283995;
        result[5] += 2761417;
      } else {
        result[0] += 4107368;
        result[1] += 1398253;
        result[2] += 1980858;
        result[3] += 10516028;
        result[4] += 4340410;
        result[5] += 31344172;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42660000))) ) ) {
        result[0] += 124275;
        result[1] += 53189988;
        result[2] += 0;
        result[3] += 124275;
        result[4] += 248551;
        result[5] += 0;
      } else {
        result[0] += 13421772;
        result[1] += 13421772;
        result[2] += 0;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 50704475;
        result[1] += 0;
        result[2] += 1174970;
        result[3] += 632676;
        result[4] += 632676;
        result[5] += 542293;
      } else {
        result[0] += 8388607;
        result[1] += 0;
        result[2] += 35232153;
        result[3] += 1677721;
        result[4] += 0;
        result[5] += 8388607;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
        result[0] += 41485479;
        result[1] += 0;
        result[2] += 10981450;
        result[3] += 1220161;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 257863;
        result[1] += 0;
        result[2] += 48529829;
        result[3] += 4589962;
        result[4] += 0;
        result[5] += 309435;
      }
    }
  }
  if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 242928;
        result[1] += 0;
        result[2] += 0;
        result[3] += 242928;
        result[4] += 50771955;
        result[5] += 2429280;
      } else {
        result[0] += 0;
        result[1] += 53687091;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 1075006;
        result[1] += 63235;
        result[2] += 126471;
        result[3] += 2466191;
        result[4] += 3794140;
        result[5] += 46162045;
      } else {
        result[0] += 2087831;
        result[1] += 1491308;
        result[2] += 3280877;
        result[3] += 25352237;
        result[4] += 1789569;
        result[5] += 19685266;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        result[0] += 840319;
        result[1] += 43789992;
        result[2] += 0;
        result[3] += 280106;
        result[4] += 8683303;
        result[5] += 93368;
      } else {
        result[0] += 39703149;
        result[1] += 1651369;
        result[2] += 632439;
        result[3] += 3373010;
        result[4] += 4883838;
        result[5] += 3443282;
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 174876;
        result[1] += 0;
        result[2] += 20985182;
        result[3] += 23258576;
        result[4] += 174876;
        result[5] += 9093578;
      } else {
        result[0] += 1395194;
        result[1] += 167423;
        result[2] += 47325003;
        result[3] += 3515890;
        result[4] += 55807;
        result[5] += 1227771;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 453693;
        result[1] += 2419699;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47940303;
        result[5] += 2873393;
      } else {
        result[0] += 5808627;
        result[1] += 384394;
        result[2] += 85420;
        result[3] += 5082548;
        result[4] += 3502260;
        result[5] += 38823839;
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42660000))) ) ) {
        result[0] += 225103;
        result[1] += 51548611;
        result[2] += 112551;
        result[3] += 112551;
        result[4] += 1688273;
        result[5] += 0;
      } else {
        result[0] += 35281060;
        result[1] += 2075356;
        result[2] += 1803178;
        result[3] += 6294113;
        result[4] += 4252779;
        result[5] += 3980601;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 8739759;
        result[3] += 35791394;
        result[4] += 0;
        result[5] += 9155938;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39370533;
        result[3] += 3579139;
        result[4] += 0;
        result[5] += 10737418;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 28334853;
        result[3] += 5965232;
        result[4] += 4473924;
        result[5] += 14913080;
      } else {
        result[0] += 946764;
        result[1] += 0;
        result[2] += 48284966;
        result[3] += 3954132;
        result[4] += 0;
        result[5] += 501228;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
        result[0] += 504104;
        result[1] += 756156;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51418622;
        result[5] += 1008208;
      } else {
        result[0] += 0;
        result[1] += 5446516;
        result[2] += 0;
        result[3] += 1556147;
        result[4] += 27232582;
        result[5] += 19451844;
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 1970168;
        result[1] += 109453;
        result[2] += 0;
        result[3] += 2189076;
        result[4] += 3721429;
        result[5] += 45696963;
      } else {
        result[0] += 1204518;
        result[1] += 0;
        result[2] += 344148;
        result[3] += 27531841;
        result[4] += 172074;
        result[5] += 24434509;
      }
    }
  } else {
    if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42520000))) ) ) {
        result[0] += 608697;
        result[1] += 50765344;
        result[2] += 0;
        result[3] += 121739;
        result[4] += 2191309;
        result[5] += 0;
      } else {
        result[0] += 36452417;
        result[1] += 2956575;
        result[2] += 973506;
        result[3] += 3281078;
        result[4] += 7391439;
        result[5] += 2632073;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 4525348;
        result[1] += 2468372;
        result[2] += 11930464;
        result[3] += 14604534;
        result[4] += 2879767;
        result[5] += 17278604;
      } else {
        result[0] += 1418149;
        result[1] += 0;
        result[2] += 45836620;
        result[3] += 5318060;
        result[4] += 101296;
        result[5] += 1012963;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 9444951;
        result[1] += 2982616;
        result[2] += 0;
        result[3] += 0;
        result[4] += 40099617;
        result[5] += 1159906;
      } else {
        result[0] += 737817;
        result[1] += 173604;
        result[2] += 651015;
        result[3] += 9461427;
        result[4] += 4470307;
        result[5] += 38192918;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        result[0] += 35209698;
        result[1] += 2737391;
        result[2] += 2703174;
        result[3] += 3455956;
        result[4] += 5235261;
        result[5] += 4345609;
      } else {
        result[0] += 1177348;
        result[1] += 52392007;
        result[2] += 0;
        result[3] += 0;
        result[4] += 117734;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 4628197;
        result[3] += 24066627;
        result[4] += 4319651;
        result[5] += 20672615;
      } else {
        result[0] += 1977945;
        result[1] += 282563;
        result[2] += 31788409;
        result[3] += 14834590;
        result[4] += 988972;
        result[5] += 3814609;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 26843545;
        result[3] += 0;
        result[4] += 0;
        result[5] += 26843545;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51701621;
        result[3] += 1985469;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        result[0] += 306783;
        result[1] += 1840700;
        result[2] += 0;
        result[3] += 0;
        result[4] += 48011598;
        result[5] += 3528008;
      } else {
        result[0] += 5121323;
        result[1] += 347208;
        result[2] += 434010;
        result[3] += 4904317;
        result[4] += 2560661;
        result[5] += 40319569;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        result[0] += 0;
        result[1] += 52914615;
        result[2] += 0;
        result[3] += 0;
        result[4] += 772476;
        result[5] += 0;
      } else {
        result[0] += 29846910;
        result[1] += 1493901;
        result[2] += 4326090;
        result[3] += 7282770;
        result[4] += 4917426;
        result[5] += 5819991;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        result[0] += 0;
        result[1] += 4129776;
        result[2] += 5506368;
        result[3] += 5506368;
        result[4] += 13765920;
        result[5] += 24778657;
      } else {
        result[0] += 501748;
        result[1] += 501748;
        result[2] += 15554203;
        result[3] += 27094419;
        result[4] += 0;
        result[5] += 10034970;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 3286964;
        result[1] += 3286964;
        result[2] += 20817443;
        result[3] += 13147859;
        result[4] += 4382619;
        result[5] += 8765239;
      } else {
        result[0] += 238080;
        result[1] += 0;
        result[2] += 49580207;
        result[3] += 3333123;
        result[4] += 0;
        result[5] += 535680;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        result[0] += 15270994;
        result[1] += 2147483;
        result[2] += 357913;
        result[3] += 357913;
        result[4] += 31854340;
        result[5] += 3698444;
      } else {
        result[0] += 381029;
        result[1] += 838265;
        result[2] += 1562221;
        result[3] += 11392789;
        result[4] += 3429267;
        result[5] += 36083516;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0;
        result[1] += 48338192;
        result[2] += 0;
        result[3] += 693375;
        result[4] += 3367824;
        result[5] += 1287697;
      } else {
        result[0] += 40135783;
        result[1] += 1753698;
        result[2] += 3148686;
        result[3] += 2311693;
        result[4] += 3826251;
        result[5] += 2510977;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 671088;
        result[2] += 2684354;
        result[3] += 18790481;
        result[4] += 3355443;
        result[5] += 28185722;
      } else {
        result[0] += 0;
        result[1] += 3355443;
        result[2] += 28856811;
        result[3] += 16777215;
        result[4] += 1342177;
        result[5] += 3355443;
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
        result[0] += 21289708;
        result[1] += 0;
        result[2] += 24992266;
        result[3] += 6479476;
        result[4] += 925639;
        result[5] += 0;
      } else {
        result[0] += 374561;
        result[1] += 0;
        result[2] += 49005077;
        result[3] += 3995318;
        result[4] += 0;
        result[5] += 312134;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42760000))) ) ) {
        result[0] += 0;
        result[1] += 3944357;
        result[2] += 0;
        result[3] += 0;
        result[4] += 47332292;
        result[5] += 2410440;
      } else {
        result[0] += 1465716;
        result[1] += 0;
        result[2] += 418776;
        result[3] += 8752419;
        result[4] += 4104005;
        result[5] += 38946173;
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0;
        result[1] += 52180565;
        result[2] += 0;
        result[3] += 547827;
        result[4] += 958698;
        result[5] += 0;
      } else {
        result[0] += 32090584;
        result[1] += 2342156;
        result[2] += 4167213;
        result[3] += 4562642;
        result[4] += 5961852;
        result[5] += 4562642;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
        result[0] += 778073;
        result[1] += 2334221;
        result[2] += 10893032;
        result[3] += 6224590;
        result[4] += 6224590;
        result[5] += 27232582;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 25396887;
        result[3] += 25396887;
        result[4] += 0;
        result[5] += 2893316;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 13421772;
        result[2] += 4473924;
        result[3] += 0;
        result[4] += 26843545;
        result[5] += 8947848;
      } else {
        result[0] += 240210;
        result[1] += 120105;
        result[2] += 49783667;
        result[3] += 3122739;
        result[4] += 0;
        result[5] += 420368;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b30000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        result[0] += 8926893;
        result[1] += 2891810;
        result[2] += 251461;
        result[3] += 880116;
        result[4] += 35078919;
        result[5] += 5657890;
      } else {
        result[0] += 192945;
        result[1] += 192945;
        result[2] += 530600;
        result[3] += 5498947;
        result[4] += 4244801;
        result[5] += 43026851;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 118514;
        result[1] += 50131654;
        result[2] += 0;
        result[3] += 355543;
        result[4] += 2488805;
        result[5] += 592572;
      } else {
        result[0] += 32576014;
        result[1] += 2176064;
        result[2] += 1753843;
        result[3] += 6528194;
        result[4] += 4027343;
        result[5] += 6625630;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 11083786;
        result[3] += 29441308;
        result[4] += 0;
        result[5] += 13161996;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 36771980;
        result[3] += 8089835;
        result[4] += 0;
        result[5] += 8825275;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 508882;
        result[1] += 0;
        result[2] += 38929502;
        result[3] += 12722059;
        result[4] += 0;
        result[5] += 1526647;
      } else {
        result[0] += 724522;
        result[1] += 0;
        result[2] += 50861454;
        result[3] += 1449044;
        result[4] += 72452;
        result[5] += 579617;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        result[0] += 7978267;
        result[1] += 498641;
        result[2] += 0;
        result[3] += 0;
        result[4] += 37896770;
        result[5] += 7313411;
      } else {
        result[0] += 307034;
        result[1] += 131586;
        result[2] += 219310;
        result[3] += 7588126;
        result[4] += 4430062;
        result[5] += 41010972;
      }
    } else {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        result[0] += 482797;
        result[1] += 44417377;
        result[2] += 675916;
        result[3] += 193119;
        result[4] += 7821320;
        result[5] += 96559;
      } else {
        result[0] += 38734846;
        result[1] += 1855117;
        result[2] += 890456;
        result[3] += 3598927;
        result[4] += 5120123;
        result[5] += 3487620;
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42bf0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 5926497;
        result[3] += 35558982;
        result[4] += 1394469;
        result[5] += 10807141;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 32965757;
        result[3] += 15070060;
        result[4] += 0;
        result[5] += 5651272;
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 1834031;
        result[1] += 166730;
        result[2] += 35180050;
        result[3] += 11837836;
        result[4] += 0;
        result[5] += 4668442;
      } else {
        result[0] += 433543;
        result[1] += 0;
        result[2] += 51302603;
        result[3] += 1589658;
        result[4] += 0;
        result[5] += 361285;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1497249;
        result[4] += 43634129;
        result[5] += 8555711;
      } else {
        result[0] += 109677;
        result[1] += 0;
        result[2] += 219354;
        result[3] += 4167741;
        result[4] += 1699999;
        result[5] += 47490317;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 52710962;
        result[2] += 0;
        result[3] += 0;
        result[4] += 976128;
        result[5] += 0;
      } else {
        result[0] += 29341231;
        result[1] += 1761525;
        result[2] += 3049805;
        result[3] += 6704313;
        result[4] += 7256433;
        result[5] += 5573782;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 1258291;
        result[1] += 2097151;
        result[2] += 14260633;
        result[3] += 23488102;
        result[4] += 1677721;
        result[5] += 10905190;
      } else {
        result[0] += 3212048;
        result[1] += 458864;
        result[2] += 37626850;
        result[3] += 10095008;
        result[4] += 0;
        result[5] += 2294320;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 2902004;
        result[1] += 0;
        result[2] += 38209731;
        result[3] += 8706014;
        result[4] += 0;
        result[5] += 3869339;
      } else {
        result[0] += 70827;
        result[1] += 0;
        result[2] += 51208135;
        result[3] += 2195646;
        result[4] += 0;
        result[5] += 212481;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 345254;
        result[1] += 2589409;
        result[2] += 0;
        result[3] += 0;
        result[4] += 50234545;
        result[5] += 517881;
      } else {
        result[0] += 0;
        result[1] += 49798287;
        result[2] += 0;
        result[3] += 0;
        result[4] += 3888803;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
        result[0] += 2011694;
        result[1] += 712475;
        result[2] += 586744;
        result[3] += 8214418;
        result[4] += 3478554;
        result[5] += 38683204;
      } else {
        result[0] += 34464994;
        result[1] += 1123160;
        result[2] += 5038178;
        result[3] += 4973998;
        result[4] += 4107559;
        result[5] += 3979198;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 4668442;
        result[1] += 0;
        result[2] += 9336885;
        result[3] += 4084887;
        result[4] += 8753330;
        result[5] += 26843545;
      } else {
        result[0] += 801299;
        result[1] += 0;
        result[2] += 32051994;
        result[3] += 16025997;
        result[4] += 801299;
        result[5] += 4006499;
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 37870562;
        result[3] += 12920544;
        result[4] += 0;
        result[5] += 2895984;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 51584885;
        result[3] += 1940497;
        result[4] += 0;
        result[5] += 161708;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427e0000))) ) ) {
        result[0] += 0;
        result[1] += 2254038;
        result[2] += 0;
        result[3] += 0;
        result[4] += 51023227;
        result[5] += 409825;
      } else {
        result[0] += 1917396;
        result[1] += 1917396;
        result[2] += 1917396;
        result[3] += 3834792;
        result[4] += 22050055;
        result[5] += 22050055;
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 2067096;
        result[1] += 229677;
        result[2] += 0;
        result[3] += 2296773;
        result[4] += 3158064;
        result[5] += 45935479;
      } else {
        result[0] += 6006301;
        result[1] += 1940497;
        result[2] += 2956948;
        result[3] += 20791042;
        result[4] += 1755688;
        result[5] += 20236614;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b20000))) ) ) {
        result[0] += 0;
        result[1] += 16106127;
        result[2] += 0;
        result[3] += 0;
        result[4] += 32212254;
        result[5] += 5368709;
      } else {
        result[0] += 0;
        result[1] += 53164589;
        result[2] += 0;
        result[3] += 0;
        result[4] += 522502;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 37627513;
        result[1] += 1939562;
        result[2] += 2676596;
        result[3] += 2870552;
        result[4] += 5973852;
        result[5] += 2599013;
      } else {
        result[0] += 1322791;
        result[1] += 273681;
        result[2] += 43925801;
        result[3] += 6112209;
        result[4] += 273681;
        result[5] += 1778926;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        result[0] += 0;
        result[1] += 1902298;
        result[2] += 0;
        result[3] += 0;
        result[4] += 49882494;
        result[5] += 1902298;
      } else {
        result[0] += 2326863;
        result[1] += 253839;
        result[2] += 0;
        result[3] += 7911336;
        result[4] += 3172995;
        result[5] += 40022055;
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
        result[0] += 0;
        result[1] += 51626605;
        result[2] += 0;
        result[3] += 0;
        result[4] += 2060485;
        result[5] += 0;
      } else {
        result[0] += 32710821;
        result[1] += 1550419;
        result[2] += 3830449;
        result[3] += 5411269;
        result[4] += 5836875;
        result[5] += 4347255;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += 0;
        result[1] += 1325607;
        result[2] += 14581679;
        result[3] += 9279250;
        result[4] += 2651214;
        result[5] += 25849340;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 42579417;
        result[3] += 3702558;
        result[4] += 0;
        result[5] += 7405116;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 39732323;
        result[3] += 12016605;
        result[4] += 0;
        result[5] += 1938162;
      } else {
        result[0] += 157671;
        result[1] += 0;
        result[2] += 51873870;
        result[3] += 1497877;
        result[4] += 0;
        result[5] += 157671;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 343414;
        result[1] += 6753813;
        result[2] += 0;
        result[3] += 0;
        result[4] += 43613607;
        result[5] += 2976256;
      } else {
        result[0] += 0;
        result[1] += 53017676;
        result[2] += 0;
        result[3] += 0;
        result[4] += 669415;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
        result[0] += 1703658;
        result[1] += 480519;
        result[2] += 961038;
        result[3] += 8037774;
        result[4] += 2096810;
        result[5] += 40407289;
      } else {
        result[0] += 38378157;
        result[1] += 1269865;
        result[2] += 1940072;
        result[3] += 4232884;
        result[4] += 3139389;
        result[5] += 4726721;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 1359166;
        result[1] += 2038750;
        result[2] += 0;
        result[3] += 31940421;
        result[4] += 6116250;
        result[5] += 12232501;
      } else {
        result[0] += 5635661;
        result[1] += 889841;
        result[2] += 23135873;
        result[3] += 11567936;
        result[4] += 2966137;
        result[5] += 9491640;
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 35601014;
        result[3] += 15991899;
        result[4] += 0;
        result[5] += 2094177;
      } else {
        result[0] += 161952;
        result[1] += 0;
        result[2] += 51257811;
        result[3] += 1619520;
        result[4] += 161952;
        result[5] += 485856;
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
