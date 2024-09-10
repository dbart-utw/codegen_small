
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0.01507537688442211;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9547738693467337;
            result[5] += 0.03015075376884422;
          } else {
            result[0] += 0;
            result[1] += 0.8235294117647058;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.17647058823529413;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.08;
            result[4] += 0.36;
            result[5] += 0.56;
          } else {
            result[0] += 0.7241379310344828;
            result[1] += 0.15517241379310345;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1206896551724138;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05454545454545454;
            result[4] += 0.6;
            result[5] += 0.34545454545454546;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0024783147459727386;
            result[3] += 0.03469640644361834;
            result[4] += 0.02973977695167286;
            result[5] += 0.9330855018587361;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0.01834862385321101;
            result[2] += 0.08256880733944955;
            result[3] += 0.027522935779816515;
            result[4] += 0.1926605504587156;
            result[5] += 0.6697247706422018;
          } else {
            result[0] += 0.01834862385321101;
            result[1] += 0.01834862385321101;
            result[2] += 0.03211009174311927;
            result[3] += 0.555045871559633;
            result[4] += 0.05504587155963303;
            result[5] += 0.3211009174311927;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0.016129032258064516;
            result[1] += 0.8387096774193549;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14516129032258066;
            result[5] += 0;
          } else {
            result[0] += 0.09146341463414634;
            result[1] += 0.06707317073170732;
            result[2] += 0.036585365853658534;
            result[3] += 0.06097560975609756;
            result[4] += 0.6951219512195121;
            result[5] += 0.04878048780487805;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.8740490278951818;
            result[1] += 0.01014370245139476;
            result[2] += 0.0016906170752324597;
            result[3] += 0.023668639053254437;
            result[4] += 0.04057480980557904;
            result[5] += 0.049873203719357564;
          } else {
            result[0] += 0.3076923076923077;
            result[1] += 0.02197802197802198;
            result[2] += 0.2032967032967033;
            result[3] += 0.24725274725274726;
            result[4] += 0.054945054945054944;
            result[5] += 0.16483516483516483;
          }
        }
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
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.20481927710843373;
            result[4] += 0.012048192771084338;
            result[5] += 0.7831325301204819;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12403100775193798;
            result[3] += 0.7054263565891473;
            result[4] += 0;
            result[5] += 0.17054263565891473;
          } else {
            result[0] += 0.021739130434782608;
            result[1] += 0.043478260869565216;
            result[2] += 0.43478260869565216;
            result[3] += 0.41304347826086957;
            result[4] += 0.043478260869565216;
            result[5] += 0.043478260869565216;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.5333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8444444444444446;
            result[3] += 0.11111111111111112;
            result[4] += 0;
            result[5] += 0.04444444444444445;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42eb0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0.1388888888888889;
            result[2] += 0.2222222222222222;
            result[3] += 0.1111111111111111;
            result[4] += 0.05555555555555555;
            result[5] += 0.3055555555555556;
          } else {
            result[0] += 0.20588235294117646;
            result[1] += 0;
            result[2] += 0.7352941176470589;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0967741935483871;
            result[1] += 0;
            result[2] += 0.7419354838709677;
            result[3] += 0.06451612903225806;
            result[4] += 0.06451612903225806;
            result[5] += 0.03225806451612903;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.0034129692832764505;
            result[1] += 0;
            result[2] += 0.9488054607508533;
            result[3] += 0.04436860068259386;
            result[4] += 0;
            result[5] += 0.0034129692832764505;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42140000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0034965034965034965;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.006993006993006993;
            result[4] += 0.951048951048951;
            result[5] += 0.038461538461538464;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9636363636363636;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03636363636363636;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.015873015873015872;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015873015873015872;
            result[4] += 0.7142857142857143;
            result[5] += 0.25396825396825395;
          } else {
            result[0] += 0.007928642220019821;
            result[1] += 0;
            result[2] += 0.011892963330029732;
            result[3] += 0.07730426164519326;
            result[4] += 0.04162537165510406;
            result[5] += 0.8612487611496531;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b20000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.23076923076923078;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0.3235294117647059;
            result[2] += 0;
            result[3] += 0.2647058823529412;
            result[4] += 0.4117647058823529;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.9117647058823529;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08823529411764706;
            result[5] += 0;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.8846153846153846;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09615384615384616;
            result[5] += 0.019230769230769232;
          } else {
            result[0] += 0.017408123791102514;
            result[1] += 0.017408123791102514;
            result[2] += 0.06576402321083172;
            result[3] += 0.48549323017408125;
            result[4] += 0.02127659574468085;
            result[5] += 0.39264990328820115;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.8546099290780141;
            result[1] += 0.0274822695035461;
            result[2] += 0.01773049645390071;
            result[3] += 0.020390070921985817;
            result[4] += 0.07801418439716312;
            result[5] += 0.0017730496453900709;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0.041666666666666664;
            result[2] += 0.6666666666666666;
            result[3] += 0.09722222222222222;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1568627450980392;
            result[3] += 0.7843137254901961;
            result[4] += 0;
            result[5] += 0.058823529411764705;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.05;
            result[4] += 0.05;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5959595959595959;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.0707070707070707;
          } else {
            result[0] += 0;
            result[1] += 0.015037593984962405;
            result[2] += 0.8721804511278195;
            result[3] += 0.11278195488721804;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9047619047619048;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.967741935483871;
            result[3] += 0.03225806451612903;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0.004739336492890996;
            result[1] += 0;
            result[2] += 0.014218009478672985;
            result[3] += 0;
            result[4] += 0.957345971563981;
            result[5] += 0.023696682464454975;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0.7777777777777778;
          } else {
            result[0] += 0.9393939393939394;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.045454545454545456;
            result[5] += 0.015151515151515152;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.012658227848101266;
            result[2] += 0;
            result[3] += 0.11392405063291139;
            result[4] += 0.4810126582278481;
            result[5] += 0.3924050632911392;
          } else {
            result[0] += 0.001128668171557562;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03724604966139955;
            result[4] += 0.04401805869074492;
            result[5] += 0.917607223476298;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0.05102040816326531;
            result[2] += 0.02040816326530612;
            result[3] += 0.25510204081632654;
            result[4] += 0.09183673469387756;
            result[5] += 0.5816326530612245;
          } else {
            result[0] += 0.0035714285714285713;
            result[1] += 0;
            result[2] += 0.010714285714285714;
            result[3] += 0.6464285714285715;
            result[4] += 0.007142857142857143;
            result[5] += 0.33214285714285713;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9976190476190476;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002380952380952381;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.11403508771929824;
            result[1] += 0.32456140350877194;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5526315789473685;
            result[5] += 0.008771929824561403;
          } else {
            result[0] += 0.8748890860692101;
            result[1] += 0.040816326530612235;
            result[2] += 0.0008873114463176573;
            result[3] += 0.007985803016858915;
            result[4] += 0.06388642413487132;
            result[5] += 0.011535048802129546;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0.026455026455026454;
            result[1] += 0.013227513227513227;
            result[2] += 0.3544973544973545;
            result[3] += 0.3306878306878307;
            result[4] += 0.031746031746031744;
            result[5] += 0.24338624338624337;
          } else {
            result[0] += 0.711340206185567;
            result[1] += 0.030927835051546393;
            result[2] += 0.12371134020618557;
            result[3] += 0;
            result[4] += 0.13402061855670103;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42d20000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.020833333333333332;
            result[3] += 0;
            result[4] += 0.020833333333333332;
            result[5] += 0.9583333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08;
            result[3] += 0.72;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.052631578947368425;
            result[3] += 0.6315789473684211;
            result[4] += 0;
            result[5] += 0.31578947368421056;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
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
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9166666666666666;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0.125;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.01694915254237288;
            result[1] += 0;
            result[2] += 0.8994350282485876;
            result[3] += 0.07005649717514124;
            result[4] += 0;
            result[5] += 0.013559322033898305;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x421a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.061224489795918366;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0.061224489795918366;
            result[4] += 0.6938775510204082;
            result[5] += 0.16326530612244897;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.6440677966101694;
            result[1] += 0.11864406779661017;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23728813559322035;
            result[5] += 0;
          } else {
            result[0] += 0.002152852529601722;
            result[1] += 0.0032292787944025836;
            result[2] += 0;
            result[3] += 0.04198062432723358;
            result[4] += 0.08503767491926803;
            result[5] += 0.8675995694294941;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.030303030303030304;
            result[1] += 0.007575757575757576;
            result[2] += 0.15151515151515152;
            result[3] += 0.18181818181818182;
            result[4] += 0.05303030303030303;
            result[5] += 0.5757575757575758;
          } else {
            result[0] += 0.0106951871657754;
            result[1] += 0.0053475935828877;
            result[2] += 0.06417112299465241;
            result[3] += 0.7486631016042781;
            result[4] += 0;
            result[5] += 0.1711229946524064;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.21428571428571427;
            result[5] += 0.6428571428571429;
          } else {
            result[0] += 0;
            result[1] += 0.1111111111111111;
            result[2] += 0;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975062344139651;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024937655860349127;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.672554347826087;
            result[1] += 0.05434782608695653;
            result[2] += 0.01630434782608696;
            result[3] += 0.0516304347826087;
            result[4] += 0.17255434782608697;
            result[5] += 0.03260869565217392;
          } else {
            result[0] += 0.041044776119402986;
            result[1] += 0.014925373134328358;
            result[2] += 0.24253731343283583;
            result[3] += 0.35447761194029853;
            result[4] += 0.05223880597014925;
            result[5] += 0.2947761194029851;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.7866666666666666;
            result[1] += 0;
            result[2] += 0.04;
            result[3] += 0.02666666666666667;
            result[4] += 0.14666666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.9941747572815535;
            result[1] += 0.0019417475728155341;
            result[2] += 0.0038834951456310682;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.044444444444444446;
            result[3] += 0.06666666666666667;
            result[4] += 0.06666666666666667;
            result[5] += 0.8222222222222222;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0.046153846153846156;
            result[2] += 0.046153846153846156;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.5076923076923077;
          } else {
            result[0] += 0.05555555555555555;
            result[1] += 0;
            result[2] += 0.3611111111111111;
            result[3] += 0.5277777777777778;
            result[4] += 0;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42880000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.3888888888888889;
            result[4] += 0;
            result[5] += 0.4444444444444444;
          } else {
            result[0] += 0.1111111111111111;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0.06060606060606061;
            result[2] += 0.21212121212121213;
            result[3] += 0.5454545454545454;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0.07335907335907338;
            result[1] += 0.007722007722007723;
            result[2] += 0.7490347490347491;
            result[3] += 0.14671814671814676;
            result[4] += 0;
            result[5] += 0.02316602316602317;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.03125;
            result[1] += 0;
            result[2] += 0.71875;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0015220700152207;
            result[1] += 0;
            result[2] += 0.9710806697108066;
            result[3] += 0.0258751902587519;
            result[4] += 0;
            result[5] += 0.0015220700152207;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0.003787878787878788;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022727272727272728;
            result[4] += 0.9128787878787878;
            result[5] += 0.06060606060606061;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9772727272727273;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022727272727272728;
            result[5] += 0;
          } else {
            result[0] += 0.06382978723404255;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14893617021276595;
            result[4] += 0.3191489361702128;
            result[5] += 0.46808510638297873;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.09523809523809523;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.7142857142857143;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04714640198511166;
            result[4] += 0.02357320099255583;
            result[5] += 0.9292803970223326;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.006369426751592357;
            result[3] += 0.1464968152866242;
            result[4] += 0.2484076433121019;
            result[5] += 0.5987261146496815;
          } else {
            result[0] += 0.04225352112676056;
            result[1] += 0;
            result[2] += 0.056338028169014086;
            result[3] += 0.6103286384976526;
            result[4] += 0.014084507042253521;
            result[5] += 0.27699530516431925;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.16923076923076924;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11538461538461539;
            result[4] += 0.23846153846153847;
            result[5] += 0.47692307692307695;
          } else {
            result[0] += 0.8076923076923077;
            result[1] += 0.029647435897435896;
            result[2] += 0.01282051282051282;
            result[3] += 0.024839743589743588;
            result[4] += 0.10576923076923077;
            result[5] += 0.019230769230769232;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.04182509505703422;
            result[1] += 0.034220532319391636;
            result[2] += 0.19771863117870722;
            result[3] += 0.3574144486692015;
            result[4] += 0.026615969581749048;
            result[5] += 0.34220532319391633;
          } else {
            result[0] += 0.549618320610687;
            result[1] += 0.030534351145038167;
            result[2] += 0.3282442748091603;
            result[3] += 0.03816793893129771;
            result[4] += 0.022900763358778626;
            result[5] += 0.030534351145038167;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.023255813953488372;
            result[1] += 0.046511627906976744;
            result[2] += 0.18604651162790697;
            result[3] += 0.046511627906976744;
            result[4] += 0.06976744186046512;
            result[5] += 0.627906976744186;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.06153846153846154;
            result[1] += 0;
            result[2] += 0.18461538461538463;
            result[3] += 0.5230769230769231;
            result[4] += 0.03076923076923077;
            result[5] += 0.2;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9318181818181818;
            result[3] += 0.06818181818181818;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.5952380952380952;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.5909090909090909;
            result[1] += 0;
            result[2] += 0.4090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007518796992481203;
            result[1] += 0;
            result[2] += 0.8195488721804511;
            result[3] += 0.14661654135338345;
            result[4] += 0;
            result[5] += 0.02631578947368421;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0.1111111111111111;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9873684210526316;
            result[3] += 0.01263157894736842;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9798994974874372;
            result[5] += 0.020100502512562814;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7586206896551724;
            result[5] += 0.2413793103448276;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03513513513513514;
            result[4] += 0.02702702702702703;
            result[5] += 0.9378378378378378;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.8181818181818182;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.11363636363636363;
            result[4] += 0.06818181818181818;
            result[5] += 0;
          } else {
            result[0] += 0.002564102564102564;
            result[1] += 0.023076923076923078;
            result[2] += 0;
            result[3] += 0.36153846153846153;
            result[4] += 0.07179487179487179;
            result[5] += 0.541025641025641;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.13043478260869565;
            result[1] += 0.14492753623188406;
            result[2] += 0.028985507246376812;
            result[3] += 0.043478260869565216;
            result[4] += 0.6086956521739131;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0.02;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0.04;
            result[4] += 0.04;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8647887323943663;
            result[1] += 0.008450704225352114;
            result[2] += 0.00938967136150235;
            result[3] += 0.03098591549295775;
            result[4] += 0.06009389671361503;
            result[5] += 0.026291079812206575;
          } else {
            result[0] += 0.23193916349809887;
            result[1] += 0.015209125475285171;
            result[2] += 0.1596958174904943;
            result[3] += 0.29277566539923955;
            result[4] += 0.06844106463878327;
            result[5] += 0.23193916349809887;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42080000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.9285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07142857142857142;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42660000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9411764705882353;
            result[5] += 0.058823529411764705;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.2727272727272727;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02564102564102564;
            result[3] += 0.15384615384615385;
            result[4] += 0.05128205128205128;
            result[5] += 0.7692307692307693;
          } else {
            result[0] += 0.00546448087431694;
            result[1] += 0;
            result[2] += 0.12021857923497267;
            result[3] += 0.6338797814207651;
            result[4] += 0.01092896174863388;
            result[5] += 0.22950819672131148;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.775;
            result[3] += 0.15;
            result[4] += 0;
            result[5] += 0.075;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0.875;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.21428571428571427;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.075;
            result[3] += 0.025;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0.5125;
            result[3] += 0.425;
            result[4] += 0;
            result[5] += 0.0125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9210526315789473;
            result[3] += 0.07894736842105263;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0033259423503325942;
            result[1] += 0;
            result[2] += 0.9412416851441242;
            result[3] += 0.052106430155210645;
            result[4] += 0;
            result[5] += 0.0033259423503325942;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0.004149377593360996;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9875518672199171;
            result[5] += 0.008298755186721992;
          } else {
            result[0] += 0.012658227848101266;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06329113924050633;
            result[4] += 0.6329113924050633;
            result[5] += 0.2911392405063291;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5625;
            result[5] += 0.0625;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04078947368421053;
            result[4] += 0.04736842105263158;
            result[5] += 0.9118421052631579;
          } else {
            result[0] += 0.23529411764705882;
            result[1] += 0.003676470588235294;
            result[2] += 0.003676470588235294;
            result[3] += 0.125;
            result[4] += 0.20220588235294118;
            result[5] += 0.43014705882352944;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.010152284263959392;
            result[1] += 0;
            result[2] += 0.015228426395939089;
            result[3] += 0.7258883248730965;
            result[4] += 0.02538071065989848;
            result[5] += 0.22335025380710663;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.22077922077922077;
            result[3] += 0.2727272727272727;
            result[4] += 0.05194805194805195;
            result[5] += 0.45454545454545453;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a60000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0625;
            result[1] += 0.5625;
            result[2] += 0;
            result[3] += 0.15625;
            result[4] += 0.21875;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.10638297872340426;
            result[1] += 0.1276595744680851;
            result[2] += 0;
            result[3] += 0.04964539007092199;
            result[4] += 0.6170212765957447;
            result[5] += 0.09929078014184398;
          } else {
            result[0] += 0.8638373121131742;
            result[1] += 0.032714412024756855;
            result[2] += 0;
            result[3] += 0.021220159151193633;
            result[4] += 0.050397877984084884;
            result[5] += 0.03183023872679045;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.012578616352201259;
            result[1] += 0;
            result[2] += 0.1320754716981132;
            result[3] += 0.5157232704402516;
            result[4] += 0.025157232704402517;
            result[5] += 0.31446540880503143;
          } else {
            result[0] += 0.2608695652173913;
            result[1] += 0.024844720496894408;
            result[2] += 0.45962732919254656;
            result[3] += 0.06832298136645963;
            result[4] += 0.018633540372670808;
            result[5] += 0.16770186335403728;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428e0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0.09090909090909091;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9473684210526315;
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
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.6805555555555556;
            result[4] += 0;
            result[5] += 0.09722222222222222;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0.2;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9523809523809523;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.7586206896551726;
            result[1] += 0.03448275862068966;
            result[2] += 0.13793103448275865;
            result[3] += 0.03448275862068966;
            result[4] += 0.03448275862068966;
            result[5] += 0;
          } else {
            result[0] += 0.007168458781362008;
            result[1] += 0;
            result[2] += 0.827956989247312;
            result[3] += 0.14695340501792117;
            result[4] += 0;
            result[5] += 0.01792114695340502;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0031446540880503146;
            result[1] += 0;
            result[2] += 0.9716981132075472;
            result[3] += 0.025157232704402517;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.995049504950495;
            result[5] += 0.0049504950495049506;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42780000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9583333333333334;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0.8775510204081632;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10204081632653061;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0.004259850905218318;
            result[1] += 0.004259850905218318;
            result[2] += 0;
            result[3] += 0.039403620873269436;
            result[4] += 0.06496272630457935;
            result[5] += 0.8871139510117146;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.013157894736842105;
            result[3] += 0.23684210526315788;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.017045454545454544;
            result[3] += 0.6193181818181818;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0.09259259259259259;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9074074074074074;
            result[5] += 0;
          } else {
            result[0] += 0.5384615384615384;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23076923076923078;
            result[5] += 0.15384615384615385;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9978448275862069;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0021551724137931034;
            result[5] += 0;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0.05555555555555555;
            result[4] += 0.35185185185185186;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0.8586688578471652;
            result[1] += 0.01972062448644207;
            result[2] += 0.0008216926869350862;
            result[3] += 0.018077239112571898;
            result[4] += 0.08052588331963846;
            result[5] += 0.02218570254724733;
          } else {
            result[0] += 0;
            result[1] += 0.9487179487179487;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05128205128205128;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.01775147928994083;
            result[1] += 0.03550295857988166;
            result[2] += 0.10650887573964497;
            result[3] += 0.41420118343195267;
            result[4] += 0.011834319526627219;
            result[5] += 0.41420118343195267;
          } else {
            result[0] += 0.7313432835820896;
            result[1] += 0;
            result[2] += 0.13432835820895522;
            result[3] += 0;
            result[4] += 0.13432835820895522;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015384615384615385;
            result[3] += 0.8923076923076924;
            result[4] += 0;
            result[5] += 0.09230769230769231;
          } else {
            result[0] += 0;
            result[1] += 0.01234567901234568;
            result[2] += 0.17283950617283952;
            result[3] += 0.4938271604938272;
            result[4] += 0;
            result[5] += 0.3209876543209877;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0.4117647058823529;
            result[3] += 0.23529411764705882;
            result[4] += 0.11764705882352941;
            result[5] += 0.17647058823529413;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8536585365853658;
            result[3] += 0.14634146341463414;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1875;
            result[3] += 0.4375;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.9230769230769231;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.425531914893617;
            result[3] += 0.44680851063829785;
            result[4] += 0.02127659574468085;
            result[5] += 0.10638297872340426;
          } else {
            result[0] += 0.03488372093023256;
            result[1] += 0;
            result[2] += 0.8081395348837209;
            result[3] += 0.14825581395348839;
            result[4] += 0;
            result[5] += 0.00872093023255814;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9344262295081968;
            result[3] += 0.06557377049180328;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002369668246445498;
            result[1] += 0;
            result[2] += 0.9976303317535545;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0.028112449799196786;
            result[1] += 0.004016064257028112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9558232931726908;
            result[5] += 0.012048192771084338;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.9491525423728814;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.05084745762711865;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03943377148634985;
            result[4] += 0.06673407482305359;
            result[5] += 0.8938321536905965;
          } else {
            result[0] += 0.017094017094017096;
            result[1] += 0.042735042735042736;
            result[2] += 0.02564102564102564;
            result[3] += 0.2564102564102564;
            result[4] += 0.1623931623931624;
            result[5] += 0.49572649572649574;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.20430107526881722;
            result[4] += 0.07526881720430108;
            result[5] += 0.7204301075268817;
          } else {
            result[0] += 0.014388489208633094;
            result[1] += 0;
            result[2] += 0.014388489208633094;
            result[3] += 0.7482014388489209;
            result[4] += 0;
            result[5] += 0.22302158273381295;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425a0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0.56;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.44;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9976076555023924;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0023923444976076554;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.03125;
            result[1] += 0.53125;
            result[2] += 0.03125;
            result[3] += 0.03125;
            result[4] += 0.21875;
            result[5] += 0.15625;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.08571428571428572;
            result[1] += 0.5285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.38571428571428573;
            result[5] += 0;
          } else {
            result[0] += 0.8951241950321988;
            result[1] += 0.0018399264029438822;
            result[2] += 0.004599816007359705;
            result[3] += 0.02483900643974241;
            result[4] += 0.05795768169273229;
            result[5] += 0.015639374425023;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.06923076923076923;
            result[1] += 0.015384615384615385;
            result[2] += 0.24615384615384617;
            result[3] += 0.23076923076923078;
            result[4] += 0.16923076923076924;
            result[5] += 0.2692307692307692;
          } else {
            result[0] += 0.7358490566037736;
            result[1] += 0;
            result[2] += 0.09433962264150945;
            result[3] += 0;
            result[4] += 0.169811320754717;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42b10000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0.9444444444444444;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0.014705882352941176;
            result[2] += 0.08823529411764706;
            result[3] += 0.38235294117647056;
            result[4] += 0.1323529411764706;
            result[5] += 0.38235294117647056;
          } else {
            result[0] += 0;
            result[1] += 0.7272727272727273;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.061855670103092786;
            result[3] += 0.8041237113402062;
            result[4] += 0;
            result[5] += 0.13402061855670103;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4310344827586207;
            result[3] += 0.5344827586206897;
            result[4] += 0;
            result[5] += 0.03448275862068966;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8113207547169812;
            result[3] += 0.11320754716981132;
            result[4] += 0;
            result[5] += 0.07547169811320754;
          }
        }
      }
    } else {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.75;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.9166666666666666;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.2;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4571428571428572;
            result[3] += 0.5000000000000001;
            result[4] += 0;
            result[5] += 0.042857142857142864;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8802395209580839;
            result[3] += 0.10778443113772455;
            result[4] += 0;
            result[5] += 0.011976047904191617;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5454545454545454;
            result[3] += 0.45454545454545453;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007552870090634442;
            result[1] += 0;
            result[2] += 0.9637462235649548;
            result[3] += 0.025679758308157104;
            result[4] += 0.003021148036253777;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.012987012987012988;
            result[1] += 0.021645021645021644;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0.012987012987012988;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2857142857142857;
            result[5] += 0.7142857142857143;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
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
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06060606060606061;
            result[4] += 0.5151515151515151;
            result[5] += 0.42424242424242425;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.030104712041884817;
            result[4] += 0.02356020942408377;
            result[5] += 0.9463350785340314;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.15588235294117647;
            result[1] += 0.0058823529411764705;
            result[2] += 0;
            result[3] += 0.1323529411764706;
            result[4] += 0.12941176470588237;
            result[5] += 0.5764705882352941;
          } else {
            result[0] += 0.03636363636363637;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5863636363636364;
            result[4] += 0.009090909090909092;
            result[5] += 0.3681818181818182;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426c0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0.06;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.94;
            result[5] += 0;
          } else {
            result[0] += 0.011627906976744186;
            result[1] += 0.8372093023255814;
            result[2] += 0;
            result[3] += 0.011627906976744186;
            result[4] += 0.12790697674418605;
            result[5] += 0.011627906976744186;
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
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.1320754716981132;
            result[1] += 0.29245283018867924;
            result[2] += 0;
            result[3] += 0.02830188679245283;
            result[4] += 0.5377358490566038;
            result[5] += 0.009433962264150943;
          } else {
            result[0] += 0.8978102189781022;
            result[1] += 0.013686131386861315;
            result[2] += 0.0036496350364963502;
            result[3] += 0.01824817518248175;
            result[4] += 0.05656934306569343;
            result[5] += 0.010036496350364963;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.021212121212121213;
            result[1] += 0.00909090909090909;
            result[2] += 0.29393939393939394;
            result[3] += 0.403030303030303;
            result[4] += 0.030303030303030304;
            result[5] += 0.24242424242424243;
          } else {
            result[0] += 0.6415094339622641;
            result[1] += 0.018867924528301886;
            result[2] += 0.2641509433962264;
            result[3] += 0.05660377358490566;
            result[4] += 0.018867924528301886;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
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
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0.21153846153846154;
            result[4] += 0;
            result[5] += 0.7115384615384616;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.037037037037037035;
            result[1] += 0;
            result[2] += 0.6296296296296297;
            result[3] += 0.1111111111111111;
            result[4] += 0.037037037037037035;
            result[5] += 0.18518518518518517;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5606060606060606;
            result[3] += 0.4393939393939394;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8157894736842105;
            result[3] += 0.17105263157894737;
            result[4] += 0;
            result[5] += 0.013157894736842105;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42bc0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.02272727272727273;
            result[1] += 0;
            result[2] += 0.8545454545454546;
            result[3] += 0.11363636363636365;
            result[4] += 0;
            result[5] += 0.009090909090909092;
          } else {
            result[0] += 0.0018867924528301887;
            result[1] += 0;
            result[2] += 0.9792452830188679;
            result[3] += 0.013207547169811321;
            result[4] += 0;
            result[5] += 0.005660377358490566;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.004464285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9642857142857143;
            result[5] += 0.03125;
          } else {
            result[0] += 0.21739130434782608;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.391304347826087;
            result[5] += 0.391304347826087;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0.021739130434782608;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.43478260869565216;
            result[5] += 0.5434782608695652;
          } else {
            result[0] += 0.7017543859649122;
            result[1] += 0.017543859649122806;
            result[2] += 0;
            result[3] += 0.05263157894736842;
            result[4] += 0.22807017543859648;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0.5909090909090909;
            result[2] += 0;
            result[3] += 0.09090909090909091;
            result[4] += 0.20454545454545456;
            result[5] += 0.11363636363636363;
          } else {
            result[0] += 0.003157894736842105;
            result[1] += 0.004210526315789474;
            result[2] += 0;
            result[3] += 0.061052631578947365;
            result[4] += 0.034736842105263156;
            result[5] += 0.8968421052631579;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.009174311926605505;
            result[1] += 0.009174311926605505;
            result[2] += 0.05504587155963303;
            result[3] += 0.3761467889908257;
            result[4] += 0.01834862385321101;
            result[5] += 0.5321100917431193;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8673469387755102;
            result[4] += 0;
            result[5] += 0.11224489795918367;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x425e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0.6129032258064516;
            result[2] += 0;
            result[3] += 0.0967741935483871;
            result[4] += 0.2903225806451613;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9973753280839895;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0026246719160104987;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.25075528700906347;
            result[1] += 0.02416918429003021;
            result[2] += 0.030211480362537766;
            result[3] += 0.13595166163141995;
            result[4] += 0.3413897280966767;
            result[5] += 0.2175226586102719;
          } else {
            result[0] += 0.8532272325375774;
            result[1] += 0.038903625110521665;
            result[2] += 0.004420866489832007;
            result[3] += 0.015915119363395226;
            result[4] += 0.07869142351900972;
            result[5] += 0.008841732979664015;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.006060606060606061;
            result[1] += 0.10909090909090909;
            result[2] += 0.12727272727272726;
            result[3] += 0.45454545454545453;
            result[4] += 0.04242424242424243;
            result[5] += 0.2606060606060606;
          } else {
            result[0] += 0.17073170731707318;
            result[1] += 0;
            result[2] += 0.6585365853658537;
            result[3] += 0.07317073170731707;
            result[4] += 0.032520325203252036;
            result[5] += 0.06504065040650407;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.022222222222222223;
            result[3] += 0.8888888888888888;
            result[4] += 0;
            result[5] += 0.08888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8888888888888888;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0;
            result[1] += 0.05263157894736842;
            result[2] += 0.10526315789473684;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8421052631578947;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.2;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.08571428571428572;
            result[4] += 0;
            result[5] += 0.05714285714285714;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c40000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428b0000))) ) ) {
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
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.017605633802816902;
            result[1] += 0;
            result[2] += 0.823943661971831;
            result[3] += 0.14788732394366197;
            result[4] += 0;
            result[5] += 0.01056338028169014;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9336734693877552;
            result[3] += 0.06122448979591837;
            result[4] += 0;
            result[5] += 0.005102040816326531;
          } else {
            result[0] += 0.002325581395348837;
            result[1] += 0;
            result[2] += 0.986046511627907;
            result[3] += 0.011627906976744186;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9629629629629629;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0.9166666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08333333333333333;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x424c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9230769230769231;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.09523809523809523;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0.7619047619047619;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.0024968789013732834;
            result[2] += 0;
            result[3] += 0.06991260923845194;
            result[4] += 0.026217228464419477;
            result[5] += 0.9013732833957553;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9210526315789473;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07894736842105263;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004889975550122249;
            result[1] += 0.007334963325183374;
            result[2] += 0.044009779951100246;
            result[3] += 0.3765281173594132;
            result[4] += 0.09290953545232274;
            result[5] += 0.4743276283618582;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42440000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.022222222222222223;
            result[2] += 0;
            result[3] += 0.08888888888888889;
            result[4] += 0.8888888888888888;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0.9975786924939467;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.002421307506053269;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0.2981366459627329;
            result[2] += 0.012422360248447204;
            result[3] += 0.012422360248447204;
            result[4] += 0.5031055900621118;
            result[5] += 0.031055900621118012;
          } else {
            result[0] += 0.8988566402814425;
            result[1] += 0.006156552330694812;
            result[2] += 0.004397537379067723;
            result[3] += 0.021987686895338615;
            result[4] += 0.0554089709762533;
            result[5] += 0.013192612137203168;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.025510204081632654;
            result[1] += 0;
            result[2] += 0.05612244897959184;
            result[3] += 0.42346938775510207;
            result[4] += 0.08163265306122448;
            result[5] += 0.413265306122449;
          } else {
            result[0] += 0.22666666666666666;
            result[1] += 0;
            result[2] += 0.49777777777777776;
            result[3] += 0.2088888888888889;
            result[4] += 0.013333333333333334;
            result[5] += 0.05333333333333334;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0.9642857142857143;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8947368421052632;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0.038834951456310676;
            result[1] += 0.05825242718446602;
            result[2] += 0.3592233009708738;
            result[3] += 0.34951456310679613;
            result[4] += 0;
            result[5] += 0.1941747572815534;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42520000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.573529411764706;
            result[3] += 0.2058823529411765;
            result[4] += 0;
            result[5] += 0.22058823529411767;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9;
            result[3] += 0.09166666666666666;
            result[4] += 0;
            result[5] += 0.008333333333333333;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42aa0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.001953125;
            result[1] += 0;
            result[2] += 0.98046875;
            result[3] += 0.017578125;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9841269841269841;
            result[5] += 0.015873015873015872;
          } else {
            result[0] += 0;
            result[1] += 0.6153846153846154;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3076923076923077;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8235294117647058;
            result[5] += 0.17647058823529413;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04161248374512354;
            result[4] += 0.02860858257477243;
            result[5] += 0.929778933680104;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.09785932721712538;
            result[1] += 0.06116207951070336;
            result[2] += 0.009174311926605505;
            result[3] += 0.20795107033639143;
            result[4] += 0.08256880733944955;
            result[5] += 0.5412844036697247;
          } else {
            result[0] += 0.009900990099009901;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8118811881188119;
            result[4] += 0;
            result[5] += 0.1782178217821782;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.36363636363636365;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6363636363636364;
            result[5] += 0;
          } else {
            result[0] += 0.0025188916876574307;
            result[1] += 0.9874055415617129;
            result[2] += 0;
            result[3] += 0.007556675062972292;
            result[4] += 0.0025188916876574307;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0.9074074074074074;
            result[5] += 0.018518518518518517;
          } else {
            result[0] += 0;
            result[1] += 0.9666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.26506024096385544;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.13253012048192772;
            result[4] += 0.4457831325301205;
            result[5] += 0.1566265060240964;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.025423728813559324;
            result[3] += 0.1440677966101695;
            result[4] += 0.15254237288135594;
            result[5] += 0.6779661016949152;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.8475147430497051;
            result[1] += 0.03369839932603201;
            result[2] += 0.004212299915754001;
            result[3] += 0.017691659646166806;
            result[4] += 0.08930075821398484;
            result[5] += 0.007582139848357203;
          } else {
            result[0] += 0.1875;
            result[1] += 0.008928571428571428;
            result[2] += 0.33035714285714285;
            result[3] += 0.10714285714285714;
            result[4] += 0.044642857142857144;
            result[5] += 0.32142857142857145;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07407407407407407;
            result[4] += 0;
            result[5] += 0.9259259259259259;
          } else {
            result[0] += 0;
            result[1] += 0.07317073170731707;
            result[2] += 0.04878048780487805;
            result[3] += 0.43902439024390244;
            result[4] += 0.24390243902439024;
            result[5] += 0.1951219512195122;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07462686567164178;
            result[3] += 0.7910447761194029;
            result[4] += 0;
            result[5] += 0.13432835820895522;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.43478260869565216;
            result[1] += 0.391304347826087;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.13043478260869565;
            result[5] += 0.043478260869565216;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.168;
            result[4] += 0.008;
            result[5] += 0.064;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1724137931034483;
            result[3] += 0.13793103448275862;
            result[4] += 0.034482758620689655;
            result[5] += 0.6551724137931034;
          } else {
            result[0] += 0.8181818181818182;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9183673469387755;
            result[3] += 0.08163265306122448;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ed0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8292682926829269;
            result[3] += 0.14227642276422767;
            result[4] += 0;
            result[5] += 0.02845528455284553;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0050933786078098476;
            result[1] += 0;
            result[2] += 0.9609507640067911;
            result[3] += 0.030560271646859084;
            result[4] += 0;
            result[5] += 0.003395585738539898;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423c0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.005025125628140704;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9849246231155779;
            result[5] += 0.010050251256281407;
          } else {
            result[0] += 0;
            result[1] += 0.22580645161290322;
            result[2] += 0;
            result[3] += 0.0967741935483871;
            result[4] += 0.6129032258064516;
            result[5] += 0.06451612903225806;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0.0015873015873015873;
            result[1] += 0;
            result[2] += 0.0015873015873015873;
            result[3] += 0.026984126984126985;
            result[4] += 0.009523809523809525;
            result[5] += 0.9603174603174603;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0.09929078014184398;
            result[1] += 0.07092198581560284;
            result[2] += 0;
            result[3] += 0.0673758865248227;
            result[4] += 0.14893617021276595;
            result[5] += 0.6134751773049646;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0502092050209205;
            result[3] += 0.5062761506276151;
            result[4] += 0.02092050209205021;
            result[5] += 0.4225941422594142;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.8076923076923077;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.19230769230769232;
            result[5] += 0;
          } else {
            result[0] += 0.02857142857142857;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9523809523809523;
            result[5] += 0.01904761904761905;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0.6714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.32857142857142857;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9942363112391931;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005763688760806916;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9078947368421053;
            result[1] += 0.013157894736842105;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07894736842105263;
            result[5] += 0;
          } else {
            result[0] += 0.02830188679245283;
            result[1] += 0.014150943396226415;
            result[2] += 0.04716981132075472;
            result[3] += 0.4386792452830189;
            result[4] += 0.10377358490566038;
            result[5] += 0.36792452830188677;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.907859078590786;
            result[1] += 0.018066847335140017;
            result[2] += 0.008130081300813009;
            result[3] += 0.013550135501355014;
            result[4] += 0.04607046070460705;
            result[5] += 0.006323396567299007;
          } else {
            result[0] += 0.27751196172248804;
            result[1] += 0.019138755980861243;
            result[2] += 0.31100478468899523;
            result[3] += 0.23444976076555024;
            result[4] += 0.0430622009569378;
            result[5] += 0.11483253588516747;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 0.07407407407407407;
            result[2] += 0;
            result[3] += 0.1111111111111111;
            result[4] += 0.7777777777777778;
            result[5] += 0.037037037037037035;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03125;
            result[4] += 0.03125;
            result[5] += 0.9375;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.875;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.02857142857142857;
            result[3] += 0.6285714285714286;
            result[4] += 0.04285714285714286;
            result[5] += 0.3;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15517241379310345;
            result[3] += 0.6206896551724138;
            result[4] += 0;
            result[5] += 0.22413793103448276;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6835443037974684;
            result[3] += 0.2278481012658228;
            result[4] += 0.012658227848101267;
            result[5] += 0.07594936708860761;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e80000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7333333333333333;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7484276729559748;
            result[3] += 0.25157232704402516;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.009090909090909092;
            result[1] += 0;
            result[2] += 0.8969696969696971;
            result[3] += 0.08484848484848487;
            result[4] += 0;
            result[5] += 0.009090909090909092;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42800000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.002369668246445498;
            result[1] += 0;
            result[2] += 0.9881516587677726;
            result[3] += 0.009478672985781991;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.0410958904109589;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0136986301369863;
            result[4] += 0.7945205479452054;
            result[5] += 0.1506849315068493;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0.6363636363636364;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.36363636363636365;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8181818181818182;
            result[5] += 0.18181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02483660130718954;
            result[4] += 0.023529411764705882;
            result[5] += 0.9516339869281045;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0.43243243243243246;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.44594594594594594;
            result[5] += 0.12162162162162163;
          } else {
            result[0] += 0.023195876288659795;
            result[1] += 0.002577319587628866;
            result[2] += 0.002577319587628866;
            result[3] += 0.3917525773195876;
            result[4] += 0.010309278350515464;
            result[5] += 0.5695876288659794;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0.3385416666666667;
            result[2] += 0.015625;
            result[3] += 0.010416666666666666;
            result[4] += 0.5885416666666666;
            result[5] += 0.005208333333333333;
          } else {
            result[0] += 0.8410757946210269;
            result[1] += 0.020374898125509373;
            result[2] += 0.015484922575387123;
            result[3] += 0.03993480032599837;
            result[4] += 0.04156479217603912;
            result[5] += 0.04156479217603912;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0.06153846153846154;
            result[1] += 0.010256410256410256;
            result[2] += 0.06666666666666667;
            result[3] += 0.2923076923076923;
            result[4] += 0.23076923076923078;
            result[5] += 0.3384615384615385;
          } else {
            result[0] += 0.15163934426229508;
            result[1] += 0;
            result[2] += 0.5122950819672131;
            result[3] += 0.22131147540983606;
            result[4] += 0.01639344262295082;
            result[5] += 0.09836065573770492;
          }
        }
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
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b40000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.7272727272727273;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8947368421052632;
            result[4] += 0;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0.3333333333333333;
            result[3] += 0.25333333333333335;
            result[4] += 0;
            result[5] += 0.37333333333333335;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x429c0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.017857142857142856;
            result[1] += 0;
            result[2] += 0.7321428571428571;
            result[3] += 0.21428571428571427;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0.7333333333333333;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6973684210526315;
            result[3] += 0.18421052631578946;
            result[4] += 0;
            result[5] += 0.11842105263157894;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8181818181818182;
            result[4] += 0;
            result[5] += 0.18181818181818182;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9770114942528736;
            result[3] += 0.011494252873563218;
            result[4] += 0;
            result[5] += 0.011494252873563218;
          } else {
            result[0] += 0.011764705882352941;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.18823529411764706;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.987012987012987;
            result[3] += 0.008116883116883116;
            result[4] += 0;
            result[5] += 0.00487012987012987;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42970000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9333333333333333;
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
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.11538461538461539;
            result[5] += 0.8846153846153846;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0.21428571428571427;
            result[2] += 0.07142857142857142;
            result[3] += 0;
            result[4] += 0.35714285714285715;
            result[5] += 0.35714285714285715;
          } else {
            result[0] += 0.8103448275862071;
            result[1] += 0.008620689655172415;
            result[2] += 0.008620689655172415;
            result[3] += 0.07758620689655174;
            result[4] += 0.08620689655172416;
            result[5] += 0.008620689655172415;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.13043478260869565;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6086956521739131;
            result[5] += 0.2608695652173913;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0012239902080783353;
            result[3] += 0.03916768665850673;
            result[4] += 0.02692778457772338;
            result[5] += 0.9326805385556916;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0.006993006993006993;
            result[2] += 0.024475524475524476;
            result[3] += 0.17132867132867133;
            result[4] += 0.10839160839160839;
            result[5] += 0.6888111888111889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.0380952380952381;
            result[1] += 0.0380952380952381;
            result[2] += 0.01904761904761905;
            result[3] += 0.5142857142857142;
            result[4] += 0.01904761904761905;
            result[5] += 0.37142857142857144;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.04545454545454546;
            result[3] += 0.8727272727272728;
            result[4] += 0;
            result[5] += 0.08181818181818183;
          }
        }
      }
    }
  } else {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0.019417475728155338;
            result[1] += 0.1941747572815534;
            result[2] += 0;
            result[3] += 0.038834951456310676;
            result[4] += 0.7378640776699029;
            result[5] += 0.009708737864077669;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.4166666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0;
            result[1] += 0.8148148148148148;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18518518518518517;
            result[5] += 0;
          } else {
            result[0] += 0.10344827586206896;
            result[1] += 0.20689655172413793;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5862068965517241;
            result[5] += 0.10344827586206896;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.9305680793507665;
            result[1] += 0.004508566275924256;
            result[2] += 0.0009017132551848512;
            result[3] += 0.009017132551848512;
            result[4] += 0.046889089269612265;
            result[5] += 0.008115419296663661;
          } else {
            result[0] += 0.22033898305084745;
            result[1] += 0;
            result[2] += 0.4152542372881356;
            result[3] += 0.2457627118644068;
            result[4] += 0.01694915254237288;
            result[5] += 0.1016949152542373;
          }
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f50000))) ) ) {
            result[0] += 0;
            result[1] += 0.05555555555555555;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9444444444444444;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.022222222222222223;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0.34444444444444444;
            result[4] += 0.03333333333333333;
            result[5] += 0.4888888888888889;
          } else {
            result[0] += 0.007936507936507936;
            result[1] += 0;
            result[2] += 0.6190476190476191;
            result[3] += 0.23015873015873015;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23529411764705882;
            result[3] += 0.6764705882352942;
            result[4] += 0;
            result[5] += 0.08823529411764706;
          } else {
            result[0] += 0;
            result[1] += 0.020618556701030927;
            result[2] += 0.6494845360824743;
            result[3] += 0.29896907216494845;
            result[4] += 0.030927835051546393;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.2465753424657534;
            result[1] += 0;
            result[2] += 0.5068493150684932;
            result[3] += 0.0821917808219178;
            result[4] += 0.0821917808219178;
            result[5] += 0.0821917808219178;
          } else {
            result[0] += 0.005235602094240839;
            result[1] += 0;
            result[2] += 0.9319371727748692;
            result[3] += 0.06282722513089006;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9956331877729258;
            result[5] += 0.004366812227074236;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0.25;
            result[5] += 0;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0.02937420178799489;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02937420178799489;
            result[4] += 0.0280970625798212;
            result[5] += 0.913154533844189;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.05303030303030303;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06818181818181818;
            result[4] += 0.06060606060606061;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0.050505050505050504;
            result[1] += 0.05723905723905724;
            result[2] += 0.010101010101010102;
            result[3] += 0.5252525252525253;
            result[4] += 0.037037037037037035;
            result[5] += 0.31986531986531985;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.06829268292682927;
            result[1] += 0.3463414634146341;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5707317073170731;
            result[5] += 0.014634146341463415;
          } else {
            result[0] += 0.8501712328767121;
            result[1] += 0.010273972602739724;
            result[2] += 0;
            result[3] += 0.04623287671232876;
            result[4] += 0.06934931506849314;
            result[5] += 0.02397260273972602;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.046762589928057555;
            result[1] += 0.07194244604316546;
            result[2] += 0.07194244604316546;
            result[3] += 0.28776978417266186;
            result[4] += 0.16546762589928057;
            result[5] += 0.35611510791366907;
          } else {
            result[0] += 0.22439024390243903;
            result[1] += 0;
            result[2] += 0.6341463414634146;
            result[3] += 0.12195121951219512;
            result[4] += 0;
            result[5] += 0.01951219512195122;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x424e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x425c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3;
            result[5] += 0.2;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.018867924528301886;
            result[3] += 0.1320754716981132;
            result[4] += 0;
            result[5] += 0.8490566037735849;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7333333333333333;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0.2;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.25;
            result[4] += 0.25;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07142857142857142;
            result[4] += 0;
            result[5] += 0.9285714285714286;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.56;
            result[3] += 0.28;
            result[4] += 0;
            result[5] += 0.16;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
            result[0] += 0.017804154302670624;
            result[1] += 0;
            result[2] += 0.7922848664688428;
            result[3] += 0.17507418397626112;
            result[4] += 0;
            result[5] += 0.01483679525222552;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9711375212224108;
            result[3] += 0.027164685908319185;
            result[4] += 0;
            result[5] += 0.001697792869269949;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.012295081967213115;
            result[4] += 0.9713114754098361;
            result[5] += 0.01639344262295082;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.47368421052631576;
            result[1] += 0.05263157894736842;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42105263157894735;
            result[5] += 0.05263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.039568345323741004;
            result[4] += 0.050359712230215826;
            result[5] += 0.9100719424460432;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.5660377358490566;
            result[1] += 0.11320754716981132;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2641509433962264;
            result[5] += 0.05660377358490566;
          } else {
            result[0] += 0.02364864864864865;
            result[1] += 0.0033783783783783786;
            result[2] += 0.060810810810810814;
            result[3] += 0.46959459459459457;
            result[4] += 0.05067567567567568;
            result[5] += 0.3918918918918919;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x425a0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0.7777777777777778;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2222222222222222;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9975550122249389;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024449877750611247;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.518957345971564;
            result[1] += 0.054502369668246446;
            result[2] += 0;
            result[3] += 0.0971563981042654;
            result[4] += 0.26066350710900477;
            result[5] += 0.06872037914691943;
          } else {
            result[0] += 0.9087799315849485;
            result[1] += 0.023945267958950963;
            result[2] += 0.007981755986316988;
            result[3] += 0.005701254275940706;
            result[4] += 0.05359179019384263;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.007722007722007722;
            result[1] += 0.007722007722007722;
            result[2] += 0.05791505791505792;
            result[3] += 0.3088803088803089;
            result[4] += 0.08108108108108109;
            result[5] += 0.5366795366795367;
          } else {
            result[0] += 0.38709677419354843;
            result[1] += 0;
            result[2] += 0.467741935483871;
            result[3] += 0.09677419354838711;
            result[4] += 0.024193548387096777;
            result[5] += 0.024193548387096777;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42de0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.2222222222222222;
            result[4] += 0.07407407407407407;
            result[5] += 0.7037037037037037;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09195402298850575;
            result[3] += 0.735632183908046;
            result[4] += 0;
            result[5] += 0.1724137931034483;
          } else {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.5625;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0.8461538461538461;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.24;
            result[3] += 0.36;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.92;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0.04;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.435483870967742;
            result[3] += 0.37096774193548393;
            result[4] += 0.048387096774193554;
            result[5] += 0.14516129032258068;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8309352517985612;
            result[3] += 0.1510791366906475;
            result[4] += 0;
            result[5] += 0.017985611510791366;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.03571428571428571;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.001605136436597111;
            result[1] += 0;
            result[2] += 0.9614767255216694;
            result[3] += 0.03370786516853933;
            result[4] += 0;
            result[5] += 0.003210272873194222;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42f00000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.024390243902439025;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04878048780487805;
            result[4] += 0.5609756097560976;
            result[5] += 0.36585365853658536;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.6153846153846154;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0.00436046511627907;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.020348837209302327;
            result[4] += 0.020348837209302327;
            result[5] += 0.9549418604651163;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.5;
            result[1] += 0.2608695652173913;
            result[2] += 0;
            result[3] += 0.021739130434782608;
            result[4] += 0.11956521739130435;
            result[5] += 0.09782608695652174;
          } else {
            result[0] += 0.010416666666666666;
            result[1] += 0.016666666666666666;
            result[2] += 0.010416666666666666;
            result[3] += 0.325;
            result[4] += 0.025;
            result[5] += 0.6125;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
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
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.08256880733944955;
            result[1] += 0.10091743119266056;
            result[2] += 0.027522935779816515;
            result[3] += 0.009174311926605505;
            result[4] += 0.7339449541284404;
            result[5] += 0.045871559633027525;
          } else {
            result[0] += 0;
            result[1] += 0.8095238095238095;
            result[2] += 0.09523809523809523;
            result[3] += 0.047619047619047616;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9807692307692307;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.019230769230769232;
            result[5] += 0;
          } else {
            result[0] += 0.06349206349206349;
            result[1] += 0.027777777777777776;
            result[2] += 0.015873015873015872;
            result[3] += 0.25;
            result[4] += 0.21031746031746032;
            result[5] += 0.43253968253968256;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8678537956888472;
            result[1] += 0.028116213683223992;
            result[2] += 0.01499531396438613;
            result[3] += 0.011246485473289597;
            result[4] += 0.06373008434864105;
            result[5] += 0.014058106841611996;
          } else {
            result[0] += 0.23699421965317918;
            result[1] += 0;
            result[2] += 0.2254335260115607;
            result[3] += 0.24277456647398843;
            result[4] += 0.19653179190751446;
            result[5] += 0.09826589595375723;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03125;
            result[3] += 0.84375;
            result[4] += 0;
            result[5] += 0.125;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5652173913043478;
            result[3] += 0.34782608695652173;
            result[4] += 0;
            result[5] += 0.08695652173913043;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.64;
            result[3] += 0.32;
            result[4] += 0;
            result[5] += 0.04;
          }
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
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5416666666666666;
            result[4] += 0;
            result[5] += 0.4583333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5942028985507246;
            result[3] += 0.34782608695652173;
            result[4] += 0;
            result[5] += 0.057971014492753624;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.014925373134328358;
            result[1] += 0;
            result[2] += 0.7014925373134329;
            result[3] += 0.20149253731343283;
            result[4] += 0;
            result[5] += 0.08208955223880597;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9878048780487805;
            result[3] += 0.012195121951219513;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0.5882352941176471;
            result[1] += 0;
            result[2] += 0.23529411764705882;
            result[3] += 0.058823529411764705;
            result[4] += 0.11764705882352941;
            result[5] += 0;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9336734693877551;
            result[3] += 0.05612244897959184;
            result[4] += 0;
            result[5] += 0.01020408163265306;
          } else {
            result[0] += 0.007532956685499058;
            result[1] += 0;
            result[2] += 0.9811676082862524;
            result[3] += 0.011299435028248588;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x422e0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0.9523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.0034129692832764505;
            result[1] += 0.010238907849829351;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.962457337883959;
            result[5] += 0.023890784982935155;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0.10256410256410256;
            result[2] += 0;
            result[3] += 0.01282051282051282;
            result[4] += 0.5384615384615384;
            result[5] += 0.3076923076923077;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x425c0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07692307692307693;
            result[3] += 0;
            result[4] += 0.6923076923076923;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004297994269340974;
            result[3] += 0.02005730659025788;
            result[4] += 0.03008595988538682;
            result[5] += 0.9455587392550143;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.1169811320754717;
            result[1] += 0.0037735849056603774;
            result[2] += 0;
            result[3] += 0.15849056603773584;
            result[4] += 0.09433962264150944;
            result[5] += 0.6264150943396226;
          } else {
            result[0] += 0.014018691588785048;
            result[1] += 0;
            result[2] += 0.014018691588785048;
            result[3] += 0.691588785046729;
            result[4] += 0.014018691588785048;
            result[5] += 0.2663551401869159;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.16304347826086957;
            result[1] += 0.2826086956521739;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5543478260869565;
            result[5] += 0;
          } else {
            result[0] += 0.9018733273862624;
            result[1] += 0.01248884924174844;
            result[2] += 0.0008920606601248886;
            result[3] += 0.016949152542372885;
            result[4] += 0.05619982158786798;
            result[5] += 0.011596788581623552;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.026595744680851064;
            result[1] += 0.010638297872340425;
            result[2] += 0.31117021276595747;
            result[3] += 0.31648936170212766;
            result[4] += 0.02127659574468085;
            result[5] += 0.31382978723404253;
          } else {
            result[0] += 0.7272727272727273;
            result[1] += 0;
            result[2] += 0.12987012987012986;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12;
            result[3] += 0.04;
            result[4] += 0.12;
            result[5] += 0.72;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.04878048780487805;
            result[1] += 0;
            result[2] += 0.23170731707317074;
            result[3] += 0.5609756097560976;
            result[4] += 0.024390243902439025;
            result[5] += 0.13414634146341464;
          } else {
            result[0] += 0.07692307692307693;
            result[1] += 0;
            result[2] += 0.9230769230769231;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8933333333333334;
            result[3] += 0.08000000000000002;
            result[4] += 0;
            result[5] += 0.026666666666666672;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42960000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.4166666666666667;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.027777777777777776;
            result[1] += 0.003968253968253968;
            result[2] += 0.8373015873015873;
            result[3] += 0.13095238095238096;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42af0000))) ) ) {
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
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6470588235294118;
            result[3] += 0.35294117647058826;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9742268041237113;
            result[3] += 0.02577319587628866;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x41f00000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008032128514056224;
            result[1] += 0.01606425702811245;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9558232931726908;
            result[5] += 0.020080321285140562;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
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
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.9782608695652174;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.021739130434782608;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.02916160388821385;
            result[4] += 0.03766707168894289;
            result[5] += 0.9331713244228432;
          } else {
            result[0] += 0.008333333333333333;
            result[1] += 0.004166666666666667;
            result[2] += 0.016666666666666666;
            result[3] += 0.22083333333333333;
            result[4] += 0.08333333333333333;
            result[5] += 0.6666666666666666;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.38461538461538464;
            result[4] += 0.11538461538461539;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.00819672131147541;
            result[1] += 0.01639344262295082;
            result[2] += 0;
            result[3] += 0.8032786885245902;
            result[4] += 0;
            result[5] += 0.1721311475409836;
          }
        }
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.9387755102040817;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.061224489795918366;
            result[5] += 0;
          } else {
            result[0] += 0.12962962962962962;
            result[1] += 0.08641975308641975;
            result[2] += 0.006172839506172839;
            result[3] += 0.018518518518518517;
            result[4] += 0.7469135802469136;
            result[5] += 0.012345679012345678;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.553475935828877;
            result[1] += 0.0106951871657754;
            result[2] += 0.016042780748663103;
            result[3] += 0.20588235294117646;
            result[4] += 0.08288770053475936;
            result[5] += 0.13101604278074866;
          } else {
            result[0] += 0.8912037037037037;
            result[1] += 0.013888888888888888;
            result[2] += 0.020833333333333332;
            result[3] += 0.010416666666666666;
            result[4] += 0.056712962962962965;
            result[5] += 0.006944444444444444;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0.0041841004184100415;
            result[1] += 0;
            result[2] += 0.19246861924686193;
            result[3] += 0.41422594142259417;
            result[4] += 0.07112970711297072;
            result[5] += 0.3179916317991632;
          } else {
            result[0] += 0.2647058823529412;
            result[1] += 0.20588235294117646;
            result[2] += 0.35294117647058826;
            result[3] += 0;
            result[4] += 0.029411764705882353;
            result[5] += 0.14705882352941177;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.0935412026726058;
            result[1] += 0;
            result[2] += 0.6815144766146993;
            result[3] += 0.17817371937639198;
            result[4] += 0;
            result[5] += 0.0467706013363029;
          } else {
            result[0] += 0.0015600624024961;
            result[1] += 0;
            result[2] += 0.9609984399375975;
            result[3] += 0.0374414976599064;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42340000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.005102040816326531;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9591836734693878;
            result[5] += 0.03571428571428572;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8333333333333334;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2631578947368421;
            result[5] += 0.7368421052631579;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.36065573770491804;
            result[1] += 0.01639344262295082;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4426229508196721;
            result[5] += 0.18032786885245902;
          } else {
            result[0] += 0.0012135922330097086;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05218446601941747;
            result[4] += 0.038834951456310676;
            result[5] += 0.9077669902912622;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.061068702290076333;
            result[1] += 0.1183206106870229;
            result[2] += 0.08015267175572519;
            result[3] += 0.24045801526717558;
            result[4] += 0.022900763358778626;
            result[5] += 0.4770992366412214;
          } else {
            result[0] += 0;
            result[1] += 0.019417475728155338;
            result[2] += 0.009708737864077669;
            result[3] += 0.7475728155339806;
            result[4] += 0.009708737864077669;
            result[5] += 0.21359223300970873;
          }
        }
      }
    } else {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42300000))) ) ) {
            result[0] += 0;
            result[1] += 0.9642857142857143;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.03571428571428571;
            result[5] += 0;
          } else {
            result[0] += 0.07766990291262135;
            result[1] += 0.019417475728155338;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8932038834951457;
            result[5] += 0.009708737864077669;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8814878892733564;
            result[1] += 0.00865051903114187;
            result[2] += 0.0025951557093425604;
            result[3] += 0.03200692041522491;
            result[4] += 0.056228373702422146;
            result[5] += 0.01903114186851211;
          } else {
            result[0] += 0.24092409240924093;
            result[1] += 0.033003300330033;
            result[2] += 0.2145214521452145;
            result[3] += 0.2838283828382838;
            result[4] += 0.066006600660066;
            result[5] += 0.1617161716171617;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9866666666666667;
            result[2] += 0.0026666666666666666;
            result[3] += 0;
            result[4] += 0.010666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0.33333333333333337;
            result[4] += 0.16666666666666669;
            result[5] += 0.16666666666666669;
          }
        }
      }
    }
  } else {
    if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.1;
          } else {
            result[0] += 0.025974025974025976;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.07792207792207792;
            result[4] += 0.03896103896103896;
            result[5] += 0.7662337662337663;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05454545454545454;
            result[3] += 0.8;
            result[4] += 0;
            result[5] += 0.14545454545454545;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47368421052631576;
            result[3] += 0.47368421052631576;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25925925925925924;
            result[3] += 0.3333333333333333;
            result[4] += 0.07407407407407407;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8243243243243243;
            result[3] += 0.08108108108108109;
            result[4] += 0;
            result[5] += 0.0945945945945946;
          }
        }
      }
    } else {
      if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.18181818181818182;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3611111111111111;
            result[3] += 0.5555555555555556;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.012195121951219513;
            result[1] += 0;
            result[2] += 0.8780487804878049;
            result[3] += 0.10975609756097561;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0.14285714285714285;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0012484394506866417;
            result[1] += 0;
            result[2] += 0.9363295880149812;
            result[3] += 0.05742821473158552;
            result[4] += 0;
            result[5] += 0.004993757802746567;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0.009852216748768473;
            result[1] += 0.014778325123152709;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9704433497536946;
            result[5] += 0.0049261083743842365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5490196078431373;
            result[5] += 0.45098039215686275;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.4;
            result[4] += 0.4;
            result[5] += 0;
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
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.27049180327868855;
            result[1] += 0.01639344262295082;
            result[2] += 0.00819672131147541;
            result[3] += 0;
            result[4] += 0.4426229508196721;
            result[5] += 0.26229508196721313;
          } else {
            result[0] += 0.0010526315789473684;
            result[1] += 0;
            result[2] += 0.003157894736842105;
            result[3] += 0.06842105263157895;
            result[4] += 0.042105263157894736;
            result[5] += 0.8852631578947369;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9166666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7481481481481481;
            result[4] += 0;
            result[5] += 0.2518518518518518;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423c0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9230769230769231;
            result[5] += 0.038461538461538464;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5409836065573771;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4426229508196721;
            result[5] += 0.01639344262295082;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0.13768115942028986;
            result[1] += 0;
            result[2] += 0.014492753623188406;
            result[3] += 0.21014492753623187;
            result[4] += 0.12318840579710146;
            result[5] += 0.5144927536231884;
          } else {
            result[0] += 0.8823529411764707;
            result[1] += 0.021390374331550804;
            result[2] += 0.009803921568627453;
            result[3] += 0.024064171122994655;
            result[4] += 0.04456327985739751;
            result[5] += 0.017825311942959006;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0.030211480362537766;
            result[1] += 0.021148036253776436;
            result[2] += 0.19939577039274925;
            result[3] += 0.4380664652567976;
            result[4] += 0.0513595166163142;
            result[5] += 0.2598187311178248;
          } else {
            result[0] += 0.8032786885245902;
            result[1] += 0;
            result[2] += 0.16393442622950818;
            result[3] += 0;
            result[4] += 0.01639344262295082;
            result[5] += 0.01639344262295082;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.07407407407407407;
            result[1] += 0;
            result[2] += 0.07407407407407407;
            result[3] += 0.07407407407407407;
            result[4] += 0.07407407407407407;
            result[5] += 0.7037037037037037;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11764705882352941;
            result[3] += 0.7352941176470589;
            result[4] += 0;
            result[5] += 0.14705882352941177;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42df0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.47126436781609193;
            result[3] += 0.4367816091954023;
            result[4] += 0;
            result[5] += 0.09195402298850575;
          } else {
            result[0] += 0.026315789473684213;
            result[1] += 0;
            result[2] += 0.8070175438596492;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.16666666666666669;
            result[1] += 0;
            result[2] += 0.6666666666666667;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666669;
          } else {
            result[0] += 0.8888888888888888;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0.25;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7261904761904762;
            result[3] += 0.2261904761904762;
            result[4] += 0;
            result[5] += 0.047619047619047616;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7272727272727273;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.007518796992481203;
            result[1] += 0;
            result[2] += 0.9172932330827067;
            result[3] += 0.06766917293233082;
            result[4] += 0;
            result[5] += 0.007518796992481203;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9365079365079365;
            result[3] += 0.06349206349206349;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.995249406175772;
            result[3] += 0.004750593824228029;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b80000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.008130081300813009;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.975609756097561;
            result[5] += 0.016260162601626018;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05263157894736842;
            result[3] += 0;
            result[4] += 0.9473684210526315;
            result[5] += 0;
          } else {
            result[0] += 0.01557285873192436;
            result[1] += 0.010011123470522803;
            result[2] += 0.0011123470522803114;
            result[3] += 0.05116796440489433;
            result[4] += 0.0389321468298109;
            result[5] += 0.8832035595105673;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.0875;
            result[1] += 0;
            result[2] += 0.025;
            result[3] += 0.1625;
            result[4] += 0.05;
            result[5] += 0.675;
          } else {
            result[0] += 0.09154929577464789;
            result[1] += 0.02112676056338028;
            result[2] += 0.028169014084507043;
            result[3] += 0.6549295774647887;
            result[4] += 0.02112676056338028;
            result[5] += 0.18309859154929578;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0.1111111111111111;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.5879629629629629;
            result[1] += 0;
            result[2] += 0.032407407407407406;
            result[3] += 0.013888888888888888;
            result[4] += 0.3263888888888889;
            result[5] += 0.03935185185185185;
          } else {
            result[0] += 0.022388059701492536;
            result[1] += 0.041044776119402986;
            result[2] += 0.11194029850746269;
            result[3] += 0.26865671641791045;
            result[4] += 0.1417910447761194;
            result[5] += 0.4141791044776119;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.907744874715262;
            result[1] += 0.017084282460136675;
            result[2] += 0.009111617312072893;
            result[3] += 0.00683371298405467;
            result[4] += 0.05922551252847381;
            result[5] += 0;
          } else {
            result[0] += 0.16981132075471697;
            result[1] += 0.09433962264150944;
            result[2] += 0.24528301886792453;
            result[3] += 0.2641509433962264;
            result[4] += 0.018867924528301886;
            result[5] += 0.20754716981132076;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8571428571428571;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.30434782608695654;
            result[4] += 0.014492753623188406;
            result[5] += 0.6811594202898551;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8392857142857143;
            result[4] += 0;
            result[5] += 0.16071428571428573;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.49122807017543857;
            result[3] += 0.43859649122807015;
            result[4] += 0;
            result[5] += 0.07017543859649122;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ce0000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0.09090909090909091;
            result[2] += 0.5454545454545454;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.36363636363636365;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.21739130434782608;
            result[3] += 0.6521739130434783;
            result[4] += 0;
            result[5] += 0.13043478260869565;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0.015151515151515152;
            result[1] += 0;
            result[2] += 0.7727272727272727;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.030303030303030304;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x428c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.8571428571428571;
            result[1] += 0.09523809523809523;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.047619047619047616;
            result[5] += 0;
          } else {
            result[0] += 0.15384615384615385;
            result[1] += 0;
            result[2] += 0.6923076923076923;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0.07692307692307693;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.20833333333333334;
            result[1] += 0.125;
            result[2] += 0.4583333333333333;
            result[3] += 0.08333333333333333;
            result[4] += 0.041666666666666664;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.005387931034482759;
            result[1] += 0;
            result[2] += 0.9364224137931034;
            result[3] += 0.04956896551724138;
            result[4] += 0;
            result[5] += 0.008620689655172414;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9851485148514851;
            result[5] += 0.01485148514851485;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2;
            result[5] += 0.8;
          } else {
            result[0] += 0;
            result[1] += 0.22727272727272727;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7272727272727273;
            result[5] += 0.045454545454545456;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42600000))) ) ) {
            result[0] += 0.9777777777777777;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.022222222222222223;
            result[5] += 0;
          } else {
            result[0] += 0.0038095238095238095;
            result[1] += 0.0009523809523809524;
            result[2] += 0;
            result[3] += 0.05714285714285714;
            result[4] += 0.06857142857142857;
            result[5] += 0.8695238095238095;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06666666666666667;
            result[3] += 0.17777777777777778;
            result[4] += 0.06666666666666667;
            result[5] += 0.6888888888888889;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05925925925925926;
            result[3] += 0.7407407407407407;
            result[4] += 0.007407407407407408;
            result[5] += 0.1925925925925926;
          }
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0.4444444444444444;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
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
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.046511627906976744;
            result[4] += 0.9534883720930233;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.7142857142857143;
            result[2] += 0;
            result[3] += 0.047619047619047616;
            result[4] += 0.2222222222222222;
            result[5] += 0.015873015873015872;
          }
        }
      } else {
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.15053763440860216;
            result[1] += 0.45161290322580644;
            result[2] += 0.021505376344086023;
            result[3] += 0;
            result[4] += 0.26881720430107525;
            result[5] += 0.10752688172043011;
          } else {
            result[0] += 0.8955087076076994;
            result[1] += 0.01008249312557287;
            result[2] += 0.002749770852428964;
            result[3] += 0.01466544454628781;
            result[4] += 0.05591200733272227;
            result[5] += 0.021081576535288724;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.038461538461538464;
            result[1] += 0.019230769230769232;
            result[2] += 0.10256410256410256;
            result[3] += 0.4551282051282051;
            result[4] += 0.09615384615384616;
            result[5] += 0.28846153846153844;
          } else {
            result[0] += 0.32085561497326204;
            result[1] += 0.08021390374331551;
            result[2] += 0.4385026737967914;
            result[3] += 0.0427807486631016;
            result[4] += 0.0374331550802139;
            result[5] += 0.08021390374331551;
          }
        }
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428c0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06896551724137931;
            result[5] += 0.9310344827586207;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.3333333333333333;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.75;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0673076923076923;
            result[3] += 0.7596153846153846;
            result[4] += 0;
            result[5] += 0.17307692307692307;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.0625;
          }
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4444444444444444;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5555555555555556;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.3947368421052632;
            result[1] += 0;
            result[2] += 0.052631578947368425;
            result[3] += 0.07894736842105264;
            result[4] += 0.15789473684210528;
            result[5] += 0.31578947368421056;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6129032258064516;
            result[3] += 0.22580645161290322;
            result[4] += 0.03225806451612903;
            result[5] += 0.12903225806451613;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0.8;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.004098360655737706;
            result[1] += 0;
            result[2] += 0.7540983606557379;
            result[3] += 0.2172131147540984;
            result[4] += 0.004098360655737706;
            result[5] += 0.020491803278688527;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9611510791366906;
            result[3] += 0.03884892086330935;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42720000))) ) ) {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.44;
            result[5] += 0.56;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.5555555555555556;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4444444444444444;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x425e0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0.85;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.8636363636363638;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04545454545454546;
            result[4] += 0.04545454545454546;
            result[5] += 0.04545454545454546;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0056179775280898875;
            result[3] += 0.04719101123595506;
            result[4] += 0.038202247191011236;
            result[5] += 0.9089887640449438;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0;
            result[1] += 0.26666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0.6410256410256411;
            result[1] += 0;
            result[2] += 0.10256410256410256;
            result[3] += 0.05128205128205128;
            result[4] += 0.07692307692307693;
            result[5] += 0.1282051282051282;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0.016129032258064516;
            result[1] += 0;
            result[2] += 0.12903225806451613;
            result[3] += 0.016129032258064516;
            result[4] += 0.0967741935483871;
            result[5] += 0.7419354838709677;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.046218487394957986;
            result[3] += 0.5630252100840336;
            result[4] += 0.02100840336134454;
            result[5] += 0.3697478991596639;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42620000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0.05714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9428571428571428;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.004987531172069825;
            result[1] += 0.9925187032418953;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0024937655860349127;
            result[5] += 0;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x423e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.09375;
            result[1] += 0.1875;
            result[2] += 0;
            result[3] += 0.015625;
            result[4] += 0.5703125;
            result[5] += 0.1328125;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.8666053357865686;
            result[1] += 0.006439742410303589;
            result[2] += 0.0009199632014719412;
            result[3] += 0.034038638454461825;
            result[4] += 0.05059797608095677;
            result[5] += 0.04139834406623736;
          } else {
            result[0] += 0.3333333333333333;
            result[1] += 0.039603960396039604;
            result[2] += 0.0858085808580858;
            result[3] += 0.20462046204620463;
            result[4] += 0.08250825082508251;
            result[5] += 0.25412541254125415;
          }
        }
      }
    } else {
      if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42cb0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0.2619047619047619;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5670103092783505;
            result[3] += 0.3402061855670103;
            result[4] += 0.010309278350515464;
            result[5] += 0.08247422680412371;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.47058823529411764;
            result[4] += 0;
            result[5] += 0.5294117647058824;
          } else {
            result[0] += 0.10526315789473684;
            result[1] += 0;
            result[2] += 0.7894736842105263;
            result[3] += 0;
            result[4] += 0.05263157894736842;
            result[5] += 0.05263157894736842;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.026936026936026935;
            result[1] += 0.013468013468013467;
            result[2] += 0.7643097643097643;
            result[3] += 0.16498316498316498;
            result[4] += 0;
            result[5] += 0.030303030303030304;
          } else {
            result[0] += 0.009836065573770494;
            result[1] += 0;
            result[2] += 0.957377049180328;
            result[3] += 0.02950819672131148;
            result[4] += 0;
            result[5] += 0.0032786885245901644;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9698275862068966;
            result[5] += 0.03017241379310345;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42400000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.03389830508474576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05084745762711865;
            result[4] += 0.4406779661016949;
            result[5] += 0.4745762711864407;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3793103448275862;
            result[5] += 0.6206896551724138;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001451378809869376;
            result[3] += 0.03193033381712627;
            result[4] += 0.00725689404934688;
            result[5] += 0.9593613933236574;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.9333333333333333;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06666666666666667;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.014644351464435146;
            result[1] += 0.0041841004184100415;
            result[2] += 0.0041841004184100415;
            result[3] += 0.33472803347280333;
            result[4] += 0.04602510460251046;
            result[5] += 0.5962343096234309;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.07692307692307693;
            result[2] += 0;
            result[3] += 0.009615384615384616;
            result[4] += 0.8076923076923077;
            result[5] += 0.028846153846153848;
          } else {
            result[0] += 0.08;
            result[1] += 0.88;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.04;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.05555555555555554;
            result[1] += 0.5333333333333332;
            result[2] += 0.02222222222222222;
            result[3] += 0.05555555555555554;
            result[4] += 0.29999999999999993;
            result[5] += 0.033333333333333326;
          } else {
            result[0] += 0.8931433659839715;
            result[1] += 0.008014247551202136;
            result[2] += 0.003561887800534283;
            result[3] += 0.0213713268032057;
            result[4] += 0.0578806767586821;
            result[5] += 0.016028495102404273;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.030303030303030304;
            result[1] += 0.03636363636363636;
            result[2] += 0.06060606060606061;
            result[3] += 0.3939393939393939;
            result[4] += 0.048484848484848485;
            result[5] += 0.4303030303030303;
          } else {
            result[0] += 0.7500000000000001;
            result[1] += 0;
            result[2] += 0.10714285714285715;
            result[3] += 0.03571428571428572;
            result[4] += 0.10714285714285715;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5135135135135135;
            result[4] += 0;
            result[5] += 0.4864864864864865;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.12037037037037036;
            result[3] += 0.7407407407407407;
            result[4] += 0;
            result[5] += 0.1388888888888889;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0.3125;
            result[4] += 0;
            result[5] += 0.5625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.06666666666666667;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8809523809523809;
            result[3] += 0.09523809523809523;
            result[4] += 0;
            result[5] += 0.023809523809523808;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ee0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42840000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.007547169811320755;
            result[1] += 0;
            result[2] += 0.720754716981132;
            result[3] += 0.23773584905660378;
            result[4] += 0;
            result[5] += 0.033962264150943396;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42c40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.23809523809523808;
            result[1] += 0;
            result[2] += 0.7619047619047619;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.004016064257028112;
            result[1] += 0;
            result[2] += 0.8875502008032129;
            result[3] += 0.10441767068273092;
            result[4] += 0;
            result[5] += 0.004016064257028112;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9858299595141701;
            result[3] += 0.012145748987854251;
            result[4] += 0;
            result[5] += 0.0020242914979757085;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 0.8571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0;
          } else {
            result[0] += 0.02092050209205021;
            result[1] += 0.008368200836820083;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9539748953974896;
            result[5] += 0.016736401673640166;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0.5882352941176472;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23529411764705885;
            result[4] += 0.10294117647058824;
            result[5] += 0.0735294117647059;
          }
        }
      } else {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ac0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03363914373088685;
            result[4] += 0.01834862385321101;
            result[5] += 0.9480122324159022;
          } else {
            result[0] += 0.007334963325183374;
            result[1] += 0.004889975550122249;
            result[2] += 0.012224938875305624;
            result[3] += 0.1687041564792176;
            result[4] += 0.10024449877750612;
            result[5] += 0.706601466992665;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0;
            result[5] += 0.8947368421052632;
          } else {
            result[0] += 0.007575757575757576;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.7878787878787878;
            result[4] += 0;
            result[5] += 0.20454545454545456;
          }
        }
      }
    } else {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.058091286307053944;
            result[1] += 0.4024896265560166;
            result[2] += 0.004149377593360996;
            result[3] += 0.02074688796680498;
            result[4] += 0.49377593360995853;
            result[5] += 0.02074688796680498;
          } else {
            result[0] += 0.857389801210026;
            result[1] += 0.016421780466724288;
            result[2] += 0.005185825410544511;
            result[3] += 0.033707865168539325;
            result[4] += 0.058772687986171135;
            result[5] += 0.028522039757994815;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.003875968992248062;
            result[1] += 0.027131782945736434;
            result[2] += 0.16666666666666666;
            result[3] += 0.4263565891472868;
            result[4] += 0.03488372093023256;
            result[5] += 0.34108527131782945;
          } else {
            result[0] += 0.32954545454545453;
            result[1] += 0.003787878787878788;
            result[2] += 0.5037878787878788;
            result[3] += 0.08712121212121213;
            result[4] += 0.026515151515151516;
            result[5] += 0.04924242424242424;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.038461538461538464;
            result[1] += 0.9615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.18181818181818182;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.6052631578947368;
            result[4] += 0;
            result[5] += 0.14473684210526316;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7727272727272727;
            result[3] += 0.22727272727272727;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42e90000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.625;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9821428571428571;
            result[3] += 0.017857142857142856;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42e00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0.6666666666666666;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.5714285714285714;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8957055214723927;
            result[3] += 0.09815950920245399;
            result[4] += 0;
            result[5] += 0.006134969325153374;
          }
        } else {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9857142857142858;
            result[3] += 0.014285714285714285;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7872340425531915;
            result[3] += 0.2127659574468085;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ee0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9953379953379954;
            result[3] += 0.004662004662004662;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9310344827586207;
            result[3] += 0.06896551724137931;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
    if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427e0000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23529411764705882;
            result[5] += 0.7647058823529411;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.8571428571428571;
            result[5] += 0.047619047619047616;
          }
        }
      } else {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42980000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        }
      }
    } else {
      if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7647058823529411;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23076923076923078;
            result[4] += 0.46153846153846156;
            result[5] += 0.3076923076923077;
          } else {
            result[0] += 0.0034965034965034965;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.039627039627039624;
            result[4] += 0.015151515151515152;
            result[5] += 0.9417249417249417;
          }
        }
      } else {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.031578947368421054;
            result[2] += 0;
            result[3] += 0.21052631578947367;
            result[4] += 0.031578947368421054;
            result[5] += 0.7263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.05;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.23333333333333334;
            result[4] += 0.08333333333333333;
            result[5] += 0.6333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.030303030303030304;
            result[3] += 0.7424242424242424;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          }
        }
      }
    }
  } else {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0.375;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.625;
            result[5] += 0;
          } else {
            result[0] += 0.002403846153846154;
            result[1] += 0.9903846153846154;
            result[2] += 0;
            result[3] += 0.004807692307692308;
            result[4] += 0.002403846153846154;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42bd0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0.6846275752773375;
            result[1] += 0.098256735340729;
            result[2] += 0.003169572107765452;
            result[3] += 0.014263074484944533;
            result[4] += 0.1901743264659271;
            result[5] += 0.009508716323296355;
          } else {
            result[0] += 0.13110539845758354;
            result[1] += 0.02313624678663239;
            result[2] += 0.07455012853470437;
            result[3] += 0.2879177377892031;
            result[4] += 0.1953727506426735;
            result[5] += 0.2879177377892031;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0.9844720496894411;
            result[1] += 0;
            result[2] += 0.0015527950310559007;
            result[3] += 0.009316770186335406;
            result[4] += 0.0031055900621118015;
            result[5] += 0.0015527950310559007;
          } else {
            result[0] += 0.6666666666666667;
            result[1] += 0;
            result[2] += 0.16666666666666669;
            result[3] += 0.07142857142857144;
            result[4] += 0.07142857142857144;
            result[5] += 0.02380952380952381;
          }
        }
      }
    } else {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.10810810810810811;
            result[3] += 0.6270270270270271;
            result[4] += 0.04864864864864865;
            result[5] += 0.21621621621621623;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4583333333333333;
            result[3] += 0.041666666666666664;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.24324324324324326;
            result[2] += 0.08108108108108109;
            result[3] += 0.24324324324324326;
            result[4] += 0.02702702702702703;
            result[5] += 0.40540540540540543;
          } else {
            result[0] += 0.020689655172413793;
            result[1] += 0;
            result[2] += 0.696551724137931;
            result[3] += 0.16551724137931034;
            result[4] += 0.006896551724137931;
            result[5] += 0.1103448275862069;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42cf0000))) ) ) {
            result[0] += 0.02631578947368421;
            result[1] += 0.05263157894736842;
            result[2] += 0.39473684210526316;
            result[3] += 0;
            result[4] += 0.2631578947368421;
            result[5] += 0.2631578947368421;
          } else {
            result[0] += 0.9047619047619048;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8480392156862745;
            result[3] += 0.14215686274509803;
            result[4] += 0;
            result[5] += 0.00980392156862745;
          } else {
            result[0] += 0.008928571428571428;
            result[1] += 0;
            result[2] += 0.9754464285714286;
            result[3] += 0.011160714285714286;
            result[4] += 0.002232142857142857;
            result[5] += 0.002232142857142857;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42780000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42340000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.02;
            result[2] += 0.1;
            result[3] += 0.08;
            result[4] += 0.36;
            result[5] += 0.44;
          }
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.39784946236559143;
            result[1] += 0.010752688172043013;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4408602150537635;
            result[5] += 0.15053763440860218;
          } else {
            result[0] += 0.0021810250817884407;
            result[1] += 0;
            result[2] += 0.0021810250817884407;
            result[3] += 0.07415485278080698;
            result[4] += 0.04580152671755725;
            result[5] += 0.8756815703380589;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0.043010752688172046;
            result[3] += 0.17204301075268819;
            result[4] += 0.12903225806451613;
            result[5] += 0.6236559139784946;
          } else {
            result[0] += 0.018633540372670808;
            result[1] += 0;
            result[2] += 0.043478260869565216;
            result[3] += 0.7391304347826086;
            result[4] += 0;
            result[5] += 0.19875776397515527;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42480000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.75;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9837209302325581;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.01627906976744186;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0.08;
            result[2] += 0.01;
            result[3] += 0.03;
            result[4] += 0.86;
            result[5] += 0.02;
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
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.27835051546391754;
            result[1] += 0.09278350515463918;
            result[2] += 0.10309278350515463;
            result[3] += 0.1134020618556701;
            result[4] += 0.13402061855670103;
            result[5] += 0.27835051546391754;
          } else {
            result[0] += 0.8833634719710669;
            result[1] += 0.0189873417721519;
            result[2] += 0.0081374321880651;
            result[3] += 0.020795660036166366;
            result[4] += 0.06148282097649186;
            result[5] += 0.007233273056057866;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0.02865329512893983;
            result[1] += 0.03724928366762178;
            result[2] += 0.2177650429799427;
            result[3] += 0.32664756446991405;
            result[4] += 0.08595988538681948;
            result[5] += 0.3037249283667622;
          } else {
            result[0] += 0.7647058823529412;
            result[1] += 0;
            result[2] += 0.20000000000000004;
            result[3] += 0.03529411764705883;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bd0000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0.25;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025;
            result[4] += 0;
            result[5] += 0.975;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0.5185185185185185;
            result[4] += 0;
            result[5] += 0.25925925925925924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3076923076923077;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6923076923076923;
          }
        }
      }
    } else {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.11363636363636363;
            result[3] += 0.8409090909090909;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4782608695652174;
            result[3] += 0.21739130434782608;
            result[4] += 0;
            result[5] += 0.30434782608695654;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0.11666666666666667;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0.6666666666666666;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.6666666666666666;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0070838252656434475;
            result[1] += 0;
            result[2] += 0.9279811097992916;
            result[3] += 0.06257378984651712;
            result[4] += 0;
            result[5] += 0.0023612750885478157;
          }
        }
      }
    }
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42dd0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0045662100456621;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9771689497716894;
            result[5] += 0.0182648401826484;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42580000))) ) ) {
            result[0] += 0.9230769230769231;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          } else {
            result[0] += 0.06060606060606061;
            result[1] += 0.015151515151515152;
            result[2] += 0;
            result[3] += 0.19696969696969696;
            result[4] += 0.3787878787878788;
            result[5] += 0.3484848484848485;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.019230769230769232;
            result[2] += 0;
            result[3] += 0.07692307692307693;
            result[4] += 0.6730769230769231;
            result[5] += 0.23076923076923078;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.025119617224880382;
            result[4] += 0.02631578947368421;
            result[5] += 0.9485645933014354;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.0625;
            result[4] += 0;
            result[5] += 0.9375;
          } else {
            result[0] += 0.009569377990430622;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5933014354066986;
            result[4] += 0;
            result[5] += 0.39712918660287083;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0.053763440860215055;
            result[2] += 0;
            result[3] += 0.07526881720430108;
            result[4] += 0.8172043010752689;
            result[5] += 0.053763440860215055;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0;
            result[1] += 0.9846153846153847;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.015384615384615385;
            result[5] += 0;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.018518518518518517;
            result[1] += 0.35185185185185186;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6111111111111112;
            result[5] += 0.018518518518518517;
          } else {
            result[0] += 0.863594470046083;
            result[1] += 0.009216589861751154;
            result[2] += 0.006451612903225807;
            result[3] += 0.028571428571428574;
            result[4] += 0.07096774193548389;
            result[5] += 0.021198156682027652;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.01444043321299639;
            result[1] += 0.010830324909747292;
            result[2] += 0.22382671480144403;
            result[3] += 0.38267148014440433;
            result[4] += 0.036101083032490974;
            result[5] += 0.33212996389891697;
          } else {
            result[0] += 0.6212121212121212;
            result[1] += 0.09090909090909091;
            result[2] += 0.20454545454545456;
            result[3] += 0.030303030303030304;
            result[4] += 0.045454545454545456;
            result[5] += 0.007575757575757576;
          }
        }
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.045454545454545456;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.7045454545454546;
          } else {
            result[0] += 0;
            result[1] += 0.8823529411764706;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0.058823529411764705;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.03773584905660377;
            result[3] += 0.6981132075471698;
            result[4] += 0;
            result[5] += 0.2641509433962264;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.16666666666666666;
            result[4] += 0.05555555555555555;
            result[5] += 0.2777777777777778;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c20000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.36363636363636365;
            result[5] += 0.5454545454545454;
          } else {
            result[0] += 0.07246376811594203;
            result[1] += 0.043478260869565216;
            result[2] += 0.6521739130434783;
            result[3] += 0.13043478260869565;
            result[4] += 0;
            result[5] += 0.10144927536231885;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.041666666666666664;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.46296296296296297;
            result[3] += 0.46296296296296297;
            result[4] += 0;
            result[5] += 0.07407407407407407;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.8333333333333334;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0;
            result[1] += 0.0044444444444444444;
            result[2] += 0.8311111111111111;
            result[3] += 0.14666666666666667;
            result[4] += 0;
            result[5] += 0.017777777777777778;
          } else {
            result[0] += 0.008823529411764706;
            result[1] += 0;
            result[2] += 0.9632352941176471;
            result[3] += 0.022058823529411766;
            result[4] += 0;
            result[5] += 0.0058823529411764705;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x428d0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42e50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9824561403508771;
            result[5] += 0.017543859649122806;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.95;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.04838709677419355;
            result[4] += 0.3548387096774194;
            result[5] += 0.5967741935483871;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06060606060606061;
            result[3] += 0;
            result[4] += 0.6060606060606061;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.05048076923076923;
            result[4] += 0.03245192307692308;
            result[5] += 0.9170673076923077;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.04545454545454546;
            result[1] += 0.13636363636363638;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6818181818181819;
            result[5] += 0.13636363636363638;
          } else {
            result[0] += 0.0064516129032258064;
            result[1] += 0.025806451612903226;
            result[2] += 0.04516129032258064;
            result[3] += 0.5612903225806452;
            result[4] += 0;
            result[5] += 0.36129032258064514;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.12871287128712872;
            result[1] += 0.2524752475247525;
            result[2] += 0;
            result[3] += 0.039603960396039604;
            result[4] += 0.5396039603960396;
            result[5] += 0.039603960396039604;
          } else {
            result[0] += 0.8349673202614379;
            result[1] += 0.01715686274509804;
            result[2] += 0.0024509803921568627;
            result[3] += 0.03104575163398693;
            result[4] += 0.06209150326797386;
            result[5] += 0.05228758169934641;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a80000))) ) ) {
            result[0] += 0.01098901098901099;
            result[1] += 0.003663003663003663;
            result[2] += 0.12454212454212454;
            result[3] += 0.43223443223443225;
            result[4] += 0.02197802197802198;
            result[5] += 0.4065934065934066;
          } else {
            result[0] += 0.5;
            result[1] += 0.10185185185185185;
            result[2] += 0.24074074074074073;
            result[3] += 0.07407407407407407;
            result[4] += 0.07407407407407407;
            result[5] += 0.009259259259259259;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cb0000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.045454545454545456;
            result[4] += 0.11363636363636363;
            result[5] += 0.8409090909090909;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.875;
            result[4] += 0;
            result[5] += 0.125;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0.022727272727272728;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.2727272727272727;
            result[4] += 0.11363636363636363;
            result[5] += 0.45454545454545453;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09523809523809523;
            result[3] += 0.8412698412698413;
            result[4] += 0;
            result[5] += 0.06349206349206349;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.05194805194805195;
            result[2] += 0.37662337662337664;
            result[3] += 0.4805194805194805;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7692307692307693;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0.15384615384615385;
          }
        }
      }
    } else {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ed0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42bd0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0.05263157894736842;
            result[1] += 0;
            result[2] += 0.631578947368421;
            result[3] += 0.15789473684210525;
            result[4] += 0;
            result[5] += 0.15789473684210525;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6869565217391305;
            result[3] += 0.26956521739130435;
            result[4] += 0;
            result[5] += 0.043478260869565216;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.019011406844106463;
            result[1] += 0;
            result[2] += 0.8783269961977186;
            result[3] += 0.09885931558935361;
            result[4] += 0;
            result[5] += 0.0038022813688212928;
          } else {
            result[0] += 0.0037174721189591076;
            result[1] += 0;
            result[2] += 0.9814126394052045;
            result[3] += 0.01486988847583643;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.009345794392523364;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9906542056074766;
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
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
            result[0] += 0;
            result[1] += 0.02631578947368421;
            result[2] += 0.07894736842105263;
            result[3] += 0;
            result[4] += 0.7894736842105263;
            result[5] += 0.10526315789473684;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7297297297297297;
            result[5] += 0.2702702702702703;
          } else {
            result[0] += 0.01650943396226415;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.055424528301886794;
            result[4] += 0.03773584905660377;
            result[5] += 0.8903301886792453;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.3548387096774194;
            result[1] += 0.24731182795698925;
            result[2] += 0;
            result[3] += 0.06451612903225806;
            result[4] += 0.11827956989247312;
            result[5] += 0.21505376344086022;
          } else {
            result[0] += 0.004032258064516129;
            result[1] += 0;
            result[2] += 0.016129032258064516;
            result[3] += 0.6008064516129032;
            result[4] += 0.020161290322580645;
            result[5] += 0.3588709677419355;
          }
        }
      }
    } else {
      if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.06341463414634146;
            result[1] += 0.36097560975609755;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5707317073170731;
            result[5] += 0.004878048780487805;
          } else {
            result[0] += 0.8889845094664373;
            result[1] += 0.011187607573149743;
            result[2] += 0.0017211703958691913;
            result[3] += 0.017211703958691912;
            result[4] += 0.06798623063683307;
            result[5] += 0.012908777969018934;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.02120141342756184;
            result[1] += 0.02120141342756184;
            result[2] += 0.07420494699646643;
            result[3] += 0.4134275618374558;
            result[4] += 0.07420494699646643;
            result[5] += 0.3957597173144876;
          } else {
            result[0] += 0.24022346368715086;
            result[1] += 0.005586592178770951;
            result[2] += 0.5195530726256984;
            result[3] += 0.10055865921787711;
            result[4] += 0.033519553072625705;
            result[5] += 0.10055865921787711;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428a0000))) ) ) {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42cd0000))) ) ) {
            result[0] += 0.0024813895781637717;
            result[1] += 0.9975186104218362;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.25;
          }
        } else {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0.05;
            result[2] += 0;
            result[3] += 0.9;
            result[4] += 0;
            result[5] += 0.05;
          } else {
            result[0] += 0.04;
            result[1] += 0.02;
            result[2] += 0.28;
            result[3] += 0.32;
            result[4] += 0;
            result[5] += 0.34;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.4444444444444444;
            result[1] += 0.1111111111111111;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9411764705882353;
            result[3] += 0.058823529411764705;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a00000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0.8235294117647058;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7857142857142857;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.5714285714285715;
            result[1] += 0;
            result[2] += 0.14285714285714288;
            result[3] += 0.14285714285714288;
            result[4] += 0;
            result[5] += 0.14285714285714288;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8333333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0.8;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8973509933774835;
            result[3] += 0.09602649006622517;
            result[4] += 0;
            result[5] += 0.006622516556291391;
          } else {
            result[0] += 0.012131715771230503;
            result[1] += 0;
            result[2] += 0.9705372616984402;
            result[3] += 0.01733102253032929;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x427a0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42da0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x427a0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42960000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.23076923076923078;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.35294117647058826;
            result[5] += 0.6470588235294118;
          }
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
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42340000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.029850746268656716;
            result[4] += 0.29850746268656714;
            result[5] += 0.6716417910447762;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004155124653739612;
            result[3] += 0.02631578947368421;
            result[4] += 0.009695290858725761;
            result[5] += 0.9598337950138505;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9230769230769231;
            result[1] += 0.05128205128205128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02564102564102564;
            result[5] += 0;
          } else {
            result[0] += 0.03571428571428571;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7857142857142857;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.007751937984496124;
            result[2] += 0;
            result[3] += 0.20155038759689922;
            result[4] += 0.07751937984496124;
            result[5] += 0.7131782945736435;
          } else {
            result[0] += 0;
            result[1] += 0.004651162790697674;
            result[2] += 0.023255813953488372;
            result[3] += 0.6372093023255814;
            result[4] += 0.009302325581395349;
            result[5] += 0.32558139534883723;
          }
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.020618556701030927;
            result[1] += 0.08247422680412371;
            result[2] += 0;
            result[3] += 0.030927835051546393;
            result[4] += 0.865979381443299;
            result[5] += 0;
          } else {
            result[0] += 0.016666666666666666;
            result[1] += 0.7833333333333333;
            result[2] += 0;
            result[3] += 0.016666666666666666;
            result[4] += 0.16666666666666666;
            result[5] += 0.016666666666666666;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0.993103448275862;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006896551724137931;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.9391304347826088;
            result[1] += 0.008695652173913045;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.008695652173913045;
            result[5] += 0.04347826086956522;
          } else {
            result[0] += 0.056818181818181816;
            result[1] += 0.056818181818181816;
            result[2] += 0.06818181818181818;
            result[3] += 0.3977272727272727;
            result[4] += 0.21022727272727273;
            result[5] += 0.21022727272727273;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.10204081632653061;
            result[1] += 0.40816326530612246;
            result[2] += 0;
            result[3] += 0.04081632653061224;
            result[4] += 0.42857142857142855;
            result[5] += 0.02040816326530612;
          } else {
            result[0] += 0.9063116370808679;
            result[1] += 0.004930966469428009;
            result[2] += 0.013806706114398423;
            result[3] += 0.02071005917159764;
            result[4] += 0.042406311637080876;
            result[5] += 0.01183431952662722;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.008547008547008548;
            result[1] += 0;
            result[2] += 0.05128205128205128;
            result[3] += 0.3418803418803419;
            result[4] += 0;
            result[5] += 0.5982905982905983;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.02763819095477387;
            result[1] += 0.01256281407035176;
            result[2] += 0.6005025125628141;
            result[3] += 0.27386934673366836;
            result[4] += 0.01256281407035176;
            result[5] += 0.0728643216080402;
          } else {
            result[0] += 0.8076923076923077;
            result[1] += 0;
            result[2] += 0.11538461538461539;
            result[3] += 0;
            result[4] += 0.07692307692307693;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0.42857142857142855;
          } else {
            result[0] += 0.002805049088359046;
            result[1] += 0;
            result[2] += 0.9691444600280504;
            result[3] += 0.025245441795231416;
            result[4] += 0;
            result[5] += 0.002805049088359046;
          }
        }
      }
    }
  }
  if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b30000))) ) ) {
    if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428d0000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9942196531791907;
            result[5] += 0.005780346820809248;
          }
        } else {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42990000))) ) ) {
            result[0] += 0.07317073170731707;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14634146341463414;
            result[5] += 0.7804878048780488;
          } else {
            result[0] += 0.06349206349206349;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.06349206349206349;
            result[4] += 0.6984126984126984;
            result[5] += 0.1746031746031746;
          }
        }
      } else {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c80000))) ) ) {
            result[0] += 0;
            result[1] += 0.034482758620689655;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9655172413793104;
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
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x425e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.08333333333333333;
            result[4] += 0.5;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42420000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.125;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0.09523809523809523;
            result[4] += 0.8571428571428571;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03529411764705882;
            result[4] += 0.026143790849673203;
            result[5] += 0.938562091503268;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.00975609756097561;
            result[3] += 0.2731707317073171;
            result[4] += 0.05365853658536585;
            result[5] += 0.6634146341463415;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0.08695652173913043;
            result[1] += 0;
            result[2] += 0.021739130434782608;
            result[3] += 0.06521739130434782;
            result[4] += 0.6304347826086957;
            result[5] += 0.1956521739130435;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.019230769230769232;
            result[3] += 0.3076923076923077;
            result[4] += 0.057692307692307696;
            result[5] += 0.6153846153846154;
          }
        }
      }
    }
  } else {
    if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bb0000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.09090909090909091;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.90625;
            result[5] += 0.09375;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.0022522522522522522;
            result[1] += 0.9707207207207207;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.02702702702702703;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.9852941176470589;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.014705882352941176;
            result[5] += 0;
          } else {
            result[0] += 0.024896265560165973;
            result[1] += 0.06224066390041494;
            result[2] += 0.024896265560165973;
            result[3] += 0.5186721991701245;
            result[4] += 0.029045643153526972;
            result[5] += 0.34024896265560167;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.11290322580645162;
            result[1] += 0.32258064516129037;
            result[2] += 0.09677419354838711;
            result[3] += 0.048387096774193554;
            result[4] += 0.40322580645161293;
            result[5] += 0.01612903225806452;
          } else {
            result[0] += 0.8757932910244788;
            result[1] += 0.012692656391659113;
            result[2] += 0.020852221214868544;
            result[3] += 0.02991840435176791;
            result[4] += 0.03626473254759747;
            result[5] += 0.02447869446962829;
          }
        }
      }
    } else {
      if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13450292397660818;
            result[3] += 0.6140350877192983;
            result[4] += 0;
            result[5] += 0.25146198830409355;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5909090909090909;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.22727272727272727;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42be0000))) ) ) {
            result[0] += 0.014134275618374558;
            result[1] += 0;
            result[2] += 0.7773851590106007;
            result[3] += 0.18021201413427562;
            result[4] += 0;
            result[5] += 0.028268551236749116;
          } else {
            result[0] += 0.7666666666666667;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0.06666666666666667;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5675675675675675;
            result[3] += 0.2972972972972973;
            result[4] += 0;
            result[5] += 0.13513513513513514;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.14814814814814814;
            result[1] += 0;
            result[2] += 0.7037037037037037;
            result[3] += 0.037037037037037035;
            result[4] += 0;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.0030816640986132513;
            result[1] += 0;
            result[2] += 0.9691833590138675;
            result[3] += 0.02773497688751926;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
          } else {
            result[0] += 0.021505376344086023;
            result[1] += 0.005376344086021506;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9516129032258065;
            result[5] += 0.021505376344086023;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42660000))) ) ) {
            result[0] += 0.9154929577464789;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08450704225352113;
            result[5] += 0;
          } else {
            result[0] += 0.058823529411764705;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.45098039215686275;
            result[5] += 0.49019607843137253;
          }
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42620000))) ) ) {
            result[0] += 0;
            result[1] += 0.02857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8857142857142857;
            result[5] += 0.08571428571428572;
          } else {
            result[0] += 0.001001001001001001;
            result[1] += 0.003003003003003003;
            result[2] += 0.011011011011011011;
            result[3] += 0.08008008008008008;
            result[4] += 0.06806806806806807;
            result[5] += 0.8368368368368369;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0.012658227848101266;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3037974683544304;
            result[4] += 0.0379746835443038;
            result[5] += 0.6455696202531646;
          } else {
            result[0] += 0.03389830508474576;
            result[1] += 0;
            result[2] += 0.025423728813559324;
            result[3] += 0.7372881355932204;
            result[4] += 0.05084745762711865;
            result[5] += 0.15254237288135594;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42c70000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.05970149253731343;
            result[1] += 0.014925373134328358;
            result[2] += 0.014925373134328358;
            result[3] += 0;
            result[4] += 0.8656716417910447;
            result[5] += 0.04477611940298507;
          }
        } else {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.9921259842519685;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.007874015748031496;
            result[5] += 0;
          } else {
            result[0] += 0.5714285714285714;
            result[1] += 0.42857142857142855;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.07801418439716312;
            result[1] += 0.3262411347517731;
            result[2] += 0.06382978723404255;
            result[3] += 0.14184397163120568;
            result[4] += 0.3191489361702128;
            result[5] += 0.07092198581560284;
          } else {
            result[0] += 0.9120580235720762;
            result[1] += 0.00271985494106981;
            result[2] += 0.00543970988213962;
            result[3] += 0.0271985494106981;
            result[4] += 0.028105167724388036;
            result[5] += 0.02447869446962829;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42c50000))) ) ) {
            result[0] += 0.006289308176100629;
            result[1] += 0;
            result[2] += 0.16981132075471697;
            result[3] += 0.2893081761006289;
            result[4] += 0.025157232704402517;
            result[5] += 0.5094339622641509;
          } else {
            result[0] += 0.5932203389830509;
            result[1] += 0;
            result[2] += 0.33898305084745767;
            result[3] += 0.016949152542372885;
            result[4] += 0.050847457627118654;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0.4;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.04;
            result[2] += 0.013333333333333334;
            result[3] += 0.08;
            result[4] += 0.06666666666666667;
            result[5] += 0.8;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2608695652173913;
            result[3] += 0.2608695652173913;
            result[4] += 0;
            result[5] += 0.4782608695652174;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.109375;
            result[3] += 0.8125;
            result[4] += 0;
            result[5] += 0.078125;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6829268292682927;
            result[3] += 0.3170731707317073;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2173913043478261;
            result[3] += 0.47826086956521746;
            result[4] += 0.08695652173913045;
            result[5] += 0.2173913043478261;
          } else {
            result[0] += 0.06315789473684211;
            result[1] += 0.010526315789473684;
            result[2] += 0.7789473684210526;
            result[3] += 0.06315789473684211;
            result[4] += 0;
            result[5] += 0.08421052631578947;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.7659574468085106;
            result[1] += 0.06382978723404255;
            result[2] += 0.10638297872340426;
            result[3] += 0;
            result[4] += 0.06382978723404255;
            result[5] += 0;
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
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.42857142857142855;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.14285714285714285;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8461538461538461;
            result[3] += 0.15384615384615385;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.42857142857142855;
            result[1] += 0;
            result[2] += 0.5714285714285714;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006349206349206349;
            result[1] += 0.0015873015873015873;
            result[2] += 0.9603174603174603;
            result[3] += 0.031746031746031744;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9861111111111112;
            result[5] += 0.013888888888888888;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0.2857142857142857;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.25;
            result[4] += 0.1;
            result[5] += 0.6;
          }
        }
      } else {
        if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42680000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.95;
            result[5] += 0.05;
          } else {
            result[0] += 0.7384615384615385;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.015384615384615385;
            result[4] += 0.23076923076923078;
            result[5] += 0.015384615384615385;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0011074197120708748;
            result[2] += 0;
            result[3] += 0.059800664451827246;
            result[4] += 0.04318936877076412;
            result[5] += 0.8959025470653378;
          } else {
            result[0] += 0.003816793893129771;
            result[1] += 0.003816793893129771;
            result[2] += 0.007633587786259542;
            result[3] += 0.3931297709923664;
            result[4] += 0.05725190839694656;
            result[5] += 0.5343511450381679;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.9459459459459459;
            result[2] += 0.009009009009009009;
            result[3] += 0;
            result[4] += 0.04504504504504504;
            result[5] += 0;
          } else {
            result[0] += 0.10309278350515463;
            result[1] += 0.041237113402061855;
            result[2] += 0.010309278350515464;
            result[3] += 0;
            result[4] += 0.845360824742268;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.8799298860648553;
            result[1] += 0.008764241893076249;
            result[2] += 0.0008764241893076249;
            result[3] += 0.014899211218229623;
            result[4] += 0.07887817703768624;
            result[5] += 0.016652059596844872;
          } else {
            result[0] += 0.19256756756756757;
            result[1] += 0.0033783783783783786;
            result[2] += 0.20270270270270271;
            result[3] += 0.22972972972972974;
            result[4] += 0.05067567567567568;
            result[5] += 0.32094594594594594;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42aa0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0.005050505050505051;
            result[1] += 0.98989898989899;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.005050505050505051;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42ba0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08108108108108109;
            result[3] += 0.04054054054054054;
            result[4] += 0.04054054054054054;
            result[5] += 0.8378378378378378;
          } else {
            result[0] += 0.16666666666666669;
            result[1] += 0.6666666666666667;
            result[2] += 0;
            result[3] += 0.16666666666666669;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42cd0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42870000))) ) ) {
            result[0] += 0.07692307692307693;
            result[1] += 0.15384615384615385;
            result[2] += 0.46153846153846156;
            result[3] += 0;
            result[4] += 0.15384615384615385;
            result[5] += 0.15384615384615385;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06504065040650407;
            result[3] += 0.7154471544715447;
            result[4] += 0;
            result[5] += 0.21951219512195122;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.375;
            result[4] += 0.125;
            result[5] += 0.125;
          } else {
            result[0] += 0.04347826086956522;
            result[1] += 0;
            result[2] += 0.9130434782608696;
            result[3] += 0.04347826086956522;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.7777777777777778;
            result[4] += 0;
            result[5] += 0.022222222222222223;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.875;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8378378378378378;
            result[3] += 0.13513513513513514;
            result[4] += 0;
            result[5] += 0.02702702702702703;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2631578947368421;
            result[3] += 0.21052631578947367;
            result[4] += 0;
            result[5] += 0.5263157894736842;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.6666666666666666;
            result[1] += 0.08333333333333333;
            result[2] += 0.1388888888888889;
            result[3] += 0;
            result[4] += 0.027777777777777776;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0.004694835680751174;
            result[1] += 0;
            result[2] += 0.9330985915492958;
            result[3] += 0.05985915492957746;
            result[4] += 0;
            result[5] += 0.002347417840375587;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42970000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0.01937984496124031;
            result[1] += 0.007751937984496124;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9224806201550387;
            result[5] += 0.050387596899224806;
          } else {
            result[0] += 0;
            result[1] += 0.9;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.9333333333333333;
            result[1] += 0.013333333333333334;
            result[2] += 0;
            result[3] += 0.013333333333333334;
            result[4] += 0.04;
            result[5] += 0;
          } else {
            result[0] += 0.1935483870967742;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.06451612903225806;
            result[4] += 0.22580645161290322;
            result[5] += 0.4838709677419355;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0.4583333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.0027100271002710027;
            result[2] += 0.0027100271002710027;
            result[3] += 0.028455284552845527;
            result[4] += 0.012195121951219513;
            result[5] += 0.9539295392953929;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.0038314176245210726;
            result[3] += 0.10344827586206896;
            result[4] += 0.12643678160919541;
            result[5] += 0.7662835249042146;
          } else {
            result[0] += 0.030612244897959183;
            result[1] += 0.03316326530612245;
            result[2] += 0.002551020408163265;
            result[3] += 0.5051020408163265;
            result[4] += 0.012755102040816327;
            result[5] += 0.41581632653061223;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0684931506849315;
            result[1] += 0.0958904109589041;
            result[2] += 0.0410958904109589;
            result[3] += 0;
            result[4] += 0.6712328767123288;
            result[5] += 0.1232876712328767;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42c70000))) ) ) {
            result[0] += 0;
            result[1] += 0.989010989010989;
            result[2] += 0;
            result[3] += 0.002197802197802198;
            result[4] += 0.008791208791208791;
            result[5] += 0;
          } else {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.15384615384615385;
            result[1] += 0.5512820512820513;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.2948717948717949;
            result[5] += 0;
          } else {
            result[0] += 0.8799630655586332;
            result[1] += 0.012927054478301012;
            result[2] += 0.008310249307479223;
            result[3] += 0.03139427516158817;
            result[4] += 0.041551246537396114;
            result[5] += 0.025854108956602024;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.03389830508474576;
            result[1] += 0;
            result[2] += 0.384180790960452;
            result[3] += 0.3502824858757062;
            result[4] += 0.005649717514124294;
            result[5] += 0.22598870056497175;
          } else {
            result[0] += 0.6341463414634146;
            result[1] += 0.08536585365853659;
            result[2] += 0.10975609756097561;
            result[3] += 0.012195121951219513;
            result[4] += 0.15853658536585366;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b20000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9583333333333334;
            result[4] += 0;
            result[5] += 0.041666666666666664;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.14285714285714285;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.37142857142857144;
            result[3] += 0.5142857142857142;
            result[4] += 0;
            result[5] += 0.11428571428571428;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42da0000))) ) ) {
            result[0] += 0.019230769230769232;
            result[1] += 0;
            result[2] += 0.7948717948717948;
            result[3] += 0.1858974358974359;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a60000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.5833333333333334;
            result[4] += 0;
            result[5] += 0.08333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8246753246753247;
            result[3] += 0.12987012987012986;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9863013698630136;
            result[3] += 0.0136986301369863;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7142857142857143;
            result[3] += 0.2857142857142857;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0038535645472061657;
            result[1] += 0;
            result[2] += 0.9845857418111753;
            result[3] += 0.011560693641618497;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0.004761904761904762;
            result[1] += 0.009523809523809525;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9571428571428572;
            result[5] += 0.02857142857142857;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.03614457831325301;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5301204819277109;
            result[5] += 0.43373493975903615;
          } else {
            result[0] += 0.8333333333333334;
            result[1] += 0.037037037037037035;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.07407407407407407;
            result[5] += 0.05555555555555555;
          }
        }
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.002717391304347826;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.033967391304347824;
            result[4] += 0.04483695652173913;
            result[5] += 0.9184782608695652;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4418604651162791;
            result[4] += 0.011627906976744186;
            result[5] += 0.5465116279069767;
          }
        } else {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.09411764705882353;
            result[4] += 0.27058823529411763;
            result[5] += 0.6352941176470588;
          } else {
            result[0] += 0.023364485981308414;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.691588785046729;
            result[4] += 0.01401869158878505;
            result[5] += 0.2710280373831776;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cf0000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42240000))) ) ) {
            result[0] += 0;
            result[1] += 0.9428571428571428;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05714285714285714;
            result[5] += 0;
          } else {
            result[0] += 0.12264150943396226;
            result[1] += 0.14150943396226415;
            result[2] += 0;
            result[3] += 0.009433962264150943;
            result[4] += 0.6839622641509434;
            result[5] += 0.04245283018867924;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.847922192749779;
            result[1] += 0.013262599469496022;
            result[2] += 0.009725906277630416;
            result[3] += 0.03183023872679045;
            result[4] += 0.05305039787798409;
            result[5] += 0.04420866489832007;
          } else {
            result[0] += 0.16271186440677965;
            result[1] += 0.013559322033898305;
            result[2] += 0.30847457627118646;
            result[3] += 0.26440677966101694;
            result[4] += 0.04745762711864407;
            result[5] += 0.2033898305084746;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x426e0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c60000))) ) ) {
            result[0] += 0.09090909090909091;
            result[1] += 0.9090909090909091;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
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
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a40000))) ) ) {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ab0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a00000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9;
            result[5] += 0.1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1056338028169014;
            result[3] += 0.5422535211267606;
            result[4] += 0;
            result[5] += 0.352112676056338;
          }
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.25;
            result[4] += 0.25;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32142857142857145;
            result[3] += 0.6071428571428571;
            result[4] += 0;
            result[5] += 0.07142857142857142;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0.010869565217391304;
            result[2] += 0.7282608695652174;
            result[3] += 0.21739130434782608;
            result[4] += 0.010869565217391304;
            result[5] += 0.03260869565217391;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42970000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.25;
            result[5] += 0.75;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42db0000))) ) ) {
            result[0] += 0.024390243902439025;
            result[1] += 0.024390243902439025;
            result[2] += 0.36585365853658536;
            result[3] += 0.024390243902439025;
            result[4] += 0.04878048780487805;
            result[5] += 0.5121951219512195;
          } else {
            result[0] += 0.7857142857142857;
            result[1] += 0;
            result[2] += 0.21428571428571427;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6333333333333333;
            result[3] += 0.36666666666666664;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8925619834710744;
            result[3] += 0.07851239669421488;
            result[4] += 0;
            result[5] += 0.028925619834710745;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9858870967741935;
            result[3] += 0.014112903225806451;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b30000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.008888888888888889;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9733333333333334;
            result[5] += 0.017777777777777778;
          } else {
            result[0] += 0;
            result[1] += 0.09230769230769231;
            result[2] += 0;
            result[3] += 0.1076923076923077;
            result[4] += 0.4307692307692308;
            result[5] += 0.36923076923076925;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.004437869822485207;
            result[3] += 0.01775147928994083;
            result[4] += 0.028106508875739646;
            result[5] += 0.9497041420118343;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.08443271767810026;
            result[1] += 0.0158311345646438;
            result[2] += 0.0316622691292876;
            result[3] += 0.1662269129287599;
            result[4] += 0.07387862796833773;
            result[5] += 0.6279683377308707;
          } else {
            result[0] += 0.007462686567164179;
            result[1] += 0;
            result[2] += 0.05223880597014925;
            result[3] += 0.6268656716417911;
            result[4] += 0.014925373134328358;
            result[5] += 0.29850746268656714;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42480000))) ) ) {
            result[0] += 0;
            result[1] += 0.8888888888888888;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.05555555555555555;
            result[5] += 0.05555555555555555;
          } else {
            result[0] += 0.04597701149425287;
            result[1] += 0.011494252873563218;
            result[2] += 0;
            result[3] += 0.011494252873563218;
            result[4] += 0.9080459770114943;
            result[5] += 0.022988505747126436;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0.2;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0.3;
            result[5] += 0;
          } else {
            result[0] += 0.0022988505747126436;
            result[1] += 0.9770114942528736;
            result[2] += 0;
            result[3] += 0.016091954022988506;
            result[4] += 0.004597701149425287;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.19480519480519481;
            result[1] += 0.35064935064935066;
            result[2] += 0;
            result[3] += 0.012987012987012988;
            result[4] += 0.4025974025974026;
            result[5] += 0.03896103896103896;
          } else {
            result[0] += 0.8768689533861038;
            result[1] += 0.009674582233948988;
            result[2] += 0.008795074758135445;
            result[3] += 0.023746701846965697;
            result[4] += 0.06948109058927;
            result[5] += 0.011433597185576077;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.03888888888888889;
            result[1] += 0.005555555555555556;
            result[2] += 0.08888888888888889;
            result[3] += 0.4388888888888889;
            result[4] += 0.05555555555555555;
            result[5] += 0.37222222222222223;
          } else {
            result[0] += 0.6966292134831461;
            result[1] += 0.011235955056179775;
            result[2] += 0.12359550561797752;
            result[3] += 0.056179775280898875;
            result[4] += 0.0449438202247191;
            result[5] += 0.06741573033707865;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42920000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0.7777777777777778;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0.625;
            result[2] += 0.375;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03636363636363636;
            result[4] += 0.09090909090909091;
            result[5] += 0.8727272727272727;
          } else {
            result[0] += 0.15;
            result[1] += 0;
            result[2] += 0.05;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0.4;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.8333333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13664596273291926;
            result[3] += 0.6894409937888198;
            result[4] += 0.024844720496894408;
            result[5] += 0.14906832298136646;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42bb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9090909090909091;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7659574468085107;
            result[3] += 0.1914893617021277;
            result[4] += 0;
            result[5] += 0.04255319148936171;
          }
        }
      }
    } else {
      if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42cb0000))) ) ) {
          if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42e30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5212765957446809;
            result[3] += 0.4787234042553192;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.95;
            result[3] += 0.05;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7738095238095238;
            result[3] += 0.2261904761904762;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9848484848484849;
            result[3] += 0.015151515151515152;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42f10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.7777777777777778;
            result[1] += 0;
            result[2] += 0.2222222222222222;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8883495145631068;
            result[3] += 0.08737864077669903;
            result[4] += 0;
            result[5] += 0.024271844660194174;
          } else {
            result[0] += 0.002136752136752137;
            result[1] += 0;
            result[2] += 0.9871794871794872;
            result[3] += 0.008547008547008548;
            result[4] += 0;
            result[5] += 0.002136752136752137;
          }
        }
      }
    }
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42930000))) ) ) {
    if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42870000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42850000))) ) ) {
            result[0] += 0.0036363636363636364;
            result[1] += 0.007272727272727273;
            result[2] += 0;
            result[3] += 0.0036363636363636364;
            result[4] += 0.9490909090909091;
            result[5] += 0.03636363636363636;
          } else {
            result[0] += 0;
            result[1] += 0.03225806451612903;
            result[2] += 0;
            result[3] += 0.0967741935483871;
            result[4] += 0.5161290322580645;
            result[5] += 0.3548387096774194;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.6666666666666666;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.9090909090909092;
            result[2] += 0;
            result[3] += 0.04545454545454546;
            result[4] += 0.04545454545454546;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0.06666666666666667;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4666666666666667;
            result[4] += 0.4;
            result[5] += 0.06666666666666667;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.0035087719298245615;
            result[1] += 0.0011695906432748538;
            result[2] += 0;
            result[3] += 0.031578947368421054;
            result[4] += 0.04093567251461988;
            result[5] += 0.9228070175438596;
          } else {
            result[0] += 0.023809523809523808;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6190476190476191;
            result[4] += 0;
            result[5] += 0.35714285714285715;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42900000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.022222222222222223;
            result[4] += 0.8666666666666667;
            result[5] += 0.1111111111111111;
          } else {
            result[0] += 0.009174311926605505;
            result[1] += 0;
            result[2] += 0.1834862385321101;
            result[3] += 0.22018348623853212;
            result[4] += 0.06422018348623854;
            result[5] += 0.5229357798165137;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.6;
            result[4] += 0;
            result[5] += 0.4;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14814814814814814;
            result[4] += 0;
            result[5] += 0.8518518518518519;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42c30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8925619834710744;
            result[4] += 0;
            result[5] += 0.10743801652892562;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.45454545454545453;
            result[3] += 0.09090909090909091;
            result[4] += 0;
            result[5] += 0.45454545454545453;
          }
        }
      }
    }
  } else {
    if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x425a0000))) ) ) {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
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
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42810000))) ) ) {
            result[0] += 0.08333333333333333;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4166666666666667;
            result[5] += 0;
          } else {
            result[0] += 0.09615384615384616;
            result[1] += 0.8461538461538461;
            result[2] += 0.019230769230769232;
            result[3] += 0.038461538461538464;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.08904109589041095;
            result[1] += 0.0958904109589041;
            result[2] += 0.0273972602739726;
            result[3] += 0.0684931506849315;
            result[4] += 0.6301369863013698;
            result[5] += 0.08904109589041095;
          } else {
            result[0] += 0.8794178794178796;
            result[1] += 0.022869022869022874;
            result[2] += 0.0020790020790020796;
            result[3] += 0.027027027027027035;
            result[4] += 0.04989604989604991;
            result[5] += 0.018711018711018716;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0.07987220447284345;
            result[1] += 0.0926517571884984;
            result[2] += 0.04153354632587859;
            result[3] += 0.3226837060702875;
            result[4] += 0.12140575079872204;
            result[5] += 0.34185303514376997;
          } else {
            result[0] += 0.01834862385321101;
            result[1] += 0;
            result[2] += 0.5779816513761468;
            result[3] += 0.3394495412844037;
            result[4] += 0;
            result[5] += 0.06422018348623854;
          }
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.9618441971383148;
            result[1] += 0.006359300476947536;
            result[2] += 0.019077901430842606;
            result[3] += 0;
            result[4] += 0.009538950715421303;
            result[5] += 0.003179650238473768;
          } else {
            result[0] += 0.2641509433962264;
            result[1] += 0.03773584905660377;
            result[2] += 0.27358490566037735;
            result[3] += 0.09433962264150944;
            result[4] += 0.03773584905660377;
            result[5] += 0.29245283018867924;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.32558139534883723;
            result[3] += 0.4418604651162791;
            result[4] += 0;
            result[5] += 0.23255813953488372;
          } else {
            result[0] += 0.02330508474576271;
            result[1] += 0;
            result[2] += 0.8760593220338981;
            result[3] += 0.09216101694915253;
            result[4] += 0.0021186440677966097;
            result[5] += 0.006355932203389829;
          }
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c60000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.023728813559322038;
            result[1] += 0.006779661016949153;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.952542372881356;
            result[5] += 0.016949152542372885;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5405405405405406;
            result[5] += 0.4594594594594595;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x428e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7142857142857143;
            result[5] += 0.2857142857142857;
          } else {
            result[0] += 0;
            result[1] += 0.88;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.12;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0.125;
            result[4] += 0.625;
            result[5] += 0.125;
          } else {
            result[0] += 0.007352941176470588;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.049019607843137254;
            result[4] += 0.028186274509803922;
            result[5] += 0.9154411764705882;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.9146341463414634;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.08536585365853659;
            result[5] += 0;
          } else {
            result[0] += 0.036458333333333336;
            result[1] += 0;
            result[2] += 0.109375;
            result[3] += 0.19270833333333334;
            result[4] += 0.14583333333333334;
            result[5] += 0.515625;
          }
        }
      }
    } else {
      if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x428f0000))) ) ) {
            result[0] += 0.17587939698492464;
            result[1] += 0.3969849246231156;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4120603015075377;
            result[5] += 0.01507537688442211;
          } else {
            result[0] += 0.8629629629629629;
            result[1] += 0.012962962962962963;
            result[2] += 0.010185185185185186;
            result[3] += 0.05;
            result[4] += 0.032407407407407406;
            result[5] += 0.03148148148148148;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42bf0000))) ) ) {
            result[0] += 0.012755102040816327;
            result[1] += 0.02040816326530612;
            result[2] += 0.015306122448979591;
            result[3] += 0.5076530612244898;
            result[4] += 0.07142857142857142;
            result[5] += 0.37244897959183676;
          } else {
            result[0] += 0.41847826086956524;
            result[1] += 0;
            result[2] += 0.45108695652173914;
            result[3] += 0.07608695652173914;
            result[4] += 0.016304347826086956;
            result[5] += 0.03804347826086957;
          }
        }
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
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x428c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.038461538461538464;
            result[3] += 0.11538461538461539;
            result[4] += 0.038461538461538464;
            result[5] += 0.8076923076923077;
          }
        } else {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42af0000))) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0.2857142857142857;
            result[4] += 0.047619047619047616;
            result[5] += 0.6190476190476191;
          } else {
            result[0] += 0;
            result[1] += 0.04285714285714286;
            result[2] += 0.18571428571428572;
            result[3] += 0.6142857142857143;
            result[4] += 0;
            result[5] += 0.15714285714285714;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42bf0000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42d90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.42857142857142855;
            result[4] += 0;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0.5;
          } else {
            result[0] += 0;
            result[1] += 0.02631578947368421;
            result[2] += 0.868421052631579;
            result[3] += 0.05263157894736842;
            result[4] += 0;
            result[5] += 0.05263157894736842;
          }
        }
      }
    } else {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0.3333333333333333;
            result[5] += 0;
          }
        } else {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.6875;
            result[1] += 0;
            result[2] += 0.3125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ce0000))) ) ) {
            result[0] += 0.010416666666666666;
            result[1] += 0;
            result[2] += 0.6770833333333334;
            result[3] += 0.28125;
            result[4] += 0;
            result[5] += 0.03125;
          } else {
            result[0] += 0.003708281829419036;
            result[1] += 0;
            result[2] += 0.9456118665018541;
            result[3] += 0.05067985166872682;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42760000))) ) ) {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0.0106951871657754;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9679144385026738;
            result[5] += 0.0213903743315508;
          } else {
            result[0] += 0.2;
            result[1] += 0.8;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x427e0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.1111111111111111;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.72;
            result[5] += 0.28;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0.004137931034482759;
            result[2] += 0.001379310344827586;
            result[3] += 0.037241379310344824;
            result[4] += 0.04689655172413793;
            result[5] += 0.9103448275862069;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.45098039215686275;
            result[4] += 0.0196078431372549;
            result[5] += 0.5294117647058824;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0.42105263157894735;
            result[1] += 0.18421052631578946;
            result[2] += 0;
            result[3] += 0.10526315789473684;
            result[4] += 0.20175438596491227;
            result[5] += 0.08771929824561403;
          } else {
            result[0] += 0;
            result[1] += 0.010869565217391304;
            result[2] += 0.010869565217391304;
            result[3] += 0.35144927536231885;
            result[4] += 0.014492753623188406;
            result[5] += 0.6123188405797102;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b00000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42260000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8125;
            result[5] += 0.0625;
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
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.21551724137931033;
            result[1] += 0;
            result[2] += 0.017241379310344827;
            result[3] += 0.08620689655172414;
            result[4] += 0.5775862068965517;
            result[5] += 0.10344827586206896;
          } else {
            result[0] += 0.1116751269035533;
            result[1] += 0.04060913705583756;
            result[2] += 0.09137055837563451;
            result[3] += 0.24873096446700507;
            result[4] += 0.1218274111675127;
            result[5] += 0.38578680203045684;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.13392857142857142;
            result[1] += 0.32142857142857145;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5446428571428571;
            result[5] += 0;
          } else {
            result[0] += 0.8556701030927836;
            result[1] += 0.010309278350515465;
            result[2] += 0.03172085646312451;
            result[3] += 0.033306899286280736;
            result[4] += 0.04044409199048375;
            result[5] += 0.028548770816812057;
          }
        }
      }
    }
  } else {
    if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
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
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0.3;
            result[2] += 0.3;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.015873015873015872;
            result[3] += 0.30158730158730157;
            result[4] += 0;
            result[5] += 0.6825396825396826;
          }
        }
      } else {
        if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42a10000))) ) ) {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.1111111111111111;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.8888888888888888;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.17142857142857146;
            result[3] += 0.7238095238095239;
            result[4] += 0;
            result[5] += 0.10476190476190478;
          }
        } else {
          if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.23809523809523808;
            result[3] += 0.09523809523809523;
            result[4] += 0.09523809523809523;
            result[5] += 0.5714285714285714;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7941176470588235;
            result[3] += 0.17647058823529413;
            result[4] += 0;
            result[5] += 0.029411764705882353;
          }
        }
      }
    } else {
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ce0000))) ) ) {
        if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42af0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0;
            result[1] += 0.011235955056179775;
            result[2] += 0.33707865168539325;
            result[3] += 0.48314606741573035;
            result[4] += 0;
            result[5] += 0.16853932584269662;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7941176470588235;
            result[3] += 0.08823529411764706;
            result[4] += 0;
            result[5] += 0.11764705882352941;
          }
        } else {
          if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42b70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9827586206896551;
            result[3] += 0.017241379310344827;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42970000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x429c0000))) ) ) {
            result[0] += 0;
            result[1] += 0.4;
            result[2] += 0.6;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.25;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.75;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42df0000))) ) ) {
            result[0] += 0.002840909090909091;
            result[1] += 0;
            result[2] += 0.8607954545454546;
            result[3] += 0.1278409090909091;
            result[4] += 0;
            result[5] += 0.008522727272727272;
          } else {
            result[0] += 0.02040816326530612;
            result[1] += 0;
            result[2] += 0.9530612244897959;
            result[3] += 0.022448979591836733;
            result[4] += 0.0020408163265306124;
            result[5] += 0.0020408163265306124;
          }
        }
      }
    }
  }
  if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x420a0000))) ) ) {
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
            result[4] += 0.9893617021276596;
            result[5] += 0.010638297872340425;
          }
        } else {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x424e0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5714285714285714;
            result[5] += 0.42857142857142855;
          }
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0.3466666666666667;
            result[1] += 0.06666666666666667;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.4533333333333333;
            result[5] += 0.13333333333333333;
          } else {
            result[0] += 0.0010638297872340426;
            result[1] += 0.01702127659574468;
            result[2] += 0.0010638297872340426;
            result[3] += 0.06382978723404255;
            result[4] += 0.04042553191489362;
            result[5] += 0.8765957446808511;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.008695652173913044;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3130434782608696;
            result[4] += 0.008695652173913044;
            result[5] += 0.6695652173913044;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.06382978723404255;
            result[3] += 0.7092198581560284;
            result[4] += 0;
            result[5] += 0.22695035460992907;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42480000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42cb0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1;
            result[4] += 0.9;
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
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42b60000))) ) ) {
            result[0] += 0;
            result[1] += 0.8947368421052632;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.10526315789473684;
            result[5] += 0;
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
        if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42820000))) ) ) {
            result[0] += 0;
            result[1] += 0.26119402985074625;
            result[2] += 0;
            result[3] += 0.022388059701492536;
            result[4] += 0.6940298507462687;
            result[5] += 0.022388059701492536;
          } else {
            result[0] += 0.8354218880534671;
            result[1] += 0.005012531328320803;
            result[2] += 0;
            result[3] += 0.033416875522138685;
            result[4] += 0.07769423558897244;
            result[5] += 0.04845446950710109;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0.03667481662591687;
            result[1] += 0.04156479217603912;
            result[2] += 0.2982885085574572;
            result[3] += 0.33007334963325186;
            result[4] += 0.05378973105134474;
            result[5] += 0.2396088019559902;
          } else {
            result[0] += 0.6565656565656566;
            result[1] += 0.09090909090909091;
            result[2] += 0.12121212121212122;
            result[3] += 0;
            result[4] += 0.13131313131313133;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42740000))) ) ) {
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42740000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.6666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.025641025641025644;
            result[2] += 0.10256410256410257;
            result[3] += 0.05128205128205129;
            result[4] += 0.025641025641025644;
            result[5] += 0.7948717948717949;
          }
        } else {
          if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.20000000000000004;
            result[3] += 0.5111111111111112;
            result[4] += 0.04444444444444445;
            result[5] += 0.24444444444444446;
          } else {
            result[0] += 0.08;
            result[1] += 0;
            result[2] += 0.88;
            result[3] += 0.04;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42ab0000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42970000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5000000000000001;
            result[3] += 0.4736842105263158;
            result[4] += 0;
            result[5] += 0.026315789473684213;
          }
        } else {
          if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42dc0000))) ) ) {
            result[0] += 0.041666666666666664;
            result[1] += 0;
            result[2] += 0.9583333333333334;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.875;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42ba0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8500000000000001;
            result[3] += 0.10833333333333335;
            result[4] += 0;
            result[5] += 0.04166666666666667;
          } else {
            result[0] += 0.001697792869269949;
            result[1] += 0;
            result[2] += 0.9711375212224108;
            result[3] += 0.027164685908319185;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9855769230769231;
            result[5] += 0.014423076923076924;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42870000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x426c0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.875;
            result[5] += 0.125;
          } else {
            result[0] += 0.0012804097311139564;
            result[1] += 0;
            result[2] += 0.0012804097311139564;
            result[3] += 0.03969270166453265;
            result[4] += 0.015364916773367477;
            result[5] += 0.942381562099872;
          }
        } else {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.020172910662824207;
            result[1] += 0.04610951008645533;
            result[2] += 0.002881844380403458;
            result[3] += 0.2910662824207493;
            result[4] += 0.05475504322766571;
            result[5] += 0.5850144092219021;
          } else {
            result[0] += 0.36111111111111116;
            result[1] += 0;
            result[2] += 0.05555555555555556;
            result[3] += 0.2592592592592593;
            result[4] += 0.0462962962962963;
            result[5] += 0.27777777777777785;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42be0000))) ) ) {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42420000))) ) ) {
            result[0] += 0;
            result[1] += 1;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0234375;
            result[1] += 0.015625;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9453125;
            result[5] += 0.015625;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.9817232375979112;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.018276762402088774;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.7435897435897436;
            result[1] += 0.05128205128205128;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.20512820512820512;
            result[5] += 0;
          } else {
            result[0] += 0.028037383177570093;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.3364485981308411;
            result[4] += 0.14953271028037382;
            result[5] += 0.48598130841121495;
          }
        } else {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.9164396003633062;
            result[1] += 0.011807447774750228;
            result[2] += 0.003633060853769301;
            result[3] += 0.006357856494096277;
            result[4] += 0.056312443233424166;
            result[5] += 0.005449591280653952;
          } else {
            result[0] += 0.2830188679245283;
            result[1] += 0.0330188679245283;
            result[2] += 0.1650943396226415;
            result[3] += 0.17452830188679244;
            result[4] += 0.10377358490566038;
            result[5] += 0.24056603773584906;
          }
        }
      }
    }
  } else {
    if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42a10000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a30000))) ) ) {
            result[0] += 0;
            result[1] += 0.02040816326530612;
            result[2] += 0;
            result[3] += 0.04081632653061224;
            result[4] += 0.08163265306122448;
            result[5] += 0.8571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0.3333333333333333;
            result[2] += 0.47619047619047616;
            result[3] += 0.09523809523809523;
            result[4] += 0.09523809523809523;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.08333333333333333;
            result[3] += 0.7083333333333334;
            result[4] += 0;
            result[5] += 0.20833333333333334;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3333333333333333;
            result[3] += 0.35714285714285715;
            result[4] += 0.047619047619047616;
            result[5] += 0.2619047619047619;
          }
        }
      } else {
        if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42b70000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.16666666666666666;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.04347826086956522;
            result[1] += 0;
            result[2] += 0.7391304347826088;
            result[3] += 0.08695652173913045;
            result[4] += 0.01449275362318841;
            result[5] += 0.11594202898550728;
          }
        }
      }
    } else {
      if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42c30000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.9;
            result[1] += 0;
            result[2] += 0.1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0392156862745098;
            result[1] += 0;
            result[2] += 0.9019607843137255;
            result[3] += 0.0392156862745098;
            result[4] += 0;
            result[5] += 0.0196078431372549;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42cc0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a90000))) ) ) {
          if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.10810810810810811;
            result[1] += 0;
            result[2] += 0.32432432432432434;
            result[3] += 0.40540540540540543;
            result[4] += 0;
            result[5] += 0.16216216216216217;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8175182481751825;
            result[3] += 0.18248175182481752;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.006535947712418301;
            result[1] += 0;
            result[2] += 0.8627450980392157;
            result[3] += 0.13071895424836602;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9836734693877551;
            result[3] += 0.0163265306122449;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42910000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x427a0000))) ) ) {
        if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42360000))) ) ) {
            result[0] += 0;
            result[1] += 0.5714285714285714;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.42857142857142855;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9894179894179894;
            result[5] += 0.010582010582010581;
          }
        } else {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0;
            result[1] += 0.047619047619047616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9523809523809523;
          } else {
            result[0] += 0;
            result[1] += 0.3191489361702128;
            result[2] += 0;
            result[3] += 0.14893617021276595;
            result[4] += 0.40425531914893614;
            result[5] += 0.1276595744680851;
          }
        }
      } else {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x428b0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.001455604075691412;
            result[3] += 0.03056768558951965;
            result[4] += 0.02911208151382824;
            result[5] += 0.9388646288209607;
          } else {
            result[0] += 0.020689655172413793;
            result[1] += 0.006896551724137931;
            result[2] += 0;
            result[3] += 0.2896551724137931;
            result[4] += 0.08275862068965517;
            result[5] += 0.6;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a90000))) ) ) {
            result[0] += 0.15730337078651685;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.1348314606741573;
            result[4] += 0.21910112359550563;
            result[5] += 0.4887640449438202;
          } else {
            result[0] += 0.02;
            result[1] += 0;
            result[2] += 0.03;
            result[3] += 0.77;
            result[4] += 0.01;
            result[5] += 0.17;
          }
        }
      }
    } else {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0.08333333333333333;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9166666666666666;
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
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42d10000))) ) ) {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x428a0000))) ) ) {
            result[0] += 0.6083333333333334;
            result[1] += 0.036666666666666674;
            result[2] += 0;
            result[3] += 0.023333333333333338;
            result[4] += 0.28500000000000003;
            result[5] += 0.046666666666666676;
          } else {
            result[0] += 0.01593625498007968;
            result[1] += 0.035856573705179286;
            result[2] += 0.10756972111553785;
            result[3] += 0.350597609561753;
            result[4] += 0.0199203187250996;
            result[5] += 0.4701195219123506;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.922752808988764;
            result[1] += 0.018258426966292134;
            result[2] += 0.004213483146067416;
            result[3] += 0.011235955056179775;
            result[4] += 0.042134831460674156;
            result[5] += 0.0014044943820224719;
          } else {
            result[0] += 0.20754716981132076;
            result[1] += 0;
            result[2] += 0.660377358490566;
            result[3] += 0;
            result[4] += 0.05660377358490566;
            result[5] += 0.07547169811320754;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429d0000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x427e0000))) ) ) {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.7647058823529411;
            result[5] += 0.23529411764705882;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.5;
            result[4] += 0;
            result[5] += 0.3333333333333333;
          }
        } else {
          if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.014084507042253521;
            result[3] += 0.11267605633802817;
            result[4] += 0.014084507042253521;
            result[5] += 0.8591549295774648;
          } else {
            result[0] += 0;
            result[1] += 0.18181818181818182;
            result[2] += 0.45454545454545453;
            result[3] += 0.2727272727272727;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      } else {
        if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42db0000))) ) ) {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42a10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.07608695652173914;
            result[3] += 0.6847826086956522;
            result[4] += 0;
            result[5] += 0.2391304347826087;
          } else {
            result[0] += 0;
            result[1] += 0.015873015873015876;
            result[2] += 0.46031746031746035;
            result[3] += 0.4285714285714286;
            result[4] += 0;
            result[5] += 0.09523809523809525;
          }
        } else {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42930000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5555555555555556;
            result[3] += 0.4444444444444444;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0.125;
            result[1] += 0.8125;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.0625;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.4375;
            result[4] += 0.1875;
            result[5] += 0.375;
          }
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.7419354838709677;
            result[1] += 0;
            result[2] += 0.1935483870967742;
            result[3] += 0;
            result[4] += 0.06451612903225806;
            result[5] += 0;
          } else {
            result[0] += 0.05333333333333334;
            result[1] += 0;
            result[2] += 0.76;
            result[3] += 0.09333333333333334;
            result[4] += 0;
            result[5] += 0.09333333333333334;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c10000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.375;
            result[1] += 0;
            result[2] += 0.125;
            result[3] += 0;
            result[4] += 0.375;
            result[5] += 0.125;
          }
        } else {
          if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
            result[0] += 0.46153846153846156;
            result[1] += 0;
            result[2] += 0.46153846153846156;
            result[3] += 0.07692307692307693;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0011198208286674134;
            result[1] += 0.0011198208286674134;
            result[2] += 0.942889137737962;
            result[3] += 0.0503919372900336;
            result[4] += 0;
            result[5] += 0.004479283314669654;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x42950000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42b50000))) ) ) {
            result[0] += 0.027559055118110236;
            result[1] += 0.003937007874015748;
            result[2] += 0;
            result[3] += 0.003937007874015748;
            result[4] += 0.8937007874015748;
            result[5] += 0.07086614173228346;
          } else {
            result[0] += 0;
            result[1] += 0.8285714285714286;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.14285714285714285;
            result[5] += 0.02857142857142857;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x426a0000))) ) ) {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.047619047619047616;
            result[1] += 0;
            result[2] += 0.07142857142857142;
            result[3] += 0.023809523809523808;
            result[4] += 0.3333333333333333;
            result[5] += 0.5238095238095238;
          }
        }
      } else {
        if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x426e0000))) ) ) {
            result[0] += 0;
            result[1] += 0.04545454545454546;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9090909090909092;
            result[5] += 0.04545454545454546;
          } else {
            result[0] += 0.0011312217194570137;
            result[1] += 0.0011312217194570137;
            result[2] += 0.0011312217194570137;
            result[3] += 0.05542986425339366;
            result[4] += 0.04524886877828054;
            result[5] += 0.8959276018099548;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0.0379746835443038;
            result[1] += 0.0379746835443038;
            result[2] += 0;
            result[3] += 0.06329113924050633;
            result[4] += 0.10126582278481013;
            result[5] += 0.759493670886076;
          } else {
            result[0] += 0.008097165991902834;
            result[1] += 0;
            result[2] += 0.02834008097165992;
            result[3] += 0.7327935222672065;
            result[4] += 0.020242914979757085;
            result[5] += 0.21052631578947367;
          }
        }
      }
    } else {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42520000))) ) ) {
        if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
        } else {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0.5;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.993006993006993;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.006993006993006993;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42910000))) ) ) {
            result[0] += 0.14838709677419354;
            result[1] += 0.12903225806451613;
            result[2] += 0;
            result[3] += 0.07741935483870968;
            result[4] += 0.4129032258064516;
            result[5] += 0.23225806451612904;
          } else {
            result[0] += 0.828125;
            result[1] += 0.041666666666666664;
            result[2] += 0.0078125;
            result[3] += 0.017361111111111112;
            result[4] += 0.09809027777777778;
            result[5] += 0.006944444444444444;
          }
        } else {
          if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0.05572755417956656;
            result[1] += 0.0030959752321981426;
            result[2] += 0.19195046439628483;
            result[3] += 0.30030959752321984;
            result[4] += 0.0804953560371517;
            result[5] += 0.3684210526315789;
          } else {
            result[0] += 0.9411764705882353;
            result[1] += 0;
            result[2] += 0.058823529411764705;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42b90000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0.16666666666666666;
            result[4] += 0;
            result[5] += 0.6666666666666666;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d80000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.024390243902439025;
            result[3] += 0.975609756097561;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42ca0000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0.125;
            result[4] += 0;
            result[5] += 0.375;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.3181818181818182;
            result[3] += 0.6363636363636364;
            result[4] += 0;
            result[5] += 0.045454545454545456;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42d20000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.96;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.04;
          } else {
            result[0] += 0.030303030303030304;
            result[1] += 0;
            result[2] += 0.5151515151515151;
            result[3] += 0.36363636363636365;
            result[4] += 0;
            result[5] += 0.09090909090909091;
          }
        }
      }
    } else {
      if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42ad0000))) ) ) {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x429a0000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d10000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.26666666666666666;
            result[3] += 0.7333333333333333;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8571428571428571;
            result[3] += 0.14285714285714285;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42d30000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.74;
            result[3] += 0.2;
            result[4] += 0;
            result[5] += 0.06;
          } else {
            result[0] += 0.014423076923076924;
            result[1] += 0;
            result[2] += 0.8990384615384616;
            result[3] += 0.08173076923076923;
            result[4] += 0;
            result[5] += 0.004807692307692308;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42ad0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x429a0000))) ) ) {
            result[0] += 0.8333333333333334;
            result[1] += 0;
            result[2] += 0.16666666666666666;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.0070298769771529;
            result[1] += 0;
            result[2] += 0.9718804920913885;
            result[3] += 0.021089630931458703;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42850000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0.0049504950495049506;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9653465346534653;
            result[5] += 0.0297029702970297;
          } else {
            result[0] += 0;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0.3333333333333333;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x425a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0.13333333333333333;
            result[2] += 0;
            result[3] += 0.13333333333333333;
            result[4] += 0.26666666666666666;
            result[5] += 0.4666666666666667;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42830000))) ) ) {
          if ( ( !(data[35].missing != -1) || ((*( ((int*)(data)) + 35 ))<=((int)(0x424a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15384615384615385;
            result[3] += 0;
            result[4] += 0.7692307692307693;
            result[5] += 0.07692307692307693;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.03684210526315789;
            result[4] += 0.025;
            result[5] += 0.9381578947368421;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42940000))) ) ) {
            result[0] += 0.36538461538461536;
            result[1] += 0.009615384615384616;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.49038461538461536;
            result[5] += 0.1346153846153846;
          } else {
            result[0] += 0.00997506234413965;
            result[1] += 0.0024937655860349127;
            result[2] += 0.0024937655860349127;
            result[3] += 0.40648379052369077;
            result[4] += 0.004987531172069825;
            result[5] += 0.57356608478803;
          }
        }
      }
    } else {
      if ( ( !(data[33].missing != -1) || ((*( ((int*)(data)) + 33 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42ae0000))) ) ) {
          if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42500000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x42d00000))) ) ) {
            result[0] += 0;
            result[1] += 0.9930555555555556;
            result[2] += 0;
            result[3] += 0.004629629629629629;
            result[4] += 0.0023148148148148147;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42dd0000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.6467532467532467;
            result[1] += 0.08571428571428572;
            result[2] += 0.003896103896103896;
            result[3] += 0.015584415584415584;
            result[4] += 0.22987012987012986;
            result[5] += 0.01818181818181818;
          } else {
            result[0] += 0.04639175257731959;
            result[1] += 0.015463917525773196;
            result[2] += 0.20618556701030927;
            result[3] += 0.3943298969072165;
            result[4] += 0.059278350515463915;
            result[5] += 0.27835051546391754;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429d0000))) ) ) {
            result[0] += 0.9584717607973422;
            result[1] += 0.008305647840531562;
            result[2] += 0.0049833887043189366;
            result[3] += 0;
            result[4] += 0.023255813953488372;
            result[5] += 0.0049833887043189366;
          } else {
            result[0] += 0.44680851063829785;
            result[1] += 0;
            result[2] += 0.5319148936170213;
            result[3] += 0.02127659574468085;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x42c10000))) ) ) {
      if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42a40000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x427a0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 1;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05555555555555555;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.9444444444444444;
          }
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
        }
      } else {
        if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[10].missing != -1) || ((*( ((int*)(data)) + 10 ))<=((int)(0x42d50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.05405405405405406;
            result[3] += 0.7567567567567568;
            result[4] += 0;
            result[5] += 0.1891891891891892;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.2222222222222222;
          }
        } else {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42ba0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 1;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 1;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
      } else {
        if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x42d30000))) ) ) {
          if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42ab0000))) ) ) {
            result[0] += 0.012578616352201259;
            result[1] += 0;
            result[2] += 0.610062893081761;
            result[3] += 0.29559748427672955;
            result[4] += 0;
            result[5] += 0.08176100628930817;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9019607843137255;
            result[3] += 0.09803921568627451;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42ae0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 1;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.006144393241167436;
            result[1] += 0;
            result[2] += 0.9493087557603688;
            result[3] += 0.036866359447004615;
            result[4] += 0.003072196620583718;
            result[5] += 0.004608294930875577;
          }
        }
      }
    }
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[8].missing != -1) || ((*( ((int*)(data)) + 8 ))<=((int)(0x42760000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42720000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42860000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9868995633187773;
            result[5] += 0.013100436681222707;
          } else {
            result[0] += 0;
            result[1] += 0.14285714285714285;
            result[2] += 0.14285714285714285;
            result[3] += 0.14285714285714285;
            result[4] += 0.42857142857142855;
            result[5] += 0.14285714285714285;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42680000))) ) ) {
            result[0] += 0.8931297709923665;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.06870229007633588;
            result[5] += 0.03816793893129771;
          } else {
            result[0] += 0.14285714285714285;
            result[1] += 0.07142857142857142;
            result[2] += 0.03571428571428571;
            result[3] += 0.047619047619047616;
            result[4] += 0.25;
            result[5] += 0.4523809523809524;
          }
        }
      } else {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a40000))) ) ) {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.08641975308641975;
            result[1] += 0.024691358024691357;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.5555555555555556;
            result[5] += 0.3333333333333333;
          } else {
            result[0] += 0;
            result[1] += 0.006904487917146145;
            result[2] += 0;
            result[3] += 0.05293440736478711;
            result[4] += 0.04833141542002301;
            result[5] += 0.8918296892980437;
          }
        } else {
          if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.008264462809917356;
            result[3] += 0.256198347107438;
            result[4] += 0.01652892561983471;
            result[5] += 0.71900826446281;
          } else {
            result[0] += 0.0033444816053511705;
            result[1] += 0;
            result[2] += 0.020066889632107024;
            result[3] += 0.6555183946488294;
            result[4] += 0.0033444816053511705;
            result[5] += 0.3177257525083612;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42c50000))) ) ) {
          if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ))<=((int)(0x42c90000))) ) ) {
            result[0] += 0.017857142857142856;
            result[1] += 0.03571428571428571;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.8928571428571429;
            result[5] += 0.05357142857142857;
          } else {
            result[0] += 0.09090909090909091;
            result[1] += 0.8;
            result[2] += 0.09090909090909091;
            result[3] += 0;
            result[4] += 0.01818181818181818;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42920000))) ) ) {
          if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428d0000))) ) ) {
            result[0] += 0.13559322033898305;
            result[1] += 0.4406779661016949;
            result[2] += 0.025423728813559324;
            result[3] += 0.01694915254237288;
            result[4] += 0.3644067796610169;
            result[5] += 0.01694915254237288;
          } else {
            result[0] += 0.9134328358208955;
            result[1] += 0.004975124378109453;
            result[2] += 0.012935323383084577;
            result[3] += 0.014925373134328358;
            result[4] += 0.03980099502487562;
            result[5] += 0.013930348258706468;
          }
        } else {
          if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x42b10000))) ) ) {
            result[0] += 0.02926829268292683;
            result[1] += 0.04878048780487805;
            result[2] += 0.4585365853658537;
            result[3] += 0.25853658536585367;
            result[4] += 0.00975609756097561;
            result[5] += 0.1951219512195122;
          } else {
            result[0] += 0.8641975308641975;
            result[1] += 0;
            result[2] += 0.037037037037037035;
            result[3] += 0;
            result[4] += 0.07407407407407407;
            result[5] += 0.024691358024691357;
          }
        }
      }
    }
  } else {
    if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[9].missing != -1) || ((*( ((int*)(data)) + 9 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.18181818181818182;
            result[4] += 0;
            result[5] += 0.8181818181818182;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        }
      } else {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429f0000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.9642857142857143;
            result[4] += 0;
            result[5] += 0.03571428571428571;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.75;
            result[3] += 0.25;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[11].missing != -1) || ((*( ((int*)(data)) + 11 ))<=((int)(0x42920000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7777777777777778;
            result[3] += 0.05555555555555555;
            result[4] += 0;
            result[5] += 0.16666666666666666;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.15;
            result[3] += 0.7;
            result[4] += 0.15;
            result[5] += 0;
          }
        }
      }
    } else {
      if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x42b90000))) ) ) {
          if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42a70000))) ) ) {
            result[0] += 0.3333333333333333;
            result[1] += 0.6666666666666666;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.2;
            result[3] += 0.25;
            result[4] += 0.1;
            result[5] += 0.45;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7906976744186046;
            result[3] += 0.18604651162790697;
            result[4] += 0;
            result[5] += 0.023255813953488372;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0.75;
          }
        }
      } else {
        if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42a80000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42ca0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.8433179723502304;
            result[3] += 0.14746543778801843;
            result[4] += 0;
            result[5] += 0.009216589861751152;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x429f0000))) ) ) {
            result[0] += 0.5;
            result[1] += 0;
            result[2] += 0.5;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0.00764525993883792;
            result[1] += 0;
            result[2] += 0.9694189602446484;
            result[3] += 0.022935779816513763;
            result[4] += 0;
            result[5] += 0;
          }
        }
      }
    }
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42a20000))) ) ) {
    if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x42930000))) ) ) {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42820000))) ) ) {
        if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42820000))) ) ) {
          if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b40000))) ) ) {
            result[0] += 0.003816793893129771;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.9541984732824428;
            result[5] += 0.04198473282442748;
          } else {
            result[0] += 0;
            result[1] += 0.8333333333333334;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42980000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.23684210526315788;
            result[5] += 0.7631578947368421;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.14285714285714285;
            result[4] += 0.6190476190476191;
            result[5] += 0.23809523809523808;
          }
        }
      } else {
        if ( ( !(data[18].missing != -1) || ((*( ((int*)(data)) + 18 ))<=((int)(0x42ad0000))) ) ) {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x428b0000))) ) ) {
            result[0] += 0.001215066828675577;
            result[1] += 0;
            result[2] += 0.002430133657351154;
            result[3] += 0.038882138517618466;
            result[4] += 0.03766707168894289;
            result[5] += 0.9198055893074119;
          } else {
            result[0] += 0.3246753246753247;
            result[1] += 0.025974025974025976;
            result[2] += 0;
            result[3] += 0.1038961038961039;
            result[4] += 0.2727272727272727;
            result[5] += 0.2727272727272727;
          }
        } else {
          if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x42760000))) ) ) {
            result[0] += 0.5833333333333334;
            result[1] += 0.25;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0.16666666666666666;
            result[5] += 0;
          } else {
            result[0] += 0.01282051282051282;
            result[1] += 0.009615384615384616;
            result[2] += 0.04487179487179487;
            result[3] += 0.4935897435897436;
            result[4] += 0.00641025641025641;
            result[5] += 0.4326923076923077;
          }
        }
      }
    } else {
      if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x424e0000))) ) ) {
        if ( ( !(data[31].missing != -1) || ((*( ((int*)(data)) + 31 ))<=((int)(0x42b10000))) ) ) {
          if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x423e0000))) ) ) {
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
            result[4] += 1;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0.5882352941176471;
            result[2] += 0.17647058823529413;
            result[3] += 0;
            result[4] += 0.23529411764705882;
            result[5] += 0;
          } else {
            result[0] += 0.0025839793281653752;
            result[1] += 0.9948320413436693;
            result[2] += 0;
            result[3] += 0.0025839793281653752;
            result[4] += 0;
            result[5] += 0;
          }
        }
      } else {
        if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x428f0000))) ) ) {
          if ( ( !(data[29].missing != -1) || ((*( ((int*)(data)) + 29 ))<=((int)(0x42890000))) ) ) {
            result[0] += 0.1728395061728395;
            result[1] += 0.16666666666666666;
            result[2] += 0;
            result[3] += 0.006172839506172839;
            result[4] += 0.6049382716049383;
            result[5] += 0.04938271604938271;
          } else {
            result[0] += 0.838401390095569;
            result[1] += 0.03909643788010426;
            result[2] += 0.0026064291920069507;
            result[3] += 0.016507384882710686;
            result[4] += 0.07732406602953953;
            result[5] += 0.026064291920069503;
          }
        } else {
          if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x42b30000))) ) ) {
            result[0] += 0.03225806451612903;
            result[1] += 0.008797653958944282;
            result[2] += 0.2316715542521994;
            result[3] += 0.36950146627565983;
            result[4] += 0.01466275659824047;
            result[5] += 0.34310850439882695;
          } else {
            result[0] += 0.7407407407407408;
            result[1] += 0.02777777777777778;
            result[2] += 0.11111111111111112;
            result[3] += 0.01851851851851852;
            result[4] += 0.10185185185185186;
            result[5] += 0;
          }
        }
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x42c90000))) ) ) {
      if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ))<=((int)(0x42c10000))) ) ) {
        if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ))<=((int)(0x429d0000))) ) ) {
          if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x42a40000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0.8709677419354839;
            result[4] += 0;
            result[5] += 0.12903225806451613;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 1;
          }
        } else {
          if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.13636363636363635;
            result[3] += 0.7272727272727273;
            result[4] += 0;
            result[5] += 0.13636363636363635;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.4666666666666667;
            result[3] += 0.3;
            result[4] += 0;
            result[5] += 0.23333333333333334;
          }
        }
      } else {
        if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ))<=((int)(0x42b50000))) ) ) {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42a50000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.7441860465116279;
            result[3] += 0.2558139534883721;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9655172413793104;
            result[3] += 0.034482758620689655;
            result[4] += 0;
            result[5] += 0;
          }
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
      if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x42bb0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
        } else {
          if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x42ac0000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.25;
            result[3] += 0.75;
            result[4] += 0;
            result[5] += 0;
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
        if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x42950000))) ) ) {
          if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x42d70000))) ) ) {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.6;
            result[3] += 0.4;
            result[4] += 0;
            result[5] += 0;
          } else {
            result[0] += 1;
            result[1] += 0;
            result[2] += 0;
            result[3] += 0;
            result[4] += 0;
            result[5] += 0;
          }
        } else {
          if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42ad0000))) ) ) {
            result[0] += 0.016025641025641024;
            result[1] += 0;
            result[2] += 0.8493589743589743;
            result[3] += 0.11858974358974358;
            result[4] += 0;
            result[5] += 0.016025641025641024;
          } else {
            result[0] += 0;
            result[1] += 0;
            result[2] += 0.9790940766550523;
            result[3] += 0.019163763066202093;
            result[4] += 0;
            result[5] += 0.0017421602787456448;
          }
        }
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 50;
  result[1] /= 50;
  result[2] /= 50;
  result[3] /= 50;
  result[4] /= 50;
  result[5] /= 50;
  
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
    

    FILE* file = fopen("./codegen/dataset_146/split_2/test_data.csv", "r");
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
