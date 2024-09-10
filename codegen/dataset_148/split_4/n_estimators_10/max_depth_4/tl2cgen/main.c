
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
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9947289156626506;
          result[1] += 0;
          result[2] += 0.0007530120481927711;
          result[3] += 0.004518072289156626;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9827492282549483;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.01725077174505175;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.36666666666666664;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07352941176470588;
          result[1] += 0;
          result[2] += 0.08088235294117647;
          result[3] += 0;
          result[4] += 0.8455882352941176;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.5013983220135837;
          result[1] += 0;
          result[2] += 0.0031961646024770275;
          result[3] += 0.49500599280862967;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00039952057530962844;
        } else {
          result[0] += 0.9896465548018565;
          result[1] += 0;
          result[2] += 0.002856122813280971;
          result[3] += 0.004284184219921457;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0032131381649410924;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1421832884097035;
          result[1] += 0.005390835579514825;
          result[2] += 0.005390835579514825;
          result[3] += 0.8443396226415094;
          result[4] += 0;
          result[5] += 0.0026954177897574125;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)25) ) ) {
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
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
          result[0] += 0.16500453309156846;
          result[1] += 0.012692656391659111;
          result[2] += 0;
          result[3] += 0.8223028105167725;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5420944558521561;
          result[1] += 0;
          result[2] += 0.021560574948665298;
          result[3] += 0.43634496919917864;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)50) ) ) {
          result[0] += 0.0011682242990654205;
          result[1] += 0.0011682242990654205;
          result[2] += 0.009345794392523364;
          result[3] += 0.9310747663551402;
          result[4] += 0.0514018691588785;
          result[5] += 0.005841121495327103;
          result[6] += 0;
        } else {
          result[0] += 0.24508320726172467;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7549167927382754;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
          result[0] += 0.9951480399183988;
          result[1] += 0.000716766830236533;
          result[2] += 0.0020400286706732094;
          result[3] += 0.0019848927606550145;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001102718200363897;
        } else {
          result[0] += 0.6993150684931507;
          result[1] += 0;
          result[2] += 0.0010273972602739725;
          result[3] += 0.2996575342465753;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)49) ) ) {
          result[0] += 0.6363636363636364;
          result[1] += 0;
          result[2] += 0.36363636363636365;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009009009009009009;
          result[2] += 0.003179650238473768;
          result[3] += 0.9724430312665607;
          result[4] += 0.015368309485956544;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
          result[0] += 0.9959432048681541;
          result[1] += 0;
          result[2] += 0.004056795131845842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9631336405529954;
          result[1] += 0;
          result[2] += 0.03686635944700461;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03859649122807018;
          result[2] += 0;
          result[3] += 0.9614035087719298;
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
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1725.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
          result[0] += 0.9950372208436725;
          result[1] += 0;
          result[2] += 0.003473945409429281;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014888337468982632;
        } else {
          result[0] += 0.9996686684613791;
          result[1] += 0;
          result[2] += 0.0003313315386208325;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)76) ) ) {
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
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.7174868189806678;
          result[1] += 0.0006590509666080844;
          result[2] += 0.0010984182776801407;
          result[3] += 0.27943760984182775;
          result[4] += 0;
          result[5] += 0.0006590509666080844;
          result[6] += 0.0006590509666080844;
        } else {
          result[0] += 0.9162039374053507;
          result[1] += 0.0005047955577990913;
          result[2] += 0.00984351337708228;
          result[3] += 0.05956587582029277;
          result[4] += 0.010600706713780918;
          result[5] += 0.0010095911155981825;
          result[6] += 0.0022715800100959107;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
          result[0] += 0;
          result[1] += 0.011166253101736972;
          result[2] += 0;
          result[3] += 0.24689826302729528;
          result[4] += 0.7406947890818859;
          result[5] += 0.0012406947890818859;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01266689489900719;
          result[3] += 0.9818555289284492;
          result[4] += 0.004792879150975694;
          result[5] += 0.0006846970215679561;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9983685011964325;
          result[1] += 0;
          result[2] += 0.0015227322166630412;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010876658690450294;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.7171810835872301;
          result[1] += 0.0025168896542588424;
          result[2] += 0.0029142932838786594;
          result[3] += 0.27593058683269306;
          result[4] += 0.0005298715061597563;
          result[5] += 0;
          result[6] += 0.0009272751357795734;
        } else {
          result[0] += 0;
          result[1] += 0.028112449799196786;
          result[2] += 0;
          result[3] += 0.9558232931726908;
          result[4] += 0.012048192771084338;
          result[5] += 0.004016064257028112;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
          result[0] += 0.8207910395519776;
          result[1] += 0;
          result[2] += 0.012600630031501575;
          result[3] += 0.06615330766538327;
          result[4] += 0.0952047602380119;
          result[5] += 0.0007000350017500875;
          result[6] += 0.004550227511375569;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010035419126328217;
          result[3] += 0.7972255017709563;
          result[4] += 0.19244391971664698;
          result[5] += 0.00029515938606847696;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.20398009950248755;
          result[1] += 0.008528784648187633;
          result[2] += 0.006396588486140725;
          result[3] += 0.7810945273631841;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0861812778603269;
          result[4] += 0.9138187221396731;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0033482142857142855;
          result[1] += 0.006696428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9899553571428571;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)15) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.004453240969816922;
          result[1] += 0.006432459178624443;
          result[2] += 0.009401286491835725;
          result[3] += 0.9797130133597229;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)87) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)25) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)79.5) ) ) {
          result[0] += 0.6893429901707191;
          result[1] += 0;
          result[2] += 0.0038799793067770304;
          result[3] += 0.30574236937403;
          result[4] += 0.0002586652871184687;
          result[5] += 0.0002586652871184687;
          result[6] += 0.0005173305742369374;
        } else {
          result[0] += 0.3806228373702422;
          result[1] += 0;
          result[2] += 0.13494809688581316;
          result[3] += 0;
          result[4] += 0.4844290657439446;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)13) ) ) {
          result[0] += 0.9936071599808215;
          result[1] += 0.00035959725107879173;
          result[2] += 0.000639284001917852;
          result[3] += 0.0051941825155825475;
          result[4] += 7.99105002397315e-05;
          result[5] += 0;
          result[6] += 0.00011986575035959726;
        } else {
          result[0] += 0;
          result[1] += 0.03064066852367688;
          result[2] += 0;
          result[3] += 0.9498607242339833;
          result[4] += 0.013927576601671309;
          result[5] += 0.005571030640668524;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
          result[0] += 0.4403998491135421;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.559600150886458;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9775147928994082;
          result[1] += 0;
          result[2] += 0.015088757396449704;
          result[3] += 0.001183431952662722;
          result[4] += 0.002366863905325444;
          result[5] += 0.0020710059171597634;
          result[6] += 0.0017751479289940828;
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
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 0.9995164176217418;
          result[1] += 0;
          result[2] += 0.00038686590260650903;
          result[3] += 0;
          result[4] += 9.671647565162726e-05;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7394636015325671;
          result[1] += 0.0038314176245210726;
          result[2] += 0;
          result[3] += 0.2567049808429119;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
          result[0] += 0.003937007874015748;
          result[1] += 0.011811023622047244;
          result[2] += 0.047244094488188976;
          result[3] += 0.937007874015748;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984939759036144;
          result[5] += 0.0015060240963855422;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
          result[0] += 0.6244377811094453;
          result[1] += 0.001999000499750125;
          result[2] += 0.005497251374312844;
          result[3] += 0.3658170914542729;
          result[4] += 0.0009995002498750624;
          result[5] += 0.0004997501249375312;
          result[6] += 0.0007496251874062968;
        } else {
          result[0] += 0.028728961114335462;
          result[1] += 0.0008705745792222867;
          result[2] += 0.015089959373186303;
          result[3] += 0.8746372605919908;
          result[4] += 0.08009286128845038;
          result[5] += 0.0005803830528148578;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
          result[0] += 0.7045585689555683;
          result[1] += 0;
          result[2] += 0.002308136180034622;
          result[3] += 0.29255626081938835;
          result[4] += 0;
          result[5] += 0.0005770340450086555;
          result[6] += 0;
        } else {
          result[0] += 0.9849272900965927;
          result[1] += 0;
          result[2] += 0.0027597919541449954;
          result[3] += 0.011251459505360365;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010614584439019212;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
          result[0] += 0.38563829787234044;
          result[1] += 0;
          result[2] += 0.02127659574468085;
          result[3] += 0.5930851063829787;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.14061054579093432;
          result[1] += 0.0064754856614246065;
          result[2] += 0;
          result[3] += 0.8529139685476411;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0.0022624434389140274;
          result[1] += 0.029411764705882353;
          result[2] += 0;
          result[3] += 0.07239819004524888;
          result[4] += 0.8959276018099548;
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
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08203125;
          result[4] += 0.91796875;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)29.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.04918032786885246;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7540983606557377;
          result[4] += 0.19672131147540983;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
          result[0] += 0.7104589324404176;
          result[1] += 0;
          result[2] += 0.0017727004136300964;
          result[3] += 0.2873744337207012;
          result[4] += 0;
          result[5] += 0.00019696671262556627;
          result[6] += 0.00019696671262556627;
        } else {
          result[0] += 0.983021794139254;
          result[1] += 0.0008570728920088156;
          result[2] += 0.0006938209125785651;
          result[3] += 0.015182434087013304;
          result[4] += 0.00012243898457268794;
          result[5] += 4.0812994857562645e-05;
          result[6] += 8.162598971512529e-05;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
          result[0] += 0.3645409317051108;
          result[1] += 0.005427408412483039;
          result[2] += 0.015829941203075532;
          result[3] += 0.5920398009950248;
          result[4] += 0.022161917684305744;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0025303643724696357;
          result[1] += 0.005060728744939271;
          result[2] += 0;
          result[3] += 0.15384615384615385;
          result[4] += 0.8385627530364372;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
          result[0] += 0.9277504105090312;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0722495894909688;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.009536336731338375;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9904636632686616;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5853658536585367;
          result[3] += 0;
          result[4] += 0.29268292682926833;
          result[5] += 0.12195121951219513;
          result[6] += 0;
        } else {
          result[0] += 0.9918911091804228;
          result[1] += 0;
          result[2] += 0.005792064871126557;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0008688097306689834;
          result[6] += 0.0014480162177816392;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
          result[0] += 0.0006462035541195477;
          result[1] += 0.00032310177705977385;
          result[2] += 0.0019386106623586429;
          result[3] += 0.9744749596122778;
          result[4] += 0.020678513731825526;
          result[5] += 0.0019386106623586429;
          result[6] += 0;
        } else {
          result[0] += 0.9947019867549669;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.005298013245033113;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3015267175572519;
          result[4] += 0.6984732824427481;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004633204633204633;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9953667953667954;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011111111111111112;
          result[2] += 0.003703703703703704;
          result[3] += 0.9851851851851852;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)53) ) ) {
          result[0] += 0.9973317738221427;
          result[1] += 0.0008772250447750283;
          result[2] += 0.0016082459154208853;
          result[3] += 7.310208706458569e-05;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010965313059687854;
        } else {
          result[0] += 0.5794392523364486;
          result[1] += 0.056074766355140186;
          result[2] += 0;
          result[3] += 0.3644859813084112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2541488857278331;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7458511142721669;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
          result[0] += 0.9325626204238922;
          result[1] += 0;
          result[2] += 0.046242774566473986;
          result[3] += 0;
          result[4] += 0.011560693641618497;
          result[5] += 0.002890173410404624;
          result[6] += 0.00674373795761079;
        } else {
          result[0] += 0.9940042826552462;
          result[1] += 0;
          result[2] += 0.0008565310492505353;
          result[3] += 0.0008565310492505353;
          result[4] += 0.001284796573875803;
          result[5] += 0.0008565310492505353;
          result[6] += 0.0021413276231263384;
        }
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
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)118.5) ) ) {
          result[0] += 0.3562231759656652;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6437768240343348;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03225806451612903;
          result[1] += 0.056451612903225805;
          result[2] += 0;
          result[3] += 0.3225806451612903;
          result[4] += 0.5887096774193549;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90) ) ) {
          result[0] += 0.11513859275053305;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02771855010660981;
          result[4] += 0.8571428571428571;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
          result[0] += 0.01217391304347826;
          result[1] += 0.01217391304347826;
          result[2] += 0.009565217391304347;
          result[3] += 0.9660869565217391;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9949324324324325;
          result[1] += 0;
          result[2] += 0.005067567567567568;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.278125;
          result[4] += 0.721875;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002044989775051125;
          result[2] += 0;
          result[3] += 0.019427402862985686;
          result[4] += 0.9785276073619632;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13.5) ) ) {
          result[0] += 0.8620045652625026;
          result[1] += 0;
          result[2] += 0.002075119319360863;
          result[3] += 0.13426021996264786;
          result[4] += 0.0008300477277443454;
          result[5] += 0.0008300477277443454;
          result[6] += 0;
        } else {
          result[0] += 0.8232806864817809;
          result[1] += 0;
          result[2] += 0.005471956224350205;
          result[3] += 0.16602412635244373;
          result[4] += 0.0038552418853376445;
          result[5] += 0;
          result[6] += 0.0013679890560875513;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
          result[0] += 0.13150684931506848;
          result[1] += 0;
          result[2] += 0.0045662100456621;
          result[3] += 0.7616438356164383;
          result[4] += 0.10136986301369863;
          result[5] += 0.0009132420091324201;
          result[6] += 0;
        } else {
          result[0] += 0.924819773429454;
          result[1] += 0.0005767250257466528;
          result[2] += 0.0018125643666323374;
          result[3] += 0.07254376930998968;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002471678681771369;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23) ) ) {
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
          result[0] += 0.9987160493827161;
          result[1] += 0;
          result[2] += 0.0012839506172839506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980099502487563;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001990049751243781;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
          result[0] += 0.024981357196122298;
          result[1] += 0.0018642803877703207;
          result[2] += 0.01640566741237882;
          result[3] += 0.8534675615212528;
          result[4] += 0.1017897091722595;
          result[5] += 0.0014914243102162564;
          result[6] += 0;
        } else {
          result[0] += 0.9838424640242364;
          result[1] += 0;
          result[2] += 0.005932845241100733;
          result[3] += 0.00870992173693512;
          result[4] += 0;
          result[5] += 0.0002524614996213078;
          result[6] += 0.001262307498106539;
        }
      } else {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
          result[0] += 0;
          result[1] += 0.001328462304882099;
          result[2] += 0.008967120557954168;
          result[3] += 0.8432414480239123;
          result[4] += 0.1461308535370309;
          result[5] += 0.00033211557622052476;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7064471879286695;
          result[4] += 0.2935528120713306;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2214765100671141;
          result[1] += 0.012080536912751677;
          result[2] += 0;
          result[3] += 0.7664429530201342;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
          result[0] += 0.11407766990291263;
          result[1] += 0.02063106796116505;
          result[2] += 0.010922330097087379;
          result[3] += 0.8543689320388349;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04430379746835443;
          result[4] += 0.9556962025316456;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
          result[0] += 0.0005602240896358543;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9994397759103641;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006146753745678064;
          result[2] += 0.01536688436419516;
          result[3] += 0.9784863618901268;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-26.5) ) ) {
          result[0] += 0.971830985915493;
          result[1] += 0;
          result[2] += 0.028169014084507043;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9960369881109643;
          result[1] += 0;
          result[2] += 0.0035226772346983706;
          result[3] += 0.00044033465433729633;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
          result[0] += 0.1580020387359837;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8399592252803262;
          result[4] += 0.0010193679918450561;
          result[5] += 0.0010193679918450561;
          result[6] += 0;
        } else {
          result[0] += 0.875;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.08928571428571429;
          result[5] += 0.03571428571428571;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
          result[0] += 0.9967479037692971;
          result[1] += 0.0007052738813572604;
          result[2] += 0.0008620014105477627;
          result[3] += 0.0014105477627145207;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00027427317608337906;
        } else {
          result[0] += 0.8903846153846153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10961538461538461;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9769452449567724;
          result[4] += 0.01729106628242075;
          result[5] += 0.005763688760806916;
          result[6] += 0;
        } else {
          result[0] += 0.9908814589665654;
          result[1] += 0;
          result[2] += 0.00694745983499783;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002171081198436822;
        }
      } else {
        if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003871876099964801;
          result[3] += 0.9961281239000352;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012465373961218837;
          result[3] += 0;
          result[4] += 0.9875346260387812;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 10;
  result[1] /= 10;
  result[2] /= 10;
  result[3] /= 10;
  result[4] /= 10;
  result[5] /= 10;
  result[6] /= 10;
  
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
