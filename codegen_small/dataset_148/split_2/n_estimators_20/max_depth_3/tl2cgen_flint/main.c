
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
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += (float)0.9961593855016803;
        result[1] += (float)0;
        result[2] += (float)0.003360537686029765;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00048007681228996637;
      } else {
        result[0] += (float)0.9996259973404256;
        result[1] += (float)0;
        result[2] += (float)0.0003740026595744681;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.020252561353347628;
        result[1] += (float)0.008339289969025495;
        result[2] += (float)0.012151536812008578;
        result[3] += (float)0.9578270192994996;
        result[4] += (float)0;
        result[5] += (float)0.0014295925661186562;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += (float)0.5550314465408805;
        result[1] += (float)0;
        result[2] += (float)0.0022711390635918936;
        result[3] += (float)0.44217330538085253;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005241090146750524;
      } else {
        result[0] += (float)0.9685244587008822;
        result[1] += (float)0.0002004811547714515;
        result[2] += (float)0.007217321571772254;
        result[3] += (float)0.02125100240577386;
        result[4] += (float)0;
        result[5] += (float)0.0002004811547714515;
        result[6] += (float)0.0026062550120288697;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0002994908655286014;
        result[2] += (float)0;
        result[3] += (float)0.9344115004492363;
        result[4] += (float)0.0649895178197065;
        result[5] += (float)0.0002994908655286014;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += (float)0.956989247311828;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.043010752688172046;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.005422503389064619;
        result[2] += (float)0.014008133755083597;
        result[3] += (float)0;
        result[4] += (float)0.9805693628558518;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9953095201278285;
        result[1] += (float)5.154373485902789e-05;
        result[2] += (float)0.0003608061440131952;
        result[3] += (float)0.004278129993299315;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5529715762273902;
        result[1] += (float)0.0029919760641914867;
        result[2] += (float)0.005575955392356862;
        result[3] += (float)0.4381884944920441;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002719978240174079;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433e0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9887146136189747;
        result[1] += (float)0;
        result[2] += (float)0.0023909716908951796;
        result[3] += (float)0.008320581484315226;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005738332058148432;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9320843091334895;
        result[4] += (float)0.06762295081967214;
        result[5] += (float)0.0002927400468384075;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.00728363324764353;
        result[2] += (float)0.009425878320479864;
        result[3] += (float)0;
        result[4] += (float)0.982433590402742;
        result[5] += (float)0.000856898029134533;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.999181124929628;
        result[1] += (float)0;
        result[2] += (float)0.0008188750703720764;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5332959484088041;
        result[1] += (float)0.0030842562736576474;
        result[2] += (float)0.007850834151128557;
        result[3] += (float)0.4552081872984719;
        result[4] += (float)0;
        result[5] += (float)0.00028038693396887705;
        result[6] += (float)0.00028038693396887705;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += (float)0.9923655292076344;
        result[1] += (float)0;
        result[2] += (float)0.004279930595720069;
        result[3] += (float)0.0025448235974551764;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0008097165991902834;
      } else {
        result[0] += (float)0.9536384976525821;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.04636150234741784;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.042105263157894736;
        result[1] += (float)0.2;
        result[2] += (float)0;
        result[3] += (float)0.7578947368421053;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        result[0] += (float)0.47023809523809523;
        result[1] += (float)0;
        result[2] += (float)0.011160714285714286;
        result[3] += (float)0.5096726190476191;
        result[4] += (float)0.008928571428571428;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.119701726844584;
        result[1] += (float)0.0027472527472527475;
        result[2] += (float)0.005886970172684459;
        result[3] += (float)0.5078492935635793;
        result[4] += (float)0.36381475667189955;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0.001201923076923077;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9987980769230769;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.13116656993615786;
        result[1] += (float)0.0005803830528148578;
        result[2] += (float)0.015089959373186303;
        result[3] += (float)0.8514219384793964;
        result[4] += (float)0;
        result[5] += (float)0.0017411491584445734;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += (float)0.9939639281454441;
        result[1] += (float)0.0005060179997831353;
        result[2] += (float)0.001120468428091228;
        result[3] += (float)0.0042650088553149975;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00014457657136661008;
      } else {
        result[0] += (float)0.6436194895591647;
        result[1] += (float)0;
        result[2] += (float)0.002320185614849188;
        result[3] += (float)0.3531322505800464;
        result[4] += (float)0;
        result[5] += (float)0.0001160092807424594;
        result[6] += (float)0.0008120649651972158;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
        result[0] += (float)0.9875926245045666;
        result[1] += (float)0.00012924349474409787;
        result[2] += (float)0.000732379803549888;
        result[3] += (float)0.011158021712907118;
        result[4] += (float)0.00025848698948819574;
        result[5] += (float)0.00012924349474409787;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9098419540229885;
        result[1] += (float)0.0017959770114942528;
        result[2] += (float)0.0021551724137931034;
        result[3] += (float)0.08620689655172414;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += (float)0.18957493018926466;
        result[1] += (float)0.0021718895439031957;
        result[2] += (float)0.015513496742165685;
        result[3] += (float)0.7725721377598511;
        result[4] += (float)0.018926466025442134;
        result[5] += (float)0.0012410797393732546;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0004904364884747426;
        result[1] += (float)0.008827856792545365;
        result[2] += (float)0;
        result[3] += (float)0.14909269249632173;
        result[4] += (float)0.8415890142226582;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.8584384858044165;
        result[1] += (float)0;
        result[2] += (float)0.006309148264984228;
        result[3] += (float)0.1297318611987382;
        result[4] += (float)0.00039432176656151424;
        result[5] += (float)0.0011829652996845428;
        result[6] += (float)0.003943217665615143;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.00859106529209622;
        result[3] += (float)0.7975372279495991;
        result[4] += (float)0.1938717067583047;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += (float)0.9863985374771481;
        result[1] += (float)0.00036563071297989033;
        result[2] += (float)0.0009140767824497258;
        result[3] += (float)0.011846435100548445;
        result[4] += (float)0.0002193784277879342;
        result[5] += (float)0;
        result[6] += (float)0.00025594149908592323;
      } else {
        result[0] += (float)0.7047487955953201;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.2945629731589815;
        result[4] += (float)0;
        result[5] += (float)0.0006882312456985548;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += (float)0.1950142000631114;
        result[1] += (float)0.003155569580309246;
        result[2] += (float)0.019564531397917324;
        result[3] += (float)0.7589144840643737;
        result[4] += (float)0.022404544020195646;
        result[5] += (float)0.0009466708740927738;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0004748338081671415;
        result[1] += (float)0.008072174738841406;
        result[2] += (float)0;
        result[3] += (float)0.1339031339031339;
        result[4] += (float)0.8575498575498576;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.002680965147453083;
        result[1] += (float)0;
        result[2] += (float)0.00804289544235925;
        result[3] += (float)0.7989276139410187;
        result[4] += (float)0.1903485254691689;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9381720430107527;
        result[4] += (float)0.03763440860215054;
        result[5] += (float)0.024193548387096774;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.993859649122807;
        result[1] += (float)0;
        result[2] += (float)0.004678362573099415;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0014619883040935672;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.00020999580008399833;
        result[2] += (float)0.005249895002099958;
        result[3] += (float)0.6690466190676186;
        result[4] += (float)0.3246535069298614;
        result[5] += (float)0.0008399832003359933;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.012746234067207415;
        result[2] += (float)0;
        result[3] += (float)0.002317497103128621;
        result[4] += (float)0.984936268829664;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9981280419318608;
        result[1] += (float)0;
        result[2] += (float)0.0018719580681392737;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.9099852991066381;
        result[1] += (float)0.002035508311658939;
        result[2] += (float)0.007237362885898451;
        result[3] += (float)0.07961099174488295;
        result[4] += (float)0;
        result[5] += (float)0.00022616759018432659;
        result[6] += (float)0.0009046703607373063;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.004534356470177886;
        result[3] += (float)0.9954656435298221;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0.0005580357142857144;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9977678571428572;
        result[5] += (float)0.001674107142857143;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.07150556952928494;
        result[1] += (float)0.005030542579949695;
        result[2] += (float)0.006827164929931728;
        result[3] += (float)0.9148401006108516;
        result[4] += (float)0;
        result[5] += (float)0.0017966223499820337;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d50000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.017142857142857144;
        result[3] += (float)0;
        result[4] += (float)0.9828571428571429;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.9929521754764473;
        result[1] += (float)0.0005034160373966199;
        result[2] += (float)0.0011147069399496585;
        result[3] += (float)0.005357784969435455;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.191657677094571e-05;
      } else {
        result[0] += (float)0.4371584699453552;
        result[1] += (float)0.00858704137392662;
        result[2] += (float)0.00624512099921936;
        result[3] += (float)0.5480093676814989;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.41870292118317104;
        result[1] += (float)0;
        result[2] += (float)0.005144221936432115;
        result[3] += (float)0.5743156347602425;
        result[4] += (float)0;
        result[5] += (float)0.00036744442403086535;
        result[6] += (float)0.0014697776961234614;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += (float)0.5145530145530146;
        result[1] += (float)0;
        result[2] += (float)0.014553014553014556;
        result[3] += (float)0.458939708939709;
        result[4] += (float)0.011954261954261957;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.18273260687342832;
        result[1] += (float)0.015088013411567477;
        result[2] += (float)0.008382229673093043;
        result[3] += (float)0.7937971500419112;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.39078498293515357;
        result[4] += (float)0.6092150170648464;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0007122507122507123;
        result[1] += (float)0.01282051282051282;
        result[2] += (float)0;
        result[3] += (float)0.049145299145299144;
        result[4] += (float)0.9373219373219374;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += (float)0.981028457314029;
        result[1] += (float)0.0006418943014050353;
        result[2] += (float)0.000927180657585051;
        result[3] += (float)0.017152842165323444;
        result[4] += (float)0.00014264317809000785;
        result[5] += (float)3.566079452250196e-05;
        result[6] += (float)7.132158904500393e-05;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.012646793134598013;
        result[3] += (float)0.9494128274616079;
        result[4] += (float)0.03523035230352303;
        result[5] += (float)0.0027100271002710027;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += (float)0.6504672897196262;
        result[1] += (float)0;
        result[2] += (float)0.0040887850467289715;
        result[3] += (float)0.3426401869158878;
        result[4] += (float)0.0009345794392523365;
        result[5] += (float)0.00046728971962616824;
        result[6] += (float)0.0014018691588785046;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.011083123425692695;
        result[2] += (float)0.011586901763224182;
        result[3] += (float)0.8639798488664987;
        result[4] += (float)0.11335012594458438;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9962121212121212;
        result[1] += (float)0.003787878787878788;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        result[0] += (float)0.07687296416938111;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.019543973941368076;
        result[4] += (float)0.9035830618892509;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.010416666666666666;
        result[1] += (float)0;
        result[2] += (float)0.078125;
        result[3] += (float)0.9114583333333334;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += (float)0.9968491908149139;
        result[1] += (float)0;
        result[2] += (float)0.0004296557979662959;
        result[3] += (float)0.0025779347877977754;
        result[4] += (float)9.547906621473243e-05;
        result[5] += (float)0;
        result[6] += (float)4.773953310736621e-05;
      } else {
        result[0] += (float)0.017671517671517672;
        result[1] += (float)0.002079002079002079;
        result[2] += (float)0.010395010395010396;
        result[3] += (float)0.28482328482328484;
        result[4] += (float)0.682952182952183;
        result[5] += (float)0.002079002079002079;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42890000))) ) ) {
        result[0] += (float)0.708954675677661;
        result[1] += (float)0.0005876735473444502;
        result[2] += (float)0.0020568574157055755;
        result[3] += (float)0.28766620142510835;
        result[4] += (float)0.0002203775802541688;
        result[5] += (float)0.00014691838683611255;
        result[6] += (float)0.00036729596709028135;
      } else {
        result[0] += (float)0.8344847438111687;
        result[1] += (float)0;
        result[2] += (float)0.012377662636729994;
        result[3] += (float)0.10679332181922856;
        result[4] += (float)0.04461715601611975;
        result[5] += (float)0.0005757052389176742;
        result[6] += (float)0.0011514104778353484;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9367782909930716;
        result[4] += (float)0.06293302540415704;
        result[5] += (float)0.0002886836027713626;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.27272727272727276;
        result[1] += (float)0.1931818181818182;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5227272727272728;
        result[5] += (float)0.011363636363636366;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.03487858719646799;
        result[1] += (float)0;
        result[2] += (float)0.010596026490066225;
        result[3] += (float)0;
        result[4] += (float)0.9536423841059603;
        result[5] += (float)0.0008830022075055188;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += (float)0.9994164332399627;
        result[1] += (float)0;
        result[2] += (float)0.0005835667600373483;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += (float)0.5433137089991591;
        result[1] += (float)0.0015138772077375948;
        result[2] += (float)0.004541631623212784;
        result[3] += (float)0.44995794785534066;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006728343145500421;
      } else {
        result[0] += (float)0.8621940163191296;
        result[1] += (float)0.0009066183136899365;
        result[2] += (float)0.011967361740707162;
        result[3] += (float)0.12239347234814144;
        result[4] += (float)0;
        result[5] += (float)0.00036264732547597464;
        result[6] += (float)0.0021758839528558476;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41280000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += (float)0.2518796992481203;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.42606516290726815;
        result[4] += (float)0.32205513784461154;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8422044276966557;
        result[1] += (float)0;
        result[2] += (float)0.0020411367561626627;
        result[3] += (float)0.13864028889935626;
        result[4] += (float)0.016957136128120585;
        result[5] += (float)0.0001570105197048202;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += (float)0.10258697591436218;
        result[1] += (float)0.008028545941123996;
        result[2] += (float)0.0026761819803746653;
        result[3] += (float)0.6360392506690455;
        result[4] += (float)0.25066904549509367;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8682448216788662;
        result[1] += (float)0;
        result[2] += (float)0.003114779629341224;
        result[3] += (float)0.1280174427659243;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006229559258682448;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9990117492039091;
        result[1] += (float)0;
        result[2] += (float)0.0008235423300757659;
        result[3] += (float)0;
        result[4] += (float)0.00010980564401010212;
        result[5] += (float)0;
        result[6] += (float)5.490282200505106e-05;
      } else {
        result[0] += (float)0.5525801631996322;
        result[1] += (float)0.0013791518216296978;
        result[2] += (float)0.005861395241926215;
        result[3] += (float)0.3629467877255488;
        result[4] += (float)0.07642799678197908;
        result[5] += (float)0.00034478795540742444;
        result[6] += (float)0.0004597172738765659;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.11096938775510204;
        result[1] += (float)0.017857142857142856;
        result[2] += (float)0;
        result[3] += (float)0.6326530612244898;
        result[4] += (float)0.2385204081632653;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.011904761904761904;
        result[1] += (float)0;
        result[2] += (float)0.00641025641025641;
        result[3] += (float)0.13644688644688643;
        result[4] += (float)0.8452380952380952;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.4525240384615385;
        result[1] += (float)0;
        result[2] += (float)0.0012019230769230772;
        result[3] += (float)0.1153846153846154;
        result[4] += (float)0.4290865384615385;
        result[5] += (float)0.0018028846153846157;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0003408316291751875;
        result[2] += (float)0.009202453987730064;
        result[3] += (float)0.9693251533742332;
        result[4] += (float)0.019086571233810502;
        result[5] += (float)0.0020449897750511254;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.15203021718602455;
        result[4] += (float)0.8479697828139755;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.013365735115431349;
        result[2] += (float)0;
        result[3] += (float)0.002430133657351154;
        result[4] += (float)0.9842041312272175;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += (float)0.4378238341968912;
        result[1] += (float)0.015544041450777202;
        result[2] += (float)0;
        result[3] += (float)0.5466321243523317;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.2549019607843137;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7450980392156863;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += (float)0.9362801377726752;
        result[1] += (float)0.00026494745208866915;
        result[2] += (float)0.0039300538726485925;
        result[3] += (float)0.0591715976331361;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003532632694515588;
      } else {
        result[0] += (float)0.8721734120697106;
        result[1] += (float)0;
        result[2] += (float)0.001152239665850497;
        result[3] += (float)0.126674348264439;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42640000))) ) ) {
        result[0] += (float)0.4;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.6;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.999195494770716;
        result[5] += (float)0.0008045052292839903;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += (float)0.000727802037845706;
        result[1] += (float)0.0054585152838427945;
        result[2] += (float)0.005094614264919942;
        result[3] += (float)0.9872634643377002;
        result[4] += (float)0;
        result[5] += (float)0.001455604075691412;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9655172413793104;
        result[1] += (float)0;
        result[2] += (float)0.034482758620689655;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.0061633281972265025;
        result[3] += (float)0.9938366718027735;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9950091668364229;
        result[1] += (float)0.00010185373803218578;
        result[2] += (float)0.000458341821144836;
        result[3] += (float)0.004379710735383988;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)5.092686901609289e-05;
      } else {
        result[0] += (float)0.806981887739853;
        result[1] += (float)0.0010759758503198042;
        result[2] += (float)0.005439655687727899;
        result[3] += (float)0.1858449399246817;
        result[4] += (float)0;
        result[5] += (float)5.9776436128878005e-05;
        result[6] += (float)0.0005977643612887801;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.01341350601295097;
        result[2] += (float)0.010175763182238668;
        result[3] += (float)0.8672525439407955;
        result[4] += (float)0.1091581868640148;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9957401490947817;
        result[1] += (float)0.004259850905218318;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.4796747967479675;
        result[1] += (float)0;
        result[2] += (float)0.034552845528455285;
        result[3] += (float)0.48577235772357724;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        result[0] += (float)0.9993914730156316;
        result[1] += (float)0;
        result[2] += (float)0.0005704940478454342;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.8032936523028945e-05;
      } else {
        result[0] += (float)0.4444444444444444;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5555555555555556;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += (float)0.6653805343879617;
        result[1] += (float)0.0015433587344458374;
        result[2] += (float)0.0038583968361145934;
        result[3] += (float)0.3174495996913282;
        result[4] += (float)0.010610591299315133;
        result[5] += (float)0.00038583968361145934;
        result[6] += (float)0.0007716793672229187;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.011402508551881414;
        result[3] += (float)0.6533637400228051;
        result[4] += (float)0.33352337514253133;
        result[5] += (float)0.0017103762827822121;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9990033523602428;
        result[1] += (float)0;
        result[2] += (float)0.0008154389779831476;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001812086617740328;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.996116504854369;
        result[5] += (float)0.003883495145631068;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += (float)0.6501752044051394;
        result[1] += (float)0.0015017520440513935;
        result[2] += (float)0.005673285499749709;
        result[3] += (float)0.3414817286834641;
        result[4] += (float)0;
        result[5] += (float)0.00025029200734189895;
        result[6] += (float)0.0009177373602536293;
      } else {
        result[0] += (float)0.06352851128970533;
        result[1] += (float)0.007271335629544585;
        result[2] += (float)0.009950248756218905;
        result[3] += (float)0.918867202449292;
        result[4] += (float)0;
        result[5] += (float)0.0003827018752391887;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += (float)0.23100871731008718;
        result[1] += (float)0.008717310087173101;
        result[2] += (float)0;
        result[3] += (float)0.7577833125778332;
        result[4] += (float)0.0024906600249066002;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5060018467220684;
        result[1] += (float)0;
        result[2] += (float)0.029547553093259463;
        result[3] += (float)0.4644506001846722;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.34913793103448276;
        result[4] += (float)0.6508620689655172;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0007032348804500703;
        result[1] += (float)0.012658227848101266;
        result[2] += (float)0;
        result[3] += (float)0.04571026722925457;
        result[4] += (float)0.9409282700421941;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += (float)0.6874698795180723;
        result[1] += (float)0;
        result[2] += (float)0.006746987951807229;
        result[3] += (float)0.2746987951807229;
        result[4] += (float)0.030120481927710843;
        result[5] += (float)0;
        result[6] += (float)0.0009638554216867469;
      } else {
        result[0] += (float)0.9808251473477406;
        result[1] += (float)0.0005108055009823183;
        result[2] += (float)0.0006286836935166994;
        result[3] += (float)0.017799607072691553;
        result[4] += (float)0.00015717092337917484;
        result[5] += (float)0;
        result[6] += (float)7.858546168958742e-05;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += (float)0.4447339039821362;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5552660960178638;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8149835484687421;
        result[1] += (float)0;
        result[2] += (float)0.012655024044545684;
        result[3] += (float)0.0010124019235636548;
        result[4] += (float)0.16805871931156668;
        result[5] += (float)0.0012655024044545685;
        result[6] += (float)0.0020248038471273096;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += (float)0.6938472942920683;
        result[1] += (float)0;
        result[2] += (float)0.0022238695329873984;
        result[3] += (float)0.3021991598715098;
        result[4] += (float)0.0009883864591055105;
        result[5] += (float)0;
        result[6] += (float)0.0007412898443291328;
      } else {
        result[0] += (float)0.9813600821420109;
        result[1] += (float)0.0005528789195166258;
        result[2] += (float)0.0006713529736987599;
        result[3] += (float)0.016941789748045177;
        result[4] += (float)0.00019745675697022352;
        result[5] += (float)7.898270278808941e-05;
        result[6] += (float)0.00019745675697022352;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3319824383654171;
        result[1] += (float)0.008443093549476529;
        result[2] += (float)0.0182370820668693;
        result[3] += (float)0.6413373860182371;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += (float)0.07846952010376135;
        result[1] += (float)0;
        result[2] += (float)0.01556420233463035;
        result[3] += (float)0.7911802853437094;
        result[4] += (float)0.11284046692607004;
        result[5] += (float)0.0019455252918287938;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1821074964639321;
        result[1] += (float)0;
        result[2] += (float)0.0010608203677510608;
        result[3] += (float)0.6428571428571429;
        result[4] += (float)0.173974540311174;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433e8000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9939382088384826;
        result[1] += (float)0;
        result[2] += (float)0.0035197497066875244;
        result[3] += (float)0.0011732499022291747;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001368791552600704;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9994291803029149;
        result[1] += (float)0;
        result[2] += (float)0.000570819697085014;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += (float)0.019522219368096585;
        result[1] += (float)0.003853069612124326;
        result[2] += (float)0.012329822758797843;
        result[3] += (float)0.71435910608785;
        result[4] += (float)0.24865142563575648;
        result[5] += (float)0.0012843565373747753;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7452364832188799;
        result[1] += (float)0;
        result[2] += (float)0.004836057645807138;
        result[3] += (float)0.24876680530031917;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001160653834993713;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += (float)0.5698198198198198;
        result[1] += (float)0;
        result[2] += (float)0.018018018018018018;
        result[3] += (float)0.41216216216216217;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.014167650531286895;
        result[2] += (float)0;
        result[3] += (float)0.9858323494687131;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0375;
        result[2] += (float)0;
        result[3] += (float)0.385;
        result[4] += (float)0.5775;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.025482625482625483;
        result[4] += (float)0.9745173745173745;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += (float)0.32475598935226263;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6308784383318545;
        result[4] += (float)0.044365572315882874;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.027613412228796843;
        result[2] += (float)0;
        result[3] += (float)0.16173570019723865;
        result[4] += (float)0.8106508875739645;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += (float)0.0933852140077821;
        result[1] += (float)0;
        result[2] += (float)0.016536964980544747;
        result[3] += (float)0.6926070038910506;
        result[4] += (float)0.193579766536965;
        result[5] += (float)0.0038910505836575876;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8953077699293643;
        result[1] += (float)0;
        result[2] += (float)0.0022704339051463174;
        result[3] += (float)0.10208543558694923;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00033636057854019515;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
        result[0] += (float)0.4025974025974026;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.22077922077922077;
        result[4] += (float)0.37662337662337664;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.85044909517278;
        result[1] += (float)0.0014601123844077695;
        result[2] += (float)0.0024777664705101544;
        result[3] += (float)0.08844741383124641;
        result[4] += (float)0.05672315384275032;
        result[5] += (float)0.0001327374894916154;
        result[6] += (float)0.0003097208088137693;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.18864534674811353;
        result[1] += (float)0;
        result[2] += (float)0.00035932446999640676;
        result[3] += (float)0.6295364714337046;
        result[4] += (float)0.181099532878189;
        result[5] += (float)0.00035932446999640676;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9968436154949785;
        result[1] += (float)0;
        result[2] += (float)0.0020086083213773313;
        result[3] += (float)0.0005738880918220947;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0005738880918220947;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  result[2] /= 20;
  result[3] /= 20;
  result[4] /= 20;
  result[5] /= 20;
  result[6] /= 20;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  result[2] += (float)0;
  result[3] += (float)0;
  result[4] += (float)0;
  result[5] += (float)0;
  result[6] += (float)0;
  
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_2/test_data.csv", "r");
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
