
#include "header.h"


static const int32_t num_class[] = {  2, };

int32_t get_num_target(void) {
  return N_TARGET;
}
void get_num_class(int32_t* out) {
  for (int i = 0; i < N_TARGET; ++i) {
    out[i] = num_class[i];
  }
}
int32_t get_num_feature(void) {
  return 34;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.01950000040233135223) ) ) {
    if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.008790000460066949017) ) ) {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.4787950068712234497) ) ) {
        result[0] += 0.9285714285714286;
        result[1] += 0.07142857142857142;
      } else {
        result[0] += 0.17857142857142858;
        result[1] += 0.8214285714285714;
      }
    } else {
      if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.3379649966955184937) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8856399953365325928) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.8071799874305725098) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.09433962264150944;
        result[1] += 0.9056603773584906;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
    if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
      if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.3926600068807601929) ) ) {
        result[0] += 0.9428571428571428;
        result[1] += 0.05714285714285714;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.4967650175094604492) ) ) {
        result[0] += 0.02962962962962963;
        result[1] += 0.9703703703703703;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    }
  } else {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.4077649936079978943) ) ) {
      if ( ( !(data[12].missing != -1) || (data[12].fvalue <= (float)-0.7575199902057647705) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.199990004301071167) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.48148148148148145;
        result[1] += 0.5185185185185185;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.2315400019288063049) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)-0.1502899974584579468) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  } else {
    if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)-0.9162249863147735596) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.81660500168800354) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.0967741935483871;
        result[1] += 0.9032258064516129;
      }
    }
  }
  if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.9032450020313262939) ) ) {
    if ( ( !(data[29].missing != -1) || (data[29].fvalue <= (float)-0.8957050144672393799) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.9475899934768676758) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2383150011301040649) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[33].missing != -1) || (data[33].fvalue <= (float)0.9509800076484680176) ) ) {
        result[0] += 0.0872093023255814;
        result[1] += 0.9127906976744186;
      } else {
        result[0] += 0.8666666666666667;
        result[1] += 0.13333333333333333;
      }
    }
  }
  if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.2245049998164176941) ) ) {
    if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)0.03555500134825706482) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.03404999943450093269) ) ) {
        result[0] += 0.7;
        result[1] += 0.3;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7839950025081634521) ) ) {
        result[0] += 0.08333333333333333;
        result[1] += 0.9166666666666666;
      } else {
        result[0] += 0.7692307692307693;
        result[1] += 0.23076923076923078;
      }
    }
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8662399947643280029) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.6439399868249893188) ) ) {
        result[0] += 0.06923076923076923;
        result[1] += 0.9307692307692308;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.4671449959278106689) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    }
  }
  if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9959399998188018799) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2672799974679946899) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)-0.9664799869060516357) ) ) {
        result[0] += 0.75;
        result[1] += 0.25;
      } else {
        result[0] += 0.10919540229885058;
        result[1] += 0.8908045977011494;
      }
    }
  } else {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)0.8848800063133239746) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[27].missing != -1) || (data[27].fvalue <= (float)0.4962150007486343384) ) ) {
        result[0] += 0.48148148148148145;
        result[1] += 0.5185185185185185;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1459750011563301086) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)-0.5880299806594848633) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9127549827098846436) ) ) {
        result[0] += 0.9090909090909091;
        result[1] += 0.09090909090909091;
      } else {
        result[0] += 0.09375;
        result[1] += 0.90625;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.1190350018441677094) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.4660349935293197632) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.7106949985027313232) ) ) {
        result[0] += 0.17391304347826086;
        result[1] += 0.8260869565217391;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)0.6894899904727935791) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.8059450089931488037) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.07792207792207792;
        result[1] += 0.922077922077922;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)0.7955000102519989014) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.75) ) ) {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)0.1256750002503395081) ) ) {
        result[0] += 0.5666666666666667;
        result[1] += 0.43333333333333335;
      } else {
        result[0] += 0.06711409395973154;
        result[1] += 0.9328859060402684;
      }
    } else {
      if ( ( !(data[24].missing != -1) || (data[24].fvalue <= (float)0.7735649943351745605) ) ) {
        result[0] += 0.625;
        result[1] += 0.375;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)-0.1348499953746795654) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.7296650111675262451) ) ) {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[19].missing != -1) || (data[19].fvalue <= (float)-0.9303149878978729248) ) ) {
    if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.5292699858546257019) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.9396849870681762695) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.1074300035834312439) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[23].missing != -1) || (data[23].fvalue <= (float)0.8583799898624420166) ) ) {
        result[0] += 0.07894736842105263;
        result[1] += 0.9210526315789473;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)-0.4028300046920776367) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2175149992108345032) ) ) {
        result[0] += 0.8;
        result[1] += 0.2;
      } else {
        result[0] += 0.13903743315508021;
        result[1] += 0.8609625668449198;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.2000949978828430176) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)-0.6255199909210205078) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5911200046539306641) ) ) {
        result[0] += 0.9230769230769231;
        result[1] += 0.07692307692307693;
      } else {
        result[0] += 0.1256544502617801;
        result[1] += 0.8743455497382199;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.01699000038206577301) ) ) {
    if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.006755000111297704279) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)-0.02358499914407730103) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9992100000381469727) ) ) {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.9570200145244598389) ) ) {
        result[0] += 0.05555555555555555;
        result[1] += 0.9444444444444444;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.2560050040483474731) ) ) {
        result[0] += 0.53125;
        result[1] += 0.46875;
      } else {
        result[0] += 0.9;
        result[1] += 0.1;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)0.5) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1578199975192546844) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.9322450160980224609) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.12169312169312169;
        result[1] += 0.8783068783068783;
      }
    }
  }
  if ( ( !(data[13].missing != -1) || (data[13].fvalue <= (float)-0.5498799979686737061) ) ) {
    result[0] += 1;
    result[1] += 0;
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.5507950037717819214) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.15846994535519127;
        result[1] += 0.8415300546448088;
      }
    } else {
      if ( ( !(data[30].missing != -1) || (data[30].fvalue <= (float)0.5) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.44;
        result[1] += 0.56;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-0.2927449941635131836) ) ) {
    if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.1012199968099594116) ) ) {
      if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)0.04545500129461288452) ) ) {
        result[0] += 0.8888888888888888;
        result[1] += 0.1111111111111111;
      } else {
        result[0] += 0;
        result[1] += 1;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[7].missing != -1) || (data[7].fvalue <= (float)-0.6285450160503387451) ) ) {
      if ( ( !(data[21].missing != -1) || (data[21].fvalue <= (float)-0.1342250015586614609) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0.14285714285714285;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[8].missing != -1) || (data[8].fvalue <= (float)0.05560999922454357147) ) ) {
        result[0] += 0.7222222222222222;
        result[1] += 0.2777777777777778;
      } else {
        result[0] += 0.11695906432748537;
        result[1] += 0.8830409356725146;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.09763000160455703735) ) ) {
    if ( ( !(data[22].missing != -1) || (data[22].fvalue <= (float)-0.008670000359416007996) ) ) {
      if ( ( !(data[9].missing != -1) || (data[9].fvalue <= (float)0.1315799951553344727) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08695652173913043;
        result[1] += 0.9130434782608695;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.09377000108361244202) ) ) {
        result[0] += 0.9761904761904762;
        result[1] += 0.023809523809523808;
      } else {
        result[0] += 0.5217391304347826;
        result[1] += 0.4782608695652174;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6042999923229217529) ) ) {
      if ( ( !(data[14].missing != -1) || (data[14].fvalue <= (float)0.7547349929809570312) ) ) {
        result[0] += 0.5;
        result[1] += 0.5;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.0701000019907951355) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.05844155844155844;
        result[1] += 0.9415584415584416;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)0.420144990086555481) ) ) {
    if ( ( !(data[17].missing != -1) || (data[17].fvalue <= (float)-0.1043800003826618195) ) ) {
      if ( ( !(data[25].missing != -1) || (data[25].fvalue <= (float)-0.3084849938750267029) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.6666666666666666;
        result[1] += 0.3333333333333333;
      }
    } else {
      result[0] += 1;
      result[1] += 0;
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1460099965333938599) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[31].missing != -1) || (data[31].fvalue <= (float)-0.9606400132179260254) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.08241758241758242;
        result[1] += 0.9175824175824175;
      }
    }
  }
  if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.08303000032901763916) ) ) {
    if ( ( !(data[11].missing != -1) || (data[11].fvalue <= (float)0.09760500118136405945) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[28].missing != -1) || (data[28].fvalue <= (float)-0.8618449866771697998) ) ) {
        result[0] += 0.875;
        result[1] += 0.125;
      } else {
        result[0] += 0.125;
        result[1] += 0.875;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.6005150079727172852) ) ) {
      if ( ( !(data[20].missing != -1) || (data[20].fvalue <= (float)0.573304980993270874) ) ) {
        result[0] += 0;
        result[1] += 1;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    } else {
      if ( ( !(data[15].missing != -1) || (data[15].fvalue <= (float)0.8278599977493286133) ) ) {
        result[0] += 0.0763888888888889;
        result[1] += 0.9236111111111112;
      } else {
        result[0] += 1;
        result[1] += 0;
      }
    }
  }
  if ( ( !(data[32].missing != -1) || (data[32].fvalue <= (float)0.001524999985122121871) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)0.1927300058305263519) ) ) {
      result[0] += 1;
      result[1] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)0.009805000387132167816) ) ) {
        result[0] += 1;
        result[1] += 0;
      } else {
        result[0] += 0.22;
        result[1] += 0.78;
      }
    }
  } else {
    if ( ( !(data[26].missing != -1) || (data[26].fvalue <= (float)0.9999450147151947021) ) ) {
      if ( ( !(data[16].missing != -1) || (data[16].fvalue <= (float)0.2843600064516067505) ) ) {
        result[0] += 0.3103448275862069;
        result[1] += 0.6896551724137931;
      } else {
        result[0] += 0.0297029702970297;
        result[1] += 0.9702970297029703;
      }
    } else {
      if ( ( !(data[10].missing != -1) || (data[10].fvalue <= (float)0.8947850167751312256) ) ) {
        result[0] += 0.125;
        result[1] += 0.875;
      } else {
        result[0] += 0.7272727272727273;
        result[1] += 0.2727272727272727;
      }
    }
  }
  
  // Average tree outputs
  result[0] /= 20;
  result[1] /= 20;
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
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
    

    FILE* file = fopen("./codegen/dataset_52/split_1/test_data.csv", "r");
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
