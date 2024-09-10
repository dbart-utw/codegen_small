
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 0.003982300884955753;
        result[2] += 0.00508849557522124;
        result[3] += 0.5984513274336284;
        result[4] += 0.3924778761061947;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9928751047778709;
        result[1] += 0;
        result[2] += 0.007124895222129086;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.19901960784313727;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7911764705882354;
        result[4] += 0.004901960784313726;
        result[5] += 0.004901960784313726;
        result[6] += 0;
      } else {
        result[0] += 0.995835261453031;
        result[1] += 0.0005398735153478328;
        result[2] += 0.0008483726669751659;
        result[3] += 0.0026608051827857475;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011568718186024989;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.1141732283464567;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8858267716535433;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.41081903106669565;
        result[1] += 0;
        result[2] += 0.006082989354768629;
        result[3] += 0.5824462307190963;
        result[4] += 0.000651748859439496;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0.9048893213330091;
        result[1] += 0;
        result[2] += 0.007783994162004379;
        result[3] += 0.0805156896132328;
        result[4] += 0.003405497445876916;
        result[5] += 0.001702748722938458;
        result[6] += 0.001702748722938458;
      } else {
        result[0] += 0.030120481927710843;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9698795180722891;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 1;
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
        result[4] += 0.9991928974979822;
        result[5] += 0.0008071025020177562;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.000620347394540943;
        result[1] += 0.0031017369727047153;
        result[2] += 0.003722084367245658;
        result[3] += 0.9910049627791564;
        result[4] += 0;
        result[5] += 0.0015508684863523576;
        result[6] += 0;
      } else {
        result[0] += 0.9821182943603851;
        result[1] += 0;
        result[2] += 0.017881705639614855;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9972414794381329;
        result[1] += 0.0005444448477369242;
        result[2] += 0.0016696308663932344;
        result[3] += 0.0002177779390947697;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032666690864215455;
      } else {
        result[0] += 0.00398406374501992;
        result[1] += 0.02390438247011952;
        result[2] += 0;
        result[3] += 0.9721115537848606;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4239704329461457;
        result[1] += 0;
        result[2] += 0.009151707145371349;
        result[3] += 0.566173882435762;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007039774727208729;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9975218658892129;
        result[1] += 0;
        result[2] += 0.00038872691933916425;
        result[3] += 0.0017006802721088435;
        result[4] += 0.00024295432458697764;
        result[5] += 0;
        result[6] += 0.0001457725947521866;
      } else {
        result[0] += 0.015212981744421906;
        result[1] += 0.004056795131845842;
        result[2] += 0.012170385395537525;
        result[3] += 0.25862068965517243;
        result[4] += 0.7099391480730223;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 0.3380735175744567;
        result[1] += 0.0018781862087469815;
        result[2] += 0.009390931043734908;
        result[3] += 0.6093372685806279;
        result[4] += 0.03971022269922189;
        result[5] += 0.0008049369466058492;
        result[6] += 0.0008049369466058492;
      } else {
        result[0] += 0.9426589392342817;
        result[1] += 0;
        result[2] += 0.003424657534246575;
        result[3] += 0.05303828591499824;
        result[4] += 0;
        result[5] += 8.781173164734808e-05;
        result[6] += 0.0007903055848261328;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.16817359855334538;
        result[1] += 0.0108499095840868;
        result[2] += 0;
        result[3] += 0.8209764918625678;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.005571030640668524;
        result[1] += 0.022284122562674095;
        result[2] += 0;
        result[3] += 0.21448467966573817;
        result[4] += 0.7576601671309192;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2796610169491525;
        result[1] += 0;
        result[2] += 0.011299435028248588;
        result[3] += 0.7090395480225988;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.0005859947260474657;
        result[1] += 0.0005859947260474657;
        result[2] += 0;
        result[3] += 0.9326106065045415;
        result[4] += 0.06592440668033989;
        result[5] += 0.00029299736302373285;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007926829268292683;
        result[2] += 0.006707317073170732;
        result[3] += 0;
        result[4] += 0.9823170731707317;
        result[5] += 0.003048780487804878;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.9960732984293194;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.003926701570680628;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.024279210925644917;
        result[3] += 0;
        result[4] += 0.9757207890743551;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9678456591639871;
        result[1] += 0.03215434083601286;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11510791366906475;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8848920863309353;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9950867341822922;
        result[1] += 0.000501353654868144;
        result[2] += 0.0005514890203549583;
        result[3] += 0.0038102877769978943;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.01353654868144e-05;
      } else {
        result[0] += 0.8118042813455657;
        result[1] += 0.0007951070336391437;
        result[2] += 0.004525993883792049;
        result[3] += 0.18214067278287463;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007339449541284404;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
        result[0] += 0.07692307692307693;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9230769230769231;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995904995904996;
        result[5] += 0.0004095004095004095;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0031416902293433867;
        result[2] += 0.00942507068803016;
        result[3] += 0.9868049010367578;
        result[4] += 0;
        result[5] += 0.0006283380458686773;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9983614019116978;
        result[1] += 0;
        result[2] += 0.001183431952662722;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004551661356395084;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5335285096891119;
        result[1] += 0.003067057019378224;
        result[2] += 0.0082252892792416;
        result[3] += 0.4547609089641712;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004182350480970305;
      } else {
        result[0] += 0.965344277245782;
        result[1] += 0;
        result[2] += 0.006839945280437756;
        result[3] += 0.02667578659370725;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011399908800729594;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999392512719265;
        result[1] += 0;
        result[2] += 0.0005695193256891184;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.796795504594123e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7458574181117534;
        result[1] += 0.0007707129094412333;
        result[2] += 0.0055876685934489415;
        result[3] += 0.22157996146435455;
        result[4] += 0.024855491329479774;
        result[5] += 0.00048169556840077076;
        result[6] += 0.0008670520231213874;
      } else {
        result[0] += 0;
        result[1] += 0.0013601741022850927;
        result[2] += 0.010609357997823723;
        result[3] += 0.7948857453754081;
        result[4] += 0.1920565832426551;
        result[5] += 0.0010881392818280742;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.01091901728844404;
        result[2] += 0.00272975432211101;
        result[3] += 0.986351228389445;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9926739926739927;
        result[1] += 0;
        result[2] += 0.007326007326007326;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.005319148936170213;
        result[1] += 0.03723404255319149;
        result[2] += 0;
        result[3] += 0.9574468085106383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.007030603804797354;
        result[1] += 0.0016542597187758478;
        result[2] += 0.011166253101736972;
        result[3] += 0.7038875103391232;
        result[4] += 0.2746071133167907;
        result[5] += 0.0016542597187758478;
        result[6] += 0;
      } else {
        result[0] += 0.7428773251707087;
        result[1] += 0;
        result[2] += 0.0047092064987049684;
        result[3] += 0.2500588650812338;
        result[4] += 0;
        result[5] += 0.0009418412997409936;
        result[6] += 0.0014127619496114904;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3592137592137592;
        result[1] += 0.003931203931203931;
        result[2] += 0.013267813267813268;
        result[3] += 0.6235872235872236;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9528405778324804;
        result[1] += 0.00025911770421714066;
        result[2] += 0.0005182354084342813;
        result[3] += 0.013603679471399883;
        result[4] += 0.03238971302714258;
        result[5] += 0;
        result[6] += 0.00038867655632571094;
      } else {
        result[0] += 0.7576472902527785;
        result[1] += 0.0011802891708468574;
        result[2] += 0.004131012097964001;
        result[3] += 0.23281203894954264;
        result[4] += 0.003934297236156192;
        result[5] += 9.83574309039048e-05;
        result[6] += 0.0001967148618078096;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004623921085080148;
        result[2] += 0.006473489519112207;
        result[3] += 0.9870530209617756;
        result[4] += 0;
        result[5] += 0.0018495684340320592;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 0.9991717936583058;
        result[1] += 0;
        result[2] += 0.0008282063416942735;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997652168809062;
        result[1] += 0;
        result[2] += 0.00023478311909373717;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5313286713286713;
        result[1] += 0.002937062937062937;
        result[2] += 0.009370629370629371;
        result[3] += 0.4555244755244755;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008391608391608392;
      } else {
        result[0] += 0.9677861549006168;
        result[1] += 0;
        result[2] += 0.007082476582133882;
        result[3] += 0.024445967557687916;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006854009595613434;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.001178318931657502;
        result[1] += 0;
        result[2] += 0.003534956794972506;
        result[3] += 0.8817753338570307;
        result[4] += 0.11154752553024352;
        result[5] += 0.0019638648860958365;
        result[6] += 0;
      } else {
        result[0] += 0.354089219330855;
        result[1] += 0;
        result[2] += 0.01486988847583643;
        result[3] += 0;
        result[4] += 0.6310408921933085;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9900410494378012;
        result[1] += 0.0005711226128859541;
        result[2] += 0.002141709798322328;
        result[3] += 0.006924861681242193;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003212564697483492;
      } else {
        result[0] += 0.6531660011409013;
        result[1] += 0;
        result[2] += 0.0038790644609241302;
        result[3] += 0.34204221334854534;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009127210496292071;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.012112036336109008;
        result[2] += 0.001514004542013626;
        result[3] += 0.9863739591218774;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.978021978021978;
        result[1] += 0;
        result[2] += 0.02197802197802198;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.970202002702609;
        result[1] += 0.0005890301791344722;
        result[2] += 0.0007969231835348741;
        result[3] += 0.028030906759987526;
        result[4] += 6.92976681334673e-05;
        result[5] += 0.00010394650220020096;
        result[6] += 0.00020789300440040193;
      } else {
        result[0] += 0.1511777301927195;
        result[1] += 0;
        result[2] += 0.019271948608137045;
        result[3] += 0.7182012847965739;
        result[4] += 0.11134903640256959;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.1390051139005114;
        result[1] += 0;
        result[2] += 0.00790330079033008;
        result[3] += 0.6843328684332869;
        result[4] += 0.16806136680613668;
        result[5] += 0.000697350069735007;
        result[6] += 0;
      } else {
        result[0] += 0.9909456740442656;
        result[1] += 0;
        result[2] += 0.0058350100603621734;
        result[3] += 0.0018108651911468814;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014084507042253522;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 0;
        result[1] += 0.036585365853658534;
        result[2] += 0;
        result[3] += 0.9634146341463414;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002861230329041488;
        result[1] += 0.011444921316165951;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9856938483547926;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.08057090239410682;
        result[1] += 0.004604051565377533;
        result[2] += 0.0027624309392265192;
        result[3] += 0.5566298342541437;
        result[4] += 0.35543278084714547;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.00684931506849315;
        result[1] += 0.0273972602739726;
        result[2] += 0;
        result[3] += 0.13013698630136986;
        result[4] += 0.8356164383561644;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3131201764057332;
        result[1] += 0.005512679162072767;
        result[2] += 0.0033076074972436605;
        result[3] += 0.6776920249908122;
        result[4] += 0.0003675119441381845;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0.3445121951219512;
        result[1] += 0;
        result[2] += 0.021341463414634148;
        result[3] += 0.6341463414634146;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01670297748729121;
        result[4] += 0.9832970225127088;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.9759314562002276;
        result[1] += 0.0006043799772468716;
        result[2] += 0.0008532423208191127;
        result[3] += 0.022468714448236636;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014220705346985212;
      } else {
        result[0] += 0.024166666666666666;
        result[1] += 0;
        result[2] += 0.020833333333333332;
        result[3] += 0.8416666666666667;
        result[4] += 0.1125;
        result[5] += 0.0008333333333333334;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.5202879581151832;
        result[1] += 0;
        result[2] += 0.00981675392670157;
        result[3] += 0.4142670157068063;
        result[4] += 0.05301047120418848;
        result[5] += 0.0006544502617801048;
        result[6] += 0.001963350785340314;
      } else {
        result[0] += 0.6502031884964051;
        result[1] += 0;
        result[2] += 0.0014066895904970304;
        result[3] += 0.2743044701469209;
        result[4] += 0.07361675523601126;
        result[5] += 0.00015629884338855892;
        result[6] += 0.00031259768677711783;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0006013229104028864;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9395670475045099;
        result[4] += 0.058929645219482865;
        result[5] += 0.0009019843656043296;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.8787878787878788;
        result[1] += 0;
        result[2] += 0.10101010101010101;
        result[3] += 0;
        result[4] += 0.020202020202020204;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004878048780487805;
        result[2] += 0.0031042128603104213;
        result[3] += 0;
        result[4] += 0.9893569844789357;
        result[5] += 0.0026607538802660754;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9959919839679359;
        result[1] += 0;
        result[2] += 0.00033400133600534405;
        result[3] += 0.003674014696058784;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7624360762436077;
        result[1] += 0;
        result[2] += 0.005423833875716721;
        result[3] += 0.23121028978769564;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009298000929800093;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9989862010701211;
        result[1] += 0;
        result[2] += 0.0007321881160236555;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002816108138552521;
      } else {
        result[0] += 0.7010721944245889;
        result[1] += 0.003288062902072908;
        result[2] += 0.008863473909935667;
        result[3] += 0.28649035025017866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028591851322373117;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.17430167597765364;
        result[1] += 0.0067039106145251395;
        result[2] += 0;
        result[3] += 0.7754189944134078;
        result[4] += 0.04357541899441341;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.029503105590062112;
        result[1] += 0;
        result[2] += 0.03260869565217391;
        result[3] += 0;
        result[4] += 0.937888198757764;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.994556341861731;
        result[1] += 0;
        result[2] += 0.0011976047904191617;
        result[3] += 0.004246053347849755;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5651582170806397;
        result[1] += 0;
        result[2] += 0.008166042871725078;
        result[3] += 0.4253147329023478;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001361007145287513;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3328380386329866;
        result[1] += 0.004457652303120356;
        result[2] += 0.009905894006934125;
        result[3] += 0.6527984150569589;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9987931980252333;
        result[1] += 0;
        result[2] += 0.0009325287986834889;
        result[3] += 0;
        result[4] += 0.00016456390565002744;
        result[5] += 0;
        result[6] += 0.00010970927043335163;
      } else {
        result[0] += 0.5695471038838866;
        result[1] += 0.0016126864668727322;
        result[2] += 0.004838059400618196;
        result[3] += 0.3519688213949738;
        result[4] += 0.07082381400349415;
        result[5] += 0.0009407337723424271;
        result[6] += 0.00026878107781212203;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.22505543237250555;
        result[1] += 0.0022172949002217295;
        result[2] += 0;
        result[3] += 0.7682926829268293;
        result[4] += 0.0022172949002217295;
        result[5] += 0.0022172949002217295;
        result[6] += 0;
      } else {
        result[0] += 0.995217044713385;
        result[1] += 0.0004348141169649975;
        result[2] += 0.000869628233929995;
        result[3] += 0.003297340386984564;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018117254873541562;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.1517241379310345;
        result[1] += 0.00606896551724138;
        result[2] += 0.005793103448275863;
        result[3] += 0.7586206896551725;
        result[4] += 0.07779310344827588;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.022673031026252982;
        result[1] += 0;
        result[2] += 0.028042959427207637;
        result[3] += 0.0513126491646778;
        result[4] += 0.8979713603818615;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.1619718309859155;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8380281690140845;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.8475482912332838;
        result[1] += 0;
        result[2] += 0.01337295690936107;
        result[3] += 0;
        result[4] += 0.137295690936107;
        result[5] += 0.0008915304606240713;
        result[6] += 0.0008915304606240713;
      } else {
        result[0] += 0.6994884910485933;
        result[1] += 0;
        result[2] += 0.0012787723785166241;
        result[3] += 0.00639386189258312;
        result[4] += 0.2864450127877238;
        result[5] += 0;
        result[6] += 0.00639386189258312;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9863387978142076;
        result[1] += 0;
        result[2] += 0.01366120218579235;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996528179608842;
        result[1] += 0;
        result[2] += 0.000270030474867878;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.715156424796514e-05;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0.2017026850032744;
        result[1] += 0.005020737830168085;
        result[2] += 0.0034926871862038856;
        result[3] += 0.4320017463435931;
        result[4] += 0.35778214363676053;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7898680384701409;
        result[1] += 0.0005591590248266607;
        result[2] += 0.006486244687989264;
        result[3] += 0.186199955267278;
        result[4] += 0.014761798255423843;
        result[5] += 0.0006709908297919928;
        result[6] += 0.0014538134645493178;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.019316493313521546;
        result[3] += 0;
        result[4] += 0.974739970282318;
        result[5] += 0.005943536404160475;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0029890401859847225;
        result[2] += 0.005978080371969445;
        result[3] += 0.9910328794420459;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 15;
  result[1] /= 15;
  result[2] /= 15;
  result[3] /= 15;
  result[4] /= 15;
  result[5] /= 15;
  result[6] /= 15;
  
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
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
