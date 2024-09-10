
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9966507177033492;
        result[1] += 0;
        result[2] += 0.0033492822966507177;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997939503832523;
        result[1] += 0;
        result[2] += 0.00020604961674771286;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.002355712603062426;
        result[2] += 0;
        result[3] += 0.22143698468786807;
        result[4] += 0.7750294464075382;
        result[5] += 0.001177856301531213;
        result[6] += 0;
      } else {
        result[0] += 0.5868133512947165;
        result[1] += 0.0012722646310432573;
        result[2] += 0.0068851968268223325;
        result[3] += 0.38355036671157017;
        result[4] += 0.020281395000748395;
        result[5] += 0.0005238736716060471;
        result[6] += 0.0006735518634934892;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0.0037926675094816687;
        result[1] += 0.020227560050568902;
        result[2] += 0;
        result[3] += 0.0922882427307206;
        result[4] += 0.8836915297092288;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12903225806451613;
        result[1] += 0.002805049088359046;
        result[2] += 0.005142589995324918;
        result[3] += 0.5296867695184666;
        result[4] += 0.3333333333333333;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0014779781259237363;
        result[1] += 0.0005911912503694946;
        result[2] += 0;
        result[3] += 0.9308306237067692;
        result[4] += 0.06650901566656814;
        result[5] += 0.0005911912503694946;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.9285714285714286;
        result[1] += 0;
        result[2] += 0.05357142857142857;
        result[3] += 0;
        result[4] += 0.017857142857142856;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007761966364812419;
        result[2] += 0.007330746011211729;
        result[3] += 0;
        result[4] += 0.9831824062095731;
        result[5] += 0.0017248814144027599;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9361299208079881;
        result[1] += 0.0014346378973946975;
        result[2] += 0.0035579019855388498;
        result[3] += 0.058647997245495236;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002295420635831516;
      } else {
        result[0] += 0.7388342165026495;
        result[1] += 0;
        result[2] += 0.0011895749972964205;
        result[3] += 0.25911106304747483;
        result[4] += 0;
        result[5] += 0.00021628636314480372;
        result[6] += 0.0006488590894344112;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.9982593559617058;
        result[1] += 0;
        result[2] += 0.0017406440382941688;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9626277372262774;
        result[1] += 0;
        result[2] += 0.003211678832116788;
        result[3] += 0.031240875912408757;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00291970802919708;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0006361323155216285;
        result[1] += 0;
        result[2] += 0.0028625954198473282;
        result[3] += 0.9561068702290076;
        result[4] += 0.03880407124681934;
        result[5] += 0.0015903307888040711;
        result[6] += 0;
      } else {
        result[0] += 0.5021929824561404;
        result[1] += 0;
        result[2] += 0.010233918128654972;
        result[3] += 0;
        result[4] += 0.4875730994152047;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.29010989010989013;
        result[4] += 0.7098901098901099;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.01032448377581121;
        result[2] += 0;
        result[3] += 0.0014749262536873156;
        result[4] += 0.9882005899705014;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)2.5) ) ) {
        result[0] += 0.9964134094568877;
        result[1] += 7.319572536963841e-05;
        result[2] += 0.0005855658029571073;
        result[3] += 0.0029278290147855364;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.992288322316651;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.007554296506137866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015738117721120554;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8905399097557181;
        result[1] += 0.0015559358954411078;
        result[2] += 0.0048234012758674345;
        result[3] += 0.10230278512525284;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007779679477205539;
      } else {
        result[0] += 0.5019735314604133;
        result[1] += 0;
        result[2] += 0.004875783608079871;
        result[3] += 0.4931506849315069;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.00064;
        result[1] += 0.00032;
        result[2] += 0.0032;
        result[3] += 0.95232;
        result[4] += 0.0416;
        result[5] += 0.00192;
        result[6] += 0;
      } else {
        result[0] += 0.5241332426920462;
        result[1] += 0;
        result[2] += 0.01699524133242692;
        result[3] += 0;
        result[4] += 0.45887151597552683;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-23) ) ) {
        result[0] += 0;
        result[1] += 0.012282497441146366;
        result[2] += 0;
        result[3] += 0.13203684749232344;
        result[4] += 0.8556806550665302;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += 0.9908675799086758;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0091324200913242;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.29108910891089107;
        result[1] += 0.013861386138613862;
        result[2] += 0;
        result[3] += 0.695049504950495;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9956891906455437;
        result[1] += 0.0005388511693070374;
        result[2] += 0.0023350217336638285;
        result[3] += 0.0012213959837626181;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021554046772281495;
      } else {
        result[0] += 0.643239469397254;
        result[1] += 0;
        result[2] += 0.0033744472888061444;
        result[3] += 0.3528042820572493;
        result[4] += 0;
        result[5] += 0.0001163602513381429;
        result[6] += 0.0004654410053525716;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.8640147270689932;
        result[1] += 0.001040499439731071;
        result[2] += 0.0008003841844085162;
        result[3] += 0.1336641587962222;
        result[4] += 0.00024011525532255485;
        result[5] += 0.00016007683688170325;
        result[6] += 8.003841844085162e-05;
      } else {
        result[0] += 0.9960481302347529;
        result[1] += 0;
        result[2] += 0.000353898784947505;
        result[3] += 0.003421021587825882;
        result[4] += 0.00011796626164916834;
        result[5] += 5.898313082458417e-05;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0.00125;
        result[1] += 0.02;
        result[2] += 0;
        result[3] += 0.09875;
        result[4] += 0.88;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.25383615084525357;
        result[1] += 0.002860858257477243;
        result[2] += 0.015344603381014304;
        result[3] += 0.44525357607282184;
        result[4] += 0.282704811443433;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.1509021323127392;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8490978676872608;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04519774011299435;
        result[3] += 0;
        result[4] += 0.9505649717514124;
        result[5] += 0.00423728813559322;
        result[6] += 0;
      } else {
        result[0] += 0.990588949605343;
        result[1] += 0;
        result[2] += 0.0051608986035215545;
        result[3] += 0.0015179113539769277;
        result[4] += 0;
        result[5] += 0.0006071645415907711;
        result[6] += 0.0021250758955676987;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)252) ) ) {
        result[0] += 0.9995057597992625;
        result[1] += 0;
        result[2] += 0.00045622172375774626;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.801847697981219e-05;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9492470719464585;
        result[1] += 0.0023703290574456225;
        result[2] += 0.004461795872838819;
        result[3] += 0.042526491912994985;
        result[4] += 0;
        result[5] += 0.00027886224205242617;
        result[6] += 0.0011154489682097047;
      } else {
        result[0] += 0;
        result[1] += 0.0003347840642785404;
        result[2] += 0.007030465349849348;
        result[3] += 0.9581519919651825;
        result[4] += 0.03448275862068966;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2608142493638677;
        result[1] += 0.005301102629346904;
        result[2] += 0.013570822731128074;
        result[3] += 0.7203138252756573;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6666666666666666;
        result[5] += 0.3333333333333333;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9914675767918089;
        result[5] += 0.008532423208191127;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        result[0] += 0.9358974358974359;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0641025641025641;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991982284667074;
        result[1] += 0;
        result[2] += 0.0006490531459987783;
        result[3] += 0;
        result[4] += 0.00011453879047037264;
        result[5] += 0;
        result[6] += 3.8179596823457546e-05;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01728140314676296;
        result[1] += 0.003868970853752902;
        result[2] += 0.013154500902759866;
        result[3] += 0.7180809904565386;
        result[4] += 0.24684034046943512;
        result[5] += 0.0007737941707505803;
        result[6] += 0;
      } else {
        result[0] += 0.7497094149554437;
        result[1] += 0;
        result[2] += 0.002518403719488571;
        result[3] += 0.2469004261913987;
        result[4] += 0;
        result[5] += 0.00019372336303758237;
        result[6] += 0.0006780317706315382;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5808510638297872;
        result[1] += 0;
        result[2] += 0.031914893617021274;
        result[3] += 0.3872340425531915;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.003755868544600939;
        result[1] += 0.018779342723004695;
        result[2] += 0;
        result[3] += 0.9774647887323944;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9975369458128078;
        result[1] += 0;
        result[2] += 0.0019704433497536944;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004926108374384236;
      } else {
        result[0] += 0.999836139445332;
        result[1] += 0;
        result[2] += 0.00016386055466797756;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9171650337193027;
        result[1] += 0.001272426517368622;
        result[2] += 0.0036900369003690036;
        result[3] += 0.07710904695253849;
        result[4] += 0;
        result[5] += 0.0001272426517368622;
        result[6] += 0.000636213258684311;
      } else {
        result[0] += 0.10612097066280334;
        result[1] += 0.0032596885186526622;
        result[2] += 0.009054690329590729;
        result[3] += 0.5461789206809127;
        result[4] += 0.33520463600144873;
        result[5] += 0.00018109380659181456;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        result[0] += 0;
        result[1] += 0.00033134526176275685;
        result[2] += 0;
        result[3] += 0.993373094764745;
        result[4] += 0.005964214711729623;
        result[5] += 0.00033134526176275685;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0444104134762634;
        result[3] += 0;
        result[4] += 0.9555895865237366;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        result[0] += 0.985777842608125;
        result[1] += 0.0003646707023557728;
        result[2] += 0.0009846108963605866;
        result[3] += 0.012654073371745315;
        result[4] += 7.293414047115455e-05;
        result[5] += 3.646707023557728e-05;
        result[6] += 0.00010940121070673184;
      } else {
        result[0] += 0.6869782971619366;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3121869782971619;
        result[4] += 0;
        result[5] += 0.0008347245409015025;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.18085106382978725;
        result[1] += 0.00344180225281602;
        result[2] += 0.017521902377972465;
        result[3] += 0.7769086357947435;
        result[4] += 0.020963704630788487;
        result[5] += 0.00031289111389236547;
        result[6] += 0;
      } else {
        result[0] += 0.0004889975550122249;
        result[1] += 0.007823960880195598;
        result[2] += 0;
        result[3] += 0.14816625916870416;
        result[4] += 0.843520782396088;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.3070631970260223;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6929368029739778;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6090651558073654;
        result[1] += 0;
        result[2] += 0.017563739376770537;
        result[3] += 0.0005665722379603399;
        result[4] += 0.3728045325779037;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)48.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9598108747044918;
        result[4] += 0.037825059101654845;
        result[5] += 0.002364066193853428;
        result[6] += 0;
      } else {
        result[0] += 0.9912177985948478;
        result[1] += 0;
        result[2] += 0.006733021077283372;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020491803278688526;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9942140790742526;
        result[1] += 0;
        result[2] += 0.0057859209257473485;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997084669526467;
        result[1] += 0;
        result[2] += 0.00029153304735329643;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01854783985523637;
        result[1] += 0.0049762497172585385;
        result[2] += 0.011083465279348564;
        result[3] += 0.812033476589007;
        result[4] += 0.15200180954535172;
        result[5] += 0.0013571590137977834;
        result[6] += 0;
      } else {
        result[0] += 0.7463546020247052;
        result[1] += 0.0001857527630723507;
        result[2] += 0.0038079316429831893;
        result[3] += 0.2483514442277329;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001300269341506455;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.0029940119760479044;
        result[1] += 0.020958083832335328;
        result[2] += 0;
        result[3] += 0.26497005988023953;
        result[4] += 0.7110778443113772;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0019255455712451862;
        result[2] += 0;
        result[3] += 0.1399229781771502;
        result[4] += 0.8581514762516046;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.003985507246376811;
        result[1] += 0.0010869565217391304;
        result[2] += 0.004710144927536232;
        result[3] += 0.7076086956521739;
        result[4] += 0.2826086956521739;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9768250289687138;
        result[1] += 0;
        result[2] += 0.023174971031286212;
        result[3] += 0;
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
        result[0] += 0.04;
        result[1] += 0.088;
        result[2] += 0;
        result[3] += 0.872;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9995074078284264;
        result[1] += 0;
        result[2] += 0.0004925921715736425;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.602458326317562;
        result[1] += 0.0010944603468597408;
        result[2] += 0.006314194308806197;
        result[3] += 0.37632598080484936;
        result[4] += 0.012123253072907899;
        result[5] += 0.0007577033170567437;
        result[6] += 0.0009260818319582422;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-135) ) ) {
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
        result[0] += 0.9500111086425239;
        result[1] += 0.001777382803821373;
        result[2] += 0.001777382803821373;
        result[3] += 0.04532326149744501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001110864252388358;
      } else {
        result[0] += 0.9890864134373535;
        result[1] += 0.00021315598755169033;
        result[2] += 0.000639467962655071;
        result[3] += 0.009805175427377756;
        result[4] += 0.0001278935925310142;
        result[5] += 4.263119751033807e-05;
        result[6] += 8.526239502067613e-05;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.5813704496788009;
        result[1] += 0;
        result[2] += 0.011063526052819416;
        result[3] += 0.40435403283369026;
        result[4] += 0.0003568879371877231;
        result[5] += 0.0003568879371877231;
        result[6] += 0.002498215560314062;
      } else {
        result[0] += 0.692186680650236;
        result[1] += 0;
        result[2] += 0.001922740779583989;
        result[3] += 0.2896346792518791;
        result[4] += 0.016255899318301;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.010526315789473684;
        result[1] += 0.12631578947368421;
        result[2] += 0;
        result[3] += 0.8631578947368421;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.28578360019408056;
        result[1] += 0.0024260067928190197;
        result[2] += 0.003153808830664726;
        result[3] += 0.6960213488597768;
        result[4] += 0.012372634643377001;
        result[5] += 0.00024260067928190198;
        result[6] += 0;
      } else {
        result[0] += 0.05158150851581508;
        result[1] += 0;
        result[2] += 0.01508515815085158;
        result[3] += 0.16690997566909976;
        result[4] += 0.7659367396593674;
        result[5] += 0.00048661800486618007;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
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
        result[1] += 0.0005894488653109342;
        result[2] += 0;
        result[3] += 0.9325081049218981;
        result[4] += 0.06690244621279104;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.38235294117647056;
        result[1] += 0.22058823529411764;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.39705882352941174;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.022923875432525952;
        result[1] += 0;
        result[2] += 0.015570934256055362;
        result[3] += 0;
        result[4] += 0.9615051903114187;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9870466321243523;
        result[1] += 0;
        result[2] += 0.012953367875647668;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995209198339189;
        result[1] += 0;
        result[2] += 0.0004790801660811242;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9472477064220184;
        result[1] += 0.0040956749672346;
        result[2] += 0.005242463958060288;
        result[3] += 0.043086500655307995;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000327653997378768;
      } else {
        result[0] += 0.41012153092690007;
        result[1] += 0;
        result[2] += 0.007618356611645202;
        result[3] += 0.5813531652457827;
        result[4] += 0;
        result[5] += 0.00018138944313440957;
        result[6] += 0.0007255577725376383;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0016313213703099511;
        result[1] += 0;
        result[2] += 0.004893964110929853;
        result[3] += 0.9748776508972268;
        result[4] += 0.0166394779771615;
        result[5] += 0.001957585644371941;
        result[6] += 0;
      } else {
        result[0] += 0.5221606648199446;
        result[1] += 0;
        result[2] += 0.01038781163434903;
        result[3] += 0;
        result[4] += 0.46745152354570635;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6918918918918919;
        result[4] += 0.3081081081081081;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005341246290801187;
        result[2] += 0;
        result[3] += 0.011275964391691394;
        result[4] += 0.9833827893175074;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9987332339791357;
        result[1] += 0;
        result[2] += 0.0011922503725782416;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.45156482861401e-05;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9135689851767389;
        result[1] += 0.002394526795895097;
        result[2] += 0.007069555302166477;
        result[3] += 0.0758266818700114;
        result[4] += 0;
        result[5] += 0.00011402508551881414;
        result[6] += 0.0010262257696693272;
      } else {
        result[0] += 0;
        result[1] += 0.000731528895391368;
        result[2] += 0.007681053401609363;
        result[3] += 0.9915874177029993;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999142064092859;
        result[1] += 0;
        result[2] += 0.0008074690890739339;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.046681806712087e-05;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9147851420247634;
        result[1] += 0.0018208302986161692;
        result[2] += 0.0026705511046370483;
        result[3] += 0.07926681233309057;
        result[4] += 0;
        result[5] += 0.0004855547462976451;
        result[6] += 0.0009711094925952902;
      } else {
        result[0] += 0.11225616488774383;
        result[1] += 0.0038645564961354434;
        result[2] += 0.006808980493191019;
        result[3] += 0.5496871549503128;
        result[4] += 0.32738314317261685;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        result[0] += 0;
        result[1] += 0.0003380662609871535;
        result[2] += 0;
        result[3] += 0.9949290060851927;
        result[4] += 0.0037187288708586883;
        result[5] += 0.0010141987829614604;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.029585798816568046;
        result[3] += 0;
        result[4] += 0.9704142011834319;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-178) ) ) {
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004353233830845771;
        result[2] += 0.007151741293532339;
        result[3] += 0.9881840796019901;
        result[4] += 0;
        result[5] += 0.0003109452736318408;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.9964927197364226;
        result[1] += 0;
        result[2] += 0.0007439685407588479;
        result[3] += 0.002657030502710171;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010628122010840685;
      } else {
        result[0] += 0.9675438596491228;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03245614035087719;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.7634093711467325;
        result[1] += 0;
        result[2] += 0.004932182490752158;
        result[3] += 0.22996300863131935;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0016954377311960542;
      } else {
        result[0] += 0.8088960546282247;
        result[1] += 0.0017071320182094085;
        result[2] += 0.003698786039453718;
        result[3] += 0.18560318664643402;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.484066767830047e-05;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.991869918699187;
        result[1] += 0;
        result[2] += 0.008130081300813009;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996131677691386;
        result[1] += 0;
        result[2] += 0.0003481490077753278;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.868322308614754e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.020624008461131677;
        result[1] += 0.008989952406134321;
        result[2] += 0.0031729243786356425;
        result[3] += 0.9026969857218403;
        result[4] += 0.06319407720782655;
        result[5] += 0.0013220518244315177;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.021314387211367674;
        result[3] += 0.1872113676731794;
        result[4] += 0.7907637655417407;
        result[5] += 0.0007104795737122557;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)94.5) ) ) {
        result[0] += 0.9763975155279504;
        result[1] += 0.0001552795031055901;
        result[2] += 0.004503105590062112;
        result[3] += 0.018478260869565222;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00046583850931677023;
      } else {
        result[0] += 0.4061320754716981;
        result[1] += 0;
        result[2] += 0.003537735849056604;
        result[3] += 0.5877358490566038;
        result[4] += 0;
        result[5] += 0.0002358490566037736;
        result[6] += 0.0023584905660377358;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.49456975772765244;
        result[1] += 0.0018796992481203006;
        result[2] += 0.01023391812865497;
        result[3] += 0.48078529657477026;
        result[4] += 0.012531328320802004;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0004957858205255329;
        result[1] += 0.006941001487357461;
        result[2] += 0;
        result[3] += 0.13237481408031732;
        result[4] += 0.8601883986117997;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0.989600540621715;
        result[1] += 0.00041297492115933325;
        result[2] += 0.0007508634930169695;
        result[3] += 0.008972818741552785;
        result[4] += 3.7543174650848474e-05;
        result[5] += 0;
        result[6] += 0.00022525904790509084;
      } else {
        result[0] += 0;
        result[1] += 0.003110419906687403;
        result[2] += 0;
        result[3] += 0.9828926905132193;
        result[4] += 0.007776049766718507;
        result[5] += 0.006220839813374806;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)40) ) ) {
        result[0] += 0.8271915131211613;
        result[1] += 0;
        result[2] += 0.0030709101060859855;
        result[3] += 0.16499162479061977;
        result[4] += 0.0027917364600781687;
        result[5] += 0.00027917364600781687;
        result[6] += 0.0016750418760469012;
      } else {
        result[0] += 0.5104086353122591;
        result[1] += 0;
        result[2] += 0.004047802621434078;
        result[3] += 0.4855435620663069;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02127659574468085;
        result[3] += 0;
        result[4] += 0.9787234042553191;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9980353634577603;
        result[5] += 0.0019646365422396855;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.07908611599297012;
        result[1] += 0.00492091388400703;
        result[2] += 0.011599297012302284;
        result[3] += 0.9040421792618629;
        result[4] += 0;
        result[5] += 0.000351493848857645;
        result[6] += 0;
      } else {
        result[0] += 0.44867549668874174;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5496688741721855;
        result[4] += 0;
        result[5] += 0.0016556291390728477;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991379747477308;
        result[1] += 0;
        result[2] += 0.0008113178844886162;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.0707367780538514e-05;
      } else {
        result[0] += 0.6594202898550725;
        result[1] += 0.0036231884057971015;
        result[2] += 0;
        result[3] += 0.33695652173913043;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8891760651629073;
        result[1] += 0.001958020050125313;
        result[2] += 0.005012531328320802;
        result[3] += 0.10283521303258146;
        result[4] += 0;
        result[5] += 0.00023496240601503758;
        result[6] += 0.0007832080200501253;
      } else {
        result[0] += 0.4954343245141653;
        result[1] += 0;
        result[2] += 0.003277920861624912;
        result[3] += 0.5012877546242098;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)9) ) ) {
        result[0] += 0.9980682285244554;
        result[1] += 0.00016440608302507192;
        result[2] += 0.0006987258528565556;
        result[3] += 0.0008220304151253596;
        result[4] += 8.220304151253596e-05;
        result[5] += 0;
        result[6] += 0.00016440608302507192;
      } else {
        result[0] += 0.8347438752783964;
        result[1] += 0.0017817371937639199;
        result[2] += 0.0017817371937639199;
        result[3] += 0.16102449888641426;
        result[4] += 0;
        result[5] += 0.00022271714922048998;
        result[6] += 0.00044543429844097997;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1817116060961313;
        result[1] += 0.006447831184056272;
        result[2] += 0.013774912075029308;
        result[3] += 0.7977725674091442;
        result[4] += 0;
        result[5] += 0.00029308323563892143;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0;
        result[2] += 0.016317016317016316;
        result[3] += 0.7896270396270396;
        result[4] += 0.10955710955710955;
        result[5] += 0.0011655011655011655;
        result[6] += 0;
      } else {
        result[0] += 0.1749198432490203;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6579978624866405;
        result[4] += 0.16708229426433915;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.7857142857142857;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.21428571428571427;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.995794111756459;
        result[1] += 0;
        result[2] += 0.0038053274584418186;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004005607850991388;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5858.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9948979591836735;
        result[1] += 0;
        result[2] += 0.00510204081632653;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997109826589595;
        result[1] += 0;
        result[2] += 0.00028901734104046245;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)10623) ) ) {
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.7976523197316938;
        result[1] += 0;
        result[2] += 0.0027948574622694245;
        result[3] += 0.1783119060927893;
        result[4] += 0.021240916713247626;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5472892081409271;
        result[1] += 0.004275696938600993;
        result[2] += 0.0037626133059688732;
        result[3] += 0.42962202839062774;
        result[4] += 0.013853258081067216;
        result[5] += 0.0008551393877201985;
        result[6] += 0.00034205575508807943;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.5488303615246196;
        result[1] += 0.0034353018158023883;
        result[2] += 0.009324390642892196;
        result[3] += 0.17176509079011942;
        result[4] += 0.26566334042205136;
        result[5] += 0.0001635858007524947;
        result[6] += 0.0008179290037624734;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008004743551734361;
        result[3] += 0.7963237474058702;
        result[4] += 0.19537503705899792;
        result[5] += 0.0002964719833975689;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0;
        result[1] += 0.012552301255230125;
        result[2] += 0;
        result[3] += 0.07391910739191074;
        result[4] += 0.9135285913528591;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3942885771543086;
        result[1] += 0.001002004008016032;
        result[2] += 0.008016032064128256;
        result[3] += 0.42802271209084836;
        result[4] += 0.16867067468269872;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)19) ) ) {
        result[0] += 0.9903668861712136;
        result[1] += 0.0005644402634054562;
        result[2] += 0.000978363123236124;
        result[3] += 0.007751646284101599;
        result[4] += 0.00011288805268109125;
        result[5] += 0;
        result[6] += 0.0002257761053621825;
      } else {
        result[0] += 0.02710413694721826;
        result[1] += 0.0042796005706134095;
        result[2] += 0;
        result[3] += 0.9629101283880172;
        result[4] += 0;
        result[5] += 0.005706134094151213;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.32543366723674566;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6745663327632543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7632135306553911;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.23678646934460887;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.001567398119122257;
        result[3] += 0;
        result[4] += 0.9984326018808778;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9783318492134165;
        result[1] += 0;
        result[2] += 0.01276343128524785;
        result[3] += 0.000296823983377857;
        result[4] += 0.004452359750667855;
        result[5] += 0.001187295933511428;
        result[6] += 0.0029682398337785697;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.10731373889268626;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.861244019138756;
        result[4] += 0.03144224196855776;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.180454020777222;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7583686033089649;
        result[4] += 0.06040784917275875;
        result[5] += 0.0007695267410542517;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.968421052631579;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.031578947368421054;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004374453193350831;
        result[2] += 0.013560804899387576;
        result[3] += 0;
        result[4] += 0.9816272965879265;
        result[5] += 0.0004374453193350831;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.9986536016156781;
        result[1] += 0.00029919964096043083;
        result[2] += 0.0007479991024010772;
        result[3] += 0.00022439973072032313;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.479991024010771e-05;
      } else {
        result[0] += 0.9879714879714879;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.012028512028512028;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8907056798623062;
        result[1] += 0.0014082303238929742;
        result[2] += 0.005163511187607573;
        result[3] += 0.1016272883742763;
        result[4] += 0;
        result[5] += 7.823501799405412e-05;
        result[6] += 0.0010170552339227037;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0.0031160115052732505;
        result[3] += 0.49688398849472676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9586502558428986;
        result[1] += 0;
        result[2] += 0.002350988798229844;
        result[3] += 0.038998755358871526;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
        result[0] += 0.19717261904761904;
        result[1] += 0.00818452380952381;
        result[2] += 0;
        result[3] += 0.4880952380952381;
        result[4] += 0.30654761904761907;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6753312091229247;
        result[1] += 0;
        result[2] += 0.0057018279389569005;
        result[3] += 0.29599195036055675;
        result[4] += 0.020962602716753313;
        result[5] += 0;
        result[6] += 0.002012409860808318;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.23569309029249683;
        result[1] += 0.005510809665112336;
        result[2] += 0.009749894022891056;
        result[3] += 0.5078423060618906;
        result[4] += 0.24120389995760916;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0027397260273972603;
        result[2] += 0;
        result[3] += 0.0589041095890411;
        result[4] += 0.9383561643835616;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9456773595592398;
        result[1] += 0.000926831780031924;
        result[2] += 0.0025230420678646823;
        result[3] += 0.04428196282374748;
        result[4] += 0.005972915915761288;
        result[5] += 5.1490654446218e-05;
        result[6] += 0.0005663971989083981;
      } else {
        result[0] += 0.6424928275422378;
        result[1] += 0;
        result[2] += 0.0015938795027095952;
        result[3] += 0.27335033471469555;
        result[4] += 0.08256295824035703;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9988167834713753;
        result[1] += 0;
        result[2] += 0.0011832165286247383;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-9) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7034279778393352;
        result[1] += 0.0024238227146814403;
        result[2] += 0.007531163434903047;
        result[3] += 0.28488573407202217;
        result[4] += 0.0002596952908587258;
        result[5] += 0.0004328254847645429;
        result[6] += 0.001038781163434903;
      } else {
        result[0] += 0;
        result[1] += 0.0010992030777686177;
        result[2] += 0.008518823852706787;
        result[3] += 0.8092882660071449;
        result[4] += 0.1802693047540533;
        result[5] += 0.0008244023083264633;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.000819000819000819;
        result[1] += 0.012285012285012284;
        result[2] += 0;
        result[3] += 0.3153153153153153;
        result[4] += 0.6715806715806716;
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
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
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
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9942775393419171;
        result[1] += 0;
        result[2] += 0.004291845493562233;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014306151645207441;
      } else {
        result[0] += 0.9997923070532525;
        result[1] += 0;
        result[2] += 0.00020769294674752845;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.022529441884280594;
        result[1] += 0.0030721966205837174;
        result[2] += 0.015873015873015872;
        result[3] += 0.7160778289810548;
        result[4] += 0.2416794674859191;
        result[5] += 0.0007680491551459293;
        result[6] += 0;
      } else {
        result[0] += 0.7404002681221871;
        result[1] += 0;
        result[2] += 0.003638801110791918;
        result[3] += 0.2550991094513071;
        result[4] += 0;
        result[5] += 9.575792396820837e-05;
        result[6] += 0.0007660633917456669;
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
        result[0] += 0.18811881188118812;
        result[1] += 0.011881188118811881;
        result[2] += 0.008580858085808581;
        result[3] += 0.7914191419141914;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.011649580615097858;
        result[2] += 0.006989748369058715;
        result[3] += 0.859273066169618;
        result[4] += 0.12208760484622555;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)71) ) ) {
        result[0] += 0.4976851851851852;
        result[1] += 0;
        result[2] += 0.046296296296296294;
        result[3] += 0.45601851851851855;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.025165562913907286;
        result[4] += 0.9748344370860927;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += 0.9993530710099703;
        result[1] += 0;
        result[2] += 0.0005327650506126798;
        result[3] += 0;
        result[4] += 7.610929294466855e-05;
        result[5] += 0;
        result[6] += 3.8054646472334275e-05;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.8141847370312688;
        result[1] += 0.0020366598778004076;
        result[2] += 0.004672337366718582;
        result[3] += 0.17251707200191688;
        result[4] += 0.005391158500059902;
        result[5] += 0.00047921408889421355;
        result[6] += 0.0007188211333413203;
      } else {
        result[0] += 0;
        result[1] += 0.000795967100026532;
        result[2] += 0.004510480233483682;
        result[3] += 0.8148049880604933;
        result[4] += 0.17882727513929422;
        result[5] += 0.0010612894667020427;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.47515151515151516;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12787878787878787;
        result[4] += 0.39636363636363636;
        result[5] += 0.0006060606060606061;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.007590759075907591;
        result[3] += 0.9541254125412542;
        result[4] += 0.03663366336633663;
        result[5] += 0.0016501650165016502;
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
        result[0] += 0;
        result[1] += 0.10256410256410256;
        result[2] += 0;
        result[3] += 0.8974358974358975;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.015527950310559006;
        result[2] += 0;
        result[3] += 0.984472049689441;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.995758871932432;
        result[1] += 0.0005799833254793924;
        result[2] += 0.0023924312176024937;
        result[3] += 0.001087468735273861;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018124478921231014;
      } else {
        result[0] += 0.645477329687856;
        result[1] += 0;
        result[2] += 0.002961950330371383;
        result[3] += 0.35064935064935066;
        result[4] += 0;
        result[5] += 0.0001139211665527455;
        result[6] += 0.0007974481658692185;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0008123476848090983;
        result[1] += 0.0030463038180341185;
        result[2] += 0.002437043054427295;
        result[3] += 0.6309910641754671;
        result[4] += 0.3625101543460601;
        result[5] += 0.00020308692120227456;
        result[6] += 0;
      } else {
        result[0] += 0.9958791208791209;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004120879120879121;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9952423220308895;
        result[1] += 0.00035505059470974617;
        result[2] += 0.0023788389845552996;
        result[3] += 0.0019172732114326294;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010651517841292386;
      } else {
        result[0] += 0.01098901098901099;
        result[1] += 0.03663003663003663;
        result[2] += 0;
        result[3] += 0.9523809523809523;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.46072874493927124;
        result[1] += 0;
        result[2] += 0.008906882591093117;
        result[3] += 0.026720647773279354;
        result[4] += 0.5036437246963563;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01505927587311759;
        result[1] += 0;
        result[2] += 0.004165331624479333;
        result[3] += 0.9756488305030439;
        result[4] += 0.003844921499519385;
        result[5] += 0.001281640499839795;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.7727272727272727;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.22727272727272727;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9962241653418125;
        result[1] += 0;
        result[2] += 0.0025834658187599367;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001192368839427663;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-9) ) ) {
        result[0] += 0.04081632653061224;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5714285714285714;
        result[4] += 0.3877551020408163;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.04944237918215613;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.928996282527881;
        result[4] += 0.021561338289962824;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.7192982456140351;
        result[1] += 0.017543859649122806;
        result[2] += 0.21052631578947367;
        result[3] += 0.017543859649122806;
        result[4] += 0.03508771929824561;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004971002485501243;
        result[2] += 0.005385252692626346;
        result[3] += 0;
        result[4] += 0.9888152444076223;
        result[5] += 0.0008285004142502071;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.32027424094025464;
        result[1] += 0.004897159647404506;
        result[2] += 0;
        result[3] += 0.6748285994123409;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9879708213509153;
        result[1] += 0.0004909868836361086;
        result[2] += 0.0022094409763624887;
        result[3] += 0.00918846882233289;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014028196675317387;
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
        result[0] += 0.40632054176072235;
        result[1] += 0;
        result[2] += 0.006395786305492852;
        result[3] += 0.586719337848006;
        result[4] += 0;
        result[5] += 0.00018811136192626034;
        result[6] += 0.0003762227238525207;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9588235294117647;
        result[1] += 0;
        result[2] += 0.04;
        result[3] += 0.001176470588235294;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.041407867494824016;
        result[1] += 0.002070393374741201;
        result[2] += 0.0003450655624568668;
        result[3] += 0.6766735679779158;
        result[4] += 0.2795031055900621;
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
        result[0] += 0.017699115044247787;
        result[1] += 0.07079646017699115;
        result[2] += 0;
        result[3] += 0.911504424778761;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.11061946902654869;
        result[1] += 0.001106194690265487;
        result[2] += 0.004977876106194691;
        result[3] += 0.8125000000000001;
        result[4] += 0.06858407079646019;
        result[5] += 0.002212389380530974;
        result[6] += 0;
      } else {
        result[0] += 0.9941142485736982;
        result[1] += 0.0006860691846609373;
        result[2] += 0.001155484942586842;
        result[3] += 0.003827543872318914;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021665342673503286;
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
        result[0] += 0.36319444444444443;
        result[1] += 0;
        result[2] += 0.006944444444444444;
        result[3] += 0.5211805555555555;
        result[4] += 0.10677083333333333;
        result[5] += 0.00034722222222222224;
        result[6] += 0.0015625;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
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
        result[0] += 0.609172482552343;
        result[1] += 0.003988035892323031;
        result[2] += 0.00259222333000997;
        result[3] += 0.289531405782652;
        result[4] += 0.09431704885343968;
        result[5] += 0.00019940179461615153;
        result[6] += 0.00019940179461615153;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.020516717325227963;
        result[3] += 0.8411854103343465;
        result[4] += 0.13677811550151975;
        result[5] += 0.001519756838905775;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.8690602674482506;
        result[1] += 0.0006960981864810405;
        result[2] += 0.0025645722659827807;
        result[3] += 0.12057153324784758;
        result[4] += 0.0068144348781828176;
        result[5] += 0;
        result[6] += 0.00029309397325517493;
      } else {
        result[0] += 0.007707129094412331;
        result[1] += 0;
        result[2] += 0.0038535645472061657;
        result[3] += 0;
        result[4] += 0.9884393063583815;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.116991643454039;
        result[1] += 0.009749303621169917;
        result[2] += 0.009749303621169917;
        result[3] += 0.8635097493036211;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0009165902841429881;
        result[2] += 0;
        result[3] += 0.05041246562786435;
        result[4] += 0.9486709440879927;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        result[0] += 0.004140786749482403;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9917184265010353;
        result[5] += 0.004140786749482403;
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
        result[1] += 0.0035460992907801418;
        result[2] += 0.008059316569954868;
        result[3] += 0.986782720825274;
        result[4] += 0;
        result[5] += 0.0016118633139909735;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.4177777777777778;
        result[1] += 0.024444444444444446;
        result[2] += 0;
        result[3] += 0.5577777777777778;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9969416759615731;
        result[1] += 0.0006476450904904114;
        result[2] += 0.0018349944230561654;
        result[3] += 0.0002878422624401828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002878422624401828;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.44943222143364087;
        result[1] += 0;
        result[2] += 0.001242015613910575;
        result[3] += 0.5493257629524485;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9862275449101796;
        result[1] += 0;
        result[2] += 0.009580838323353293;
        result[3] += 0.0005988023952095808;
        result[4] += 0;
        result[5] += 0.0008982035928143712;
        result[6] += 0.002694610778443114;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.9800285306704706;
        result[1] += 0.0007925186241876682;
        result[2] += 0.00035663338088445074;
        result[3] += 0.01834680614994452;
        result[4] += 0.0002773815184656839;
        result[5] += 3.9625931209383415e-05;
        result[6] += 0.00015850372483753366;
      } else {
        result[0] += 0.6922707633221316;
        result[1] += 0;
        result[2] += 0.0021603456553048487;
        result[3] += 0.3050888142102736;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048007681228996637;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.2286096256684492;
        result[1] += 0.004679144385026738;
        result[2] += 0.0053475935828877;
        result[3] += 0.4298128342245989;
        result[4] += 0.3315508021390374;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.18850353243416829;
        result[1] += 0.0038535645472061657;
        result[2] += 0.01348747591522158;
        result[3] += 0.3683365446371227;
        result[4] += 0.4258188824662813;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005721716514954486;
        result[3] += 0.8286085825747724;
        result[4] += 0.164889466840052;
        result[5] += 0.0007802340702210664;
        result[6] += 0;
      } else {
        result[0] += 0.9931318681318682;
        result[1] += 0;
        result[2] += 0.005494505494505495;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013736263736263737;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        result[0] += 0.017241379310344827;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9827586206896551;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05982300884955753;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9398230088495576;
        result[4] += 0;
        result[5] += 0.0003539823008849558;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.6811594202898552;
        result[1] += 0.014492753623188408;
        result[2] += 0.20289855072463772;
        result[3] += 0.07246376811594205;
        result[4] += 0.014492753623188408;
        result[5] += 0.014492753623188408;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007169970476592155;
        result[2] += 0.003795866722901729;
        result[3] += 0;
        result[4] += 0.9881906368620835;
        result[5] += 0.0008435259384226065;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        result[0] += 0.01020408163265306;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9897959183673469;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.37170731707317073;
        result[1] += 0.007804878048780488;
        result[2] += 0;
        result[3] += 0.6204878048780488;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9889580973952435;
        result[1] += 0.0005662514156285391;
        result[2] += 0.0017695356738391846;
        result[3] += 0.00863533408833522;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.078142695356739e-05;
      } else {
        result[0] += 0.6560581950443283;
        result[1] += 0;
        result[2] += 0.003978176858376904;
        result[3] += 0.3390543305296658;
        result[4] += 0;
        result[5] += 0.0003409865878608775;
        result[6] += 0.0005683109797681291;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        result[0] += 0.018518518518518517;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9814814814814815;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16904700077901844;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8301739807842119;
        result[4] += 0;
        result[5] += 0.0007790184367696703;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.8869565217391305;
        result[1] += 0;
        result[2] += 0.08695652173913045;
        result[3] += 0;
        result[4] += 0.026086956521739132;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005572224603514788;
        result[2] += 0.004714959279897128;
        result[3] += 0;
        result[4] += 0.9862837548221175;
        result[5] += 0.0034290612944706386;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.9988471515035067;
        result[1] += 0;
        result[2] += 0.0010567777884523011;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.607070804111828e-05;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9386281588447654;
        result[1] += 0.004922874958976042;
        result[2] += 0.007384312438464063;
        result[3] += 0.04857236626189695;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004922874958976042;
      } else {
        result[0] += 0.41651376146788993;
        result[1] += 0;
        result[2] += 0.007889908256880735;
        result[3] += 0.5744954128440367;
        result[4] += 0;
        result[5] += 0.0001834862385321101;
        result[6] += 0.0009174311926605505;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9752321981424149;
        result[1] += 0;
        result[2] += 0.02476780185758514;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.061366806136680614;
        result[1] += 0.010227801022780102;
        result[2] += 0.00046490004649000463;
        result[3] += 0.802417480241748;
        result[4] += 0.12552301255230125;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)84) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.033197437390797904;
        result[1] += 0;
        result[2] += 0.004659289458357601;
        result[3] += 0.13453698311007573;
        result[4] += 0.8276062900407688;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9988095238095238;
        result[5] += 0.0011904761904761906;
        result[6] += 0;
      } else {
        result[0] += 0.12492803684513529;
        result[1] += 0.0005757052389176742;
        result[2] += 0.014392630972941854;
        result[3] += 0.8566493955094991;
        result[4] += 0;
        result[5] += 0.0034542314335060447;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9926497211963212;
        result[1] += 0.0005431240495329133;
        result[2] += 0.0013759142588167137;
        result[3] += 0.00528640741545369;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014483307987544355;
      } else {
        result[0] += 0.6464530892448512;
        result[1] += 0;
        result[2] += 0.0035469107551487416;
        result[3] += 0.34862700228832955;
        result[4] += 0;
        result[5] += 0.00034324942791762013;
        result[6] += 0.0010297482837528604;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)6) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0019083969465648854;
        result[2] += 0.006679389312977099;
        result[3] += 0.6879770992366412;
        result[4] += 0.30200381679389315;
        result[5] += 0.0014312977099236641;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8461282079768915;
        result[1] += 0;
        result[2] += 0.0024441728696811466;
        result[3] += 0.15098322408621265;
        result[4] += 0;
        result[5] += 0.00011109876680368848;
        result[6] += 0.00033329630041106545;
      } else {
        result[0] += 0.9910714285714287;
        result[1] += 0;
        result[2] += 0.0027709359605911335;
        result[3] += 0.003386699507389163;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0027709359605911335;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9764705882352941;
        result[1] += 0.0009978991596638655;
        result[2] += 0.0011029411764705882;
        result[3] += 0.021165966386554623;
        result[4] += 0.0001050420168067227;
        result[5] += 5.252100840336135e-05;
        result[6] += 0.0001050420168067227;
      } else {
        result[0] += 0.10391566265060241;
        result[1] += 0.0051204819277108436;
        result[2] += 0.010542168674698794;
        result[3] += 0.491566265060241;
        result[4] += 0.38885542168674697;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.1906779661016949;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6278248587570622;
        result[4] += 0.18114406779661016;
        result[5] += 0.00035310734463276836;
        result[6] += 0;
      } else {
        result[0] += 0.9944797129450732;
        result[1] += 0;
        result[2] += 0.003312172232956114;
        result[3] += 0.002208114821970743;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.05865921787709497;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9413407821229051;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.41268260292164677;
        result[1] += 0.00597609561752988;
        result[2] += 0.012616201859229747;
        result[3] += 0.5687250996015937;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.9552059434065334;
        result[1] += 0.000273134491423577;
        result[2] += 0.0009832841691248771;
        result[3] += 0.017480607451108927;
        result[4] += 0.02594777668523981;
        result[5] += 0.00010925379656943078;
        result[6] += 0;
      } else {
        result[0] += 0.9343696027633852;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.008635578583765114;
        result[4] += 0.05670696603339091;
        result[5] += 0;
        result[6] += 0.00028785261945883715;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.44131582509814543;
        result[1] += 0.002301340192229593;
        result[2] += 0.006633274671720591;
        result[3] += 0.5401380804115339;
        result[4] += 0.008663868958981998;
        result[5] += 0.00040611885745228107;
        result[6] += 0.0005414918099363749;
      } else {
        result[0] += 0.9868976719003788;
        result[1] += 0;
        result[2] += 0.0023822414726583645;
        result[3] += 0.010286951813752028;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004331348132106117;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.001160092807424594;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9370649651972158;
        result[4] += 0.061194895591647334;
        result[5] += 0.000580046403712297;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.963302752293578;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03669724770642202;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008144796380090498;
        result[2] += 0.011312217194570135;
        result[3] += 0;
        result[4] += 0.9796380090497737;
        result[5] += 0.0009049773755656109;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8443107221006565;
        result[1] += 0;
        result[2] += 0.002297592997811816;
        result[3] += 0.15284463894967176;
        result[4] += 0;
        result[5] += 0.0002188183807439825;
        result[6] += 0.00032822757111597374;
      } else {
        result[0] += 0.9918453639383872;
        result[1] += 0;
        result[2] += 0.002718212020537602;
        result[3] += 0.004228329809725159;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012080942313500453;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9944277753964853;
        result[1] += 0;
        result[2] += 0.0010001428775539365;
        result[3] += 0.004429204172024576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014287755393627664;
      } else {
        result[0] += 0.8151355421686747;
        result[1] += 0.001976656626506024;
        result[2] += 0.006024096385542169;
        result[3] += 0.17658132530120482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028237951807228914;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.08152610441767068;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8979919678714859;
        result[4] += 0.020481927710843374;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.28094932649134063;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6157793457344453;
        result[4] += 0.10262989095574088;
        result[5] += 0.0006414368184733804;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995462794918331;
        result[5] += 0.00045372050816696913;
        result[6] += 0;
      } else {
        result[0] += 0.6808510638297872;
        result[1] += 0.16312056737588654;
        result[2] += 0.14184397163120568;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.014184397163120567;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.3983739837398374;
        result[1] += 0.026422764227642278;
        result[2] += 0;
        result[3] += 0.5752032520325203;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9954594208080085;
        result[1] += 0.00042903110475509475;
        result[2] += 0.0020736503396496246;
        result[3] += 0.0019306399713979263;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010725777618877369;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4319240081951946;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5680759918048054;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9835114503816794;
        result[1] += 0;
        result[2] += 0.013435114503816794;
        result[3] += 0.00183206106870229;
        result[4] += 0;
        result[5] += 0.0003053435114503817;
        result[6] += 0.000916030534351145;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.000589622641509434;
        result[1] += 0.0008844339622641511;
        result[2] += 0;
        result[3] += 0.9321933962264152;
        result[4] += 0.06603773584905662;
        result[5] += 0.000294811320754717;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        result[0] += 0;
        result[1] += 0.012328767123287671;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9876712328767123;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1022167487684729;
        result[1] += 0;
        result[2] += 0.029556650246305417;
        result[3] += 0;
        result[4] += 0.8657635467980296;
        result[5] += 0.0024630541871921183;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9961371318203767;
        result[1] += 0;
        result[2] += 0.00386286817962337;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996600373958865;
        result[1] += 0;
        result[2] += 0.0003399626041135475;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5294279807029635;
        result[1] += 0.0022053756030323913;
        result[2] += 0.007580978635423846;
        result[3] += 0.46050999310820123;
        result[4] += 0;
        result[5] += 0.00013783597518952445;
        result[6] += 0.00013783597518952445;
      } else {
        result[0] += 0.970893970893971;
        result[1] += 0;
        result[2] += 0.006930006930006931;
        result[3] += 0.020328020328020332;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018480018480018482;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
        result[0] += 0.9979717669965926;
        result[1] += 4.056466006814864e-05;
        result[2] += 0.00040564660068148633;
        result[3] += 0.0013791984423170535;
        result[4] += 0.0001216939802044459;
        result[5] += 0;
        result[6] += 8.112932013629728e-05;
      } else {
        result[0] += 0.8739342265529841;
        result[1] += 0.006394640682095006;
        result[2] += 0.00243605359317905;
        result[3] += 0.11571254567600488;
        result[4] += 0;
        result[5] += 0.0006090133982947625;
        result[6] += 0.0009135200974421437;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.182214948172395;
        result[1] += 0;
        result[2] += 0.0076377523186033835;
        result[3] += 0.7812329514457175;
        result[4] += 0.02891434806328424;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9968095712861416;
        result[1] += 0;
        result[2] += 0.002193419740777667;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009970089730807576;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0;
        result[1] += 0.008771929824561403;
        result[2] += 0.0043859649122807015;
        result[3] += 0.9160401002506265;
        result[4] += 0.06986215538847118;
        result[5] += 0.0009398496240601503;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)74) ) ) {
        result[0] += 0.18853974121996303;
        result[1] += 0;
        result[2] += 0.02865064695009242;
        result[3] += 0.30406654343807765;
        result[4] += 0.477818853974122;
        result[5] += 0.0009242144177449168;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.030562347188264057;
        result[4] += 0.969437652811736;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9923076923076923;
        result[1] += 0;
        result[2] += 0.007692307692307693;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996524559777572;
        result[1] += 0;
        result[2] += 0.0002703120172999691;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.723200494284832e-05;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7035989035281633;
        result[1] += 0.0021222035546909538;
        result[2] += 0.00778141303386683;
        result[3] += 0.28534795295782117;
        result[4] += 8.842514811212308e-05;
        result[5] += 0.0003537005924484923;
        result[6] += 0.0007074011848969846;
      } else {
        result[0] += 0;
        result[1] += 0.0005451076587626056;
        result[2] += 0.007904061052057782;
        result[3] += 0.8083946579449441;
        result[4] += 0.18288361951485418;
        result[5] += 0.0002725538293813028;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0.0012254901960784314;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4411764705882353;
        result[4] += 0.5575980392156863;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007067137809187279;
        result[1] += 0.0063604240282685515;
        result[2] += 0;
        result[3] += 0.038869257950530034;
        result[4] += 0.9540636042402827;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)926.5) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0;
        result[1] += 0.001089621356578589;
        result[2] += 0.007627349496050122;
        result[3] += 0.7935167529283574;
        result[4] += 0.196131844184146;
        result[5] += 0.0016344320348678834;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.009354997538158542;
        result[2] += 0;
        result[3] += 0.09896602658788774;
        result[4] += 0.8916789758739537;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.9985692771084338;
        result[1] += 0.0004518072289156627;
        result[2] += 0.0008283132530120483;
        result[3] += 7.530120481927713e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.530120481927713e-05;
      } else {
        result[0] += 0.9887589928057554;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.011241007194244604;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8930127606598195;
        result[1] += 0.0021008403361344537;
        result[2] += 0.005991285403050109;
        result[3] += 0.09803921568627451;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008558979147214441;
      } else {
        result[0] += 0.5136278195488722;
        result[1] += 0;
        result[2] += 0.0030545112781954886;
        result[3] += 0.48331766917293234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.49032648125755746;
        result[1] += 0;
        result[2] += 0.004232164449818622;
        result[3] += 0.5036275695284159;
        result[4] += 0.0018137847642079807;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16263552960800667;
        result[1] += 0.009174311926605505;
        result[2] += 0.007506255212677231;
        result[3] += 0.8206839032527106;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0.03211009174311927;
        result[2] += 0;
        result[3] += 0.45642201834862384;
        result[4] += 0.5114678899082569;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.025380710659898477;
        result[4] += 0.9746192893401016;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.8412037037037037;
        result[1] += 0;
        result[2] += 0.004629629629629629;
        result[3] += 0.1507716049382716;
        result[4] += 0.0023919753086419754;
        result[5] += 0.00015432098765432098;
        result[6] += 0.0008487654320987654;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9990649579231066;
        result[1] += 0;
        result[2] += 0.0007700346515593201;
        result[3] += 0;
        result[4] += 0.00011000495022276003;
        result[5] += 0;
        result[6] += 5.5002475111380014e-05;
      } else {
        result[0] += 0.5648824545092309;
        result[1] += 0.001992296453712312;
        result[2] += 0.003453313853101341;
        result[3] += 0.35383185017930663;
        result[4] += 0.07517598618674458;
        result[5] += 0.0003984592907424624;
        result[6] += 0.0002656395271616416;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0031559963931469793;
        result[1] += 0.0063119927862939585;
        result[2] += 0.010820559062218215;
        result[3] += 0.9797114517583408;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9893964110929854;
        result[1] += 0;
        result[2] += 0.010603588907014683;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11652944901836605;
        result[1] += 0.0006333122229259025;
        result[2] += 0;
        result[3] += 0.8790373654211526;
        result[4] += 0.0006333122229259025;
        result[5] += 0.0031665611146295125;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02997275204359673;
        result[3] += 0;
        result[4] += 0.9700272479564033;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9949084249084249;
        result[1] += 0.00040293040293040293;
        result[2] += 0.001098901098901099;
        result[3] += 0.003406593406593407;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018315018315018315;
      } else {
        result[0] += 0.6583036022557256;
        result[1] += 0;
        result[2] += 0.0031073771435147887;
        result[3] += 0.3370928760501784;
        result[4] += 0;
        result[5] += 0.00046035216940959836;
        result[6] += 0.0010357923811715962;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.3802863802863803;
        result[1] += 0.002997002997002997;
        result[2] += 0.004329004329004329;
        result[3] += 0.6103896103896104;
        result[4] += 0.001998001998001998;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0656013456686291;
        result[1] += 0;
        result[2] += 0.01934398654331371;
        result[3] += 0.1581160639192599;
        result[4] += 0.7569386038687973;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0012376237623762376;
        result[1] += 0.019801980198019802;
        result[2] += 0;
        result[3] += 0.0012376237623762376;
        result[4] += 0.9777227722772277;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0014245014245014246;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9971509971509972;
        result[5] += 0.0014245014245014246;
        result[6] += 0;
      } else {
        result[0] += 0.11383108935128519;
        result[1] += 0.0006119951040391676;
        result[2] += 0.011627906976744186;
        result[3] += 0.8714810281517748;
        result[4] += 0;
        result[5] += 0.0024479804161566705;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9952123029306509;
        result[1] += 0;
        result[2] += 0.00029016345874842826;
        result[3] += 0.004449173034142567;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.836057645807138e-05;
      } else {
        result[0] += 0.8028974209056065;
        result[1] += 0.0008445397258494121;
        result[2] += 0.003443123497693757;
        result[3] += 0.19164555317352044;
        result[4] += 0;
        result[5] += 0.0002598583771844345;
        result[6] += 0.0009095043201455207;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11925337020394054;
        result[1] += 0.0003456619426201175;
        result[2] += 0;
        result[3] += 0.8786726581403388;
        result[4] += 0.0010369858278603526;
        result[5] += 0.000691323885240235;
        result[6] += 0;
      } else {
        result[0] += 0.002663115845539281;
        result[1] += 0;
        result[2] += 0.037283621837549935;
        result[3] += 0;
        result[4] += 0.9600532623169108;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7246963562753036;
        result[4] += 0.27530364372469635;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006093845216331505;
        result[2] += 0;
        result[3] += 0.004875076173065204;
        result[4] += 0.9890310786106032;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993020589261679;
        result[1] += 0;
        result[2] += 0.000697941073832195;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7730496453900709;
        result[1] += 0.010638297872340425;
        result[2] += 0;
        result[3] += 0.21631205673758866;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8649665237342961;
        result[1] += 0.0015797788309636646;
        result[2] += 0.0059429775069585475;
        result[3] += 0.12683367185736852;
        result[4] += 0;
        result[5] += 0.00015045512675844426;
        result[6] += 0.0005265929436545549;
      } else {
        result[0] += 0.5055376095985233;
        result[1] += 0;
        result[2] += 0.0036917397323488694;
        result[3] += 0.49077065066912784;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.001464986815118664;
        result[1] += 0.0008789920890711983;
        result[2] += 0;
        result[3] += 0.9320246117784939;
        result[4] += 0.06563140931731615;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.968421052631579;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.031578947368421054;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007314974182444062;
        result[2] += 0.00946643717728055;
        result[3] += 0;
        result[4] += 0.9814974182444062;
        result[5] += 0.0017211703958691911;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6379310344827587;
        result[1] += 0.004702194357366771;
        result[2] += 0.001567398119122257;
        result[3] += 0.3557993730407524;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9954751131221721;
        result[1] += 0.0008461170584556525;
        result[2] += 0.0019865357024610973;
        result[3] += 0.001618658720523857;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.357539638744805e-05;
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
        result[0] += 0.41328011611030485;
        result[1] += 0;
        result[2] += 0.0063497822931785205;
        result[3] += 0.5792815674891147;
        result[4] += 0;
        result[5] += 0.00018142235123367201;
        result[6] += 0.0009071117561683601;
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
        result[0] += 0.0066068900424728644;
        result[1] += 0.010854176498348278;
        result[2] += 0.008494572911750826;
        result[3] += 0.974044360547428;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.994824016563147;
        result[1] += 0;
        result[2] += 0.005175983436853002;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999120996713292;
        result[1] += 0;
        result[2] += 0.0008025682182985554;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.643506840938622e-05;
      } else {
        result[0] += 0.5895017942084619;
        result[1] += 0.0006676124509722107;
        result[2] += 0.006843027622465159;
        result[3] += 0.3873821246766252;
        result[4] += 0.014186764583159477;
        result[5] += 0.000250354669114579;
        result[6] += 0.0011683217892013687;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
        result[0] += 0.4;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0047694753577106515;
        result[3] += 0;
        result[4] += 0.9952305246422893;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)6504) ) ) {
        result[0] += 0.9995409334353481;
        result[1] += 0;
        result[2] += 0.00038255547054322876;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.651109410864575e-05;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.007296849087893864;
        result[2] += 0.009950248756218905;
        result[3] += 0.9558872305140962;
        result[4] += 0.026533996683250415;
        result[5] += 0.0003316749585406302;
        result[6] += 0;
      } else {
        result[0] += 0.9970426700464723;
        result[1] += 0;
        result[2] += 0.0025348542458808617;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004224757076468103;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
        result[0] += 0.4405349259932485;
        result[1] += 0;
        result[2] += 0.010127239678005712;
        result[3] += 0.466891716437289;
        result[4] += 0.08179693586081538;
        result[5] += 0.00012983640612827837;
        result[6] += 0.0005193456245131135;
      } else {
        result[0] += 0;
        result[1] += 0.009448818897637795;
        result[2] += 0;
        result[3] += 0.07979002624671916;
        result[4] += 0.910761154855643;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)217) ) ) {
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
        result[0] += 0.9988099597217136;
        result[1] += 0;
        result[2] += 0.001190040278286342;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.01375679347826087;
        result[1] += 0.005604619565217391;
        result[2] += 0.010190217391304348;
        result[3] += 0.6686480978260869;
        result[4] += 0.30061141304347827;
        result[5] += 0.001188858695652174;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0014792899408284023;
        result[3] += 0;
        result[4] += 0.9985207100591716;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9826140567200987;
        result[1] += 0;
        result[2] += 0.005548705302096178;
        result[3] += 0.010480887792848337;
        result[4] += 0;
        result[5] += 0.00012330456226880397;
        result[6] += 0.0012330456226880397;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0011411182959300114;
        result[3] += 0.99885888170407;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
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
        result[0] += 0.0055996266915538965;
        result[1] += 0.012599160055996267;
        result[2] += 0.00979934671021932;
        result[3] += 0.9720018665422305;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9875724937862469;
        result[1] += 0;
        result[2] += 0.012427506213753107;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9440162411396327;
        result[1] += 0.0006193654944601199;
        result[2] += 0.0013075493771935863;
        result[3] += 0.05240520267015347;
        result[4] += 0.0014451861537402796;
        result[5] += 0.0001376367765466933;
        result[6] += 6.881838827334665e-05;
      } else {
        result[0] += 0.6535586984017477;
        result[1] += 0;
        result[2] += 0.006553984132459468;
        result[3] += 0.33758767391054384;
        result[4] += 0.0011498217776244682;
        result[5] += 0.00034494653328734045;
        result[6] += 0.0008048752443371277;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)217) ) ) {
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
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        result[0] += 0;
        result[1] += 0.08064516129032258;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9193548387096774;
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
        result[0] += 0.12170841361592807;
        result[1] += 0.0003211303789338472;
        result[2] += 0;
        result[3] += 0.8773281952472705;
        result[4] += 0.0006422607578676943;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0016629711751662971;
        result[1] += 0;
        result[2] += 0.014412416851441241;
        result[3] += 0;
        result[4] += 0.9811529933481153;
        result[5] += 0.002771618625277162;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        result[0] += 0.9966347856889833;
        result[1] += 0.0004250797024442083;
        result[2] += 0.0016648955012398157;
        result[3] += 0.0011335458731845554;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014169323414806942;
      } else {
        result[0] += 0.13268156424581007;
        result[1] += 0.009776536312849162;
        result[2] += 0;
        result[3] += 0.8575418994413407;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.4175803402646503;
        result[1] += 0;
        result[2] += 0.006427221172022685;
        result[3] += 0.5754253308128544;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005671077504725897;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.006822057987492893;
        result[1] += 0.0062535531552018195;
        result[2] += 0.009664582148948267;
        result[3] += 0.9766913018760659;
        result[4] += 0.0005685048322910744;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9917948717948718;
        result[1] += 0;
        result[2] += 0.008205128205128205;
        result[3] += 0;
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
        result[0] += 0.0078125;
        result[1] += 0.0546875;
        result[2] += 0;
        result[3] += 0.9375;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.10503751339764203;
        result[1] += 0.001071811361200429;
        result[2] += 0.010182207931404074;
        result[3] += 0.8060021436227225;
        result[4] += 0.07609860664523045;
        result[5] += 0.0016077170418006433;
        result[6] += 0;
      } else {
        result[0] += 0.9107867214878997;
        result[1] += 0.00027594580424404646;
        result[2] += 0.0017384585667374927;
        result[3] += 0.0867297662739038;
        result[4] += 0;
        result[5] += 5.518916084880929e-05;
        result[6] += 0.0004139187063660697;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-158) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.001466275659824047;
        result[3] += 0;
        result[4] += 0.998533724340176;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.003015075376884422;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9959798994974874;
        result[5] += 0.0010050251256281408;
        result[6] += 0;
      } else {
        result[0] += 0.14313271604938274;
        result[1] += 0;
        result[2] += 0.01080246913580247;
        result[3] += 0.8445216049382717;
        result[4] += 0;
        result[5] += 0.00154320987654321;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991883116883117;
        result[1] += 0;
        result[2] += 0.0007343846629560915;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.730364873222017e-05;
      } else {
        result[0] += 0.7121804784863095;
        result[1] += 0.0010916037478395342;
        result[2] += 0.007732193213863367;
        result[3] += 0.27744928590921497;
        result[4] += 0;
        result[5] += 9.096697898662786e-05;
        result[6] += 0.0014554716637860457;
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
        result[0] += 0.19082939986513822;
        result[1] += 0.008766014834794335;
        result[2] += 0.007417397167902899;
        result[3] += 0.7929871881321645;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += 0.010869565217391304;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9891304347826086;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.013221153846153846;
        result[2] += 0;
        result[3] += 0.003605769230769231;
        result[4] += 0.9831730769230769;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994248245714943;
        result[1] += 0;
        result[2] += 0.0005368303999386479;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8345028567046284e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0033594624860022394;
        result[2] += 0.0033594624860022394;
        result[3] += 0.24076147816349383;
        result[4] += 0.7513997760358343;
        result[5] += 0.0011198208286674132;
        result[6] += 0;
      } else {
        result[0] += 0.5819472166777557;
        result[1] += 0.0006653359946773122;
        result[2] += 0.0062098026169882465;
        result[3] += 0.38729947512382645;
        result[4] += 0.022917128705551862;
        result[5] += 0.00029570488652324987;
        result[6] += 0.0006653359946773122;
      }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        result[0] += 0.7739130434782608;
        result[1] += 0;
        result[2] += 0.05217391304347826;
        result[3] += 0.17391304347826086;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06412213740458016;
        result[1] += 0.020610687022900764;
        result[2] += 0;
        result[3] += 0.9152671755725191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.0016025641025641025;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9967948717948718;
        result[5] += 0.0016025641025641025;
        result[6] += 0;
      } else {
        result[0] += 0.12114093959731544;
        result[1] += 0.0006711409395973154;
        result[2] += 0.01040268456375839;
        result[3] += 0.8644295302013423;
        result[4] += 0;
        result[5] += 0.003355704697986577;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.18085969180859693;
        result[4] += 0.819140308191403;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.014976958525345621;
        result[2] += 0;
        result[3] += 0.001152073732718894;
        result[4] += 0.9838709677419355;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)46) ) ) {
        result[0] += 0;
        result[1] += 0.004672897196261682;
        result[2] += 0;
        result[3] += 0.9953271028037384;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9955635403681162;
        result[1] += 0.0009532888465204958;
        result[2] += 0.0019799076043117993;
        result[3] += 0.0012832734472391291;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021998973381242212;
      } else {
        result[0] += 0.6498460861917327;
        result[1] += 0;
        result[2] += 0.004947229551451188;
        result[3] += 0.34410729991204925;
        result[4] += 0;
        result[5] += 0.00021987686895338611;
        result[6] += 0.0008795074758135445;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        result[0] += 0.9816239316239317;
        result[1] += 0;
        result[2] += 0.00028490028490028494;
        result[3] += 0.018091168091168095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.22950819672131148;
        result[1] += 0;
        result[2] += 0.03747072599531616;
        result[3] += 0.3864168618266979;
        result[4] += 0.34660421545667447;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.005931784478497282;
        result[1] += 0.004943153732081068;
        result[2] += 0.003954522985664854;
        result[3] += 0.7454275827978251;
        result[4] += 0.2397429560059318;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.80997715156131;
        result[1] += 0;
        result[2] += 0.004188880426504189;
        result[3] += 0.18392993145468392;
        result[4] += 0;
        result[5] += 0.0001904036557501904;
        result[6] += 0.0017136329017517135;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
        result[0] += 0.20123136746597536;
        result[1] += 0.0035644847699287103;
        result[2] += 0.005184705119896306;
        result[3] += 0.3830200907323396;
        result[4] += 0.40699935191186;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.954485868596298;
        result[1] += 0.00047192071731949034;
        result[2] += 0.0013633265167007499;
        result[3] += 0.041424151853599704;
        result[4] += 0.0018352472340202402;
        result[5] += 0.0001048712705154423;
        result[6] += 0.0003146138115463269;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.20254033642293168;
        result[1] += 0;
        result[2] += 0.002403020940611054;
        result[3] += 0.6268451767936835;
        result[4] += 0.16821146584277377;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9946062567421791;
        result[1] += 0;
        result[2] += 0.0029665587918015104;
        result[3] += 0.0018878101402373248;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005393743257820927;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)58.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        result[0] += 0.8195694716242662;
        result[1] += 0.004305283757338552;
        result[2] += 0.004696673189823875;
        result[3] += 0.1706457925636008;
        result[4] += 0.0003913894324853229;
        result[5] += 0.0003913894324853229;
        result[6] += 0;
      } else {
        result[0] += 0.9885138790627991;
        result[1] += 0.0001248491406217487;
        result[2] += 0.0002496982812434974;
        result[3] += 0.01069540971326314;
        result[4] += 0.00033293104165799657;
        result[5] += 4.161638020724957e-05;
        result[6] += 4.161638020724957e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9743703049049934;
        result[1] += 0;
        result[2] += 0.001325673884224481;
        result[3] += 0.02430402121078215;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12254713351288957;
        result[1] += 0.005001923816852636;
        result[2] += 0.009811465948441709;
        result[3] += 0.5402077722200846;
        result[4] += 0.3224317045017314;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 0.24903938520653218;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7509606147934679;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)40) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04551920341394026;
        result[3] += 0;
        result[4] += 0.9544807965860598;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9929749541844839;
        result[1] += 0;
        result[2] += 0.005497861942577887;
        result[3] += 0.0003054367745876604;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012217470983506417;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        result[0] += 0.0038461538461538464;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9923076923076923;
        result[5] += 0.0038461538461538464;
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
        result[1] += 0.0030854674483184203;
        result[2] += 0.007405121875964209;
        result[3] += 0.9876581302067263;
        result[4] += 0;
        result[5] += 0.0018512804689910522;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9950394235287975;
        result[1] += 0.00010443318886742206;
        result[2] += 0.0006788157276382434;
        result[3] += 0.004177327554696883;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5400161681487471;
        result[1] += 0.0033683643222850988;
        result[2] += 0.008218808946375642;
        result[3] += 0.4474535165723525;
        result[4] += 0;
        result[5] += 0.00013473457289140395;
        result[6] += 0.0008084074373484237;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9430051813471503;
        result[1] += 0;
        result[2] += 0.0025906735751295338;
        result[3] += 0.054404145077720206;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.994847775175644;
        result[1] += 0;
        result[2] += 0.003864168618266979;
        result[3] += 0.000702576112412178;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000585480093676815;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)29) ) ) {
        result[0] += 0.8979508196721312;
        result[1] += 0.0028688524590163933;
        result[2] += 0.0010245901639344263;
        result[3] += 0.09774590163934427;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004098360655737705;
      } else {
        result[0] += 0.9889326737654063;
        result[1] += 0.0001676867611302088;
        result[2] += 0.0007545904250859396;
        result[3] += 0.009851597216399766;
        result[4] += 8.38433805651044e-05;
        result[5] += 0.0001257650708476566;
        result[6] += 8.38433805651044e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0.0038363171355498722;
        result[1] += 0.014066496163682864;
        result[2] += 0;
        result[3] += 0.0907928388746803;
        result[4] += 0.8913043478260869;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1396547859224389;
        result[1] += 0.0020174848688634837;
        result[2] += 0.010311589329746693;
        result[3] += 0.5973996861690204;
        result[4] += 0.25039228872450126;
        result[5] += 0.00022416498542927594;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)49) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008524928958925343;
        result[3] += 0.8142598811676569;
        result[4] += 0.17669852751227072;
        result[5] += 0.0005166623611469904;
        result[6] += 0;
      } else {
        result[0] += 0.99498861047836;
        result[1] += 0;
        result[2] += 0.004555808656036446;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00045558086560364467;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9998002530128504;
        result[1] += 0;
        result[2] += 0.0001997469871496105;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989266547406083;
        result[1] += 0;
        result[2] += 0.0008050089445438283;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00026833631484794273;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7094641614474599;
        result[1] += 0.0017397355601948504;
        result[2] += 0.006697981906750174;
        result[3] += 0.28114126652748783;
        result[4] += 8.698677800974252e-05;
        result[5] += 0.00026096033402922753;
        result[6] += 0.0006089074460681977;
      } else {
        result[0] += 0;
        result[1] += 0.0013635124079629125;
        result[2] += 0.00654485955822198;
        result[3] += 0.7954731388055631;
        result[4] += 0.1963457867466594;
        result[5] += 0.0002727024815925825;
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
        result[0] += 0.00510204081632653;
        result[1] += 0.03826530612244898;
        result[2] += 0;
        result[3] += 0.9566326530612245;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0013755158184319122;
        result[1] += 0.0018340210912425495;
        result[2] += 0.003668042182485099;
        result[3] += 0.9624025676295278;
        result[4] += 0.027051811095827605;
        result[5] += 0.003668042182485099;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004247787610619469;
        result[2] += 0;
        result[3] += 0.3815929203539823;
        result[4] += 0.6141592920353982;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93) ) ) {
        result[0] += 0.996042216358839;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.00395778364116095;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01867816091954023;
        result[3] += 0;
        result[4] += 0.9813218390804598;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-26) ) ) {
        result[0] += 0.012048192771084338;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9879518072289156;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5194444444444445;
        result[1] += 0.027777777777777776;
        result[2] += 0;
        result[3] += 0.4527777777777778;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9947413231832524;
        result[1] += 0;
        result[2] += 0.0005008263634997747;
        result[3] += 0.004557519907847949;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020033054539990986;
      } else {
        result[0] += 0.8065544197233915;
        result[1] += 0.0008418520745640408;
        result[2] += 0.004810583283223091;
        result[3] += 0.18725195429945882;
        result[4] += 0;
        result[5] += 6.0132291040288637e-05;
        result[6] += 0.0004810583283223091;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0011435105774728416;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9982847341337907;
        result[5] += 0.0005717552887364208;
        result[6] += 0;
      } else {
        result[0] += 0.19200407435701553;
        result[1] += 0.004838298955946015;
        result[2] += 0.0015278838808250573;
        result[3] += 0.8013750954927426;
        result[4] += 0;
        result[5] += 0.00025464731347084286;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9955481159626755;
        result[1] += 0.0004986110121803547;
        result[2] += 0.0023862098440059834;
        result[3] += 0.0014958330365410642;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.123014459719353e-05;
      } else {
        result[0] += 0.0035971223021582736;
        result[1] += 0.039568345323741004;
        result[2] += 0;
        result[3] += 0.9568345323741008;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9948536506915406;
        result[4] += 0.0038597619813444837;
        result[5] += 0.001286587327114828;
        result[6] += 0;
      } else {
        result[0] += 0.47552958363769177;
        result[1] += 0;
        result[2] += 0.016070124178232285;
        result[3] += 0;
        result[4] += 0.508400292184076;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
        result[0] += 0.9973761889143982;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0026238110856018366;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9866048428645028;
        result[1] += 0;
        result[2] += 0.00824317362184441;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.005151983513652756;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9932756964457252;
        result[1] += 0;
        result[2] += 0.005763688760806916;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009606147934678194;
      } else {
        result[0] += 0.9997088670770254;
        result[1] += 0;
        result[2] += 0.00029113292297454666;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.015515330624307351;
        result[1] += 0.005541189508681197;
        result[2] += 0.004617657923900997;
        result[3] += 0.62966383450314;
        result[4] += 0.34429257480605835;
        result[5] += 0.0003694126339120798;
        result[6] += 0;
      } else {
        result[0] += 0.981180496150556;
        result[1] += 0;
        result[2] += 0.004888182818037394;
        result[3] += 0.011976047904191617;
        result[4] += 0;
        result[5] += 0.00012220457045093486;
        result[6] += 0.0018330685567640229;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013372956909361071;
        result[3] += 0;
        result[4] += 0.9806835066864785;
        result[5] += 0.005943536404160476;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0003223726627981947;
        result[2] += 0.007736943907156673;
        result[3] += 0.9919406834300452;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.998945615982242;
        result[1] += 0;
        result[2] += 0.0009988901220865706;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.549389567147614e-05;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.7367531003382187;
        result[1] += 0.0009394964299135663;
        result[2] += 0.006482525366403607;
        result[3] += 0.22914317925591882;
        result[4] += 0.02536640360766629;
        result[5] += 0.0005636978579481398;
        result[6] += 0.000751597143930853;
      } else {
        result[0] += 0.09269570913855224;
        result[1] += 0.00917130691123485;
        result[2] += 0.004258106780216181;
        result[3] += 0.40943334425155586;
        result[4] += 0.4844415329184409;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0;
        result[1] += 0.0006527415143603133;
        result[2] += 0.006527415143603133;
        result[3] += 0.8413838120104439;
        result[4] += 0.15013054830287206;
        result[5] += 0.0013054830287206266;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6844993141289437;
        result[4] += 0.31550068587105623;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.0005824111822947001;
        result[1] += 0.0005824111822947001;
        result[2] += 0;
        result[3] += 0.9336051252184042;
        result[4] += 0.06493884682585906;
        result[5] += 0.00029120559114735004;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991197183098591;
        result[5] += 0.0008802816901408451;
        result[6] += 0;
      } else {
        result[0] += 0.636986301369863;
        result[1] += 0.0958904109589041;
        result[2] += 0.2602739726027397;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.00684931506849315;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9667774086378738;
        result[1] += 0.03322259136212625;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1366906474820144;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8633093525179856;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8961126005361931;
        result[1] += 0;
        result[2] += 0.0033512064343163544;
        result[3] += 0.09994973190348527;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000586461126005362;
      } else {
        result[0] += 0.9229977775948638;
        result[1] += 0.0005350234587208824;
        result[2] += 0.002428183389579389;
        result[3] += 0.07403901555683595;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.07631280695126558;
        result[1] += 0.0007555723460521345;
        result[2] += 0;
        result[3] += 0.9199093313184737;
        result[4] += 0.00037778617302606723;
        result[5] += 0.0026445032111824707;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01955671447196871;
        result[3] += 0;
        result[4] += 0.9765319426336375;
        result[5] += 0.003911342894393742;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0.07272727272727272;
        result[2] += 0;
        result[3] += 0.9272727272727272;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9984845423317843;
        result[1] += 5.051525560719338e-05;
        result[2] += 0.0009092746009294808;
        result[3] += 0.0004546373004647404;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010103051121438675;
      } else {
        result[0] += 0.8997134670487106;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.10028653295128939;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)43) ) ) {
        result[0] += 0.8491707754370238;
        result[1] += 0.00194232780516958;
        result[2] += 0.005378753922008068;
        result[3] += 0.14276109367996415;
        result[4] += 0;
        result[5] += 7.470491558344539e-05;
        result[6] += 0.0006723442402510085;
      } else {
        result[0] += 0.5049365303244006;
        result[1] += 0;
        result[2] += 0.003996238834038552;
        result[3] += 0.4910672308415609;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.3333333333333333;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991578947368421;
        result[5] += 0.0008421052631578948;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0009457755359394704;
        result[1] += 0.0069356872635561164;
        result[2] += 0.004098360655737705;
        result[3] += 0.9858133669609079;
        result[4] += 0;
        result[5] += 0.0022068095838587644;
        result[6] += 0;
      } else {
        result[0] += 0.9808673469387755;
        result[1] += 0;
        result[2] += 0.01913265306122449;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9953612845673504;
        result[1] += 0.00039250669045495085;
        result[2] += 0.002390722569134701;
        result[3] += 0.001748438893844781;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010704727921498659;
      } else {
        result[0] += 0;
        result[1] += 0.026923076923076925;
        result[2] += 0;
        result[3] += 0.9730769230769231;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.44319009468317555;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5568099053168245;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9873118914133963;
        result[1] += 0;
        result[2] += 0.010032457952198289;
        result[3] += 0.0008852168781351431;
        result[4] += 0;
        result[5] += 0.00029507229271171436;
        result[6] += 0.0014753614635585719;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9904534606205251;
        result[1] += 0;
        result[2] += 0.00954653937947494;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993047777219883;
        result[1] += 0;
        result[2] += 0.0006565988181221273;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8623459889536906e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7407906126767337;
        result[1] += 0.0014427238626526886;
        result[2] += 0.007309800904106955;
        result[3] += 0.22189093007598348;
        result[4] += 0.02731557179955757;
        result[5] += 0.0005770895450610754;
        result[6] += 0.000673271135904588;
      } else {
        result[0] += 0;
        result[1] += 0.0008225939128050454;
        result[2] += 0.007129147244310393;
        result[3] += 0.8143679736769949;
        result[4] += 0.1774060871949548;
        result[5] += 0.0002741979709350151;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.11106011932078935;
        result[1] += 0.005966039467645709;
        result[2] += 0.004130335016062414;
        result[3] += 0.5553005966039468;
        result[4] += 0.32354290959155574;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0010416666666666667;
        result[1] += 0.014583333333333334;
        result[2] += 0;
        result[3] += 0.090625;
        result[4] += 0.89375;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        result[0] += 0.46530920060331826;
        result[1] += 0;
        result[2] += 0.01809954751131222;
        result[3] += 0.5082956259426847;
        result[4] += 0.008295625942684766;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13015463917525774;
        result[1] += 0.00429553264604811;
        result[2] += 0.00429553264604811;
        result[3] += 0.5176116838487973;
        result[4] += 0.3436426116838488;
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
        result[0] += 0.009900990099009901;
        result[1] += 0.12871287128712872;
        result[2] += 0;
        result[3] += 0.8613861386138614;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 0.9993193162910301;
        result[1] += 0;
        result[2] += 0.000605052185751021;
        result[3] += 0;
        result[4] += 3.7815761609438814e-05;
        result[5] += 0;
        result[6] += 3.7815761609438814e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.801301072814426;
        result[1] += 0.0011412919424788862;
        result[2] += 0.005934718100890208;
        result[3] += 0.17587308833599635;
        result[4] += 0.014152020086738187;
        result[5] += 0.0003423875827436658;
        result[6] += 0.0012554211367267747;
      } else {
        result[0] += 0;
        result[1] += 0.0005387931034482759;
        result[2] += 0.005387931034482759;
        result[3] += 0.8116918103448276;
        result[4] += 0.18130387931034483;
        result[5] += 0.0010775862068965517;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9998675584398384;
        result[1] += 0;
        result[2] += 0.0001324415601615787;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992829613695438;
        result[1] += 0;
        result[2] += 0.0006274088016491889;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.962982880702697e-05;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.017925162446784673;
        result[1] += 0.004033161550526552;
        result[2] += 0.013667936365673313;
        result[3] += 0.8158189558592874;
        result[4] += 0.14810665471655837;
        result[5] += 0.00044812906116961686;
        result[6] += 0;
      } else {
        result[0] += 0.7444318610796528;
        result[1] += 0;
        result[2] += 0.004718761796904493;
        result[3] += 0.25000000000000006;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008493771234428087;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.0023455824863174357;
        result[1] += 0.011727912431587178;
        result[2] += 0;
        result[3] += 0.30023455824863177;
        result[4] += 0.6856919468334637;
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
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)212) ) ) {
        result[0] += 0;
        result[1] += 0.0169971671388102;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9830028328611898;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.04899432697266633;
        result[1] += 0;
        result[2] += 0.004899432697266633;
        result[3] += 0.6583290355853534;
        result[4] += 0.2867457452294998;
        result[5] += 0.001031459515214028;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        result[0] += 0.9932995355762755;
        result[1] += 0.0005317828907717944;
        result[2] += 0.0017371574431878614;
        result[3] += 0.004218810933456235;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002127131563087177;
      } else {
        result[0] += 0.1317365269461078;
        result[1] += 0.009580838323353293;
        result[2] += 0.0011976047904191617;
        result[3] += 0.8574850299401198;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.19703443076149788;
        result[1] += 0;
        result[2] += 0.003267152550892184;
        result[3] += 0.7994470972606182;
        result[4] += 0;
        result[5] += 0.00025131942699170643;
        result[6] += 0;
      } else {
        result[0] += 0.9938791124713083;
        result[1] += 0;
        result[2] += 0.0034429992348890587;
        result[3] += 0.0013389441469013007;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013389441469013007;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9963619827194179;
        result[1] += 0;
        result[2] += 0.0036380172805820826;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997501145308401;
        result[1] += 0;
        result[2] += 0.00024988546915996835;
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.01668833983528392;
        result[1] += 0.005201560468140442;
        result[2] += 0.011703511053315995;
        result[3] += 0.8123103597745991;
        result[4] += 0.1527958387516255;
        result[5] += 0.0013003901170351106;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005758157389635317;
        result[2] += 0;
        result[3] += 0.14299424184261036;
        result[4] += 0.8512476007677543;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9813141937878975;
        result[1] += 0;
        result[2] += 0.0060636059893577525;
        result[3] += 0.011260982551664397;
        result[4] += 0;
        result[5] += 0.00024749412201460216;
        result[6] += 0.0011137235490657096;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0015961691939345571;
        result[3] += 0.9984038308060654;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.9614843969637334;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.037672195670508855;
        result[4] += 0;
        result[5] += 0.000562271577171774;
        result[6] += 0.000281135788585887;
      } else {
        result[0] += 0.9743275316455697;
        result[1] += 0.0005142405063291141;
        result[2] += 0.0010284810126582281;
        result[3] += 0.02401107594936709;
        result[4] += 3.955696202531646e-05;
        result[5] += 0;
        result[6] += 7.911392405063293e-05;
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
        result[0] += 0.1610797982794423;
        result[1] += 0.005043013942450311;
        result[2] += 0.017205576980124593;
        result[3] += 0.8166716107979828;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.14612868047982552;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8538713195201745;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.9853293413173653;
        result[1] += 0;
        result[2] += 0.012574850299401197;
        result[3] += 0.0005988023952095808;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014970059880239522;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0014124293785310737;
        result[3] += 0;
        result[4] += 0.9971751412429379;
        result[5] += 0.0014124293785310737;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.15625;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6875;
        result[4] += 0.15625;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.640625;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03125;
        result[4] += 0.328125;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.971277924240322;
        result[1] += 0.0005550159567087555;
        result[2] += 0.0007978354377688359;
        result[3] += 0.027091716386846126;
        result[4] += 3.468849729429722e-05;
        result[5] += 3.468849729429722e-05;
        result[6] += 0.0002081309837657833;
      } else {
        result[0] += 0.11034753583349696;
        result[1] += 0.0039269585705870805;
        result[2] += 0.0098173964264677;
        result[3] += 0.5393677596701355;
        result[4] += 0.3363440015707834;
        result[5] += 0.00019634792852935403;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.17157252718111907;
        result[1] += 0;
        result[2] += 0.005833996287456908;
        result[3] += 0.8194112967382657;
        result[4] += 0.0026518164942985947;
        result[5] += 0.0005303632988597189;
        result[6] += 0;
      } else {
        result[0] += 0.9934614622548049;
        result[1] += 0;
        result[2] += 0.004359025163463445;
        result[3] += 0.001981375074301566;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00019813750743015655;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17059426229508196;
        result[1] += 0.005122950819672131;
        result[2] += 0.0025614754098360654;
        result[3] += 0.8214651639344263;
        result[4] += 0;
        result[5] += 0.00025614754098360657;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.6232558139534884;
        result[1] += 0.0031007751937984496;
        result[2] += 0.0015503875968992248;
        result[3] += 0.37209302325581395;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9937265647533892;
        result[1] += 0.0003965964811075859;
        result[2] += 0.00219930775886934;
        result[3] += 0.0034612056533025676;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021632535333141048;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4607201309328969;
        result[1] += 0;
        result[2] += 0.006546644844517185;
        result[3] += 0.030278232405891982;
        result[4] += 0.502454991816694;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.018327974276527333;
        result[1] += 0;
        result[2] += 0.00482315112540193;
        result[3] += 0.9726688102893891;
        result[4] += 0.0028938906752411574;
        result[5] += 0.0012861736334405145;
        result[6] += 0;
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
        result[0] += 0.993601462522852;
        result[1] += 0;
        result[2] += 0.0031992687385740404;
        result[3] += 0.0018281535648994515;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013711151736745886;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9991831885349373;
        result[1] += 0;
        result[2] += 0.000816811465062746;
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)10343) ) ) {
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.7358633059567639;
        result[1] += 0.001416029453412631;
        result[2] += 0.007929764939110734;
        result[3] += 0.227131124327386;
        result[4] += 0.02652695176059662;
        result[5] += 0.0002832058906825262;
        result[6] += 0.0008496176720475786;
      } else {
        result[0] += 0.09180327868852459;
        result[1] += 0.00819672131147541;
        result[2] += 0.002622950819672131;
        result[3] += 0.4095081967213115;
        result[4] += 0.4878688524590164;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0;
        result[1] += 0.00032905561039815734;
        result[2] += 0.00987166831194472;
        result[3] += 0.8331688055281343;
        result[4] += 0.15597235932872658;
        result[5] += 0.0006581112207963147;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.683982683982684;
        result[4] += 0.31601731601731603;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007547169811320756;
        result[2] += 0.006469002695417791;
        result[3] += 0.649056603773585;
        result[4] += 0.3358490566037736;
        result[5] += 0.0010781671159029653;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0.17463479415670652;
        result[1] += 0.00033200531208499334;
        result[2] += 0.0033200531208499337;
        result[3] += 0.6191899070385126;
        result[4] += 0.20119521912350596;
        result[5] += 0.0013280212483399733;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001606425702811245;
        result[2] += 0;
        result[3] += 0.04578313253012048;
        result[4] += 0.9526104417670683;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9990862671324913;
        result[1] += 0;
        result[2] += 0.0009137328675087342;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        result[0] += 0.7199168248802097;
        result[1] += 0.0009944851279269505;
        result[2] += 0.0077750655456107045;
        result[3] += 0.270590362535033;
        result[4] += 0;
        result[5] += 9.040773890245005e-05;
        result[6] += 0.0006328541723171503;
      } else {
        result[0] += 0.17307692307692307;
        result[1] += 0.017482517482517484;
        result[2] += 0;
        result[3] += 0.8094405594405595;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)16.5) ) ) {
        result[0] += 0.4;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995889847924373;
        result[5] += 0.0004110152075626798;
        result[6] += 0;
      }
    } else {
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
        result[1] += 0.003734827264239029;
        result[2] += 0.00778089013383131;
        result[3] += 0.9872393401805166;
        result[4] += 0;
        result[5] += 0.0012449424214130097;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9950718685831623;
        result[1] += 0.00010266940451745381;
        result[2] += 0.0006160164271047229;
        result[3] += 0.004106776180698153;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010266940451745381;
      } else {
        result[0] += 0.549270575282136;
        result[1] += 0.002890173410404624;
        result[2] += 0.009496284062758051;
        result[3] += 0.43765483071841454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006881365262868153;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
        result[0] += 0.9930562974041235;
        result[1] += 0;
        result[2] += 0.0023501762632197414;
        result[3] += 0.00405939536374319;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005341309689135776;
      } else {
        result[0] += 0.9514851485148514;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.048514851485148516;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80) ) ) {
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.996996996996997;
        result[1] += 0;
        result[2] += 0.003003003003003003;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997114948687301;
        result[1] += 0;
        result[2] += 0.00028850513126983473;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.020134228187919462;
        result[1] += 0.006942837306179125;
        result[2] += 0.012959962971534367;
        result[3] += 0.8116176810923398;
        result[4] += 0.14649386716037954;
        result[5] += 0.0018514232816477668;
        result[6] += 0;
      } else {
        result[0] += 0.7447974730583427;
        result[1] += 0.0001858045336306206;
        result[2] += 0.0037160906726124115;
        result[3] += 0.25046451133407654;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008361204013377926;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.005226480836236934;
        result[1] += 0.02264808362369338;
        result[2] += 0;
        result[3] += 0.5627177700348432;
        result[4] += 0.4094076655052265;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02480916030534351;
        result[4] += 0.9751908396946565;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9949840401276789;
        result[1] += 0;
        result[2] += 0.005015959872321021;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995843724023276;
        result[1] += 0;
        result[2] += 0.00041562759767248546;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
        result[0] += 0.6897304236200257;
        result[1] += 0.0015404364569961489;
        result[2] += 0.003722721437740693;
        result[3] += 0.30397946084724004;
        result[4] += 0.0005134788189987163;
        result[5] += 0.00025673940949935817;
        result[6] += 0.00025673940949935817;
      } else {
        result[0] += 0.36902903527942554;
        result[1] += 0;
        result[2] += 0.010771152044957853;
        result[3] += 0.47408679363097095;
        result[4] += 0.1450202934748673;
        result[5] += 0.0004683109584764284;
        result[6] += 0.0006244146113019045;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0.0012642225031605564;
        result[1] += 0.022756005056890013;
        result[2] += 0;
        result[3] += 0.08849557522123894;
        result[4] += 0.8874841972187105;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11907923860115095;
        result[1] += 0.0026560424966799467;
        result[2] += 0.0026560424966799467;
        result[3] += 0.5236830455953962;
        result[4] += 0.351925630810093;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4.5) ) ) {
        result[0] += 0.34577603143418467;
        result[1] += 0.0019646365422396855;
        result[2] += 0.03339882121807466;
        result[3] += 0.6011787819253438;
        result[4] += 0.015717092337917484;
        result[5] += 0.0019646365422396855;
        result[6] += 0;
      } else {
        result[0] += 0.08032128514056225;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5783132530120482;
        result[4] += 0.3413654618473896;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9727388240730045;
        result[1] += 0.0005775672865888876;
        result[2] += 0.001963728774402218;
        result[3] += 0.02471987986600439;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8680192089785788;
        result[1] += 0;
        result[2] += 0.001079156099929855;
        result[3] += 0.13046997248151945;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00043166243997194194;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
        result[0] += 0.24425939944486494;
        result[1] += 0.002523340903356043;
        result[2] += 0.005046681806712086;
        result[3] += 0.7469089073933888;
        result[4] += 0.0007570022710068128;
        result[5] += 0.0005046681806712086;
        result[6] += 0;
      } else {
        result[0] += 0.007692307692307693;
        result[1] += 0.046153846153846156;
        result[2] += 0;
        result[3] += 0.007692307692307693;
        result[4] += 0.9384615384615385;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)68.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08522727272727272;
        result[1] += 0;
        result[2] += 0.02130681818181818;
        result[3] += 0.1590909090909091;
        result[4] += 0.7334280303030303;
        result[5] += 0.000946969696969697;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.931551116333725;
        result[4] += 0.06668625146886016;
        result[5] += 0.0017626321974148062;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.8760330578512397;
        result[1] += 0;
        result[2] += 0.08264462809917357;
        result[3] += 0;
        result[4] += 0.041322314049586785;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005972696245733789;
        result[2] += 0.008532423208191127;
        result[3] += 0;
        result[4] += 0.984641638225256;
        result[5] += 0.0008532423208191126;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992337164750957;
        result[1] += 0;
        result[2] += 0.0007662835249042146;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6771929824561403;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.32280701754385965;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5419604590073276;
        result[1] += 0.002765104382690447;
        result[2] += 0.007742292271533251;
        result[3] += 0.44697912346191077;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005530208765380894;
      } else {
        result[0] += 0.9851229632628278;
        result[1] += 0;
        result[2] += 0.003238538609452485;
        result[3] += 0.010930067806902137;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007084303208177311;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
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
        result[4] += 0.9995944849959448;
        result[5] += 0.00040551500405515005;
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
        result[1] += 0.005097164702134438;
        result[2] += 0.007327174259318254;
        result[3] += 0.9869385154507805;
        result[4] += 0;
        result[5] += 0.0006371455877668047;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9948328424533665;
        result[1] += 5.167157546633597e-05;
        result[2] += 0.0007234020565287035;
        result[3] += 0.004288740763705885;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010334315093267194;
      } else {
        result[0] += 0.5494652406417113;
        result[1] += 0.0029411764705882357;
        result[2] += 0.008689839572192515;
        result[3] += 0.4382352941176471;
        result[4] += 0;
        result[5] += 0.00013368983957219254;
        result[6] += 0.0005347593582887702;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.9976994967649173;
        result[1] += 0;
        result[2] += 0.002156721782890007;
        result[3] += 0.00014378145219266715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.966041108132261;
        result[1] += 0;
        result[2] += 0.005957700327673518;
        result[3] += 0.026213881441763478;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0017873100983020554;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)48) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0;
        result[1] += 0.00619718309859155;
        result[2] += 0;
        result[3] += 0.7228169014084508;
        result[4] += 0.27042253521126763;
        result[5] += 0.000563380281690141;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0009290802105915144;
        result[2] += 0.0021678538247135335;
        result[3] += 0.5890368535150201;
        result[4] += 0.4069371322390833;
        result[5] += 0.0009290802105915144;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9958960328317373;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004103967168262654;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.017133956386292833;
        result[3] += 0;
        result[4] += 0.9828660436137072;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991271756430662;
        result[1] += 0;
        result[2] += 0.000718796529239616;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015402782769420343;
      } else {
        result[0] += 0.520746887966805;
        result[1] += 0.003457814661134163;
        result[2] += 0.006500691562932227;
        result[3] += 0.4690179806362379;
        result[4] += 0;
        result[5] += 0.00027662517289073305;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.9971194008353738;
        result[1] += 0;
        result[2] += 0.002592539248163618;
        result[3] += 0.00028805991646262423;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9622804491793838;
        result[1] += 0;
        result[2] += 0.005182839044054132;
        result[3] += 0.030521163259429888;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020155485171321624;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        result[0] += 0.75;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993512440848725;
        result[1] += 0;
        result[2] += 0.0006487559151274614;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9116324298043029;
        result[1] += 0.0019448158502491796;
        result[2] += 0.0023094688221709007;
        result[3] += 0.08301932660751185;
        result[4] += 0;
        result[5] += 0.00012155099064057372;
        result[6] += 0.0009724079251245898;
      } else {
        result[0] += 0.1059059423988334;
        result[1] += 0.004557054320087495;
        result[2] += 0.0071090047393364926;
        result[3] += 0.5490339044841415;
        result[4] += 0.33321181188479765;
        result[5] += 0.0001822821728034998;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0;
        result[1] += 0.0010242403550699897;
        result[2] += 0.003414134516899966;
        result[3] += 0.99556162512803;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01694915254237288;
        result[3] += 0;
        result[4] += 0.9722650231124808;
        result[5] += 0.01078582434514638;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)1.5) ) ) {
        result[0] += 0.15131286159323543;
        result[1] += 0.005785491766800178;
        result[2] += 0.00801068090787717;
        result[3] += 0.5807743658210948;
        result[4] += 0.25322652425456166;
        result[5] += 0.0008900756564307966;
        result[6] += 0;
      } else {
        result[0] += 0.06547619047619048;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4583333333333333;
        result[4] += 0.47619047619047616;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9959179288860244;
        result[1] += 0;
        result[2] += 0.00118165216457192;
        result[3] += 0.0027929960253518103;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010742292405199271;
      } else {
        result[0] += 0.564510549982705;
        result[1] += 0;
        result[2] += 0.008301625735039779;
        result[3] += 0.42407471463161533;
        result[4] += 0;
        result[5] += 0.0006918021445866483;
        result[6] += 0.002421307506053269;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
        result[0] += 0.1456058242329693;
        result[1] += 0.00078003120124805;
        result[2] += 0.002860114404576183;
        result[3] += 0.5041601664066563;
        result[4] += 0.3460738429537181;
        result[5] += 0.0005200208008320333;
        result[6] += 0;
      } else {
        result[0] += 0.9884358864027539;
        result[1] += 0.0011833046471600688;
        result[2] += 0.0027969018932874354;
        result[3] += 0.0072611876075731495;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032271944922547335;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.46055618615209987;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5394438138479001;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8296270954498802;
        result[1] += 0;
        result[2] += 0.003079028395484092;
        result[3] += 0.0013684570646595963;
        result[4] += 0.16558330482381114;
        result[5] += 0.00034211426616489907;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.9861537905354109;
        result[1] += 0.0005422797440439608;
        result[2] += 0.0009399515563428654;
        result[3] += 0.01221937023245725;
        result[4] += 3.615198293626405e-05;
        result[5] += 0;
        result[6] += 0.00010845594880879216;
      } else {
        result[0] += 0.6746724890829694;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.32532751091703055;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1716824304958441;
        result[1] += 0.008598452278589856;
        result[2] += 0.0051590713671539135;
        result[3] += 0.7386070507308685;
        result[4] += 0.07566638005159072;
        result[5] += 0.0002866150759529952;
        result[6] += 0;
      } else {
        result[0] += 0.02020785219399538;
        result[1] += 0;
        result[2] += 0.01674364896073903;
        result[3] += 0.05831408775981524;
        result[4] += 0.9047344110854504;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.1694774675145148;
        result[1] += 0;
        result[2] += 0.006635333149018524;
        result[3] += 0.8197401161183302;
        result[4] += 0.0038706110035941392;
        result[5] += 0.00027647221454243855;
        result[6] += 0;
      } else {
        result[0] += 0.9939746937135971;
        result[1] += 0;
        result[2] += 0.0032134966860815424;
        result[3] += 0.001004217714400482;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018075918859208676;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)106.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005235602094240838;
        result[3] += 0;
        result[4] += 0.9947643979057592;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5136809499225606;
        result[1] += 0;
        result[2] += 0.014455343314403717;
        result[3] += 0.47186370676303563;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14184397163120568;
        result[1] += 0.01773049645390071;
        result[2] += 0.00851063829787234;
        result[3] += 0.8319148936170213;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.004002668445630421;
        result[1] += 0.00066711140760507;
        result[2] += 0.004002668445630421;
        result[3] += 0.9679786524349566;
        result[4] += 0.022014676450967312;
        result[5] += 0.00133422281521014;
        result[6] += 0;
      } else {
        result[0] += 0.22626025791324736;
        result[1] += 0;
        result[2] += 0.009378663540445486;
        result[3] += 0;
        result[4] += 0.7643610785463072;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9364129678586336;
        result[1] += 0.0008348406845693614;
        result[2] += 0.001994341635360141;
        result[3] += 0.06015490932702565;
        result[4] += 0;
        result[5] += 9.276007606326238e-05;
        result[6] += 0.000510180418347943;
      } else {
        result[0] += 0.8731996416511612;
        result[1] += 0;
        result[2] += 0.0010336985734959686;
        result[3] += 0.12576665977534285;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
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
        result[0] += 0.9984724593404618;
        result[1] += 0;
        result[2] += 0.0015275406595381437;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.009921313718782073;
        result[2] += 0.007184399589462881;
        result[3] += 0.9541566883339035;
        result[4] += 0.028395484091686622;
        result[5] += 0.00034211426616489907;
        result[6] += 0;
      } else {
        result[0] += 0.9954643628509721;
        result[1] += 0.00021598272138228944;
        result[2] += 0.0036717062634989204;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006479481641468684;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.358294930875576;
        result[1] += 0.0031682027649769587;
        result[2] += 0.014112903225806451;
        result[3] += 0.4438364055299539;
        result[4] += 0.17828341013824886;
        result[5] += 0.0008640552995391706;
        result[6] += 0.0014400921658986176;
      } else {
        result[0] += 0.3522671468325422;
        result[1] += 0.0011458503846783433;
        result[2] += 0.0050744802750040926;
        result[3] += 0.361270256997872;
        result[4] += 0.2799148796857096;
        result[5] += 0.0001636929120969062;
        result[6] += 0.0001636929120969062;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        result[0] += 0.5577911915940085;
        result[1] += 0;
        result[2] += 0.0111781801922647;
        result[3] += 0.3684328191370445;
        result[4] += 0.06259780907668232;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8883635334088336;
        result[1] += 0.0003114382785956965;
        result[2] += 0.0016987542468856172;
        result[3] += 0.10866364665911665;
        result[4] += 0.0003397508493771234;
        result[5] += 0.0001698754246885617;
        result[6] += 0.00045300113250283127;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39) ) ) {
        result[0] += 0;
        result[1] += 0.012596899224806201;
        result[2] += 0.001937984496124031;
        result[3] += 0.9854651162790697;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9660377358490566;
        result[1] += 0;
        result[2] += 0.033962264150943396;
        result[3] += 0;
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
        result[0] += 0.005076142131979695;
        result[1] += 0.07614213197969544;
        result[2] += 0;
        result[3] += 0.9187817258883249;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0015748031496062992;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9968503937007874;
        result[5] += 0.0015748031496062992;
        result[6] += 0;
      } else {
        result[0] += 0.18370694368507381;
        result[1] += 0.009294696555494806;
        result[2] += 0.009841443411700382;
        result[3] += 0.797156916347731;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8490245009074411;
        result[1] += 0;
        result[2] += 0.0022686025408348463;
        result[3] += 0.14848003629764067;
        result[4] += 0;
        result[5] += 0.0002268602540834846;
        result[6] += 0;
      } else {
        result[0] += 0.991890205864005;
        result[1] += 0;
        result[2] += 0.002495321272613849;
        result[3] += 0.004678727386150967;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009357454772301934;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9178938874319142;
        result[1] += 0.00040346984062941286;
        result[2] += 0.0016138793625176515;
        result[3] += 0.07984668146056081;
        result[4] += 0;
        result[5] += 8.069396812588258e-05;
        result[6] += 0.00016138793625176517;
      } else {
        result[0] += 0.029069767441860465;
        result[1] += 0;
        result[2] += 0.005813953488372093;
        result[3] += 0;
        result[4] += 0.9651162790697675;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.23485148514851484;
        result[1] += 0.005544554455445544;
        result[2] += 0.01782178217821782;
        result[3] += 0.7401980198019802;
        result[4] += 0;
        result[5] += 0.0015841584158415843;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.3510558069381599;
        result[1] += 0.00301659125188537;
        result[2] += 0.0067873303167420825;
        result[3] += 0.63763197586727;
        result[4] += 0.001508295625942685;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0019047619047619048;
        result[1] += 0;
        result[2] += 0.009523809523809525;
        result[3] += 0.18857142857142858;
        result[4] += 0.8;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.0035211267605633804;
        result[1] += 0.045774647887323945;
        result[2] += 0;
        result[3] += 0.19718309859154928;
        result[4] += 0.7535211267605634;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0030627871362940277;
        result[2] += 0;
        result[3] += 0.05666156202143951;
        result[4] += 0.9402756508422665;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.11847826086956523;
        result[1] += 0;
        result[2] += 0.004891304347826088;
        result[3] += 0.7994565217391305;
        result[4] += 0.07500000000000001;
        result[5] += 0.0021739130434782613;
        result[6] += 0;
      } else {
        result[0] += 0.9932471471905243;
        result[1] += 0.0005055611729019212;
        result[2] += 0.0014805720063556262;
        result[3] += 0.004622273580817565;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001444460494005489;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4452993056858698;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5547006943141303;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8122500000000001;
        result[1] += 0;
        result[2] += 0.011750000000000002;
        result[3] += 0.0012500000000000002;
        result[4] += 0.17200000000000001;
        result[5] += 0.0015000000000000002;
        result[6] += 0.0012500000000000002;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9699157641395909;
        result[1] += 0;
        result[2] += 0.027677496991576414;
        result[3] += 0.0024067388688327317;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06390977443609022;
        result[1] += 0.011278195488721804;
        result[2] += 0.00046992481203007516;
        result[3] += 0.9243421052631579;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        result[0] += 0.9995027539779682;
        result[1] += 0;
        result[2] += 0.0004972460220318238;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0033039647577092516;
        result[2] += 0;
        result[3] += 0.22136563876651985;
        result[4] += 0.7720264317180617;
        result[5] += 0.0033039647577092516;
        result[6] += 0;
      } else {
        result[0] += 0.6060298961236381;
        result[1] += 0.0012667848999239927;
        result[2] += 0.007262900092897558;
        result[3] += 0.37235030825099225;
        result[4] += 0.01173887340596233;
        result[5] += 0.0005911662866311966;
        result[6] += 0.0007600709399543955;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.32923832923832924;
        result[1] += 0.002457002457002457;
        result[2] += 0;
        result[3] += 0.6150696150696151;
        result[4] += 0.05323505323505324;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1617161716171617;
        result[1] += 0;
        result[2] += 0.0049504950495049506;
        result[3] += 0.14026402640264027;
        result[4] += 0.693069306930693;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.26806784660766964;
        result[1] += 0.004793510324483776;
        result[2] += 0.01032448377581121;
        result[3] += 0.4823008849557522;
        result[4] += 0.2345132743362832;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0028653295128939827;
        result[2] += 0;
        result[3] += 0.054441260744985676;
        result[4] += 0.9426934097421203;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0026666666666666666;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.996;
        result[5] += 0.0013333333333333333;
        result[6] += 0;
      } else {
        result[0] += 0.1303549571603427;
        result[1] += 0;
        result[2] += 0.012239902080783354;
        result[3] += 0.8549571603427173;
        result[4] += 0;
        result[5] += 0.0024479804161566705;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9996936274509804;
        result[1] += 0;
        result[2] += 0.00026807598039215694;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.829656862745099e-05;
      } else {
        result[0] += 0.686495341455923;
        result[1] += 0.0010238558410975733;
        result[2] += 0.004709736869048837;
        result[3] += 0.3068495955769427;
        result[4] += 0;
        result[5] += 0.00010238558410975732;
        result[6] += 0.0008190846728780586;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.9648978753977215;
        result[1] += 0;
        result[2] += 0.00020527558246946528;
        result[3] += 0.0345889356461049;
        result[4] += 0;
        result[5] += 0.00010263779123473264;
        result[6] += 0.00020527558246946528;
      } else {
        result[0] += 0.9772893772893774;
        result[1] += 0.0008372579801151231;
        result[2] += 0.0009942438513867087;
        result[3] += 0.0206698063840921;
        result[4] += 5.232862375719519e-05;
        result[5] += 0;
        result[6] += 0.0001569858712715856;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16771970132107986;
        result[1] += 0.005743825387708215;
        result[2] += 0.013785180930499715;
        result[3] += 0.8118897185525561;
        result[4] += 0;
        result[5] += 0.0008615738081562322;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)53) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9937643583852971;
        result[4] += 0.005251066622907779;
        result[5] += 0.0009845749917952087;
        result[6] += 0;
      } else {
        result[0] += 0.4528718703976436;
        result[1] += 0;
        result[2] += 0.017673048600883652;
        result[3] += 0;
        result[4] += 0.5294550810014728;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9838274932614556;
        result[1] += 0;
        result[2] += 0.008984725965858042;
        result[3] += 0.0035938903863432167;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0035938903863432167;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.0024875621890547263;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9925373134328358;
        result[5] += 0.004975124378109453;
        result[6] += 0;
      } else {
        result[0] += 0.1946995539228549;
        result[1] += 0.0002623983206507478;
        result[2] += 0.008921542902125426;
        result[3] += 0.7953293098924167;
        result[4] += 0;
        result[5] += 0.0007871949619522435;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7288888888888889;
        result[4] += 0.27111111111111114;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008802816901408451;
        result[2] += 0;
        result[3] += 0.008802816901408451;
        result[4] += 0.9823943661971831;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993892197282028;
        result[1] += 0;
        result[2] += 0.0005598819158141192;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.089835598310175e-05;
      } else {
        result[0] += 0.7073170731707317;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2926829268292683;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.99913028352757;
        result[1] += 0;
        result[2] += 0.0008697164724299878;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6885478577131199;
        result[1] += 0.0018628581566575001;
        result[2] += 0.007274017564091191;
        result[3] += 0.3011620686596292;
        result[4] += 0;
        result[5] += 8.870753126940477e-05;
        result[6] += 0.0010644903752328573;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 100;
  result[1] /= 100;
  result[2] /= 100;
  result[3] /= 100;
  result[4] /= 100;
  result[5] /= 100;
  result[6] /= 100;
  
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
    

    FILE* file = fopen("./codegen/dataset_148/split_2/test_data.csv", "r");
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
