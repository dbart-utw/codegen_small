
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
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74) ) ) {
          result[0] += 0.0036900369003690036;
          result[1] += 0.0036900369003690036;
          result[2] += 0.007380073800738007;
          result[3] += 0;
          result[4] += 0.9704797047970479;
          result[5] += 0.014760147601476014;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)86.5) ) ) {
          result[0] += 0.02971311475409836;
          result[1] += 0.0020491803278688526;
          result[2] += 0;
          result[3] += 0.0430327868852459;
          result[4] += 0.0584016393442623;
          result[5] += 0.8668032786885246;
        } else {
          result[0] += 0.05263157894736842;
          result[1] += 0.01662049861495845;
          result[2] += 0;
          result[3] += 0.4404432132963989;
          result[4] += 0.04986149584487535;
          result[5] += 0.4404432132963989;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0.35344827586206895;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6206896551724138;
          result[5] += 0.02586206896551724;
        } else {
          result[0] += 0;
          result[1] += 0.9954954954954955;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0045045045045045045;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
          result[0] += 0.8426229508196722;
          result[1] += 0.020491803278688527;
          result[2] += 0.0016393442622950822;
          result[3] += 0.037704918032786895;
          result[4] += 0.06967213114754099;
          result[5] += 0.027868852459016397;
        } else {
          result[0] += 0.13819095477386933;
          result[1] += 0.03015075376884422;
          result[2] += 0.2864321608040201;
          result[3] += 0.2889447236180904;
          result[4] += 0.05025125628140704;
          result[5] += 0.20603015075376885;
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)74.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.05555555555555555;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.9444444444444444;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.20930232558139536;
          result[3] += 0.5697674418604651;
          result[4] += 0;
          result[5] += 0.22093023255813954;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
          result[0] += 0.024390243902439025;
          result[1] += 0;
          result[2] += 0.43902439024390244;
          result[3] += 0.3902439024390244;
          result[4] += 0;
          result[5] += 0.14634146341463414;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9333333333333333;
          result[3] += 0.016666666666666666;
          result[4] += 0;
          result[5] += 0.05;
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5352112676056339;
          result[3] += 0.3661971830985916;
          result[4] += 0.014084507042253523;
          result[5] += 0.08450704225352114;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9019607843137255;
          result[3] += 0.09803921568627451;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)83.5) ) ) {
          result[0] += 0.5;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.00847457627118644;
          result[1] += 0;
          result[2] += 0.940677966101695;
          result[3] += 0.04096045197740113;
          result[4] += 0.002824858757062147;
          result[5] += 0.007062146892655367;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)77) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)91) ) ) {
          result[0] += 0.007246376811594204;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.007246376811594204;
          result[4] += 0.9420289855072465;
          result[5] += 0.04347826086956522;
        } else {
          result[0] += 0;
          result[1] += 0.4666666666666667;
          result[2] += 0.06666666666666667;
          result[3] += 0.2;
          result[4] += 0.26666666666666666;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)66.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001336898395721925;
          result[3] += 0.03074866310160428;
          result[4] += 0.0427807486631016;
          result[5] += 0.9251336898395722;
        } else {
          result[0] += 0.09050772626931568;
          result[1] += 0.033112582781456956;
          result[2] += 0.05739514348785872;
          result[3] += 0.2803532008830022;
          result[4] += 0.07505518763796909;
          result[5] += 0.46357615894039733;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)67.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)97) ) ) {
          result[0] += 0.03278688524590164;
          result[1] += 0.19672131147540983;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7540983606557377;
          result[5] += 0.01639344262295082;
        } else {
          result[0] += 0;
          result[1] += 0.9786223277909739;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.021377672209026127;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8533094812164578;
          result[1] += 0.02325581395348837;
          result[2] += 0;
          result[3] += 0.021466905187835415;
          result[4] += 0.0697674418604651;
          result[5] += 0.032200357781753126;
        } else {
          result[0] += 0.3099173553719009;
          result[1] += 0.03305785123966943;
          result[2] += 0.16528925619834714;
          result[3] += 0.28099173553719015;
          result[4] += 0.06611570247933886;
          result[5] += 0.14462809917355374;
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)86) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)65) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6;
          result[5] += 0.4;
        } else {
          result[0] += 0;
          result[1] += 0.015625;
          result[2] += 0.046875;
          result[3] += 0.09375;
          result[4] += 0;
          result[5] += 0.84375;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14110429447852763;
          result[3] += 0.6625766871165645;
          result[4] += 0.0245398773006135;
          result[5] += 0.1717791411042945;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6616541353383458;
          result[3] += 0.2556390977443609;
          result[4] += 0;
          result[5] += 0.08270676691729323;
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.13333333333333333;
          result[3] += 0;
          result[4] += 0.13333333333333333;
          result[5] += 0.7333333333333333;
        } else {
          result[0] += 0.03225806451612903;
          result[1] += 0.04838709677419355;
          result[2] += 0.46774193548387094;
          result[3] += 0.27419354838709675;
          result[4] += 0.08064516129032258;
          result[5] += 0.0967741935483871;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
          result[0] += 0.3;
          result[1] += 0.3;
          result[2] += 0.2;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
        } else {
          result[0] += 0.0033407572383073497;
          result[1] += 0;
          result[2] += 0.9398663697104677;
          result[3] += 0.051224944320712694;
          result[4] += 0.0033407572383073497;
          result[5] += 0.0022271714922048997;
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)102.5) ) ) {
          result[0] += 0.00790513833992095;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9683794466403163;
          result[5] += 0.023715415019762848;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)66.5) ) ) {
          result[0] += 0.002600780234070221;
          result[1] += 0.005201560468140442;
          result[2] += 0;
          result[3] += 0.0247074122236671;
          result[4] += 0.036410923276983094;
          result[5] += 0.9310793237971391;
        } else {
          result[0] += 0.10427350427350428;
          result[1] += 0.006837606837606838;
          result[2] += 0;
          result[3] += 0.3572649572649573;
          result[4] += 0.07179487179487179;
          result[5] += 0.4598290598290598;
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
          result[0] += 0;
          result[1] += 0.25;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.75;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.997624703087886;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0023752969121140144;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)73) ) ) {
          result[0] += 0.7876769358867611;
          result[1] += 0.036636136552872615;
          result[2] += 0;
          result[3] += 0.024146544546211495;
          result[4] += 0.13155703580349712;
          result[5] += 0.01998334721065779;
        } else {
          result[0] += 0.13948497854077252;
          result[1] += 0.03648068669527897;
          result[2] += 0.2854077253218884;
          result[3] += 0.26394849785407726;
          result[4] += 0.09227467811158799;
          result[5] += 0.18240343347639484;
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)89.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.18867924528301888;
          result[4] += 0.1320754716981132;
          result[5] += 0.6792452830188679;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.3953488372093023;
          result[3] += 0.46511627906976744;
          result[4] += 0;
          result[5] += 0.13953488372093023;
        }
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)97.5) ) ) {
        if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)60) ) ) {
          result[0] += 0;
          result[1] += 0.9444444444444444;
          result[2] += 0;
          result[3] += 0.05555555555555555;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0.08176100628930819;
          result[1] += 0;
          result[2] += 0.679245283018868;
          result[3] += 0.169811320754717;
          result[4] += 0;
          result[5] += 0.06918238993710693;
        }
      } else {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
          result[0] += 0.004310344827586207;
          result[1] += 0;
          result[2] += 0.8491379310344828;
          result[3] += 0.1206896551724138;
          result[4] += 0;
          result[5] += 0.02586206896551724;
        } else {
          result[0] += 0.003389830508474576;
          result[1] += 0;
          result[2] += 0.9779661016949153;
          result[3] += 0.01864406779661017;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0.003875968992248062;
          result[2] += 0;
          result[3] += 0.011627906976744186;
          result[4] += 0.9302325581395349;
          result[5] += 0.05426356589147287;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0.0012836970474967907;
          result[1] += 0;
          result[2] += 0.0025673940949935813;
          result[3] += 0.028241335044929396;
          result[4] += 0.037227214377406934;
          result[5] += 0.9306803594351734;
        } else {
          result[0] += 0.08687258687258688;
          result[1] += 0.032818532818532815;
          result[2] += 0.005791505791505791;
          result[3] += 0.38223938223938225;
          result[4] += 0.11776061776061776;
          result[5] += 0.3745173745173745;
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)95) ) ) {
          result[0] += 0.011494252873563218;
          result[1] += 0.25287356321839083;
          result[2] += 0;
          result[3] += 0.022988505747126436;
          result[4] += 0.7011494252873564;
          result[5] += 0.011494252873563218;
        } else {
          result[0] += 0.0022988505747126436;
          result[1] += 0.9954022988505747;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.0022988505747126436;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8069748580697486;
          result[1] += 0.040551500405515;
          result[2] += 0.0016220600162206002;
          result[3] += 0.017842660178426603;
          result[4] += 0.09002433090024331;
          result[5] += 0.042984590429845905;
        } else {
          result[0] += 0.185031185031185;
          result[1] += 0.012474012474012471;
          result[2] += 0.30769230769230765;
          result[3] += 0.27027027027027023;
          result[4] += 0.01871101871101871;
          result[5] += 0.20582120582120578;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)70.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.04;
          result[5] += 0.96;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11627906976744186;
          result[3] += 0.6976744186046512;
          result[4] += 0;
          result[5] += 0.18604651162790697;
        }
      } else {
        if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)82.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.65;
          result[5] += 0.35;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5925925925925926;
          result[3] += 0.1111111111111111;
          result[4] += 0.1111111111111111;
          result[5] += 0.18518518518518517;
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0.075;
          result[2] += 0.45;
          result[3] += 0.45;
          result[4] += 0;
          result[5] += 0.025;
        } else {
          result[0] += 0.23076923076923078;
          result[1] += 0;
          result[2] += 0.07692307692307693;
          result[3] += 0.07692307692307693;
          result[4] += 0;
          result[5] += 0.6153846153846154;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.7851239669421488;
          result[3] += 0.17355371900826447;
          result[4] += 0;
          result[5] += 0.04132231404958678;
        } else {
          result[0] += 0.0013605442176870747;
          result[1] += 0;
          result[2] += 0.9551020408163265;
          result[3] += 0.03945578231292517;
          result[4] += 0;
          result[5] += 0.004081632653061225;
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)83.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)80.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.4;
          result[4] += 0.2;
          result[5] += 0;
        }
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
          result[0] += 0.01;
          result[1] += 0.006666666666666667;
          result[2] += 0;
          result[3] += 0.0033333333333333335;
          result[4] += 0.95;
          result[5] += 0.03;
        } else {
          result[0] += 0.055933484504913075;
          result[1] += 0.003779289493575208;
          result[2] += 0.0015117157974300832;
          result[3] += 0.1670445956160242;
          result[4] += 0.06878306878306878;
          result[5] += 0.7029478458049887;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.7728731942215089;
          result[1] += 0.06741573033707866;
          result[2] += 0.003210272873194222;
          result[3] += 0.01845906902086678;
          result[4] += 0.12600321027287323;
          result[5] += 0.012038523274478333;
        } else {
          result[0] += 0.1569620253164557;
          result[1] += 0;
          result[2] += 0.2911392405063291;
          result[3] += 0.2683544303797468;
          result[4] += 0.04810126582278481;
          result[5] += 0.23544303797468355;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)88.5) ) ) {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15217391304347827;
          result[3] += 0.021739130434782608;
          result[4] += 0.043478260869565216;
          result[5] += 0.782608695652174;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)73) ) ) {
          result[0] += 0.11428571428571428;
          result[1] += 0.37142857142857144;
          result[2] += 0.11428571428571428;
          result[3] += 0.05714285714285714;
          result[4] += 0.2;
          result[5] += 0.14285714285714285;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.18;
          result[3] += 0.64;
          result[4] += 0;
          result[5] += 0.18;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)97.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2592592592592593;
          result[3] += 0.6666666666666667;
          result[4] += 0;
          result[5] += 0.07407407407407408;
        } else {
          result[0] += 0.030508474576271188;
          result[1] += 0;
          result[2] += 0.7593220338983051;
          result[3] += 0.17966101694915254;
          result[4] += 0.006779661016949152;
          result[5] += 0.023728813559322035;
        }
      } else {
        if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)109.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9120370370370371;
          result[3] += 0.08796296296296297;
          result[4] += 0;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9932584269662922;
          result[3] += 0.0044943820224719105;
          result[4] += 0;
          result[5] += 0.0022471910112359553;
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0.16487455197132614;
          result[1] += 0.007168458781362005;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7813620071684586;
          result[5] += 0.04659498207885304;
        } else {
          result[0] += 0.04;
          result[1] += 0.08;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0.68;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
          result[0] += 0;
          result[1] += 0.013447432762836185;
          result[2] += 0;
          result[3] += 0.03178484107579462;
          result[4] += 0.0647921760391198;
          result[5] += 0.8899755501222494;
        } else {
          result[0] += 0.005797101449275362;
          result[1] += 0;
          result[2] += 0.034782608695652174;
          result[3] += 0.5449275362318841;
          result[4] += 0.002898550724637681;
          result[5] += 0.4115942028985507;
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)50) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
          result[0] += 0;
          result[1] += 0.47058823529411764;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5294117647058824;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.7451994091580503;
          result[1] += 0.026587887740029542;
          result[2] += 0.0066469719350073855;
          result[3] += 0.024372230428360415;
          result[4] += 0.15731166912850814;
          result[5] += 0.03988183161004431;
        } else {
          result[0] += 0.12176165803108809;
          result[1] += 0.025906735751295335;
          result[2] += 0.2694300518134715;
          result[3] += 0.3005181347150259;
          result[4] += 0.06217616580310881;
          result[5] += 0.22020725388601037;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)89.5) ) ) {
          result[0] += 0.05263157894736842;
          result[1] += 0.18421052631578946;
          result[2] += 0;
          result[3] += 0.02631578947368421;
          result[4] += 0.18421052631578946;
          result[5] += 0.5526315789473685;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.17543859649122806;
          result[3] += 0.5263157894736842;
          result[4] += 0;
          result[5] += 0.2982456140350877;
        }
      } else {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)122.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.75;
          result[3] += 0.1111111111111111;
          result[4] += 0;
          result[5] += 0.1388888888888889;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)104.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5656565656565656;
          result[3] += 0.40404040404040403;
          result[4] += 0;
          result[5] += 0.030303030303030304;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8888888888888888;
          result[3] += 0.0707070707070707;
          result[4] += 0;
          result[5] += 0.04040404040404041;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
          result[0] += 0.15853658536585366;
          result[1] += 0;
          result[2] += 0.6951219512195121;
          result[3] += 0.10975609756097561;
          result[4] += 0;
          result[5] += 0.036585365853658534;
        } else {
          result[0] += 0.0027624309392265192;
          result[1] += 0;
          result[2] += 0.9613259668508287;
          result[3] += 0.03038674033149171;
          result[4] += 0;
          result[5] += 0.0055248618784530384;
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)69.5) ) ) {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
          result[0] += 0.030303030303030304;
          result[1] += 0.005050505050505051;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9242424242424242;
          result[5] += 0.04040404040404041;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1272727272727273;
          result[4] += 0.5090909090909091;
          result[5] += 0.3636363636363637;
        }
      } else {
        if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)54) ) ) {
          result[0] += 0.8507462686567164;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.14925373134328357;
          result[5] += 0;
        } else {
          result[0] += 0.07407407407407408;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.03703703703703704;
          result[4] += 0.8703703703703705;
          result[5] += 0.01851851851851852;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)84.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
          result[0] += 0;
          result[1] += 0.08333333333333333;
          result[2] += 0;
          result[3] += 0.1;
          result[4] += 0.48333333333333334;
          result[5] += 0.3333333333333333;
        } else {
          result[0] += 0.0010362694300518134;
          result[1] += 0.0031088082901554403;
          result[2] += 0;
          result[3] += 0.05284974093264249;
          result[4] += 0.03419689119170984;
          result[5] += 0.9088082901554404;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05128205128205128;
          result[4] += 0.02564102564102564;
          result[5] += 0.9230769230769231;
        } else {
          result[0] += 0;
          result[1] += 0.004347826086956522;
          result[2] += 0.004347826086956522;
          result[3] += 0.6652173913043479;
          result[4] += 0.004347826086956522;
          result[5] += 0.3217391304347826;
        }
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)70.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)90.5) ) ) {
          result[0] += 0.15384615384615385;
          result[1] += 0.18803418803418803;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6581196581196581;
          result[5] += 0;
        } else {
          result[0] += 0.004705882352941176;
          result[1] += 0.971764705882353;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.023529411764705882;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
          result[0] += 0.8970448045757863;
          result[1] += 0.02955195424213536;
          result[2] += 0;
          result[3] += 0.01239275500476644;
          result[4] += 0.054337464251668244;
          result[5] += 0.0066730219256434685;
        } else {
          result[0] += 0.32903225806451614;
          result[1] += 0.03225806451612903;
          result[2] += 0.1870967741935484;
          result[3] += 0.1935483870967742;
          result[4] += 0.0967741935483871;
          result[5] += 0.16129032258064516;
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)82.5) ) ) {
        if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)85.5) ) ) {
          result[0] += 0.019230769230769232;
          result[1] += 0.04807692307692308;
          result[2] += 0.28846153846153844;
          result[3] += 0.3814102564102564;
          result[4] += 0.04807692307692308;
          result[5] += 0.21474358974358973;
        } else {
          result[0] += 0.42038216560509556;
          result[1] += 0.03821656050955414;
          result[2] += 0.40764331210191085;
          result[3] += 0.03821656050955414;
          result[4] += 0.07006369426751592;
          result[5] += 0.025477707006369428;
        }
      } else {
        if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.49333333333333335;
          result[3] += 0.32;
          result[4] += 0;
          result[5] += 0.18666666666666668;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9331797235023042;
          result[3] += 0.05069124423963134;
          result[4] += 0.001152073732718894;
          result[5] += 0.014976958525345621;
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
          result[0] += 0.006600660066006601;
          result[1] += 0.0924092409240924;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8877887788778878;
          result[5] += 0.013201320132013201;
        } else {
          result[0] += 0.38235294117647056;
          result[1] += 0.00980392156862745;
          result[2] += 0;
          result[3] += 0.14705882352941177;
          result[4] += 0.14705882352941177;
          result[5] += 0.3137254901960784;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.022397891963109356;
          result[4] += 0.03293807641633729;
          result[5] += 0.9446640316205533;
        } else {
          result[0] += 0.008421052631578947;
          result[1] += 0.002105263157894737;
          result[2] += 0.002105263157894737;
          result[3] += 0.3831578947368421;
          result[4] += 0.12210526315789473;
          result[5] += 0.48210526315789476;
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.9954233409610984;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.004576659038901602;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)73) ) ) {
          result[0] += 0.7855946398659968;
          result[1] += 0.040201005025125636;
          result[2] += 0;
          result[3] += 0.015075376884422112;
          result[4] += 0.13819095477386936;
          result[5] += 0.02093802345058627;
        } else {
          result[0] += 0.17484008528784648;
          result[1] += 0.0042643923240938165;
          result[2] += 0.23880597014925373;
          result[3] += 0.2942430703624733;
          result[4] += 0.021321961620469083;
          result[5] += 0.26652452025586354;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)77) ) ) {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
          result[0] += 0;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
          result[0] += 0.03571428571428571;
          result[1] += 0.17857142857142858;
          result[2] += 0.21428571428571427;
          result[3] += 0.10714285714285714;
          result[4] += 0.14285714285714285;
          result[5] += 0.32142857142857145;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
          result[0] += 0.01775147928994083;
          result[1] += 0;
          result[2] += 0.5266272189349113;
          result[3] += 0.39644970414201186;
          result[4] += 0;
          result[5] += 0.05917159763313609;
        } else {
          result[0] += 0.020512820512820513;
          result[1] += 0;
          result[2] += 0.8102564102564103;
          result[3] += 0.15384615384615385;
          result[4] += 0;
          result[5] += 0.015384615384615385;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8555555555555556;
          result[3] += 0.11111111111111112;
          result[4] += 0;
          result[5] += 0.03333333333333334;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9798903107861061;
          result[3] += 0.01828153564899452;
          result[4] += 0;
          result[5] += 0.0018281535648994518;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)59.5) ) ) {
        if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)66.5) ) ) {
          result[0] += 0.01171875;
          result[1] += 0.08984375;
          result[2] += 0;
          result[3] += 0.00390625;
          result[4] += 0.8671875;
          result[5] += 0.02734375;
        } else {
          result[0] += 0.822429906542056;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.06542056074766354;
          result[5] += 0.11214953271028037;
        }
      } else {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)65.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.032509752925877766;
          result[4] += 0.0494148244473342;
          result[5] += 0.918075422626788;
        } else {
          result[0] += 0.011437908496732025;
          result[1] += 0.04411764705882353;
          result[2] += 0.0196078431372549;
          result[3] += 0.3709150326797386;
          result[4] += 0.10947712418300654;
          result[5] += 0.4444444444444444;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)63.5) ) ) {
        if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)47) ) ) {
          result[0] += 0;
          result[1] += 0.9905660377358491;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.009433962264150943;
          result[5] += 0;
        } else {
          result[0] += 0.017241379310344827;
          result[1] += 0.3448275862068966;
          result[2] += 0.017241379310344827;
          result[3] += 0.008620689655172414;
          result[4] += 0.5689655172413793;
          result[5] += 0.04310344827586207;
        }
      } else {
        if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)71.5) ) ) {
          result[0] += 0.8238434163701069;
          result[1] += 0.04270462633451958;
          result[2] += 0.008007117437722422;
          result[3] += 0.022241992882562282;
          result[4] += 0.07740213523131674;
          result[5] += 0.02580071174377225;
        } else {
          result[0] += 0.1956521739130435;
          result[1] += 0.012422360248447204;
          result[2] += 0.21428571428571427;
          result[3] += 0.2453416149068323;
          result[4] += 0.06521739130434782;
          result[5] += 0.2670807453416149;
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)84) ) ) {
        if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)104.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11904761904761904;
          result[3] += 0.7857142857142857;
          result[4] += 0;
          result[5] += 0.09523809523809523;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5483870967741935;
          result[3] += 0.16129032258064516;
          result[4] += 0;
          result[5] += 0.2903225806451613;
        }
      } else {
        if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)111.5) ) ) {
          result[0] += 0.021739130434782608;
          result[1] += 0;
          result[2] += 0.782608695652174;
          result[3] += 0.10869565217391304;
          result[4] += 0.021739130434782608;
          result[5] += 0.06521739130434782;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)97.5) ) ) {
          result[0] += 0.0037878787878787884;
          result[1] += 0;
          result[2] += 0.7992424242424243;
          result[3] += 0.15530303030303033;
          result[4] += 0;
          result[5] += 0.04166666666666667;
        } else {
          result[0] += 0.36363636363636365;
          result[1] += 0;
          result[2] += 0.6363636363636364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)88.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8;
          result[3] += 0.13333333333333333;
          result[4] += 0;
          result[5] += 0.06666666666666667;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9871175523349437;
          result[3] += 0.01288244766505636;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)68.5) ) ) {
          result[0] += 0.02830188679245283;
          result[1] += 0.0660377358490566;
          result[2] += 0;
          result[3] += 0.0031446540880503146;
          result[4] += 0.7830188679245284;
          result[5] += 0.11949685534591195;
        } else {
          result[0] += 0.5534591194968553;
          result[1] += 0.006289308176100629;
          result[2] += 0;
          result[3] += 0.11320754716981132;
          result[4] += 0.24528301886792453;
          result[5] += 0.08176100628930817;
        }
      } else {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.051787916152897656;
          result[4] += 0.06411837237977805;
          result[5] += 0.8840937114673243;
        } else {
          result[0] += 0.04265402843601896;
          result[1] += 0.0071090047393364926;
          result[2] += 0.023696682464454975;
          result[3] += 0.5023696682464455;
          result[4] += 0.061611374407582936;
          result[5] += 0.36255924170616116;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)54.5) ) ) {
        if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)84.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9523809523809523;
          result[5] += 0.047619047619047616;
        } else {
          result[0] += 0;
          result[1] += 0.9798206278026906;
          result[2] += 0;
          result[3] += 0.006726457399103139;
          result[4] += 0.013452914798206279;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)75.5) ) ) {
          result[0] += 0.779374471682164;
          result[1] += 0.04395604395604396;
          result[2] += 0.00422654268808115;
          result[3] += 0.03803888419273035;
          result[4] += 0.10989010989010989;
          result[5] += 0.024513947590870666;
        } else {
          result[0] += 0.10059171597633136;
          result[1] += 0.07988165680473373;
          result[2] += 0.22189349112426035;
          result[3] += 0.22485207100591717;
          result[4] += 0.04142011834319527;
          result[5] += 0.33136094674556216;
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)86.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          result[0] += 0.01149425287356322;
          result[1] += 0;
          result[2] += 0.19540229885057475;
          result[3] += 0.67816091954023;
          result[4] += 0;
          result[5] += 0.1149425287356322;
        }
      } else {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.34615384615384615;
          result[3] += 0.34615384615384615;
          result[4] += 0;
          result[5] += 0.3076923076923077;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8202247191011236;
          result[3] += 0.16853932584269662;
          result[4] += 0;
          result[5] += 0.011235955056179775;
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
        if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)95) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.8148148148148148;
          result[3] += 0.037037037037037035;
          result[4] += 0;
          result[5] += 0.14814814814814814;
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
          result[0] += 0.02880658436213992;
          result[1] += 0;
          result[2] += 0.8271604938271605;
          result[3] += 0.11522633744855967;
          result[4] += 0;
          result[5] += 0.02880658436213992;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.9874213836477987;
          result[3] += 0.012578616352201259;
          result[4] += 0;
          result[5] += 0;
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

void postprocess(float* result) {
  // Do nothing
}


int main() {
    float result[MAX_N_CLASS];
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
