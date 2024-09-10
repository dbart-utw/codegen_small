
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.996244131455399;
        result[1] += 0;
        result[2] += 0.002347417840375587;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014084507042253522;
      } else {
        result[0] += 0.9999168018636383;
        result[1] += 0;
        result[2] += 8.31981363617455e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.5157060305230405;
        result[1] += 0.0020002963401985485;
        result[2] += 0.0037042524818491633;
        result[3] += 0.47466291302415176;
        result[4] += 0.0035560823825751967;
        result[5] += 0.0002222551489109498;
        result[6] += 0.00014817009927396653;
      } else {
        result[0] += 0.6174985978687606;
        result[1] += 0;
        result[2] += 0.0263600673022995;
        result[3] += 0.002804262478968032;
        result[4] += 0.35109366236679757;
        result[5] += 0.0005608524957936064;
        result[6] += 0.001682557487380819;
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
        result[0] += 0.00909090909090909;
        result[1] += 0.015151515151515152;
        result[2] += 0;
        result[3] += 0.9757575757575757;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.005502063273727649;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9931224209078405;
        result[5] += 0.0013755158184319122;
        result[6] += 0;
      } else {
        result[0] += 0.20105540897097626;
        result[1] += 0;
        result[2] += 0.00474934036939314;
        result[3] += 0.7920844327176781;
        result[4] += 0;
        result[5] += 0.0021108179419525065;
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
        result[1] += 0.03208556149732621;
        result[2] += 0;
        result[3] += 0.9679144385026738;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0.9990465293668955;
        result[1] += 0;
        result[2] += 0.0009534706331045003;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997315976648997;
        result[1] += 0;
        result[2] += 6.710058377507885e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020130175132523654;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9064122826823212;
        result[1] += 0.0023707383156468735;
        result[2] += 0.007112214946940619;
        result[3] += 0.08320162564913074;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009031384059607136;
      } else {
        result[0] += 0;
        result[1] += 0.0017966223499820337;
        result[2] += 0.005030542579949695;
        result[3] += 0.9931728350700683;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
        result[0] += 0.20805724887357535;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7900874635568511;
        result[4] += 0.0013252054068380596;
        result[5] += 0.0005300821627352238;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.036935704514363885;
        result[3] += 0;
        result[4] += 0.9616963064295485;
        result[5] += 0.0013679890560875513;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7121951219512195;
        result[4] += 0.28780487804878047;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005366726296958855;
        result[2] += 0;
        result[3] += 0.007751937984496124;
        result[4] += 0.986881335718545;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.9967664988073152;
        result[1] += 0.0001590246488205672;
        result[2] += 0.0005300821627352239;
        result[3] += 0.0023853697323085077;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001590246488205672;
      } else {
        result[0] += 0.9708826205641492;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.029117379435850774;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.542903399892067;
        result[1] += 0.0014840798704803023;
        result[2] += 0.004856988667026444;
        result[3] += 0.45035078251484084;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000404749055585537;
      } else {
        result[0] += 0.9870609981515711;
        result[1] += 0;
        result[2] += 0.0036968576709796672;
        result[3] += 0.00862600123228589;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006161429451632779;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)45.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991163475699558;
        result[1] += 0;
        result[2] += 0.0008836524300441826;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2545731707317073;
        result[1] += 0;
        result[2] += 0.027439024390243903;
        result[3] += 0.4420731707317073;
        result[4] += 0.27134146341463417;
        result[5] += 0.004573170731707317;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
        result[0] += 0.4236111111111111;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5138888888888888;
        result[4] += 0.0625;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5827683615819208;
        result[1] += 0.0008474576271186438;
        result[2] += 0.0029661016949152534;
        result[3] += 0.3450564971751412;
        result[4] += 0.06779661016949151;
        result[5] += 0.00014124293785310732;
        result[6] += 0.0004237288135593219;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992899279003714;
        result[1] += 0;
        result[2] += 0.0005462093074065982;
        result[3] += 0;
        result[4] += 0.00010924186148131964;
        result[5] += 0;
        result[6] += 5.462093074065982e-05;
      } else {
        result[0] += 0.6601530695326494;
        result[1] += 0.0035824784237094938;
        result[2] += 0.0029311187103077674;
        result[3] += 0.3155837811431363;
        result[4] += 0.016446832763393582;
        result[5] += 0.0008141996417521576;
        result[6] += 0.0004885197850512946;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += 0.1837660700781447;
        result[1] += 0.004285354171918326;
        result[2] += 0.009326947315351651;
        result[3] += 0.48928661457020417;
        result[4] += 0.3133350138643811;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
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
        result[0] += 0.999503995591072;
        result[1] += 0;
        result[2] += 0.00038578120694406174;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011022320198401764;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.8320273256982118;
        result[1] += 0.0022101667671287923;
        result[2] += 0.0026120152702431183;
        result[3] += 0.1617440225035162;
        result[4] += 0;
        result[5] += 0.0006027727546714888;
        result[6] += 0.0008036970062286518;
      } else {
        result[0] += 0.16406547392462886;
        result[1] += 0.003806623524933384;
        result[2] += 0.0049486105824134;
        result[3] += 0.7948229920060906;
        result[4] += 0.03197563760944042;
        result[5] += 0.00038066235249333843;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.002253702511268513;
        result[1] += 0.0012878300064391502;
        result[2] += 0.00804893754024469;
        result[3] += 0.6199291693496459;
        result[4] += 0.3670315518351578;
        result[5] += 0.001448808757244044;
        result[6] += 0;
      } else {
        result[0] += 0.9882790165809034;
        result[1] += 0;
        result[2] += 0.008290451686678104;
        result[3] += 0.0020011435105774735;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014293882218410522;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9953464322647363;
        result[1] += 0;
        result[2] += 0.0031023784901758012;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0015511892450879006;
      } else {
        result[0] += 0.9995848899958489;
        result[1] += 0;
        result[2] += 0.00041511000415110004;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0.0163358147229115;
        result[1] += 0.00620347394540943;
        result[2] += 0.012613730355665839;
        result[3] += 0.8000413564929694;
        result[4] += 0.16335814722911496;
        result[5] += 0.0014474772539288668;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004188481675392671;
        result[2] += 0;
        result[3] += 0.14397905759162305;
        result[4] += 0.8518324607329842;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5875768563771087;
        result[1] += 0.00031530821377896896;
        result[2] += 0.003310736244679174;
        result[3] += 0.4084817909506543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00031530821377896896;
      } else {
        result[0] += 0.9710442316461468;
        result[1] += 0;
        result[2] += 0.005927952576379389;
        result[3] += 0.021203830369357045;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001823985408116735;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.004437541601952518;
        result[2] += 0.006212558242733526;
        result[3] += 0.6023962724650543;
        result[4] += 0.3869536276902596;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9893208030756088;
        result[1] += 0.0008543357539513029;
        result[2] += 0.009824861170439982;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0.9895106214390824;
        result[1] += 0.0006414368184733803;
        result[2] += 0.00041504735312983433;
        result[3] += 0.009206504923970871;
        result[4] += 3.773157755725767e-05;
        result[5] += 0;
        result[6] += 0.00018865788778628834;
      } else {
        result[0] += 0;
        result[1] += 0.01020408163265306;
        result[2] += 0;
        result[3] += 0.9737609329446064;
        result[4] += 0.007288629737609329;
        result[5] += 0.008746355685131196;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4452003023431595;
        result[1] += 0;
        result[2] += 0.011337868480725623;
        result[3] += 0.030234315948601664;
        result[4] += 0.5132275132275133;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.012767315671879987;
        result[1] += 0;
        result[2] += 0.0063836578359399935;
        result[3] += 0.977338014682413;
        result[4] += 0.0028726460261729973;
        result[5] += 0.0006383657835939994;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-66.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9940035978412952;
        result[1] += 0;
        result[2] += 0.003997601439136518;
        result[3] += 0.0015990405756546072;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003997601439136518;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.48057932850559576;
        result[1] += 0;
        result[2] += 0.009874917709019092;
        result[3] += 0.5095457537853851;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1288888888888889;
        result[1] += 0.015873015873015872;
        result[2] += 0.005714285714285714;
        result[3] += 0.8495238095238096;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
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
        result[0] += 0.9993511698026792;
        result[1] += 0;
        result[2] += 0.0006488301973207129;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7954927682475615;
        result[1] += 0.0012333221213140489;
        result[2] += 0.006278730799416976;
        result[3] += 0.17827110662630344;
        result[4] += 0.016705908734163027;
        result[5] += 0.000784841349927122;
        result[6] += 0.0012333221213140489;
      } else {
        result[0] += 0;
        result[1] += 0.0013513513513513512;
        result[2] += 0.008108108108108107;
        result[3] += 0.8008108108108106;
        result[4] += 0.1894594594594594;
        result[5] += 0.0002702702702702702;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
        result[0] += 0.2;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        result[0] += 0;
        result[1] += 0.017881705639614855;
        result[2] += 0;
        result[3] += 0.016506189821182942;
        result[4] += 0.9656121045392022;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.004756980351602895;
        result[3] += 0.6537745604963806;
        result[4] += 0.34022750775594623;
        result[5] += 0.0012409513960703205;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9971732985431616;
        result[1] += 0.0005798361962745525;
        result[2] += 0.0017395085888236574;
        result[3] += 0.00025367833587011673;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025367833587011673;
      } else {
        result[0] += 0.0030120481927710845;
        result[1] += 0.030120481927710843;
        result[2] += 0;
        result[3] += 0.9668674698795181;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.4601910828025478;
        result[1] += 0;
        result[2] += 0.002786624203821656;
        result[3] += 0.5370222929936306;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8642384105960266;
        result[1] += 0;
        result[2] += 0.008987701040681174;
        result[3] += 0.12606433301797543;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007095553453169348;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0.9976744186046512;
        result[1] += 0;
        result[2] += 0.00186046511627907;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004651162790697675;
      } else {
        result[0] += 0.9997726239199636;
        result[1] += 0;
        result[2] += 0.00022737608003638017;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.02168301497160557;
        result[1] += 0.009808982963345378;
        result[2] += 0.0033557046979865762;
        result[3] += 0.9047496128033039;
        result[4] += 0.05911202891068661;
        result[5] += 0.0012906556530717602;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015980113636363636;
        result[3] += 0.203125;
        result[4] += 0.7798295454545454;
        result[5] += 0.001065340909090909;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5386363636363636;
        result[1] += 0;
        result[2] += 0.001573426573426573;
        result[3] += 0.459090909090909;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006993006993006992;
      } else {
        result[0] += 0.972285892894353;
        result[1] += 0;
        result[2] += 0.006459679099812461;
        result[3] += 0.019795790789747865;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014586372160866848;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)3164.5) ) ) {
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
        result[0] += 0.9985405454711301;
        result[1] += 0;
        result[2] += 0.0013682386208154701;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.121590805436468e-05;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.00710405348934392;
        result[1] += 0.0033430839949853746;
        result[2] += 0.008357709987463437;
        result[3] += 0.7170915169243628;
        result[4] += 0.26326786460509827;
        result[5] += 0.0008357709987463437;
        result[6] += 0;
      } else {
        result[0] += 0.7291815795752804;
        result[1] += 0;
        result[2] += 0.005249343832020997;
        result[3] += 0.2650918635170604;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004772130756382725;
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
        result[0] += 0.5440097799511003;
        result[1] += 0.0036674816625916875;
        result[2] += 0.006779284285396756;
        result[3] += 0.4446543676372528;
        result[4] += 0;
        result[5] += 0.0006668148477439432;
        result[6] += 0.00022227161591464772;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.003257328990228013;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.993485342019544;
        result[5] += 0.003257328990228013;
        result[6] += 0;
      } else {
        result[0] += 0.08784076157507573;
        result[1] += 0;
        result[2] += 0.008221549112938122;
        result[3] += 0.9026395499783644;
        result[4] += 0;
        result[5] += 0.0012981393336218088;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8857788174558361;
        result[1] += 0;
        result[2] += 0.002984593046704848;
        result[3] += 0.11075260143583125;
        result[4] += 0;
        result[5] += 8.066467693796887e-05;
        result[6] += 0.0004033233846898443;
      } else {
        result[0] += 0.9171489861172947;
        result[1] += 0.0006880641113854373;
        result[2] += 0.001821346177196746;
        result[3] += 0.08013923179665682;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020237179746630509;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.014136904761904762;
        result[2] += 0;
        result[3] += 0.9858630952380952;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9627118644067797;
        result[1] += 0;
        result[2] += 0.03728813559322034;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9967350746268657;
        result[1] += 0;
        result[2] += 0.002798507462686567;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004664179104477612;
      } else {
        result[0] += 0.9997516042227282;
        result[1] += 0;
        result[2] += 0.00024839577727178637;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999185667752443;
        result[5] += 0.0008143322475570033;
        result[6] += 0;
      } else {
        result[0] += 0.01910058027079304;
        result[1] += 0.00676982591876209;
        result[2] += 0.011605415860735012;
        result[3] += 0.9598646034816248;
        result[4] += 0;
        result[5] += 0.0026595744680851068;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5802409638554217;
        result[1] += 0.0001606425702811245;
        result[2] += 0.0024096385542168677;
        result[3] += 0.4162248995983936;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009638554216867469;
      } else {
        result[0] += 0.971702418986764;
        result[1] += 0;
        result[2] += 0.006617982656321315;
        result[3] += 0.020538566864445457;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011410314924691922;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9922279792746114;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.007772020725388601;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006170934896636841;
        result[3] += 0.6923788954026535;
        result[4] += 0.2974390620178957;
        result[5] += 0.004011107682813947;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9995381773399015;
        result[1] += 0;
        result[2] += 0.00046182266009852215;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7056874654886803;
        result[1] += 0.0015645131603165838;
        result[2] += 0.006626173384870237;
        result[3] += 0.2852015461071231;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009203018590097553;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        result[0] += 0.10783824263604593;
        result[1] += 0.003494757863205192;
        result[2] += 0.0024962556165751375;
        result[3] += 0.5576635047428856;
        result[4] += 0.32850723914128804;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.006134969325153374;
        result[1] += 0.03067484662576687;
        result[2] += 0;
        result[3] += 0.2668711656441718;
        result[4] += 0.696319018404908;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.04574132492113565;
        result[4] += 0.9542586750788643;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0.05190311418685121;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9480968858131488;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0005892751915144372;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9988214496169712;
        result[5] += 0.0005892751915144372;
        result[6] += 0;
      } else {
        result[0] += 0.07605235231694375;
        result[1] += 0;
        result[2] += 0.008135833038556774;
        result[3] += 0.9119207640608419;
        result[4] += 0;
        result[5] += 0.0038910505836575876;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        result[0] += 0.9987371079772679;
        result[1] += 0.00021048200378867606;
        result[2] += 0.00021048200378867606;
        result[3] += 0.0008419280151547042;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.991253381424707;
        result[1] += 0;
        result[2] += 0.0003606853020739405;
        result[3] += 0.008295761947700632;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.017132551848512e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.8358042736827452;
        result[1] += 0.001044059302568386;
        result[2] += 0.005150692559337371;
        result[3] += 0.15709612305978982;
        result[4] += 0;
        result[5] += 6.960395350455907e-05;
        result[6] += 0.0008352474420547088;
      } else {
        result[0] += 0.4583333333333333;
        result[1] += 0;
        result[2] += 0.005778588807785888;
        result[3] += 0.5358880778588808;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)20.5) ) ) {
        result[0] += 0.0030120481927710845;
        result[1] += 0;
        result[2] += 0.016566265060240965;
        result[3] += 0;
        result[4] += 0.9774096385542169;
        result[5] += 0.0030120481927710845;
        result[6] += 0;
      } else {
        result[0] += 0.9823843077509046;
        result[1] += 0.00038087983241287375;
        result[2] += 0.0009521995810321843;
        result[3] += 0.016187392877547134;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.521995810321844e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.7534784849265653;
        result[1] += 0.0009018294254058232;
        result[2] += 0.004058232414326205;
        result[3] += 0.2208837928368977;
        result[4] += 0.019904663746457097;
        result[5] += 0.00019324916258696212;
        result[6] += 0.0005797474877608864;
      } else {
        result[0] += 0.43659761456371626;
        result[1] += 0;
        result[2] += 0.005021971123666039;
        result[3] += 0.5583804143126178;
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
        result[0] += 0.21668909825033647;
        result[1] += 0.005383580080753701;
        result[2] += 0;
        result[3] += 0.7779273216689099;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.08512269938650306;
        result[1] += 0.012269938650306749;
        result[2] += 0.009969325153374233;
        result[3] += 0.5429447852760736;
        result[4] += 0.3496932515337423;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0029717682020802376;
        result[2] += 0;
        result[3] += 0.0549777117384844;
        result[4] += 0.9420505200594353;
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
        result[0] += 0.9906759906759907;
        result[1] += 0;
        result[2] += 0.009324009324009324;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995738746416674;
        result[1] += 0;
        result[2] += 0.00038738668939335244;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.873866893933525e-05;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6029411764705883;
        result[1] += 0.0009386733416770964;
        result[2] += 0.006101376720901127;
        result[3] += 0.33416770963704634;
        result[4] += 0.05506883604505633;
        result[5] += 0.0002346683354192741;
        result[6] += 0.0005475594493116396;
      } else {
        result[0] += 0.07292093404342483;
        result[1] += 0.0028676771814829987;
        result[2] += 0.014338385907414994;
        result[3] += 0.8816058992216305;
        result[4] += 0.02744776730848013;
        result[5] += 0.0008193363375665711;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.0016299918500407497;
        result[1] += 0.009779951100244499;
        result[2] += 0;
        result[3] += 0.267318663406683;
        result[4] += 0.7212713936430318;
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
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.24184943687018376;
        result[1] += 0.005334914048606995;
        result[2] += 0;
        result[3] += 0.7498518079430943;
        result[4] += 0.002963841138114997;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.47593582887700536;
        result[1] += 0;
        result[2] += 0.0285204991087344;
        result[3] += 0.49554367201426025;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4018058690744921;
        result[4] += 0.5981941309255079;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.000725689404934688;
        result[1] += 0.006531204644412192;
        result[2] += 0;
        result[3] += 0.057329462989840346;
        result[4] += 0.9354136429608128;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)252) ) ) {
        result[0] += 0.9995422468052642;
        result[1] += 0;
        result[2] += 0.0004196070951745184;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.814609956131986e-05;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.36597998822836963;
        result[1] += 0.000824014125956445;
        result[2] += 0.005885815185403178;
        result[3] += 0.5330194231901119;
        result[4] += 0.09228958210712183;
        result[5] += 0.0015303119482048264;
        result[6] += 0.00047086521483225425;
      } else {
        result[0] += 0.9663380620341429;
        result[1] += 0;
        result[2] += 0.006491945179129598;
        result[3] += 0.02524645347439288;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019235393123346958;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0010618529333687285;
        result[1] += 0;
        result[2] += 0.008229360233607645;
        result[3] += 0.795858773559862;
        result[4] += 0.19192991770639767;
        result[5] += 0.002920095566764003;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2948717948717949;
        result[4] += 0.7051282051282052;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.011424219345011425;
        result[2] += 0;
        result[3] += 0.0007616146230007616;
        result[4] += 0.9878141660319878;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += 0.997396492496836;
        result[1] += 0.0005423973964924968;
        result[2] += 0.0015548725366118243;
        result[3] += 0.00028927861146266497;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021695895859699874;
      } else {
        result[0] += 0.30861244019138756;
        result[1] += 0.019138755980861243;
        result[2] += 0;
        result[3] += 0.6722488038277512;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.4420049710024855;
        result[1] += 0;
        result[2] += 0.0022783761391880694;
        result[3] += 0.5557166528583264;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8599148130619971;
        result[1] += 0;
        result[2] += 0.009228584950307619;
        result[3] += 0.1294368196876479;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001419782300047326;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.99476688867745;
        result[1] += 0;
        result[2] += 0.005233111322549952;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999834169395962;
        result[1] += 0;
        result[2] += 0.0001658306040379752;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.002242152466367713;
        result[1] += 0.007847533632286996;
        result[2] += 0;
        result[3] += 0.23094170403587444;
        result[4] += 0.7544843049327354;
        result[5] += 0.004484304932735426;
        result[6] += 0;
      } else {
        result[0] += 0.5755454613150645;
        result[1] += 0.0008935885024946012;
        result[2] += 0.0058827909747561245;
        result[3] += 0.3946682552684489;
        result[4] += 0.021967384019658948;
        result[5] += 0.0004467942512473006;
        result[6] += 0.0005957256683297342;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.13627546071774976;
        result[1] += 0.0033947623666343357;
        result[2] += 0.006304558680892337;
        result[3] += 0.5470417070805044;
        result[4] += 0.3069835111542192;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.003367003367003367;
        result[1] += 0.010101010101010102;
        result[2] += 0;
        result[3] += 0.12345679012345678;
        result[4] += 0.8630751964085297;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.1209053007742704;
        result[1] += 0;
        result[2] += 0.005955926146515783;
        result[3] += 0.7564026206075045;
        result[4] += 0.11554496724240619;
        result[5] += 0.0011911852293031567;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.013008130081300813;
        result[2] += 0;
        result[3] += 0.12195121951219512;
        result[4] += 0.865040650406504;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.0005694760820045558;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994305239179955;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.22444807849550286;
        result[1] += 0.0004088307440719542;
        result[2] += 0.002044153720359771;
        result[3] += 0.7706459525756337;
        result[4] += 0;
        result[5] += 0.0024529844644317253;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999546370967742;
        result[1] += 0;
        result[2] += 0.00030241935483870974;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015120967741935487;
      } else {
        result[0] += 0.6805555555555556;
        result[1] += 0.020833333333333332;
        result[2] += 0;
        result[3] += 0.2986111111111111;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9994778976679429;
        result[1] += 0;
        result[2] += 0.0005221023320570832;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6938903863432165;
        result[1] += 0.00215633423180593;
        result[2] += 0.00655884995507637;
        result[3] += 0.29640610961365677;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009883198562443845;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9836734693877551;
        result[1] += 0;
        result[2] += 0.00816326530612245;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00816326530612245;
      } else {
        result[0] += 0.9979647218453188;
        result[1] += 0;
        result[2] += 0.0020352781546811396;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.999383694312379;
        result[1] += 0;
        result[2] += 0.0006163056876210601;
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
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.8466420966420967;
        result[1] += 0.001638001638001638;
        result[2] += 0.0010237510237510238;
        result[3] += 0.14946764946764945;
        result[4] += 0;
        result[5] += 0.00020475020475020476;
        result[6] += 0.0010237510237510238;
      } else {
        result[0] += 0.17801628423390084;
        result[1] += 0.004441154700222058;
        result[2] += 0.004441154700222058;
        result[3] += 0.7801628423390082;
        result[4] += 0.03256846780162843;
        result[5] += 0.00037009622501850485;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += 0.12500000000000003;
        result[1] += 0;
        result[2] += 0.007070707070707072;
        result[3] += 0.6944444444444445;
        result[4] += 0.17272727272727276;
        result[5] += 0.0007575757575757577;
        result[6] += 0;
      } else {
        result[0] += 0.5163790066924974;
        result[1] += 0.0014089468122578373;
        result[2] += 0.005988023952095809;
        result[3] += 0.18545262416343783;
        result[4] += 0.2884818598097922;
        result[5] += 0.0007044734061289186;
        result[6] += 0.0015850651637900669;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.4729483282674772;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1264437689969605;
        result[4] += 0.4006079027355623;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009724473257698542;
        result[3] += 0.9439222042139385;
        result[4] += 0.044084278768233384;
        result[5] += 0.00226904376012966;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8275862068965517;
        result[4] += 0.1724137931034483;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007078507078507079;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9929214929214929;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)39.5) ) ) {
        result[0] += 0.9988837087136384;
        result[1] += 0;
        result[2] += 0.000984962899730777;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00013132838663077023;
      } else {
        result[0] += 0.9997077447637603;
        result[1] += 0;
        result[2] += 0.0002922552362396493;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.5185953269735932;
        result[1] += 0.00414765657403567;
        result[2] += 0.005806719203649938;
        result[3] += 0.4714502972487211;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9670915411355736;
        result[1] += 0;
        result[2] += 0.006952491309385863;
        result[3] += 0.024565469293163382;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013904982618771727;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.3041385948026949;
        result[1] += 0.004812319538017324;
        result[2] += 0;
        result[3] += 0.6458132820019249;
        result[4] += 0.04523580365736285;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1292517006802721;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1564625850340136;
        result[4] += 0.7142857142857143;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
        result[0] += 0.31961120640365925;
        result[1] += 0.002858776443682104;
        result[2] += 0.013150371640937679;
        result[3] += 0.6638078902229846;
        result[4] += 0.0005717552887364208;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00076103500761035;
        result[2] += 0;
        result[3] += 0.0898021308980213;
        result[4] += 0.9094368340943684;
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
        result[0] += 0.9997694258704174;
        result[1] += 0;
        result[2] += 0.0001921451079855507;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8429021597110135e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7943894022041635;
        result[1] += 0.0010018924635422466;
        result[2] += 0.004786819548035178;
        result[3] += 0.1824557497495269;
        result[4] += 0.015251029722809754;
        result[5] += 0.0004452855393521096;
        result[6] += 0.0016698207725704109;
      } else {
        result[0] += 0;
        result[1] += 0.0010515247108307045;
        result[2] += 0.006309148264984227;
        result[3] += 0.8033648790746583;
        result[4] += 0.18901156677181913;
        result[5] += 0.0002628811777076761;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9942028985507246;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.005797101449275362;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009135200974421437;
        result[1] += 0;
        result[2] += 0.006394640682095006;
        result[3] += 0.6915347137637028;
        result[4] += 0.29963459196102316;
        result[5] += 0.0015225334957369061;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9906183368869936;
        result[1] += 0.0004975124378109452;
        result[2] += 0.0017768301350390902;
        result[3] += 0.007000710732054016;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010660980810234541;
      } else {
        result[0] += 0.6482190509339831;
        result[1] += 0;
        result[2] += 0.004524886877828056;
        result[3] += 0.3470240167072747;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002320454809142592;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)11) ) ) {
        result[0] += 0.16716196136701336;
        result[1] += 0.009658246656760773;
        result[2] += 0.002228826151560178;
        result[3] += 0.8209509658246656;
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
        result[1] += 0.03333333333333333;
        result[2] += 0;
        result[3] += 0.9666666666666667;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        result[1] += 0.005272952853598015;
        result[2] += 0.007444168734491315;
        result[3] += 0.9857320099255583;
        result[4] += 0;
        result[5] += 0.0015508684863523574;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += 0.9971594012891948;
        result[1] += 0.00043701518627772313;
        result[2] += 0.0018208966094905132;
        result[3] += 0.00021850759313886157;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00036417932189810264;
      } else {
        result[0] += 0.30045871559633025;
        result[1] += 0.016055045871559634;
        result[2] += 0;
        result[3] += 0.6834862385321101;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.20152746982015274;
        result[1] += 0;
        result[2] += 0.002463661000246366;
        result[3] += 0.7960088691796009;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9936833793920253;
        result[1] += 0;
        result[2] += 0.00454007106198184;
        result[3] += 0.0011843663639952628;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005921831819976314;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += 0.9696132596685083;
        result[1] += 0;
        result[2] += 0.03038674033149171;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08110367892976589;
        result[1] += 0.00919732441471572;
        result[2] += 0.002508361204013378;
        result[3] += 0.907190635451505;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9421561852107809;
        result[1] += 0.0006219765031098825;
        result[2] += 0.0014512785072563926;
        result[3] += 0.05431928127159641;
        result[4] += 0.0010711817553559087;
        result[5] += 0.00010366275051831375;
        result[6] += 0.00027643400138217003;
      } else {
        result[0] += 0.6496199032480995;
        result[1] += 0;
        result[2] += 0.006334945865008062;
        result[3] += 0.3412808108730707;
        result[4] += 0.00138217000691085;
        result[5] += 0.0001151808339092375;
        result[6] += 0.0012669891730016124;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9988359598853869;
        result[1] += 0;
        result[2] += 0.0008058739255014327;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00035816618911174784;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0011682242990654205;
        result[1] += 0.002336448598130841;
        result[2] += 0;
        result[3] += 0.2219626168224299;
        result[4] += 0.772196261682243;
        result[5] += 0.002336448598130841;
        result[6] += 0;
      } else {
        result[0] += 0.5587640371067867;
        result[1] += 0.0013252423798563158;
        result[2] += 0.00606821510776313;
        result[3] += 0.4289600334798075;
        result[4] += 0.0042547255353281715;
        result[5] += 0.0002092487968194183;
        result[6] += 0.0004184975936388366;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0.02;
        result[2] += 0;
        result[3] += 0.5218181818181818;
        result[4] += 0.4581818181818182;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02887844190732035;
        result[4] += 0.9711215580926796;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.99;
        result[1] += 0;
        result[2] += 0.01;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996510004653327;
        result[1] += 0;
        result[2] += 0.0002714440825190011;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.755545214828603e-05;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9117033034508166;
        result[1] += 0.0014736583568709322;
        result[2] += 0.003806950755249908;
        result[3] += 0.081419624217119;
        result[4] += 0;
        result[5] += 0.00024560972614515533;
        result[6] += 0.0013508534937983544;
      } else {
        result[0] += 0.1116279069767442;
        result[1] += 0.004279069767441862;
        result[2] += 0.009116279069767443;
        result[3] += 0.5763720930232559;
        result[4] += 0.298046511627907;
        result[5] += 0.000558139534883721;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0.0016286644951140066;
        result[2] += 0;
        result[3] += 0.9973941368078176;
        result[4] += 0.0006514657980456026;
        result[5] += 0.0003257328990228013;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.04160887656033287;
        result[3] += 0;
        result[4] += 0.9583911234396671;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9645390070921985;
        result[1] += 0;
        result[2] += 0.03546099290780142;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06804597701149426;
        result[1] += 0.008735632183908045;
        result[2] += 0;
        result[3] += 0.9232183908045977;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.004804804804804805;
        result[1] += 0;
        result[2] += 0.006606606606606606;
        result[3] += 0.9021021021021021;
        result[4] += 0.08468468468468468;
        result[5] += 0.0018018018018018018;
        result[6] += 0;
      } else {
        result[0] += 0.22753128555176336;
        result[1] += 0;
        result[2] += 0.01478953356086462;
        result[3] += 0;
        result[4] += 0.757679180887372;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9944812896354747;
        result[1] += 0.00019363896015878396;
        result[2] += 0.0007261461005954399;
        result[3] += 0.004598925303771119;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8009557183816503;
        result[1] += 0.000955718381650207;
        result[2] += 0.003950302644154189;
        result[3] += 0.1935011150047786;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006371455877668047;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
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
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0;
        result[1] += 0.0034499753573188764;
        result[2] += 0.006407097092163627;
        result[3] += 0.6638738294726466;
        result[4] += 0.3252833908329226;
        result[5] += 0.0009857072449482504;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0011148272017837235;
        result[2] += 0.005295429208472687;
        result[3] += 0.5225752508361204;
        result[4] += 0.46962095875139354;
        result[5] += 0.0013935340022296545;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-11) ) ) {
        result[0] += 0.3930131004366812;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6069868995633187;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8854824165915239;
        result[1] += 0;
        result[2] += 0.0030330354947126813;
        result[3] += 0.11140257398147389;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.197393228953193e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992110898230587;
        result[1] += 0;
        result[2] += 0.0006762087230925279;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011270145384875464;
      } else {
        result[0] += 0.700362056480811;
        result[1] += 0.004199855177407676;
        result[2] += 0.00666183924692252;
        result[3] += 0.28819695872556117;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005792903692976104;
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
        result[0] += 0.0009386733416770963;
        result[1] += 0.0031289111389236545;
        result[2] += 0.0025031289111389237;
        result[3] += 0.9918648310387985;
        result[4] += 0;
        result[5] += 0.0015644555694618273;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9985569985569985;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.001443001443001443;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.010899182561307902;
        result[3] += 0;
        result[4] += 0.989100817438692;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989812928320059;
        result[1] += 0;
        result[2] += 0.0008334876829042416;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018521948508983145;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.5096992347392775;
        result[1] += 0.003381384588004983;
        result[2] += 0.004983093077059975;
        result[3] += 0.4810464495461826;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008898380494749955;
      } else {
        result[0] += 0.8478943022295624;
        result[1] += 0.0013212221304706856;
        result[2] += 0.008753096614368292;
        result[3] += 0.14186622625928988;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001651527663088357;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9961722488038277;
        result[1] += 0;
        result[2] += 0.0033492822966507177;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004784688995215311;
      } else {
        result[0] += 0.9996669303468088;
        result[1] += 0;
        result[2] += 0.0003330696531912236;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.2043979057591623;
        result[1] += 0.005445026178010471;
        result[2] += 0.0027225130890052357;
        result[3] += 0.4431413612565445;
        result[4] += 0.3442931937172775;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7889475457710884;
        result[1] += 0.0011232168931820735;
        result[2] += 0.0050544760193193304;
        result[3] += 0.1865663259575424;
        result[4] += 0.01606200157250365;
        result[5] += 0.0008985735145456587;
        result[6] += 0.001347860271818488;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0;
        result[1] += 0.0013536379018612521;
        result[2] += 0.008798646362098138;
        result[3] += 0.8331641285956006;
        result[4] += 0.15600676818950932;
        result[5] += 0.0006768189509306261;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6948480845442536;
        result[4] += 0.3051519154557464;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9770253929866989;
        result[1] += 0;
        result[2] += 0.022974607013301087;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07333042339589699;
        result[1] += 0.011348756001745963;
        result[2] += 0;
        result[3] += 0.9153208206023571;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.982997784413833;
        result[1] += 9.632983334938831e-05;
        result[2] += 0.0005298140834216357;
        result[3] += 0.016087082169347847;
        result[4] += 0.00014449475002408245;
        result[5] += 0;
        result[6] += 0.00014449475002408245;
      } else {
        result[0] += 0.043235704323570434;
        result[1] += 0;
        result[2] += 0.011157601115760111;
        result[3] += 0;
        result[4] += 0.9456066945606695;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.42416225749559083;
        result[1] += 0.0010078105316200555;
        result[2] += 0.006928697404887881;
        result[3] += 0.5479969765684052;
        result[4] += 0.018644494834971024;
        result[5] += 0.0007558578987150416;
        result[6] += 0.0005039052658100278;
      } else {
        result[0] += 0.9854780580877678;
        result[1] += 0;
        result[2] += 0.0023319906720373124;
        result[3] += 0.011447954208183168;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007419970320118721;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)33.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992883647638896;
        result[1] += 0;
        result[2] += 0.0006608041478168048;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.0831088293600365e-05;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7348082310887836;
        result[1] += 0.001449135349241619;
        result[2] += 0.005893150420249249;
        result[3] += 0.23031591150613462;
        result[4] += 0.025601391169935265;
        result[5] += 0.0006762631629794221;
        result[6] += 0.0012559173026760698;
      } else {
        result[0] += 0;
        result[1] += 0.0010515247108307047;
        result[2] += 0.0070977917981072565;
        result[3] += 0.8112513144058886;
        result[4] += 0.1798107255520505;
        result[5] += 0.0007886435331230285;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.17851959361393324;
        result[1] += 0.012336719883889695;
        result[2] += 0.00362844702467344;
        result[3] += 0.8055152394775036;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0011737089201877935;
        result[1] += 0.0035211267605633804;
        result[2] += 0;
        result[3] += 0.11091549295774648;
        result[4] += 0.8843896713615024;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.2525389302640487;
        result[1] += 0.0006770480704129993;
        result[2] += 0.001579778830963665;
        result[3] += 0.7294064545249379;
        result[4] += 0.014443692168810652;
        result[5] += 0.0013540961408259986;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003022670025188917;
        result[2] += 0;
        result[3] += 0.13954659949622167;
        result[4] += 0.8574307304785894;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)27.5) ) ) {
        result[0] += 0.9089376053962901;
        result[1] += 0.01011804384485666;
        result[2] += 0;
        result[3] += 0.08094435075885328;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.995044561961466;
        result[1] += 0.0005916940941533228;
        result[2] += 0.0021079102104212123;
        result[3] += 0.0021079102104212123;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001479235235383307;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.07585335018963338;
        result[1] += 0;
        result[2] += 0.012642225031605562;
        result[3] += 0.8027812895069533;
        result[4] += 0.10809102402022756;
        result[5] += 0.0006321112515802782;
        result[6] += 0;
      } else {
        result[0] += 0.19492703266157055;
        result[1] += 0;
        result[2] += 0.00034746351633078526;
        result[3] += 0.6309937456567061;
        result[4] += 0.17373175816539263;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)68.5) ) ) {
        result[0] += 0.9990937924784775;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0009062075215224287;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9496527777777778;
        result[1] += 0;
        result[2] += 0.03819444444444445;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.012152777777777778;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)47.5) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.17672183662573412;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8216764548852109;
        result[4] += 0;
        result[5] += 0.001601708489054992;
        result[6] += 0;
      } else {
        result[0] += 0.6753246753246754;
        result[1] += 0.12337662337662339;
        result[2] += 0.16883116883116886;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.03246753246753247;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9975484010527452;
        result[1] += 0.0006850055882034826;
        result[2] += 0.0014421170277968056;
        result[3] += 0.00010815877708476041;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021631755416952081;
      } else {
        result[0] += 0.012658227848101266;
        result[1] += 0.04746835443037975;
        result[2] += 0;
        result[3] += 0.939873417721519;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4417719328603565;
        result[1] += 0;
        result[2] += 0.0013843225471534867;
        result[3] += 0.5568437445924901;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.987779433681073;
        result[1] += 0;
        result[2] += 0.009538002980625931;
        result[3] += 0.0005961251862891207;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020864381520119225;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.12604501607717042;
        result[1] += 0;
        result[2] += 0.010932475884244373;
        result[3] += 0.4340836012861736;
        result[4] += 0.42636655948553054;
        result[5] += 0.002572347266881029;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0032292787944025836;
        result[3] += 0.9580193756727664;
        result[4] += 0.03767491926803014;
        result[5] += 0.001076426264800861;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7707317073170732;
        result[4] += 0.22926829268292684;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00847457627118644;
        result[2] += 0;
        result[3] += 0.002421307506053269;
        result[4] += 0.9891041162227603;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
        result[0] += 0.5282916213275299;
        result[1] += 0.001088139281828074;
        result[2] += 0;
        result[3] += 0.470620239390642;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9955467226086636;
        result[1] += 0.0010673144161054064;
        result[2] += 0.0016561775422325273;
        result[3] += 0.0014353538699348571;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002944315630635604;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.19677734375;
        result[1] += 0;
        result[2] += 0.00244140625;
        result[3] += 0.80029296875;
        result[4] += 0;
        result[5] += 0.00048828125;
        result[6] += 0;
      } else {
        result[0] += 0.9925853658536585;
        result[1] += 0;
        result[2] += 0.00448780487804878;
        result[3] += 0.0007804878048780488;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0021463414634146343;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)111.5) ) ) {
        result[0] += 0.2758364312267658;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5234200743494424;
        result[4] += 0.20074349442379183;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.014184397163120567;
        result[1] += 0.01773049645390071;
        result[2] += 0;
        result[3] += 0.2553191489361702;
        result[4] += 0.7127659574468085;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.2716981132075472;
        result[1] += 0.005390835579514826;
        result[2] += 0.005929919137466308;
        result[3] += 0.616711590296496;
        result[4] += 0.10026954177897575;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.055408970976253295;
        result[1] += 0;
        result[2] += 0.005277044854881266;
        result[3] += 0.1248900615655233;
        result[4] += 0.8144239226033422;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        result[0] += 0.9714285714285714;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02857142857142857;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993875363650283;
        result[1] += 0;
        result[2] += 0.0004976267034144848;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011483693155718879;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.7094117647058824;
        result[1] += 0.0016176470588235294;
        result[2] += 0.005147058823529412;
        result[3] += 0.26073529411764707;
        result[4] += 0.021470588235294116;
        result[5] += 0.0008823529411764706;
        result[6] += 0.0007352941176470588;
      } else {
        result[0] += 0.36453201970443344;
        result[1] += 0;
        result[2] += 0.008663156106675724;
        result[3] += 0.5094275522337353;
        result[4] += 0.11584847970103615;
        result[5] += 0.0005095974180397485;
        result[6] += 0.001019194836079497;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0015723270440251573;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9984276729559748;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0345679012345679;
        result[1] += 0.007407407407407408;
        result[2] += 0.00905349794238683;
        result[3] += 0.9489711934156378;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.10268656716417911;
        result[1] += 0.0023880597014925373;
        result[2] += 0.007164179104477612;
        result[3] += 0.8865671641791045;
        result[4] += 0;
        result[5] += 0.0011940298507462687;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-1) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)56) ) ) {
        result[0] += 0.9887133182844243;
        result[1] += 0;
        result[2] += 0.011286681715575621;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09329140461215933;
        result[1] += 0.008385744234800839;
        result[2] += 0;
        result[3] += 0.8983228511530398;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.990673169342494;
        result[1] += 0.0006051760350290128;
        result[2] += 0.0022071125983411056;
        result[3] += 0.006372147662952547;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014239436118329714;
      } else {
        result[0] += 0.643791227867145;
        result[1] += 0;
        result[2] += 0.003819002430274274;
        result[3] += 0.3519268603170929;
        result[4] += 0;
        result[5] += 0.0004629093854877908;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1725.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.9989065062875889;
        result[1] += 0;
        result[2] += 0.001002369236376891;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.112447603426282e-05;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-327) ) ) {
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
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.013602015113350126;
        result[1] += 0.006213266162888329;
        result[2] += 0.008564231738035265;
        result[3] += 0.6753988245172124;
        result[4] += 0.29538203190596135;
        result[5] += 0.0008396305625524769;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9796859421734796;
        result[1] += 0.0002492522432701894;
        result[2] += 0.007103688933200398;
        result[3] += 0.012088733798604187;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000872382851445663;
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
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.3261044176706827;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.15180722891566265;
        result[4] += 0.5220883534136547;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.009038619556285949;
        result[3] += 0.8755135579293344;
        result[4] += 0.114215283483977;
        result[5] += 0.0012325390304026294;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993820962385108;
        result[1] += 0;
        result[2] += 0.0005792847763960763;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.861898509307175e-05;
      } else {
        result[0] += 0.6959397391144588;
        result[1] += 0.0011023332720925957;
        result[2] += 0.005879110784493844;
        result[3] += 0.29625206687488514;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008267499540694468;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13745980707395497;
        result[1] += 0.016881028938906754;
        result[2] += 0;
        result[3] += 0.8456591639871383;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.24172185430463577;
        result[1] += 0;
        result[2] += 0.039735099337748346;
        result[3] += 0.7185430463576159;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02377179080824089;
        result[4] += 0.9762282091917591;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
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
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0006161429451632779;
        result[1] += 0.0027726432532347504;
        result[2] += 0.0024645717806531116;
        result[3] += 0.9916820702402958;
        result[4] += 0;
        result[5] += 0.0024645717806531116;
        result[6] += 0;
      } else {
        result[0] += 0.9756722151088348;
        result[1] += 0;
        result[2] += 0.024327784891165175;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999543494800913;
        result[1] += 0;
        result[2] += 0.0004057823991884352;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.07227998985544e-05;
      } else {
        result[0] += 0.6423357664233577;
        result[1] += 0.010948905109489052;
        result[2] += 0;
        result[3] += 0.3467153284671533;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9570236598468397;
        result[1] += 0.0022859755400617215;
        result[2] += 0.003657560864098754;
        result[3] += 0.03634701108698137;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006857926620185164;
      } else {
        result[0] += 0.6141826923076923;
        result[1] += 0;
        result[2] += 0.005288461538461539;
        result[3] += 0.3799278846153846;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006009615384615385;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.9355871886120997;
        result[1] += 0.00035587188612099647;
        result[2] += 0.00042704626334519574;
        result[3] += 0.014519572953736655;
        result[4] += 0.04896797153024911;
        result[5] += 0.00014234875444839857;
        result[6] += 0;
      } else {
        result[0] += 0.9792605951307485;
        result[1] += 0;
        result[2] += 0.0023186912276181894;
        result[3] += 0.01751900038644854;
        result[4] += 0.0006440808965606081;
        result[5] += 0;
        result[6] += 0.00025763235862424325;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.7612818835840418;
        result[1] += 0.0011118378024852845;
        result[2] += 0.004316546762589928;
        result[3] += 0.21510791366906476;
        result[4] += 0.016939175931981687;
        result[5] += 0.0005886200130804447;
        result[6] += 0.0006540222367560497;
      } else {
        result[0] += 0.4627971596171658;
        result[1] += 0;
        result[2] += 0.004013584439641865;
        result[3] += 0.5331892559431923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.0034482758620689655;
        result[1] += 0.03103448275862069;
        result[2] += 0;
        result[3] += 0.10689655172413794;
        result[4] += 0.8586206896551725;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16575875486381322;
        result[1] += 0.010116731517509728;
        result[2] += 0;
        result[3] += 0.824124513618677;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.06342913776015857;
        result[4] += 0.9365708622398414;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13588850174216027;
        result[1] += 0;
        result[2] += 0.017421602787456445;
        result[3] += 0.3588850174216028;
        result[4] += 0.4878048780487805;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.47885572139303484;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11691542288557213;
        result[4] += 0.40360696517412936;
        result[5] += 0.0006218905472636816;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008520790729379687;
        result[3] += 0.9710293115201091;
        result[4] += 0.017382413087934562;
        result[5] += 0.003067484662576687;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3905325443786982;
        result[4] += 0.6094674556213018;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004332129963898917;
        result[2] += 0;
        result[3] += 0.012996389891696752;
        result[4] += 0.9826714801444043;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8381496657321544;
        result[1] += 0;
        result[2] += 0.0023722234203148586;
        result[3] += 0.15937028251024368;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010782833728703904;
      } else {
        result[0] += 0.994112178493957;
        result[1] += 0;
        result[2] += 0.0024790827393864267;
        result[3] += 0.0024790827393864267;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009296560272699099;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.993758865248227;
        result[1] += 0.00014184397163120567;
        result[2] += 0.0009929078014184398;
        result[3] += 0.004822695035460993;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00028368794326241134;
      } else {
        result[0] += 0.8126134734830387;
        result[1] += 0.00210224558050645;
        result[2] += 0.003631151457238414;
        result[3] += 0.18127090301003346;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003822264691829909;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9836081151708082;
        result[1] += 0.00014253812894949398;
        result[2] += 0.0009502541929966266;
        result[3] += 0.015251579797595857;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.751270964983133e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.6510453751051848;
        result[1] += 0.00045310376076121433;
        result[2] += 0.0030422681079681534;
        result[3] += 0.32785293546507865;
        result[4] += 0.016829568256845104;
        result[5] += 0.00038837465208104083;
        result[6] += 0.00038837465208104083;
      } else {
        result[0] += 0.9824082499241735;
        result[1] += 0;
        result[2] += 0.010312405216863815;
        result[3] += 0.0006066120715802245;
        result[4] += 0.003942978465271459;
        result[5] += 0.001516530178950561;
        result[6] += 0.001213224143160449;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.010101010101010102;
        result[1] += 0.037037037037037035;
        result[2] += 0;
        result[3] += 0.10437710437710437;
        result[4] += 0.8484848484848485;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16191275167785235;
        result[1] += 0.006711409395973154;
        result[2] += 0;
        result[3] += 0.8313758389261745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.26480836236933797;
        result[1] += 0;
        result[2] += 0.024390243902439025;
        result[3] += 0.710801393728223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.027450980392156862;
        result[4] += 0.9725490196078431;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.317722681359045;
        result[1] += 0.0073461891643709825;
        result[2] += 0;
        result[3] += 0.6143250688705234;
        result[4] += 0.06060606060606061;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.09125475285171103;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.16539923954372623;
        result[4] += 0.7433460076045627;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.27704918032786885;
        result[1] += 0.008743169398907104;
        result[2] += 0.009289617486338797;
        result[3] += 0.6005464480874317;
        result[4] += 0.10437158469945355;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.047696038803556995;
        result[1] += 0;
        result[2] += 0.0032336297493936943;
        result[3] += 0.11802748585286985;
        result[4] += 0.8310428455941795;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)5.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9956011730205279;
        result[5] += 0.004398826979472141;
        result[6] += 0;
      } else {
        result[0] += 0.9832991363267644;
        result[1] += 0.0003340172734647135;
        result[2] += 0.0008589015603378346;
        result[3] += 0.015412511332728921;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.543350670420384e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.6781865210518754;
        result[1] += 0.0009340422474493463;
        result[2] += 0.0016525362839488434;
        result[3] += 0.30787469464003453;
        result[4] += 0.010561862336542608;
        result[5] += 0.0005747952291995978;
        result[6] += 0.00021554821094984915;
      } else {
        result[0] += 0.9846672799754677;
        result[1] += 0;
        result[2] += 0.010119595216191352;
        result[3] += 0;
        result[4] += 0.0030665440049064702;
        result[5] += 0.0006133088009812941;
        result[6] += 0.0015332720024532351;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.007194244604316547;
        result[1] += 0.039568345323741004;
        result[2] += 0;
        result[3] += 0.14388489208633093;
        result[4] += 0.8093525179856115;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3230884557721139;
        result[1] += 0.003373313343328336;
        result[2] += 0.006371814092953523;
        result[3] += 0.6671664167916042;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.36085626911314983;
        result[1] += 0;
        result[2] += 0.024464831804281346;
        result[3] += 0.6146788990825688;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03219178082191781;
        result[4] += 0.9678082191780822;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9835398822910187;
        result[1] += 9.569835877314705e-05;
        result[2] += 0.0011483803052777645;
        result[3] += 0.014833245609837791;
        result[4] += 0.00014354753815972056;
        result[5] += 4.784917938657352e-05;
        result[6] += 0.0001913967175462941;
      } else {
        result[0] += 0.7334225221033038;
        result[1] += 0.00046533271288971617;
        result[2] += 0.003489995346672871;
        result[3] += 0.25290832945556074;
        result[4] += 0.009073987901349464;
        result[5] += 0.00017449976733364356;
        result[6] += 0.00046533271288971617;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)880) ) ) {
        result[0] += 0.001483679525222552;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985163204747775;
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0015558148580318942;
        result[1] += 0;
        result[2] += 0.0031116297160637884;
        result[3] += 0.8844807467911319;
        result[4] += 0.10890704006223259;
        result[5] += 0.0019447685725398677;
        result[6] += 0;
      } else {
        result[0] += 0.34360410830999066;
        result[1] += 0;
        result[2] += 0.017740429505135387;
        result[3] += 0;
        result[4] += 0.6386554621848739;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993046702978329;
        result[1] += 0;
        result[2] += 0.0005408119905744196;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001545177115926913;
      } else {
        result[0] += 0.6996974974791457;
        result[1] += 0.0017416811806765056;
        result[2] += 0.006600055000458337;
        result[3] += 0.2909524246035384;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010083417361811348;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.18009478672985782;
        result[1] += 0.005416384563303994;
        result[2] += 0.007447528774542992;
        result[3] += 0.8070412999322952;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        result[0] += 0.020202020202020204;
        result[1] += 0.010101010101010102;
        result[2] += 0;
        result[3] += 0.9696969696969697;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001177856301531213;
        result[1] += 0.012956419316843345;
        result[2] += 0;
        result[3] += 0.001177856301531213;
        result[4] += 0.9846878680800942;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9962917181705809;
        result[1] += 0;
        result[2] += 0.0030902348578491965;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006180469715698393;
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
        result[0] += 0.9991689175150633;
        result[1] += 0;
        result[2] += 0.0008310824849366299;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)12.5) ) ) {
        result[0] += 0.5072766682148939;
        result[1] += 0.0017804613717293698;
        result[2] += 0.007818547762811582;
        result[3] += 0.4338132837900604;
        result[4] += 0.048304691128657685;
        result[5] += 0.00038705681994116736;
        result[6] += 0.0006192909119058678;
      } else {
        result[0] += 0.5841064945542558;
        result[1] += 0;
        result[2] += 0.0004033884630899556;
        result[3] += 0.382008874546188;
        result[4] += 0.0318676885841065;
        result[5] += 0.0004033884630899556;
        result[6] += 0.0012101653892698668;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.0032388663967611335;
        result[1] += 0.008097165991902834;
        result[2] += 0;
        result[3] += 0.2582995951417004;
        result[4] += 0.7303643724696356;
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
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5343396226415095;
        result[1] += 0;
        result[2] += 0.00930817610062893;
        result[3] += 0.3849056603773585;
        result[4] += 0.07144654088050315;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07570543702684102;
        result[1] += 0.008602890571231933;
        result[2] += 0.0027529249827942187;
        result[3] += 0.40949759119064005;
        result[4] += 0.5034411562284927;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)50.5) ) ) {
        result[0] += 0.9830542995641371;
        result[1] += 0.0008554319931565441;
        result[2] += 0.0008146971363395659;
        result[3] += 0.01478675302456312;
        result[4] += 0.0002851439977188481;
        result[5] += 0.00020367428408489148;
        result[6] += 0;
      } else {
        result[0] += 0.8000761614623001;
        result[1] += 0;
        result[2] += 0.0015232292460015233;
        result[3] += 0.19687738004569688;
        result[4] += 0.0003808073115003808;
        result[5] += 0.0007616146230007616;
        result[6] += 0.0003808073115003808;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.15995705850778313;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8400429414922168;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        result[0] += 0.001567398119122257;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9984326018808778;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9810049019607844;
        result[1] += 0;
        result[2] += 0.013480392156862748;
        result[3] += 0.0006127450980392158;
        result[4] += 0.0036764705882352945;
        result[5] += 0.0006127450980392158;
        result[6] += 0.0006127450980392158;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
        result[0] += 0.7142857142857143;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.2857142857142857;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0006099420555047272;
        result[1] += 0.002744739249771272;
        result[2] += 0.007929246721561454;
        result[3] += 0.9862763037511437;
        result[4] += 0;
        result[5] += 0.0024397682220189086;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        result[0] += 0.9985507246376812;
        result[1] += 0.00022296544035674474;
        result[2] += 0.0010033444816053513;
        result[3] += 0.00022296544035674474;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9902674185919592;
        result[1] += 0;
        result[2] += 0.0005457522284882663;
        result[3] += 0.00909587047480444;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.095870474804439e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991158267020336;
        result[1] += 0;
        result[2] += 0.0008841732979664014;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6856090502499342;
        result[1] += 0.0014908357449793914;
        result[2] += 0.007103393843725336;
        result[3] += 0.304919757958432;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008769622029290538;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)48) ) ) {
        result[0] += 0.9932432432432432;
        result[1] += 0;
        result[2] += 0.006756756756756757;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06433166547533953;
        result[1] += 0.005718370264474625;
        result[2] += 0;
        result[3] += 0.586132952108649;
        result[4] += 0.3438170121515368;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.8363520813473149;
        result[1] += 0;
        result[2] += 0.003336510962821735;
        result[3] += 0.15927867810613283;
        result[4] += 0.0007944073721004131;
        result[5] += 7.944073721004132e-05;
        result[6] += 0.00015888147442008263;
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
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70) ) ) {
        result[0] += 0.9182317723283853;
        result[1] += 0.0006561141638645125;
        result[2] += 0.001271221192487493;
        result[3] += 0.07984089231526287;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.20243902439024392;
        result[1] += 0.0027100271002710027;
        result[2] += 0.008401084010840108;
        result[3] += 0.508130081300813;
        result[4] += 0.27723577235772356;
        result[5] += 0.001084010840108401;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004491017964071856;
        result[2] += 0;
        result[3] += 0.06287425149700598;
        result[4] += 0.9326347305389222;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)83.5) ) ) {
        result[0] += 0.383974358974359;
        result[1] += 0.004166666666666667;
        result[2] += 0.003205128205128205;
        result[3] += 0.6067307692307692;
        result[4] += 0.0019230769230769232;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08408903544929926;
        result[1] += 0;
        result[2] += 0.00989282769991756;
        result[3] += 0.17477328936521022;
        result[4] += 0.731244847485573;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.007462686567164179;
        result[1] += 0.022388059701492536;
        result[2] += 0;
        result[3] += 0.2574626865671642;
        result[4] += 0.7126865671641791;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004195804195804196;
        result[2] += 0;
        result[3] += 0.06293706293706294;
        result[4] += 0.9328671328671329;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.12521942656524285;
        result[1] += 0;
        result[2] += 0.004681100058513752;
        result[3] += 0.8431831480397894;
        result[4] += 0.0216500877706261;
        result[5] += 0.00526623756582797;
        result[6] += 0;
      } else {
        result[0] += 0.9940528959810875;
        result[1] += 0.0003693853427895981;
        result[2] += 0.0013297872340425532;
        result[3] += 0.004026300236406619;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022163120567375886;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4395482318089243;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5604517681910757;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8215892053973014;
        result[1] += 0;
        result[2] += 0.014992503748125937;
        result[3] += 0.0012493753123438282;
        result[4] += 0.16091954022988506;
        result[5] += 0.0004997501249375312;
        result[6] += 0.0007496251874062968;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0;
        result[1] += 0.014485755673587638;
        result[2] += 0.004828585224529213;
        result[3] += 0.8657653307580879;
        result[4] += 0.11492032834379527;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9974651457541192;
        result[1] += 0.0025348542458808617;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.059134107708553325;
        result[4] += 0.9408658922914467;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1664626682986536;
        result[1] += 0;
        result[2] += 0.012239902080783354;
        result[3] += 0.2386780905752754;
        result[4] += 0.5826193390452876;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985754985754985;
        result[5] += 0.0014245014245014246;
        result[6] += 0;
      } else {
        result[0] += 0.9821403192950874;
        result[1] += 0.0001894926334738737;
        result[2] += 0.0011843289592117106;
        result[3] += 0.016296366478753137;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001894926334738737;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.794121389489757;
        result[1] += 0.00038172795521058657;
        result[2] += 0.0035627942486321416;
        result[3] += 0.20123425372184756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006998345845527421;
      } else {
        result[0] += 0.013363028953229399;
        result[1] += 0;
        result[2] += 0.014847809948032665;
        result[3] += 0.8485523385300668;
        result[4] += 0.11952487008166296;
        result[5] += 0.003711952487008166;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
        result[0] += 0.9994293106072135;
        result[1] += 0;
        result[2] += 0.000532643433267387;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.804595951909907e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0033821871476888386;
        result[1] += 0.006764374295377677;
        result[2] += 0;
        result[3] += 0.20293122886133033;
        result[4] += 0.7857948139797069;
        result[5] += 0.0011273957158962795;
        result[6] += 0;
      } else {
        result[0] += 0.5765881729385932;
        result[1] += 0.000908609070947225;
        result[2] += 0.007798894525630347;
        result[3] += 0.3940334671007799;
        result[4] += 0.01930794275762853;
        result[5] += 0.0006057393806314833;
        result[6] += 0.0007571742257893541;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5688976377952756;
        result[1] += 0;
        result[2] += 0.017716535433070866;
        result[3] += 0.41338582677165353;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.005454545454545455;
        result[1] += 0.014545454545454545;
        result[2] += 0;
        result[3] += 0.98;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.371107708014293;
        result[1] += 0.005104645227156712;
        result[2] += 0.007656967840735069;
        result[3] += 0.5814190913731496;
        result[4] += 0.03471158754466565;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13063063063063066;
        result[1] += 0.005405405405405407;
        result[2] += 0;
        result[3] += 0.700900900900901;
        result[4] += 0.1630630630630631;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)73) ) ) {
        result[0] += 0.34195402298850575;
        result[1] += 0;
        result[2] += 0.028735632183908046;
        result[3] += 0.6293103448275862;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0336676217765043;
        result[4] += 0.9663323782234957;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.002472187886279357;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9975278121137207;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11707595659623073;
        result[1] += 0;
        result[2] += 0.010279840091376356;
        result[3] += 0.8715019988577956;
        result[4] += 0;
        result[5] += 0.001142204454597373;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9943305713039686;
        result[1] += 0.0003270824247710423;
        result[2] += 0.0012719872074429422;
        result[3] += 0.003815961622328827;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002543974414885885;
      } else {
        result[0] += 0.640808268493787;
        result[1] += 0;
        result[2] += 0.004180699105794913;
        result[3] += 0.35454651027755196;
        result[4] += 0;
        result[5] += 0.00011613053071652537;
        result[6] += 0.00034839159214957615;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.085381091211995;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8925447730112454;
        result[4] += 0.02082465639316951;
        result[5] += 0.0012494793835901709;
        result[6] += 0;
      } else {
        result[0] += 0.279204107830552;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6078305519897305;
        result[4] += 0.11296534017971759;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.4318181818181818;
        result[1] += 0.17045454545454544;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.38636363636363635;
        result[5] += 0.011363636363636364;
        result[6] += 0;
      } else {
        result[0] += 0.03454306952339309;
        result[1] += 0;
        result[2] += 0.012680367293397464;
        result[3] += 0;
        result[4] += 0.9519020550940096;
        result[5] += 0.0008745080891998251;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.9968751122445315;
        result[1] += 0.0005387737509428542;
        result[2] += 0.00211917675370856;
        result[3] += 0.00025142775043999864;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021550950037714164;
      } else {
        result[0] += 0.005952380952380952;
        result[1] += 0.05952380952380952;
        result[2] += 0;
        result[3] += 0.9345238095238095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)57.5) ) ) {
        result[0] += 0.4487945600659386;
        result[1] += 0;
        result[2] += 0.0035029878425716053;
        result[3] += 0.5477024520914898;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8691972920696325;
        result[1] += 0;
        result[2] += 0.004352030947775629;
        result[3] += 0.12572533849129594;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007253384912959381;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
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
        result[1] += 0.003835826620636748;
        result[2] += 0.00882240122746452;
        result[3] += 0.9854238588415805;
        result[4] += 0;
        result[5] += 0.001917913310318374;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13324) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9655536987142321;
        result[1] += 0.0010913679615292794;
        result[2] += 0.001500630947102759;
        result[3] += 0.03175198663074247;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010231574639336993;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.1984007996001999;
        result[1] += 0;
        result[2] += 0.004747626186906547;
        result[3] += 0.7966016991504248;
        result[4] += 0;
        result[5] += 0.0002498750624687656;
        result[6] += 0;
      } else {
        result[0] += 0.991941982272361;
        result[1] += 0;
        result[2] += 0.0056406124093473006;
        result[3] += 0.001007252215954875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014101531023368251;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.22106552357624004;
        result[1] += 0.003061849357011635;
        result[2] += 0;
        result[3] += 0.775260257195346;
        result[4] += 0.000612369871402327;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5035211267605634;
        result[1] += 0;
        result[2] += 0.022007042253521125;
        result[3] += 0.4744718309859155;
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
        result[0] += 0;
        result[1] += 0.05016722408026756;
        result[2] += 0;
        result[3] += 0.9498327759197325;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9948051948051948;
        result[1] += 0;
        result[2] += 0.005194805194805195;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995703628481037;
        result[1] += 0;
        result[2] += 0.00031246338319728154;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011717376869898059;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0022598870056497176;
        result[1] += 0.006779661016949152;
        result[2] += 0;
        result[3] += 0.23728813559322035;
        result[4] += 0.752542372881356;
        result[5] += 0.0011299435028248588;
        result[6] += 0;
      } else {
        result[0] += 0.5986979384024707;
        result[1] += 0.0005842584091478174;
        result[2] += 0.007094566396794926;
        result[3] += 0.3804356898422503;
        result[4] += 0.011685168182956349;
        result[5] += 0.0005007929221267007;
        result[6] += 0.0010015858442534015;
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
        result[0] += 0.9947368421052631;
        result[1] += 0;
        result[2] += 0.0033492822966507177;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019138755980861245;
      } else {
        result[0] += 0.9998338111263451;
        result[1] += 0;
        result[2] += 0.0001661888736549088;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6150510994115825;
        result[1] += 0.0010839269123567668;
        result[2] += 0.004645401052957572;
        result[3] += 0.3248683803034995;
        result[4] += 0.05357695881077733;
        result[5] += 0.0005419634561783834;
        result[6] += 0.0002322700526478786;
      } else {
        result[0] += 0.08231707317073171;
        result[1] += 0.0078397212543554;
        result[2] += 0.010017421602787456;
        result[3] += 0.8950348432055749;
        result[4] += 0.003048780487804878;
        result[5] += 0.0017421602787456446;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0.001326259946949602;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4217506631299735;
        result[4] += 0.5769230769230769;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0014577259475218659;
        result[1] += 0.006559766763848397;
        result[2] += 0;
        result[3] += 0.06705539358600583;
        result[4] += 0.9249271137026239;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0029106029106029108;
        result[1] += 0;
        result[2] += 0.002494802494802495;
        result[3] += 0.9708939708939709;
        result[4] += 0.02079002079002079;
        result[5] += 0.0029106029106029108;
        result[6] += 0;
      } else {
        result[0] += 0.23667377398720682;
        result[1] += 0;
        result[2] += 0.021321961620469083;
        result[3] += 0;
        result[4] += 0.7420042643923241;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7377049180327869;
        result[4] += 0.26229508196721313;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00423728813559322;
        result[2] += 0;
        result[3] += 0.0036319612590799033;
        result[4] += 0.9921307506053268;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.9721115537848606;
        result[1] += 0.00796812749003984;
        result[2] += 0;
        result[3] += 0.0199203187250996;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.47391857506361323;
        result[1] += 0;
        result[2] += 0.005089058524173028;
        result[3] += 0.5209923664122137;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8738271416584026;
        result[1] += 0.000800976428407964;
        result[2] += 0.001983370203676863;
        result[3] += 0.1231215195667099;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00026699214280265465;
      } else {
        result[0] += 0.9864799144052135;
        result[1] += 0;
        result[2] += 0.0035016049022468633;
        result[3] += 0.009532146678338684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048633401420095323;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += 0.9754716981132076;
        result[1] += 0;
        result[2] += 0.024528301886792454;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07695984703632887;
        result[1] += 0.0076481835564053535;
        result[2] += 0.0004780114722753346;
        result[3] += 0.9024856596558317;
        result[4] += 0.0124282982791587;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.002531645569620253;
        result[1] += 0.007594936708860759;
        result[2] += 0;
        result[3] += 0.2523206751054852;
        result[4] += 0.7375527426160338;
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
        result[0] += 0.999164451196354;
        result[1] += 0;
        result[2] += 0.0006836308393467528;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001519179642992784;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        result[0] += 0.6565548185719859;
        result[1] += 0.0015606710885680843;
        result[2] += 0.005169722980881779;
        result[3] += 0.32422941865001953;
        result[4] += 0.011412407335154116;
        result[5] += 0.0003901677721420211;
        result[6] += 0.0006827936012485369;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.010072747621712367;
        result[3] += 0.6614437604924455;
        result[4] += 0.3251259093452714;
        result[5] += 0.003357582540570789;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9981406540522805;
        result[1] += 0;
        result[2] += 0.0015312260745925844;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032811987312698237;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9148570727518096;
        result[1] += 0.001594896331738437;
        result[2] += 0.003435161329898172;
        result[3] += 0.07876334192123666;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001349527665317139;
      } else {
        result[0] += 0.10700425060062835;
        result[1] += 0.006283496581038625;
        result[2] += 0.005359452966180004;
        result[3] += 0.56163370911107;
        result[4] += 0.3193494732951395;
        result[5] += 0.00036961744594344855;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0011210762331838565;
        result[2] += 0;
        result[3] += 0.1961883408071749;
        result[4] += 0.8015695067264574;
        result[5] += 0.0011210762331838565;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014867256637168142;
        result[3] += 0.9823008849557522;
        result[4] += 0.002831858407079646;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.05571847507331378;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9442815249266863;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.38689288090485696;
        result[1] += 0.007651363938789089;
        result[2] += 0.007984031936127744;
        result[3] += 0.5974717232202262;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
        result[0] += 0.981416624973197;
        result[1] += 0.0005003216353370024;
        result[2] += 0.0008934314916732185;
        result[3] += 0.01697519834179115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021442355800157243;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013611615245009074;
        result[3] += 0.9464609800362976;
        result[4] += 0.03720508166969147;
        result[5] += 0.0027223230490018148;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.43625163337689005;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5637483666231099;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8311066296949836;
        result[1] += 0;
        result[2] += 0.009831106629694983;
        result[3] += 0.0007562389715149988;
        result[4] += 0.15704562641794806;
        result[5] += 0.0007562389715149988;
        result[6] += 0.0005041593143433325;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)924.5) ) ) {
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)2.5) ) ) {
        result[0] += 0.9994505958921478;
        result[1] += 0;
        result[2] += 0.0005494041078522526;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9987873888439773;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012126111560226355;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)89.5) ) ) {
        result[0] += 0.5359202936549554;
        result[1] += 0;
        result[2] += 0.008739730816290859;
        result[3] += 0.4084950183534347;
        result[4] += 0.04527180562838665;
        result[5] += 0.001048767697954903;
        result[6] += 0.0005243838489774515;
      } else {
        result[0] += 0.09728033472803348;
        result[1] += 0.005230125523012552;
        result[2] += 0;
        result[3] += 0.5104602510460251;
        result[4] += 0.38702928870292885;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.5984108967082861;
        result[1] += 0.006356413166855846;
        result[2] += 0.0029511918274687855;
        result[3] += 0.37775255391600454;
        result[4] += 0.013166855845629965;
        result[5] += 0.000681044267877412;
        result[6] += 0.000681044267877412;
      } else {
        result[0] += 0.3640612409347301;
        result[1] += 0.00016116035455278002;
        result[2] += 0.0059629331184528605;
        result[3] += 0.3574536663980661;
        result[4] += 0.2717163577759871;
        result[5] += 0.00032232070910556004;
        result[6] += 0.00032232070910556004;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.00303951367781155;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.993920972644377;
        result[5] += 0.00303951367781155;
        result[6] += 0;
      } else {
        result[0] += 0.9829526409040847;
        result[1] += 0.00019154336062826224;
        result[2] += 0.0015802327251831635;
        result[3] += 0.015179811329789784;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.577168031413112e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.7903216000972701;
        result[1] += 0.0007903216000972701;
        result[2] += 0.003100492431150829;
        result[3] += 0.20499726427138423;
        result[4] += 0;
        result[5] += 0.00030396984619125776;
        result[6] += 0.0004863517539060124;
      } else {
        result[0] += 0.1709717097170972;
        result[1] += 0;
        result[2] += 0.012710127101271014;
        result[3] += 0.7076670766707668;
        result[4] += 0.10742107421074212;
        result[5] += 0.0012300123001230015;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        result[0] += 0;
        result[1] += 0.04225352112676056;
        result[2] += 0;
        result[3] += 0.9577464788732394;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0013986013986013986;
        result[1] += 0.012587412587412588;
        result[2] += 0;
        result[3] += 0.002797202797202797;
        result[4] += 0.9832167832167832;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.1768033946251768;
        result[1] += 0.007779349363507779;
        result[2] += 0.005657708628005658;
        result[3] += 0.8097595473833098;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.11251435132032148;
        result[4] += 0.8874856486796785;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-13) ) ) {
        result[0] += 0.23076923076923078;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7692307692307693;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0004037141703673799;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9979814291481631;
        result[5] += 0.0016148566814695195;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.08360790774299835;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9159802306425041;
        result[4] += 0;
        result[5] += 0.00041186161449752884;
        result[6] += 0;
      } else {
        result[0] += 0.3586683417085427;
        result[1] += 0.006909547738693468;
        result[2] += 0.015703517587939697;
        result[3] += 0.6168341708542714;
        result[4] += 0;
        result[5] += 0.0018844221105527637;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9919571045576407;
        result[1] += 0;
        result[2] += 0.00804289544235925;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998000159987201;
        result[1] += 0;
        result[2] += 0.0001999840012798976;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.667211997273347;
        result[1] += 0.0028629856850715747;
        result[2] += 0.007089297886843899;
        result[3] += 0.3213360599863667;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014996591683708249;
      } else {
        result[0] += 0.7228971962616823;
        result[1] += 0;
        result[2] += 0.0014018691588785046;
        result[3] += 0.27546728971962614;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00023364485981308412;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.9346433897710323;
        result[1] += 0.0016668128783226595;
        result[2] += 0.0016668128783226595;
        result[3] += 0.06132116852355468;
        result[4] += 0;
        result[5] += 0.00017545398719185891;
        result[6] += 0.0005263619615755767;
      } else {
        result[0] += 0.9968800554656806;
        result[1] += 0;
        result[2] += 0.00023110700254217703;
        result[3] += 0.0027732840305061245;
        result[4] += 5.777675063554426e-05;
        result[5] += 5.777675063554426e-05;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.14607797087834665;
        result[1] += 0.0025833724753405356;
        result[2] += 0.008924377642085486;
        result[3] += 0.6150775011742602;
        result[4] += 0.2266322217003288;
        result[5] += 0.0007045561296383278;
        result[6] += 0;
      } else {
        result[0] += 0.0029211295034079843;
        result[1] += 0.007789678675754625;
        result[2] += 0;
        result[3] += 0.11295034079844206;
        result[4] += 0.8763388510223953;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.1562669560499186;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8437330439500814;
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
        result[0] += 0.9878751136708094;
        result[1] += 0;
        result[2] += 0.010912397696271597;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012124886329190664;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.004155124653739613;
        result[3] += 0;
        result[4] += 0.9903047091412743;
        result[5] += 0.0055401662049861505;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.07462686567164178;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.920042643923241;
        result[4] += 0.0028429282160625444;
        result[5] += 0.0024875621890547263;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01712538226299694;
        result[3] += 0;
        result[4] += 0.981651376146789;
        result[5] += 0.0012232415902140672;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)103) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008394543546694649;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9916054564533053;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
        result[0] += 0.4824561403508772;
        result[1] += 0;
        result[2] += 0.0008771929824561404;
        result[3] += 0.5149122807017544;
        result[4] += 0;
        result[5] += 0.0017543859649122807;
        result[6] += 0;
      } else {
        result[0] += 0.6062992125984252;
        result[1] += 0.0015748031496062992;
        result[2] += 0.0015748031496062992;
        result[3] += 0.3905511811023622;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8882755211337234;
        result[1] += 0;
        result[2] += 0.0026365658729504823;
        result[3] += 0.1087583422592074;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003295707341188103;
      } else {
        result[0] += 0.9164288963321342;
        result[1] += 0.000868378613075301;
        result[2] += 0.0017781085886779972;
        result[3] += 0.0807178596534756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00020675681263697643;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
        result[0] += 0.4244102564102564;
        result[1] += 0.006153846153846154;
        result[2] += 0.0036923076923076922;
        result[3] += 0.5173333333333333;
        result[4] += 0.04841025641025641;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9432233298247786;
        result[1] += 0.0009287350628444059;
        result[2] += 0.0015478917714073432;
        result[3] += 0.05368088663240666;
        result[4] += 6.191567085629373e-05;
        result[5] += 0.0002476626834251749;
        result[6] += 0.00030957835428146866;
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
        result[0] += 0.9894328989080662;
        result[1] += 0;
        result[2] += 0.0028178936245156746;
        result[3] += 0.007749207467418105;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.1624203821656051;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8375796178343949;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9768645357686455;
        result[1] += 0;
        result[2] += 0.014611872146118723;
        result[3] += 0.0015220700152207003;
        result[4] += 0.0030441400304414006;
        result[5] += 0.0015220700152207003;
        result[6] += 0.002435312024353121;
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
        result[0] += 0.9991588284774795;
        result[1] += 0;
        result[2] += 0.0007647013841095053;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.647013841095053e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.6715161716965253;
        result[1] += 0.0015630636046651439;
        result[2] += 0.006372490080557894;
        result[3] += 0.28471804737285084;
        result[4] += 0.03366598533124925;
        result[5] += 0.0010821209570758689;
        result[6] += 0.0010821209570758689;
      } else {
        result[0] += 0.3575601374570447;
        result[1] += 0;
        result[2] += 0.007731958762886598;
        result[3] += 0.5123711340206185;
        result[4] += 0.12130584192439862;
        result[5] += 0.0003436426116838488;
        result[6] += 0.0006872852233676976;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5676691729323309;
        result[1] += 0;
        result[2] += 0.011278195488721804;
        result[3] += 0.42105263157894735;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.003389830508474576;
        result[1] += 0.0211864406779661;
        result[2] += 0;
        result[3] += 0.9754237288135593;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)22.5) ) ) {
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0035574528637495554;
        result[2] += 0.007826396300249021;
        result[3] += 0.9864816791177516;
        result[4] += 0;
        result[5] += 0.0021344717182497333;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9841688654353562;
        result[1] += 0;
        result[2] += 0.0158311345646438;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995699765441751;
        result[1] += 0;
        result[2] += 0.00039093041438623924;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.909304143862392e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.871142393069843;
        result[1] += 0.002490525175961018;
        result[2] += 0.006388738494856524;
        result[3] += 0.11867893881970763;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012994044396318354;
      } else {
        result[0] += 0;
        result[1] += 0.001455604075691412;
        result[2] += 0.002183406113537118;
        result[3] += 0.9963609898107715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-185) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9920844327176781;
        result[1] += 0;
        result[2] += 0.0079155672823219;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996882793017456;
        result[1] += 0;
        result[2] += 0.00027275561097256856;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.896508728179551e-05;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.004640371229698376;
        result[1] += 0.00580046403712297;
        result[2] += 0;
        result[3] += 0.20649651972157773;
        result[4] += 0.7830626450116009;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5672388630203629;
        result[1] += 0.0020154284522899443;
        result[2] += 0.00715824588227118;
        result[3] += 0.42094655639724793;
        result[4] += 0.0009034679268885955;
        result[5] += 0.0006949753283758428;
        result[6] += 0.0010424629925637641;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.004434589800443459;
        result[1] += 0.0066518847006651885;
        result[2] += 0;
        result[3] += 0.3178122690317812;
        result[4] += 0.6711012564671102;
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
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-174.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
        result[0] += 0.9965174129353234;
        result[1] += 0;
        result[2] += 0.003482587064676617;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995870328308899;
        result[1] += 0;
        result[2] += 0.00041296716911005574;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.6974989030276437;
        result[1] += 0.0016673979815708645;
        result[2] += 0.007810443176831943;
        result[3] += 0.2912681000438789;
        result[4] += 0.00017551557700745942;
        result[5] += 0.0007020623080298377;
        result[6] += 0.0008775778850372971;
      } else {
        result[0] += 0;
        result[1] += 0.0005353319057815846;
        result[2] += 0.0066916488222698075;
        result[3] += 0.8056745182012848;
        result[4] += 0.18656316916488222;
        result[5] += 0.0005353319057815846;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)98.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001394700139470014;
        result[1] += 0.008368200836820083;
        result[2] += 0;
        result[3] += 0.2859135285913529;
        result[4] += 0.704323570432357;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9964590609235545;
        result[1] += 0;
        result[2] += 0.00038804811796662784;
        result[3] += 0.002910360884749709;
        result[4] += 9.701202949165696e-05;
        result[5] += 0;
        result[6] += 0.00014551804423748544;
      } else {
        result[0] += 0.018808777429467086;
        result[1] += 0.003134796238244514;
        result[2] += 0.008359456635318705;
        result[3] += 0.26750261233019856;
        result[4] += 0.7001044932079414;
        result[5] += 0.0020898641588296763;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.416766728523087;
        result[1] += 0.0014190590546883529;
        result[2] += 0.005457919441109049;
        result[3] += 0.5454644689444383;
        result[4] += 0.02980024014845541;
        result[5] += 0.0008732671105774479;
        result[6] += 0.00021831677764436196;
      } else {
        result[0] += 0.9868896459172086;
        result[1] += 0;
        result[2] += 0.0021678538247135335;
        result[3] += 0.010632806854547332;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003096934035305048;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-34) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.012618296529968454;
        result[1] += 0.04100946372239748;
        result[2] += 0;
        result[3] += 0.22082018927444794;
        result[4] += 0.7255520504731862;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15898463593854376;
        result[1] += 0.007348029392117568;
        result[2] += 0.008016032064128256;
        result[3] += 0.8256513026052105;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        result[0] += 0.9946629483604192;
        result[1] += 9.616309260505818e-05;
        result[2] += 0.0003846523704202327;
        result[3] += 0.004663909991345322;
        result[4] += 9.616309260505818e-05;
        result[5] += 0;
        result[6] += 9.616309260505818e-05;
      } else {
        result[0] += 0;
        result[1] += 0.0066518847006651885;
        result[2] += 0.005543237250554324;
        result[3] += 0.24611973392461198;
        result[4] += 0.7416851441241685;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.33692538534988403;
        result[1] += 0.0015004774246351112;
        result[2] += 0.007229573045969172;
        result[3] += 0.6158777792934116;
        result[4] += 0.03682990042286182;
        result[5] += 0.0008184422316191515;
        result[6] += 0.0008184422316191515;
      } else {
        result[0] += 0.941579228170016;
        result[1] += 0;
        result[2] += 0.002134092121643251;
        result[3] += 0.056019918193135336;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00026676151520540635;
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
        result[0] += 0.5728155339805825;
        result[1] += 0;
        result[2] += 0.021359223300970873;
        result[3] += 0.4058252427184466;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0024834437086092716;
        result[1] += 0.019867549668874173;
        result[2] += 0;
        result[3] += 0.9776490066225165;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)7) ) ) {
        result[0] += 0.9948446087252566;
        result[1] += 4.86357667428627e-05;
        result[2] += 0.0005349934341714897;
        result[3] += 0.004279947473371917;
        result[4] += 0.0001459073002285881;
        result[5] += 0;
        result[6] += 0.0001459073002285881;
      } else {
        result[0] += 0.002061855670103093;
        result[1] += 0.002061855670103093;
        result[2] += 0.01443298969072165;
        result[3] += 0.27628865979381445;
        result[4] += 0.7030927835051546;
        result[5] += 0.002061855670103093;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.34606173496540715;
        result[1] += 0.0007982969664715274;
        result[2] += 0.007982969664715274;
        result[3] += 0.6052421500798297;
        result[4] += 0.038185204896221396;
        result[5] += 0.0009313464608834486;
        result[6] += 0.0007982969664715274;
      } else {
        result[0] += 0.9356120826709062;
        result[1] += 0;
        result[2] += 0.0021197668256491787;
        result[3] += 0.061914856032503095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003532944709415298;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5634920634920635;
        result[1] += 0;
        result[2] += 0.011904761904761904;
        result[3] += 0.4246031746031746;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00102880658436214;
        result[1] += 0.012345679012345678;
        result[2] += 0;
        result[3] += 0.9866255144032922;
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
        result[0] += 0.006289308176100629;
        result[1] += 0.06918238993710692;
        result[2] += 0;
        result[3] += 0.9245283018867925;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0.9972458113380767;
        result[1] += 0;
        result[2] += 0.0025246729400963965;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022951572182694515;
      } else {
        result[0] += 0.9997261774370209;
        result[1] += 0;
        result[2] += 0.0002738225629791895;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.015541165587419059;
        result[1] += 0.00481036077705828;
        result[2] += 0.00666049953746531;
        result[3] += 0.653654024051804;
        result[4] += 0.31840888066605;
        result[5] += 0.0009250693802035154;
        result[6] += 0;
      } else {
        result[0] += 0.9809970384995064;
        result[1] += 0.00012339585389930897;
        result[2] += 0.006416584402764067;
        result[3] += 0.0109822309970385;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014807502467917078;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0.0020352781546811396;
        result[2] += 0;
        result[3] += 0.996268656716418;
        result[4] += 0.0010176390773405698;
        result[5] += 0.0006784260515603799;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.05084745762711865;
        result[3] += 0;
        result[4] += 0.9491525423728814;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-272) ) ) {
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
        result[0] += 0.9991852254209669;
        result[1] += 0;
        result[2] += 0.0007242440702516748;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.053050878145935e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.0008305647840531562;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9987541528239202;
        result[5] += 0.0004152823920265781;
        result[6] += 0;
      } else {
        result[0] += 0.017576751816264353;
        result[1] += 0.006327630653855168;
        result[2] += 0.011717834544176237;
        result[3] += 0.9632059995312866;
        result[4] += 0;
        result[5] += 0.0011717834544176236;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        result[0] += 0.9970024979184013;
        result[1] += 0;
        result[2] += 0.002331390507910075;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006661115736885929;
      } else {
        result[0] += 0.4367572156196944;
        result[1] += 0;
        result[2] += 0.004881154499151104;
        result[3] += 0.5573005093378608;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010611205432937182;
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
        result[0] += 0.9989159891598915;
        result[1] += 0;
        result[2] += 0.001084010840108401;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.015293708724365659;
        result[1] += 0.0043448036148766075;
        result[2] += 0.0072992700729927005;
        result[3] += 0.7009037191518943;
        result[4] += 0.2712895377128954;
        result[5] += 0.0008689607229753215;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.012658227848101266;
        result[2] += 0;
        result[3] += 0.11587147030185005;
        result[4] += 0.8714703018500487;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9831586826347306;
        result[1] += 0;
        result[2] += 0.0047405189620758495;
        result[3] += 0.011227544910179642;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008732534930139721;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0003968253968253968;
        result[3] += 0.9996031746031746;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9777274443186108;
        result[4] += 0.022272555681389205;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995559502664298;
        result[5] += 0.0004440497335701599;
        result[6] += 0;
      } else {
        result[0] += 0.5529411764705883;
        result[1] += 0.12941176470588237;
        result[2] += 0.25882352941176473;
        result[3] += 0.011764705882352941;
        result[4] += 0;
        result[5] += 0.047058823529411764;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9938938468764679;
        result[1] += 0;
        result[2] += 0.004227336777829967;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018788163457022077;
      } else {
        result[0] += 0.9997488173483485;
        result[1] += 0;
        result[2] += 0.00025118265165152595;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.849287598944591;
        result[1] += 0.0022163588390501318;
        result[2] += 0.007282321899736148;
        result[3] += 0.1400527704485488;
        result[4] += 0;
        result[5] += 0.00021108179419525067;
        result[6] += 0.000949868073878628;
      } else {
        result[0] += 0;
        result[1] += 0.0014005602240896359;
        result[2] += 0.008753501400560224;
        result[3] += 0.9898459383753502;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)78.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.09334061135371179;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8979257641921398;
        result[4] += 0.0049126637554585155;
        result[5] += 0.003820960698689956;
        result[6] += 0;
      } else {
        result[0] += 0.9929889566986341;
        result[1] += 0.0006175530369078756;
        result[2] += 0.0008355129322871258;
        result[3] += 0.00526736413833188;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002906131938390003;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.3614561027837259;
        result[1] += 0.004710920770877944;
        result[2] += 0.015417558886509636;
        result[3] += 0.5927194860813705;
        result[4] += 0.02569593147751606;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009950248756218905;
        result[1] += 0.005970149253731343;
        result[2] += 0;
        result[3] += 0.16218905472636816;
        result[4] += 0.8308457711442786;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1588326446280992;
        result[1] += 0;
        result[2] += 0.006198347107438018;
        result[3] += 0.834452479338843;
        result[4] += 0;
        result[5] += 0.0005165289256198348;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)105.5) ) ) {
        result[0] += 0.9964675658317277;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0035324341682723185;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9859428017450315;
        result[1] += 0;
        result[2] += 0.010664081434803683;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0033931168201648087;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)373) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.9983663096750771;
        result[1] += 0;
        result[2] += 0.0013614086041023779;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002722817208204756;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.015426497277676952;
        result[1] += 0.0070780399274047185;
        result[2] += 0.0054446460980036296;
        result[3] += 0.6475499092558984;
        result[4] += 0.3235934664246824;
        result[5] += 0.0009074410163339383;
        result[6] += 0;
      } else {
        result[0] += 0.9809943360604154;
        result[1] += 0.0002517306482064192;
        result[2] += 0.005286343612334802;
        result[3] += 0.01233480176211454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011327879169288862;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
        result[0] += 0;
        result[1] += 0.0013054830287206266;
        result[2] += 0.0045691906005221935;
        result[3] += 0.9941253263707572;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.011412268188302425;
        result[3] += 0;
        result[4] += 0.985734664764622;
        result[5] += 0.0028530670470756064;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)236) ) ) {
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
        result[0] += 0.9985547827657845;
        result[1] += 0;
        result[2] += 0.0012645650799385784;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018065215427693975;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0.000663129973474801;
        result[1] += 0.008620689655172414;
        result[2] += 0.002652519893899204;
        result[3] += 0.9588859416445623;
        result[4] += 0.028183023872679045;
        result[5] += 0.0009946949602122016;
        result[6] += 0;
      } else {
        result[0] += 0.99762007788836;
        result[1] += 0.0008654262224145391;
        result[2] += 0.0012981393336218088;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021635655560363478;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.5578498852835136;
        result[1] += 0.0021304490331039002;
        result[2] += 0.008030154047853164;
        result[3] += 0.17273025237627007;
        result[4] += 0.2584398557849885;
        result[5] += 0.00016388069485414618;
        result[6] += 0.0006555227794165847;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008951048951048953;
        result[3] += 0.7986013986013987;
        result[4] += 0.19188811188811192;
        result[5] += 0.0005594405594405595;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.23543990086741015;
        result[1] += 0.007434944237918215;
        result[2] += 0;
        result[3] += 0.7558859975216853;
        result[4] += 0.0012391573729863693;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.494475138121547;
        result[1] += 0;
        result[2] += 0.016574585635359115;
        result[3] += 0.4889502762430939;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)101.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0024271844660194173;
        result[1] += 0.0048543689320388345;
        result[2] += 0;
        result[3] += 0.21359223300970873;
        result[4] += 0.779126213592233;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.003601440576230492;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9963985594237695;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11498855835240275;
        result[1] += 0;
        result[2] += 0.012013729977116704;
        result[3] += 0.8712814645308925;
        result[4] += 0;
        result[5] += 0.0017162471395881006;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9946948311106785;
        result[1] += 0.00014601382264187675;
        result[2] += 0.0005353840163535481;
        result[3] += 0.004575099776112139;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.867127421395892e-05;
      } else {
        result[0] += 0.7941790572603606;
        result[1] += 0.0006327111673521037;
        result[2] += 0.00335336918696615;
        result[3] += 0.20082252451755772;
        result[4] += 0;
        result[5] += 0.00031635558367605187;
        result[6] += 0.0006959822840873142;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += 0.9993547652484154;
        result[1] += 0;
        result[2] += 0.0005313697954226288;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011386495616199187;
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
        result[0] += 0.7392874572962422;
        result[1] += 0.0012689116642264522;
        result[2] += 0.006344558321132261;
        result[3] += 0.22908735968765254;
        result[4] += 0.022254758418740854;
        result[5] += 0.0008784773060029284;
        result[6] += 0.0008784773060029284;
      } else {
        result[0] += 0;
        result[1] += 0.0010799136069114472;
        result[2] += 0.00755939524838013;
        result[3] += 0.8158747300215983;
        result[4] += 0.1744060475161987;
        result[5] += 0.0010799136069114472;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        result[0] += 0.15880503144654087;
        result[1] += 0.007075471698113208;
        result[2] += 0;
        result[3] += 0.8341194968553459;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.022556390977443608;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9774436090225563;
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
        result[0] += 0.2885714285714286;
        result[1] += 0;
        result[2] += 0.011428571428571429;
        result[3] += 0.7;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9960248206321505;
        result[1] += 0;
        result[2] += 0.00024238898584448323;
        result[3] += 0.003248012410316075;
        result[4] += 0.00024238898584448323;
        result[5] += 0;
        result[6] += 0.00024238898584448323;
      } else {
        result[0] += 0.01507537688442211;
        result[1] += 0.0020100502512562816;
        result[2] += 0.010050251256281407;
        result[3] += 0.27537688442211056;
        result[4] += 0.6954773869346733;
        result[5] += 0.0020100502512562816;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.7573964497041421;
        result[1] += 0.0007074864934396709;
        result[2] += 0.003666066375096476;
        result[3] += 0.22047851813738104;
        result[4] += 0.016786724980704916;
        result[5] += 0.0005145356315924879;
        result[6] += 0.00045021867764342684;
      } else {
        result[0] += 0.456;
        result[1] += 0;
        result[2] += 0.005538461538461538;
        result[3] += 0.5384615384615384;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)109) ) ) {
        result[0] += 0.1581832419733751;
        result[1] += 0.014095536413469069;
        result[2] += 0;
        result[3] += 0.8277212216131559;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.007518796992481203;
        result[1] += 0.02631578947368421;
        result[2] += 0;
        result[3] += 0.0037593984962406013;
        result[4] += 0.9624060150375939;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
        result[0] += 0.2727272727272727;
        result[1] += 0;
        result[2] += 0.030303030303030304;
        result[3] += 0.696969696969697;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.018563357546408393;
        result[4] += 0.9814366424535916;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1184.5) ) ) {
        result[0] += 0.2222222222222222;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4444444444444444;
        result[4] += 0.3333333333333333;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8288788615064212;
        result[1] += 0.0007809788267962511;
        result[2] += 0.0009545296771954181;
        result[3] += 0.12981603609857686;
        result[4] += 0.03956959389101006;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.32608695652173914;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6739130434782609;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8141447368421053;
        result[1] += 0;
        result[2] += 0.03042763157894737;
        result[3] += 0;
        result[4] += 0.15296052631578946;
        result[5] += 0;
        result[6] += 0.0024671052631578946;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)19) ) ) {
        result[0] += 0.34175048148940723;
        result[1] += 0.002995934089450032;
        result[2] += 0.00855981168414295;
        result[3] += 0.3727797988444254;
        result[4] += 0.2739139738925744;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9751496667796228;
        result[1] += 0.0007906924206483678;
        result[2] += 0.0009036484807409918;
        result[3] += 0.022421777928385858;
        result[4] += 0.0002823901502315599;
        result[5] += 0.00022591212018524794;
        result[6] += 0.00022591212018524794;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.17938931297709923;
        result[1] += 0;
        result[2] += 0.00034698126301179735;
        result[3] += 0.6311589174184594;
        result[4] += 0.18910478834142957;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9961154273029966;
        result[1] += 0;
        result[2] += 0.0013873473917869034;
        result[3] += 0.0022197558268590455;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002774694783573807;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991655920503679;
        result[1] += 0;
        result[2] += 0.0006447697792611697;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018963817037093226;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6088400411164704;
        result[1] += 0.0015814027041986243;
        result[2] += 0.004586067842176011;
        result[3] += 0.33367597058590975;
        result[4] += 0.05020953585830632;
        result[5] += 0.0003953506760496561;
        result[6] += 0.000711631216889381;
      } else {
        result[0] += 0.008409250175192713;
        result[1] += 0;
        result[2] += 0.0161177295024527;
        result[3] += 0.7883672039243167;
        result[4] += 0.18500350385423966;
        result[5] += 0.002102312543798178;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)63) ) ) {
        result[0] += 0.5982905982905983;
        result[1] += 0;
        result[2] += 0.021367521367521368;
        result[3] += 0.3803418803418803;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.013963480128893663;
        result[2] += 0;
        result[3] += 0.9860365198711063;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0024449877750611247;
        result[1] += 0.02444987775061125;
        result[2] += 0;
        result[3] += 0.3569682151589242;
        result[4] += 0.6161369193154034;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01929260450160772;
        result[4] += 0.9807073954983923;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9844660194174757;
        result[1] += 0;
        result[2] += 0.009708737864077669;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.005825242718446602;
      } else {
        result[0] += 0.9986622073578595;
        result[1] += 0;
        result[2] += 0.0013377926421404682;
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
        result[0] += 0.9988723731419785;
        result[1] += 0;
        result[2] += 0.0011276268580215274;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.6106786191711882;
        result[1] += 0.0014154281670205238;
        result[2] += 0.006683966344263584;
        result[3] += 0.3296374931194464;
        result[4] += 0.05079814421640324;
        result[5] += 0.0003145395926712275;
        result[6] += 0.00047180938900684123;
      } else {
        result[0] += 0.07449392712550608;
        result[1] += 0.006477732793522267;
        result[2] += 0.008502024291497975;
        result[3] += 0.8870445344129555;
        result[4] += 0.02348178137651822;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3660245183887916;
        result[4] += 0.6339754816112084;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007320644216691069;
        result[2] += 0;
        result[3] += 0.05929721815519766;
        result[4] += 0.9333821376281113;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
        result[0] += 0.04;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.96;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05476828801225584;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9436997319034852;
        result[4] += 0;
        result[5] += 0.0015319800842589046;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.7307692307692307;
        result[1] += 0;
        result[2] += 0.11538461538461539;
        result[3] += 0.057692307692307696;
        result[4] += 0.09615384615384616;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0037067545304777594;
        result[2] += 0.004530477759472817;
        result[3] += 0;
        result[4] += 0.9909390444810544;
        result[5] += 0.0008237232289950577;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)35.5) ) ) {
        result[0] += 0.9981511914543961;
        result[1] += 0.0003081347576006574;
        result[2] += 0.0005135579293344291;
        result[3] += 0.0010271158586688581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9898024804777217;
        result[1] += 0;
        result[2] += 0.0002756086357372531;
        result[3] += 0.00973817179604961;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018373909049150208;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.4994436889603165;
        result[1] += 0.0021016194832488566;
        result[2] += 0.006057609098776116;
        result[3] += 0.4911608357028063;
        result[4] += 0;
        result[5] += 0.0004944987019409074;
        result[6] += 0.0007417480529113611;
      } else {
        result[0] += 0.9841022443890274;
        result[1] += 0;
        result[2] += 0.004156275976724855;
        result[3] += 0.011221945137157107;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005195344970906068;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.1739606126914661;
        result[1] += 0.0038293216630196935;
        result[2] += 0;
        result[3] += 0.7904814004376368;
        result[4] += 0.030087527352297593;
        result[5] += 0.0016411378555798686;
        result[6] += 0;
      } else {
        result[0] += 0.032948929159802305;
        result[1] += 0;
        result[2] += 0.019769357495881382;
        result[3] += 0;
        result[4] += 0.943986820428336;
        result[5] += 0.0032948929159802307;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9998700623700624;
        result[1] += 0;
        result[2] += 0.00012993762993762994;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7100110011001101;
        result[1] += 0;
        result[2] += 0.007260726072607261;
        result[3] += 0.28184818481848184;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008800880088008801;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)70) ) ) {
        result[0] += 0.9203352557985146;
        result[1] += 0.0003319364341728559;
        result[2] += 0.0011202854653333887;
        result[3] += 0.07792207792207792;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002904443799012489;
      } else {
        result[0] += 0.02040816326530612;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9795918367346939;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.22078245701470223;
        result[1] += 0.00299028158484924;
        result[2] += 0.01046598554697234;
        result[3] += 0.4976326937453277;
        result[4] += 0.26787939197607774;
        result[5] += 0.00024919013207077;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006051437216338881;
        result[2] += 0;
        result[3] += 0.049924357034795766;
        result[4] += 0.9440242057488654;
        result[5] += 0;
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
        result[0] += 0.0002937720329024677;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9297884841363102;
        result[4] += 0.06874265569917744;
        result[5] += 0.0011750881316098707;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9787234042553191;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.02127659574468085;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0051813471502590676;
        result[2] += 0.009067357512953367;
        result[3] += 0;
        result[4] += 0.9853195164075993;
        result[5] += 0.0004317789291882556;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += 0.997335960878768;
        result[1] += 0.0004744179256988541;
        result[2] += 0.0017516969564265383;
        result[3] += 0.00014597474636887818;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00029194949273775636;
      } else {
        result[0] += 0.3116370808678501;
        result[1] += 0.01972386587771203;
        result[2] += 0;
        result[3] += 0.6686390532544378;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.20368098159509201;
        result[1] += 0;
        result[2] += 0.0031901840490797546;
        result[3] += 0.7931288343558283;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9906912259853434;
        result[1] += 0;
        result[2] += 0.007526242820360466;
        result[3] += 0.0015844721727074663;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001980590215884333;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.21181716833890749;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7803790412486066;
        result[4] += 0.003344481605351171;
        result[5] += 0.004459308807134895;
        result[6] += 0;
      } else {
        result[0] += 0.9951548648745648;
        result[1] += 0.0005383483472705739;
        result[2] += 0.0010049169149050712;
        result[3] += 0.0029429709650791373;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00035889889818038257;
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
        result[0] += 0.17914360617535682;
        result[1] += 0.0037867754150888435;
        result[2] += 0.013399359161083601;
        result[3] += 0.8030876784153801;
        result[4] += 0;
        result[5] += 0.0005825808330905913;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.435984916502065;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5640150834979349;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9813140446051837;
        result[1] += 0;
        result[2] += 0.011754068716094029;
        result[3] += 0.000904159132007233;
        result[4] += 0.003315250150693188;
        result[5] += 0.00030138637733574436;
        result[6] += 0.002411091018685955;
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
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9981072555205047;
        result[1] += 0;
        result[2] += 0.0016223524109959442;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000270392068499324;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.01557632398753894;
        result[1] += 0.0056807769836906725;
        result[2] += 0.004581271761040865;
        result[3] += 0.6657504123144585;
        result[4] += 0.3071284588601796;
        result[5] += 0.0012827560930914422;
        result[6] += 0;
      } else {
        result[0] += 0.9802200519223637;
        result[1] += 0.00037087402645568057;
        result[2] += 0.006181233774261343;
        result[3] += 0.012362467548522686;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008653727283965879;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)56) ) ) {
        result[0] += 0;
        result[1] += 0.0006572461386789353;
        result[2] += 0;
        result[3] += 0.9924416694051923;
        result[4] += 0.005915215248110417;
        result[5] += 0.000985869208018403;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.040638606676342524;
        result[3] += 0;
        result[4] += 0.9593613933236574;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.31475409836065577;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.15901639344262294;
        result[4] += 0.5262295081967213;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.010919781604367913;
        result[3] += 0.8609827803443931;
        result[4] += 0.12599748005039899;
        result[5] += 0.0020999580008399833;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.999421430224485;
        result[1] += 0;
        result[2] += 0.0005014271387796035;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.714263673532361e-05;
      } else {
        result[0] += 0.6976255707762556;
        result[1] += 0.0023744292237442917;
        result[2] += 0.005388127853881278;
        result[3] += 0.2937899543378995;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008219178082191779;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)8) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12448132780082988;
        result[1] += 0.015767634854771784;
        result[2] += 0;
        result[3] += 0.8597510373443984;
        result[4] += 0;
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
        result[0] += 0.21153846153846154;
        result[1] += 0;
        result[2] += 0.04120879120879121;
        result[3] += 0.7472527472527473;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)-13) ) ) {
        result[0] += 0.14285714285714285;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8571428571428571;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00039840637450199205;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998804780876494;
        result[5] += 0.0007968127490039841;
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
        result[0] += 0.00030248033877797946;
        result[1] += 0.004234724742891712;
        result[2] += 0.009679370840895343;
        result[3] += 0.984271022383545;
        result[4] += 0;
        result[5] += 0.0015124016938898972;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9941176470588236;
        result[1] += 0;
        result[2] += 0.004901960784313725;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000980392156862745;
      } else {
        result[0] += 0.9997427211526092;
        result[1] += 0;
        result[2] += 0.0002572788473907637;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        result[0] += 0.713607305936073;
        result[1] += 0.002009132420091324;
        result[2] += 0.006757990867579908;
        result[3] += 0.2765296803652968;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001095890410958904;
      } else {
        result[0] += 0.15843270868824533;
        result[1] += 0.02555366269165247;
        result[2] += 0;
        result[3] += 0.8160136286201022;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.15869837296620776;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7869837296620776;
        result[4] += 0.05406758448060075;
        result[5] += 0.00025031289111389235;
        result[6] += 0;
      } else {
        result[0] += 0.05405405405405406;
        result[1] += 0.00502828409805154;
        result[2] += 0.006285355122564425;
        result[3] += 0;
        result[4] += 0.9314896291640478;
        result[5] += 0.0031426775612822125;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-13324) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9840758696344528;
        result[1] += 0.0012739304292437809;
        result[2] += 0.002158604338440851;
        result[3] += 0.01224388690328745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002477086945751796;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)42.5) ) ) {
        result[0] += 0.44072948328267475;
        result[1] += 0;
        result[2] += 0.007598784194528876;
        result[3] += 0.047872340425531915;
        result[4] += 0.5037993920972644;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.017884207335556228;
        result[1] += 0;
        result[2] += 0.004243710215216732;
        result[3] += 0.9733252500757805;
        result[4] += 0.004243710215216732;
        result[5] += 0.0003031221582297666;
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
        result[0] += 0.984629715882627;
        result[1] += 0;
        result[2] += 0.00978108989287378;
        result[3] += 0.002794597112249651;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002794597112249651;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.9314076346284936;
        result[1] += 0.00136332651670075;
        result[2] += 0.0020449897750511254;
        result[3] += 0.06450238582140425;
        result[4] += 0;
        result[5] += 0.00017041581458759376;
        result[6] += 0.0005112474437627813;
      } else {
        result[0] += 0.9972199219212114;
        result[1] += 0;
        result[2] += 0.0001183011948420679;
        result[3] += 0.002366023896841358;
        result[4] += 0.0001183011948420679;
        result[5] += 0.00017745179226310185;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.15111838516093834;
        result[1] += 0.00436442989634479;
        result[2] += 0.002182214948172395;
        result[3] += 0.5979268957992362;
        result[4] += 0.24440807419530824;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10946745562130175;
        result[1] += 0.002662721893491124;
        result[2] += 0.011834319526627215;
        result[3] += 0.4911242603550295;
        result[4] += 0.3846153846153845;
        result[5] += 0.0002958579881656804;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.15011727912431588;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8498827208756842;
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
        result[0] += 0.9833029751062538;
        result[1] += 0;
        result[2] += 0.015179113539769277;
        result[3] += 0.00030358227079538557;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012143290831815423;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.002853067047075607;
        result[3] += 0;
        result[4] += 0.9928673323823111;
        result[5] += 0.00427960057061341;
        result[6] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_0/test_data.csv", "r");
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
