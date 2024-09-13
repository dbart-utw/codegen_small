
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
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15817694369973193;
        result[1] += 0.0804289544235925;
        result[2] += 0;
        result[3] += 0.013404825737265418;
        result[4] += 0.6166219839142092;
        result[5] += 0.1313672922252011;
      } else {
        result[0] += 0.007023705004389816;
        result[1] += 0.000877963125548727;
        result[2] += 0.004389815627743635;
        result[3] += 0.17120280948200176;
        result[4] += 0.05970149253731343;
        result[5] += 0.7568042142230026;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9326315789473684;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06736842105263158;
        result[5] += 0;
      } else {
        result[0] += 0.6371780515117581;
        result[1] += 0.027435610302351622;
        result[2] += 0.052071668533034715;
        result[3] += 0.09630459126539753;
        result[4] += 0.1019036954087346;
        result[5] += 0.0851063829787234;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)80.5) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || (data[2].fvalue <= (float)102.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19230769230769232;
        result[3] += 0.6923076923076923;
        result[4] += 0;
        result[5] += 0.11538461538461539;
      } else {
        result[0] += 0;
        result[1] += 0.04545454545454546;
        result[2] += 0.6515151515151516;
        result[3] += 0.18181818181818185;
        result[4] += 0;
        result[5] += 0.12121212121212123;
      }
    } else {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06666666666666667;
        result[3] += 0.06666666666666667;
        result[4] += 0.06666666666666667;
        result[5] += 0.8;
      } else {
        result[0] += 0.012154696132596685;
        result[1] += 0.0033149171270718232;
        result[2] += 0.912707182320442;
        result[3] += 0.057458563535911604;
        result[4] += 0.0011049723756906078;
        result[5] += 0.013259668508287293;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.19637462235649547;
        result[1] += 0.04833836858006042;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6706948640483383;
        result[5] += 0.08459214501510574;
      } else {
        result[0] += 0.00482315112540193;
        result[1] += 0.007234726688102894;
        result[2] += 0.023311897106109324;
        result[3] += 0.14710610932475884;
        result[4] += 0.06672025723472669;
        result[5] += 0.7508038585209004;
      }
    } else {
      if ( UNLIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)65) ) ) {
        result[0] += 0.010080645161290322;
        result[1] += 0.7923387096774194;
        result[2] += 0.0020161290322580645;
        result[3] += 0.004032258064516129;
        result[4] += 0.17338709677419356;
        result[5] += 0.018145161290322582;
      } else {
        result[0] += 0.7313848295059152;
        result[1] += 0.03340292275574113;
        result[2] += 0.048016701461377875;
        result[3] += 0.06471816283924844;
        result[4] += 0.08002783576896313;
        result[5] += 0.042449547668754355;
      }
    }
  } else {
    if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0.0189873417721519;
        result[2] += 0.06329113924050633;
        result[3] += 0.3670886075949367;
        result[4] += 0.0379746835443038;
        result[5] += 0.5126582278481012;
      } else {
        result[0] += 0.18518518518518517;
        result[1] += 0.037037037037037035;
        result[2] += 0.38271604938271603;
        result[3] += 0.012345679012345678;
        result[4] += 0.12345679012345678;
        result[5] += 0.25925925925925924;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4810810810810811;
        result[3] += 0.3891891891891892;
        result[4] += 0.016216216216216217;
        result[5] += 0.11351351351351352;
      } else {
        result[0] += 0.0011185682326621924;
        result[1] += 0;
        result[2] += 0.9082774049217002;
        result[3] += 0.07718120805369127;
        result[4] += 0;
        result[5] += 0.013422818791946308;
      }
    }
  }
  if ( LIKELY( !(data[32].missing != -1) || (data[32].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)74.5) ) ) {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)59.5) ) ) {
        result[0] += 0.259375;
        result[1] += 0.021875;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.68125;
        result[5] += 0.0375;
      } else {
        result[0] += 0.0007818608287724785;
        result[1] += 0.018764659890539485;
        result[2] += 0.028928850664581705;
        result[3] += 0.15871774824081314;
        result[4] += 0.053166536356528536;
        result[5] += 0.7396403440187647;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.8963414634146342;
        result[2] += 0;
        result[3] += 0.028455284552845527;
        result[4] += 0.07520325203252033;
        result[5] += 0;
      } else {
        result[0] += 0.6630630630630631;
        result[1] += 0.02942942942942943;
        result[2] += 0.06606606606606606;
        result[3] += 0.08888888888888889;
        result[4] += 0.0912912912912913;
        result[5] += 0.06126126126126126;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
      if ( UNLIKELY( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0.014285714285714285;
        result[2] += 0.1;
        result[3] += 0.4142857142857143;
        result[4] += 0.08571428571428572;
        result[5] += 0.38571428571428573;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5413533834586467;
        result[3] += 0.29323308270676696;
        result[4] += 0.02255639097744361;
        result[5] += 0.14285714285714288;
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.42105263157894735;
        result[3] += 0.21052631578947367;
        result[4] += 0;
        result[5] += 0.3684210526315789;
      } else {
        result[0] += 0.009433962264150943;
        result[1] += 0;
        result[2] += 0.9127358490566038;
        result[3] += 0.07193396226415094;
        result[4] += 0.003537735849056604;
        result[5] += 0.0023584905660377358;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.022222222222222223;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9666666666666667;
        result[5] += 0.011111111111111112;
      } else {
        result[0] += 0.04302788844621514;
        result[1] += 0.00398406374501992;
        result[2] += 0.00398406374501992;
        result[3] += 0.1258964143426295;
        result[4] += 0.05099601593625498;
        result[5] += 0.7721115537848605;
      }
    } else {
      if ( UNLIKELY( !(data[21].missing != -1) || (data[21].fvalue <= (float)65) ) ) {
        result[0] += 0.0067114093959731525;
        result[1] += 0.8338926174496643;
        result[2] += 0.01006711409395973;
        result[3] += 0.0016778523489932881;
        result[4] += 0.1442953020134228;
        result[5] += 0.0033557046979865762;
      } else {
        result[0] += 0.6861842105263158;
        result[1] += 0.04342105263157895;
        result[2] += 0.030921052631578946;
        result[3] += 0.08881578947368421;
        result[4] += 0.08223684210526316;
        result[5] += 0.06842105263157895;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.19491525423728814;
        result[3] += 0.5508474576271186;
        result[4] += 0;
        result[5] += 0.2542372881355932;
      } else {
        result[0] += 0.03286384976525822;
        result[1] += 0;
        result[2] += 0.6572769953051644;
        result[3] += 0.19718309859154928;
        result[4] += 0.004694835680751174;
        result[5] += 0.107981220657277;
      }
    } else {
      if ( UNLIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
        result[0] += 0.07476635514018691;
        result[1] += 0;
        result[2] += 0.719626168224299;
        result[3] += 0.1588785046728972;
        result[4] += 0;
        result[5] += 0.04672897196261682;
      } else {
        result[0] += 0.003125;
        result[1] += 0;
        result[2] += 0.9546875;
        result[3] += 0.0328125;
        result[4] += 0;
        result[5] += 0.009375;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)60.5) ) ) {
        result[0] += 0;
        result[1] += 0.025179856115107913;
        result[2] += 0.017985611510791366;
        result[3] += 0.02877697841726619;
        result[4] += 0.8453237410071942;
        result[5] += 0.08273381294964029;
      } else {
        result[0] += 0.040865384615384616;
        result[1] += 0.013621794871794872;
        result[2] += 0.011217948717948718;
        result[3] += 0.15625;
        result[4] += 0.05368589743589743;
        result[5] += 0.7243589743589743;
      }
    } else {
      if ( UNLIKELY( !(data[13].missing != -1) || (data[13].fvalue <= (float)56.5) ) ) {
        result[0] += 0;
        result[1] += 0.9336188436830836;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.06638115631691649;
        result[5] += 0;
      } else {
        result[0] += 0.6129568106312292;
        result[1] += 0.033776301218161685;
        result[2] += 0.06090808416389812;
        result[3] += 0.09579180509413067;
        result[4] += 0.1079734219269103;
        result[5] += 0.08859357696567;
      }
    }
  } else {
    if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)96.5) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02702702702702703;
        result[3] += 0.08108108108108109;
        result[4] += 0.05405405405405406;
        result[5] += 0.8378378378378378;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3947368421052632;
        result[3] += 0.368421052631579;
        result[4] += 0;
        result[5] += 0.2368421052631579;
      }
    } else {
      if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.017857142857142856;
        result[2] += 0.6428571428571429;
        result[3] += 0.2857142857142857;
        result[4] += 0.005952380952380952;
        result[5] += 0.047619047619047616;
      } else {
        result[0] += 0.012755102040816327;
        result[1] += 0.0012755102040816326;
        result[2] += 0.923469387755102;
        result[3] += 0.05612244897959184;
        result[4] += 0;
        result[5] += 0.006377551020408163;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( UNLIKELY( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.15714285714285717;
        result[1] += 0.07142857142857144;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6964285714285715;
        result[5] += 0.07500000000000001;
      } else {
        result[0] += 0.0008539709649871904;
        result[1] += 0.006831767719897523;
        result[2] += 0.008539709649871904;
        result[3] += 0.13834329632792486;
        result[4] += 0.05721605465414176;
        result[5] += 0.7882152006831767;
      }
    } else {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.8387096774193549;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15959252971137522;
        result[5] += 0.001697792869269949;
      } else {
        result[0] += 0.7116883116883116;
        result[1] += 0.021428571428571425;
        result[2] += 0.013636363636363632;
        result[3] += 0.060389610389610375;
        result[4] += 0.10129870129870128;
        result[5] += 0.09155844155844155;
      }
    }
  } else {
    if ( UNLIKELY( !(data[23].missing != -1) || (data[23].fvalue <= (float)82) ) ) {
      if ( UNLIKELY( !(data[14].missing != -1) || (data[14].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.16071428571428573;
        result[3] += 0.6130952380952381;
        result[4] += 0;
        result[5] += 0.2261904761904762;
      } else {
        result[0] += 0.004672897196261683;
        result[1] += 0;
        result[2] += 0.6822429906542057;
        result[3] += 0.1869158878504673;
        result[4] += 0.023364485981308414;
        result[5] += 0.10280373831775702;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.36363636363636365;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.6363636363636364;
      } else {
        result[0] += 0.030878859857482184;
        result[1] += 0.0011876484560570072;
        result[2] += 0.9049881235154394;
        result[3] += 0.05463182897862233;
        result[4] += 0.0011876484560570072;
        result[5] += 0.007125890736342043;
      }
    }
  }
  if ( LIKELY( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)88.5) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)61.5) ) ) {
        result[0] += 0.2545454545454545;
        result[1] += 0.02077922077922078;
        result[2] += 0;
        result[3] += 0.02077922077922078;
        result[4] += 0.6077922077922078;
        result[5] += 0.09610389610389611;
      } else {
        result[0] += 0;
        result[1] += 0.0064995357474466105;
        result[2] += 0.0018570102135561746;
        result[3] += 0.07706592386258125;
        result[4] += 0.10306406685236769;
        result[5] += 0.8115134633240483;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)53.5) ) ) {
        result[0] += 0.0021598272138228943;
        result[1] += 0.9762419006479481;
        result[2] += 0;
        result[3] += 0.008639308855291577;
        result[4] += 0.012958963282937365;
        result[5] += 0;
      } else {
        result[0] += 0.5947214076246334;
        result[1] += 0.04516129032258064;
        result[2] += 0.04222873900293255;
        result[3] += 0.11788856304985337;
        result[4] += 0.09149560117302052;
        result[5] += 0.10850439882697947;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( LIKELY( !(data[29].missing != -1) || (data[29].fvalue <= (float)97.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.047058823529411764;
        result[3] += 0.5529411764705883;
        result[4] += 0;
        result[5] += 0.4;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4827586206896552;
        result[3] += 0.3793103448275862;
        result[4] += 0;
        result[5] += 0.13793103448275862;
      }
    } else {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)100.5) ) ) {
        result[0] += 0.02564102564102564;
        result[1] += 0;
        result[2] += 0.5042735042735043;
        result[3] += 0.37606837606837606;
        result[4] += 0;
        result[5] += 0.09401709401709402;
      } else {
        result[0] += 0.019689119170984457;
        result[1] += 0;
        result[2] += 0.9098445595854923;
        result[3] += 0.054922279792746116;
        result[4] += 0;
        result[5] += 0.015544041450777202;
      }
    }
  }
  if ( LIKELY( !(data[12].missing != -1) || (data[12].fvalue <= (float)82.5) ) ) {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)70.5) ) ) {
      if ( UNLIKELY( !(data[17].missing != -1) || (data[17].fvalue <= (float)61.5) ) ) {
        result[0] += 0.016597510373443983;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.979253112033195;
        result[5] += 0.004149377593360996;
      } else {
        result[0] += 0.00631768953068592;
        result[1] += 0.002707581227436823;
        result[2] += 0.004512635379061372;
        result[3] += 0.11823104693140794;
        result[4] += 0.05685920577617329;
        result[5] += 0.8113718411552346;
      }
    } else {
      if ( UNLIKELY( !(data[9].missing != -1) || (data[9].fvalue <= (float)50) ) ) {
        result[0] += 0.0066815144766146995;
        result[1] += 0.9510022271714922;
        result[2] += 0.0022271714922048997;
        result[3] += 0.011135857461024499;
        result[4] += 0.028953229398663696;
        result[5] += 0;
      } else {
        result[0] += 0.5556092843326886;
        result[1] += 0.037717601547388784;
        result[2] += 0.0551257253384913;
        result[3] += 0.13346228239845262;
        result[4] += 0.11750483558994197;
        result[5] += 0.10058027079303675;
      }
    }
  } else {
    if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
      if ( UNLIKELY( !(data[22].missing != -1) || (data[22].fvalue <= (float)96.5) ) ) {
        result[0] += 0.04878048780487805;
        result[1] += 0.024390243902439025;
        result[2] += 0.24390243902439024;
        result[3] += 0.34146341463414637;
        result[4] += 0.012195121951219513;
        result[5] += 0.32926829268292684;
      } else {
        result[0] += 0.053497942386831275;
        result[1] += 0.0205761316872428;
        result[2] += 0.720164609053498;
        result[3] += 0.18518518518518517;
        result[4] += 0;
        result[5] += 0.0205761316872428;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.16666666666666669;
        result[1] += 0;
        result[2] += 0.5000000000000001;
        result[3] += 0.16666666666666669;
        result[4] += 0;
        result[5] += 0.16666666666666669;
      } else {
        result[0] += 0.003210272873194222;
        result[1] += 0;
        result[2] += 0.9614767255216694;
        result[3] += 0.035313001605136445;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[4].missing != -1) || (data[4].fvalue <= (float)79.5) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11581920903954802;
        result[1] += 0.07344632768361582;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7344632768361582;
        result[5] += 0.07627118644067797;
      } else {
        result[0] += 0.006843455945252352;
        result[1] += 0.0025662959794696323;
        result[2] += 0.01454234388366125;
        result[3] += 0.1437125748502994;
        result[4] += 0.0658682634730539;
        result[5] += 0.7664670658682635;
      }
    } else {
      if ( UNLIKELY( !(data[1].missing != -1) || (data[1].fvalue <= (float)58.5) ) ) {
        result[0] += 0;
        result[1] += 0.89738430583501;
        result[2] += 0;
        result[3] += 0.02012072434607646;
        result[4] += 0.07243460764587525;
        result[5] += 0.01006036217303823;
      } else {
        result[0] += 0.6959134615384616;
        result[1] += 0.027644230769230768;
        result[2] += 0.03786057692307692;
        result[3] += 0.07091346153846154;
        result[4] += 0.0967548076923077;
        result[5] += 0.07091346153846154;
      }
    }
  } else {
    if ( UNLIKELY( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( LIKELY( !(data[25].missing != -1) || (data[25].fvalue <= (float)94.5) ) ) {
        result[0] += 0;
        result[1] += 0.03333333333333333;
        result[2] += 0.03333333333333333;
        result[3] += 0.3111111111111111;
        result[4] += 0.044444444444444446;
        result[5] += 0.5777777777777777;
      } else {
        result[0] += 0.010526315789473684;
        result[1] += 0.010526315789473684;
        result[2] += 0.4842105263157895;
        result[3] += 0.37894736842105264;
        result[4] += 0;
        result[5] += 0.11578947368421053;
      }
    } else {
      if ( UNLIKELY( !(data[28].missing != -1) || (data[28].fvalue <= (float)84.5) ) ) {
        result[0] += 0.07301587301587302;
        result[1] += 0.009523809523809525;
        result[2] += 0.638095238095238;
        result[3] += 0.20317460317460317;
        result[4] += 0.009523809523809525;
        result[5] += 0.06666666666666667;
      } else {
        result[0] += 0.0015576323987538943;
        result[1] += 0;
        result[2] += 0.9439252336448599;
        result[3] += 0.0545171339563863;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( LIKELY( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( UNLIKELY( !(data[11].missing != -1) || (data[11].fvalue <= (float)73.5) ) ) {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0.0031847133757961785;
        result[1] += 0.06369426751592357;
        result[2] += 0.01592356687898089;
        result[3] += 0.03503184713375796;
        result[4] += 0.8152866242038217;
        result[5] += 0.06687898089171974;
      } else {
        result[0] += 0.0377207062600321;
        result[1] += 0.0016051364365971107;
        result[2] += 0.014446227929373997;
        result[3] += 0.16452648475120385;
        result[4] += 0.06581059390048154;
        result[5] += 0.7158908507223114;
      }
    } else {
      if ( UNLIKELY( !(data[33].missing != -1) || (data[33].fvalue <= (float)56.5) ) ) {
        result[0] += 0.004255319148936171;
        result[1] += 0.9382978723404256;
        result[2] += 0;
        result[3] += 0.0021276595744680856;
        result[4] += 0.05106382978723405;
        result[5] += 0.004255319148936171;
      } else {
        result[0] += 0.6389994314951678;
        result[1] += 0.03638430926662877;
        result[2] += 0.059693007390562824;
        result[3] += 0.08357021034678797;
        result[4] += 0.08072768618533259;
        result[5] += 0.10062535531552019;
      }
    }
  } else {
    if ( UNLIKELY( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || (data[3].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14492753623188406;
        result[3] += 0.4057971014492754;
        result[4] += 0.028985507246376812;
        result[5] += 0.42028985507246375;
      } else {
        result[0] += 0;
        result[1] += 0.05084745762711865;
        result[2] += 0.6610169491525424;
        result[3] += 0.19491525423728814;
        result[4] += 0;
        result[5] += 0.09322033898305085;
      }
    } else {
      if ( UNLIKELY( !(data[26].missing != -1) || (data[26].fvalue <= (float)89.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.3333333333333333;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0.3333333333333333;
      } else {
        result[0] += 0.007211538461538462;
        result[1] += 0.003605769230769231;
        result[2] += 0.9194711538461539;
        result[3] += 0.05889423076923077;
        result[4] += 0.002403846153846154;
        result[5] += 0.008413461538461538;
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
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
        predict(input, 0, result);
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
