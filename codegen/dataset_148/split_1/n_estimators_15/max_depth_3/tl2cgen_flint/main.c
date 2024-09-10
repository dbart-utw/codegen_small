
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0014413375612568463;
        result[1] += 0.0002882675122513693;
        result[2] += 0;
        result[3] += 0.936004612280196;
        result[4] += 0.06168924762179302;
        result[5] += 0.0005765350245027386;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.9896907216494846;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.010309278350515464;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0038593481989708405;
        result[2] += 0.008576329331046312;
        result[3] += 0;
        result[4] += 0.9854202401372213;
        result[5] += 0.002144082332761578;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        result[0] += 0.996882815614919;
        result[1] += 0.0003624633005908152;
        result[2] += 0.0024285041139584618;
        result[3] += 0.0002174779803544891;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010873899017724455;
      } else {
        result[0] += 0.018050541516245487;
        result[1] += 0.01444043321299639;
        result[2] += 0;
        result[3] += 0.9675090252707581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.1865881750703865;
        result[1] += 0;
        result[2] += 0.006654722293319683;
        result[3] += 0.8067571026362939;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9909248889747057;
        result[1] += 0;
        result[2] += 0.006758061401815023;
        result[3] += 0.0013516122803630046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009654373431164318;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
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
        result[0] += 0.007664562669071236;
        result[1] += 0.007664562669071236;
        result[2] += 0.008115419296663661;
        result[3] += 0.9765554553651938;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9873817034700315;
        result[1] += 0;
        result[2] += 0.012618296529968454;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992721979621543;
        result[1] += 0;
        result[2] += 0.000727802037845706;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        result[0] += 0.6656013945380593;
        result[1] += 0.0014526438117373622;
        result[2] += 0.006391632771644394;
        result[3] += 0.31590160759248503;
        result[4] += 0.009296920395119118;
        result[5] += 9.684292078249081e-05;
        result[6] += 0.0012589579701723806;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00877674163466813;
        result[3] += 0.643993417443774;
        result[4] += 0.34503565551289084;
        result[5] += 0.0021941854086670325;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.994408201304753;
        result[1] += 0;
        result[2] += 0.005125815470643057;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00046598322460391424;
      } else {
        result[0] += 0.9996266954249451;
        result[1] += 0;
        result[2] += 0.0003733045750549587;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.7358000961076405;
        result[1] += 0.0010571840461316676;
        result[2] += 0.009514656415185008;
        result[3] += 0.2288322921672273;
        result[4] += 0.02335415665545411;
        result[5] += 0.00028832292167227293;
        result[6] += 0.0011532916866890917;
      } else {
        result[0] += 0.09096732863549008;
        result[1] += 0.003523382447149263;
        result[2] += 0.0028827674567584883;
        result[3] += 0.4119154388212684;
        result[4] += 0.4907110826393338;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.0013196964698119432;
        result[2] += 0.005608709996700759;
        result[3] += 0.9930715935334873;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014598540145985401;
        result[3] += 0;
        result[4] += 0.9824817518248176;
        result[5] += 0.00291970802919708;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9840475740985464;
        result[1] += 0.0001415895790069851;
        result[2] += 0.0012743062110628658;
        result[3] += 0.014253350953369832;
        result[4] += 4.7196526335661694e-05;
        result[5] += 9.439305267132339e-05;
        result[6] += 0.0001415895790069851;
      } else {
        result[0] += 0.7154370402423194;
        result[1] += 0.0005949805279099957;
        result[2] += 0.005192557334487235;
        result[3] += 0.26281912591951534;
        result[4] += 0.015307226308957162;
        result[5] += 0.0004868022501081783;
        result[6] += 0.0001622674167027261;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x42ec0000))) ) ) {
        result[0] += 0.75;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.09130859375;
        result[1] += 0.00244140625;
        result[2] += 0.00341796875;
        result[3] += 0.5771484375;
        result[4] += 0.32568359375;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ed0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.24381625441696114;
        result[4] += 0.7561837455830389;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002677376171352075;
        result[1] += 0.0214190093708166;
        result[2] += 0;
        result[3] += 0.06693440428380187;
        result[4] += 0.9089692101740294;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9992017940628682;
        result[1] += 0;
        result[2] += 0.0007601961306016952;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8009806530084765e-05;
      } else {
        result[0] += 0.5669291338582677;
        result[1] += 0.0014113801812509286;
        result[2] += 0.00869113058980835;
        result[3] += 0.4012776704798693;
        result[4] += 0.020502154211855594;
        result[5] += 0.0005199821720398158;
        result[6] += 0.0006685485069083346;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.002697841726618705;
        result[2] += 0.0017985611510791368;
        result[3] += 0.9955035971223022;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9530201342281879;
        result[1] += 0;
        result[2] += 0.04697986577181208;
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
        result[0] += 0;
        result[1] += 0.07738095238095238;
        result[2] += 0;
        result[3] += 0.9226190476190477;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9940064545873675;
        result[1] += 0;
        result[2] += 0.005532503457814661;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004610419548178884;
      } else {
        result[0] += 0.9998752183678562;
        result[1] += 0;
        result[2] += 0.00012478163214374845;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7360703812316716;
        result[1] += 0.0008513858669946079;
        result[2] += 0.007094882224955066;
        result[3] += 0.22864440450288526;
        result[4] += 0.02573077286917037;
        result[5] += 0.0006621890076624729;
        result[6] += 0.0009459842966606754;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008223684210526315;
        result[3] += 0.803453947368421;
        result[4] += 0.18804824561403508;
        result[5] += 0.00027412280701754384;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1860759493670886;
        result[1] += 0.008227848101265823;
        result[2] += 0.008860759493670886;
        result[3] += 0.7968354430379747;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 0.9957865168539326;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.004213483146067416;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0022494887525562374;
        result[2] += 0.0016359918200408998;
        result[3] += 0.6265848670756646;
        result[4] += 0.36830265848670757;
        result[5] += 0.001226993865030675;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.4140127388535032;
        result[1] += 0.012738853503184714;
        result[2] += 0;
        result[3] += 0.5732484076433121;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.994984595543455;
        result[1] += 0.00025077022282725517;
        result[2] += 0.002364404958085549;
        result[3] += 0.002221107687898546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001791215877337537;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9955142582505607;
        result[4] += 0.0028836911246395386;
        result[5] += 0.0016020506247997437;
        result[6] += 0;
      } else {
        result[0] += 0.45849495733126455;
        result[1] += 0;
        result[2] += 0.02017067494181536;
        result[3] += 0;
        result[4] += 0.5213343677269201;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.6190476190476191;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.38095238095238093;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9940968122786304;
        result[1] += 0;
        result[2] += 0.00452577725304998;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013774104683195593;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.21226415094339623;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7841981132075472;
        result[4] += 0.0011792452830188679;
        result[5] += 0.0023584905660377358;
        result[6] += 0;
      } else {
        result[0] += 0.9946142597282163;
        result[1] += 0.00035667154117772945;
        result[2] += 0.001248350394122053;
        result[3] += 0.003281378178835111;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004993401576488212;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.15533411488862836;
        result[1] += 0.00615474794841735;
        result[2] += 0.004689331770222743;
        result[3] += 0.7596717467760844;
        result[4] += 0.07415005861664713;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.023809523809523808;
        result[1] += 0;
        result[2] += 0.019642857142857142;
        result[3] += 0.05238095238095238;
        result[4] += 0.9041666666666667;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4291782086795937;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5708217913204062;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9786299765807963;
        result[1] += 0;
        result[2] += 0.016100702576112416;
        result[3] += 0.0008782201405152226;
        result[4] += 0.0029274004683840756;
        result[5] += 0.0011709601873536302;
        result[6] += 0.00029274004683840755;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x433f0000))) ) ) {
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9962121212121212;
        result[5] += 0.003787878787878788;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0015262515262515263;
        result[1] += 0.003968253968253968;
        result[2] += 0.003663003663003663;
        result[3] += 0.9880952380952381;
        result[4] += 0;
        result[5] += 0.0027472527472527475;
        result[6] += 0;
      } else {
        result[0] += 0.9793956043956044;
        result[1] += 0;
        result[2] += 0.020604395604395604;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.999024540507239;
        result[1] += 5.133997330321388e-05;
        result[2] += 0.0007700995995482083;
        result[3] += 0.00015401991990964166;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.878125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.121875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9994719239570499;
        result[1] += 0;
        result[2] += 0.0005280760429501848;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6937168141592921;
        result[1] += 0.00168141592920354;
        result[2] += 0.007610619469026549;
        result[3] += 0.296283185840708;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007079646017699116;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.00039872408293460925;
        result[1] += 0.0021929824561403508;
        result[2] += 0.0021929824561403508;
        result[3] += 0.6419457735247209;
        result[4] += 0.35167464114832536;
        result[5] += 0.001594896331738437;
        result[6] += 0;
      } else {
        result[0] += 0.9972714870395635;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002728512960436562;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.44516129032258067;
        result[1] += 0.010752688172043012;
        result[2] += 0;
        result[3] += 0.5440860215053763;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9945652173913043;
        result[1] += 0.000683846818312698;
        result[2] += 0.0026274114598329973;
        result[3] += 0.0020155485171321624;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010797581341779442;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.995492594977463;
        result[4] += 0.0022537025112685126;
        result[5] += 0.0022537025112685126;
        result[6] += 0;
      } else {
        result[0] += 0.4396551724137931;
        result[1] += 0;
        result[2] += 0.02037617554858934;
        result[3] += 0;
        result[4] += 0.5399686520376176;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9586776859504132;
        result[1] += 0;
        result[2] += 0.02809917355371901;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.013223140495867768;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.4246861924686193;
        result[1] += 0;
        result[2] += 0.02092050209205021;
        result[3] += 0.4435146443514644;
        result[4] += 0.1108786610878661;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9955762967284042;
        result[1] += 4.861212386369161e-05;
        result[2] += 0.0004861212386369161;
        result[3] += 0.003840357785231637;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.861212386369161e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0.7336829836829836;
        result[1] += 0.0006798756798756798;
        result[2] += 0.003885003885003884;
        result[3] += 0.26126651126651124;
        result[4] += 0;
        result[5] += 9.71250971250971e-05;
        result[6] += 0.0003885003885003884;
      } else {
        result[0] += 0.9728979940247546;
        result[1] += 0;
        result[2] += 0.006188647033717456;
        result[3] += 0.020273154075970978;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006402048655569782;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9924242424242424;
        result[5] += 0.007575757575757576;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.5734424738517508;
        result[1] += 0;
        result[2] += 0.010914051841746248;
        result[3] += 0.4142792178262847;
        result[4] += 0;
        result[5] += 0.001364256480218281;
        result[6] += 0;
      } else {
        result[0] += 0.07244825124910778;
        result[1] += 0.004996431120628123;
        result[2] += 0.013561741613133477;
        result[3] += 0.9075660242683797;
        result[4] += 0;
        result[5] += 0.0014275517487508922;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9276218611521418;
        result[4] += 0.07149187592319055;
        result[5] += 0.0008862629246676514;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41940000))) ) ) {
        result[0] += 0.1024390243902439;
        result[1] += 0;
        result[2] += 0.05853658536585366;
        result[3] += 0;
        result[4] += 0.8292682926829268;
        result[5] += 0.00975609756097561;
        result[6] += 0;
      } else {
        result[0] += 0.04090073529411765;
        result[1] += 0.003676470588235294;
        result[2] += 0.008731617647058824;
        result[3] += 0;
        result[4] += 0.9462316176470589;
        result[5] += 0.00045955882352941176;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.996105301117923;
        result[1] += 0.0007573025604038948;
        result[2] += 0.0028849621348719804;
        result[3] += 0.00018031013342949877;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.212405337179951e-05;
      } else {
        result[0] += 0.00749063670411985;
        result[1] += 0.0299625468164794;
        result[2] += 0;
        result[3] += 0.9625468164794008;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0.8136256851996868;
        result[1] += 0;
        result[2] += 0.009658052727747325;
        result[3] += 0.17358392064735056;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0031323414252153485;
      } else {
        result[0] += 0.5371838429596074;
        result[1] += 0;
        result[2] += 0.0020762551906379767;
        result[3] += 0.4607399018497546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
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
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985029940119761;
        result[5] += 0.0014970059880239522;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0009578544061302681;
        result[1] += 0.00351213282247765;
        result[2] += 0.005108556832694764;
        result[3] += 0.98786717752235;
        result[4] += 0;
        result[5] += 0.002554278416347382;
        result[6] += 0;
      } else {
        result[0] += 0.9779917469050894;
        result[1] += 0;
        result[2] += 0.02200825309491059;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        result[0] += 0.9965543232475503;
        result[1] += 0.0006101719249129607;
        result[2] += 0.0024765801658231936;
        result[3] += 7.178493234270127e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002871397293708051;
      } else {
        result[0] += 0.007017543859649123;
        result[1] += 0.010526315789473684;
        result[2] += 0;
        result[3] += 0.9824561403508771;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.45364238410596025;
        result[1] += 0;
        result[2] += 0.003104304635761589;
        result[3] += 0.5432533112582781;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8533552322853121;
        result[1] += 0;
        result[2] += 0.00961989676208353;
        result[3] += 0.1349131862975129;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002111684655091506;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 0.06461538461538462;
        result[1] += 0;
        result[2] += 0.01;
        result[3] += 0.7253846153846154;
        result[4] += 0.19692307692307692;
        result[5] += 0.003076923076923077;
        result[6] += 0;
      } else {
        result[0] += 0.8952590062616899;
        result[1] += 0;
        result[2] += 0.003578108481743515;
        result[3] += 0.10034967878344311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000813206473123526;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9526207673447751;
        result[1] += 0.0001325293221125174;
        result[2] += 0.0007289112716188456;
        result[3] += 0.012325226956464118;
        result[4] += 0.03412630044397323;
        result[5] += 0;
        result[6] += 6.62646610562587e-05;
      } else {
        result[0] += 0.722972391846564;
        result[1] += 0.0011180872108024426;
        result[2] += 0.0034402683409305926;
        result[3] += 0.2582781456953642;
        result[4] += 0.013675066655199106;
        result[5] += 0.00017201341704652963;
        result[6] += 0.00034402683409305926;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.16932624113475178;
        result[1] += 0.0035460992907801418;
        result[2] += 0;
        result[3] += 0.8271276595744681;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01084010840108401;
        result[1] += 0.037940379403794036;
        result[2] += 0;
        result[3] += 0.16531165311653118;
        result[4] += 0.7859078590785907;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 0.018673535093367676;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1468126207340631;
        result[4] += 0.8345138441725692;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5851851851851851;
        result[1] += 0;
        result[2] += 0.08148148148148149;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42100000))) ) ) {
        result[0] += 0;
        result[1] += 0.006383948928408573;
        result[2] += 0.009119927040583675;
        result[3] += 0.8682170542635659;
        result[4] += 0.11627906976744186;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989837398373984;
        result[1] += 0.0010162601626016261;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0.09404761904761905;
        result[1] += 0;
        result[2] += 0.004166666666666667;
        result[3] += 0.02261904761904762;
        result[4] += 0.8791666666666667;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.29856115107913667;
        result[1] += 0;
        result[2] += 0.046762589928057555;
        result[3] += 0.6546762589928058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987096774193548;
        result[5] += 0.0012903225806451613;
        result[6] += 0;
      } else {
        result[0] += 0.12004730928444707;
        result[1] += 0;
        result[2] += 0.01596688350088705;
        result[3] += 0.8610289769367239;
        result[4] += 0;
        result[5] += 0.0029568302779420462;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.9628934039041602;
        result[1] += 0.0007398554436287063;
        result[2] += 0.0026179500313015763;
        result[3] += 0.03357805474930283;
        result[4] += 0;
        result[5] += 0.00011382391440441637;
        result[6] += 5.6911957202208187e-05;
      } else {
        result[0] += 0.8598865124399826;
        result[1] += 0;
        result[2] += 0.0018005237887385424;
        result[3] += 0.1378219118288957;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004910519423832389;
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
