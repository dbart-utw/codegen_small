
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
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        result[0] += 0.4;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992362622675374;
        result[1] += 0;
        result[2] += 0.0007255508458395388;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.818688662313362e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.6753691671588895;
        result[1] += 0.0016538688718251624;
        result[2] += 0.005788541051388069;
        result[3] += 0.28363851151801533;
        result[4] += 0.03260484347312463;
        result[5] += 0.0003544004725339634;
        result[6] += 0.0005906674542232723;
      } else {
        result[0] += 0.35980191256830607;
        result[1] += 0;
        result[2] += 0.009392076502732242;
        result[3] += 0.5160519125683061;
        result[4] += 0.11390027322404372;
        result[5] += 0.0005122950819672132;
        result[6] += 0.0003415300546448088;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.014005602240896359;
        result[1] += 0.04201680672268908;
        result[2] += 0;
        result[3] += 0.22408963585434175;
        result[4] += 0.7198879551820728;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.009324009324009324;
        result[4] += 0.9906759906759907;
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
        result[0] += 0.1893033075299085;
        result[1] += 0.009148486980999296;
        result[2] += 0.009148486980999296;
        result[3] += 0.7923997185080929;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)3.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993080382885481;
        result[1] += 0;
        result[2] += 0.0005766347595433052;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011532695190866105;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.5207992138879791;
        result[1] += 0.0019652800524074684;
        result[2] += 0.007861120209629873;
        result[3] += 0.39982530843978603;
        result[4] += 0.06867561960912764;
        result[5] += 0.0003275466754012447;
        result[6] += 0.0005459111256687412;
      } else {
        result[0] += 0.5920015020653399;
        result[1] += 0;
        result[2] += 0.0011265490048817123;
        result[3] += 0.3443484791588434;
        result[4] += 0.061396920766053326;
        result[5] += 0.0003755163349605708;
        result[6] += 0.0007510326699211416;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.17834394904458598;
        result[1] += 0.006369426751592357;
        result[2] += 0.007961783439490446;
        result[3] += 0.8073248407643312;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.002652519893899204;
        result[1] += 0.03713527851458886;
        result[2] += 0;
        result[3] += 0.3660477453580902;
        result[4] += 0.5941644562334217;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.027237354085603113;
        result[4] += 0.9727626459143969;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)115.5) ) ) {
        result[0] += 0.3161010260457775;
        result[1] += 0.003946329913180743;
        result[2] += 0.008681925808997635;
        result[3] += 0.669692186266772;
        result[4] += 0.001578531965272297;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.009554140127388535;
        result[1] += 0.025477707006369428;
        result[2] += 0;
        result[3] += 0.17197452229299362;
        result[4] += 0.7929936305732485;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        result[0] += 0.8732394366197183;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.1267605633802817;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.026139817629179333;
        result[1] += 0;
        result[2] += 0.00364741641337386;
        result[3] += 0.13556231003039515;
        result[4] += 0.8346504559270517;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.002555910543130991;
        result[1] += 0;
        result[2] += 0.007667731629392972;
        result[3] += 0.904153354632588;
        result[4] += 0.08178913738019171;
        result[5] += 0.003833865814696486;
        result[6] += 0;
      } else {
        result[0] += 0.21094640820980615;
        result[1] += 0;
        result[2] += 0.014823261117445839;
        result[3] += 0;
        result[4] += 0.774230330672748;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9936289683968037;
        result[1] += 0.0006479015189691167;
        result[2] += 0.0017277373839176444;
        result[3] += 0.0038874091138147004;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010798358649485278;
      } else {
        result[0] += 0.6486455463728191;
        result[1] += 0;
        result[2] += 0.0039026629935720843;
        result[3] += 0.34618916437098257;
        result[4] += 0;
        result[5] += 0.0003443526170798898;
        result[6] += 0.0009182736455463728;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)46.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.9497885835095138;
        result[1] += 0;
        result[2] += 0.0035676532769556026;
        result[3] += 0.046511627906976744;
        result[4] += 0;
        result[5] += 0.0001321353065539112;
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
        result[0] += 0.16930379746835442;
        result[1] += 0.00870253164556962;
        result[2] += 0;
        result[3] += 0.5356012658227848;
        result[4] += 0.28639240506329117;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6731787474895016;
        result[1] += 0;
        result[2] += 0.00383421581157568;
        result[3] += 0.2994339967135293;
        result[4] += 0.02172722293226219;
        result[5] += 0.0005477451159393829;
        result[6] += 0.0012780719371918933;
      }
    }
  } else {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)10) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5333333333333333;
        result[4] += 0.4666666666666667;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.18879456706281833;
        result[1] += 0.001697792869269949;
        result[2] += 0.005432937181663837;
        result[3] += 0.3925297113752122;
        result[4] += 0.41154499151103563;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.872232276945589;
        result[1] += 0.0006161192190688898;
        result[2] += 0.0023104470715083368;
        result[3] += 0.10004235819631098;
        result[4] += 0.024567753860371983;
        result[5] += 0.00011552235357541684;
        result[6] += 0.00011552235357541684;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)-5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)22.5) ) ) {
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
        result[0] += 0.9947443860487338;
        result[1] += 0;
        result[2] += 0.005255613951266125;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.999792849152753;
        result[1] += 0;
        result[2] += 0.00020715084724696523;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.20687432867883995;
        result[1] += 0.0027926960257787323;
        result[2] += 0.003651987110633727;
        result[3] += 0.43071965628356607;
        result[4] += 0.3559613319011815;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7920937042459737;
        result[1] += 0.0013515035476968128;
        result[2] += 0.005293388895145849;
        result[3] += 0.18436760896497353;
        result[4] += 0.016218042572361754;
        result[5] += 0.00022525059128280213;
        result[6] += 0.00045050118256560425;
      }
    } else {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0;
        result[1] += 0.0006589785831960461;
        result[2] += 0.010543657331136738;
        result[3] += 0.8322899505766063;
        result[4] += 0.15518945634266887;
        result[5] += 0.0013179571663920922;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7068965517241379;
        result[4] += 0.29310344827586204;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5127691537305958;
        result[1] += 0;
        result[2] += 0.010015022533800702;
        result[3] += 0.45968953430145215;
        result[4] += 0.017526289434151226;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17744755244755245;
        result[1] += 0.009615384615384616;
        result[2] += 0.01048951048951049;
        result[3] += 0.8024475524475524;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.367479674796748;
        result[4] += 0.6325203252032521;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0014652014652014652;
        result[1] += 0.007326007326007326;
        result[2] += 0;
        result[3] += 0.05347985347985348;
        result[4] += 0.9377289377289377;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
        result[0] += 0.9995060227229547;
        result[1] += 0;
        result[2] += 0.0004939772770452559;
        result[3] += 0;
        result[4] += 0;
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.3721299462628237;
        result[1] += 0.0018319491939423548;
        result[2] += 0.006961406936980948;
        result[3] += 0.531875915974597;
        result[4] += 0.08634587200781633;
        result[5] += 0.0006106497313141183;
        result[6] += 0.00024425989252564734;
      } else {
        result[0] += 0.9669421487603306;
        result[1] += 0;
        result[2] += 0.007231404958677686;
        result[3] += 0.02453512396694215;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012913223140495868;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.002890173410404624;
        result[1] += 0.02601156069364162;
        result[2] += 0;
        result[3] += 0.26878612716763006;
        result[4] += 0.7023121387283237;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.013944223107569721;
        result[4] += 0.9860557768924303;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9816849816849816;
        result[1] += 0;
        result[2] += 0.018315018315018316;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.05183356840620593;
        result[1] += 0.003526093088857546;
        result[2] += 0;
        result[3] += 0.6530324400564175;
        result[4] += 0.29160789844851903;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.11516853932584271;
        result[1] += 0.0005617977528089889;
        result[2] += 0;
        result[3] += 0.8808988764044945;
        result[4] += 0.0005617977528089889;
        result[5] += 0.002808988764044944;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.024844720496894408;
        result[3] += 0;
        result[4] += 0.9751552795031055;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9992289602529011;
        result[1] += 0;
        result[2] += 0.0006939357723890667;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.71039747098963e-05;
      } else {
        result[0] += 0.6917788599255228;
        result[1] += 0.0011458034947006588;
        result[2] += 0.005633533848944906;
        result[3] += 0.30077341735892293;
        result[4] += 0;
        result[5] += 0.00019096724911677647;
        result[6] += 0.0004774181227919412;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.3196772191185599;
        result[1] += 0.009000620732464307;
        result[2] += 0.006828057107386716;
        result[3] += 0.5822470515207946;
        result[4] += 0.08224705152079453;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11465657111952407;
        result[1] += 0;
        result[2] += 0.006489994591671174;
        result[3] += 0.05029745808545159;
        result[4] += 0.8285559762033532;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)53.5) ) ) {
        result[0] += 0.980083444855546;
        result[1] += 0.00039360780917893417;
        result[2] += 0.0006297724946862947;
        result[3] += 0.018381484688656226;
        result[4] += 0.0003542470282610408;
        result[5] += 7.872156183578683e-05;
        result[6] += 7.872156183578683e-05;
      } else {
        result[0] += 0.7045147337118141;
        result[1] += 0;
        result[2] += 0.006488240064882401;
        result[3] += 0.2798053527980535;
        result[4] += 0.008921330089213302;
        result[5] += 0;
        result[6] += 0.0002703433360367667;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.3217665615141956;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6782334384858044;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4844200807847663;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5155799192152337;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)23) ) ) {
        result[0] += 0.9893842887473461;
        result[1] += 0;
        result[2] += 0.008492569002123142;
        result[3] += 0.00030330603579011223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018198362147406734;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.012139605462822459;
        result[3] += 0;
        result[4] += 0.9787556904400607;
        result[5] += 0.009104704097116844;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)35) ) ) {
        result[0] += 0.9723954319344218;
        result[1] += 0.0006305611994675262;
        result[2] += 0.0011209976879422688;
        result[3] += 0.025677853289427593;
        result[4] += 7.00623554963918e-05;
        result[5] += 7.00623554963918e-05;
        result[6] += 3.50311777481959e-05;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9958419958419958;
        result[4] += 0.004158004158004158;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.25851305334846764;
        result[1] += 0.002553916004540295;
        result[2] += 0.012769580022701475;
        result[3] += 0.4707718501702611;
        result[4] += 0.25539160045402953;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.007391763463569166;
        result[1] += 0.01795142555438226;
        result[2] += 0;
        result[3] += 0.09714889123548047;
        result[4] += 0.877507919746568;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)61.5) ) ) {
        result[0] += 0.007278835386338186;
        result[1] += 0;
        result[2] += 0.006718924972004479;
        result[3] += 0.805431131019037;
        result[4] += 0.18057110862262038;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8721071863580999;
        result[1] += 0;
        result[2] += 0.0036540803897685747;
        result[3] += 0.11855460820138043;
        result[4] += 0.0032480714575720666;
        result[5] += 0.0008120178643930166;
        result[6] += 0.0016240357287860333;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.505578093306288;
        result[1] += 0;
        result[2] += 0.012170385395537525;
        result[3] += 0.46551724137931033;
        result[4] += 0.016734279918864097;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.19385140905209222;
        result[1] += 0.010247651579846286;
        result[2] += 0.006831767719897523;
        result[3] += 0.7890691716481639;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.0019267822736030828;
        result[1] += 0.03275529865125241;
        result[2] += 0;
        result[3] += 0.47591522157996147;
        result[4] += 0.48940269749518306;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.026940346375881975;
        result[4] += 0.9730596536241181;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0.3333333333333333;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6666666666666666;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993854662774619;
        result[1] += 0;
        result[2] += 0.0005761253648793978;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.840835765862652e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.001184834123222749;
        result[2] += 0;
        result[3] += 0.22867298578199052;
        result[4] += 0.768957345971564;
        result[5] += 0.001184834123222749;
        result[6] += 0;
      } else {
        result[0] += 0.6024043524043524;
        result[1] += 0.001404001404001404;
        result[2] += 0.005879255879255879;
        result[3] += 0.3840821340821341;
        result[4] += 0.005177255177255177;
        result[5] += 0.000351000351000351;
        result[6] += 0.000702000702000702;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.13444520081688224;
        result[1] += 0;
        result[2] += 0.008168822328114363;
        result[3] += 0.7559564329475834;
        result[4] += 0.09972770592239619;
        result[5] += 0.0017018379850238256;
        result[6] += 0;
      } else {
        result[0] += 0.9105046708609091;
        result[1] += 0.00038129476809107497;
        result[2] += 0.002206062586812648;
        result[3] += 0.08660838303782989;
        result[4] += 0;
        result[5] += 2.7235340577933927e-05;
        result[6] += 0.00027235340577933925;
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
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.567287784679089;
        result[1] += 0;
        result[2] += 0.024844720496894408;
        result[3] += 0.4078674948240166;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.004288164665523156;
        result[1] += 0.02144082332761578;
        result[2] += 0;
        result[3] += 0.9742710120068611;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)11) ) ) {
        result[0] += 0.9976516317110697;
        result[1] += 8.097821685966476e-05;
        result[2] += 0.0005668475180176533;
        result[3] += 0.0014576079034739654;
        result[4] += 0.00016195643371932951;
        result[5] += 0;
        result[6] += 8.097821685966476e-05;
      } else {
        result[0] += 0.8579013116801999;
        result[1] += 0.0037476577139287947;
        result[2] += 0.0037476577139287947;
        result[3] += 0.13366645846346034;
        result[4] += 0;
        result[5] += 0.0003123048094940662;
        result[6] += 0.0006246096189881324;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.1783691959229898;
        result[1] += 0;
        result[2] += 0.007644394110985277;
        result[3] += 0.7873725934314836;
        result[4] += 0.026330690826727066;
        result[5] += 0.00028312570781426955;
        result[6] += 0;
      } else {
        result[0] += 0.9939132142155901;
        result[1] += 0;
        result[2] += 0.002552523070881603;
        result[3] += 0.0015707834282348324;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019634792852935407;
      }
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.548196015078083;
        result[1] += 0;
        result[2] += 0.016693591814754983;
        result[3] += 0.4345718901453959;
        result[4] += 0;
        result[5] += 0.0005385029617662898;
        result[6] += 0;
      } else {
        result[0] += 0.06683617871413004;
        result[1] += 0.008354522339266255;
        result[2] += 0.010897203051216855;
        result[3] += 0.9135488557936796;
        result[4] += 0;
        result[5] += 0.0003632401017072285;
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
        result[0] += 0.9724655819774718;
        result[1] += 0;
        result[2] += 0.023779724655819776;
        result[3] += 0.0037546933667083854;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07706093189964158;
        result[1] += 0.011200716845878136;
        result[2] += 0.0008960573476702509;
        result[3] += 0.91084229390681;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.9844215789979807;
        result[1] += 4.8081546302529096e-05;
        result[2] += 0.0006731416482354073;
        result[3] += 0.0143763823444562;
        result[4] += 0.00048081546302529096;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.044182621502209134;
        result[1] += 0;
        result[2] += 0.01914580265095729;
        result[3] += 0;
        result[4] += 0.9366715758468336;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.8029800287985974;
        result[1] += 0.0009390847054404305;
        result[2] += 0.0028798597633506538;
        result[3] += 0.1927627872034057;
        result[4] += 0;
        result[5] += 0.00012521129405872406;
        result[6] += 0.0003130282351468102;
      } else {
        result[0] += 0.015601783060921248;
        result[1] += 0;
        result[2] += 0.015601783060921248;
        result[3] += 0.8677563150074294;
        result[4] += 0.0988112927191679;
        result[5] += 0.002228826151560178;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.45454545454545453;
        result[1] += 0;
        result[2] += 0.0005827505827505828;
        result[3] += 0.11771561771561771;
        result[4] += 0.42657342657342656;
        result[5] += 0.0005827505827505828;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00033311125916055963;
        result[2] += 0.009660226515656229;
        result[3] += 0.9450366422385077;
        result[4] += 0.043637574950033314;
        result[5] += 0.0013324450366422385;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7483870967741936;
        result[4] += 0.25161290322580643;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.012055837563451776;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9879441624365483;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.4117647058823529;
        result[1] += 0.024509803921568627;
        result[2] += 0;
        result[3] += 0.5637254901960784;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9968027902921087;
        result[1] += 0.0002906554279901177;
        result[2] += 0.0023615753524197066;
        result[3] += 0.00039965121348641187;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014532771399505885;
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
        result[0] += 0.4150806597788654;
        result[1] += 0;
        result[2] += 0.0059815116911364884;
        result[3] += 0.5778502809497916;
        result[4] += 0;
        result[5] += 0.00018125793003443905;
        result[6] += 0.0009062896501721952;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.4633375474083439;
        result[1] += 0;
        result[2] += 0.0006321112515802782;
        result[3] += 0.11125158027812895;
        result[4] += 0.4247787610619469;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00035198873636043646;
        result[2] += 0.009503695881731784;
        result[3] += 0.9686730024639212;
        result[4] += 0.01900739176346357;
        result[5] += 0.0024639211545230554;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3041144901610018;
        result[4] += 0.6958855098389982;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006772009029345372;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9932279909706546;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9889807162534435;
        result[1] += 0;
        result[2] += 0.011019283746556474;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992135891789871;
        result[1] += 0;
        result[2] += 0.0007077697389116074;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.864108210128971e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)15) ) ) {
        result[0] += 0.6030317385125533;
        result[1] += 0.0007895152376440866;
        result[2] += 0.004894994473393336;
        result[3] += 0.3892310121585347;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020527396178746248;
      } else {
        result[0] += 0.8156490812092472;
        result[1] += 0.003754198774945663;
        result[2] += 0.011460185734044654;
        result[3] += 0.16874135546334718;
        result[4] += 0;
        result[5] += 0.00019758940920766647;
        result[6] += 0.00019758940920766647;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.3163771712158809;
        result[1] += 0.007133995037220843;
        result[2] += 0.004652605459057072;
        result[3] += 0.5862282878411911;
        result[4] += 0.08560794044665013;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11166666666666666;
        result[1] += 0;
        result[2] += 0.012777777777777779;
        result[3] += 0.04722222222222222;
        result[4] += 0.8283333333333334;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.931199334857618;
        result[1] += 0;
        result[2] += 0.00020785699438786114;
        result[3] += 0.06848887965080025;
        result[4] += 0;
        result[5] += 0.00010392849719393057;
        result[6] += 0;
      } else {
        result[0] += 0.9520697167755992;
        result[1] += 0.0011411972196285923;
        result[2] += 0.0019711588339039318;
        result[3] += 0.04300238613964104;
        result[4] += 0.0016599232285506795;
        result[5] += 5.187260089220873e-05;
        result[6] += 0.00010374520178441747;
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
        result[0] += 0.0020509815411661296;
        result[1] += 0;
        result[2] += 0.00937591561675945;
        result[3] += 0.8098447113975974;
        result[4] += 0.178728391444477;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.8320172290021537;
        result[1] += 0;
        result[2] += 0.007178750897343863;
        result[3] += 0.15075376884422112;
        result[4] += 0.005743000717875091;
        result[5] += 0.0007178750897343864;
        result[6] += 0.0035893754486719313;
      } else {
        result[0] += 0.923479661699557;
        result[1] += 0;
        result[2] += 0.003624647603705195;
        result[3] += 0.07128473620620218;
        result[4] += 0.0008054772452678212;
        result[5] += 0;
        result[6] += 0.0008054772452678212;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
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
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995911692559281;
        result[5] += 0.0004088307440719542;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004537205081669692;
        result[2] += 0.004234724742891712;
        result[3] += 0.9909255898366606;
        result[4] += 0;
        result[5] += 0.00030248033877797946;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9952471482889734;
        result[1] += 0;
        result[2] += 0.0038022813688212928;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009505703422053232;
      } else {
        result[0] += 0.9998279421885754;
        result[1] += 0;
        result[2] += 0.00017205781142463867;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9113455279991023;
        result[1] += 0.0025810795645831;
        result[2] += 0.008304342946919539;
        result[3] += 0.07687128268432276;
        result[4] += 0;
        result[5] += 0.00011222085063404783;
        result[6] += 0.0007855459544383348;
      } else {
        result[0] += 0;
        result[1] += 0.0003681885125184094;
        result[2] += 0.005154639175257732;
        result[3] += 0.9944771723122239;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6271186440677966;
        result[4] += 0.3728813559322034;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.30636392708666454;
        result[1] += 0.0063959066197633516;
        result[2] += 0.004796929964822514;
        result[3] += 0.6111288775183882;
        result[4] += 0.07131435881036137;
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
        result[0] += 0.4319148936170213;
        result[1] += 0;
        result[2] += 0.03404255319148936;
        result[3] += 0.5340425531914894;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.0013054830287206269;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9973890339425588;
        result[5] += 0.0013054830287206269;
        result[6] += 0;
      } else {
        result[0] += 0.13205207687538748;
        result[1] += 0.0006199628022318661;
        result[2] += 0.01735895846249225;
        result[3] += 0.8487290762554247;
        result[4] += 0;
        result[5] += 0.0012399256044637321;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9996546696339498;
        result[1] += 0;
        result[2] += 0.000345330366050188;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6839138312864909;
        result[1] += 0.0013086370042279041;
        result[2] += 0.005335212401852225;
        result[3] += 0.30813368230320115;
        result[4] += 0;
        result[5] += 0.00020132876988121604;
        result[6] += 0.001107308234346688;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.47040690505548705;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12268803945745993;
        result[4] += 0.406905055487053;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006342494714587738;
        result[3] += 0.9696969696969697;
        result[4] += 0.021846370683579985;
        result[5] += 0.0021141649048625794;
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
        result[1] += 0.042328042328042326;
        result[2] += 0;
        result[3] += 0.9576719576719577;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9956875898418783;
        result[1] += 0;
        result[2] += 0.003833253473885961;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004791566842357451;
      } else {
        result[0] += 0.9997871978209056;
        result[1] += 0;
        result[2] += 0.00021280217909431392;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9447211155378487;
        result[1] += 0.0038180610889774237;
        result[2] += 0.0073041168658698535;
        result[3] += 0.04415670650730412;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.4177422286856935;
        result[1] += 0;
        result[2] += 0.00618069441919651;
        result[3] += 0.5748045809852754;
        result[4] += 0;
        result[5] += 0.00018178512997636792;
        result[6] += 0.0010907107798582077;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9974193548387097;
        result[5] += 0.0025806451612903226;
        result[6] += 0;
      } else {
        result[0] += 0.1984084880636605;
        result[1] += 0.0002652519893899204;
        result[2] += 0.004244031830238726;
        result[3] += 0.7954907161803714;
        result[4] += 0;
        result[5] += 0.0015915119363395225;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6621004566210046;
        result[4] += 0.3378995433789954;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007887323943661971;
        result[2] += 0;
        result[3] += 0.009577464788732394;
        result[4] += 0.9825352112676057;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.9991796554552912;
        result[1] += 0;
        result[2] += 0.00027344818156959256;
        result[3] += 0.0005468963631391851;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9943032159264932;
        result[1] += 6.125574272588056e-05;
        result[2] += 0.000551301684532925;
        result[3] += 0.005022970903522206;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.125574272588056e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993075990998789;
        result[1] += 0;
        result[2] += 0.0006924009001211701;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6957686127477236;
        result[1] += 0.0016961256918407428;
        result[2] += 0.008480628459203714;
        result[3] += 0.29280485627566505;
        result[4] += 0;
        result[5] += 8.926977325477593e-05;
        result[6] += 0.001160507052312087;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9984527168471831;
        result[1] += 0;
        result[2] += 0.0014562664967689087;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.101665604805679e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.01460634128963306;
        result[1] += 0.004809405058781618;
        result[2] += 0.010509440684004275;
        result[3] += 0.6872105450659066;
        result[4] += 0.28215176344852155;
        result[5] += 0.0007125044531528322;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.017471736896197326;
        result[2] += 0;
        result[3] += 0.08735868448098665;
        result[4] += 0.895169578622816;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5518650088809947;
        result[1] += 0;
        result[2] += 0.0023090586145648314;
        result[3] += 0.4454706927175844;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00035523978685612787;
      } else {
        result[0] += 0.9727181544633902;
        result[1] += 0;
        result[2] += 0.005817452357071214;
        result[3] += 0.020060180541624874;
        result[4] += 0;
        result[5] += 0.00020060180541624874;
        result[6] += 0.0012036108324974925;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)47) ) ) {
        result[0] += 0.9702970297029703;
        result[1] += 0;
        result[2] += 0.0297029702970297;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0481335952848723;
        result[1] += 0.0026195153896529143;
        result[2] += 0.0026195153896529143;
        result[3] += 0.6555337262606418;
        result[4] += 0.2910936476751801;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0;
        result[1] += 0.05016722408026756;
        result[2] += 0;
        result[3] += 0.19732441471571907;
        result[4] += 0.7525083612040134;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.038461538461538464;
        result[4] += 0.9615384615384616;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.20305480682839175;
        result[1] += 0;
        result[2] += 0.0008984725965858043;
        result[3] += 0.1680143755615454;
        result[4] += 0.6280323450134772;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0023828435266084196;
        result[2] += 0.015091342335186657;
        result[3] += 0.9451945988880064;
        result[4] += 0.03653693407466243;
        result[5] += 0.0007942811755361397;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9994252653358366;
        result[1] += 0;
        result[2] += 0.0004981033756082608;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.663128855511705e-05;
      } else {
        result[0] += 0.6772566817952597;
        result[1] += 0.001815431164901664;
        result[2] += 0.0049420070600100854;
        result[3] += 0.3152798789712557;
        result[4] += 0;
        result[5] += 0.00020171457387796267;
        result[6] += 0.0005042864346949068;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)34.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995706081262412;
        result[1] += 0;
        result[2] += 0.00037571788953894047;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.367398421984864e-05;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.020563594821020565;
        result[1] += 0.002030972328002031;
        result[2] += 0.015993907083015995;
        result[3] += 0.7204874333587205;
        result[4] += 0.24016247778624017;
        result[5] += 0.0007616146230007616;
        result[6] += 0;
      } else {
        result[0] += 0.7427790788446527;
        result[1] += 0;
        result[2] += 0.00312256049960968;
        result[3] += 0.25322014051522246;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008782201405152225;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.1275199249882794;
        result[1] += 0.0046882325363338025;
        result[2] += 0.005625879043600563;
        result[3] += 0.542428504453821;
        result[4] += 0.3197374589779653;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.004214963119072708;
        result[1] += 0.015806111696522657;
        result[2] += 0;
        result[3] += 0.09694415173867228;
        result[4] += 0.8830347734457323;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        result[0] += 0.9988160518444666;
        result[1] += 0;
        result[2] += 0.0011216350947158525;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.231306081754735e-05;
      } else {
        result[0] += 0.9999015360378102;
        result[1] += 0;
        result[2] += 9.846396218983852e-05;
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
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)76.5) ) ) {
        result[0] += 0.6891281695032998;
        result[1] += 0.0022577283779089963;
        result[2] += 0.0020840569642236887;
        result[3] += 0.30444598819034385;
        result[4] += 0.0012156998957971517;
        result[5] += 0.0001736714136853074;
        result[6] += 0.0006946856547412296;
      } else {
        result[0] += 0.32244242099625064;
        result[1] += 0.005356186395286556;
        result[2] += 0.0058918050348152114;
        result[3] += 0.611140867702196;
        result[4] += 0.05516871987145153;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.5606707799398829;
        result[1] += 0.0022148394241417496;
        result[2] += 0.006960923904445499;
        result[3] += 0.16057585825027684;
        result[4] += 0.2686283815851922;
        result[5] += 0.00015820281601012498;
        result[6] += 0.0007910140800506249;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005079175380938153;
        result[3] += 0.8105766357932477;
        result[4] += 0.18404541380340603;
        result[5] += 0.00029877502240812666;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.1199238578680203;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8369289340101523;
        result[4] += 0.04314720812182741;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.04434250764525994;
        result[1] += 0.019877675840978593;
        result[2] += 0.016819571865443424;
        result[3] += 0;
        result[4] += 0.9143730886850153;
        result[5] += 0.0045871559633027525;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9854288093255621;
        result[1] += 0;
        result[2] += 0.0005203996669442132;
        result[3] += 0.013842631140716072;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002081598667776853;
      } else {
        result[0] += 0.5506502395619439;
        result[1] += 0;
        result[2] += 0.006844626967830253;
        result[3] += 0.4404517453798768;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002053388090349076;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)28) ) ) {
        result[0] += 0.9900990099009901;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009900990099009901;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0008010680907877169;
        result[2] += 0.003471295060080107;
        result[3] += 0.5100133511348465;
        result[4] += 0.4835781041388518;
        result[5] += 0.002136181575433912;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9996056782334385;
        result[1] += 0;
        result[2] += 0.00033799008562415505;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.633168093735917e-05;
      } else {
        result[0] += 0.697091124962897;
        result[1] += 0.003116651825467498;
        result[2] += 0.00578806767586821;
        result[3] += 0.2934105075690116;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005936479667557139;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += 0.9995459704880818;
        result[1] += 0;
        result[2] += 0.00041619371925841854;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.783579265985623e-05;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)85.5) ) ) {
        result[0] += 0.6921201232032854;
        result[1] += 0.0026950718685831623;
        result[2] += 0.003208418891170431;
        result[3] += 0.30094969199178645;
        result[4] += 0.00038501026694045176;
        result[5] += 0;
        result[6] += 0.0006416837782340862;
      } else {
        result[0] += 0.3612455630848661;
        result[1] += 0;
        result[2] += 0.011777992900935785;
        result[3] += 0.47305582445950306;
        result[4] += 0.1526298806066473;
        result[5] += 0.00016134236850596966;
        result[6] += 0.0011293965795417876;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.010714285714285714;
        result[1] += 0.03214285714285714;
        result[2] += 0;
        result[3] += 0.10714285714285714;
        result[4] += 0.85;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1564569536423841;
        result[1] += 0.011589403973509934;
        result[2] += 0;
        result[3] += 0.831953642384106;
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
        result[0] += 0.27298850574712646;
        result[1] += 0;
        result[2] += 0.04310344827586207;
        result[3] += 0.6839080459770115;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998468606431853;
        result[5] += 0.0015313935681470138;
        result[6] += 0;
      } else {
        result[0] += 0.20407009609949123;
        result[1] += 0.005652911249293386;
        result[2] += 0.008479366873940079;
        result[3] += 0.781232334652346;
        result[4] += 0;
        result[5] += 0.0005652911249293386;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.8546511627906977;
        result[1] += 0;
        result[2] += 0.0017551557700745944;
        result[3] += 0.14337428696796845;
        result[4] += 0;
        result[5] += 0.0002193944712593243;
        result[6] += 0;
      } else {
        result[0] += 0.9925046845721424;
        result[1] += 0;
        result[2] += 0.0024984384759525295;
        result[3] += 0.003435352904434728;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001561524047470331;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9549073392654044;
        result[1] += 0.0002007091724091791;
        result[2] += 0.0006021275172275373;
        result[3] += 0.01197564728708102;
        result[4] += 0.03211346758546866;
        result[5] += 0;
        result[6] += 0.0002007091724091791;
      } else {
        result[0] += 0.7308667004561582;
        result[1] += 0.0012671059300557528;
        result[2] += 0.005152897448893395;
        result[3] += 0.24725460381821257;
        result[4] += 0.01512079743199865;
        result[5] += 0.0003378949146815341;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.0603448275862069;
        result[1] += 0.007053291536050157;
        result[2] += 0.01018808777429467;
        result[3] += 0.5164576802507836;
        result[4] += 0.4059561128526646;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001430615164520744;
        result[2] += 0;
        result[3] += 0.04721030042918455;
        result[4] += 0.9513590844062947;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.2275409836065574;
        result[1] += 0.009180327868852459;
        result[2] += 0;
        result[3] += 0.7619672131147541;
        result[4] += 0.0013114754098360656;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5264452644526446;
        result[1] += 0;
        result[2] += 0.02644526445264453;
        result[3] += 0.4305043050430505;
        result[4] += 0.01660516605166052;
        result[5] += 0;
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
        result[1] += 0.03642384105960265;
        result[2] += 0;
        result[3] += 0.9635761589403974;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9998741980123286;
        result[1] += 0;
        result[2] += 0.0001258019876714052;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5522776572668113;
        result[1] += 0;
        result[2] += 0.00824295010845987;
        result[3] += 0.3989154013015184;
        result[4] += 0.039045553145336226;
        result[5] += 0.0004338394793926247;
        result[6] += 0.0010845986984815619;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9566351483534399;
        result[1] += 6.521030322791e-05;
        result[2] += 0.00052168242582328;
        result[3] += 0.012389957613302902;
        result[4] += 0.030322791000978153;
        result[5] += 0;
        result[6] += 6.521030322791e-05;
      } else {
        result[0] += 0.7653325655053268;
        result[1] += 0.0014396775122372588;
        result[2] += 0.002975333525290335;
        result[3] += 0.22506958441309147;
        result[4] += 0.004606968039159228;
        result[5] += 0.00028793550244745177;
        result[6] += 0.00028793550244745177;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)57) ) ) {
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
        result[4] += 0.9992119779353822;
        result[5] += 0.0007880220646178094;
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
        result[1] += 0.004365450576863112;
        result[2] += 0.0077954474586841285;
        result[3] += 0.9859681945743686;
        result[4] += 0;
        result[5] += 0.0018709073900841909;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9948320413436692;
        result[1] += 0;
        result[2] += 0.00516795865633075;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994810586403737;
        result[1] += 0;
        result[2] += 0.0004790227935012575;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.9918566125104796e-05;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)55) ) ) {
        result[0] += 0.7158761766835626;
        result[1] += 0.0009956553222302679;
        result[2] += 0.005792903692976104;
        result[3] += 0.27652063721940623;
        result[4] += 0;
        result[5] += 0.00018102824040550325;
        result[6] += 0.0006335988414192614;
      } else {
        result[0] += 0.16270566727605118;
        result[1] += 0.027422303473491772;
        result[2] += 0;
        result[3] += 0.8098720292504571;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.8914520915095243;
        result[1] += 0;
        result[2] += 0.0007657700775342204;
        result[3] += 0.10041160141667464;
        result[4] += 0.007179094476883315;
        result[5] += 9.572125969177755e-05;
        result[6] += 9.572125969177755e-05;
      } else {
        result[0] += 0.5278145695364238;
        result[1] += 0;
        result[2] += 0.01390728476821192;
        result[3] += 0.39966887417218544;
        result[4] += 0.05662251655629139;
        result[5] += 0.0013245033112582781;
        result[6] += 0.0006622516556291391;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9991226146084669;
        result[1] += 0;
        result[2] += 0.0006580390436499233;
        result[3] += 0;
        result[4] += 0.00010967317394165389;
        result[5] += 0;
        result[6] += 0.00010967317394165389;
      } else {
        result[0] += 0.5457029026750142;
        result[1] += 0.001707455890722823;
        result[2] += 0.004894706886738759;
        result[3] += 0.3705179282868526;
        result[4] += 0.07649402390438247;
        result[5] += 0.0005691519635742744;
        result[6] += 0.00011383039271485487;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)110) ) ) {
        result[0] += 0;
        result[1] += 0.05128205128205128;
        result[2] += 0;
        result[3] += 0.9487179487179487;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0027548209366391185;
        result[1] += 0.01790633608815427;
        result[2] += 0;
        result[3] += 0.004132231404958678;
        result[4] += 0.9752066115702479;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.16283185840707964;
        result[1] += 0.011504424778761062;
        result[2] += 0;
        result[3] += 0.8256637168141593;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08163265306122448;
        result[1] += 0;
        result[2] += 0.011131725417439703;
        result[3] += 0.1901669758812616;
        result[4] += 0.7170686456400742;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)5624.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += 0.9993540297146332;
        result[1] += 0;
        result[2] += 0.0006079720332864689;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.7998252080404305e-05;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)93.5) ) ) {
        result[0] += 0.5316322963998602;
        result[1] += 0.0028836071303739953;
        result[2] += 0.00611674239776302;
        result[3] += 0.3068857042991961;
        result[4] += 0.15221950367004544;
        result[5] += 0;
        result[6] += 0.0002621461027612723;
      } else {
        result[0] += 0.9643574297188755;
        result[1] += 0;
        result[2] += 0.010542168674698794;
        result[3] += 0.01957831325301205;
        result[4] += 0.0025100401606425703;
        result[5] += 0.000502008032128514;
        result[6] += 0.0025100401606425703;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015873015873015872;
        result[3] += 0;
        result[4] += 0.9797979797979798;
        result[5] += 0.004329004329004329;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0009832841691248771;
        result[2] += 0.005571943625040971;
        result[3] += 0.9934447722058342;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0005482456140350877;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994517543859649;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.18633383761976802;
        result[1] += 0.00529500756429652;
        result[2] += 0.0015128593040847202;
        result[3] += 0.8061018658598084;
        result[4] += 0;
        result[5] += 0.0007564296520423601;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)64) ) ) {
        result[0] += 0.9943723564413219;
        result[1] += 0.0005018280880349846;
        result[2] += 0.0028675890744856262;
        result[3] += 0.0022223815327263603;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.5844863431070325e-05;
      } else {
        result[0] += 0.0036231884057971015;
        result[1] += 0.043478260869565216;
        result[2] += 0;
        result[3] += 0.9528985507246377;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)44.5) ) ) {
        result[0] += 0.16222042576125034;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8377795742387497;
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
        result[2] += 0.04113475177304964;
        result[3] += 0;
        result[4] += 0.9574468085106383;
        result[5] += 0.0014184397163120568;
        result[6] += 0;
      } else {
        result[0] += 0.991394658753709;
        result[1] += 0;
        result[2] += 0.005044510385756676;
        result[3] += 0.0002967359050445103;
        result[4] += 0;
        result[5] += 0.0005934718100890206;
        result[6] += 0.002670623145400593;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-8.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)29.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5833333333333334;
        result[4] += 0.4166666666666667;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
        result[0] += 0.12643475189828712;
        result[1] += 0.002472187886279357;
        result[2] += 0.0015892636411795867;
        result[3] += 0.5587144622991347;
        result[4] += 0.3100829948790394;
        result[5] += 0.0007063393960798164;
        result[6] += 0;
      } else {
        result[0] += 0.9853763897740954;
        result[1] += 0.0007435734013171871;
        result[2] += 0.0022307202039515616;
        result[3] += 0.011578500106224772;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.081651441116069e-05;
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
        result[0] += 0.24131320393002637;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7586867960699737;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.9845284141624516;
        result[1] += 0;
        result[2] += 0.01309134186254091;
        result[3] += 0.0008925914906277894;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001487652484379649;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0031545741324921135;
        result[3] += 0;
        result[4] += 0.9921135646687698;
        result[5] += 0.00473186119873817;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36.5) ) ) {
        result[0] += 0;
        result[1] += 0.007403979639055993;
        result[2] += 0.007403979639055993;
        result[3] += 0.8574733919481722;
        result[4] += 0.12771864877371586;
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
        result[0] += 0.4883720930232558;
        result[1] += 0;
        result[2] += 0.030232558139534883;
        result[3] += 0.4813953488372093;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.024326101249178174;
        result[4] += 0.9756738987508218;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.13286713286713286;
        result[1] += 0.0005827505827505828;
        result[2] += 0.005244755244755245;
        result[3] += 0.837995337995338;
        result[4] += 0.02097902097902098;
        result[5] += 0.002331002331002331;
        result[6] += 0;
      } else {
        result[0] += 0.9948277759436558;
        result[1] += 0.0005502366017387477;
        result[2] += 0.0008436961226660798;
        result[3] += 0.003741608891823484;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.668244011591651e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4499809813617345;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5500190186382655;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.823064013426037;
        result[1] += 0;
        result[2] += 0.010788779669144091;
        result[3] += 0.0007192519779429394;
        result[4] += 0.16350994965236154;
        result[5] += 0.0004795013186286262;
        result[6] += 0.0014385039558858787;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.23394495412844038;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7580275229357798;
        result[4] += 0.005733944954128441;
        result[5] += 0.0022935779816513763;
        result[6] += 0;
      } else {
        result[0] += 0.9951477248220832;
        result[1] += 0.00046725612824383584;
        result[2] += 0.0008626266982963123;
        result[3] += 0.0034145640140895695;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010782833728703904;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.14439503861455652;
        result[1] += 0.003276386613620407;
        result[2] += 0.011467353147671425;
        result[3] += 0.6117481862859817;
        result[4] += 0.2288790077229113;
        result[5] += 0.0002340276152586005;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.017507723995880537;
        result[2] += 0;
        result[3] += 0.10607621009268794;
        result[4] += 0.8764160659114315;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)59.5) ) ) {
        result[0] += 0.4583656080557707;
        result[1] += 0;
        result[2] += 0.006003098373353989;
        result[3] += 0.5356312935708752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8933764135702746;
        result[1] += 0;
        result[2] += 0.005385029617662897;
        result[3] += 0.09585352719439957;
        result[4] += 0.002154011847065159;
        result[5] += 0.0008077544426494346;
        result[6] += 0.0024232633279483036;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)29) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02702702702702703;
        result[3] += 0;
        result[4] += 0.972972972972973;
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
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)4715.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9985891438330734;
        result[1] += 0;
        result[2] += 0.0014108561669265612;
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.618140123359165;
        result[1] += 0.0014233749802309032;
        result[2] += 0.006326111023248459;
        result[3] += 0.32033844693974384;
        result[4] += 0.052585797880752815;
        result[5] += 7.907638779060574e-05;
        result[6] += 0.0011070694290684804;
      } else {
        result[0] += 0.07303609341825902;
        result[1] += 0.0029723991507431;
        result[2] += 0.019532908704883226;
        result[3] += 0.9023354564755839;
        result[4] += 0.0012738853503184713;
        result[5] += 0.0008492569002123143;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4246031746031746;
        result[4] += 0.5753968253968254;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0006693440428380187;
        result[1] += 0.011378848728246318;
        result[2] += 0;
        result[3] += 0.051539491298527446;
        result[4] += 0.9364123159303882;
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
        result[1] += 0.0005803830528148578;
        result[2] += 0;
        result[3] += 0.9332559489262914;
        result[4] += 0.06558328496807893;
        result[5] += 0.0005803830528148578;
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
        result[0] += 0.7703703703703704;
        result[1] += 0.1037037037037037;
        result[2] += 0.1259259259259259;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.4152892561983471;
        result[1] += 0.02066115702479339;
        result[2] += 0;
        result[3] += 0.5640495867768595;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9970505771401522;
        result[1] += 0.00047336416269162145;
        result[2] += 0.001966281906565197;
        result[3] += 0.0003277136510941995;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001820631394967775;
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
        result[0] += 0.4092827004219409;
        result[1] += 0;
        result[2] += 0.0056870299027701335;
        result[3] += 0.5837461016327279;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001284168042560998;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.16275924256086566;
        result[1] += 0.005410279531109108;
        result[2] += 0;
        result[3] += 0.6284941388638413;
        result[4] += 0.20333633904418394;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3784916201117318;
        result[1] += 0;
        result[2] += 0.012569832402234637;
        result[3] += 0.3812849162011173;
        result[4] += 0.2276536312849162;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)102) ) ) {
        result[0] += 0.01098901098901099;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.989010989010989;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.014002333722287048;
        result[2] += 0;
        result[3] += 0.003500583430571762;
        result[4] += 0.9824970828471412;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
        result[0] += 0.9847438111686818;
        result[1] += 0.00014392630972941858;
        result[2] += 0.00100748416810593;
        result[3] += 0.013720974860871238;
        result[4] += 0.00023987718288236428;
        result[5] += 0.00014392630972941858;
        result[6] += 0;
      } else {
        result[0] += 0.7442528735632183;
        result[1] += 0.0008045977011494253;
        result[2] += 0.0041954022988505745;
        result[3] += 0.24051724137931035;
        result[4] += 0.009137931034482759;
        result[5] += 0.0004597701149425287;
        result[6] += 0.000632183908045977;
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
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0.5;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)86) ) ) {
        result[0] += 0.19547487503288608;
        result[1] += 0.00026308866087871614;
        result[2] += 0;
        result[3] += 0.8016311496974481;
        result[4] += 0.0023677979479084454;
        result[5] += 0.00026308866087871614;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.023129251700680274;
        result[3] += 0;
        result[4] += 0.9741496598639456;
        result[5] += 0.00272108843537415;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0;
        result[1] += 0.018627450980392157;
        result[2] += 0;
        result[3] += 0.16176470588235295;
        result[4] += 0.8196078431372549;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.03856749311294766;
        result[2] += 0;
        result[3] += 0.9614325068870524;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9994520976831559;
        result[1] += 0;
        result[2] += 0.0005479023168440826;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7045957918050942;
        result[1] += 0.0016611295681063125;
        result[2] += 0.006275378368401625;
        result[3] += 0.28691399040236254;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005537098560354375;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0.9481194824041601;
        result[1] += 0.0015721368968436328;
        result[2] += 0.0029024065787882454;
        result[3] += 0.047043173297859474;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00036280082234853067;
      } else {
        result[0] += 0.996641734086399;
        result[1] += 0.00015264845061822624;
        result[2] += 0.0002035312674909683;
        result[3] += 0.002645906477382588;
        result[4] += 0.0003052969012364525;
        result[5] += 5.0882816872742075e-05;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)43.5) ) ) {
        result[0] += 0.17416994935284186;
        result[1] += 0;
        result[2] += 0.009003939223410242;
        result[3] += 0.7850309510410804;
        result[4] += 0.031795160382667415;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9948748275182338;
        result[1] += 0;
        result[2] += 0.0033510743150009857;
        result[3] += 0.000788488074117879;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009856100926473486;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
        result[0] += 0.27136604469016357;
        result[1] += 0.0036857866850956;
        result[2] += 0.01428242340474545;
        result[3] += 0.6956922368117945;
        result[4] += 0.014973508408200876;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001971414489896501;
        result[1] += 0.005421389847215377;
        result[2] += 0;
        result[3] += 0.14391325776244454;
        result[4] += 0.8486939379004436;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)2.5) ) ) {
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
        result[4] += 0.38461538461538464;
        result[5] += 0.6153846153846154;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.997872340425532;
        result[5] += 0.002127659574468085;
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
        result[1] += 0.006670902160101652;
        result[2] += 0.007306226175349428;
        result[3] += 0.9850698856416773;
        result[4] += 0;
        result[5] += 0.0009529860228716646;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)91) ) ) {
        result[0] += 0.9970680855684657;
        result[1] += 0.0006153400658775836;
        result[2] += 0.0019184131465595253;
        result[3] += 0.00021717884678032362;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018098237231693636;
      } else {
        result[0] += 0.3395348837209302;
        result[1] += 0.009302325581395349;
        result[2] += 0;
        result[3] += 0.6511627906976745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.44625686813186816;
        result[1] += 0;
        result[2] += 0.0018887362637362637;
        result[3] += 0.5518543956043956;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.987040385774563;
        result[1] += 0;
        result[2] += 0.0108499095840868;
        result[3] += 0.0012055455093429777;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009041591320072332;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994283100846101;
        result[1] += 0;
        result[2] += 0.0005335772543638997;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.811266102599284e-05;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995915032679739;
        result[5] += 0.0004084967320261438;
        result[6] += 0;
      } else {
        result[0] += 0.017556517556517555;
        result[1] += 0.009860509860509861;
        result[2] += 0.016594516594516596;
        result[3] += 0.9552669552669553;
        result[4] += 0;
        result[5] += 0.0007215007215007215;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)92.5) ) ) {
        result[0] += 0.9933043187144293;
        result[1] += 0.0001673920321392702;
        result[2] += 0.006193505189152997;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003347840642785404;
      } else {
        result[0] += 0.4306179174684627;
        result[1] += 0;
        result[2] += 0.005345306820611503;
        result[3] += 0.5625400898011546;
        result[4] += 0;
        result[5] += 0.00021381227282446012;
        result[6] += 0.0012828736369467607;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        result[1] += 0.00815313718539525;
        result[2] += 0.008507621410847217;
        result[3] += 0.9822757887274016;
        result[4] += 0;
        result[5] += 0.0010634526763559022;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9967464672461516;
        result[1] += 0;
        result[2] += 0.0008255232360510854;
        result[3] += 0.0023794493274413636;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.85601903559462e-05;
      } else {
        result[0] += 0.25;
        result[1] += 0.038461538461538464;
        result[2] += 0;
        result[3] += 0.7115384615384616;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.524758926244462;
        result[1] += 0.0033880635913474074;
        result[2] += 0.007818608287724786;
        result[3] += 0.46351316132395104;
        result[4] += 0;
        result[5] += 0.00013031013812874644;
        result[6] += 0.0003909304143862393;
      } else {
        result[0] += 0.9854982390718874;
        result[1] += 0;
        result[2] += 0.0032111042055106695;
        result[3] += 0.010565568676196397;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007250880464056351;
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
        result[0] += 0.008571428571428572;
        result[1] += 0.011904761904761904;
        result[2] += 0.007619047619047619;
        result[3] += 0.9719047619047619;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9886128364389234;
        result[1] += 0;
        result[2] += 0.011387163561076604;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0.25;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.75;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.99950555301993;
        result[1] += 0;
        result[2] += 0.0004944469800699832;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.7937628044616435;
        result[1] += 0.002503983610289096;
        result[2] += 0.006259959025722741;
        result[3] += 0.18028681994081494;
        result[4] += 0.014910084224903255;
        result[5] += 0.0006829046209879354;
        result[6] += 0.0015934441156385158;
      } else {
        result[0] += 0;
        result[1] += 0.00026695141484249865;
        result[2] += 0.00800854244527496;
        result[3] += 0.8101975440469834;
        result[4] += 0.1809930592632141;
        result[5] += 0.0005339028296849973;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
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
        result[0] += 0.9993503019185203;
        result[1] += 0;
        result[2] += 0.0005732630130703967;
        result[3] += 0;
        result[4] += 3.821753420469311e-05;
        result[5] += 0;
        result[6] += 3.821753420469311e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.4985524912387628;
        result[1] += 0.0013713240895931737;
        result[2] += 0.006551881761389608;
        result[3] += 0.47828736858144144;
        result[4] += 0.01432271826908426;
        result[5] += 0.00015236934328813042;
        result[6] += 0.0007618467164406522;
      } else {
        result[0] += 0.9689942678478374;
        result[1] += 0;
        result[2] += 0.007556018759770714;
        result[3] += 0.02214695153725899;
        result[4] += 0;
        result[5] += 0.0005211047420531526;
        result[6] += 0.000781657113079729;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0.0030236393622869707;
        result[1] += 0.002473886750962067;
        result[2] += 0.007696536558548653;
        result[3] += 0.8188565145684442;
        result[4] += 0.1673996701484332;
        result[5] += 0.0005497526113249038;
        result[6] += 0;
      } else {
        result[0] += 0.9771986970684039;
        result[1] += 0;
        result[2] += 0.012214983713355049;
        result[3] += 0.010586319218241042;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-21) ) ) {
        result[0] += 0.0008517887563884157;
        result[1] += 0.01192504258943782;
        result[2] += 0;
        result[3] += 0.2580919931856899;
        result[4] += 0.7291311754684838;
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
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0.0005543237250554324;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9988913525498891;
        result[5] += 0.0005543237250554324;
        result[6] += 0;
      } else {
        result[0] += 0.0003589375448671931;
        result[1] += 0.003948312993539124;
        result[2] += 0.004307250538406317;
        result[3] += 0.9895908111988514;
        result[4] += 0;
        result[5] += 0.0017946877243359654;
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
        result[0] += 0.957983193277311;
        result[1] += 0;
        result[2] += 0.04201680672268908;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)26.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.9246376811594204;
        result[1] += 0;
        result[2] += 0.0028985507246376816;
        result[3] += 0.07246376811594205;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.44373284537968893;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5562671546203111;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9955189624394332;
        result[1] += 0.0006921927939087034;
        result[2] += 0.0019308535830084884;
        result[3] += 0.0016029727858938394;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002550183977558381;
      } else {
        result[0] += 0.647812047656163;
        result[1] += 0;
        result[2] += 0.004787885536131834;
        result[3] += 0.34684333593141076;
        result[4] += 0;
        result[5] += 0.00011134617525887985;
        result[6] += 0.0004453847010355194;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.15079059005013498;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8465098341689163;
        result[4] += 0.0011569610489780178;
        result[5] += 0.0015426147319706903;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0183585313174946;
        result[3] += 0;
        result[4] += 0.980561555075594;
        result[5] += 0.0010799136069114472;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9896246458923514;
        result[1] += 0.0004957507082152976;
        result[2] += 0.0023371104815864026;
        result[3] += 0.007330028328611899;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002124645892351275;
      } else {
        result[0] += 0.6435632183908047;
        result[1] += 0;
        result[2] += 0.003333333333333334;
        result[3] += 0.35206896551724143;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00103448275862069;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-39) ) ) {
        result[0] += 0.0035714285714285713;
        result[1] += 0.05714285714285714;
        result[2] += 0;
        result[3] += 0.08214285714285714;
        result[4] += 0.8571428571428571;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15306980656013458;
        result[1] += 0.010092514718250631;
        result[2] += 0;
        result[3] += 0.8368376787216149;
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
        result[0] += 0.30218068535825543;
        result[1] += 0;
        result[2] += 0.03426791277258567;
        result[3] += 0.6635514018691588;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)81) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)51) ) ) {
        result[0] += 0.9648682559598495;
        result[1] += 0;
        result[2] += 0.03136762860727729;
        result[3] += 0.0037641154328732747;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0796126949973104;
        result[1] += 0.003765465303926843;
        result[2] += 0.0010758472296933837;
        result[3] += 0.9144701452393761;
        result[4] += 0.0010758472296933837;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7083333333333334;
        result[4] += 0.2916666666666667;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006606606606606606;
        result[2] += 0;
        result[3] += 0.07147147147147147;
        result[4] += 0.9219219219219219;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        result[0] += 0.4;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994320763289414;
        result[1] += 0;
        result[2] += 0.0005679236710586097;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0034602076124567475;
        result[2] += 0;
        result[3] += 0.20184544405997693;
        result[4] += 0.7889273356401384;
        result[5] += 0.0057670126874279125;
        result[6] += 0;
      } else {
        result[0] += 0.6033086040760638;
        result[1] += 0.0009380063102242688;
        result[2] += 0.007077683977146755;
        result[3] += 0.37639635030272023;
        result[4] += 0.0117677155282681;
        result[5] += 0.00025581990278843696;
        result[6] += 0.00025581990278843696;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0;
        result[1] += 0.0002915451895043732;
        result[2] += 0;
        result[3] += 0.9370262390670554;
        result[4] += 0.06151603498542274;
        result[5] += 0.0011661807580174927;
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
        result[0] += 0.9904761904761905;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.009523809523809525;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004391743522178305;
        result[2] += 0.00878348704435661;
        result[3] += 0;
        result[4] += 0.9868247694334651;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9942000966650556;
        result[1] += 0;
        result[2] += 0.005316578057032383;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004833252779120348;
      } else {
        result[0] += 0.9997863886871449;
        result[1] += 0;
        result[2] += 0.00021361131285512882;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.6702271498107085;
        result[1] += 0.0037858301784748512;
        result[2] += 0.011357490535424553;
        result[3] += 0.3136830719307734;
        result[4] += 0;
        result[5] += 0.00013520822065981613;
        result[6] += 0.0008112493239588967;
      } else {
        result[0] += 0.7438613384689455;
        result[1] += 0;
        result[2] += 0.00024073182474723152;
        result[3] += 0.2551757342320654;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007221954742416947;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.001375515818431912;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9958734525447043;
        result[5] += 0.002751031636863824;
        result[6] += 0;
      } else {
        result[0] += 0.11568627450980393;
        result[1] += 0.000326797385620915;
        result[2] += 0.007516339869281046;
        result[3] += 0.8748366013071895;
        result[4] += 0;
        result[5] += 0.0016339869281045752;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)87) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3159851301115242;
        result[4] += 0.6840148698884758;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00792507204610951;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9920749279538905;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9993078900533914;
        result[1] += 0;
        result[2] += 0.0005932370970931383;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.887284951552304e-05;
      } else {
        result[0] += 0.6932270916334662;
        result[1] += 0.00398406374501992;
        result[2] += 0;
        result[3] += 0.30278884462151395;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)45) ) ) {
        result[0] += 0.8207785798013449;
        result[1] += 0.000555247084952804;
        result[2] += 0.0038250354741193164;
        result[3] += 0.17428589055463015;
        result[4] += 0;
        result[5] += 6.169412055031155e-05;
        result[6] += 0.0004935529644024924;
      } else {
        result[0] += 0.1665150136487716;
        result[1] += 0.012738853503184714;
        result[2] += 0.01091901728844404;
        result[3] += 0.8098271155595996;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)3.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.998587570621469;
        result[5] += 0.0014124293785310734;
        result[6] += 0;
      } else {
        result[0] += 0.9838241590941529;
        result[1] += 4.757600266425615e-05;
        result[2] += 0.0010942480612778915;
        result[3] += 0.014938864836576431;
        result[4] += 9.51520053285123e-05;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.3486968449931413;
        result[1] += 0.00205761316872428;
        result[2] += 0.009190672153635117;
        result[3] += 0.5973936899862826;
        result[4] += 0.04197530864197531;
        result[5] += 0.00027434842249657066;
        result[6] += 0.00041152263374485596;
      } else {
        result[0] += 0.9412227761742324;
        result[1] += 0;
        result[2] += 0.0020117204583224003;
        result[3] += 0.05615324061926004;
        result[4] += 0;
        result[5] += 8.746610688358261e-05;
        result[6] += 0.0005247966413014956;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.16776315789473684;
        result[1] += 0.019736842105263157;
        result[2] += 0;
        result[3] += 0.7055921052631579;
        result[4] += 0.1069078947368421;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14201183431952663;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.20907297830374755;
        result[4] += 0.6489151873767258;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.10877626699629171;
        result[1] += 0.012360939431396786;
        result[2] += 0;
        result[3] += 0.6353522867737948;
        result[4] += 0.24351050679851668;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.012433392539964476;
        result[1] += 0;
        result[2] += 0.008880994671403197;
        result[3] += 0.12522202486678508;
        result[4] += 0.8534635879218473;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9967837824667414;
        result[1] += 0;
        result[2] += 0.0007309585302860484;
        result[3] += 0.0022903367282296186;
        result[4] += 0.00014619170605720968;
        result[5] += 0;
        result[6] += 4.8730568685736566e-05;
      } else {
        result[0] += 0.0137524557956778;
        result[1] += 0.0029469548133595285;
        result[2] += 0.019646365422396856;
        result[3] += 0.26227897838899805;
        result[4] += 0.7013752455795678;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)41.5) ) ) {
        result[0] += 0.3479325353645267;
        result[1] += 0.001632208922742111;
        result[2] += 0.008433079434167573;
        result[3] += 0.6007889009793254;
        result[4] += 0.03958106637649619;
        result[5] += 0.001088139281828074;
        result[6] += 0.000544069640914037;
      } else {
        result[0] += 0.9388884086783646;
        result[1] += 0;
        result[2] += 0.00224738525369522;
        result[3] += 0.05817270291295704;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006915031549831446;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)90.5) ) ) {
        result[0] += 0.3343465045592705;
        result[1] += 0;
        result[2] += 0.04559270516717325;
        result[3] += 0.6200607902735562;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.15060804490177737;
        result[1] += 0.013096351730589336;
        result[2] += 0;
        result[3] += 0.8362956033676333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)77.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6336633663366337;
        result[4] += 0.36633663366336633;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0006489292667099286;
        result[1] += 0.007787151200519144;
        result[2] += 0;
        result[3] += 0.05515898767034393;
        result[4] += 0.936404931862427;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)32) ) ) {
        result[0] += 0.9054771936252062;
        result[1] += 0.003114123465836234;
        result[2] += 0.0014654698662758749;
        result[3] += 0.08957684557611285;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003663674665689687;
      } else {
        result[0] += 0.9873180696229467;
        result[1] += 0.00021278406672908332;
        result[2] += 0.0005106817601498;
        result[3] += 0.011703123670099583;
        result[4] += 8.511362669163333e-05;
        result[5] += 0.00017022725338326666;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-31) ) ) {
        result[0] += 0;
        result[1] += 0.018641810918774968;
        result[2] += 0;
        result[3] += 0.10652463382157124;
        result[4] += 0.8748335552596538;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13153688056633936;
        result[1] += 0.0013701758392327015;
        result[2] += 0.014386846311943365;
        result[3] += 0.6035624571820051;
        result[4] += 0.24891527746060743;
        result[5] += 0.00022836263987211693;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)9.5) ) ) {
        result[0] += 0.360115508748089;
        result[1] += 0;
        result[2] += 0.00730422965856973;
        result[3] += 0.5206386954306098;
        result[4] += 0.1107525055206387;
        result[5] += 0.00033973161202649905;
        result[6] += 0.0008493290300662477;
      } else {
        result[0] += 0.8775510204081632;
        result[1] += 0;
        result[2] += 0.04081632653061224;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.08163265306122448;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0.004291845493562233;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9942775393419171;
        result[5] += 0.0014306151645207441;
        result[6] += 0;
      } else {
        result[0] += 0.12696245733788397;
        result[1] += 0.0006825938566552901;
        result[2] += 0.005802047781569966;
        result[3] += 0.8645051194539249;
        result[4] += 0;
        result[5] += 0.0020477815699658703;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7214611872146118;
        result[4] += 0.2785388127853881;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.006997084548104956;
        result[2] += 0;
        result[3] += 0.0005830903790087463;
        result[4] += 0.9924198250728863;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)79.5) ) ) {
        result[0] += 0.9572368421052632;
        result[1] += 0.03618421052631579;
        result[2] += 0;
        result[3] += 0.006578947368421052;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08857142857142856;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9114285714285715;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.99950088305306;
        result[1] += 0;
        result[2] += 0.0004991169469400292;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6956002571874713;
        result[1] += 0.0011940846881601911;
        result[2] += 0.008726003490401396;
        result[3] += 0.2933774226141269;
        result[4] += 0;
        result[5] += 0.0001837053366400294;
        result[6] += 0.000918526683200147;
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
        result[0] += 0.9993487338620082;
        result[1] += 0;
        result[2] += 0.0005746465923457074;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.661954564609431e-05;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
        result[0] += 0.20375972342264478;
        result[1] += 0.003673292999135696;
        result[2] += 0.006050129645635264;
        result[3] += 0.4237251512532411;
        result[4] += 0.36279170267934313;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7910829441850122;
        result[1] += 0.0012230375806092952;
        result[2] += 0.005114520791638871;
        result[3] += 0.18556815654881031;
        result[4] += 0.01667778519012675;
        result[5] += 0;
        result[6] += 0.000333555703802535;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)101) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9986962190352021;
        result[4] += 0.0003259452411994785;
        result[5] += 0.0009778357235984355;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.029957203994293864;
        result[3] += 0;
        result[4] += 0.9686162624821684;
        result[5] += 0.0014265335235378032;
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
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)12.5) ) ) {
        result[0] += 0.6;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995444018375793;
        result[1] += 0;
        result[2] += 0.00034169862181555866;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011389954060518623;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
        result[0] += 0.014138118542686243;
        result[1] += 0.004168932390792097;
        result[2] += 0.01123799166213522;
        result[3] += 0.6835236541598695;
        result[4] += 0.2862062715243792;
        result[5] += 0.0007250317201377561;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.013171225937183385;
        result[2] += 0;
        result[3] += 0.10536980749746708;
        result[4] += 0.8814589665653495;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9806187103988073;
        result[1] += 0;
        result[2] += 0.004969561436203255;
        result[3] += 0.012796620698223382;
        result[4] += 0;
        result[5] += 0.00012423903590508137;
        result[6] += 0.0014908684308609765;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0007689350249903883;
        result[3] += 0.9992310649750096;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9957345971563981;
        result[1] += 0;
        result[2] += 0.0033175355450236967;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009478672985781991;
      } else {
        result[0] += 0.9997096038166355;
        result[1] += 0;
        result[2] += 0.0002903961833644472;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)77) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
        result[0] += 0.016898835350536653;
        result[1] += 0.003653802237953871;
        result[2] += 0.015071934231559716;
        result[3] += 0.8049783055492121;
        result[4] += 0.15757022151176067;
        result[5] += 0.0018269011189769354;
        result[6] += 0;
      } else {
        result[0] += 0.7421465968586388;
        result[1] += 0;
        result[2] += 0.004394166043380704;
        result[3] += 0.2521503365744204;
        result[4] += 0;
        result[5] += 9.349289454001497e-05;
        result[6] += 0.0012154076290201946;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.00301659125188537;
        result[1] += 0.01206636500754148;
        result[2] += 0;
        result[3] += 0.5444947209653093;
        result[4] += 0.440422322775264;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.020738820479585224;
        result[4] += 0.9792611795204148;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-4.5) ) ) {
        result[0] += 0.0019455252918287938;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9961089494163424;
        result[5] += 0.0019455252918287938;
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
        result[0] += 0.07197943444730077;
        result[1] += 0.006610356224752111;
        result[2] += 0.006243114212265883;
        result[3] += 0.9140653690782226;
        result[4] += 0;
        result[5] += 0.0011017260374586854;
        result[6] += 0;
      } else {
        result[0] += 0.4537885095753539;
        result[1] += 0;
        result[2] += 0.0008326394671107411;
        result[3] += 0.5445462114904246;
        result[4] += 0;
        result[5] += 0.0008326394671107411;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
        result[0] += 0.9989276662117372;
        result[1] += 0;
        result[2] += 0.0010723337882628194;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
        result[0] += 0.9446952595936795;
        result[1] += 0.003386004514672686;
        result[2] += 0.009029345372460496;
        result[3] += 0.04256691389874234;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003224766204450177;
      } else {
        result[0] += 0.4173372348207754;
        result[1] += 0;
        result[2] += 0.00822970007315289;
        result[3] += 0.5733357717629847;
        result[4] += 0;
        result[5] += 0.000365764447695684;
        result[6] += 0.000731528895391368;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82) ) ) {
        result[0] += 0.08220211161387632;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9147812971342383;
        result[4] += 0.0022624434389140274;
        result[5] += 0.0007541478129713424;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.02953020134228188;
        result[3] += 0;
        result[4] += 0.9704697986577181;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7536945812807881;
        result[4] += 0.24630541871921183;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007009345794392523;
        result[2] += 0;
        result[3] += 0.002336448598130841;
        result[4] += 0.9906542056074766;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)40.5) ) ) {
        result[0] += 0.9989321608040201;
        result[1] += 0;
        result[2] += 0.0010678391959798995;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9999003189792663;
        result[1] += 0;
        result[2] += 9.968102073365231e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.8540145985401459;
        result[1] += 0.002221516978736909;
        result[2] += 0.008145562255368666;
        result[3] += 0.1345604569977785;
        result[4] += 0;
        result[5] += 0.0004231460911879826;
        result[6] += 0.0006347191367819739;
      } else {
        result[0] += 0;
        result[1] += 0.0010779734099892202;
        result[2] += 0.008264462809917356;
        result[3] += 0.9906575637800934;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)1) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9903121636167922;
        result[1] += 0;
        result[2] += 0.00968783638320775;
        result[3] += 0;
        result[4] += 0;
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
        result[0] += 0.9998334651734044;
        result[1] += 0;
        result[2] += 0.0001665348265956118;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.0035971223021582736;
        result[2] += 0.001199040767386091;
        result[3] += 0.23621103117505995;
        result[4] += 0.7577937649880095;
        result[5] += 0.001199040767386091;
        result[6] += 0;
      } else {
        result[0] += 0.5573600552868002;
        result[1] += 0.001589495507947477;
        result[2] += 0.006772633033863163;
        result[3] += 0.4299930891499653;
        result[4] += 0.0033172080165860393;
        result[5] += 0.00027643400138217;
        result[6] += 0.0006910850034554249;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)78.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7636363636363637;
        result[4] += 0.23636363636363636;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0005592841163310962;
        result[1] += 0.0044742729306487695;
        result[2] += 0;
        result[3] += 0.07829977628635347;
        result[4] += 0.9166666666666666;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)31) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-10.5) ) ) {
        result[0] += 0.9020003361909565;
        result[1] += 0;
        result[2] += 0.0023533366952428986;
        result[3] += 0.09547823163556901;
        result[4] += 0;
        result[5] += 0.0001680954782316356;
        result[6] += 0;
      } else {
        result[0] += 0.8744742801682304;
        result[1] += 0;
        result[2] += 0.0029116790682626984;
        result[3] += 0.12131996117761243;
        result[4] += 0.00048527984471044967;
        result[5] += 0;
        result[6] += 0.0008087997411840828;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9841901427131411;
        result[1] += 0.0010080110350681733;
        result[2] += 0.001379383521672237;
        result[3] += 0.013104143455886251;
        result[4] += 0;
        result[5] += 0.00010610642474401823;
        result[6] += 0.00021221284948803645;
      } else {
        result[0] += 0.694292277787595;
        result[1] += 0;
        result[2] += 0.0010602579961123874;
        result[3] += 0.2890970136066443;
        result[4] += 0.015550450609648348;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)108.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9993581514762516;
        result[5] += 0.0006418485237483953;
        result[6] += 0;
      } else {
        result[0] += 0.25832376578645233;
        result[1] += 0.002296211251435132;
        result[2] += 0.011251435132032146;
        result[3] += 0.7272101033295063;
        result[4] += 0;
        result[5] += 0.0009184845005740528;
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
        result[0] += 0.017857142857142856;
        result[1] += 0.125;
        result[2] += 0;
        result[3] += 0.8571428571428571;
        result[4] += 0;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
        result[0] += 0.9947229551451188;
        result[1] += 0;
        result[2] += 0.005277044854881266;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996496827682846;
        result[1] += 0;
        result[2] += 0.0003113930948581215;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.892413685726519e-05;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)1) ) ) {
        result[0] += 0.30430274753758424;
        result[1] += 0.005702436495593572;
        result[2] += 0.007257646448937273;
        result[3] += 0.6283048211508554;
        result[4] += 0.05443234836702955;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7001907404196289;
        result[1] += 0.0038148083925784635;
        result[2] += 0.0005202011444425178;
        result[3] += 0.2940870469915034;
        result[4] += 0.0005202011444425178;
        result[5] += 0.00017340038148083925;
        result[6] += 0.000693601525923357;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)89.5) ) ) {
        result[0] += 0.31047453703703703;
        result[1] += 0.003761574074074074;
        result[2] += 0.010127314814814815;
        result[3] += 0.17563657407407407;
        result[4] += 0.49971064814814814;
        result[5] += 0.00028935185185185184;
        result[6] += 0;
      } else {
        result[0] += 0.3891900510204082;
        result[1] += 0;
        result[2] += 0.008290816326530615;
        result[3] += 0.498405612244898;
        result[4] += 0.10267857142857144;
        result[5] += 0.0006377551020408164;
        result[6] += 0.0007971938775510205;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)83) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)76.5) ) ) {
        result[0] += 0.9962599345488546;
        result[1] += 0;
        result[2] += 0.0037400654511453952;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997107796554147;
        result[1] += 0;
        result[2] += 0.00028922034458538196;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.5;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9166666666666667;
        result[1] += 0.0017412935323383087;
        result[2] += 0.0038557213930348264;
        result[3] += 0.07649253731343285;
        result[4] += 0;
        result[5] += 0.000373134328358209;
        result[6] += 0.0008706467661691544;
      } else {
        result[0] += 0.10917750503755266;
        result[1] += 0.006594614398241436;
        result[2] += 0.011723758930206997;
        result[3] += 0.5581608353178238;
        result[4] += 0.3137937351163217;
        result[5] += 0.000549551199853453;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)21.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.019553072625698328;
        result[3] += 0;
        result[4] += 0.9734636871508381;
        result[5] += 0.006983240223463688;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0010211027910142954;
        result[2] += 0.005445881552076242;
        result[3] += 0.9935330156569094;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)7) ) ) {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)79) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.2376681614349776;
        result[1] += 0.00960922485586163;
        result[2] += 0;
        result[3] += 0.7514413837283793;
        result[4] += 0.0012812299807815504;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5245283018867924;
        result[1] += 0;
        result[2] += 0.027672955974842768;
        result[3] += 0.42955974842767297;
        result[4] += 0.018238993710691823;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)99.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007818608287724785;
        result[1] += 0.007036747458952306;
        result[2] += 0;
        result[3] += 0.23455824863174354;
        result[4] += 0.7576231430805317;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
        result[0] += 0.09216589861751152;
        result[1] += 0;
        result[2] += 0.012672811059907835;
        result[3] += 0.7050691244239631;
        result[4] += 0.19009216589861752;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8912806539509538;
        result[1] += 0;
        result[2] += 0.001907356948228883;
        result[3] += 0.10590372388737512;
        result[4] += 0;
        result[5] += 9.082652134423253e-05;
        result[6] += 0.0008174386920980928;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
        result[0] += 0.8949655782469905;
        result[1] += 0.0004615207107418945;
        result[2] += 0.0016922426060536134;
        result[3] += 0.10122687588938888;
        result[4] += 0.0013845621322256837;
        result[5] += 7.692011845698243e-05;
        result[6] += 0.00019230029614245606;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.005780346820809248;
        result[3] += 0;
        result[4] += 0.9942196531791907;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9957537154989384;
        result[5] += 0.004246284501061571;
        result[6] += 0;
      } else {
        result[0] += 0.13644859813084112;
        result[1] += 0;
        result[2] += 0.007850467289719627;
        result[3] += 0.8553271028037384;
        result[4] += 0;
        result[5] += 0.00037383177570093456;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 0.9995362139599598;
        result[1] += 0;
        result[2] += 0.0004637860400401948;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7133168362203282;
        result[1] += 0.0013747594171020072;
        result[2] += 0.004674182018146824;
        result[3] += 0.27990101732196865;
        result[4] += 0;
        result[5] += 9.165062780680047e-05;
        result[6] += 0.0006415543946476034;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)83) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0.00807899461400359;
        result[2] += 0;
        result[3] += 0.9919210053859964;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9706959706959707;
        result[1] += 0;
        result[2] += 0.029304029304029304;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.0020161290322580645;
        result[1] += 0.036290322580645164;
        result[2] += 0;
        result[3] += 0.18951612903225806;
        result[4] += 0.7721774193548387;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0032921810699588477;
        result[2] += 0;
        result[3] += 0.060082304526748974;
        result[4] += 0.9366255144032922;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
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
        result[0] += 0.9991993900114373;
        result[1] += 0;
        result[2] += 0.0007624857033930614;
        result[3] += 0;
        result[4] += 3.812428516965307e-05;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0024479804161566705;
        result[3] += 0.22766217870257038;
        result[4] += 0.769889840881273;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5795267335629773;
        result[1] += 0.0016474464579901153;
        result[2] += 0.006140482252508611;
        result[3] += 0.3880485247865808;
        result[4] += 0.023438670061404824;
        result[5] += 0.0005241875093604912;
        result[6] += 0.0006739553691777745;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.22857142857142856;
        result[4] += 0.7714285714285715;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13588850174216027;
        result[1] += 0.018815331010452963;
        result[2] += 0;
        result[3] += 0.6766550522648084;
        result[4] += 0.1686411149825784;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.18181818181818182;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2066115702479339;
        result[4] += 0.6115702479338843;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.016622922134733157;
        result[1] += 0;
        result[2] += 0.009623797025371828;
        result[3] += 0.11811023622047244;
        result[4] += 0.8556430446194225;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)24.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)6.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9949186991869918;
        result[5] += 0.00508130081300813;
        result[6] += 0;
      } else {
        result[0] += 0.1414027149321267;
        result[1] += 0.0007541478129713424;
        result[2] += 0.007918552036199095;
        result[3] += 0.8480392156862745;
        result[4] += 0;
        result[5] += 0.001885369532428356;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9905906399774457;
        result[1] += 0.0004933746828305611;
        result[2] += 0.002184945023963913;
        result[3] += 0.006625317169438962;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010572314632083451;
      } else {
        result[0] += 0.6543282876064334;
        result[1] += 0;
        result[2] += 0.0034295175023651846;
        result[3] += 0.3415326395458846;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007095553453169347;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)85) ) ) {
        result[0] += 0.250381679389313;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7465648854961832;
        result[4] += 0.0030534351145038168;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0020408163265306124;
        result[1] += 0.026530612244897958;
        result[2] += 0;
        result[3] += 0.14285714285714285;
        result[4] += 0.8285714285714286;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-29) ) ) {
        result[0] += 0;
        result[1] += 0.0035026269702276708;
        result[2] += 0;
        result[3] += 0.043782837127845885;
        result[4] += 0.9527145359019265;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07218844984802432;
        result[1] += 0.0022796352583586625;
        result[2] += 0.011398176291793313;
        result[3] += 0.48404255319148937;
        result[4] += 0.43009118541033436;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)7.5) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-2.5) ) ) {
        result[0] += 0.003289473684210526;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.993421052631579;
        result[5] += 0.003289473684210526;
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
        result[0] += 0.0009454774661203908;
        result[1] += 0.006618342262842736;
        result[2] += 0.0025212732429877086;
        result[3] += 0.9877087929404349;
        result[4] += 0;
        result[5] += 0.002206114087614245;
        result[6] += 0;
      } else {
        result[0] += 0.982573726541555;
        result[1] += 0;
        result[2] += 0.01742627345844504;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-8) ) ) {
        result[0] += 0.38095238095238093;
        result[1] += 0.021645021645021644;
        result[2] += 0;
        result[3] += 0.5974025974025974;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9972652689152235;
        result[1] += 0.0006198723792160438;
        result[2] += 0.0017137648131267094;
        result[3] += 0.00021877848678213311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001823154056517776;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.44806094182825484;
        result[1] += 0;
        result[2] += 0.001904432132963989;
        result[3] += 0.5500346260387812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9904513888888888;
        result[1] += 0;
        result[2] += 0.0078125;
        result[3] += 0.0011574074074074073;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005787037037037037;
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
        result[0] += 0.006750241080038573;
        result[1] += 0.010125361620057859;
        result[2] += 0.010607521697203472;
        result[3] += 0.9725168756027001;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9887766554433222;
        result[1] += 0;
        result[2] += 0.01122334455667789;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)386) ) ) {
        result[0] += 0.9994266931661825;
        result[1] += 0;
        result[2] += 0.0005350863782296285;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.822045558783061e-05;
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)33) ) ) {
        result[0] += 0.6488133127216514;
        result[1] += 0.0010002728016731837;
        result[2] += 0.00491043011730472;
        result[3] += 0.31835955260525606;
        result[4] += 0.026188960625625174;
        result[5] += 9.093389106119852e-05;
        result[6] += 0.0006365372374283896;
      } else {
        result[0] += 0.00925925925925926;
        result[1] += 0;
        result[2] += 0.010995370370370372;
        result[3] += 0.6475694444444445;
        result[4] += 0.32986111111111116;
        result[5] += 0.002314814814814815;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)49) ) ) {
        result[0] += 0.0008807985907222549;
        result[1] += 0.0002935995302407516;
        result[2] += 0;
        result[3] += 0.9330593071051086;
        result[4] += 0.06576629477392835;
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
        result[4] += 0.9995531724754245;
        result[5] += 0.00044682752457551384;
        result[6] += 0;
      } else {
        result[0] += 0.6558441558441559;
        result[1] += 0.11038961038961038;
        result[2] += 0.2077922077922078;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.025974025974025976;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)90.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)80.5) ) ) {
        result[0] += 0.9945889193991279;
        result[1] += 0.0018575351316427074;
        result[2] += 0.002907446293005977;
        result[3] += 8.07623970279438e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005653367791956066;
      } else {
        result[0] += 0.9829137272668436;
        result[1] += 0;
        result[2] += 0.0010355316807973594;
        result[3] += 0.016050741052359072;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)99.5) ) ) {
        result[0] += 0.4478132078759366;
        result[1] += 0;
        result[2] += 0.0015682174594877157;
        result[3] += 0.5506185746645758;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9896373056994818;
        result[1] += 0;
        result[2] += 0.007772020725388601;
        result[3] += 0.0014392630972941854;
        result[4] += 0;
        result[5] += 0.0002878526194588371;
        result[6] += 0.0008635578583765112;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)1753.5) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.9989773308334754;
        result[1] += 0;
        result[2] += 0.0010226691665246293;
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
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)-5.5) ) ) {
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
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)37) ) ) {
        result[0] += 0.9095095842668658;
        result[1] += 0.0011202389843166542;
        result[2] += 0.004107542942494399;
        result[3] += 0.08339556883246203;
        result[4] += 0;
        result[5] += 0.00024894199651481205;
        result[6] += 0.0016181229773462784;
      } else {
        result[0] += 0.10807315721411417;
        result[1] += 0.004433770552373915;
        result[2] += 0.010345464622205801;
        result[3] += 0.5492333271753187;
        result[4] += 0.3279142804359874;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0;
        result[1] += 0.0006646726487205051;
        result[2] += 0.005317381189764041;
        result[3] += 0.9940179461615155;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0188953488372093;
        result[3] += 0;
        result[4] += 0.9752906976744186;
        result[5] += 0.005813953488372093;
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
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
        result[0] += 0.19967177242888404;
        result[1] += 0.014223194748358862;
        result[2] += 0;
        result[3] += 0.7861050328227571;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.525764192139738;
        result[1] += 0;
        result[2] += 0.029694323144104803;
        result[3] += 0.44454148471615723;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)38.5) ) ) {
        result[0] += 0.9400556625990152;
        result[1] += 0;
        result[2] += 0.0008563476771569257;
        result[3] += 0.014272461285948761;
        result[4] += 0.044815528437879115;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9811834933817805;
        result[1] += 0;
        result[2] += 0.0019465351674020244;
        result[3] += 0.01570205035037633;
        result[4] += 0.0011679211004412147;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 0.43313805399898114;
        result[1] += 0.001782985226693836;
        result[2] += 0.007768721344880285;
        result[3] += 0.5383341823739175;
        result[4] += 0.0184666327050433;
        result[5] += 0.00025471217524197657;
        result[6] += 0.00025471217524197657;
      } else {
        result[0] += 0.984811209755054;
        result[1] += 0;
        result[2] += 0.001818376296930153;
        result[3] += 0.012835597390095198;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005348165579206332;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)35) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)42.5) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9850746268656716;
        result[1] += 0;
        result[2] += 0.014925373134328358;
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
        result[0] += 0.9993445079127259;
        result[1] += 0;
        result[2] += 0.0006554920872740894;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)37.5) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
        result[0] += 0.022384174908901613;
        result[1] += 0.009109838625715773;
        result[2] += 0.004685059864653826;
        result[3] += 0.8958875585632483;
        result[4] += 0.06689224362311297;
        result[5] += 0.001041124414367517;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.014383043149129448;
        result[3] += 0.17751703255109766;
        result[4] += 0.8073429220287661;
        result[5] += 0.000757002271006813;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)60.5) ) ) {
        result[0] += 0.5460503621938599;
        result[1] += 0;
        result[2] += 0.0010348395998620215;
        result[3] += 0.45274232493963434;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00017247326664367022;
      } else {
        result[0] += 0.9698136142625607;
        result[1] += 0;
        result[2] += 0.0074959481361426255;
        result[3] += 0.02147487844408428;
        result[4] += 0;
        result[5] += 0.0002025931928687196;
        result[6] += 0.001012965964343598;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)25.5) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)81.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)9.5) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16104575163398693;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8384313725490196;
        result[4] += 0;
        result[5] += 0.0005228758169934641;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)27) ) ) {
        result[0] += 0.8153846153846154;
        result[1] += 0;
        result[2] += 0.11538461538461539;
        result[3] += 0;
        result[4] += 0.06923076923076923;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0052173913043478265;
        result[2] += 0.006521739130434782;
        result[3] += 0;
        result[4] += 0.9878260869565217;
        result[5] += 0.0004347826086956522;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)-3) ) ) {
      if ( ( !(data[1].missing != -1) || (data[1].fvalue <= (float)0.5) ) ) {
        result[0] += 0.5;
        result[1] += 0.0203125;
        result[2] += 0;
        result[3] += 0.4796875;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3305785123966942;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6694214876033058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.9342654238792721;
        result[1] += 0.0007101642254771417;
        result[2] += 0.0038171327119396366;
        result[3] += 0.060807811806480254;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003994673768308922;
      } else {
        result[0] += 0.8707889747703077;
        result[1] += 0;
        result[2] += 0.001458363715910748;
        result[3] += 0.12775266151378153;
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
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
        result[0] += 0.5136341100644521;
        result[1] += 0;
        result[2] += 0.01636093207734259;
        result[3] += 0.47000495785820523;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13846153846153847;
        result[1] += 0.02027972027972028;
        result[2] += 0.004195804195804196;
        result[3] += 0.8370629370629371;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)-16) ) ) {
        result[0] += 0.2;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993924896533394;
        result[1] += 0;
        result[2] += 0.0005315715533280176;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.593879333257394e-05;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)0.5) ) ) {
        result[0] += 0.5452390359541683;
        result[1] += 0.0013170025023047543;
        result[2] += 0.009087317265902806;
        result[3] += 0.38153562491768733;
        result[4] += 0.061372316607401556;
        result[5] += 0.0002634005004609509;
        result[6] += 0.001185302252074279;
      } else {
        result[0] += 0.6202267993520019;
        result[1] += 0;
        result[2] += 0.0009257116408238834;
        result[3] += 0.32747049294144875;
        result[4] += 0.05045128442490164;
        result[5] += 0;
        result[6] += 0.0009257116408238834;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)4) ) ) {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)82.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)36) ) ) {
        result[0] += 0;
        result[1] += 0.007146260123868509;
        result[2] += 0.007146260123868509;
        result[3] += 0.8627918056217246;
        result[4] += 0.12291567413053835;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9975903614457832;
        result[1] += 0.0024096385542168677;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
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
        result[0] += 0.03233679072605247;
        result[1] += 0;
        result[2] += 0.006101281269066504;
        result[3] += 0.12141549725442342;
        result[4] += 0.8401464307504576;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
      if ( ( !(data[4].missing != -1) || (data[4].fvalue <= (float)23.5) ) ) {
        result[0] += 0.11999999999999997;
        result[1] += 0.0005405405405405404;
        result[2] += 0.005405405405405405;
        result[3] += 0.8016216216216214;
        result[4] += 0.07135135135135134;
        result[5] += 0.0010810810810810809;
        result[6] += 0;
      } else {
        result[0] += 0.9941997462388981;
        result[1] += 0.0004712706180895415;
        result[2] += 0.001305057096247961;
        result[3] += 0.0038426681167301074;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018125793003443905;
      }
    } else {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-0.5) ) ) {
        result[0] += 0.5202422696844119;
        result[1] += 0;
        result[2] += 0.00956327701625757;
        result[3] += 0.40771437679311445;
        result[4] += 0.0602486452024227;
        result[5] += 0.000637551801083838;
        result[6] += 0.0015938795027095952;
      } else {
        result[0] += 0.6343794806436195;
        result[1] += 0;
        result[2] += 0.0014338059582603153;
        result[3] += 0.277521108809941;
        result[4] += 0.08650629281503902;
        result[5] += 0.00015931177314003502;
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
        result[0] += 0.45235223160434257;
        result[1] += 0;
        result[2] += 0.019300361881785282;
        result[3] += 0.5283474065138721;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.12061068702290076;
        result[1] += 0.012977099236641221;
        result[2] += 0;
        result[3] += 0.8664122137404581;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)43.5) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)5) ) ) {
        result[0] += 0.9970431410567135;
        result[1] += 0;
        result[2] += 0.000290838584585555;
        result[3] += 0.002375181774115366;
        result[4] += 0.000290838584585555;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.010101010101010102;
        result[1] += 0.00202020202020202;
        result[2] += 0.013131313131313131;
        result[3] += 0.28585858585858587;
        result[4] += 0.6868686868686869;
        result[5] += 0.00202020202020202;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)45) ) ) {
        result[0] += 0.8039997153227528;
        result[1] += 0.0007828624297203046;
        result[2] += 0.004056650772187033;
        result[3] += 0.17906198847057148;
        result[4] += 0.010390719521742225;
        result[5] += 0.0007828624297203046;
        result[6] += 0.0009252010533058146;
      } else {
        result[0] += 0.47366790582403967;
        result[1] += 0;
        result[2] += 0.0027881040892193307;
        result[3] += 0.523543990086741;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)85.5) ) ) {
        result[0] += 0.5461091110495707;
        result[1] += 0;
        result[2] += 0.014400443090556632;
        result[3] += 0.3924120742176682;
        result[4] += 0.047078371642204374;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10765322324547476;
        result[1] += 0.007303906001905367;
        result[2] += 0.0022229279136233727;
        result[3] += 0.37218164496665607;
        result[4] += 0.5106382978723404;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)27) ) ) {
        result[0] += 0.793391719745223;
        result[1] += 0;
        result[2] += 0.006369426751592358;
        result[3] += 0.1994426751592357;
        result[4] += 0;
        result[5] += 0.00039808917197452237;
        result[6] += 0.00039808917197452237;
      } else {
        result[0] += 0.98454398708636;
        result[1] += 0.0004842615012106538;
        result[2] += 0.0005649717514124295;
        result[3] += 0.01404358353510896;
        result[4] += 0.0002421307506053269;
        result[5] += 0;
        result[6] += 0.00012106537530266345;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.40721162922408916;
        result[1] += 0;
        result[2] += 0.009061733056447047;
        result[3] += 0.5810836322446669;
        result[4] += 0.002076647158769115;
        result[5] += 0;
        result[6] += 0.0005663583160279405;
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
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)17) ) ) {
      if ( ( !(data[3].missing != -1) || (data[3].fvalue <= (float)-1.5) ) ) {
        result[0] += 0.35994930291508237;
        result[1] += 0.004224757076468103;
        result[2] += 0.0033798056611744824;
        result[3] += 0.4435994930291508;
        result[4] += 0.1888466413181242;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3404207192942773;
        result[1] += 0.002261931689662972;
        result[2] += 0.01379778330694413;
        result[3] += 0.3415516851391088;
        result[4] += 0.3019678805700068;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)21) ) ) {
        result[0] += 0.9898723692632054;
        result[1] += 0.00045179021874176427;
        result[2] += 0.0009035804374835285;
        result[3] += 0.008508715786303226;
        result[4] += 0.00011294755468544107;
        result[5] += 0;
        result[6] += 0.0001505967395805881;
      } else {
        result[0] += 0;
        result[1] += 0.004918032786885246;
        result[2] += 0;
        result[3] += 0.9885245901639345;
        result[4] += 0.001639344262295082;
        result[5] += 0.004918032786885246;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[6].missing != -1) || (data[6].fvalue <= (float)3) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.41283885542168675;
        result[1] += 0;
        result[2] += 0.010542168674698794;
        result[3] += 0.5724774096385542;
        result[4] += 0.0026355421686746986;
        result[5] += 0.0007530120481927711;
        result[6] += 0.0007530120481927711;
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
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || (data[5].fvalue <= (float)87.5) ) ) {
    if ( ( !(data[2].missing != -1) || (data[2].fvalue <= (float)69) ) ) {
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)91.5) ) ) {
        result[0] += 0.9140930979133226;
        result[1] += 0.0005778491171749599;
        result[2] += 0.002086677367576244;
        result[3] += 0.07434991974317817;
        result[4] += 0.008731942215088282;
        result[5] += 0.00012841091492776885;
        result[6] += 3.2102728731942213e-05;
      } else {
        result[0] += 0.652017625231911;
        result[1] += 0;
        result[2] += 0.005449907235621521;
        result[3] += 0.3400974025974026;
        result[4] += 0.0015074211502782932;
        result[5] += 0.00023191094619666049;
        result[6] += 0.0006957328385899814;
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
        result[2] += 0.001375515818431912;
        result[3] += 0;
        result[4] += 0.9986244841815681;
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
      if ( ( !(data[0].missing != -1) || (data[0].fvalue <= (float)98.5) ) ) {
        result[0] += 0.14819850441876276;
        result[1] += 0.023113528212100613;
        result[2] += 0.004758667573079538;
        result[3] += 0.8239292997960571;
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
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  result[2] /= 80;
  result[3] /= 80;
  result[4] /= 80;
  result[5] /= 80;
  result[6] /= 80;
  
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
