
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
  if ( LIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.21978021978021978;
        result[1] += 0.0027472527472527475;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6840659340659341;
        result[5] += 0.09340659340659341;
      } else {
        result[0] += 0.0016906170752324597;
        result[1] += 0.0084530853761623;
        result[2] += 0.006762468300929839;
        result[3] += 0.1614539306846999;
        result[4] += 0.07776838546069316;
        result[5] += 0.7438715131022823;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0.8276515151515151;
        result[2] += 0;
        result[3] += 0.001893939393939394;
        result[4] += 0.17045454545454544;
        result[5] += 0;
      } else {
        result[0] += 0.7440559440559441;
        result[1] += 0.03006993006993007;
        result[2] += 0.03986013986013986;
        result[3] += 0.06993006993006994;
        result[4] += 0.05524475524475524;
        result[5] += 0.06083916083916084;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)88.5) ) ) {
        result[0] += 0.008695652173913044;
        result[1] += 0.06956521739130435;
        result[2] += 0.06956521739130435;
        result[3] += 0.17391304347826086;
        result[4] += 0.10434782608695652;
        result[5] += 0.5739130434782609;
      } else {
        result[0] += 0;
        result[1] += 0.018518518518518517;
        result[2] += 0.3472222222222222;
        result[3] += 0.4027777777777778;
        result[4] += 0.032407407407407406;
        result[5] += 0.19907407407407407;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.009202453987730064;
        result[1] += 0;
        result[2] += 0.9182004089979551;
        result[3] += 0.06032719836400819;
        result[4] += 0;
        result[5] += 0.01226993865030675;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.008771929824561403;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.881578947368421;
        result[5] += 0.10964912280701754;
      } else {
        result[0] += 0.03611349957007739;
        result[1] += 0.018916595012897677;
        result[2] += 0.005159071367153913;
        result[3] += 0.15047291487532244;
        result[4] += 0.04557179707652623;
        result[5] += 0.7437661220980224;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)52.5) ) ) {
        result[0] += 0;
        result[1] += 0.952755905511811;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.047244094488188976;
        result[5] += 0;
      } else {
        result[0] += 0.6116291826659352;
        result[1] += 0.02578167855183763;
        result[2] += 0.05979155238617663;
        result[3] += 0.08283049917718047;
        result[4] += 0.12068019747668678;
        result[5] += 0.09928688974218322;
      }
    }
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.014423076923076924;
        result[1] += 0.02403846153846154;
        result[2] += 0.3701923076923077;
        result[3] += 0.3557692307692308;
        result[4] += 0.019230769230769232;
        result[5] += 0.21634615384615385;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8918918918918919;
        result[3] += 0.10810810810810811;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.020833333333333332;
        result[1] += 0.020833333333333332;
        result[2] += 0.4791666666666667;
        result[3] += 0.3958333333333333;
        result[4] += 0;
        result[5] += 0.08333333333333333;
      } else {
        result[0] += 0.014925373134328358;
        result[1] += 0;
        result[2] += 0.9430122116689281;
        result[3] += 0.04206241519674356;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0.00784313725490196;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9725490196078431;
        result[5] += 0.0196078431372549;
      } else {
        result[0] += 0.03346938775510204;
        result[1] += 0.006530612244897959;
        result[2] += 0.004081632653061225;
        result[3] += 0.13306122448979593;
        result[4] += 0.05714285714285714;
        result[5] += 0.7657142857142857;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)58.5) ) ) {
        result[0] += 0.012797074954296163;
        result[1] += 0.8519195612431445;
        result[2] += 0.005484460694698355;
        result[3] += 0.02193784277879342;
        result[4] += 0.10420475319926875;
        result[5] += 0.0036563071297989035;
      } else {
        result[0] += 0.7355263157894737;
        result[1] += 0.0375;
        result[2] += 0.021710526315789475;
        result[3] += 0.06513157894736842;
        result[4] += 0.09078947368421053;
        result[5] += 0.049342105263157895;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.07339449541284404;
        result[3] += 0.3394495412844037;
        result[4] += 0.045871559633027525;
        result[5] += 0.5412844036697247;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.43703703703703706;
        result[3] += 0.4148148148148148;
        result[4] += 0;
        result[5] += 0.14814814814814814;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)89) ) ) {
        result[0] += 0;
        result[1] += 0.8;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2;
        result[5] += 0;
      } else {
        result[0] += 0.014634146341463415;
        result[1] += 0;
        result[2] += 0.8721951219512195;
        result[3] += 0.09170731707317073;
        result[4] += 0.000975609756097561;
        result[5] += 0.02048780487804878;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.0043668122270742364;
        result[2] += 0;
        result[3] += 0.02183406113537118;
        result[4] += 0.8908296943231442;
        result[5] += 0.0829694323144105;
      } else {
        result[0] += 0.03541185527328714;
        result[1] += 0.010007698229407237;
        result[2] += 0.007698229407236336;
        result[3] += 0.1578137028483449;
        result[4] += 0.07082371054657428;
        result[5] += 0.7182448036951501;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)59.5) ) ) {
        result[0] += 0.01002004008016032;
        result[1] += 0.8937875751503006;
        result[2] += 0.006012024048096192;
        result[3] += 0;
        result[4] += 0.09018036072144289;
        result[5] += 0;
      } else {
        result[0] += 0.6225519287833828;
        result[1] += 0.04629080118694362;
        result[2] += 0.05400593471810089;
        result[3] += 0.09554896142433235;
        result[4] += 0.09554896142433235;
        result[5] += 0.08605341246290801;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17105263157894737;
        result[3] += 0.5657894736842105;
        result[4] += 0.039473684210526314;
        result[5] += 0.2236842105263158;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6909090909090909;
        result[3] += 0.2545454545454545;
        result[4] += 0;
        result[5] += 0.05454545454545454;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)87.5) ) ) {
        result[0] += 0.0158311345646438;
        result[1] += 0;
        result[2] += 0.841688654353562;
        result[3] += 0.1266490765171504;
        result[4] += 0;
        result[5] += 0.0158311345646438;
      } else {
        result[0] += 0.009107468123861567;
        result[1] += 0;
        result[2] += 0.9599271402550091;
        result[3] += 0.029143897996357013;
        result[4] += 0;
        result[5] += 0.0018214936247723133;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)61.5) ) ) {
        result[0] += 0.012552301255230125;
        result[1] += 0.03347280334728033;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.895397489539749;
        result[5] += 0.058577405857740586;
      } else {
        result[0] += 0.03596559812353401;
        result[1] += 0.007818608287724784;
        result[2] += 0.0023455824863174357;
        result[3] += 0.13213448006254885;
        result[4] += 0.05629397967161845;
        result[5] += 0.7654417513682564;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8419243986254296;
        result[2] += 0.003436426116838488;
        result[3] += 0.006872852233676976;
        result[4] += 0.140893470790378;
        result[5] += 0.006872852233676976;
      } else {
        result[0] += 0.7064220183486238;
        result[1] += 0.026867627785058978;
        result[2] += 0.043905635648754916;
        result[3] += 0.07404980340760157;
        result[4] += 0.07732634338138926;
        result[5] += 0.07142857142857142;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
      if ( LIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04201680672268908;
        result[3] += 0.5378151260504201;
        result[4] += 0.06722689075630252;
        result[5] += 0.35294117647058826;
      } else {
        result[0] += 0.02631578947368421;
        result[1] += 0.11842105263157894;
        result[2] += 0.6578947368421053;
        result[3] += 0.17105263157894737;
        result[4] += 0;
        result[5] += 0.02631578947368421;
      }
    } else {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        result[0] += 0.22033898305084745;
        result[1] += 0.03389830508474576;
        result[2] += 0.3728813559322034;
        result[3] += 0.0847457627118644;
        result[4] += 0.1016949152542373;
        result[5] += 0.1864406779661017;
      } else {
        result[0] += 0.004228329809725159;
        result[1] += 0;
        result[2] += 0.904862579281184;
        result[3] += 0.07822410147991543;
        result[4] += 0;
        result[5] += 0.012684989429175475;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0.06997084548104957;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9037900874635568;
        result[5] += 0.026239067055393587;
      } else {
        result[0] += 0;
        result[1] += 0.9889624724061811;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011037527593818985;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        result[0] += 0.03863845446182153;
        result[1] += 0.004599816007359705;
        result[2] += 0;
        result[3] += 0.13247470101195952;
        result[4] += 0.050597976080956765;
        result[5] += 0.7736890524379025;
      } else {
        result[0] += 0.6950532247964936;
        result[1] += 0.020037570444583597;
        result[2] += 0.027551659361302445;
        result[3] += 0.06825297432686288;
        result[4] += 0.07827175954915468;
        result[5] += 0.11083281152160301;
      }
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)99) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.04411764705882353;
        result[2] += 0.03676470588235294;
        result[3] += 0.5441176470588235;
        result[4] += 0.058823529411764705;
        result[5] += 0.3161764705882353;
      } else {
        result[0] += 0.0064516129032258064;
        result[1] += 0.01935483870967742;
        result[2] += 0.4645161290322581;
        result[3] += 0.21935483870967742;
        result[4] += 0.09032258064516129;
        result[5] += 0.2;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        result[0] += 0.023715415019762848;
        result[1] += 0.003952569169960475;
        result[2] += 0.6521739130434784;
        result[3] += 0.26086956521739135;
        result[4] += 0.00790513833992095;
        result[5] += 0.051383399209486175;
      } else {
        result[0] += 0.029925187032418952;
        result[1] += 0.004987531172069825;
        result[2] += 0.9089775561097256;
        result[3] += 0.048628428927680795;
        result[4] += 0;
        result[5] += 0.007481296758104738;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13989637305699482;
        result[1] += 0.025906735751295335;
        result[2] += 0.0051813471502590676;
        result[3] += 0.03626943005181347;
        result[4] += 0.6683937823834197;
        result[5] += 0.12435233160621761;
      } else {
        result[0] += 0.0017857142857142857;
        result[1] += 0.0125;
        result[2] += 0.0026785714285714286;
        result[3] += 0.16785714285714284;
        result[4] += 0.05357142857142857;
        result[5] += 0.7616071428571428;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0018018018018018018;
        result[1] += 0.8432432432432433;
        result[2] += 0;
        result[3] += 0.0018018018018018018;
        result[4] += 0.15315315315315314;
        result[5] += 0;
      } else {
        result[0] += 0.6582278481012659;
        result[1] += 0.02350813743218807;
        result[2] += 0.06690777576853528;
        result[3] += 0.08318264014466548;
        result[4] += 0.07836045810729357;
        result[5] += 0.08981314044605185;
      }
    }
  } else {
    if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
      if ( LIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)85.5) ) ) {
        result[0] += 0.013513513513513514;
        result[1] += 0.06756756756756757;
        result[2] += 0.22297297297297297;
        result[3] += 0.3716216216216216;
        result[4] += 0.02027027027027027;
        result[5] += 0.30405405405405406;
      } else {
        result[0] += 0.13725490196078433;
        result[1] += 0;
        result[2] += 0.6862745098039216;
        result[3] += 0.058823529411764705;
        result[4] += 0.0392156862745098;
        result[5] += 0.0784313725490196;
      }
    } else {
      if ( UNLIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)73) ) ) {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0.4;
        result[3] += 0.1;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.011148272017837236;
        result[1] += 0;
        result[2] += 0.9141583054626533;
        result[3] += 0.06911928651059086;
        result[4] += 0;
        result[5] += 0.005574136008918618;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.1111111111111111;
        result[2] += 0.0038314176245210726;
        result[3] += 0.022988505747126436;
        result[4] += 0.7624521072796935;
        result[5] += 0.09961685823754789;
      } else {
        result[0] += 0.04096385542168675;
        result[1] += 0.00321285140562249;
        result[2] += 0.010441767068273093;
        result[3] += 0.14859437751004015;
        result[4] += 0.05783132530120482;
        result[5] += 0.7389558232931727;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9905660377358491;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009433962264150943;
        result[5] += 0;
      } else {
        result[0] += 0.5920129519697788;
        result[1] += 0.02914193200215866;
        result[2] += 0.06314085267134377;
        result[3] += 0.09120345385860766;
        result[4] += 0.1397733405288721;
        result[5] += 0.08472746896923908;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)99) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16666666666666666;
        result[3] += 0.08333333333333333;
        result[4] += 0;
        result[5] += 0.75;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3076923076923077;
        result[3] += 0.47692307692307695;
        result[4] += 0;
        result[5] += 0.2153846153846154;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)85.5) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.009656652360515022;
        result[1] += 0.001072961373390558;
        result[2] += 0.9002145922746781;
        result[3] += 0.07188841201716738;
        result[4] += 0.001072961373390558;
        result[5] += 0.016094420600858368;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.028;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.948;
        result[5] += 0.024;
      } else {
        result[0] += 0.03400309119010819;
        result[1] += 0.00463678516228748;
        result[2] += 0.00231839258114374;
        result[3] += 0.15224111282843894;
        result[4] += 0.03786707882534776;
        result[5] += 0.7689335394126738;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)59.5) ) ) {
        result[0] += 0;
        result[1] += 0.9140767824497258;
        result[2] += 0.003656307129798903;
        result[3] += 0;
        result[4] += 0.08226691042047532;
        result[5] += 0;
      } else {
        result[0] += 0.6437718277066357;
        result[1] += 0.04074505238649592;
        result[2] += 0.05180442374854482;
        result[3] += 0.08323632130384168;
        result[4] += 0.11350407450523865;
        result[5] += 0.06693830034924331;
      }
    }
  } else {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)82) ) ) {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.008403361344537815;
        result[1] += 0;
        result[2] += 0.2689075630252101;
        result[3] += 0.46218487394957986;
        result[4] += 0.008403361344537815;
        result[5] += 0.25210084033613445;
      } else {
        result[0] += 0.007246376811594203;
        result[1] += 0;
        result[2] += 0.8333333333333334;
        result[3] += 0.13043478260869565;
        result[4] += 0;
        result[5] += 0.028985507246376812;
      }
    } else {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)84.5) ) ) {
        result[0] += 0.030456852791878177;
        result[1] += 0;
        result[2] += 0.8375634517766498;
        result[3] += 0.10659898477157362;
        result[4] += 0;
        result[5] += 0.02538071065989848;
      } else {
        result[0] += 0.0053285968028419185;
        result[1] += 0;
        result[2] += 0.9644760213143873;
        result[3] += 0.03019538188277087;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
      if ( UNLIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)88.5) ) ) {
        result[0] += 0.005917159763313609;
        result[1] += 0.07988165680473373;
        result[2] += 0.0029585798816568047;
        result[3] += 0.011834319526627219;
        result[4] += 0.8846153846153846;
        result[5] += 0.014792899408284023;
      } else {
        result[0] += 0;
        result[1] += 0.9623893805309736;
        result[2] += 0;
        result[3] += 0.011061946902654869;
        result[4] += 0.019911504424778764;
        result[5] += 0.006637168141592921;
      }
    } else {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
        result[0] += 0.03130148270181219;
        result[1] += 0.002471169686985173;
        result[2] += 0.005766062602965404;
        result[3] += 0.1457990115321252;
        result[4] += 0.051894563426688634;
        result[5] += 0.7627677100494233;
      } else {
        result[0] += 0.6051640667025282;
        result[1] += 0.027972027972027972;
        result[2] += 0.07423345884884347;
        result[3] += 0.11565357719203873;
        result[4] += 0.07638515330823023;
        result[5] += 0.10059171597633136;
      }
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)104.5) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0.030303030303030304;
        result[1] += 0;
        result[2] += 0.3838383838383838;
        result[3] += 0.48484848484848486;
        result[4] += 0;
        result[5] += 0.10101010101010101;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8192771084337349;
        result[3] += 0.12650602409638553;
        result[4] += 0;
        result[5] += 0.05421686746987952;
      }
    } else {
      if ( LIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)124.5) ) ) {
        result[0] += 0.007374631268436578;
        result[1] += 0;
        result[2] += 0.948377581120944;
        result[3] += 0.04129793510324484;
        result[4] += 0;
        result[5] += 0.0029498525073746312;
      } else {
        result[0] += 0.3;
        result[1] += 0;
        result[2] += 0.7;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)71.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.07563025210084033;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9033613445378151;
        result[5] += 0.02100840336134454;
      } else {
        result[0] += 0.018298261665141813;
        result[1] += 0.011893870082342177;
        result[2] += 0.008234217749313814;
        result[3] += 0.1463860933211345;
        result[4] += 0.035681610247026534;
        result[5] += 0.7795059469350412;
      }
    } else {
      if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.006637168141592921;
        result[1] += 0.9469026548672568;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.044247787610619475;
        result[5] += 0.002212389380530974;
      } else {
        result[0] += 0.5808444902162719;
        result[1] += 0.027806385169927908;
        result[2] += 0.054067971163748715;
        result[3] += 0.1035015447991761;
        result[4] += 0.12770339855818744;
        result[5] += 0.10607621009268794;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0625;
        result[3] += 0.125;
        result[4] += 0.03125;
        result[5] += 0.78125;
      } else {
        result[0] += 0;
        result[1] += 0.09649122807017546;
        result[2] += 0.42105263157894746;
        result[3] += 0.29824561403508776;
        result[4] += 0.05263157894736843;
        result[5] += 0.13157894736842107;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
        result[0] += 0.005277044854881266;
        result[1] += 0;
        result[2] += 0.7889182058047494;
        result[3] += 0.1741424802110818;
        result[4] += 0;
        result[5] += 0.0316622691292876;
      } else {
        result[0] += 0.005208333333333333;
        result[1] += 0;
        result[2] += 0.9670138888888888;
        result[3] += 0.020833333333333332;
        result[4] += 0;
        result[5] += 0.006944444444444444;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)71.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1152542372881356;
        result[1] += 0.07796610169491526;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7084745762711865;
        result[5] += 0.09830508474576272;
      } else {
        result[0] += 0.002909796314258002;
        result[1] += 0.007759456838021339;
        result[2] += 0.0038797284190106693;
        result[3] += 0.12221144519883609;
        result[4] += 0.0504364694471387;
        result[5] += 0.8128031037827352;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)50) ) ) {
        result[0] += 0;
        result[1] += 0.989010989010989;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01098901098901099;
        result[5] += 0;
      } else {
        result[0] += 0.575609756097561;
        result[1] += 0.02536585365853659;
        result[2] += 0.060000000000000005;
        result[3] += 0.12097560975609757;
        result[4] += 0.11512195121951221;
        result[5] += 0.10292682926829269;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0.08791208791208792;
        result[2] += 0.10989010989010989;
        result[3] += 0.14285714285714285;
        result[4] += 0.06593406593406594;
        result[5] += 0.5934065934065934;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.543859649122807;
        result[3] += 0.3508771929824561;
        result[4] += 0;
        result[5] += 0.10526315789473684;
      }
    } else {
      if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7991071428571429;
        result[3] += 0.1875;
        result[4] += 0;
        result[5] += 0.013392857142857142;
      } else {
        result[0] += 0.012841091492776886;
        result[1] += 0;
        result[2] += 0.9662921348314607;
        result[3] += 0.02086677367576244;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        result[0] += 0.004201680672268908;
        result[1] += 0.07142857142857144;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.911764705882353;
        result[5] += 0.012605042016806725;
      } else {
        result[0] += 0.03779289493575208;
        result[1] += 0.012093726379440665;
        result[2] += 0.0022675736961451248;
        result[3] += 0.14436885865457294;
        result[4] += 0.07029478458049887;
        result[5] += 0.7331821617535903;
      }
    } else {
      if ( LIKELY( !(data[7].missing != -1) || (data[7].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6227045075125208;
        result[1] += 0.05008347245409015;
        result[2] += 0.05175292153589316;
        result[3] += 0.0790205898720089;
        result[4] += 0.09738452977184196;
        result[5] += 0.09905397885364496;
      } else {
        result[0] += 0.010335917312661501;
        result[1] += 0.9689922480620156;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.018087855297157625;
        result[5] += 0.0025839793281653752;
      }
    }
  } else {
    if ( UNLIKELY( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)105.5) ) ) {
        result[0] += 0.006211180124223602;
        result[1] += 0;
        result[2] += 0.37267080745341613;
        result[3] += 0.43478260869565216;
        result[4] += 0;
        result[5] += 0.18633540372670807;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8588235294117647;
        result[3] += 0.09411764705882353;
        result[4] += 0;
        result[5] += 0.047058823529411764;
      }
    } else {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)85.5) ) ) {
        result[0] += 0.03501945525291829;
        result[1] += 0;
        result[2] += 0.8287937743190662;
        result[3] += 0.12062256809338522;
        result[4] += 0;
        result[5] += 0.01556420233463035;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9775086505190311;
        result[3] += 0.02249134948096886;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)88.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.1872037914691943;
        result[1] += 0.05687203791469194;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6753554502369669;
        result[5] += 0.08056872037914692;
      } else {
        result[0] += 0.007070707070707071;
        result[1] += 0.0030303030303030303;
        result[2] += 0.00909090909090909;
        result[3] += 0.07676767676767676;
        result[4] += 0.08585858585858586;
        result[5] += 0.8181818181818182;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0;
        result[1] += 0.8987854251012146;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0931174089068826;
        result[5] += 0.008097165991902834;
      } else {
        result[0] += 0.584305408271474;
        result[1] += 0.024920466595970307;
        result[2] += 0.0535524920466596;
        result[3] += 0.15164369034994699;
        result[4] += 0.0535524920466596;
        result[5] += 0.1320254506892895;
      }
    }
  } else {
    if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)100.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15217391304347827;
        result[3] += 0.391304347826087;
        result[4] += 0.010869565217391304;
        result[5] += 0.44565217391304346;
      } else {
        result[0] += 0.02;
        result[1] += 0;
        result[2] += 0.76;
        result[3] += 0.16;
        result[4] += 0;
        result[5] += 0.06;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3;
        result[3] += 0.7;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.009615384615384616;
        result[1] += 0.003605769230769231;
        result[2] += 0.921875;
        result[3] += 0.056490384615384616;
        result[4] += 0.002403846153846154;
        result[5] += 0.006009615384615385;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        result[0] += 0.018867924528301886;
        result[1] += 0.009433962264150943;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.839622641509434;
        result[5] += 0.1320754716981132;
      } else {
        result[0] += 0.032532920216886134;
        result[1] += 0.02865995352439969;
        result[2] += 0.000774593338497289;
        result[3] += 0.14562354763749033;
        result[4] += 0.06584043377226956;
        result[5] += 0.726568551510457;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)58.5) ) ) {
        result[0] += 0.0038910505836575876;
        result[1] += 0.8638132295719845;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.13229571984435798;
        result[5] += 0;
      } else {
        result[0] += 0.6527855936972425;
        result[1] += 0.028700056274620148;
        result[2] += 0.05008441193021947;
        result[3] += 0.08103545301069218;
        result[4] += 0.09566685424873382;
        result[5] += 0.09172763083849184;
      }
    }
  } else {
    if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.26506024096385544;
        result[3] += 0.5662650602409639;
        result[4] += 0;
        result[5] += 0.1686746987951807;
      } else {
        result[0] += 0.015037593984962405;
        result[1] += 0;
        result[2] += 0.6992481203007519;
        result[3] += 0.2631578947368421;
        result[4] += 0;
        result[5] += 0.022556390977443608;
      }
    } else {
      if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7142857142857143;
        result[4] += 0;
        result[5] += 0.2857142857142857;
      } else {
        result[0] += 0.011124845488257108;
        result[1] += 0;
        result[2] += 0.9295426452410384;
        result[3] += 0.05315203955500618;
        result[4] += 0;
        result[5] += 0.006180469715698393;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.10112359550561797;
        result[2] += 0;
        result[3] += 0.0299625468164794;
        result[4] += 0.8239700374531835;
        result[5] += 0.0449438202247191;
      } else {
        result[0] += 0.034959349593495934;
        result[1] += 0.0016260162601626016;
        result[2] += 0.0016260162601626016;
        result[3] += 0.13414634146341464;
        result[4] += 0.06016260162601626;
        result[5] += 0.767479674796748;
      }
    } else {
      if ( LIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6370786516853933;
        result[1] += 0.047191011235955066;
        result[2] += 0.032022471910112364;
        result[3] += 0.06404494382022473;
        result[4] += 0.1353932584269663;
        result[5] += 0.08426966292134833;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[10].missing != -1) || (data[10].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)99.5) ) ) {
        result[0] += 0.00641025641025641;
        result[1] += 0;
        result[2] += 0.17307692307692307;
        result[3] += 0.5576923076923077;
        result[4] += 0;
        result[5] += 0.26282051282051283;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7384615384615385;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0.06153846153846154;
      }
    } else {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.25;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0.5833333333333334;
      } else {
        result[0] += 0.017699115044247787;
        result[1] += 0;
        result[2] += 0.8893805309734514;
        result[3] += 0.07743362831858407;
        result[4] += 0;
        result[5] += 0.015486725663716814;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)30) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9814814814814815;
        result[5] += 0.018518518518518517;
      }
    } else {
      if ( LIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        result[0] += 0.03406813627254509;
        result[1] += 0.008016032064128256;
        result[2] += 0;
        result[3] += 0.045090180360721446;
        result[4] += 0.061122244488977955;
        result[5] += 0.8517034068136272;
      } else {
        result[0] += 0.02108433734939759;
        result[1] += 0;
        result[2] += 0.015060240963855422;
        result[3] += 0.48493975903614456;
        result[4] += 0.0030120481927710845;
        result[5] += 0.4759036144578313;
      }
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0068143100511073255;
        result[1] += 0.838160136286201;
        result[2] += 0.005110732538330494;
        result[3] += 0.013628620102214651;
        result[4] += 0.12776831345826234;
        result[5] += 0.008517887563884156;
      } else {
        result[0] += 0.7356948228882834;
        result[1] += 0.036103542234332424;
        result[2] += 0.022479564032697547;
        result[3] += 0.07288828337874659;
        result[4] += 0.07697547683923706;
        result[5] += 0.055858310626702996;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)85.5) ) ) {
        result[0] += 0.02952029520295203;
        result[1] += 0.016605166051660517;
        result[2] += 0.584870848708487;
        result[3] += 0.25276752767527677;
        result[4] += 0.016605166051660517;
        result[5] += 0.0996309963099631;
      } else {
        result[0] += 0.0029455081001472758;
        result[1] += 0;
        result[2] += 0.9484536082474228;
        result[3] += 0.03387334315169367;
        result[4] += 0;
        result[5] += 0.014727540500736378;
      }
    }
  }
  if ( LIKELY( !(data[8].missing != -1) || (data[8].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12745098039215685;
        result[1] += 0.029411764705882353;
        result[2] += 0.006535947712418301;
        result[3] += 0;
        result[4] += 0.738562091503268;
        result[5] += 0.09803921568627451;
      } else {
        result[0] += 0;
        result[1] += 0.01736745886654479;
        result[2] += 0;
        result[3] += 0.1663619744058501;
        result[4] += 0.03930530164533821;
        result[5] += 0.7769652650822669;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0019801980198019802;
        result[1] += 0.8831683168316832;
        result[2] += 0;
        result[3] += 0.01782178217821782;
        result[4] += 0.09108910891089109;
        result[5] += 0.005940594059405941;
      } else {
        result[0] += 0.6331460674157303;
        result[1] += 0.02247191011235955;
        result[2] += 0.05056179775280899;
        result[3] += 0.08089887640449438;
        result[4] += 0.13426966292134832;
        result[5] += 0.07865168539325842;
      }
    }
  } else {
    if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( UNLIKELY( !(data[27].missing != -1) || (data[27].fvalue <= (float)74.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05405405405405406;
        result[3] += 0.27927927927927926;
        result[4] += 0.07207207207207207;
        result[5] += 0.5945945945945946;
      } else {
        result[0] += 0.05263157894736842;
        result[1] += 0.1111111111111111;
        result[2] += 0.4853801169590643;
        result[3] += 0.23391812865497075;
        result[4] += 0;
        result[5] += 0.11695906432748537;
      }
    } else {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.012605042016806725;
        result[1] += 0;
        result[2] += 0.73109243697479;
        result[3] += 0.18487394957983197;
        result[4] += 0;
        result[5] += 0.07142857142857144;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9629629629629629;
        result[3] += 0.0322061191626409;
        result[4] += 0;
        result[5] += 0.004830917874396135;
      }
    }
  }
  if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
    if ( UNLIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)65) ) ) {
      if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.009852216748768473;
        result[1] += 0.029556650246305417;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9064039408866995;
        result[5] += 0.054187192118226604;
      } else {
        result[0] += 0;
        result[1] += 0.05555555555555555;
        result[2] += 0;
        result[3] += 0.06666666666666667;
        result[4] += 0.5;
        result[5] += 0.37777777777777777;
      }
    } else {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)83.5) ) ) {
        result[0] += 0.033507853403141365;
        result[1] += 0.004188481675392671;
        result[2] += 0.0020942408376963353;
        result[3] += 0.048167539267015703;
        result[4] += 0.04397905759162304;
        result[5] += 0.8680628272251308;
      } else {
        result[0] += 0.014336917562724014;
        result[1] += 0.014336917562724014;
        result[2] += 0.014336917562724014;
        result[3] += 0.46236559139784944;
        result[4] += 0.017921146953405017;
        result[5] += 0.4767025089605735;
      }
    }
  } else {
    if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6656327543424317;
        result[1] += 0.07196029776674938;
        result[2] += 0.02295285359801489;
        result[3] += 0.047766749379652605;
        result[4] += 0.1327543424317618;
        result[5] += 0.05893300248138958;
      } else {
        result[0] += 0.0022988505747126436;
        result[1] += 0.9862068965517241;
        result[2] += 0;
        result[3] += 0.0022988505747126436;
        result[4] += 0.009195402298850575;
        result[5] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0.007751937984496124;
        result[1] += 0.011627906976744186;
        result[2] += 0.3992248062015504;
        result[3] += 0.38372093023255816;
        result[4] += 0.023255813953488372;
        result[5] += 0.1744186046511628;
      } else {
        result[0] += 0.022132796780684104;
        result[1] += 0.0030181086519114686;
        result[2] += 0.8812877263581489;
        result[3] += 0.06639839034205232;
        result[4] += 0.002012072434607646;
        result[5] += 0.025150905432595575;
      }
    }
  }
  if ( LIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11464968152866242;
        result[1] += 0.022292993630573247;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7643312101910829;
        result[5] += 0.09872611464968153;
      } else {
        result[0] += 0.0008396305625524769;
        result[1] += 0.0041981528127623844;
        result[2] += 0.0016792611251049538;
        result[3] += 0.163727959697733;
        result[4] += 0.055415617128463476;
        result[5] += 0.7741393786733837;
      }
    } else {
      if ( LIKELY( !(data[35].missing != -1) || (data[35].fvalue <= (float)103.5) ) ) {
        result[0] += 0.5750677506775068;
        result[1] += 0.056910569105691054;
        result[2] += 0.06720867208672086;
        result[3] += 0.0975609756097561;
        result[4] += 0.11382113821138211;
        result[5] += 0.08943089430894309;
      } else {
        result[0] += 0.01141552511415525;
        result[1] += 0.9885844748858448;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.17647058823529413;
        result[3] += 0;
        result[4] += 0.20588235294117646;
        result[5] += 0.6176470588235294;
      } else {
        result[0] += 0;
        result[1] += 0.034722222222222224;
        result[2] += 0.3263888888888889;
        result[3] += 0.4305555555555556;
        result[4] += 0.04861111111111111;
        result[5] += 0.1597222222222222;
      }
    } else {
      if ( UNLIKELY( !(data[30].missing != -1) || (data[30].fvalue <= (float)105.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7342995169082126;
        result[3] += 0.25120772946859904;
        result[4] += 0;
        result[5] += 0.014492753623188406;
      } else {
        result[0] += 0.009188361408882083;
        result[1] += 0;
        result[2] += 0.9372128637059725;
        result[3] += 0.05053598774885146;
        result[4] += 0;
        result[5] += 0.0030627871362940277;
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
    

    FILE* file = fopen("./codegen_small/dataset_146/split_3/test_data.csv", "r");
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
