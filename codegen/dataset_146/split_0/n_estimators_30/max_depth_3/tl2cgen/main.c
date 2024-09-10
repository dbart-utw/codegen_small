
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
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)104.5) ) ) {
        result[0] += 0.021739130434782608;
        result[1] += 0.010869565217391304;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9239130434782609;
        result[5] += 0.043478260869565216;
      } else {
        result[0] += 0;
        result[1] += 0.8;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1;
        result[5] += 0.1;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)65.5) ) ) {
        result[0] += 0;
        result[1] += 0.0014005602240896359;
        result[2] += 0;
        result[3] += 0.04201680672268908;
        result[4] += 0.056022408963585436;
        result[5] += 0.9005602240896359;
      } else {
        result[0] += 0.10828025477707007;
        result[1] += 0.01751592356687898;
        result[2] += 0.011146496815286623;
        result[3] += 0.31210191082802546;
        result[4] += 0.0732484076433121;
        result[5] += 0.47770700636942676;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)70.5) ) ) {
        result[0] += 0.011532125205930806;
        result[1] += 0.7973640856672156;
        result[2] += 0;
        result[3] += 0.00329489291598023;
        result[4] += 0.186161449752883;
        result[5] += 0.001647446457990115;
      } else {
        result[0] += 0.7919207317073171;
        result[1] += 0.02286585365853659;
        result[2] += 0.014481707317073173;
        result[3] += 0.04801829268292684;
        result[4] += 0.0777439024390244;
        result[5] += 0.044969512195121956;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)95.5) ) ) {
        result[0] += 0.03065134099616858;
        result[1] += 0.007662835249042145;
        result[2] += 0.34099616858237547;
        result[3] += 0.37547892720306514;
        result[4] += 0.01532567049808429;
        result[5] += 0.22988505747126436;
      } else {
        result[0] += 0.03536345776031434;
        result[1] += 0;
        result[2] += 0.8605108055009824;
        result[3] += 0.08546168958742632;
        result[4] += 0.0009823182711198428;
        result[5] += 0.01768172888015717;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.0830188679245283;
        result[2] += 0;
        result[3] += 0.018867924528301886;
        result[4] += 0.8188679245283019;
        result[5] += 0.07924528301886792;
      } else {
        result[0] += 0.0375;
        result[1] += 0.0017857142857142857;
        result[2] += 0.00625;
        result[3] += 0.12053571428571429;
        result[4] += 0.07589285714285714;
        result[5] += 0.7580357142857143;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9630484988452656;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03695150115473441;
        result[5] += 0;
      } else {
        result[0] += 0.6292906178489703;
        result[1] += 0.042334096109839826;
        result[2] += 0.03432494279176202;
        result[3] += 0.07723112128146455;
        result[4] += 0.10697940503432496;
        result[5] += 0.10983981693363845;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)91.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.06666666666666667;
        result[3] += 0.05333333333333334;
        result[4] += 0.17333333333333334;
        result[5] += 0.7066666666666667;
      } else {
        result[0] += 0;
        result[1] += 0.01951219512195122;
        result[2] += 0.28292682926829266;
        result[3] += 0.5219512195121951;
        result[4] += 0.00975609756097561;
        result[5] += 0.16585365853658537;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.04736842105263158;
        result[1] += 0;
        result[2] += 0.7210526315789474;
        result[3] += 0.19736842105263158;
        result[4] += 0;
        result[5] += 0.034210526315789476;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9483333333333334;
        result[3] += 0.05;
        result[4] += 0;
        result[5] += 0.0016666666666666668;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.3545878693623639;
        result[1] += 0.05754276827371695;
        result[2] += 0.003110419906687403;
        result[3] += 0.017107309486780714;
        result[4] += 0.52099533437014;
        result[5] += 0.04665629860031104;
      } else {
        result[0] += 0.02080536912751678;
        result[1] += 0.01476510067114094;
        result[2] += 0.00738255033557047;
        result[3] += 0.1818791946308725;
        result[4] += 0.09463087248322148;
        result[5] += 0.6805369127516778;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)72.5) ) ) {
        result[0] += 0.005988023952095809;
        result[1] += 0.8962075848303394;
        result[2] += 0.007984031936127744;
        result[3] += 0;
        result[4] += 0.07584830339321358;
        result[5] += 0.013972055888223553;
      } else {
        result[0] += 0.8301158301158301;
        result[1] += 0.029922779922779922;
        result[2] += 0.04633204633204633;
        result[3] += 0.03185328185328185;
        result[4] += 0.04247104247104247;
        result[5] += 0.019305019305019305;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.15714285714285714;
        result[3] += 0.6285714285714286;
        result[4] += 0.007142857142857143;
        result[5] += 0.20714285714285716;
      } else {
        result[0] += 0.025210084033613446;
        result[1] += 0;
        result[2] += 0.7310924369747899;
        result[3] += 0.21008403361344538;
        result[4] += 0;
        result[5] += 0.03361344537815126;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)93) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.14285714285714285;
        result[3] += 0.42857142857142855;
        result[4] += 0;
        result[5] += 0.42857142857142855;
      } else {
        result[0] += 0.016853932584269662;
        result[1] += 0;
        result[2] += 0.9101123595505618;
        result[3] += 0.06179775280898876;
        result[4] += 0;
        result[5] += 0.011235955056179775;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.007782101167315175;
        result[1] += 0.058365758754863814;
        result[2] += 0;
        result[3] += 0.0038910505836575876;
        result[4] += 0.8443579766536965;
        result[5] += 0.08560311284046693;
      } else {
        result[0] += 0.033279220779220776;
        result[1] += 0.003246753246753247;
        result[2] += 0.012175324675324676;
        result[3] += 0.16233766233766234;
        result[4] += 0.04626623376623377;
        result[5] += 0.7426948051948052;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.0021739130434782613;
        result[1] += 0.9630434782608697;
        result[2] += 0;
        result[3] += 0.008695652173913045;
        result[4] += 0.026086956521739132;
        result[5] += 0;
      } else {
        result[0] += 0.6252091466815394;
        result[1] += 0.03625209146681539;
        result[2] += 0.05856107083100948;
        result[3] += 0.09537088678192973;
        result[4] += 0.10708310094813163;
        result[5] += 0.07752370329057445;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03333333333333333;
        result[3] += 0.06666666666666667;
        result[4] += 0;
        result[5] += 0.9;
      } else {
        result[0] += 0;
        result[1] += 0.03278688524590164;
        result[2] += 0.4262295081967213;
        result[3] += 0.3442622950819672;
        result[4] += 0.04918032786885246;
        result[5] += 0.14754098360655737;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7533039647577092;
        result[3] += 0.2290748898678414;
        result[4] += 0;
        result[5] += 0.01762114537444934;
      } else {
        result[0] += 0.00851063829787234;
        result[1] += 0;
        result[2] += 0.9546099290780142;
        result[3] += 0.031205673758865248;
        result[4] += 0;
        result[5] += 0.005673758865248227;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0.009090909090909092;
        result[1] += 0.04848484848484849;
        result[2] += 0;
        result[3] += 0.0030303030303030307;
        result[4] += 0.9090909090909092;
        result[5] += 0.030303030303030307;
      } else {
        result[0] += 0.07191201353637902;
        result[1] += 0.005922165820642978;
        result[2] += 0.009306260575296108;
        result[3] += 0.08798646362098139;
        result[4] += 0.07191201353637902;
        result[5] += 0.7529610829103215;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9705882352941178;
        result[2] += 0;
        result[3] += 0.009049773755656111;
        result[4] += 0.0067873303167420825;
        result[5] += 0.013574660633484165;
      } else {
        result[0] += 0.5823991031390134;
        result[1] += 0.0476457399103139;
        result[2] += 0.0655829596412556;
        result[3] += 0.13396860986547085;
        result[4] += 0.0812780269058296;
        result[5] += 0.08912556053811659;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)93.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.041666666666666664;
        result[3] += 0.16666666666666666;
        result[4] += 0;
        result[5] += 0.7916666666666666;
      } else {
        result[0] += 0;
        result[1] += 0.0891089108910891;
        result[2] += 0.4158415841584158;
        result[3] += 0.33663366336633666;
        result[4] += 0.009900990099009901;
        result[5] += 0.1485148514851485;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7222222222222222;
        result[3] += 0.23015873015873015;
        result[4] += 0;
        result[5] += 0.047619047619047616;
      } else {
        result[0] += 0.008610086100861008;
        result[1] += 0;
        result[2] += 0.932349323493235;
        result[3] += 0.05412054120541206;
        result[4] += 0;
        result[5] += 0.004920049200492005;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)65) ) ) {
        result[0] += 0.03225806451612903;
        result[1] += 0.011730205278592375;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8914956011730205;
        result[5] += 0.06451612903225806;
      } else {
        result[0] += 0.09652173913043478;
        result[1] += 0.0026086956521739132;
        result[2] += 0.0017391304347826088;
        result[3] += 0.08;
        result[4] += 0.06521739130434782;
        result[5] += 0.7539130434782608;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0;
        result[1] += 0.8946360153256705;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1053639846743295;
        result[5] += 0;
      } else {
        result[0] += 0.6314465408805032;
        result[1] += 0.020125786163522015;
        result[2] += 0.05534591194968554;
        result[3] += 0.14025157232704405;
        result[4] += 0.057861635220125794;
        result[5] += 0.09496855345911952;
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.01990049751243781;
        result[1] += 0.024875621890547265;
        result[2] += 0.11442786069651742;
        result[3] += 0.43283582089552236;
        result[4] += 0.03980099502487562;
        result[5] += 0.3681592039800995;
      } else {
        result[0] += 0.1568627450980392;
        result[1] += 0;
        result[2] += 0.6764705882352942;
        result[3] += 0.14705882352941177;
        result[4] += 0;
        result[5] += 0.0196078431372549;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)84) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.7525773195876289;
        result[3] += 0.22164948453608246;
        result[4] += 0.010309278350515464;
        result[5] += 0.015463917525773196;
      } else {
        result[0] += 0.04269972451790634;
        result[1] += 0;
        result[2] += 0.9269972451790633;
        result[3] += 0.026170798898071626;
        result[4] += 0;
        result[5] += 0.004132231404958678;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)74.5) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)69) ) ) {
        result[0] += 0;
        result[1] += 0.03187250996015936;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9561752988047809;
        result[5] += 0.01195219123505976;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)85.5) ) ) {
        result[0] += 0.0337995337995338;
        result[1] += 0.0034965034965034965;
        result[2] += 0;
        result[3] += 0.054778554778554776;
        result[4] += 0.05244755244755245;
        result[5] += 0.8554778554778555;
      } else {
        result[0] += 0.11423220973782772;
        result[1] += 0.026217228464419477;
        result[2] += 0.018726591760299626;
        result[3] += 0.38764044943820225;
        result[4] += 0.0599250936329588;
        result[5] += 0.39325842696629215;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)90.5) ) ) {
        result[0] += 0;
        result[1] += 0.3888888888888889;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6111111111111112;
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
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)74.5) ) ) {
        result[0] += 0.7477601654031703;
        result[1] += 0.031013094417643005;
        result[2] += 0.03859407305306685;
        result[3] += 0.028256374913852515;
        result[4] += 0.10682288077188146;
        result[5] += 0.04755341144038594;
      } else {
        result[0] += 0.03618167821401078;
        result[1] += 0.006928406466512703;
        result[2] += 0.7382602001539647;
        result[3] += 0.132409545804465;
        result[4] += 0.03387220939183988;
        result[5] += 0.05234795996920709;
      }
    }
  }
  if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)81) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0.008064516129032258;
        result[1] += 0.06854838709677419;
        result[2] += 0;
        result[3] += 0.008064516129032258;
        result[4] += 0.8588709677419355;
        result[5] += 0.056451612903225805;
      } else {
        result[0] += 0.047736625514403296;
        result[1] += 0.00411522633744856;
        result[2] += 0.0032921810699588477;
        result[3] += 0.151440329218107;
        result[4] += 0.060905349794238686;
        result[5] += 0.7325102880658436;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0017761989342806397;
        result[1] += 0.788632326820604;
        result[2] += 0.0017761989342806397;
        result[3] += 0.007104795737122559;
        result[4] += 0.197158081705151;
        result[5] += 0.0035523978685612794;
      } else {
        result[0] += 0.6582132564841499;
        result[1] += 0.02824207492795389;
        result[2] += 0.05763688760806916;
        result[3] += 0.0760806916426513;
        result[4] += 0.08472622478386167;
        result[5] += 0.09510086455331412;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        result[0] += 0.05128205128205128;
        result[1] += 0.03418803418803419;
        result[2] += 0.1623931623931624;
        result[3] += 0.4700854700854701;
        result[4] += 0.03418803418803419;
        result[5] += 0.24786324786324787;
      } else {
        result[0] += 0.015625;
        result[1] += 0;
        result[2] += 0.671875;
        result[3] += 0.203125;
        result[4] += 0;
        result[5] += 0.109375;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.028301886792452834;
        result[1] += 0;
        result[2] += 0.5849056603773586;
        result[3] += 0.3207547169811321;
        result[4] += 0;
        result[5] += 0.06603773584905662;
      } else {
        result[0] += 0.02570694087403599;
        result[1] += 0;
        result[2] += 0.9254498714652957;
        result[3] += 0.04627249357326478;
        result[4] += 0;
        result[5] += 0.002570694087403599;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)72.5) ) ) {
        result[0] += 0.08571428571428572;
        result[1] += 0;
        result[2] += 0.006349206349206349;
        result[3] += 0;
        result[4] += 0.780952380952381;
        result[5] += 0.12698412698412698;
      } else {
        result[0] += 0.7633136094674556;
        result[1] += 0.011834319526627219;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.22485207100591717;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)82) ) ) {
        result[0] += 0.0022026431718061676;
        result[1] += 0.00881057268722467;
        result[2] += 0.0022026431718061676;
        result[3] += 0.04185022026431718;
        result[4] += 0.11784140969162996;
        result[5] += 0.8270925110132159;
      } else {
        result[0] += 0.0033500837520938024;
        result[1] += 0.01340033500837521;
        result[2] += 0.05360134003350084;
        result[3] += 0.5058626465661642;
        result[4] += 0.010050251256281407;
        result[5] += 0.4137353433835846;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)104.5) ) ) {
        result[0] += 0.7412040656763097;
        result[1] += 0.057857701329163416;
        result[2] += 0.03440187646598906;
        result[3] += 0.030492572322126665;
        result[4] += 0.11258795934323691;
        result[5] += 0.02345582486317436;
      } else {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)74.5) ) ) {
        result[0] += 0.3409090909090909;
        result[1] += 0.13636363636363635;
        result[2] += 0.022727272727272728;
        result[3] += 0;
        result[4] += 0.4318181818181818;
        result[5] += 0.06818181818181818;
      } else {
        result[0] += 0.018066847335140017;
        result[1] += 0.0018066847335140017;
        result[2] += 0.8455284552845529;
        result[3] += 0.1093044263775971;
        result[4] += 0.0018066847335140017;
        result[5] += 0.023486901535682024;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)71.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.02564102564102564;
        result[2] += 0;
        result[3] += 0.01098901098901099;
        result[4] += 0.8937728937728938;
        result[5] += 0.0695970695970696;
      } else {
        result[0] += 0.027705627705627706;
        result[1] += 0.0025974025974025974;
        result[2] += 0.0008658008658008658;
        result[3] += 0.09523809523809523;
        result[4] += 0.05367965367965368;
        result[5] += 0.8199134199134199;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.0034423407917383822;
        result[1] += 0.8209982788296041;
        result[2] += 0;
        result[3] += 0.0068846815834767644;
        result[4] += 0.16351118760757316;
        result[5] += 0.0051635111876075735;
      } else {
        result[0] += 0.6400730816077954;
        result[1] += 0.035931790499390985;
        result[2] += 0.05907429963459196;
        result[3] += 0.10414129110840438;
        result[4] += 0.08343483556638245;
        result[5] += 0.07734470158343483;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)94.5) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
        result[0] += 0;
        result[1] += 0.051470588235294115;
        result[2] += 0.08088235294117647;
        result[3] += 0.33088235294117646;
        result[4] += 0.029411764705882353;
        result[5] += 0.5073529411764706;
      } else {
        result[0] += 0.023255813953488372;
        result[1] += 0.046511627906976744;
        result[2] += 0.6511627906976745;
        result[3] += 0.11627906976744186;
        result[4] += 0.023255813953488372;
        result[5] += 0.13953488372093023;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)87.5) ) ) {
        result[0] += 0.026748971193415638;
        result[1] += 0;
        result[2] += 0.7592592592592593;
        result[3] += 0.18724279835390947;
        result[4] += 0.00205761316872428;
        result[5] += 0.024691358024691357;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9803921568627451;
        result[3] += 0.01764705882352941;
        result[4] += 0;
        result[5] += 0.00196078431372549;
      }
    }
  }
  if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)103) ) ) {
        result[0] += 0.006756756756756757;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9290540540540541;
        result[5] += 0.06418918918918919;
      } else {
        result[0] += 0;
        result[1] += 0.6206896551724138;
        result[2] += 0;
        result[3] += 0.3103448275862069;
        result[4] += 0.06896551724137931;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.040498442367601244;
        result[1] += 0;
        result[2] += 0.005192107995846314;
        result[3] += 0.04361370716510903;
        result[4] += 0.06749740394600208;
        result[5] += 0.8431983385254413;
      } else {
        result[0] += 0.10946196660482375;
        result[1] += 0.025974025974025976;
        result[2] += 0.02411873840445269;
        result[3] += 0.4897959183673469;
        result[4] += 0.03339517625231911;
        result[5] += 0.3172541743970315;
      }
    }
  } else {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)77) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0106951871657754;
        result[1] += 0.8484848484848485;
        result[2] += 0.024955436720142603;
        result[3] += 0;
        result[4] += 0.10873440285204991;
        result[5] += 0.0071301247771836;
      } else {
        result[0] += 0.7877838684416602;
        result[1] += 0.025058731401722788;
        result[2] += 0.025841816758026624;
        result[3] += 0.04463586530931871;
        result[4] += 0.07204385277995301;
        result[5] += 0.04463586530931871;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.009009009009009009;
        result[1] += 0.04054054054054054;
        result[2] += 0.32882882882882886;
        result[3] += 0.2927927927927928;
        result[4] += 0.0990990990990991;
        result[5] += 0.22972972972972974;
      } else {
        result[0] += 0.026624068157614485;
        result[1] += 0;
        result[2] += 0.8839190628328009;
        result[3] += 0.07880724174653887;
        result[4] += 0;
        result[5] += 0.010649627263045794;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)61.5) ) ) {
        result[0] += 0.16363636363636364;
        result[1] += 0.05454545454545454;
        result[2] += 0;
        result[3] += 0.0025974025974025974;
        result[4] += 0.6701298701298701;
        result[5] += 0.10909090909090909;
      } else {
        result[0] += 0.005025125628140704;
        result[1] += 0.010887772194304857;
        result[2] += 0.008375209380234505;
        result[3] += 0.15996649916247907;
        result[4] += 0.08040201005025126;
        result[5] += 0.7353433835845896;
      }
    } else {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)49.5) ) ) {
        result[0] += 0.05080831408775982;
        result[1] += 0.9330254041570439;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01616628175519631;
        result[5] += 0;
      } else {
        result[0] += 0.6527862829148806;
        result[1] += 0.06429883649724434;
        result[2] += 0.026331904470300063;
        result[3] += 0.06613594611145132;
        result[4] += 0.10838946723821188;
        result[5] += 0.08205756276791182;
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)95.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.1206896551724138;
        result[3] += 0.603448275862069;
        result[4] += 0.034482758620689655;
        result[5] += 0.2413793103448276;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5625;
        result[3] += 0.296875;
        result[4] += 0;
        result[5] += 0.140625;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.05333333333333334;
        result[1] += 0;
        result[2] += 0.744;
        result[3] += 0.16533333333333333;
        result[4] += 0;
        result[5] += 0.037333333333333336;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.952076677316294;
        result[3] += 0.04313099041533546;
        result[4] += 0;
        result[5] += 0.004792332268370607;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.12256267409470752;
        result[1] += 0.08635097493036212;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6880222841225627;
        result[5] += 0.10306406685236769;
      } else {
        result[0] += 0.0044603033006244425;
        result[1] += 0.001784121320249777;
        result[2] += 0.0044603033006244425;
        result[3] += 0.1471900089206066;
        result[4] += 0.06601248884924175;
        result[5] += 0.776092774308653;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)59.5) ) ) {
        result[0] += 0.0020876826722338207;
        result[1] += 0.9227557411273487;
        result[2] += 0;
        result[3] += 0.004175365344467641;
        result[4] += 0.06680584551148226;
        result[5] += 0.004175365344467641;
      } else {
        result[0] += 0.6934579439252336;
        result[1] += 0.03925233644859813;
        result[2] += 0.01557632398753894;
        result[3] += 0.06853582554517133;
        result[4] += 0.09719626168224299;
        result[5] += 0.08598130841121496;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.27530364372469635;
        result[3] += 0.46963562753036436;
        result[4] += 0;
        result[5] += 0.2550607287449393;
      } else {
        result[0] += 0.011904761904761904;
        result[1] += 0;
        result[2] += 0.7142857142857143;
        result[3] += 0.19047619047619047;
        result[4] += 0.023809523809523808;
        result[5] += 0.05952380952380952;
      }
    } else {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)98.5) ) ) {
        result[0] += 0.008898776418242492;
        result[1] += 0;
        result[2] += 0.9098998887652948;
        result[3] += 0.067853170189099;
        result[4] += 0.0011123470522803114;
        result[5] += 0.012235817575083427;
      } else {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0.4375;
        result[3] += 0.03125;
        result[4] += 0.03125;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.05964912280701754;
        result[2] += 0;
        result[3] += 0.0035087719298245615;
        result[4] += 0.9017543859649123;
        result[5] += 0.03508771929824561;
      } else {
        result[0] += 0.03930817610062893;
        result[1] += 0.008647798742138365;
        result[2] += 0.006289308176100629;
        result[3] += 0.14386792452830188;
        result[4] += 0.07389937106918239;
        result[5] += 0.7279874213836478;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9781553398058253;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.021844660194174758;
        result[5] += 0;
      } else {
        result[0] += 0.5997824904839587;
        result[1] += 0.024469820554649267;
        result[2] += 0.07123436650353453;
        result[3] += 0.09189777052746058;
        result[4] += 0.11473626971179988;
        result[5] += 0.09787928221859707;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.22857142857142856;
        result[3] += 0.5571428571428572;
        result[4] += 0;
        result[5] += 0.21428571428571427;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.5952380952380952;
        result[3] += 0.09523809523809523;
        result[4] += 0.023809523809523808;
        result[5] += 0.2857142857142857;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)59) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.008149010477299184;
        result[1] += 0;
        result[2] += 0.9254947613504074;
        result[3] += 0.0570430733410943;
        result[4] += 0.0011641443538998836;
        result[5] += 0.008149010477299184;
      }
    }
  }
  if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)84.5) ) ) {
        result[0] += 0.026578073089700997;
        result[1] += 0.009966777408637873;
        result[2] += 0.013289036544850499;
        result[3] += 0;
        result[4] += 0.7940199335548173;
        result[5] += 0.15614617940199335;
      } else {
        result[0] += 0.5263157894736842;
        result[1] += 0.05263157894736842;
        result[2] += 0;
        result[3] += 0.05263157894736842;
        result[4] += 0.2807017543859649;
        result[5] += 0.08771929824561403;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0.021003500583430573;
        result[2] += 0.0011668611435239206;
        result[3] += 0.03733955659276546;
        result[4] += 0.061843640606767794;
        result[5] += 0.8786464410735122;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0718562874251497;
        result[3] += 0.5299401197604791;
        result[4] += 0;
        result[5] += 0.39820359281437123;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)77) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0018050541516245488;
        result[1] += 0.8537906137184116;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1444043321299639;
        result[5] += 0;
      } else {
        result[0] += 0.744406779661017;
        result[1] += 0.013559322033898305;
        result[2] += 0.03457627118644068;
        result[3] += 0.06033898305084746;
        result[4] += 0.09152542372881356;
        result[5] += 0.05559322033898305;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0.08583690987124463;
        result[1] += 0.10300429184549356;
        result[2] += 0.2145922746781116;
        result[3] += 0.19313304721030042;
        result[4] += 0.034334763948497854;
        result[5] += 0.36909871244635195;
      } else {
        result[0] += 0.009852216748768473;
        result[1] += 0;
        result[2] += 0.8630541871921182;
        result[3] += 0.11428571428571428;
        result[4] += 0;
        result[5] += 0.012807881773399015;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)62.5) ) ) {
        result[0] += 0.009404388714733543;
        result[1] += 0.08463949843260188;
        result[2] += 0.006269592476489028;
        result[3] += 0;
        result[4] += 0.877742946708464;
        result[5] += 0.0219435736677116;
      } else {
        result[0] += 0.050451807228915665;
        result[1] += 0.0030120481927710845;
        result[2] += 0.024849397590361446;
        result[3] += 0.1769578313253012;
        result[4] += 0.06701807228915663;
        result[5] += 0.677710843373494;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6122209165687427;
        result[1] += 0.05229142185663925;
        result[2] += 0.0699177438307873;
        result[3] += 0.07873090481786134;
        result[4] += 0.10810810810810811;
        result[5] += 0.07873090481786134;
      } else {
        result[0] += 0.002617801047120419;
        result[1] += 0.9738219895287958;
        result[2] += 0.005235602094240838;
        result[3] += 0.007853403141361256;
        result[4] += 0.010471204188481676;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)103) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)75.5) ) ) {
        result[0] += 0;
        result[1] += 0.1702127659574468;
        result[2] += 0;
        result[3] += 0.0851063829787234;
        result[4] += 0.02127659574468085;
        result[5] += 0.723404255319149;
      } else {
        result[0] += 0;
        result[1] += 0.011695906432748537;
        result[2] += 0.4502923976608187;
        result[3] += 0.3508771929824561;
        result[4] += 0.017543859649122806;
        result[5] += 0.1695906432748538;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)93) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0.3333333333333333;
        result[2] += 0;
        result[3] += 0.3333333333333333;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.017281105990783415;
        result[1] += 0;
        result[2] += 0.9112903225806452;
        result[3] += 0.062211981566820285;
        result[4] += 0;
        result[5] += 0.009216589861751154;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)81) ) ) {
    if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)95) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.31762652705061084;
        result[1] += 0.029668411867364748;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5741710296684118;
        result[5] += 0.07853403141361257;
      } else {
        result[0] += 0.014892032762472078;
        result[1] += 0.014147431124348473;
        result[2] += 0.023827252419955324;
        result[3] += 0.16232315711094564;
        result[4] += 0.07073715562174236;
        result[5] += 0.7140729709605361;
      }
    } else {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)102.5) ) ) {
        result[0] += 0.6760168302945302;
        result[1] += 0.038569424964936885;
        result[2] += 0.06661991584852735;
        result[3] += 0.07784011220196353;
        result[4] += 0.08625525946704067;
        result[5] += 0.0546984572230014;
      } else {
        result[0] += 0.02145922746781116;
        result[1] += 0.9570815450643777;
        result[2] += 0;
        result[3] += 0.012875536480686695;
        result[4] += 0.008583690987124463;
        result[5] += 0;
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)84.5) ) ) {
        result[0] += 0.006993006993006993;
        result[1] += 0.02097902097902098;
        result[2] += 0.22377622377622378;
        result[3] += 0.38461538461538464;
        result[4] += 0.06993006993006994;
        result[5] += 0.2937062937062937;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.98;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.02;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)101.5) ) ) {
        result[0] += 0.03225806451612903;
        result[1] += 0.016129032258064516;
        result[2] += 0.5;
        result[3] += 0.3548387096774194;
        result[4] += 0.016129032258064516;
        result[5] += 0.08064516129032258;
      } else {
        result[0] += 0.002621231979030144;
        result[1] += 0;
        result[2] += 0.9134993446920052;
        result[3] += 0.0799475753604194;
        result[4] += 0;
        result[5] += 0.003931847968545216;
      }
    }
  }
  if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)81) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.10914454277286136;
        result[2] += 0;
        result[3] += 0.05309734513274336;
        result[4] += 0.7876106194690266;
        result[5] += 0.05014749262536873;
      } else {
        result[0] += 0.07473035439137134;
        result[1] += 0.0015408320493066256;
        result[2] += 0.007704160246533128;
        result[3] += 0.150231124807396;
        result[4] += 0.07473035439137134;
        result[5] += 0.6910631741140215;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)104.5) ) ) {
        result[0] += 0.6297183942480528;
        result[1] += 0.05032953864589575;
        result[2] += 0.0713001797483523;
        result[3] += 0.0689035350509287;
        result[4] += 0.09586578789694428;
        result[5] += 0.08388256440982625;
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
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)73.5) ) ) {
        result[0] += 0;
        result[1] += 0.16666666666666666;
        result[2] += 0.18518518518518517;
        result[3] += 0.037037037037037035;
        result[4] += 0.16666666666666666;
        result[5] += 0.4444444444444444;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.4710743801652893;
        result[3] += 0.42148760330578516;
        result[4] += 0;
        result[5] += 0.10743801652892564;
      }
    } else {
      if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)108.5) ) ) {
        result[0] += 0.017341040462427747;
        result[1] += 0.008670520231213874;
        result[2] += 0.7427745664739885;
        result[3] += 0.19075144508670522;
        result[4] += 0.008670520231213874;
        result[5] += 0.03179190751445087;
      } else {
        result[0] += 0.013468013468013467;
        result[1] += 0;
        result[2] += 0.9461279461279462;
        result[3] += 0.03367003367003367;
        result[4] += 0.003367003367003367;
        result[5] += 0.003367003367003367;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0;
        result[1] += 0.0036900369003690036;
        result[2] += 0;
        result[3] += 0.01845018450184502;
        result[4] += 0.9040590405904059;
        result[5] += 0.07380073800738007;
      } else {
        result[0] += 0.036036036036036036;
        result[1] += 0.001638001638001638;
        result[2] += 0.006552006552006552;
        result[3] += 0.17035217035217035;
        result[4] += 0.06060606060606061;
        result[5] += 0.7248157248157249;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0.005025125628140704;
        result[1] += 0.8107202680067002;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.18425460636515914;
        result[5] += 0;
      } else {
        result[0] += 0.6721611721611722;
        result[1] += 0.0115995115995116;
        result[2] += 0.08302808302808302;
        result[3] += 0.09768009768009768;
        result[4] += 0.06227106227106227;
        result[5] += 0.07326007326007326;
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || (data[34].fvalue <= (float)101.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0.01834862385321101;
        result[2] += 0.11926605504587157;
        result[3] += 0.24770642201834864;
        result[4] += 0.10091743119266056;
        result[5] += 0.5137614678899083;
      } else {
        result[0] += 0.041666666666666664;
        result[1] += 0;
        result[2] += 0.7083333333333334;
        result[3] += 0.2222222222222222;
        result[4] += 0.006944444444444444;
        result[5] += 0.020833333333333332;
      }
    } else {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)79.5) ) ) {
        result[0] += 0.21666666666666667;
        result[1] += 0.03333333333333333;
        result[2] += 0.55;
        result[3] += 0.08333333333333333;
        result[4] += 0;
        result[5] += 0.11666666666666667;
      } else {
        result[0] += 0.011450381679389313;
        result[1] += 0;
        result[2] += 0.9185750636132316;
        result[3] += 0.06997455470737914;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)81) ) ) {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.11444141689373297;
        result[1] += 0.0326975476839237;
        result[2] += 0.0027247956403269754;
        result[3] += 0.01634877384196185;
        result[4] += 0.7029972752043597;
        result[5] += 0.1307901907356948;
      } else {
        result[0] += 0;
        result[1] += 0.0025662959794696323;
        result[2] += 0.0051325919589392645;
        result[3] += 0.16424294268605646;
        result[4] += 0.0504704875962361;
        result[5] += 0.7775876817792986;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0;
        result[1] += 0.9874055415617129;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.012594458438287154;
        result[5] += 0;
      } else {
        result[0] += 0.625629546726357;
        result[1] += 0.03973139339675433;
        result[2] += 0.06827084499160603;
        result[3] += 0.07946278679350866;
        result[4] += 0.11919418019026298;
        result[5] += 0.0677112479015109;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)104.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.046153846153846156;
        result[3] += 0.4153846153846154;
        result[4] += 0.09230769230769231;
        result[5] += 0.4461538461538462;
      } else {
        result[0] += 0;
        result[1] += 0.041025641025641026;
        result[2] += 0.5794871794871795;
        result[3] += 0.2564102564102564;
        result[4] += 0;
        result[5] += 0.12307692307692308;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)71.5) ) ) {
        result[0] += 0.4782608695652174;
        result[1] += 0;
        result[2] += 0.43478260869565216;
        result[3] += 0.08695652173913043;
        result[4] += 0;
        result[5] += 0;
      } else {
        result[0] += 0.0024301336573511545;
        result[1] += 0;
        result[2] += 0.9416767922235724;
        result[3] += 0.0534629404617254;
        result[4] += 0.0012150668286755773;
        result[5] += 0.0012150668286755773;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)75.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.05660377358490566;
        result[2] += 0;
        result[3] += 0.018867924528301886;
        result[4] += 0.8943396226415095;
        result[5] += 0.03018867924528302;
      } else {
        result[0] += 0.07535211267605633;
        result[1] += 0.009859154929577466;
        result[2] += 0.0035211267605633804;
        result[3] += 0.17676056338028168;
        result[4] += 0.06338028169014084;
        result[5] += 0.6711267605633803;
      }
    } else {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)51.5) ) ) {
        result[0] += 0.002188183807439825;
        result[1] += 0.9781181619256017;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.019693654266958426;
        result[5] += 0;
      } else {
        result[0] += 0.6438871473354232;
        result[1] += 0.03510971786833856;
        result[2] += 0.09278996865203762;
        result[3] += 0.07711598746081505;
        result[4] += 0.10721003134796238;
        result[5] += 0.0438871473354232;
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)100.5) ) ) {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)87.5) ) ) {
        result[0] += 0;
        result[1] += 0.02127659574468085;
        result[2] += 0.06382978723404255;
        result[3] += 0.06382978723404255;
        result[4] += 0.06382978723404255;
        result[5] += 0.7872340425531915;
      } else {
        result[0] += 0;
        result[1] += 0.03409090909090909;
        result[2] += 0.3068181818181818;
        result[3] += 0.3522727272727273;
        result[4] += 0.022727272727272728;
        result[5] += 0.2840909090909091;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)79.5) ) ) {
        result[0] += 0.17796610169491528;
        result[1] += 0.04237288135593221;
        result[2] += 0.5762711864406781;
        result[3] += 0.09322033898305086;
        result[4] += 0.016949152542372885;
        result[5] += 0.09322033898305086;
      } else {
        result[0] += 0.0023923444976076554;
        result[1] += 0;
        result[2] += 0.9342105263157895;
        result[3] += 0.06220095693779904;
        result[4] += 0;
        result[5] += 0.0011961722488038277;
      }
    }
  }
  if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)81) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)61.5) ) ) {
        result[0] += 0.0035460992907801418;
        result[1] += 0.07446808510638298;
        result[2] += 0;
        result[3] += 0.024822695035460994;
        result[4] += 0.8404255319148937;
        result[5] += 0.05673758865248227;
      } else {
        result[0] += 0.0342902711323764;
        result[1] += 0.0007974481658692185;
        result[2] += 0.01594896331738437;
        result[3] += 0.1594896331738437;
        result[4] += 0.0685805422647528;
        result[5] += 0.7208931419457735;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)66.5) ) ) {
        result[0] += 0.012681159420289856;
        result[1] += 0.8532608695652174;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1286231884057971;
        result[5] += 0.005434782608695652;
      } else {
        result[0] += 0.6724655068986203;
        result[1] += 0.01739652069586083;
        result[2] += 0.06718656268746251;
        result[3] += 0.09598080383923216;
        result[4] += 0.06598680263947211;
        result[5] += 0.08098380323935213;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)93) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)83.5) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0.125;
        result[2] += 0.11458333333333333;
        result[3] += 0.19791666666666666;
        result[4] += 0.03125;
        result[5] += 0.4479166666666667;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.8297872340425532;
        result[3] += 0.14893617021276595;
        result[4] += 0;
        result[5] += 0.02127659574468085;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)96.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.6136363636363636;
        result[3] += 0.22727272727272727;
        result[4] += 0;
        result[5] += 0.1590909090909091;
      } else {
        result[0] += 0.014285714285714285;
        result[1] += 0;
        result[2] += 0.9226190476190477;
        result[3] += 0.06190476190476191;
        result[4] += 0;
        result[5] += 0.0011904761904761906;
      }
    }
  }
  if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)74.5) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)61.5) ) ) {
        result[0] += 0.18433179723502305;
        result[1] += 0.07373271889400922;
        result[2] += 0;
        result[3] += 0.01152073732718894;
        result[4] += 0.6267281105990783;
        result[5] += 0.10368663594470046;
      } else {
        result[0] += 0.0035149384885764497;
        result[1] += 0.0008787346221441124;
        result[2] += 0.007908611599297012;
        result[3] += 0.1616871704745167;
        result[4] += 0.07820738137082602;
        result[5] += 0.7478031634446397;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
        result[0] += 0.002012072434607646;
        result[1] += 0.8390342052313883;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.15492957746478872;
        result[5] += 0.004024144869215292;
      } else {
        result[0] += 0.7292490118577075;
        result[1] += 0.021739130434782608;
        result[2] += 0.03689064558629776;
        result[3] += 0.06653491436100131;
        result[4] += 0.06060606060606061;
        result[5] += 0.08498023715415019;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)67) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.058823529411764705;
        result[3] += 0;
        result[4] += 0.058823529411764705;
        result[5] += 0.8823529411764706;
      } else {
        result[0] += 0.0032679738562091504;
        result[1] += 0.006535947712418301;
        result[2] += 0.32679738562091504;
        result[3] += 0.4738562091503268;
        result[4] += 0.05555555555555555;
        result[5] += 0.13398692810457516;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)65) ) ) {
        result[0] += 0;
        result[1] += 0.625;
        result[2] += 0;
        result[3] += 0.125;
        result[4] += 0.25;
        result[5] += 0;
      } else {
        result[0] += 0.020202020202020204;
        result[1] += 0;
        result[2] += 0.8877665544332211;
        result[3] += 0.07631874298540965;
        result[4] += 0;
        result[5] += 0.015712682379349047;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)89.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)61.5) ) ) {
        result[0] += 0.23980815347721823;
        result[1] += 0.009592326139088728;
        result[2] += 0.004796163069544364;
        result[3] += 0.011990407673860911;
        result[4] += 0.6618705035971223;
        result[5] += 0.07194244604316546;
      } else {
        result[0] += 0.008130081300813009;
        result[1] += 0.005420054200542005;
        result[2] += 0.009033423667570008;
        result[3] += 0.06865401987353206;
        result[4] += 0.0921409214092141;
        result[5] += 0.8166214995483289;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)55.5) ) ) {
        result[0] += 0;
        result[1] += 0.9853300733496333;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.014669926650366748;
        result[5] += 0;
      } else {
        result[0] += 0.5768132495716733;
        result[1] += 0.026270702455739578;
        result[2] += 0.06624785836664764;
        result[3] += 0.143917761279269;
        result[4] += 0.07709880068532267;
        result[5] += 0.1096516276413478;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)90.5) ) ) {
        result[0] += 0.018957345971563982;
        result[1] += 0.023696682464454975;
        result[2] += 0.3412322274881517;
        result[3] += 0.3033175355450237;
        result[4] += 0.02843601895734597;
        result[5] += 0.2843601895734597;
      } else {
        result[0] += 0.8235294117647058;
        result[1] += 0.029411764705882353;
        result[2] += 0.14705882352941177;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)79.5) ) ) {
        result[0] += 0.009345794392523366;
        result[1] += 0;
        result[2] += 0.6728971962616823;
        result[3] += 0.2710280373831776;
        result[4] += 0;
        result[5] += 0.04672897196261683;
      } else {
        result[0] += 0.007594936708860759;
        result[1] += 0;
        result[2] += 0.9329113924050633;
        result[3] += 0.05949367088607595;
        result[4] += 0;
        result[5] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)78.5) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.03703703703703704;
        result[2] += 0;
        result[3] += 0.02469135802469136;
        result[4] += 0.8353909465020577;
        result[5] += 0.10288065843621401;
      } else {
        result[0] += 0.034453057708871665;
        result[1] += 0.00516795865633075;
        result[2] += 0.002583979328165375;
        result[3] += 0.13092161929371232;
        result[4] += 0.06976744186046512;
        result[5] += 0.7571059431524548;
      }
    } else {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)53.5) ) ) {
        result[0] += 0;
        result[1] += 0.9570815450643777;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.04291845493562232;
        result[5] += 0;
      } else {
        result[0] += 0.67497034400949;
        result[1] += 0.029062870699881376;
        result[2] += 0.054567022538552785;
        result[3] += 0.05931198102016608;
        result[4] += 0.12040332147093713;
        result[5] += 0.06168446026097272;
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)98.5) ) ) {
      if ( ( !(data[35].missing != -1) || (data[35].fvalue <= (float)80.5) ) ) {
        result[0] += 0;
        result[1] += 0.019230769230769232;
        result[2] += 0.14743589743589744;
        result[3] += 0.6153846153846154;
        result[4] += 0.00641025641025641;
        result[5] += 0.21153846153846154;
      } else {
        result[0] += 0.01932367149758454;
        result[1] += 0;
        result[2] += 0.43478260869565216;
        result[3] += 0.14492753623188406;
        result[4] += 0.13526570048309178;
        result[5] += 0.26570048309178745;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)90) ) ) {
        result[0] += 0.05;
        result[1] += 0.05;
        result[2] += 0;
        result[3] += 0.15;
        result[4] += 0.3;
        result[5] += 0.45;
      } else {
        result[0] += 0.012401352874859075;
        result[1] += 0;
        result[2] += 0.8906426155580609;
        result[3] += 0.09131905298759865;
        result[4] += 0;
        result[5] += 0.005636978579481398;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)61.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)62.5) ) ) {
        result[0] += 0;
        result[1] += 0.004807692307692308;
        result[2] += 0;
        result[3] += 0.004807692307692308;
        result[4] += 0.9903846153846154;
        result[5] += 0;
      } else {
        result[0] += 0.18181818181818182;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7272727272727273;
        result[5] += 0.09090909090909091;
      }
    } else {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)86.5) ) ) {
        result[0] += 0.041666666666666664;
        result[1] += 0.003125;
        result[2] += 0.0020833333333333333;
        result[3] += 0.036458333333333336;
        result[4] += 0.06458333333333334;
        result[5] += 0.8520833333333333;
      } else {
        result[0] += 0.017064846416382253;
        result[1] += 0.010238907849829351;
        result[2] += 0.027303754266211604;
        result[3] += 0.5460750853242321;
        result[4] += 0.040955631399317405;
        result[5] += 0.3583617747440273;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)63.5) ) ) {
        result[0] += 0.009174311926605505;
        result[1] += 0.7889908256880734;
        result[2] += 0.011009174311926606;
        result[3] += 0.007339449541284404;
        result[4] += 0.1798165137614679;
        result[5] += 0.003669724770642202;
      } else {
        result[0] += 0.737360472751149;
        result[1] += 0.026263952724885097;
        result[2] += 0.02495075508864084;
        result[3] += 0.07419566644780039;
        result[4] += 0.08010505581089954;
        result[5] += 0.05712409717662508;
      }
    } else {
      if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)103) ) ) {
        result[0] += 0.013651877133105802;
        result[1] += 0.013651877133105802;
        result[2] += 0.3856655290102389;
        result[3] += 0.3924914675767918;
        result[4] += 0.0034129692832764505;
        result[5] += 0.19112627986348124;
      } else {
        result[0] += 0.047861507128309576;
        result[1] += 0.01629327902240326;
        result[2] += 0.844195519348269;
        result[3] += 0.061099796334012225;
        result[4] += 0.007128309572301427;
        result[5] += 0.02342158859470469;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81) ) ) {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)73.5) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)61.5) ) ) {
        result[0] += 0.13753581661891118;
        result[1] += 0.02865329512893983;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7306590257879656;
        result[5] += 0.10315186246418338;
      } else {
        result[0] += 0.0008613264427217916;
        result[1] += 0.007751937984496124;
        result[2] += 0.002583979328165375;
        result[3] += 0.17657192075796727;
        result[4] += 0.04220499569336779;
        result[5] += 0.7700258397932817;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)102.5) ) ) {
        result[0] += 0.5968732551647125;
        result[1] += 0.05025125628140704;
        result[2] += 0.07593523171412618;
        result[3] += 0.0826353992183138;
        result[4] += 0.13121161362367392;
        result[5] += 0.06309324399776661;
      } else {
        result[0] += 0.013953488372093023;
        result[1] += 0.9627906976744186;
        result[2] += 0;
        result[3] += 0.009302325581395349;
        result[4] += 0.011627906976744186;
        result[5] += 0.002325581395348837;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)71.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.09090909090909091;
        result[3] += 0;
        result[4] += 0.18181818181818182;
        result[5] += 0.7272727272727273;
      } else {
        result[0] += 0;
        result[1] += 0.046153846153846156;
        result[2] += 0.18461538461538463;
        result[3] += 0.6;
        result[4] += 0;
        result[5] += 0.16923076923076924;
      }
    } else {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)77) ) ) {
        result[0] += 0.6129032258064516;
        result[1] += 0.22580645161290322;
        result[2] += 0.12903225806451613;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.03225806451612903;
      } else {
        result[0] += 0.013771186440677966;
        result[1] += 0;
        result[2] += 0.8824152542372882;
        result[3] += 0.08686440677966102;
        result[4] += 0;
        result[5] += 0.01694915254237288;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)81) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)65) ) ) {
      if ( ( !(data[18].missing != -1) || (data[18].fvalue <= (float)97.5) ) ) {
        result[0] += 0.01927710843373494;
        result[1] += 0.07710843373493977;
        result[2] += 0;
        result[3] += 0.0024096385542168677;
        result[4] += 0.8216867469879519;
        result[5] += 0.07951807228915662;
      } else {
        result[0] += 0;
        result[1] += 0.9645232815964523;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.03547671840354767;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)73.5) ) ) {
        result[0] += 0.04128819157720892;
        result[1] += 0.0033030553261767133;
        result[2] += 0.006606110652353427;
        result[3] += 0.1717588769611891;
        result[4] += 0.05119735755573906;
        result[5] += 0.7258464079273328;
      } else {
        result[0] += 0.6538908246225319;
        result[1] += 0.02497096399535424;
        result[2] += 0.06910569105691057;
        result[3] += 0.0900116144018583;
        result[4] += 0.08072009291521487;
        result[5] += 0.08130081300813008;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)98) ) ) {
        result[0] += 0;
        result[1] += 0.1111111111111111;
        result[2] += 0.07407407407407407;
        result[3] += 0.14814814814814814;
        result[4] += 0.09259259259259259;
        result[5] += 0.5740740740740741;
      } else {
        result[0] += 0.13333333333333333;
        result[1] += 0;
        result[2] += 0.6666666666666666;
        result[3] += 0.2;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.26666666666666666;
        result[3] += 0.5;
        result[4] += 0;
        result[5] += 0.23333333333333334;
      } else {
        result[0] += 0.005387931034482759;
        result[1] += 0;
        result[2] += 0.8825431034482759;
        result[3] += 0.09698275862068965;
        result[4] += 0;
        result[5] += 0.015086206896551725;
      }
    }
  }
  if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)81) ) ) {
    if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)81) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.9975786924939467;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.002421307506053269;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)73.5) ) ) {
        result[0] += 0.030026109660574413;
        result[1] += 0.0045691906005221935;
        result[2] += 0.006527415143603133;
        result[3] += 0.141644908616188;
        result[4] += 0.21344647519582247;
        result[5] += 0.6037859007832899;
      } else {
        result[0] += 0.633261105092091;
        result[1] += 0.04983748645720477;
        result[2] += 0.048212351029252434;
        result[3] += 0.07583965330444203;
        result[4] += 0.12513542795232935;
        result[5] += 0.06771397616468039;
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)84.5) ) ) {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)82) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.44366197183098594;
        result[3] += 0.3873239436619718;
        result[4] += 0;
        result[5] += 0.16901408450704225;
      } else {
        result[0] += 0.06289308176100629;
        result[1] += 0;
        result[2] += 0.7861635220125787;
        result[3] += 0.11949685534591195;
        result[4] += 0.006289308176100629;
        result[5] += 0.025157232704402517;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)85.5) ) ) {
        result[0] += 0.036036036036036036;
        result[1] += 0;
        result[2] += 0.8063063063063063;
        result[3] += 0.14864864864864866;
        result[4] += 0;
        result[5] += 0.009009009009009009;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.9803149606299213;
        result[3] += 0.017716535433070866;
        result[4] += 0;
        result[5] += 0.001968503937007874;
      }
    }
  }
  if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)72.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)62.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)89.5) ) ) {
        result[0] += 0.004273504273504275;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.00854700854700855;
        result[4] += 0.9444444444444445;
        result[5] += 0.04273504273504274;
      } else {
        result[0] += 0;
        result[1] += 0.5;
        result[2] += 0;
        result[3] += 0.14285714285714285;
        result[4] += 0.03571428571428571;
        result[5] += 0.32142857142857145;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)84.5) ) ) {
        result[0] += 0.025027203482045703;
        result[1] += 0.007616974972796518;
        result[2] += 0;
        result[3] += 0.042437431991294884;
        result[4] += 0.07181719260065289;
        result[5] += 0.85310119695321;
      } else {
        result[0] += 0.006349206349206349;
        result[1] += 0.0031746031746031746;
        result[2] += 0.047619047619047616;
        result[3] += 0.5492063492063493;
        result[4] += 0.050793650793650794;
        result[5] += 0.34285714285714286;
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)77) ) ) {
      if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)63.5) ) ) {
        result[0] += 0.0074211502782931356;
        result[1] += 0.8089053803339518;
        result[2] += 0;
        result[3] += 0.011131725417439703;
        result[4] += 0.15769944341372913;
        result[5] += 0.014842300556586271;
      } else {
        result[0] += 0.7122671804752729;
        result[1] += 0.024405908798972382;
        result[2] += 0.028901734104046242;
        result[3] += 0.06936416184971098;
        result[4] += 0.09248554913294797;
        result[5] += 0.07257546563904946;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)96.5) ) ) {
        result[0] += 0.02666666666666667;
        result[1] += 0.04888888888888889;
        result[2] += 0.2577777777777778;
        result[3] += 0.39111111111111113;
        result[4] += 0.05333333333333334;
        result[5] += 0.2222222222222222;
      } else {
        result[0] += 0.022794846382556987;
        result[1] += 0;
        result[2] += 0.8999008919722498;
        result[3] += 0.06838453914767097;
        result[4] += 0;
        result[5] += 0.008919722497522299;
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
    

    FILE* file = fopen("./codegen/dataset_146/split_0/test_data.csv", "r");
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
