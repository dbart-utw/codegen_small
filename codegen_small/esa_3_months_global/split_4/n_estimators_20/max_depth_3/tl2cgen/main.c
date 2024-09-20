
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( LIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1531271114945411682) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4316533952951431274) ) ) {
      if ( UNLIKELY( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001779727521352469921) ) ) {
        result[0] += (float)0.8366494321853938;
        result[1] += (float)0.16335056781460622;
      } else {
        result[0] += (float)0.4501299438729826;
        result[1] += (float)0.5498700561270174;
      }
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.2326309755444526672) ) ) {
      if ( LIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4303112775087356567) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4320280700922012329) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.3637963384389877319) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8154961466789245605) ) ) {
        result[0] += (float)0.9927379633387817;
        result[1] += (float)0.0072620366612183105;
      } else {
        result[0] += (float)0.608936648626036;
        result[1] += (float)0.391063351373964;
      }
    } else {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3758573830127716064) ) ) {
        result[0] += (float)0.5414699932569117;
        result[1] += (float)0.45853000674308836;
      } else {
        result[0] += (float)0.01988400994200497;
        result[1] += (float)0.980115990057995;
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( LIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.3009759485721588135) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7196456193923950195) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9636617153263901;
        result[1] += (float)0.03633828467360992;
      }
    }
  }
  if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2836239337921142578) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7592073678970336914) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2632576674222946167) ) ) {
        result[0] += (float)0.5990696071674707;
        result[1] += (float)0.4009303928325293;
      } else {
        result[0] += (float)0.9857456308594049;
        result[1] += (float)0.014254369140595032;
      }
    }
  }
  if ( LIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.275324702262878418) ) ) {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3542838096618652344) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[47].missing != -1) || (data[47].fvalue <= (float)0.7464606761932373047) ) ) {
        result[0] += (float)0.003499222395023328;
        result[1] += (float)0.9965007776049767;
      } else {
        result[0] += (float)0.9527438468550593;
        result[1] += (float)0.04725615314494075;
      }
    }
  } else {
    if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8247438371181488037) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3253962397575378418) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9998721153287218;
        result[1] += (float)0.0001278846712782654;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1359096989035606384) ) ) {
    if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3577649742364883423) ) ) {
      if ( LIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.153880678117275238) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.1333329454064369202) ) ) {
        result[0] += (float)0.3982986287455561;
        result[1] += (float)0.6017013712544439;
      } else {
        result[0] += (float)0.006318273512731702;
        result[1] += (float)0.9936817264872683;
      }
    } else {
      if ( UNLIKELY( !(data[45].missing != -1) || (data[45].fvalue <= (float)0.7400808334350585938) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9665923161612262;
        result[1] += (float)0.03340768383877379;
      }
    }
  }
  if ( UNLIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.389156639575958252) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.3265323340892791748) ) ) {
        result[0] += (float)0.9796130736933546;
        result[1] += (float)0.02038692630664543;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += (float)0.010296875552882064;
        result[1] += (float)0.9897031244471179;
      } else {
        result[0] += (float)0.9677843092180881;
        result[1] += (float)0.03221569078191192;
      }
    }
  }
  if ( UNLIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001822743099182844162) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      if ( LIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7870718538761138916) ) ) {
        result[0] += (float)0.00019005384859043396;
        result[1] += (float)0.9998099461514096;
      } else {
        result[0] += (float)0.02476780185758514;
        result[1] += (float)0.9752321981424149;
      }
    }
  } else {
    if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
      if ( UNLIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.993042677640914917) ) ) {
        result[0] += (float)0.16709511568123395;
        result[1] += (float)0.8329048843187661;
      } else {
        result[0] += (float)0.04333457111028593;
        result[1] += (float)0.9566654288897141;
      }
    } else {
      if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)0.1493559554219245911) ) ) {
        result[0] += (float)0.8976149129957118;
        result[1] += (float)0.1023850870042882;
      } else {
        result[0] += (float)0.9975148223097952;
        result[1] += (float)0.0024851776902048497;
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.7537131011486053467) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9653300354245709;
        result[1] += (float)0.03466996457542918;
      }
    }
  }
  if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7658493518829345703) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.3528395742177963257) ) ) {
        result[0] += (float)0.26422764227642276;
        result[1] += (float)0.7357723577235772;
      } else {
        result[0] += (float)0.9547148336399638;
        result[1] += (float)0.04528516636003617;
      }
    } else {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)0.7732043862342834473) ) ) {
        result[0] += (float)0.9844619221177825;
        result[1] += (float)0.015538077882217532;
      } else {
        result[0] += (float)0.29123471928064504;
        result[1] += (float)0.708765280719355;
      }
    }
  }
  if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.351395338773727417) ) ) {
    if ( LIKELY( !(data[59].missing != -1) || (data[59].fvalue <= (float)0.4483384788036346436) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      result[0] += (float)1;
      result[1] += (float)0;
    }
  } else {
    if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
      if ( UNLIKELY( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
        result[0] += (float)0.1588089330024814;
        result[1] += (float)0.8411910669975186;
      } else {
        result[0] += (float)0.9581865947174099;
        result[1] += (float)0.04181340528259017;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( UNLIKELY( !(data[41].missing != -1) || (data[41].fvalue <= (float)0.001762012368999421597) ) ) {
      if ( LIKELY( !(data[37].missing != -1) || (data[37].fvalue <= (float)0.7667563557624816895) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.14757709251101322;
        result[1] += (float)0.8524229074889867;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)0.8118190765380859375) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.9648537729583098;
        result[1] += (float)0.035146227041690264;
      }
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7676883339881896973) ) ) {
        result[0] += (float)0.955619150602185;
        result[1] += (float)0.04438084939781498;
      } else {
        result[0] += (float)0.7010906612133606;
        result[1] += (float)0.2989093387866394;
      }
    } else {
      if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += (float)0.019865541121164638;
        result[1] += (float)0.9801344588788353;
      } else {
        result[0] += (float)0.98941551871741;
        result[1] += (float)0.010584481282590085;
      }
    }
  }
  if ( UNLIKELY( !(data[52].missing != -1) || (data[52].fvalue <= (float)0.7815771698951721191) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.09636001661419868469) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[42].missing != -1) || (data[42].fvalue <= (float)0.001820213044993579388) ) ) {
        result[0] += (float)0;
        result[1] += (float)1;
      } else {
        result[0] += (float)0.95998775703275;
        result[1] += (float)0.04001224296725006;
      }
    }
  }
  if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[62].missing != -1) || (data[62].fvalue <= (float)0.9933518767356872559) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.275324702262878418) ) ) {
        result[0] += (float)0.3535126864720133;
        result[1] += (float)0.6464873135279867;
      } else {
        result[0] += (float)0.9655888805339576;
        result[1] += (float)0.034411119466042375;
      }
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  }
  if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.8081411123275756836) ) ) {
    result[0] += (float)0;
    result[1] += (float)1;
  } else {
    if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2961181998252868652) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
        result[0] += (float)0.9060857402825925;
        result[1] += (float)0.0939142597174075;
      } else {
        result[0] += (float)0.42639051277768497;
        result[1] += (float)0.573609487222315;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2768351733684539795) ) ) {
        result[0] += (float)0.23656429942418425;
        result[1] += (float)0.7634357005758158;
      } else {
        result[0] += (float)0.7736936936936937;
        result[1] += (float)0.2263063063063063;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2692928612232208252) ) ) {
    if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.3528395742177963257) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)0.2557153552770614624) ) ) {
        result[0] += (float)0.030303030303030304;
        result[1] += (float)0.9696969696969697;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[43].missing != -1) || (data[43].fvalue <= (float)0.001774667529389262199) ) ) {
        result[0] += (float)0.004832863471606927;
        result[1] += (float)0.9951671365283931;
      } else {
        result[0] += (float)0.9474494527916899;
        result[1] += (float)0.05255054720831015;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7584942877292633057) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2738175839185714722) ) ) {
        result[0] += (float)0.9591976516634051;
        result[1] += (float)0.040802348336594914;
      } else {
        result[0] += (float)0.9997673907705826;
        result[1] += (float)0.0002326092294173139;
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( UNLIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.05494171613827347755) ) ) {
      result[0] += (float)1;
      result[1] += (float)0;
    } else {
      result[0] += (float)0;
      result[1] += (float)1;
    }
  } else {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
      if ( LIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.3849027454853057861) ) ) {
        result[0] += (float)0.9880207281782085;
        result[1] += (float)0.011979271821791506;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3571722805500030518) ) ) {
        result[0] += (float)0.01181855444732887;
        result[1] += (float)0.9881814455526712;
      } else {
        result[0] += (float)0.9621548186758345;
        result[1] += (float)0.037845181324165464;
      }
    }
  }
  if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.7603332698345184326) ) ) {
    if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7750433683395385742) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)0.8066920638084411621) ) ) {
        result[0] += (float)0.018292682926829267;
        result[1] += (float)0.9817073170731707;
      } else {
        result[0] += (float)0.16619318181818182;
        result[1] += (float)0.8338068181818182;
      }
    }
  } else {
    if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3557280451059341431) ) ) {
      result[0] += (float)0;
      result[1] += (float)1;
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.2436483129858970642) ) ) {
        result[0] += (float)0.6256298286865972;
        result[1] += (float)0.3743701713134028;
      } else {
        result[0] += (float)0.98913496119629;
        result[1] += (float)0.010865038803710014;
      }
    }
  }
  if ( LIKELY( !(data[57].missing != -1) || (data[57].fvalue <= (float)0.1015841327607631683) ) ) {
    if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.1423501297831535339) ) ) {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.2984580099582672119) ) ) {
        result[0] += (float)0.9139796723035135;
        result[1] += (float)0.08602032769648646;
      } else {
        result[0] += (float)0;
        result[1] += (float)1;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)0.7823984324932098389) ) ) {
        result[0] += (float)0.9683964805171486;
        result[1] += (float)0.0316035194828515;
      } else {
        result[0] += (float)0.28366953426283004;
        result[1] += (float)0.71633046573717;
      }
    }
  } else {
    result[0] += (float)0;
    result[1] += (float)1;
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  
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
    

    FILE* file = fopen("./codegen_small/esa_3_months_global/split_4/test_data.csv", "r");
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
