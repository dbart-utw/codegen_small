
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        result[0] += (float)0.11745189117451892;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.840743198407432;
        result[4] += (float)0.0418049104180491;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.18903374233128836;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7476993865030676;
        result[4] += (float)0.06134969325153375;
        result[5] += (float)0.0019171779141104297;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += (float)0.8666666666666667;
        result[1] += (float)0;
        result[2] += (float)0.12380952380952381;
        result[3] += (float)0;
        result[4] += (float)0.009523809523809525;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.004984141368373357;
        result[2] += (float)0.004531037607612143;
        result[3] += (float)0;
        result[4] += (float)0.9868599909379248;
        result[5] += (float)0.0036248300860897147;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        result[0] += (float)0.9995668745668745;
        result[1] += (float)0;
        result[2] += (float)0.0004331254331254331;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9988239905919247;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0011760094080752645;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9128831528001844;
        result[1] += (float)0.0021894445724821385;
        result[2] += (float)0.008412076515326113;
        result[3] += (float)0.07490205116386264;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0016132749481447338;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.001451378809869376;
        result[2] += (float)0.0050798258345428155;
        result[3] += (float)0.9934687953555879;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += (float)0.9990783410138249;
        result[1] += (float)0;
        result[2] += (float)0.0009216589861751152;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9999546978345565;
        result[1] += (float)0;
        result[2] += (float)4.53021654435082e-05;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.014026684912760863;
        result[1] += (float)0.008039685254875127;
        result[2] += (float)0.009237085186452275;
        result[3] += (float)0.671228190215532;
        result[4] += (float)0.2962709544988026;
        result[5] += (float)0.0011973999315771468;
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        result[0] += (float)0.6051763930102209;
        result[1] += (float)0;
        result[2] += (float)0.00280250576986482;
        result[3] += (float)0.3910319815364326;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009891196834817012;
      } else {
        result[0] += (float)0.9178112538768276;
        result[1] += (float)0;
        result[2] += (float)0.005538325210456358;
        result[3] += (float)0.07620735489587949;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00044306601683650863;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += (float)0.9925;
        result[1] += (float)0;
        result[2] += (float)0.0065;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001;
      } else {
        result[0] += (float)0.9995883757306331;
        result[1] += (float)0;
        result[2] += (float)0.00041162426936692186;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
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
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.014046369944152986;
        result[1] += (float)0.004738534438991369;
        result[2] += (float)0.007784735149771535;
        result[3] += (float)0.6809950922321882;
        result[4] += (float)0.29040446776104245;
        result[5] += (float)0.002030800473853444;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.5836139169472503;
        result[1] += (float)0;
        result[2] += (float)0.002405002405002405;
        result[3] += (float)0.4126984126984127;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001282667949334616;
      } else {
        result[0] += (float)0.9695177434030938;
        result[1] += (float)0;
        result[2] += (float)0.006369426751592358;
        result[3] += (float)0.023202911737943588;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009099181073703368;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += (float)0.0012269938650306751;
        result[1] += (float)0;
        result[2] += (float)0.004601226993865032;
        result[3] += (float)0.9518404907975461;
        result[4] += (float)0.03957055214723927;
        result[5] += (float)0.002760736196319019;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5062240663900415;
        result[1] += (float)0;
        result[2] += (float)0.01037344398340249;
        result[3] += (float)0;
        result[4] += (float)0.483402489626556;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.10852713178294573;
        result[2] += (float)0;
        result[3] += (float)0.8914728682170543;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.009433962264150943;
        result[2] += (float)0;
        result[3] += (float)0.9905660377358491;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9315068493150684;
        result[1] += (float)0.0684931506849315;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9944833755777547;
        result[1] += (float)0.00029819591471596846;
        result[2] += (float)0.0005466925103126088;
        result[3] += (float)0.004472938720739526;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00019879727647731228;
      } else {
        result[0] += (float)0.8085651537335286;
        result[1] += (float)0.0006710590531966813;
        result[2] += (float)0.005185456320156174;
        result[3] += (float)0.1851512933138116;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.000427037579306979;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)0.9974293059125964;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.002570694087403599;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.007259528130671506;
        result[3] += (float)0.789732953072336;
        result[4] += (float)0.2009333679025149;
        result[5] += (float)0.002074150894477573;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.14602803738317757;
        result[4] += (float)0.8539719626168224;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.010158013544018058;
        result[2] += (float)0;
        result[3] += (float)0.001128668171557562;
        result[4] += (float)0.9887133182844243;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += (float)0.9972100438421683;
        result[1] += (float)0.0005434979528243778;
        result[2] += (float)0.0017754266458929675;
        result[3] += (float)0.00028986557483966815;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001811659842747926;
      } else {
        result[0] += (float)0.021021021021021023;
        result[1] += (float)0.036036036036036036;
        result[2] += (float)0;
        result[3] += (float)0.9429429429429429;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        result[0] += (float)0.8030752630159158;
        result[1] += (float)0;
        result[2] += (float)0.006474237928243863;
        result[3] += (float)0.18937145940113298;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0010790396547073105;
      } else {
        result[0] += (float)0.5264405543398979;
        result[1] += (float)0;
        result[2] += (float)0.0036469730123997084;
        result[3] += (float)0.4699124726477024;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.002635313196837624;
        result[2] += (float)0.0028380295965943643;
        result[3] += (float)0.6543685384147577;
        result[4] += (float)0.3393472531927833;
        result[5] += (float)0.0008108655990269613;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += (float)0.9964872033837552;
        result[1] += (float)0.0004659832246039143;
        result[2] += (float)0.0021865366692952904;
        result[3] += (float)0.0005018280880349847;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00035844863431070334;
      } else {
        result[0] += (float)0.32608695652173914;
        result[1] += (float)0.03162055335968379;
        result[2] += (float)0;
        result[3] += (float)0.642292490118577;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.16452991452991456;
        result[1] += (float)0;
        result[2] += (float)0.008012820512820514;
        result[3] += (float)0.827190170940171;
        result[4] += (float)0;
        result[5] += (float)0.0002670940170940172;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)71.5) ) ) {
        result[0] += (float)0.9984770027413951;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.0015229972586049345;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9837114601512508;
        result[1] += (float)0;
        result[2] += (float)0.013379872018615475;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0029086678301337987;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        result[0] += (float)0.9851849168689102;
        result[1] += (float)0.0005795631542724673;
        result[2] += (float)0.0011229036114029053;
        result[3] += (float)0.012750389393994279;
        result[4] += (float)0.0001086680914260876;
        result[5] += (float)3.6222697142029204e-05;
        result[6] += (float)0.0002173361828521752;
      } else {
        result[0] += (float)0.2700587084148728;
        result[1] += (float)0;
        result[2] += (float)0.0004892367906066536;
        result[3] += (float)0.7240704500978473;
        result[4] += (float)0.002446183953033268;
        result[5] += (float)0.0029354207436399216;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.2565762849048968;
        result[1] += (float)0.008903278025091057;
        result[2] += (float)0.006070416835289356;
        result[3] += (float)0.6284904896802914;
        result[4] += (float)0.09995953055443141;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1272824919441461;
        result[1] += (float)0;
        result[2] += (float)0.013963480128893663;
        result[3] += (float)0.05155746509129968;
        result[4] += (float)0.8071965628356605;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.2611008325624422;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7388991674375578;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6074074074074075;
        result[1] += (float)0;
        result[2] += (float)0.019943019943019946;
        result[3] += (float)0.0028490028490028496;
        result[4] += (float)0.36581196581196584;
        result[5] += (float)0.0011396011396011397;
        result[6] += (float)0.0028490028490028496;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += (float)0.2570836212854181;
        result[1] += (float)0.006219765031098825;
        result[2] += (float)0;
        result[3] += (float)0.479612992398065;
        result[4] += (float)0.2570836212854181;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1048951048951049;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.43356643356643354;
        result[4] += (float)0.46153846153846156;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.28624733475479747;
        result[1] += (float)0.007462686567164179;
        result[2] += (float)0.013326226012793176;
        result[3] += (float)0.6929637526652452;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.18908748824082788;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.19849482596425214;
        result[4] += (float)0.6114769520225777;
        result[5] += (float)0.0009407337723424272;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.016118633139909737;
        result[3] += (float)0.8929722759509994;
        result[4] += (float)0.08961960025789813;
        result[5] += (float)0.0012894906511927789;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9608730068981115;
        result[1] += (float)0.0010742960533755513;
        result[2] += (float)0.001922424516566776;
        result[3] += (float)0.03590410494176185;
        result[4] += (float)0;
        result[5] += (float)0.00022616759018432659;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8683118702516299;
        result[1] += (float)0;
        result[2] += (float)0.0018858774718465434;
        result[3] += (float)0.1294250767821542;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00037717549436930867;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += (float)0.0011435105774728416;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9325328759291024;
        result[4] += (float)0.06489422527158376;
        result[5] += (float)0.001429388221841052;
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += (float)0.9789473684210527;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.021052631578947368;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.006454388984509466;
        result[2] += (float)0.007314974182444062;
        result[3] += (float)0;
        result[4] += (float)0.98407917383821;
        result[5] += (float)0.0021514629948364886;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += (float)0.9969474525764952;
        result[1] += (float)0.0006541173050367031;
        result[2] += (float)0.00207137146594956;
        result[3] += (float)0.00021803910167890103;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010901955083945052;
      } else {
        result[0] += (float)0.29764453961456105;
        result[1] += (float)0.014989293361884369;
        result[2] += (float)0;
        result[3] += (float)0.6873661670235546;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        result[0] += (float)0.8085969180859692;
        result[1] += (float)0;
        result[2] += (float)0.008110300081103;
        result[3] += (float)0.18221140848878076;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0010813733441470668;
      } else {
        result[0] += (float)0.5240357210716321;
        result[1] += (float)0;
        result[2] += (float)0.002470074102223067;
        result[3] += (float)0.4734942048261448;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += (float)0.20397489539748953;
        result[1] += (float)0.010983263598326359;
        result[2] += (float)0;
        result[3] += (float)0.7850418410041841;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5237668161434977;
        result[1] += (float)0;
        result[2] += (float)0.016143497757847534;
        result[3] += (float)0.4600896860986547;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
        result[0] += (float)0.9996183351780467;
        result[1] += (float)0;
        result[2] += (float)0.0003434983397580245;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.8166482195336056e-05;
      } else {
        result[0] += (float)0.8181818181818182;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.18181818181818182;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.7894146669656874;
        result[1] += (float)0.0012334604171338865;
        result[2] += (float)0.006727965911639381;
        result[3] += (float)0.184906929804889;
        result[4] += (float)0.015698587127158554;
        result[5] += (float)0.0008970621215519175;
        result[6] += (float)0.001121327651939897;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0010718113612004287;
        result[2] += (float)0.009110396570203644;
        result[3] += (float)0.8011789924973205;
        result[4] += (float)0.18810289389067525;
        result[5] += (float)0.0005359056806002144;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += (float)0.9688995215311005;
        result[1] += (float)0;
        result[2] += (float)0.03110047846889952;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.06635071090047394;
        result[1] += (float)0.003686150605581885;
        result[2] += (float)0;
        result[3] += (float)0.9283833596629805;
        result[4] += (float)0.001579778830963665;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.3706140350877193;
        result[4] += (float)0.6293859649122807;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.001451378809869376;
        result[1] += (float)0.010159651669085631;
        result[2] += (float)0;
        result[3] += (float)0.03555878084179971;
        result[4] += (float)0.9528301886792453;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += (float)0.9991961414790996;
        result[1] += (float)0;
        result[2] += (float)0.000765579543714592;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.82789771857296e-05;
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.003293084522502744;
        result[1] += (float)0.003293084522502744;
        result[2] += (float)0;
        result[3] += (float)0.2217343578485181;
        result[4] += (float)0.7716794731064764;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5964853275035735;
        result[1] += (float)0.0009249138148490709;
        result[2] += (float)0.008071975111410072;
        result[3] += (float)0.38064407634743125;
        result[4] += (float)0.01261246111157824;
        result[5] += (float)0.0005885815185403178;
        result[6] += (float)0.0006726645926175061;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.19768563162970107;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.1755062680810029;
        result[4] += (float)0.6248794599807136;
        result[5] += (float)0.0019286403085824494;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.00917813934084272;
        result[3] += (float)0.9570296203587818;
        result[4] += (float)0.03087192323738006;
        result[5] += (float)0.002920317062995411;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.3161290322580645;
        result[4] += (float)0.6838709677419355;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.004888268156424581;
        result[2] += (float)0;
        result[3] += (float)0.008379888268156424;
        result[4] += (float)0.986731843575419;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += (float)0.985179735127181;
        result[1] += (float)0.0006306495690561278;
        result[2] += (float)0.0020671291430173076;
        result[3] += (float)0.01177212528904772;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003503608716978488;
      } else {
        result[0] += (float)0.24971363115693013;
        result[1] += (float)0.01718213058419244;
        result[2] += (float)0.014891179839633447;
        result[3] += (float)0.718213058419244;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.43472727272727274;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5652727272727273;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.988322065150584;
        result[1] += (float)0;
        result[2] += (float)0.009219422249539031;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0.0003073140749846343;
        result[6] += (float)0.0021511985248924407;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9539028887523049;
        result[1] += (float)0;
        result[2] += (float)0.001997541487400123;
        result[3] += (float)0.01936078672403196;
        result[4] += (float)0.024585125998770743;
        result[5] += (float)0.00015365703749231714;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8160919540229885;
        result[1] += (float)0;
        result[2] += (float)0.0073145245559038665;
        result[3] += (float)0.17659352142110762;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += (float)0.7465831435079726;
        result[1] += (float)0;
        result[2] += (float)0.0043659832953682615;
        result[3] += (float)0.24791192103264997;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0011389521640091116;
      } else {
        result[0] += (float)0.13705054715997916;
        result[1] += (float)0.0036477331943720686;
        result[2] += (float)0.004689942678478374;
        result[3] += (float)0.5919749869723815;
        result[4] += (float)0.2610734757686295;
        result[5] += (float)0.001563314226159458;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.07963655799037947;
        result[1] += (float)0;
        result[2] += (float)0.006413682522715126;
        result[3] += (float)0.6018172100481026;
        result[4] += (float)0.3083912346338856;
        result[5] += (float)0.0037413148049171567;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.003238341968911917;
        result[2] += (float)0;
        result[3] += (float)0.20531088082901555;
        result[4] += (float)0.7914507772020726;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.99933299983325;
        result[1] += (float)0;
        result[2] += (float)0.0006114168195208716;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)5.558334722917014e-05;
      } else {
        result[0] += (float)0.6566783122816449;
        result[1] += (float)0.0037624294544477297;
        result[2] += (float)0.00389680193496372;
        result[3] += (float)0.33472184896533197;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009406073636119324;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        result[0] += (float)0.4684129429892142;
        result[1] += (float)0;
        result[2] += (float)0.011556240369799693;
        result[3] += (float)0.5077041602465332;
        result[4] += (float)0.012326656394453007;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1285892634207241;
        result[1] += (float)0.003745318352059925;
        result[2] += (float)0.005409904286308781;
        result[3] += (float)0.5488972118185601;
        result[4] += (float)0.31335830212234705;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += (float)0.010869565217391304;
        result[1] += (float)0.014492753623188406;
        result[2] += (float)0;
        result[3] += (float)0.17572463768115942;
        result[4] += (float)0.7989130434782609;
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
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += (float)0.11454940282301845;
        result[1] += (float)0;
        result[2] += (float)0.004885993485342019;
        result[3] += (float)0.8045602605863192;
        result[4] += (float)0.07111834961997829;
        result[5] += (float)0.004885993485342019;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9937468372731874;
        result[1] += (float)0.000831345333622497;
        result[2] += (float)0.0011205089279259742;
        result[3] += (float)0.004012144870960746;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002891635943034772;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.43937708565072303;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.560622914349277;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8169654127745519;
        result[1] += (float)0;
        result[2] += (float)0.012118151981822771;
        result[3] += (float)0.0005049229992426155;
        result[4] += (float)0.17015905074476143;
        result[5] += (float)0;
        result[6] += (float)0.00025246149962130775;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0.0025031289111389237;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9974968710888611;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.20076824583866837;
        result[1] += (float)0;
        result[2] += (float)0.006145966709346991;
        result[3] += (float)0.7912932138284251;
        result[4] += (float)0;
        result[5] += (float)0.001792573623559539;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.13847900113507378;
        result[4] += (float)0.8615209988649262;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.007972665148063782;
        result[2] += (float)0;
        result[3] += (float)0.0011389521640091116;
        result[4] += (float)0.9908883826879271;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9948622139187296;
        result[1] += (float)0.0002594841455187089;
        result[2] += (float)0.00041517463282993416;
        result[3] += (float)0.004307436815610567;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001556904873112253;
      } else {
        result[0] += (float)0.5419722901385493;
        result[1] += (float)0.0028524857375713123;
        result[2] += (float)0.007606628633523499;
        result[3] += (float)0.44688943221950556;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006791632708503124;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += (float)0.9932540589983994;
        result[1] += (float)0;
        result[2] += (float)0.004344843356963184;
        result[3] += (float)0.0017150697461696778;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006860278984678711;
      } else {
        result[0] += (float)0.9506024096385542;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.04939759036144578;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9992733114051863;
        result[1] += (float)0;
        result[2] += (float)0.0005737015222213723;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00015298707259236595;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += (float)0.01838235294117647;
        result[1] += (float)0.003676470588235294;
        result[2] += (float)0.01680672268907563;
        result[3] += (float)0.7137605042016807;
        result[4] += (float)0.24579831932773108;
        result[5] += (float)0.0015756302521008404;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7441838108056144;
        result[1] += (float)0;
        result[2] += (float)0.0033647375504710633;
        result[3] += (float)0.25206691020957506;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003845414343395501;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += (float)0.18866396761133603;
        result[1] += (float)0.010526315789473684;
        result[2] += (float)0;
        result[3] += (float)0.8;
        result[4] += (float)0.0008097165991902834;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.08543263964950712;
        result[1] += (float)0;
        result[2] += (float)0.004381161007667032;
        result[3] += (float)0.23877327491785322;
        result[4] += (float)0.6714129244249726;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.015151515151515152;
        result[1] += (float)0.07575757575757576;
        result[2] += (float)0;
        result[3] += (float)0.9090909090909091;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
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
        result[4] += (float)0.9991503823279524;
        result[5] += (float)0.0008496176720475786;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)3.5) ) ) {
        result[0] += (float)0.22016460905349794;
        result[1] += (float)0.0027434842249657062;
        result[2] += (float)0.009259259259259259;
        result[3] += (float)0.7654320987654321;
        result[4] += (float)0;
        result[5] += (float)0.0024005486968449933;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.12956521739130436;
        result[1] += (float)0.0017391304347826088;
        result[2] += (float)0;
        result[3] += (float)0.8678260869565217;
        result[4] += (float)0;
        result[5] += (float)0.0008695652173913044;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.9798066965826718;
        result[1] += (float)0.0014238867794269937;
        result[2] += (float)0.0021574042112530206;
        result[3] += (float)0.016353123921297896;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002588885053503625;
      } else {
        result[0] += (float)0.1580872011251758;
        result[1] += (float)0;
        result[2] += (float)0.002531645569620253;
        result[3] += (float)0.8393811533052039;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9506660088801184;
        result[1] += (float)0;
        result[2] += (float)0.001973359644795264;
        result[3] += (float)0.04736063147508633;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9956730769230769;
        result[1] += (float)0;
        result[2] += (float)0.0033653846153846156;
        result[3] += (float)0.0006009615384615385;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003605769230769231;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += (float)0.0037220843672456576;
        result[1] += (float)0.013647642679900745;
        result[2] += (float)0;
        result[3] += (float)0.08684863523573201;
        result[4] += (float)0.8957816377171216;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.38711280437303297;
        result[1] += (float)0.0018220970680801723;
        result[2] += (float)0.00612887195626967;
        result[3] += (float)0.4361437800231903;
        result[4] += (float)0.16879244657942688;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += (float)0.778;
        result[1] += (float)0;
        result[2] += (float)0.0036;
        result[3] += (float)0.2168;
        result[4] += (float)0.0008;
        result[5] += (float)0.0008;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.984102522507908;
        result[1] += (float)0.0008110957904128475;
        result[2] += (float)0.0005677670532889933;
        result[3] += (float)0.014113066753183547;
        result[4] += (float)0.00012166436856192713;
        result[5] += (float)0.00020277394760321189;
        result[6] += (float)8.110957904128477e-05;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)100.5) ) ) {
        result[0] += (float)0.15100316789862725;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8489968321013728;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.07044198895027624;
        result[1] += (float)0;
        result[2] += (float)0.03729281767955801;
        result[3] += (float)0;
        result[4] += (float)0.8908839779005525;
        result[5] += (float)0.0013812154696132596;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)1;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9949859606899316;
        result[1] += (float)0;
        result[2] += (float)0.0036101083032490967;
        result[3] += (float)0.0006016847172081828;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0008022462896109103;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5;
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
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.00032071840923669016;
        result[1] += (float)0.0028864656831302116;
        result[2] += (float)0.009621552277100705;
        result[3] += (float)0.9849262347658756;
        result[4] += (float)0;
        result[5] += (float)0.0022450288646568314;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.9992319115162067;
        result[1] += (float)0.00010241179783911107;
        result[2] += (float)0.0005632648881151108;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010241179783911107;
      } else {
        result[0] += (float)0.8730385164051355;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.12696148359486448;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6839731116221476;
        result[1] += (float)0.0024765611179904477;
        result[2] += (float)0.007429683353971343;
        result[3] += (float)0.30541305501503624;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0007075888908544136;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += (float)0.986322188449848;
        result[1] += (float)0;
        result[2] += (float)0.013677811550151976;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.07136524822695035;
        result[1] += (float)0.010195035460992909;
        result[2] += (float)0;
        result[3] += (float)0.7960992907801419;
        result[4] += (float)0.12234042553191489;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
        result[0] += (float)0.08898015058179329;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.026694045174537988;
        result[4] += (float)0.8843258042436687;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.05759162303664921;
        result[3] += (float)0.9424083769633508;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9992372816718785;
        result[1] += (float)0;
        result[2] += (float)0.000648310578903211;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00011440774921821372;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.36397186022373434;
        result[1] += (float)0.001845231230538577;
        result[2] += (float)0.006227655403067698;
        result[3] += (float)0.529812017068389;
        result[4] += (float)0.0968746396032753;
        result[5] += (float)0.0010379425671779496;
        result[6] += (float)0.00023065390381732213;
      } else {
        result[0] += (float)0.9692917285785042;
        result[1] += (float)0;
        result[2] += (float)0.005448241703813769;
        result[3] += (float)0.02451708766716196;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0007429420505200594;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9988551491032002;
        result[1] += (float)0;
        result[2] += (float)0.0009813007686856022;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00016355012811426702;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.014811031664964251;
        result[1] += (float)0.005958461014640791;
        result[2] += (float)0.0073203949608444;
        result[3] += (float)0.6734763363976848;
        result[4] += (float)0.2974123255022132;
        result[5] += (float)0.001021450459652707;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.5983397190293742;
        result[1] += (float)0.00031928480204342275;
        result[2] += (float)0.0023946360153256703;
        result[3] += (float)0.398786717752235;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00015964240102171138;
      } else {
        result[0] += (float)0.9632268444035854;
        result[1] += (float)0;
        result[2] += (float)0.00850379223167088;
        result[3] += (float)0.0266605378074006;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0016088255573431394;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += (float)0.9746646795827124;
        result[1] += (float)0;
        result[2] += (float)0.02533532041728763;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.06436567164179105;
        result[1] += (float)0.00792910447761194;
        result[2] += (float)0;
        result[3] += (float)0.8134328358208955;
        result[4] += (float)0.1142723880597015;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.03260869565217391;
        result[1] += (float)0;
        result[2] += (float)0.005434782608695652;
        result[3] += (float)0.14371980676328502;
        result[4] += (float)0.8182367149758454;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += (float)0.6850817297744672;
        result[1] += (float)0;
        result[2] += (float)0.007241878750258638;
        result[3] += (float)0.27519139250982827;
        result[4] += (float)0.031036623215394164;
        result[5] += (float)0.0006207324643078833;
        result[6] += (float)0.0008276432857438444;
      } else {
        result[0] += (float)0.983874878758487;
        result[1] += (float)0.000646621403168445;
        result[2] += (float)0.0004041383769802781;
        result[3] += (float)0.014468153895893955;
        result[4] += (float)0.0002828968638861947;
        result[5] += (float)0.00020206918849013906;
        result[6] += (float)0.00012124151309408343;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.4459560193812896;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5540439806187104;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8056246888999502;
        result[1] += (float)0;
        result[2] += (float)0.01368840219014435;
        result[3] += (float)0;
        result[4] += (float)0.17869586859133899;
        result[5] += (float)0.00024888003982080636;
        result[6] += (float)0.0017421602787456446;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += (float)0.0008003201280512205;
        result[1] += (float)0;
        result[2] += (float)0.0028011204481792717;
        result[3] += (float)0.9667867146858744;
        result[4] += (float)0.026010404161664665;
        result[5] += (float)0.003601440576230492;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.20949074074074073;
        result[1] += (float)0;
        result[2] += (float)0.005787037037037037;
        result[3] += (float)0;
        result[4] += (float)0.7847222222222222;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.16532258064516128;
        result[4] += (float)0.8346774193548387;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.01463963963963964;
        result[2] += (float)0;
        result[3] += (float)0.0022522522522522522;
        result[4] += (float)0.9831081081081081;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += (float)0.9276139410187667;
        result[1] += (float)0.03485254691689008;
        result[2] += (float)0;
        result[3] += (float)0.03753351206434316;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.10319410319410319;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8968058968058968;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9994214079074253;
        result[1] += (float)0;
        result[2] += (float)0.0005014464802314369;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.714561234329797e-05;
      } else {
        result[0] += (float)0.6849708389412291;
        result[1] += (float)0.00107671601615074;
        result[2] += (float)0.0061911170928667545;
        result[3] += (float)0.30641543292956475;
        result[4] += (float)0;
        result[5] += (float)0.00035890533871691337;
        result[6] += (float)0.0009869896814715116;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)86.5) ) ) {
        result[0] += (float)0.5201525054466232;
        result[1] += (float)0;
        result[2] += (float)0.01525054466230937;
        result[3] += (float)0.44934640522875824;
        result[4] += (float)0.01525054466230937;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.18396946564885497;
        result[1] += (float)0.0053435114503816794;
        result[2] += (float)0.0030534351145038168;
        result[3] += (float)0.8076335877862595;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0008110300081103001;
        result[1] += (float)0.0056772100567721;
        result[2] += (float)0;
        result[3] += (float)0.25060827250608275;
        result[4] += (float)0.7429034874290349;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += (float)0.7186311787072244;
        result[1] += (float)0;
        result[2] += (float)0.006933571907850593;
        result[3] += (float)0.26504137776783715;
        result[4] += (float)0.008051889957503914;
        result[5] += (float)0.00022366360993066427;
        result[6] += (float)0.0011183180496533215;
      } else {
        result[0] += (float)0.9834459869672563;
        result[1] += (float)0.00048569231391913225;
        result[2] += (float)0.0004452179544258712;
        result[3] += (float)0.01509693609098636;
        result[4] += (float)0.00024284615695956612;
        result[5] += (float)0.00020237179746630509;
        result[6] += (float)8.094871898652204e-05;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.6388140161725068;
        result[1] += (float)0;
        result[2] += (float)0.006914332591116841;
        result[3] += (float)0.3523965779913278;
        result[4] += (float)0.0012891128559709363;
        result[5] += (float)0.00011719207781553967;
        result[6] += (float)0.0004687683112621587;
      } else {
        result[0] += (float)0.002770083102493075;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.997229916897507;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9990999099909991;
        result[1] += (float)0;
        result[2] += (float)0.00072007200720072;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00018001800180018;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.0022988505747126436;
        result[1] += (float)0.0034482758620689655;
        result[2] += (float)0;
        result[3] += (float)0.2057471264367816;
        result[4] += (float)0.7885057471264367;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5770060236483974;
        result[1] += (float)0.0007436602959767978;
        result[2] += (float)0.006618576634193501;
        result[3] += (float)0.39235517215735854;
        result[4] += (float)0.021863612701717855;
        result[5] += (float)0.0008180263255744776;
        result[6] += (float)0.0005949282367814382;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.14605978260869565;
        result[1] += (float)0.01154891304347826;
        result[2] += (float)0;
        result[3] += (float)0.6766304347826086;
        result[4] += (float)0.16576086956521738;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.05875227135069655;
        result[1] += (float)0;
        result[2] += (float)0.004845548152634767;
        result[3] += (float)0.1623258631132647;
        result[4] += (float)0.774076317383404;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += (float)0.23609534619750286;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7570942111237231;
        result[4] += (float)0.002270147559591374;
        result[5] += (float)0.004540295119182748;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9947317492742717;
        result[1] += (float)0.000752607246532631;
        result[2] += (float)0.001182668530265563;
        result[3] += (float)0.0029387521055083687;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00039422284342185434;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.17377612367592327;
        result[1] += (float)0.006870884626395649;
        result[2] += (float)0.013455482393358144;
        result[3] += (float)0.8056112224448898;
        result[4] += (float)0;
        result[5] += (float)0.000286286859433152;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)0;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.0071794871794871795;
        result[3] += (float)0.8153846153846154;
        result[4] += (float)0.17692307692307693;
        result[5] += (float)0.0005128205128205128;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.989800649049606;
        result[1] += (float)0;
        result[2] += (float)0.007881316643486324;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0023180343069077423;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9917627677100495;
        result[1] += (float)0;
        result[2] += (float)0.007413509060955519;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0008237232289950577;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9996066476546367;
        result[1] += (float)0;
        result[2] += (float)0.00039335234536335925;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += (float)0.6086683909397288;
        result[1] += (float)0.0013323928207539775;
        result[2] += (float)0.005094443138176973;
        result[3] += (float)0.3327847009953758;
        result[4] += (float)0.05078767928521044;
        result[5] += (float)0.0003918802413982287;
        result[6] += (float)0.0009405125793557489;
      } else {
        result[0] += (float)0.008430609597924773;
        result[1] += (float)0;
        result[2] += (float)0.014267185473411154;
        result[3] += (float)0.8028534370946823;
        result[4] += (float)0.17444876783398183;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += (float)0.19746121297602257;
        result[1] += (float)0.011988716502115656;
        result[2] += (float)0.0028208744710860366;
        result[3] += (float)0.7877291960507757;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0017921146953405018;
        result[1] += (float)0.005376344086021506;
        result[2] += (float)0;
        result[3] += (float)0.09438470728793309;
        result[4] += (float)0.8984468339307049;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9989417989417989;
        result[5] += (float)0.0010582010582010583;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1423728813559322;
        result[1] += (float)0;
        result[2] += (float)0.010169491525423728;
        result[3] += (float)0.8451977401129943;
        result[4] += (float)0;
        result[5] += (float)0.0022598870056497176;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9945482866043615;
        result[1] += (float)0.00029205607476635517;
        result[2] += (float)0.00038940809968847356;
        result[3] += (float)0.004672897196261683;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)9.735202492211839e-05;
      } else {
        result[0] += (float)0.8031142294436239;
        result[1] += (float)0.0007385524372230429;
        result[2] += (float)0.0048005908419497785;
        result[3] += (float)0.1908542589857213;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0004923682914820286;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1781767955801105;
        result[1] += (float)0.008287292817679558;
        result[2] += (float)0.008977900552486187;
        result[3] += (float)0.8045580110497238;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
        result[0] += (float)0.00847457627118644;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9915254237288136;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0034129692832764505;
        result[1] += (float)0.012514220705346985;
        result[2] += (float)0;
        result[3] += (float)0.0022753128555176336;
        result[4] += (float)0.981797497155859;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.009218825812712276;
        result[2] += (float)0.006792819019893256;
        result[3] += (float)0.868995633187773;
        result[4] += (float)0.11499272197962154;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9963054187192119;
        result[1] += (float)0.003694581280788177;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.02654320987654321;
        result[1] += (float)0;
        result[2] += (float)0.005555555555555556;
        result[3] += (float)0.145679012345679;
        result[4] += (float)0.8222222222222222;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.9843594009983362;
        result[1] += (float)9.507962918944618e-05;
        result[2] += (float)0.000998336106489185;
        result[3] += (float)0.014452103636795818;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)9.507962918944618e-05;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
        result[0] += (float)0.6996994795866012;
        result[1] += (float)0.001172762588873415;
        result[2] += (float)0.0027853111485743607;
        result[3] += (float)0.29568276771970975;
        result[4] += (float)0.00014659532360917688;
        result[5] += (float)0;
        result[6] += (float)0.000513083632632119;
      } else {
        result[0] += (float)0.8376550169109357;
        result[1] += (float)0;
        result[2] += (float)0.010710259301014656;
        result[3] += (float)0.10625704622322435;
        result[4] += (float)0.04340473506200677;
        result[5] += (float)0.0005636978579481398;
        result[6] += (float)0.0014092446448703494;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9299270072992701;
        result[4] += (float)0.06948905109489052;
        result[5] += (float)0.0005839416058394162;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0035056967572304996;
        result[2] += (float)0.013584574934268186;
        result[3] += (float)0;
        result[4] += (float)0.9807186678352322;
        result[5] += (float)0.0021910604732690623;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += (float)0.9942946058091287;
        result[1] += (float)0;
        result[2] += (float)0.00466804979253112;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001037344398340249;
      } else {
        result[0] += (float)0.9998305802626006;
        result[1] += (float)0;
        result[2] += (float)0.00016941973739940702;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9126821493624773;
        result[1] += (float)0.0018214936247723133;
        result[2] += (float)0.006375227686703097;
        result[3] += (float)0.07809653916211293;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0010245901639344263;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0007220216606498195;
        result[2] += (float)0.006498194945848376;
        result[3] += (float)0.9927797833935018;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.009787928221859706;
        result[1] += (float)0.0032626427406199023;
        result[2] += (float)0.005981511691136488;
        result[3] += (float)0.9798803697661773;
        result[4] += (float)0.001087547580206634;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9887179487179487;
        result[1] += (float)0;
        result[2] += (float)0.011282051282051283;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.3930131004366812;
        result[4] += (float)0.6069868995633187;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.000693000693000693;
        result[1] += (float)0.006237006237006237;
        result[2] += (float)0;
        result[3] += (float)0.05544005544005544;
        result[4] += (float)0.9376299376299376;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += (float)0.9995787054768288;
        result[1] += (float)0;
        result[2] += (float)0.00034469551895825355;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.659900421294524e-05;
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
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += (float)0.6448863636363636;
        result[1] += (float)0.001282991202346041;
        result[2] += (float)0.004398826979472141;
        result[3] += (float)0.32001466275659823;
        result[4] += (float)0.028225806451612902;
        result[5] += (float)0.0002749266862170088;
        result[6] += (float)0.0009164222873900294;
      } else {
        result[0] += (float)0.017045454545454544;
        result[1] += (float)0;
        result[2] += (float)0.010795454545454546;
        result[3] += (float)0.6670454545454545;
        result[4] += (float)0.30113636363636365;
        result[5] += (float)0.003977272727272727;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.19129646418857663;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.18857660924750683;
        result[4] += (float)0.6183136899365368;
        result[5] += (float)0.0018132366273798733;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.004612546125461255;
        result[3] += (float)0.7321648216482165;
        result[4] += (float)0.2613776137761378;
        result[5] += (float)0.0018450184501845018;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.2564102564102564;
        result[4] += (float)0.7435897435897436;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.016666666666666666;
        result[2] += (float)0;
        result[3] += (float)0.002380952380952381;
        result[4] += (float)0.9809523809523809;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.9988064451959419;
        result[1] += (float)0.00014919435050726078;
        result[2] += (float)0.0004475830515217824;
        result[3] += (float)0.0004475830515217824;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00014919435050726078;
      } else {
        result[0] += (float)0.8573596358118362;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.1426403641881639;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.505795836968715;
        result[1] += (float)0.00311604138102954;
        result[2] += (float)0.0049856662096472645;
        result[3] += (float)0.4851053221986788;
        result[4] += (float)0;
        result[5] += (float)0.0003739249657235448;
        result[6] += (float)0.0006232082762059081;
      } else {
        result[0] += (float)0.9878640776699029;
        result[1] += (float)0;
        result[2] += (float)0.0024271844660194173;
        result[3] += (float)0.009497678345293373;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00021105951878429716;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.005405405405405406;
        result[2] += (float)0.00472972972972973;
        result[3] += (float)0.6011261261261261;
        result[4] += (float)0.38873873873873876;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9886649874055415;
        result[1] += (float)0.0016792611251049538;
        result[2] += (float)0.009655751469353484;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += (float)0.20680147058823528;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.7830882352941176;
        result[4] += (float)0.004595588235294118;
        result[5] += (float)0.0055147058823529415;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9957323578722755;
        result[1] += (float)0.0004191434232586496;
        result[2] += (float)0.0006858710562414266;
        result[3] += (float)0.0030483158055174516;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00011431184270690443;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.07240099009900991;
        result[1] += (float)0;
        result[2] += (float)0.017945544554455448;
        result[3] += (float)0.7988861386138615;
        result[4] += (float)0.11014851485148516;
        result[5] += (float)0.0006188118811881189;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.1876138433515483;
        result[1] += (float)0;
        result[2] += (float)0.0014571948998178509;
        result[3] += (float)0.6404371584699454;
        result[4] += (float)0.17049180327868854;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)311.5) ) ) {
        result[0] += (float)0.9939795304033715;
        result[1] += (float)0;
        result[2] += (float)0.004013646397752358;
        result[3] += (float)0.0008027292795504716;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0012040939193257074;
      } else {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0.5;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += (float)0.9946808510638299;
        result[1] += (float)0;
        result[2] += (float)0.0043520309477756295;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009671179883945843;
      } else {
        result[0] += (float)0.9997514292816306;
        result[1] += (float)0;
        result[2] += (float)0.00024857071836937607;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.017036654620547237;
        result[1] += (float)0.007743933918430563;
        result[2] += (float)0.003355704697986577;
        result[3] += (float)0.9093959731543624;
        result[4] += (float)0.06220960247805885;
        result[5] += (float)0.0002581311306143521;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.016624503071919046;
        result[3] += (float)0.19877123238164077;
        result[4] += (float)0.7835200578243585;
        result[5] += (float)0.0010842067220816769;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.9808719413737423;
        result[1] += (float)0;
        result[2] += (float)0.0063346168177866105;
        result[3] += (float)0.011427151906595453;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0013662899018755433;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.0007689350249903883;
        result[3] += (float)0.9992310649750096;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.999337241906704;
        result[1] += (float)0;
        result[2] += (float)0.0005607953097119551;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010196278358399184;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += (float)0.011788175553137468;
        result[1] += (float)0.004533913674283642;
        result[2] += (float)0.005984766050054407;
        result[3] += (float)0.6557852738483859;
        result[4] += (float)0.3208197315923105;
        result[5] += (float)0.001088139281828074;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9815179891572203;
        result[1] += (float)0;
        result[2] += (float)0.005174963035978314;
        result[3] += (float)0.012690980778708724;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006160670280926564;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0035419126328217238;
        result[2] += (float)0;
        result[3] += (float)0.24203069657615112;
        result[4] += (float)0.7544273907910272;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.010319917440660475;
        result[3] += (float)0.9852081183350533;
        result[4] += (float)0.002407980736154111;
        result[5] += (float)0.0020639834881320948;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.004609929078014184;
        result[1] += (float)0.005319148936170213;
        result[2] += (float)0.0035460992907801418;
        result[3] += (float)0.7017730496453901;
        result[4] += (float)0.2847517730496454;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.992849846782431;
        result[1] += (float)0;
        result[2] += (float)0.007150153217568948;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        result[0] += (float)0.015267175572519083;
        result[1] += (float)0.03435114503816794;
        result[2] += (float)0;
        result[3] += (float)0.2748091603053435;
        result[4] += (float)0.6755725190839694;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.004092769440654843;
        result[2] += (float)0;
        result[3] += (float)0.06821282401091405;
        result[4] += (float)0.927694406548431;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.8346953070277844;
        result[1] += (float)0;
        result[2] += (float)0.00412483461747996;
        result[3] += (float)0.15830025682932528;
        result[4] += (float)0.0026461203206475216;
        result[5] += (float)0.00015565413650867776;
        result[6] += (float)7.782706825433888e-05;
      } else {
        result[0] += (float)0.8898217412064301;
        result[1] += (float)0.0004376890020690753;
        result[2] += (float)0.001750756008276301;
        result[3] += (float)0.10253859621200064;
        result[4] += (float)0.005013528569154863;
        result[5] += (float)0.0001591596371160274;
        result[6] += (float)0.0002785293649530479;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
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
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)14) ) ) {
        result[0] += (float)0.25;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.75;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0008244023083264633;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9987633965375103;
        result[5] += (float)0.00041220115416323167;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0031416902293433867;
        result[2] += (float)0.007225887527489789;
        result[3] += (float)0.9880615771284952;
        result[4] += (float)0;
        result[5] += (float)0.0015708451146716933;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += (float)0.48439821693907875;
        result[1] += (float)0.017830609212481426;
        result[2] += (float)0;
        result[3] += (float)0.49777117384843983;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8821281149671304;
        result[1] += (float)0.0009172909341079345;
        result[2] += (float)0.0022167864240941752;
        result[3] += (float)0.11458492585231617;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00015288182235132243;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9497011952191236;
        result[1] += (float)0;
        result[2] += (float)0.00249003984063745;
        result[3] += (float)0.04780876494023904;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9967497291440953;
        result[1] += (float)0;
        result[2] += (float)0.0022872276393403152;
        result[3] += (float)0.0006019020103527145;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00036114120621162876;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.07293868921775899;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9245947850599014;
        result[4] += (float)0.0007047216349541932;
        result[5] += (float)0.001761804087385483;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.012835472578763127;
        result[3] += (float)0;
        result[4] += (float)0.9865810968494749;
        result[5] += (float)0.0005834305717619603;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9989300100704934;
        result[1] += (float)0;
        result[2] += (float)0.0008811681772406848;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00018882175226586103;
      } else {
        result[0] += (float)0.9998022738507167;
        result[1] += (float)0;
        result[2] += (float)0.0001977261492832427;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)9.5) ) ) {
        result[0] += (float)0.6534620780721301;
        result[1] += (float)0.0025583890401914664;
        result[2] += (float)0.005364364116530494;
        result[3] += (float)0.33778988198398946;
        result[4] += (float)0;
        result[5] += (float)0.00016505735743170752;
        result[6] += (float)0.0006602294297268301;
      } else {
        result[0] += (float)0.9324324324324325;
        result[1] += (float)0;
        result[2] += (float)0.06756756756756757;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.008849557522123894;
        result[1] += (float)0.02654867256637168;
        result[2] += (float)0;
        result[3] += (float)0.22566371681415928;
        result[4] += (float)0.7389380530973452;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.007692307692307693;
        result[2] += (float)0;
        result[3] += (float)0.032692307692307694;
        result[4] += (float)0.9596153846153846;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += (float)0.14985471149854712;
        result[1] += (float)0.004151100041511001;
        result[2] += (float)0;
        result[3] += (float)0.6131174761311747;
        result[4] += (float)0.2328767123287671;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.4049645390070922;
        result[1] += (float)0;
        result[2] += (float)0.018439716312056736;
        result[3] += (float)0.36879432624113473;
        result[4] += (float)0.2078014184397163;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += (float)0.9846153846153847;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.015384615384615385;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0017021276595744676;
        result[1] += (float)0;
        result[2] += (float)0.010638297872340424;
        result[3] += (float)0.6459574468085105;
        result[4] += (float)0.33999999999999997;
        result[5] += (float)0.0017021276595744676;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += (float)0.9612280602742819;
        result[1] += (float)0.001015858682769908;
        result[2] += (float)0.0018059709915909476;
        result[3] += (float)0.03578080027089565;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00016930978046165134;
      } else {
        result[0] += (float)0.8660489529216432;
        result[1] += (float)0;
        result[2] += (float)0.0018210058379304803;
        result[3] += (float)0.13170156927856033;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0004284719618659954;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9830274135876043;
        result[1] += (float)0.00019070321811680572;
        result[2] += (float)0.00100119189511323;
        result[3] += (float)0.015733015494636474;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)4.767580452920143e-05;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)80.5) ) ) {
        result[0] += (float)0.7134958382877526;
        result[1] += (float)0.000356718192627824;
        result[2] += (float)0.0035077288941736027;
        result[3] += (float)0.28097502972651606;
        result[4] += (float)0.0007728894173602853;
        result[5] += (float)0.000356718192627824;
        result[6] += (float)0.000535077288941736;
      } else {
        result[0] += (float)0.6071995764955004;
        result[1] += (float)0;
        result[2] += (float)0.010587612493382744;
        result[3] += (float)0.2493382742191636;
        result[4] += (float)0.13287453679195343;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.022727272727272728;
        result[1] += (float)0.07954545454545454;
        result[2] += (float)0;
        result[3] += (float)0.8977272727272727;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.15151515151515152;
        result[1] += (float)0.007792207792207792;
        result[2] += (float)0;
        result[3] += (float)0.8406926406926407;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.08326105810928014;
        result[1] += (float)0;
        result[2] += (float)0.005203816131830009;
        result[3] += (float)0.23503902862098872;
        result[4] += (float)0.6764960971379012;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        result[0] += (float)0.996186844613918;
        result[1] += (float)0;
        result[2] += (float)0.0038131553860819827;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
        result[0] += (float)0.5311905996198376;
        result[1] += (float)0;
        result[2] += (float)0.00673924313115604;
        result[3] += (float)0.4121306376360809;
        result[4] += (float)0.04872991187143598;
        result[5] += (float)0.0003456022118541559;
        result[6] += (float)0.0008640055296353896;
      } else {
        result[0] += (float)0.1014344262295082;
        result[1] += (float)0.004098360655737705;
        result[2] += (float)0;
        result[3] += (float)0.5461065573770492;
        result[4] += (float)0.3483606557377049;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += (float)0.9992743105950654;
        result[1] += (float)0;
        result[2] += (float)0.0005582226191805293;
        result[3] += (float)0;
        result[4] += (float)5.582226191805293e-05;
        result[5] += (float)0;
        result[6] += (float)0.00011164452383610586;
      } else {
        result[0] += (float)0.6629090339752624;
        result[1] += (float)0.0020353843745107253;
        result[2] += (float)0.001878816345702208;
        result[3] += (float)0.3134491936746517;
        result[4] += (float)0.01816189134178801;
        result[5] += (float)0.0006262721152340693;
        result[6] += (float)0.000939408172851104;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0.0005841121495327102;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9994158878504673;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.2782475019215988;
        result[1] += (float)0.006917755572636434;
        result[2] += (float)0.013835511145272868;
        result[3] += (float)0.7002305918524213;
        result[4] += (float)0;
        result[5] += (float)0.000768639508070715;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.003926701570680628;
        result[1] += (float)0.010471204188481676;
        result[2] += (float)0;
        result[3] += (float)0.08376963350785341;
        result[4] += (float)0.9018324607329843;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)10.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3070525615435795;
        result[1] += (float)0.003992015968063872;
        result[2] += (float)0.007651363938789089;
        result[3] += (float)0.6813040585495675;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += (float)0.0028587764436821044;
        result[1] += (float)0;
        result[2] += (float)0.0068610634648370505;
        result[3] += (float)0.9039451114922814;
        result[4] += (float)0.08004574042309892;
        result[5] += (float)0.00628930817610063;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.20982142857142858;
        result[1] += (float)0;
        result[2] += (float)0.008928571428571428;
        result[3] += (float)0;
        result[4] += (float)0.78125;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += (float)0.9937209639953544;
        result[1] += (float)0.0006170150987224159;
        result[2] += (float)0.0014155052264808365;
        result[3] += (float)0.003992450638792103;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002540650406504066;
      } else {
        result[0] += (float)0.6388340494716062;
        result[1] += (float)0;
        result[2] += (float)0.004180699105794914;
        result[3] += (float)0.35594007664615035;
        result[4] += (float)0;
        result[5] += (float)0.000580652653582627;
        result[6] += (float)0.00046452212286610155;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += (float)0.0015432098765432098;
        result[1] += (float)0.0030864197530864196;
        result[2] += (float)0;
        result[3] += (float)0.7515432098765432;
        result[4] += (float)0.24279835390946503;
        result[5] += (float)0.00102880658436214;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6772388059701493;
        result[1] += (float)0;
        result[2] += (float)0.024253731343283583;
        result[3] += (float)0;
        result[4] += (float)0.29850746268656714;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.8510424796521351;
        result[1] += (float)0;
        result[2] += (float)0.0026758835990634408;
        result[3] += (float)0.14617014159884045;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001114951499609767;
      } else {
        result[0] += (float)0.9898702120924343;
        result[1] += (float)0;
        result[2] += (float)0.004431782209559987;
        result[3] += (float)0.00411522633744856;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0015827793605571383;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += (float)0.9780781386591352;
        result[1] += (float)0.00040346984062941297;
        result[2] += (float)0.0006724497343823549;
        result[3] += (float)0.012507565059511802;
        result[4] += (float)0.008136641786026494;
        result[5] += (float)0;
        result[6] += (float)0.00020173492031470649;
      } else {
        result[0] += (float)0.8098687664041995;
        result[1] += (float)0.0013648293963254593;
        result[2] += (float)0.0026246719160104987;
        result[3] += (float)0.18561679790026248;
        result[4] += (float)0;
        result[5] += (float)0.00010498687664041995;
        result[6] += (float)0.0004199475065616798;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.22502870264064295;
        result[1] += (float)0.006505931879066207;
        result[2] += (float)0.003827018752391887;
        result[3] += (float)0.687715269804822;
        result[4] += (float)0.07615767317259854;
        result[5] += (float)0.0007654037504783774;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.07328730748805098;
        result[1] += (float)0;
        result[2] += (float)0.01486988847583643;
        result[3] += (float)0.11364843335103558;
        result[4] += (float)0.7971322357939459;
        result[5] += (float)0.0010621348911311736;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += (float)0.9947343226424127;
        result[1] += (float)0;
        result[2] += (float)0.00430828147438966;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009573958831977022;
      } else {
        result[0] += (float)0.9998336314103897;
        result[1] += (float)0;
        result[2] += (float)0.00016636858961028157;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += (float)0.018724921979491754;
        result[1] += (float)0.0073562193490860454;
        result[2] += (float)0.012929112795363353;
        result[3] += (float)0.8176549264378065;
        result[4] += (float)0.1413285777975925;
        result[5] += (float)0.0020062416406598305;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7376834626530804;
        result[1] += (float)0.00018696830887164628;
        result[2] += (float)0.0043002711040478645;
        result[3] += (float)0.2562400673085912;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0015892306254089933;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.4389920424403183;
        result[4] += (float)0.5610079575596817;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.002099370188943317;
        result[1] += (float)0.006298110566829951;
        result[2] += (float)0;
        result[3] += (float)0.05878236529041288;
        result[4] += (float)0.9328201539538139;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.05802562170308968;
        result[1] += (float)0.0075357950263752835;
        result[2] += (float)0.009042954031650341;
        result[3] += (float)0.9231348907309722;
        result[4] += (float)0;
        result[5] += (float)0.0022607385079125852;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += (float)0.5148342059336823;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.4851657940663176;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.88236268743269;
        result[1] += (float)0;
        result[2] += (float)0.0024024521580647837;
        result[3] += (float)0.11498633087565241;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0002485295335929087;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)104.5) ) ) {
        result[0] += (float)0.28818776452481726;
        result[1] += (float)0.001923816852635629;
        result[2] += (float)0.013081954597922277;
        result[3] += (float)0.4855713736052328;
        result[4] += (float)0.21123509041939206;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.003968253968253968;
        result[2] += (float)0;
        result[3] += (float)0.09523809523809523;
        result[4] += (float)0.9007936507936508;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += (float)0.11111111111111112;
        result[1] += (float)0;
        result[2] += (float)0.00598802395209581;
        result[3] += (float)0.49900199600798406;
        result[4] += (float)0.3812375249500999;
        result[5] += (float)0.0026613439787092487;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9263083392314417;
        result[1] += (float)0.0004996044797868354;
        result[2] += (float)0.0014988134393605062;
        result[3] += (float)0.07131853948957076;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00037470335984012655;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += (float)0.7885146327995582;
        result[1] += (float)0;
        result[2] += (float)0.004969630038652678;
        result[3] += (float)0.2004417448923247;
        result[4] += (float)0.0011043622308117063;
        result[5] += (float)0.0011043622308117063;
        result[6] += (float)0.003865267807840972;
      } else {
        result[0] += (float)0.9842484792329694;
        result[1] += (float)0.00040285219353019375;
        result[2] += (float)0.00012085565805905813;
        result[3] += (float)0.014784675502558112;
        result[4] += (float)0.0001611408774120775;
        result[5] += (float)0.00020142609676509688;
        result[6] += (float)8.057043870603875e-05;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += (float)0.4357360793287567;
        result[1] += (float)0.002097635392829901;
        result[2] += (float)0.002669717772692601;
        result[3] += (float)0.517162471395881;
        result[4] += (float)0.04233409610983982;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.23388235294117646;
        result[1] += (float)0;
        result[2] += (float)0.015529411764705882;
        result[3] += (float)0.05411764705882353;
        result[4] += (float)0.6964705882352941;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += (float)0.3220696937697994;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6779303062302007;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.7858942065491183;
        result[1] += (float)0;
        result[2] += (float)0.02686817800167926;
        result[3] += (float)0;
        result[4] += (float)0.18303946263643997;
        result[5] += (float)0.0016792611251049538;
        result[6] += (float)0.0025188916876574307;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += (float)0.6798718813216453;
        result[1] += (float)0;
        result[2] += (float)0.0011800404585300068;
        result[3] += (float)0.3184423465947404;
        result[4] += (float)0.0005057316250842886;
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
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += (float)0.2816901408450704;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.14498757249378622;
        result[4] += (float)0.5724937862468931;
        result[5] += (float)0.0008285004142502069;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.008631851532153647;
        result[3] += (float)0.8657747086750108;
        result[4] += (float)0.12300388433318947;
        result[5] += (float)0.002589555459646094;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.8927865612648221;
        result[1] += (float)0;
        result[2] += (float)0.0024703557312252965;
        result[3] += (float)0.10449604743083003;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00024703557312252963;
      } else {
        result[0] += (float)0.9220952304026494;
        result[1] += (float)0.00048463309236299024;
        result[2] += (float)0.0022616210976939546;
        result[3] += (float)0.07491619886111224;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00024231654618149512;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += (float)0.017467248908296942;
        result[1] += (float)0.034934497816593885;
        result[2] += (float)0;
        result[3] += (float)0.17903930131004367;
        result[4] += (float)0.7685589519650655;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0018315018315018315;
        result[2] += (float)0;
        result[3] += (float)0.04212454212454213;
        result[4] += (float)0.9560439560439561;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += (float)0.19686648501362397;
        result[1] += (float)0.01226158038147139;
        result[2] += (float)0.006130790190735695;
        result[3] += (float)0.784741144414169;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.13285024154589373;
        result[4] += (float)0.8671497584541062;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += (float)0.0028328611898017;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9957507082152974;
        result[5] += (float)0.00141643059490085;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9848608249892206;
        result[1] += (float)0.00014372634503904565;
        result[2] += (float)0.0009102668519139558;
        result[3] += (float)0.013989364250467111;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)9.581756335936378e-05;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += (float)0.7846135029354208;
        result[1] += (float)0.0009784735812133072;
        result[2] += (float)0.0036081213307240702;
        result[3] += (float)0.2100660469667319;
        result[4] += (float)0;
        result[5] += (float)0.0002446183953033268;
        result[6] += (float)0.0004892367906066536;
      } else {
        result[0] += (float)0.1621512333198544;
        result[1] += (float)0;
        result[2] += (float)0.012131014961585116;
        result[3] += (float)0.7177517185604528;
        result[4] += (float)0.1071572988273352;
        result[5] += (float)0.000808734330772341;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.18803418803418803;
        result[1] += (float)0.011834319526627219;
        result[2] += (float)0.003287310979618672;
        result[3] += (float)0.796844181459566;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.04424778761061947;
        result[1] += (float)0.061946902654867256;
        result[2] += (float)0;
        result[3] += (float)0.8938053097345132;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += (float)0.9796806966618288;
        result[1] += (float)0;
        result[2] += (float)0.020319303338171262;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.06630086877000457;
        result[1] += (float)0.012802926383173296;
        result[2] += (float)0;
        result[3] += (float)0.8120713305898491;
        result[4] += (float)0.10882487425697303;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += (float)0.415625;
        result[1] += (float)0;
        result[2] += (float)0.01875;
        result[3] += (float)0.565625;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.02803083391730904;
        result[4] += (float)0.9719691660826909;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        result[0] += (float)0.994535257178467;
        result[1] += (float)9.587268107952639e-05;
        result[2] += (float)0.0005272997459373951;
        result[3] += (float)0.00479363405397632;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)4.7936340539763194e-05;
      } else {
        result[0] += (float)0.0033333333333333335;
        result[1] += (float)0.0077777777777777776;
        result[2] += (float)0.01;
        result[3] += (float)0.25333333333333335;
        result[4] += (float)0.7255555555555555;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += (float)0.42158254808312895;
        result[1] += (float)0.0015489867045307862;
        result[2] += (float)0.006454111268878276;
        result[3] += (float)0.5461468955724796;
        result[4] += (float)0.021814896088808572;
        result[5] += (float)0.0016780689299083517;
        result[6] += (float)0.0007744933522653931;
      } else {
        result[0] += (float)0.9865513928914506;
        result[1] += (float)0;
        result[2] += (float)0.0019212295869356388;
        result[3] += (float)0.011313907567509872;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00021346995410395986;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)224.5) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.01844532279314888;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9815546772068511;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5;
        result[4] += (float)0.5;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += (float)0.05675029868578255;
        result[1] += (float)0;
        result[2] += (float)0.008363201911589008;
        result[3] += (float)0.730884109916368;
        result[4] += (float)0.2031063321385902;
        result[5] += (float)0.0008960573476702509;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.14085739282589677;
        result[4] += (float)0.8591426071741033;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += (float)0.9961704164672092;
        result[1] += (float)0;
        result[2] += (float)0.0014360938247965534;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0023934897079942556;
      } else {
        result[0] += (float)0.9996241700421765;
        result[1] += (float)0;
        result[2] += (float)0.000375829957823527;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += (float)0.8524451044871115;
        result[1] += (float)0.00169725257239843;
        result[2] += (float)0.006152540574944309;
        result[3] += (float)0.13928078922244616;
        result[4] += (float)0;
        result[5] += (float)0.00021215657154980376;
        result[6] += (float)0.00021215657154980376;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.001436265709156194;
        result[2] += (float)0.002872531418312388;
        result[3] += (float)0.9956912028725314;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  result[6] /= 50;
  
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_0/test_data.csv", "r");
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
        
    }
    

    return 0;
}
