
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
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992381242619329;
        result[1] += 0;
        result[2] += 0.000609500590453697;
        result[3] += 0;
        result[4] += 3.8093786903356064e-05;
        result[5] += 0;
        result[6] += 0.00011428136071006819;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.6826617826617827;
        result[1] += 0.0015873015873015873;
        result[2] += 0.005128205128205128;
        result[3] += 0.28144078144078144;
        result[4] += 0.028083028083028084;
        result[5] += 0.0003663003663003663;
        result[6] += 0.0007326007326007326;
      } else {
        result[0] += 0.36301597869507324;
        result[1] += 0;
        result[2] += 0.010652463382157125;
        result[3] += 0.5078229027962716;
        result[4] += 0.11701065246338216;
        result[5] += 0.0004993342210386152;
        result[6] += 0.0009986684420772304;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.0030911901081916537;
        result[1] += 0.012364760432766615;
        result[2] += 0;
        result[3] += 0.04791344667697063;
        result[4] += 0.9366306027820711;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2857142857142857;
        result[4] += 0.7142857142857143;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.20824295010845986;
        result[1] += 0.0072306579898770785;
        result[2] += 0.0072306579898770785;
        result[3] += 0.777295733911786;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.09392898052691867;
        result[4] += 0.9060710194730813;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9768339768339769;
        result[1] += 0;
        result[2] += 0.021879021879021878;
        result[3] += 0.001287001287001287;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08562532433834977;
        result[1] += 0.008303061754021795;
        result[2] += 0.0015568240788790867;
        result[3] += 0.9034769071094966;
        result[4] += 0.0010378827192527244;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3231707317073171;
        result[4] += 0.676829268292683;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0019946808510638296;
        result[1] += 0.007978723404255319;
        result[2] += 0;
        result[3] += 0.05518617021276596;
        result[4] += 0.9348404255319149;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9824352059567563;
        result[1] += 0.0005250346045534819;
        result[2] += 0.0010500692091069638;
        result[3] += 0.01575103813660446;
        result[4] += 0.00014319125578731326;
        result[5] += 0;
        result[6] += 9.546083719154218e-05;
      } else {
        result[0] += 0.7337098934373726;
        result[1] += 0.000757002271006813;
        result[2] += 0.004367320794270075;
        result[3] += 0.25231468002096313;
        result[4] += 0.007511791766144529;
        result[5] += 0.000698771327083212;
        result[6] += 0.000640540383159611;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)248) ) ) {
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
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0;
        result[1] += 0.0005377789728421619;
        result[2] += 0.008066684592632429;
        result[3] += 0.7843506318902931;
        result[4] += 0.205969346598548;
        result[5] += 0.0010755579456843238;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0015723270440251573;
        result[2] += 0;
        result[3] += 0.09643605870020965;
        result[4] += 0.9019916142557652;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.584518167456556;
        result[1] += 0;
        result[2] += 0.001579778830963665;
        result[3] += 0.41390205371248023;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9934723481414325;
        result[1] += 0.0007252946509519493;
        result[2] += 0.002611060743427017;
        result[3] += 0.003155031731640979;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.626473254759746e-05;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4468581687612208;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5531418312387791;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9930972388955583;
        result[1] += 0;
        result[2] += 0.005102040816326531;
        result[3] += 0.0006002400960384154;
        result[4] += 0;
        result[5] += 0.0003001200480192077;
        result[6] += 0.0009003601440576231;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993119266055046;
        result[1] += 0;
        result[2] += 0.0006498470948012232;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.82262996941896e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01740294511378849;
        result[1] += 0.006247211066488175;
        result[2] += 0.012940651494868362;
        result[3] += 0.8032128514056225;
        result[4] += 0.15774207942882643;
        result[5] += 0.0024542614904060687;
        result[6] += 0;
      } else {
        result[0] += 0.7422950819672132;
        result[1] += 0;
        result[2] += 0.0034660421545667447;
        result[3] += 0.25255269320843093;
        result[4] += 0;
        result[5] += 0.0001873536299765808;
        result[6] += 0.0014988290398126464;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.006928406466512702;
        result[1] += 0.023094688221709007;
        result[2] += 0;
        result[3] += 0.9699769053117783;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0009454774661203908;
        result[1] += 0;
        result[2] += 0.004727387330601954;
        result[3] += 0.9700598802395209;
        result[4] += 0.021745981720768987;
        result[5] += 0.0025212732429877086;
        result[6] += 0;
      } else {
        result[0] += 0.5070422535211268;
        result[1] += 0;
        result[2] += 0.007746478873239437;
        result[3] += 0;
        result[4] += 0.4852112676056338;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.31088082901554404;
        result[4] += 0.689119170984456;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.011535688536409516;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9884643114635905;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9999293036408625;
        result[1] += 0;
        result[2] += 7.069635913750442e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992858418139619;
        result[1] += 0;
        result[2] += 0.0006248884127834317;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.926977325477594e-05;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9471279373368147;
        result[1] += 0.004079634464751959;
        result[2] += 0.005385117493472585;
        result[3] += 0.0429177545691906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004895561357702349;
      } else {
        result[0] += 0.4081595316502013;
        result[1] += 0;
        result[2] += 0.008232711306256862;
        result[3] += 0.5823271130625687;
        result[4] += 0;
        result[5] += 0.00018294914013904136;
        result[6] += 0.0010976948408342483;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9974619289340102;
        result[5] += 0.0025380710659898475;
        result[6] += 0;
      } else {
        result[0] += 0.18604047742605084;
        result[1] += 0;
        result[2] += 0.00467047223663726;
        result[3] += 0.8077322262584328;
        result[4] += 0;
        result[5] += 0.0015568240788790867;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0;
        result[1] += 0.005671077504725898;
        result[2] += 0;
        result[3] += 0.10964083175803403;
        result[4] += 0.8846880907372401;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0023677979479084454;
        result[2] += 0;
        result[3] += 0.05209155485398579;
        result[4] += 0.9455406471981057;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)34.5) ) ) {
        result[0] += 0.9983753046303818;
        result[1] += 0;
        result[2] += 0.0016246953696181965;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994990537682289;
        result[1] += 0;
        result[2] += 0.0005009462317711232;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5204557935200439;
        result[1] += 0.0030203185063152112;
        result[2] += 0.006727073036792971;
        result[3] += 0.46938495332235036;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00041186161449752884;
      } else {
        result[0] += 0.9740171712607321;
        result[1] += 0;
        result[2] += 0.004744690465431541;
        result[3] += 0.01920469950293719;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002033438770899232;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.009146341463414634;
        result[1] += 0.036585365853658534;
        result[2] += 0;
        result[3] += 0.2073170731707317;
        result[4] += 0.7469512195121951;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0022222222222222222;
        result[4] += 0.9977777777777778;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.33054240990171097;
        result[1] += 0.005460502366217692;
        result[2] += 0.008736803785948308;
        result[3] += 0.6432471787404441;
        result[4] += 0.012013105205678923;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0017825311942959;
        result[1] += 0;
        result[2] += 0.00980392156862745;
        result[3] += 0.17647058823529413;
        result[4] += 0.8119429590017825;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995042330867211;
        result[1] += 0;
        result[2] += 0.0004957669132789261;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0023148148148148147;
        result[1] += 0.003472222222222222;
        result[2] += 0;
        result[3] += 0.23726851851851852;
        result[4] += 0.7569444444444444;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6029924339029159;
        result[1] += 0.0006800986142990734;
        result[2] += 0.008076171044801496;
        result[3] += 0.3754994474198759;
        result[4] += 0.010881577828785174;
        result[5] += 0.0008501232678738418;
        result[6] += 0.00102014792144861;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0023887727679904455;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9319199761122724;
        result[4] += 0.06509405792773963;
        result[5] += 0.0005971931919976114;
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
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999546485260771;
        result[5] += 0.00045351473922902497;
        result[6] += 0;
      } else {
        result[0] += 0.7073170731707317;
        result[1] += 0.06504065040650407;
        result[2] += 0.1951219512195122;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.032520325203252036;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.9970282317979198;
        result[1] += 0.00015920186796858417;
        result[2] += 0.0006368074718743367;
        result[3] += 0.002175758862237317;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9610859728506788;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03891402714932127;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9576701268742791;
        result[1] += 0.0031141868512110727;
        result[2] += 0.005420991926182238;
        result[3] += 0.03344867358708189;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00034602076124567473;
      } else {
        result[0] += 0.6291950246421028;
        result[1] += 0;
        result[2] += 0.004576390518657592;
        result[3] += 0.3657592114527106;
        result[4] += 0;
        result[5] += 0.0002346866932644919;
        result[6] += 0.0002346866932644919;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.3011844331641286;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.14382402707275804;
        result[4] += 0.5549915397631133;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007740508661997788;
        result[3] += 0.9111684482123111;
        result[4] += 0.07998525617397714;
        result[5] += 0.0011057869517139699;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.1518987341772152;
        result[2] += 0;
        result[3] += 0.8481012658227848;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9977320148779824;
        result[1] += 0;
        result[2] += 0.0019958269073754877;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00027215821464211196;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.49831475239823697;
        result[1] += 0.00311122634171636;
        result[2] += 0.006740990407052113;
        result[3] += 0.49157376199118485;
        result[4] += 0;
        result[5] += 0.00012963443090484831;
        result[6] += 0.00012963443090484831;
      } else {
        result[0] += 0.9654066437571592;
        result[1] += 0;
        result[2] += 0.006185567010309278;
        result[3] += 0.027033218785796106;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013745704467353953;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9942965779467681;
        result[1] += 0;
        result[2] += 0.0038022813688212928;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019011406844106464;
      } else {
        result[0] += 0.9997506130761877;
        result[1] += 0;
        result[2] += 0.00024938692381229477;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.6085308056872037;
        result[1] += 0.0018957345971563982;
        result[2] += 0.003981042654028436;
        result[3] += 0.2909952606635071;
        result[4] += 0.09308056872037915;
        result[5] += 0.0001895734597156398;
        result[6] += 0.0013270142180094786;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.023960535588442567;
        result[3] += 0.8365045806906273;
        result[4] += 0.13883016208597607;
        result[5] += 0.0007047216349541932;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0005730659025787965;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994269340974212;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5547437050359713;
        result[1] += 0.003147482014388489;
        result[2] += 0.006969424460431655;
        result[3] += 0.43424010791366907;
        result[4] += 0;
        result[5] += 0.00033723021582733815;
        result[6] += 0.0005620503597122302;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07290803645401822;
        result[1] += 0.007456503728251864;
        result[2] += 0;
        result[3] += 0.575807787903894;
        result[4] += 0.34382767191383595;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0;
        result[1] += 0.0017513134851138354;
        result[2] += 0;
        result[3] += 0.03502626970227671;
        result[4] += 0.9632224168126094;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.24079207920792078;
        result[1] += 0.002772277227722772;
        result[2] += 0.007128712871287129;
        result[3] += 0.49267326732673267;
        result[4] += 0.25663366336633664;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        result[0] += 0.6701897669949556;
        result[1] += 0;
        result[2] += 0.008407398510689407;
        result[3] += 0.29017535431179436;
        result[4] += 0.03050684602450156;
        result[5] += 0.00024021138601969732;
        result[6] += 0.00048042277203939464;
      } else {
        result[0] += 0.9788937983272842;
        result[1] += 0.0005128609752248698;
        result[2] += 0.0003945084424806691;
        result[3] += 0.019725422124033453;
        result[4] += 0.00035505759823260217;
        result[5] += 0;
        result[6] += 0.00011835253274420073;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.13491509653407766;
        result[1] += 0;
        result[2] += 0.007210979297511047;
        result[3] += 0.6994649918585717;
        result[4] += 0.15747848336822515;
        result[5] += 0.0009304489416143287;
        result[6] += 0;
      } else {
        result[0] += 0.9929217459693276;
        result[1] += 0;
        result[2] += 0.003932363350373574;
        result[3] += 0.0013763271726307512;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0017695635076681085;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.22280225516809357;
        result[1] += 0.0018793067446230948;
        result[2] += 0.0002088118605136772;
        result[3] += 0.7204009187721864;
        result[4] += 0.05387346001252872;
        result[5] += 0.0008352474420547088;
        result[6] += 0;
      } else {
        result[0] += 0.9950962363614074;
        result[1] += 0.001716317273507417;
        result[2] += 0.00300355522863798;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018389113644722325;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)43) ) ) {
        result[0] += 0.998743605851207;
        result[1] += 0;
        result[2] += 0.0008974243919949744;
        result[3] += 0;
        result[4] += 0.0001794848783989949;
        result[5] += 0.0001794848783989949;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.012437810945273632;
        result[3] += 0.05970149253731343;
        result[4] += 0.927860696517413;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.15601900739176347;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8439809926082366;
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
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9803346052245377;
        result[1] += 0;
        result[2] += 0.012034047549163486;
        result[3] += 0.001174053419430584;
        result[4] += 0.003228646903434106;
        result[5] += 0.000587026709715292;
        result[6] += 0.0026416201937188143;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9967845659163987;
        result[5] += 0.003215434083601286;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0050057758952637655;
        result[2] += 0.008471313053523296;
        result[3] += 0.9865229110512129;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        result[0] += 0.9973051409618574;
        result[1] += 0.00041459369817578774;
        result[2] += 0.0010364842454394694;
        result[3] += 0.0012437810945273632;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9922928709055877;
        result[1] += 0;
        result[2] += 0.0005505092210294523;
        result[3] += 0.007064868336544637;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.175153683824204e-05;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.7975645044610563;
        result[1] += 0.0005425608873884737;
        result[2] += 0.0051241861586689185;
        result[3] += 0.19616590306245482;
        result[4] += 0;
        result[5] += 0.00018085362912949123;
        result[6] += 0.0004219918013021462;
      } else {
        result[0] += 0.23879231473010065;
        result[1] += 0.009149130832570906;
        result[2] += 0.006404391582799634;
        result[3] += 0.7456541628545288;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.18387096774193548;
        result[1] += 0.016129032258064516;
        result[2] += 0;
        result[3] += 0.8;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5249320036264733;
        result[1] += 0;
        result[2] += 0.01813236627379873;
        result[3] += 0.45693563009972804;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9969946679592826;
        result[1] += 0;
        result[2] += 0.0007270964614638875;
        result[3] += 0.0019389238972370335;
        result[4] += 0.0002423654871546292;
        result[5] += 0;
        result[6] += 9.694619486185167e-05;
      } else {
        result[0] += 0.018538713195201745;
        result[1] += 0.007633587786259542;
        result[2] += 0.006543075245365322;
        result[3] += 0.247546346782988;
        result[4] += 0.7175572519083969;
        result[5] += 0.0021810250817884407;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.6973476344890663;
        result[1] += 0.0004988775255674733;
        result[2] += 0.003076411407666085;
        result[3] += 0.29799617527230404;
        result[4] += 0;
        result[5] += 0.0006651700340899643;
        result[6] += 0.0004157312713062277;
      } else {
        result[0] += 0.8330192235205428;
        result[1] += 0;
        result[2] += 0.005653976630229929;
        result[3] += 0.1339992461364493;
        result[4] += 0.025065963060686015;
        result[5] += 0.0015077271013946476;
        result[6] += 0.0007538635506973238;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)4979) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9952267303102625;
        result[1] += 0;
        result[2] += 0.003341288782816229;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001431980906921241;
      } else {
        result[0] += 0.9999174645097392;
        result[1] += 0;
        result[2] += 8.253549026081215e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
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
  } else {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9082942483337447;
        result[1] += 0.0013576894593927426;
        result[2] += 0.004196494692668477;
        result[3] += 0.08467045174031103;
        result[4] += 0;
        result[5] += 0.00012342631449024932;
        result[6] += 0.0013576894593927426;
      } else {
        result[0] += 0.11650121745645249;
        result[1] += 0.0026222138977336574;
        result[2] += 0.008615845663982017;
        result[3] += 0.5426109758381719;
        result[4] += 0.3287132421801835;
        result[5] += 0.0009365049634763062;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0;
        result[1] += 0.001985440105890139;
        result[2] += 0.0029781601588352085;
        result[3] += 0.9950363997352747;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014184397163120567;
        result[3] += 0;
        result[4] += 0.9843971631205674;
        result[5] += 0.0014184397163120568;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.1765873015873016;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.19345238095238096;
        result[4] += 0.6299603174603174;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00824295010845987;
        result[3] += 0.9644251626898048;
        result[4] += 0.026464208242950107;
        result[5] += 0.0008676789587852494;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.04918032786885246;
        result[2] += 0;
        result[3] += 0.9508196721311475;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.9534161490683231;
        result[1] += 0.031055900621118016;
        result[2] += 0;
        result[3] += 0.015527950310559008;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0859277708592777;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9140722291407223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9956144578313254;
        result[1] += 0.00014457831325301207;
        result[2] += 0.000530120481927711;
        result[3] += 0.0037108433734939763;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7993926510780444;
        result[1] += 0.0005466140297600972;
        result[2] += 0.005466140297600972;
        result[3] += 0.19380504099605222;
        result[4] += 0;
        result[5] += 6.073489219556635e-05;
        result[6] += 0.0007288187063467963;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.004802364240857037;
        result[1] += 0.001847063169560399;
        result[2] += 0.007018840044329516;
        result[3] += 0.6786110084964906;
        result[4] += 0.3077207240487625;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.991675338189386;
        result[1] += 0;
        result[2] += 0.008324661810613945;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.007874015748031496;
        result[1] += 0.023622047244094488;
        result[2] += 0;
        result[3] += 0.2874015748031496;
        result[4] += 0.6811023622047244;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001455604075691412;
        result[2] += 0;
        result[3] += 0.048034934497816595;
        result[4] += 0.950509461426492;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0012239902080783355;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9975520195838434;
        result[5] += 0.0012239902080783355;
        result[6] += 0;
      } else {
        result[0] += 0.11732456140350878;
        result[1] += 0.0021929824561403508;
        result[2] += 0.013706140350877192;
        result[3] += 0.8634868421052632;
        result[4] += 0;
        result[5] += 0.003289473684210526;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993062514453095;
        result[1] += 0;
        result[2] += 0.0006166653819471209;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.708317274339012e-05;
      } else {
        result[0] += 0.6917701863354037;
        result[1] += 0.0018439440993788816;
        result[2] += 0.007375776397515526;
        result[3] += 0.29813664596273287;
        result[4] += 0;
        result[5] += 9.704968944099376e-05;
        result[6] += 0.00077639751552795;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.539313399778516;
        result[1] += 0;
        result[2] += 0.007751937984496122;
        result[3] += 0.40420819490586923;
        result[4] += 0.04724990771502398;
        result[5] += 0.0009228497600590621;
        result[6] += 0.0005537098560354373;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.07170731707317073;
        result[1] += 0.0004878048780487805;
        result[2] += 0.004390243902439025;
        result[3] += 0.5878048780487805;
        result[4] += 0.3351219512195122;
        result[5] += 0.0004878048780487805;
        result[6] += 0;
      } else {
        result[0] += 0.9162526045840681;
        result[1] += 0.0004808462894694663;
        result[2] += 0.002203878826735054;
        result[3] += 0.08078217663087034;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002804936688571887;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.007220216606498195;
        result[2] += 0.0018050541516245488;
        result[3] += 0.9909747292418772;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.978494623655914;
        result[1] += 0;
        result[2] += 0.021505376344086023;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0049504950495049506;
        result[1] += 0.06435643564356436;
        result[2] += 0;
        result[3] += 0.9306930693069307;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.4993472584856397;
        result[1] += 0;
        result[2] += 0.011096605744125326;
        result[3] += 0.489556135770235;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1380543633762518;
        result[1] += 0.015021459227467811;
        result[2] += 0.006437768240343348;
        result[3] += 0.8404864091559371;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        result[0] += 0.25;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.75;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992400060799513;
        result[1] += 0;
        result[2] += 0.0006839945280437756;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.599939200486396e-05;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)1.5) ) ) {
        result[0] += 0.5310706873397631;
        result[1] += 0.0024417043096081063;
        result[2] += 0.009156391161030399;
        result[3] += 0.3943352460017092;
        result[4] += 0.060920522524722256;
        result[5] += 0.0006104260774020266;
        result[6] += 0.001465022585764864;
      } else {
        result[0] += 0.6073633661102218;
        result[1] += 0;
        result[2] += 0.001143379830779785;
        result[3] += 0.32677795563686257;
        result[4] += 0.06425794648982391;
        result[5] += 0;
        result[6] += 0.000457351932311914;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
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
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)107) ) ) {
        result[0] += 0;
        result[1] += 0.0002106593638087213;
        result[2] += 0.005898462186644196;
        result[3] += 0.6585211712660628;
        result[4] += 0.33389509163682324;
        result[5] += 0.001474615546661049;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009009009009009009;
        result[2] += 0;
        result[3] += 0.013513513513513514;
        result[4] += 0.9774774774774775;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9936153232242618;
        result[1] += 0.0023942537909018356;
        result[2] += 0.0030327214684756584;
        result[3] += 0.00023942537909018357;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007182761372705507;
      } else {
        result[0] += 0.9829541771987815;
        result[1] += 0;
        result[2] += 0.0011018212457061377;
        result[3] += 0.015944001555512347;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4233841684822078;
        result[1] += 0;
        result[2] += 0.008533042846768339;
        result[3] += 0.5671750181554104;
        result[4] += 0;
        result[5] += 0.0001815541031227306;
        result[6] += 0.0007262164124909224;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0002935995302407516;
        result[2] += 0;
        result[3] += 0.9365825014679976;
        result[4] += 0.06283029947152084;
        result[5] += 0.0002935995302407516;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0.006085192697768763;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9939148073022313;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10604332953249715;
        result[1] += 0;
        result[2] += 0.01710376282782212;
        result[3] += 0;
        result[4] += 0.8745724059293044;
        result[5] += 0.002280501710376283;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.9994670929922729;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0005329070077271516;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.99439275371249;
        result[1] += 0.00012323618214307722;
        result[2] += 0.0004929447285723089;
        result[3] += 0.004806211103580011;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001848542732146158;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += 0.8169065403534342;
        result[1] += 0.00042509260946134697;
        result[2] += 0.005344021376085506;
        result[3] += 0.17695998056719503;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003643650938240117;
      } else {
        result[0] += 0.23164763458401305;
        result[1] += 0.01631321370309951;
        result[2] += 0;
        result[3] += 0.7520391517128875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9985636053505701;
        result[1] += 0;
        result[2] += 0.0012568453182511894;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00017954933117874137;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.024059380598924998;
        result[1] += 0.007422574865625798;
        result[2] += 0.00435116457640133;
        result[3] += 0.90043511645764;
        result[4] += 0.06347581264397234;
        result[5] += 0.00025595085743537234;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013759761993306063;
        result[3] += 0.19077724060989218;
        result[4] += 0.7947192264782448;
        result[5] += 0.0007437709185570845;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9799551792828686;
        result[1] += 0;
        result[2] += 0.005851593625498008;
        result[3] += 0.013197211155378486;
        result[4] += 0;
        result[5] += 0.0001245019920318725;
        result[6] += 0.0008715139442231076;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0015497869043006587;
        result[3] += 0.9984502130956994;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985007496251874;
        result[5] += 0.0014992503748125937;
        result[6] += 0;
      } else {
        result[0] += 0.20202020202020202;
        result[1] += 0.003928170594837262;
        result[2] += 0.006172839506172839;
        result[3] += 0.787317620650954;
        result[4] += 0;
        result[5] += 0.0005611672278338945;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.996602683879735;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0033973161202649907;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7869951660689225;
        result[1] += 0;
        result[2] += 0.00686106346483705;
        result[3] += 0.2050522376422891;
        result[4] += 0;
        result[5] += 0.0001559332605644784;
        result[6] += 0.0009355995633868704;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0006349206349206349;
        result[1] += 0;
        result[2] += 0.002857142857142857;
        result[3] += 0.5996825396825397;
        result[4] += 0.3952380952380952;
        result[5] += 0.0015873015873015873;
        result[6] += 0;
      } else {
        result[0] += 0.49948293691830403;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.500517063081696;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.48320413436692505;
        result[1] += 0.023255813953488372;
        result[2] += 0;
        result[3] += 0.4935400516795866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9222171815069906;
        result[1] += 0.000659875448509094;
        result[2] += 0.0027632284406318313;
        result[3] += 0.07402977687961398;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000329937724254547;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2263) ) ) {
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
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)-25.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06838209376101517;
        result[1] += 0.004934790271413466;
        result[2] += 0.007402185407120198;
        result[3] += 0.9175185054635179;
        result[4] += 0;
        result[5] += 0.0017624250969333806;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9988203266787659;
        result[1] += 0;
        result[2] += 0.000998185117967332;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018148820326678765;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.8517849553761156;
        result[1] += 0.0019124521886952825;
        result[2] += 0.00903102422439439;
        result[3] += 0.13546536336591586;
        result[4] += 0;
        result[5] += 0.00042498937526561835;
        result[6] += 0.0013812154696132596;
      } else {
        result[0] += 0;
        result[1] += 0.002486678507992895;
        result[2] += 0.003907637655417406;
        result[3] += 0.9936056838365896;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.08715406856670799;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8938455183808345;
        result[4] += 0.018587360594795543;
        result[5] += 0.00041305245766212317;
        result[6] += 0;
      } else {
        result[0] += 0.27568602425015953;
        result[1] += 0.0006381620931716656;
        result[2] += 0;
        result[3] += 0.6081684747925973;
        result[4] += 0.11550733886407147;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0055147058823529415;
        result[2] += 0.01011029411764706;
        result[3] += 0;
        result[4] += 0.9825367647058824;
        result[5] += 0.001838235294117647;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989993632311471;
        result[1] += 0;
        result[2] += 0.0007277358318930229;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00027290093695988356;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9144589133363269;
        result[1] += 0.00224517287831163;
        result[2] += 0.008531656937584195;
        result[3] += 0.07308037718904356;
        result[4] += 0;
        result[5] += 0.0001122586439155815;
        result[6] += 0.001571621014818141;
      } else {
        result[0] += 0;
        result[1] += 0.0032620514679231605;
        result[2] += 0.006524102935846321;
        result[3] += 0.9902138455962305;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        result[0] += 0.9993086761147598;
        result[1] += 0;
        result[2] += 0.0005376963551868495;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015362753005338555;
      } else {
        result[0] += 0.7142857142857143;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2857142857142857;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.8437180796731358;
        result[1] += 0.0034729315628192034;
        result[2] += 0.003881511746680286;
        result[3] += 0.14790602655771196;
        result[4] += 0;
        result[5] += 0.0008171603677221655;
        result[6] += 0.00020429009193054137;
      } else {
        result[0] += 0.1654837504669406;
        result[1] += 0.0044826298094882335;
        result[2] += 0.005976839745984311;
        result[3] += 0.7844602166604407;
        result[4] += 0.03959656331714606;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.002529244388239014;
        result[1] += 0.0017388555169143218;
        result[2] += 0.00853619981030667;
        result[3] += 0.6038570976920645;
        result[4] += 0.382073980398356;
        result[5] += 0.001264622194119507;
        result[6] += 0;
      } else {
        result[0] += 0.9912798874824191;
        result[1] += 0;
        result[2] += 0.00590717299578059;
        result[3] += 0.0016877637130801688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011251758087201125;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        result[0] += 0.0020297699594046007;
        result[1] += 0.00033829499323410016;
        result[2] += 0.0037212449255751017;
        result[3] += 0.9901894451962111;
        result[4] += 0.003044654939106901;
        result[5] += 0.0006765899864682003;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.002416626389560174;
        result[2] += 0;
        result[3] += 0.12034799420009666;
        result[4] += 0.8772353794103431;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
        result[0] += 0.9986282578875172;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0013717421124828531;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.024390243902439025;
        result[3] += 0;
        result[4] += 0.975609756097561;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991384116365111;
        result[1] += 0;
        result[2] += 0.0007095433581673509;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001520450053215752;
      } else {
        result[0] += 0.6725352112676056;
        result[1] += 0.007042253521126761;
        result[2] += 0;
        result[3] += 0.3204225352112676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.767277856135402;
        result[1] += 0;
        result[2] += 0.005798464190565742;
        result[3] += 0.22566995768688294;
        result[4] += 0;
        result[5] += 0.0003134304967873374;
        result[6] += 0.0009402914903620122;
      } else {
        result[0] += 0.8121099208197483;
        result[1] += 0.0021425244527247317;
        result[2] += 0.005309734513274335;
        result[3] += 0.18025151374010245;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018630647414997665;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0002874389192296637;
        result[1] += 0.0005748778384593274;
        result[2] += 0;
        result[3] += 0.9330267318194884;
        result[4] += 0.06524863466513366;
        result[5] += 0.0008623167576889911;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9473684210526315;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.05263157894736842;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0026098303610265334;
        result[2] += 0.009134406263592866;
        result[3] += 0;
        result[4] += 0.9847759895606786;
        result[5] += 0.0034797738147020443;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.8306264501160093;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.16937354988399073;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0031545741324921135;
        result[1] += 0.050473186119873815;
        result[2] += 0;
        result[3] += 0.9463722397476341;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9955391421989835;
        result[1] += 0.000548466123075798;
        result[2] += 0.0025960729825587774;
        result[3] += 0.0011700610625617024;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001462576328202128;
      } else {
        result[0] += 0.6539021386182958;
        result[1] += 0;
        result[2] += 0.004030903594222372;
        result[3] += 0.34139514052177805;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006718172657037286;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0;
        result[1] += 0.010723860589812333;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9892761394101877;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0013686131386861315;
        result[1] += 0.0002281021897810219;
        result[2] += 0.002052919708029197;
        result[3] += 0.7406478102189781;
        result[4] += 0.25433394160583944;
        result[5] += 0.0013686131386861315;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
        result[0] += 0.9986541049798116;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0013458950201884253;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01488095238095238;
        result[3] += 0;
        result[4] += 0.9851190476190477;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9919316563834836;
        result[1] += 0;
        result[2] += 0.007593735168485999;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00047460844803037496;
      } else {
        result[0] += 0.9997832119320152;
        result[1] += 0;
        result[2] += 0.00021678806798473813;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.904603068712475;
        result[1] += 0.001890148988214365;
        result[2] += 0.009228374471870136;
        result[3] += 0.08205470313542361;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0022237046920169003;
      } else {
        result[0] += 0;
        result[1] += 0.002150537634408602;
        result[2] += 0.005017921146953405;
        result[3] += 0.992831541218638;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9801734820322181;
        result[1] += 0;
        result[2] += 0.01858736059479554;
        result[3] += 0.0012391573729863693;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07837980010520779;
        result[1] += 0.004734350341925302;
        result[2] += 0.0026301946344029457;
        result[3] += 0.9137296159915834;
        result[4] += 0.0005260389268805891;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8011695906432749;
        result[4] += 0.19883040935672514;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004600345025876941;
        result[2] += 0;
        result[3] += 0.06440483036227718;
        result[4] += 0.9309948246118459;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0034622042700519335;
        result[1] += 0.0005770340450086556;
        result[2] += 0.004616272360069245;
        result[3] += 0.9122908251586844;
        result[4] += 0.07501442585112524;
        result[5] += 0.004039238315060589;
        result[6] += 0;
      } else {
        result[0] += 0.21144859813084113;
        result[1] += 0;
        result[2] += 0.010514018691588784;
        result[3] += 0;
        result[4] += 0.7780373831775701;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.995388797204155;
        result[1] += 0.00024269488399184544;
        result[2] += 0.0006310066983787982;
        result[3] += 0.0036404232598776817;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.707795359673819e-05;
      } else {
        result[0] += 0.8001402077624117;
        result[1] += 0.0005735772098655281;
        result[2] += 0.004843540883308904;
        result[3] += 0.19355044292906765;
        result[4] += 0;
        result[5] += 0.00031865400548084893;
        result[6] += 0.0005735772098655281;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 30;
  result[1] /= 30;
  result[2] /= 30;
  result[3] /= 30;
  result[4] /= 30;
  result[5] /= 30;
  result[6] /= 30;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_4/test_data.csv", "r");
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
