
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0.9992603550295858;
        result[1] += 0;
        result[2] += 0.0007396449704142012;
        result[3] += 0;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6106425702811245;
        result[1] += 0;
        result[2] += 0.010240963855421687;
        result[3] += 0.344578313253012;
        result[4] += 0.03333333333333333;
        result[5] += 0.00020080321285140563;
        result[6] += 0.001004016064257028;
      } else {
        result[0] += 0.05566470203012443;
        result[1] += 0.005893909626719057;
        result[2] += 0;
        result[3] += 0.6496398166339227;
        result[4] += 0.28552717747216766;
        result[5] += 0.0032743942370661427;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
        result[0] += 0.13855259617971485;
        result[1] += 0.00026903416733925213;
        result[2] += 0.00511164917944579;
        result[3] += 0.505784234597794;
        result[4] += 0.34893731503901;
        result[5] += 0.0013451708366962606;
        result[6] += 0;
      } else {
        result[0] += 0.986179769308457;
        result[1] += 0.0010099399351512252;
        result[2] += 0.0028172008717376284;
        result[3] += 0.009939935151225217;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.315473342901185e-05;
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
        result[0] += 0.3886138613861385;
        result[1] += 0;
        result[2] += 0.0022002200220021997;
        result[3] += 0.4777227722772276;
        result[4] += 0.1309130913091309;
        result[5] += 0;
        result[6] += 0.0005500550055005499;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9835294117647059;
        result[1] += 0;
        result[2] += 0.01647058823529412;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994586861539652;
        result[1] += 0;
        result[2] += 0.0005026485713180992;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8665274716776864e-05;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)9463.5) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.5067890182035213;
        result[1] += 0.0016413011041480155;
        result[2] += 0.005147717099373322;
        result[3] += 0.4856759176365264;
        result[4] += 0;
        result[5] += 0.0004476275738585497;
        result[6] += 0.0002984183825723665;
      } else {
        result[0] += 0.9500846023688665;
        result[1] += 0;
        result[2] += 0.0439932318104907;
        result[3] += 0.002538071065989848;
        result[4] += 0;
        result[5] += 0.0008460236886632827;
        result[6] += 0.002538071065989848;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009517766497461929;
        result[1] += 0.002220812182741117;
        result[2] += 0.0006345177664974619;
        result[3] += 0.9942893401015228;
        result[4] += 0;
        result[5] += 0.0019035532994923859;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)61) ) ) {
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
        result[2] += 0.015647226173541962;
        result[3] += 0;
        result[4] += 0.984352773826458;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.3816326530612245;
        result[1] += 0.02040816326530612;
        result[2] += 0;
        result[3] += 0.5979591836734693;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9972122368131465;
        result[1] += 0.00036681094563861783;
        result[2] += 0.002200865673831707;
        result[3] += 0.00011004328369158536;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011004328369158536;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.448659793814433;
        result[1] += 0;
        result[2] += 0.0026804123711340207;
        result[3] += 0.548659793814433;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8579658763571903;
        result[1] += 0;
        result[2] += 0.007755373365832041;
        result[3] += 0.13361400398847773;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006647462884998893;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        result[0] += 0.9989236702843305;
        result[1] += 0;
        result[2] += 0.000986635572697103;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.969414297246392e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.018000847098686996;
        result[1] += 0.004870817450232952;
        result[2] += 0.013341804320203304;
        result[3] += 0.8005082592121983;
        result[4] += 0.16179584921643372;
        result[5] += 0.0014824227022448115;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0035496957403651115;
        result[2] += 0;
        result[3] += 0.1460446247464503;
        result[4] += 0.8504056795131846;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9812223858615612;
        result[1] += 0;
        result[2] += 0.005522827687776143;
        result[3] += 0.012150220913107513;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011045655375552285;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00039984006397441024;
        result[3] += 0.9996001599360256;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8070175438596491;
        result[4] += 0.19298245614035087;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3145186578864848;
        result[1] += 0.0037629350893697085;
        result[2] += 0.005017246785826278;
        result[3] += 0.605832549388523;
        result[4] += 0.07086861084979618;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4581673306772908;
        result[1] += 0;
        result[2] += 0.0398406374501992;
        result[3] += 0.50199203187251;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        result[0] += 0.12216083486801718;
        result[1] += 0.0006138735420503376;
        result[2] += 0;
        result[3] += 0.8710865561694291;
        result[4] += 0.003683241252302026;
        result[5] += 0.0024554941682013503;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.024965325936199722;
        result[3] += 0;
        result[4] += 0.9750346740638003;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991933005531654;
        result[1] += 0;
        result[2] += 0.000806699446834665;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6826153066396351;
        result[1] += 0.0016218955904713634;
        result[2] += 0.00466294982260517;
        result[3] += 0.3103902686264572;
        result[4] += 0;
        result[5] += 0.00020273694880892042;
        result[6] += 0.0005068423720223011;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.984690957649752;
        result[1] += 4.769172071728348e-05;
        result[2] += 0.0011922930179320869;
        result[3] += 0.014021365890881344;
        result[4] += 4.769172071728348e-05;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7134270687989697;
        result[1] += 0.0008049801438231191;
        result[2] += 0.004615219491252549;
        result[3] += 0.2669314156917463;
        result[4] += 0.013523666416228399;
        result[5] += 0.00021466137168616508;
        result[6] += 0.0004829880862938714;
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
        result[0] += 0.23924050632911392;
        result[1] += 0.010126582278481013;
        result[2] += 0;
        result[3] += 0.7506329113924051;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.10264900662251655;
        result[1] += 0.006622516556291391;
        result[2] += 0;
        result[3] += 0.6777041942604857;
        result[4] += 0.2130242825607064;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.009478672985781991;
        result[1] += 0;
        result[2] += 0.004739336492890996;
        result[3] += 0.16492890995260664;
        result[4] += 0.8208530805687204;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)32.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9941860465116279;
        result[1] += 0;
        result[2] += 0.00436046511627907;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014534883720930232;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996711067258675;
        result[1] += 0;
        result[2] += 0.000328893274132544;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.012810991459339028;
        result[1] += 0.0022279985146676567;
        result[2] += 0.0063126624582250275;
        result[3] += 0.6446342369105087;
        result[4] += 0.33327144448570367;
        result[5] += 0.0007426661715558856;
        result[6] += 0;
      } else {
        result[0] += 0.9795587685404462;
        result[1] += 0;
        result[2] += 0.006855291038264988;
        result[3] += 0.012214882213635796;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013710582076529975;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0;
        result[1] += 0.001349527665317139;
        result[2] += 0.005398110661268556;
        result[3] += 0.9932523616734144;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.012465373961218837;
        result[3] += 0;
        result[4] += 0.9861495844875346;
        result[5] += 0.0013850415512465374;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992755833460424;
        result[1] += 0;
        result[2] += 0.0007244166539576026;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5739693406756958;
        result[1] += 0.0014139008781068611;
        result[2] += 0.006325346033635958;
        result[3] += 0.39723173091233815;
        result[4] += 0.019571364786426553;
        result[5] += 0.0004464950141390088;
        result[6] += 0.001041821699657687;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-114.5) ) ) {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        result[0] += 0.13188976377952755;
        result[1] += 0.007217847769028871;
        result[2] += 0.005905511811023622;
        result[3] += 0.85498687664042;
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
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        result[0] += 0.9984450745449557;
        result[1] += 0;
        result[2] += 0.0013719930485685539;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018293240647580719;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7318930236984867;
        result[1] += 0.001427619682116684;
        result[2] += 0.00847054344722566;
        result[3] += 0.23165508708480062;
        result[4] += 0.025030931759779194;
        result[5] += 0.0005710478728466736;
        result[6] += 0.0009517464547444561;
      } else {
        result[0] += 0;
        result[1] += 0.0005434782608695652;
        result[2] += 0.00842391304347826;
        result[3] += 0.8051630434782608;
        result[4] += 0.1858695652173913;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.1836734693877551;
        result[1] += 0.008928571428571428;
        result[2] += 0.0031887755102040817;
        result[3] += 0.8042091836734694;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.07871720116618076;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8992086630570596;
        result[4] += 0.0212411495210329;
        result[5] += 0.0008329862557267805;
        result[6] += 0;
      } else {
        result[0] += 0.26811594202898553;
        result[1] += 0.0012077294685990338;
        result[2] += 0;
        result[3] += 0.6280193236714976;
        result[4] += 0.10265700483091787;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995509654243376;
        result[5] += 0.000449034575662326;
        result[6] += 0;
      } else {
        result[0] += 0.706766917293233;
        result[1] += 0.06015037593984962;
        result[2] += 0.23308270676691728;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.993103448275862;
        result[1] += 0;
        result[2] += 0.0049261083743842365;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019704433497536944;
      } else {
        result[0] += 0.9997878929283502;
        result[1] += 0;
        result[2] += 0.0002121070716497688;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.720029784065525;
        result[1] += 0.0010238272524199553;
        result[2] += 0.006329113924050633;
        result[3] += 0.27224497393894265;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00037230081906180194;
      } else {
        result[0] += 0.2513586956521739;
        result[1] += 0.005434782608695652;
        result[2] += 0.029891304347826088;
        result[3] += 0.7133152173913043;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9934426229508196;
        result[5] += 0.006557377049180328;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0;
        result[1] += 0.0031308703819661866;
        result[2] += 0.0031308703819661866;
        result[3] += 0.9927989981214778;
        result[4] += 0;
        result[5] += 0.000939261114589856;
        result[6] += 0;
      } else {
        result[0] += 0.9829842931937173;
        result[1] += 0;
        result[2] += 0.017015706806282723;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9990192536003717;
        result[1] += 5.161823155938678e-05;
        result[2] += 0.0007742734733908016;
        result[3] += 0.00010323646311877355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.161823155938678e-05;
      } else {
        result[0] += 0.86875;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.13125;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9633193705422847;
        result[1] += 0.0019246009283369185;
        result[2] += 0.004754896411185328;
        result[3] += 0.029774708479565266;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022642363862787276;
      } else {
        result[0] += 0.6275298707632284;
        result[1] += 0;
        result[2] += 0.005852231163130943;
        result[3] += 0.36576444769568395;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008534503779565958;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.29180602006688966;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1488294314381271;
        result[4] += 0.5593645484949833;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0004351610095735422;
        result[2] += 0.0073977371627502175;
        result[3] += 0.8694516971279374;
        result[4] += 0.11923411662315056;
        result[5] += 0.0034812880765883376;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9956460055770266;
        result[1] += 9.784257130277385e-05;
        result[2] += 0.0007827405704221908;
        result[3] += 0.0034734112812484716;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8057295784927925;
        result[1] += 0.0007907061614257041;
        result[2] += 0.004683413417675325;
        result[3] += 0.18812724286843868;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006690590596679035;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5483870967741935;
        result[1] += 0;
        result[2] += 0.006048387096774193;
        result[3] += 0.44556451612903225;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0031847133757961785;
        result[2] += 0;
        result[3] += 0.9968152866242038;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.012345679012345678;
        result[1] += 0.07407407407407407;
        result[2] += 0;
        result[3] += 0.9135802469135802;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.12662662662662666;
        result[1] += 0.005505505505505506;
        result[2] += 0;
        result[3] += 0.6301301301301302;
        result[4] += 0.23673673673673676;
        result[5] += 0.0010010010010010012;
        result[6] += 0;
      } else {
        result[0] += 0.13684489147697193;
        result[1] += 0.0005293806246691371;
        result[2] += 0.003440974060349391;
        result[3] += 0.509793541556379;
        result[4] += 0.3483324510322922;
        result[5] += 0.0010587612493382743;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9870758713995799;
        result[1] += 0.0005340549008438067;
        result[2] += 0.0022430305835439883;
        result[3] += 0.010075835795919821;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.120732011250757e-05;
      } else {
        result[0] += 0.7612456747404844;
        result[1] += 0;
        result[2] += 0.03806228373702422;
        result[3] += 0.20069204152249134;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0012113870381586917;
        result[1] += 0;
        result[2] += 0.0072683222289521504;
        result[3] += 0.7901271956390067;
        result[4] += 0.2013930950938825;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9889807162534435;
        result[4] += 0.005509641873278237;
        result[5] += 0.005509641873278237;
        result[6] += 0;
      } else {
        result[0] += 0.9929328621908127;
        result[1] += 0;
        result[2] += 0.006183745583038869;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008833922261484099;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14285714285714285;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0.0005018820577164366;
        result[2] += 0.0037641154328732747;
        result[3] += 0.7769134253450439;
        result[4] += 0.21681304893350062;
        result[5] += 0.0020075282308657464;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0072585147962032385;
        result[2] += 0;
        result[3] += 0.06923506420993858;
        result[4] += 0.9235064209938582;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6532137518684604;
        result[1] += 0.0029895366218236174;
        result[2] += 0.0029895366218236174;
        result[3] += 0.34080717488789236;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.995645651139815;
        result[1] += 0.0007684145047385562;
        result[2] += 0.001975923012184859;
        result[3] += 0.0013904643419078637;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002195470013538732;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.18855218855218855;
        result[1] += 0;
        result[2] += 0.00518000518000518;
        result[3] += 0.8062678062678063;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9933967760730239;
        result[1] += 0;
        result[2] += 0.0036900369003690036;
        result[3] += 0.0017479122159642648;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011652748106428432;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.09098327213382293;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8886168910648715;
        result[4] += 0.02039983680130559;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2692307692307692;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6221001221001221;
        result[4] += 0.10866910866910867;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995517705064993;
        result[5] += 0.00044822949350067237;
        result[6] += 0;
      } else {
        result[0] += 0.7194244604316546;
        result[1] += 0.08633093525179857;
        result[2] += 0.17266187050359713;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.02158273381294964;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        result[0] += 0.9993529183382943;
        result[1] += 0;
        result[2] += 0.0005823734955351365;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.470816617057073e-05;
      } else {
        result[0] += 0.9999001896396846;
        result[1] += 0;
        result[2] += 9.981036031540073e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5374283374283375;
        result[1] += 0.0024570024570024574;
        result[2] += 0.003767403767403768;
        result[3] += 0.45569205569205573;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006552006552006553;
      } else {
        result[0] += 0.8608822991030569;
        result[1] += 0.0007321984257733846;
        result[2] += 0.011898224418817499;
        result[3] += 0.12502288120080543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014643968515467693;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9972551285755562;
        result[1] += 0;
        result[2] += 0.0004334007512279688;
        result[3] += 0.0021188481171145143;
        result[4] += 0.0001444669170759896;
        result[5] += 0;
        result[6] += 4.8155639025329867e-05;
      } else {
        result[0] += 0.014909478168264111;
        result[1] += 0.002129925452609159;
        result[2] += 0.014909478168264111;
        result[3] += 0.27050053248136313;
        result[4] += 0.6964856230031949;
        result[5] += 0.0010649627263045794;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.34726166328600405;
        result[1] += 0.002028397565922921;
        result[2] += 0.011494252873563218;
        result[3] += 0.5998647734956052;
        result[4] += 0.03772819472616633;
        result[5] += 0.0008113590263691683;
        result[6] += 0.0008113590263691683;
      } else {
        result[0] += 0.9444444444444444;
        result[1] += 0;
        result[2] += 0.0019400352733686067;
        result[3] += 0.05335097001763668;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00026455026455026457;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5890688259109311;
        result[1] += 0;
        result[2] += 0.020242914979757085;
        result[3] += 0.39068825910931176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0011376564277588168;
        result[1] += 0.006825938566552901;
        result[2] += 0;
        result[3] += 0.9920364050056882;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.011428571428571429;
        result[1] += 0.05142857142857143;
        result[2] += 0;
        result[3] += 0.9371428571428572;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.14610244988864143;
        result[1] += 0.0031180400890868597;
        result[2] += 0;
        result[3] += 0.6089086859688196;
        result[4] += 0.24097995545657017;
        result[5] += 0.0008908685968819599;
        result[6] += 0;
      } else {
        result[0] += 0.9952885747938751;
        result[1] += 0;
        result[2] += 0.00128493414712496;
        result[3] += 0.003426491058999893;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.30722559293987867;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6927744070601214;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8148443735035914;
        result[1] += 0;
        result[2] += 0.035913806863527534;
        result[3] += 0;
        result[4] += 0.14365522745411013;
        result[5] += 0.0007980845969672786;
        result[6] += 0.004788507581803671;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
        result[0] += 0.142296918767507;
        result[1] += 0.0005602240896358543;
        result[2] += 0.002240896358543417;
        result[3] += 0.48627450980392156;
        result[4] += 0.3677871148459384;
        result[5] += 0.0008403361344537816;
        result[6] += 0;
      } else {
        result[0] += 0.988337416125253;
        result[1] += 0.0016508680370646504;
        result[2] += 0.0026094365747150925;
        result[3] += 0.007349025455320056;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.325380764724678e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.6952554744525548;
        result[1] += 0;
        result[2] += 0.004147312541473125;
        result[3] += 0.2996018579960186;
        result[4] += 0.0008294625082946251;
        result[5] += 0;
        result[6] += 0.00016589250165892502;
      } else {
        result[0] += 0.004219409282700422;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9957805907172996;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
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
        result[0] += 0.9989964373526017;
        result[1] += 0;
        result[2] += 0.0009533845150283506;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.0178132369913194e-05;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7132346423189434;
        result[1] += 0.001152380108146441;
        result[2] += 0.00780072688591437;
        result[3] += 0.27648258133144227;
        result[4] += 0.0004432231185178619;
        result[5] += 0.00017728924740714476;
        result[6] += 0.000709156989628579;
      } else {
        result[0] += 0;
        result[1] += 0.0008163265306122449;
        result[2] += 0.008435374149659863;
        result[3] += 0.8239455782312926;
        result[4] += 0.16653061224489796;
        result[5] += 0.00027210884353741496;
        result[6] += 0;
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
        result[0] += 0.009433962264150943;
        result[1] += 0.014150943396226415;
        result[2] += 0;
        result[3] += 0.9764150943396226;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
        result[0] += 0.9995467319372677;
        result[1] += 0;
        result[2] += 0.0004079412564590699;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.532680627322999e-05;
      } else {
        result[0] += 0.9983333333333333;
        result[1] += 0;
        result[2] += 0.0016666666666666668;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        result[0] += 0.3009977827050998;
        result[1] += 0.004434589800443459;
        result[2] += 0.0066518847006651885;
        result[3] += 0.6396895787139689;
        result[4] += 0.048226164079822616;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7046921332635617;
        result[1] += 0.002616431187859759;
        result[2] += 0.003488574917146345;
        result[3] += 0.2872841444270015;
        result[4] += 0.000697714983429269;
        result[5] += 0.000697714983429269;
        result[6] += 0.0005232862375719518;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.5407586763518968;
        result[1] += 0.0014527845036319614;
        result[2] += 0.009846650524616628;
        result[3] += 0.16723163841807911;
        result[4] += 0.2779661016949153;
        result[5] += 0.0004842615012106538;
        result[6] += 0.002259887005649718;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007988587731811698;
        result[3] += 0.8125534950071327;
        result[4] += 0.17945791726105564;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9962825278810409;
        result[5] += 0.0037174721189591076;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0030845157310302285;
        result[2] += 0.005860579888957434;
        result[3] += 0.9901295496607033;
        result[4] += 0;
        result[5] += 0.0009253547193090684;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9930426716141002;
        result[1] += 0;
        result[2] += 0.006493506493506494;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00046382189239332097;
      } else {
        result[0] += 0.999616678734188;
        result[1] += 0;
        result[2] += 0.00038332126581200224;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.7101358035794586;
        result[1] += 0.001349042180052163;
        result[2] += 0.008993614533681086;
        result[3] += 0.2788919866894505;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006295530173576761;
      } else {
        result[0] += 0.002976190476190476;
        result[1] += 0.011904761904761904;
        result[2] += 0;
        result[3] += 0.9851190476190477;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
        result[0] += 0.43319097010372176;
        result[1] += 0;
        result[2] += 0.020744356314826115;
        result[3] += 0.546064673581452;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12684365781710916;
        result[1] += 0.01032448377581121;
        result[2] += 0;
        result[3] += 0.8628318584070797;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        result[0] += 0.11567821491485615;
        result[1] += 0.0005871990604815033;
        result[2] += 0;
        result[3] += 0.8772753963593659;
        result[4] += 0.0023487962419260133;
        result[5] += 0.004110393423370523;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.020023557126030624;
        result[3] += 0;
        result[4] += 0.9776207302709069;
        result[5] += 0.002355712603062426;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8894960039145327;
        result[1] += 0;
        result[2] += 0.003751427173381178;
        result[3] += 0.10650791061816996;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00024465829391616373;
      } else {
        result[0] += 0.9228699180259998;
        result[1] += 0.0005382131324004305;
        result[2] += 0.0012420303055394552;
        result[3] += 0.0750186304545831;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00033120808147718805;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.9606097027972028;
        result[1] += 0;
        result[2] += 0.0007648601398601399;
        result[3] += 0.014259178321678322;
        result[4] += 0.024311625874125876;
        result[5] += 5.463286713286713e-05;
        result[6] += 0;
      } else {
        result[0] += 0.927641099855282;
        result[1] += 0;
        result[2] += 0.00028943560057887114;
        result[3] += 0.008104196816208392;
        result[4] += 0.06338639652677278;
        result[5] += 0;
        result[6] += 0.0005788712011577423;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.3482674607471576;
        result[1] += 0.001353546291283162;
        result[2] += 0.00893340552246887;
        result[3] += 0.5996210070384408;
        result[4] += 0.04074174336762318;
        result[5] += 0.0008121277747698973;
        result[6] += 0.00027070925825663244;
      } else {
        result[0] += 0.9434313031161473;
        result[1] += 0;
        result[2] += 0.003098441926345609;
        result[3] += 0.05302762039660057;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004426345609065156;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
        result[0] += 0.14370748299319727;
        result[1] += 0.004251700680272109;
        result[2] += 0;
        result[3] += 0.8520408163265306;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.028985507246376812;
        result[2] += 0;
        result[3] += 0.0036231884057971015;
        result[4] += 0.967391304347826;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)16) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.256198347107438;
        result[1] += 0;
        result[2] += 0.04132231404958678;
        result[3] += 0.7024793388429752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)29) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0002942907592701589;
        result[2] += 0;
        result[3] += 0.9299587992937022;
        result[4] += 0.06886403766921718;
        result[5] += 0.0008828722778104767;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9986486486486487;
        result[5] += 0.0013513513513513514;
        result[6] += 0;
      } else {
        result[0] += 0.7153284671532847;
        result[1] += 0.058394160583941604;
        result[2] += 0.2116788321167883;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.014598540145985401;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9991770676176108;
        result[1] += 0.00013715539706487452;
        result[2] += 0.0006171992867919354;
        result[3] += 6.857769853243726e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9829255412779441;
        result[1] += 0;
        result[2] += 0.0008801267382503081;
        result[3] += 0.016194331983805668;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5443899782135078;
        result[1] += 0.002450980392156863;
        result[2] += 0.007761437908496733;
        result[3] += 0.4447167755991286;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006808278867102398;
      } else {
        result[0] += 0.9859243697478992;
        result[1] += 0;
        result[2] += 0.004096638655462185;
        result[3] += 0.009453781512605041;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005252100840336134;
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
        result[0] += 0.007918025151374011;
        result[1] += 0.007452258965999069;
        result[2] += 0.007918025151374011;
        result[3] += 0.9767116907312529;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9866666666666667;
        result[1] += 0;
        result[2] += 0.013333333333333334;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998769987699877;
        result[5] += 0.0012300123001230013;
        result[6] += 0;
      } else {
        result[0] += 0.12196566015393724;
        result[1] += 0.0005920663114268798;
        result[2] += 0.013617525162818236;
        result[3] += 0.8584961515689757;
        result[4] += 0;
        result[5] += 0.0053285968028419185;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9927830239488709;
        result[1] += 0.0006462963627876918;
        result[2] += 0.0016516462604574344;
        result[3] += 0.004847222720907689;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.18107069764102e-05;
      } else {
        result[0] += 0.6442386590083227;
        result[1] += 0;
        result[2] += 0.004688782088852422;
        result[3] += 0.3496659242761693;
        result[4] += 0;
        result[5] += 0.00011721955222131053;
        result[6] += 0.0012894150744344158;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.13428792569659442;
        result[1] += 0.0007739938080495357;
        result[2] += 0;
        result[3] += 0.8614551083591331;
        result[4] += 0.0023219814241486067;
        result[5] += 0.0011609907120743034;
        result[6] += 0;
      } else {
        result[0] += 0.0010224948875255625;
        result[1] += 0;
        result[2] += 0.028629856850715747;
        result[3] += 0;
        result[4] += 0.9683026584867076;
        result[5] += 0.002044989775051125;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9916058265439284;
        result[1] += 0.0003879660000705393;
        result[2] += 0.0019045603639826474;
        result[3] += 0.005960568546538285;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001410785454801961;
      } else {
        result[0] += 0.6488250652741514;
        result[1] += 0;
        result[2] += 0.002729646332779492;
        result[3] += 0.34749584619036317;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009494422027059103;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0.25034965034965034;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7146853146853147;
        result[4] += 0.03496503496503497;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.006493506493506494;
        result[1] += 0.008658008658008658;
        result[2] += 0;
        result[3] += 0.11038961038961038;
        result[4] += 0.8744588744588745;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.09316037735849056;
        result[1] += 0.012971698113207548;
        result[2] += 0;
        result[3] += 0.6757075471698113;
        result[4] += 0.21816037735849056;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.014991181657848324;
        result[1] += 0;
        result[2] += 0.012345679012345678;
        result[3] += 0.15432098765432098;
        result[4] += 0.818342151675485;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005964730290456431;
        result[3] += 0.8005705394190872;
        result[4] += 0.19216804979253113;
        result[5] += 0.0012966804979253112;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0060773480662983425;
        result[2] += 0;
        result[3] += 0.054696132596685085;
        result[4] += 0.9392265193370166;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9603960396039604;
        result[1] += 0.039603960396039604;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9967498465205301;
        result[1] += 0.0007944819616481889;
        result[2] += 0.0022389946191903507;
        result[3] += 3.611281643855404e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018056408219277022;
      } else {
        result[0] += 0.6392905558065973;
        result[1] += 0;
        result[2] += 0.006778129236330773;
        result[3] += 0.35325350203343875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006778129236330773;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += 0.9820971867007673;
        result[1] += 0;
        result[2] += 0.017902813299232736;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05578011317704123;
        result[1] += 0.00889248181083266;
        result[2] += 0.0008084074373484236;
        result[3] += 0.6103476151980598;
        result[4] += 0.3241713823767179;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9241198338071289;
        result[1] += 0;
        result[2] += 0.00032801224579050956;
        result[3] += 0.07533347911655369;
        result[4] += 0;
        result[5] += 0.00021867483052700638;
        result[6] += 0;
      } else {
        result[0] += 0.5222701149425287;
        result[1] += 0;
        result[2] += 0.011135057471264368;
        result[3] += 0.4026580459770115;
        result[4] += 0.059985632183908046;
        result[5] += 0.002514367816091954;
        result[6] += 0.0014367816091954023;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9182879377431907;
        result[1] += 0.0007874745228830833;
        result[2] += 0.00236242356864925;
        result[3] += 0.0690661478599222;
        result[4] += 0.009218084120807858;
        result[5] += 9.264406151565686e-05;
        result[6] += 0.0001852881230313137;
      } else {
        result[0] += 0.6287620229599752;
        result[1] += 0;
        result[2] += 0.001861619609059882;
        result[3] += 0.2851380701210053;
        result[4] += 0.08423828730995966;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.14898688915375446;
        result[1] += 0.015494636471990465;
        result[2] += 0.011918951132300357;
        result[3] += 0.8235995232419547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.007881773399014778;
        result[1] += 0.005911330049261084;
        result[2] += 0.008866995073891626;
        result[3] += 0.9773399014778326;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9935828877005347;
        result[1] += 0;
        result[2] += 0.006417112299465241;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.092041147807255;
        result[1] += 0.0005414185165132648;
        result[2] += 0.005414185165132647;
        result[3] += 0.8186247969680563;
        result[4] += 0.08175419599350298;
        result[5] += 0.0016242555495397943;
        result[6] += 0;
      } else {
        result[0] += 0.9914884408699102;
        result[1] += 0.0005770548562772749;
        result[2] += 0.0018393623543838135;
        result[3] += 0.005878746348324738;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021639557110397808;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.3789173789173789;
        result[1] += 0;
        result[2] += 0.005887939221272555;
        result[3] += 0.4856600189933523;
        result[4] += 0.1295346628679962;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9021819073302281;
        result[1] += 0;
        result[2] += 0.0058837950478058355;
        result[3] += 0.08654081882814417;
        result[4] += 0.0031870556508948275;
        result[5] += 0.0007354743809757294;
        result[6] += 0.0014709487619514589;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9983516483516484;
        result[1] += 0;
        result[2] += 0.0014652014652014652;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018315018315018315;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-305.5) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0022962112514351325;
        result[2] += 0;
        result[3] += 0.21699196326062;
        result[4] += 0.7795637198622274;
        result[5] += 0.0011481056257175663;
        result[6] += 0;
      } else {
        result[0] += 0.5608997029282784;
        result[1] += 0.001343895883434715;
        result[2] += 0.007426793040033951;
        result[3] += 0.4282783986419578;
        result[4] += 0.0004243881737162258;
        result[5] += 0.000778044985146414;
        result[6] += 0.0008487763474324516;
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
        result[0] += 0.0049261083743842365;
        result[1] += 0.03940886699507389;
        result[2] += 0;
        result[3] += 0.9556650246305419;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994082840236687;
        result[5] += 0.000591715976331361;
        result[6] += 0;
      } else {
        result[0] += 0.1842105263157895;
        result[1] += 0.0033214103219213085;
        result[2] += 0.0033214103219213085;
        result[3] += 0.8076136944302504;
        result[4] += 0;
        result[5] += 0.001532958610117527;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9866391135497203;
        result[1] += 0.0007125806106815833;
        result[2] += 0.0022802579541810666;
        result[3] += 0.010154273702212563;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021377418320447502;
      } else {
        result[0] += 0.7744107744107744;
        result[1] += 0;
        result[2] += 0.026936026936026935;
        result[3] += 0.19865319865319866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.8423236514522822;
        result[1] += 0;
        result[2] += 0.008298755186721992;
        result[3] += 0.14409656733308185;
        result[4] += 0.0015088645794039985;
        result[5] += 0.001131648434552999;
        result[6] += 0.002640513013956997;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007062978222483814;
        result[3] += 0.7954679223072395;
        result[4] += 0.19746909947027663;
        result[5] += 0;
        result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_1/test_data.csv", "r");
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
