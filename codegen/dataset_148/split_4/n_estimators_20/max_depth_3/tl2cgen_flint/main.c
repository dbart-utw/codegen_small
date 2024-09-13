
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
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
        result[0] += 0.06666666666666667;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9333333333333333;
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
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.002853519340519975;
        result[2] += 0.005389980976537731;
        result[3] += 0.9901712111604313;
        result[4] += 0;
        result[5] += 0.0015852885225110973;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9983536083417177;
        result[1] += 0;
        result[2] += 0.0012805268453306502;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00036586481295161437;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9104157252598283;
        result[1] += 0.0025982828739267963;
        result[2] += 0.00937641211025757;
        result[3] += 0.07681879801174876;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007907817442385902;
      } else {
        result[0] += 0;
        result[1] += 0.0010830324909747292;
        result[2] += 0.005776173285198556;
        result[3] += 0.9931407942238267;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0.78134082542143;
        result[1] += 0.0023251307886068594;
        result[2] += 0.004553381127688433;
        result[3] += 0.20596783569075763;
        result[4] += 0.005425305173416006;
        result[5] += 9.68804495252858e-05;
        result[6] += 0.0002906413485758574;
      } else {
        result[0] += 0.8609767662399241;
        result[1] += 0.0011379800853485065;
        result[2] += 0.0006638217164532954;
        result[3] += 0.1155049786628734;
        result[4] += 0.021716453295400662;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9900061365828001;
        result[1] += 0;
        result[2] += 0.002805294994301745;
        result[3] += 0.007188568422898221;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.8441807044410414;
        result[1] += 0;
        result[2] += 0.008422664624808578;
        result[3] += 0.1458652373660031;
        result[4] += 0.0003828483920367535;
        result[5] += 0.0003828483920367535;
        result[6] += 0.000765696784073507;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.006812375816065853;
        result[3] += 0.7964802724950326;
        result[4] += 0.19613965370422934;
        result[5] += 0.0005676979846721544;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.14890456739695507;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8481247679168213;
        result[4] += 0.001856665428889714;
        result[5] += 0.0011139992573338284;
        result[6] += 0;
      } else {
        result[0] += 0.0031446540880503146;
        result[1] += 0;
        result[2] += 0.01781970649895178;
        result[3] += 0;
        result[4] += 0.9727463312368972;
        result[5] += 0.006289308176100629;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.8955187331646397;
        result[1] += 0;
        result[2] += 0.0025304056811688846;
        result[3] += 0.10113460125704025;
        result[4] += 0;
        result[5] += 0.0004897559382907519;
        result[6] += 0.0003265039588605012;
      } else {
        result[0] += 0.92168037124481;
        result[1] += 0.0005698933485304893;
        result[2] += 0.0019946267198567126;
        result[3] += 0.07559228201579418;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00016282667100871122;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16410670978173;
        result[1] += 0.015359741309620048;
        result[2] += 0;
        result[3] += 0.8205335489086499;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.27692307692307694;
        result[1] += 0;
        result[2] += 0.024615384615384615;
        result[3] += 0.6984615384615385;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.014119601328903655;
        result[4] += 0.9858803986710963;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.017064846416382253;
        result[1] += 0.010238907849829351;
        result[2] += 0;
        result[3] += 0.10580204778156997;
        result[4] += 0.8668941979522184;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.31389432485322905;
        result[1] += 0.0054794520547945215;
        result[2] += 0.005870841487279844;
        result[3] += 0.6743639921722114;
        result[4] += 0.00039138943248532296;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.32063492063492066;
        result[1] += 0;
        result[2] += 0.01904761904761905;
        result[3] += 0.6603174603174603;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
        result[0] += 0.42857142857142855;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.5714285714285714;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993883090568491;
        result[1] += 0;
        result[2] += 0.0005734602592040372;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.823068394693581e-05;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.6469791384448659;
        result[1] += 0.0012643366747945453;
        result[2] += 0.006321683373972727;
        result[3] += 0.31843222252325476;
        result[4] += 0.025467353020861554;
        result[5] += 0.00018061952497064934;
        result[6] += 0.00135464643727987;
      } else {
        result[0] += 0.009866511897852582;
        result[1] += 0;
        result[2] += 0.012768427161926872;
        result[3] += 0.665118978525827;
        result[4] += 0.3081834010446895;
        result[5] += 0.004062681369704005;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 0.9788199697428139;
        result[1] += 0;
        result[2] += 0.02118003025718608;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07190710138454667;
        result[1] += 0.007592675301473872;
        result[2] += 0.00044662795891022776;
        result[3] += 0.8030370701205896;
        result[4] += 0.11701652523447968;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0.3720136518771331;
        result[1] += 0;
        result[2] += 0.023890784982935155;
        result[3] += 0.6040955631399317;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02467343976777939;
        result[4] += 0.9753265602322206;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.9953318745441284;
        result[1] += 0;
        result[2] += 0.00087527352297593;
        result[3] += 0.0037442256260637003;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.862630683199611e-05;
      } else {
        result[0] += 0.002066115702479339;
        result[1] += 0.0030991735537190084;
        result[2] += 0.011363636363636364;
        result[3] += 0.25826446280991733;
        result[4] += 0.7241735537190083;
        result[5] += 0.0010330578512396695;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0.8097805452198344;
        result[1] += 0.0011390386513782367;
        result[2] += 0.00402460323486977;
        result[3] += 0.17374136229022705;
        result[4] += 0.009643860581669071;
        result[5] += 0.0006074872807350596;
        result[6] += 0.0010631027412863544;
      } else {
        result[0] += 0.4956233735509818;
        result[1] += 0;
        result[2] += 0.0040217648450437665;
        result[3] += 0.4994085639933759;
        result[4] += 0;
        result[5] += 0.0009462976105985332;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.009933774834437087;
        result[1] += 0.03642384105960265;
        result[2] += 0;
        result[3] += 0.10927152317880795;
        result[4] += 0.8443708609271523;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3374280230326296;
        result[1] += 0.0026871401151631483;
        result[2] += 0.004990403071017275;
        result[3] += 0.653358925143954;
        result[4] += 0.0015355086372360847;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0216998191681736;
        result[1] += 0;
        result[2] += 0.004822182037371911;
        result[3] += 0.13622664255575648;
        result[4] += 0.8372513562386981;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.10792838874680306;
        result[1] += 0.0005115089514066496;
        result[2] += 0.004603580562659846;
        result[3] += 0.8122762148337596;
        result[4] += 0.07161125319693094;
        result[5] += 0.003069053708439898;
        result[6] += 0;
      } else {
        result[0] += 0.9931636363636364;
        result[1] += 0.00043636363636363637;
        result[2] += 0.0017454545454545455;
        result[3] += 0.004509090909090909;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014545454545454546;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.14742243993468626;
        result[1] += 0;
        result[2] += 0.006997900629811057;
        result[3] += 0.6874271052017727;
        result[4] += 0.15745276417074877;
        result[5] += 0.0006997900629811056;
        result[6] += 0;
      } else {
        result[0] += 0.9951295538671342;
        result[1] += 0;
        result[2] += 0.0035067212156633548;
        result[3] += 0.0007792713812585232;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005844535359438924;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0010526315789473684;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9989473684210526;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13356428021555042;
        result[1] += 0.00038491147036181676;
        result[2] += 0.01077752117013087;
        result[3] += 0.8533487297921478;
        result[4] += 0;
        result[5] += 0.001924557351809084;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993029469852457;
        result[1] += 0;
        result[2] += 0.0006970530147542888;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7045064571480179;
        result[1] += 0.001174026912309221;
        result[2] += 0.006141063849002078;
        result[3] += 0.28700442517836183;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001174026912309221;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.18569780853517878;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5743944636678201;
        result[4] += 0.23990772779700115;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08386581469648563;
        result[1] += 0.009584664536741214;
        result[2] += 0.00718849840255591;
        result[3] += 0.5439297124600639;
        result[4] += 0.35543130990415334;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.00463678516228748;
        result[1] += 0.013910355486862442;
        result[2] += 0;
        result[3] += 0.03554868624420402;
        result[4] += 0.9459041731066461;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.18620689655172415;
        result[4] += 0.8137931034482758;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 0.8571428571428571;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.14285714285714285;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9992741719830386;
        result[1] += 0;
        result[2] += 0.0006112235932306987;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011460442373075601;
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.00789127575624726;
        result[1] += 0.00263042525208242;
        result[2] += 0.009644892590968873;
        result[3] += 0.7075843928101709;
        result[4] += 0.27049539675580886;
        result[5] += 0.0017536168347216134;
        result[6] += 0;
      } else {
        result[0] += 0.015158474965548922;
        result[1] += 0.006201194304088196;
        result[2] += 0.007349563619660084;
        result[3] += 0.5463941203491044;
        result[4] += 0.42397795130914107;
        result[5] += 0.0009186954524575104;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9772867547216393;
        result[1] += 0;
        result[2] += 0.007036168374274781;
        result[3] += 0.014072336748549562;
        result[4] += 0;
        result[5] += 0.00012344155042587335;
        result[6] += 0.0014812986051104802;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0007760962359332557;
        result[3] += 0.9992239037640668;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17702020202020202;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8222222222222222;
        result[4] += 0;
        result[5] += 0.0007575757575757576;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.9583333333333334;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.041666666666666664;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0035382574082264487;
        result[2] += 0.011057054400707651;
        result[3] += 0;
        result[4] += 0.984077841662981;
        result[5] += 0.0013268465280849183;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.9815022421524664;
        result[1] += 0;
        result[2] += 0.001905829596412556;
        result[3] += 0.016591928251121078;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9899225628513844;
        result[1] += 0.0013790177150737244;
        result[2] += 0.002545878858597645;
        result[3] += 0.005887344860507055;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002651957144372547;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4631104953238656;
        result[1] += 0;
        result[2] += 0.0015587114651887772;
        result[3] += 0.5353307932109456;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9865221213009083;
        result[1] += 0;
        result[2] += 0.009961910342806914;
        result[3] += 0.0011719894520949312;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0023439789041898623;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.3236563358179678;
        result[1] += 0.003138485680659082;
        result[2] += 0.00745390349156532;
        result[3] += 0.6645743428795606;
        result[4] += 0.0011769321302471558;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.011834319526627219;
        result[1] += 0.03550295857988166;
        result[2] += 0;
        result[3] += 0.20710059171597633;
        result[4] += 0.7455621301775148;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
        result[0] += 0.06987788331071913;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.018317503392130258;
        result[4] += 0.9118046132971506;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.041666666666666664;
        result[3] += 0.9583333333333334;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.002157497303128371;
        result[1] += 0.0010787486515641855;
        result[2] += 0.005933117583603021;
        result[3] += 0.9045307443365695;
        result[4] += 0.08414239482200647;
        result[5] += 0.002157497303128371;
        result[6] += 0;
      } else {
        result[0] += 0.22094361334867663;
        result[1] += 0;
        result[2] += 0.014959723820483314;
        result[3] += 0;
        result[4] += 0.7640966628308401;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9945387165984007;
        result[1] += 0.0001950458357714063;
        result[2] += 0.0005363760483713673;
        result[3] += 0.004632338599570899;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.752291788570315e-05;
      } else {
        result[0] += 0.8020010196278359;
        result[1] += 0.00031863369869997453;
        result[2] += 0.0036961509049197043;
        result[3] += 0.19321947489166455;
        result[4] += 0;
        result[5] += 0.00019118021921998472;
        result[6] += 0.0005735406576599542;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.22249388753056235;
        result[1] += 0.006112469437652812;
        result[2] += 0;
        result[3] += 0.7701711491442543;
        result[4] += 0.0012224938875305623;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5004492362982929;
        result[1] += 0;
        result[2] += 0.013477088948787063;
        result[3] += 0.48607367475292;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3726315789473684;
        result[4] += 0.6273684210526316;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0014124293785310734;
        result[1] += 0.007062146892655367;
        result[2] += 0;
        result[3] += 0.054378531073446326;
        result[4] += 0.9371468926553672;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.11899179366940212;
        result[1] += 0.0005861664712778429;
        result[2] += 0;
        result[3] += 0.876905041031653;
        result[4] += 0.0017584994138335288;
        result[5] += 0.0017584994138335288;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03278688524590164;
        result[3] += 0;
        result[4] += 0.9648711943793911;
        result[5] += 0.00234192037470726;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9942655972126447;
        result[1] += 0.00039923057380321565;
        result[2] += 0.0016695096722679926;
        result[3] += 0.00337531303306355;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00029034950822052043;
      } else {
        result[0] += 0.6636561106665143;
        result[1] += 0;
        result[2] += 0.004001371898936779;
        result[3] += 0.33177089287755807;
        result[4] += 0;
        result[5] += 0.00022864982279638735;
        result[6] += 0.00034297473419458107;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.998654467168999;
        result[1] += 0;
        result[2] += 0.0011661284535342661;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001794043774668102;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0.20560344827586208;
        result[1] += 0.004956896551724138;
        result[2] += 0.004310344827586207;
        result[3] += 0.43125;
        result[4] += 0.3538793103448276;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7877620396600566;
        result[1] += 0.0011331444759206798;
        result[2] += 0.0055524079320113315;
        result[3] += 0.18878186968838526;
        result[4] += 0.01461756373937677;
        result[5] += 0.0010198300283286118;
        result[6] += 0.0011331444759206798;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.003208213025344883;
        result[2] += 0.005133140840551813;
        result[3] += 0.9916586461341033;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.016506189821182942;
        result[3] += 0;
        result[4] += 0.9807427785419532;
        result[5] += 0.002751031636863824;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.9960186117906653;
        result[1] += 4.796853264258646e-05;
        result[2] += 0.0003837482611406917;
        result[3] += 0.0034057658176236388;
        result[4] += 9.593706528517292e-05;
        result[5] += 0;
        result[6] += 4.796853264258646e-05;
      } else {
        result[0] += 0.004395604395604396;
        result[1] += 0.004395604395604396;
        result[2] += 0.008791208791208791;
        result[3] += 0.24065934065934066;
        result[4] += 0.7406593406593407;
        result[5] += 0.001098901098901099;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 0.3515667206915181;
        result[1] += 0.002025931928687196;
        result[2] += 0.008914100486223663;
        result[3] += 0.5983252296056186;
        result[4] += 0.03727714748784441;
        result[5] += 0.0009454349000540249;
        result[6] += 0.0009454349000540249;
      } else {
        result[0] += 0.941468605888613;
        result[1] += 0;
        result[2] += 0.0017736786094359701;
        result[3] += 0.056048244058176655;
        result[4] += 0;
        result[5] += 8.86839304717985e-05;
        result[6] += 0.0006207875133025896;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.14954682779456194;
        result[1] += 0.011329305135951661;
        result[2] += 0.0075528700906344415;
        result[3] += 0.831570996978852;
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
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.002749770852428964;
        result[1] += 0.005499541704857928;
        result[2] += 0;
        result[3] += 0.1769019248395967;
        result[4] += 0.8148487626031164;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9989528795811519;
        result[5] += 0.0010471204188481676;
        result[6] += 0;
      } else {
        result[0] += 0.14694800301431804;
        result[1] += 0;
        result[2] += 0.010926902788244161;
        result[3] += 0.8398643556895253;
        result[4] += 0;
        result[5] += 0.0022607385079125852;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9994561205858358;
        result[1] += 0;
        result[2] += 0.0005438794141641739;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7008052112548631;
        result[1] += 0.0013570976205555055;
        result[2] += 0.006966434452184928;
        result[3] += 0.289876051750656;
        result[4] += 0;
        result[5] += 9.047317470370037e-05;
        result[6] += 0.0009047317470370036;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.173512154233026;
        result[1] += 0.0075440067057837385;
        result[2] += 0;
        result[3] += 0.8189438390611903;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.03293413173652695;
        result[2] += 0;
        result[3] += 0.17365269461077845;
        result[4] += 0.7934131736526946;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c30000))) ) ) {
        result[0] += 0.11756569847856155;
        result[1] += 0;
        result[2] += 0.011065006915629323;
        result[3] += 0.29045643153526973;
        result[4] += 0.5809128630705395;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.004722550177095631;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.048406139315230225;
        result[4] += 0.9468713105076741;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989156953103823;
        result[1] += 0;
        result[2] += 0.0010843046896177825;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.02029664324746292;
        result[1] += 0.0028623471246422066;
        result[2] += 0.015873015873015872;
        result[3] += 0.7181889149102264;
        result[4] += 0.24121779859484777;
        result[5] += 0.00156128024980484;
        result[6] += 0;
      } else {
        result[0] += 0.7464479832173168;
        result[1] += 0;
        result[2] += 0.003909602364832651;
        result[3] += 0.24849814055497285;
        result[4] += 0;
        result[5] += 0.00019071231047964148;
        result[6] += 0.0009535615523982074;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.1398093508851566;
        result[1] += 0.006808896958692692;
        result[2] += 0.0018157058556513845;
        result[3] += 0.5451656831593282;
        result[4] += 0.30640036314117114;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0010857763300760044;
        result[1] += 0.01520086862106406;
        result[2] += 0;
        result[3] += 0.09446254071661238;
        result[4] += 0.8892508143322475;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.21606948968512488;
        result[1] += 0.0010857763300760044;
        result[2] += 0;
        result[3] += 0.7774158523344191;
        result[4] += 0.004343105320304018;
        result[5] += 0.0010857763300760044;
        result[6] += 0;
      } else {
        result[0] += 0.9956692771301743;
        result[1] += 0.0005052510014796637;
        result[2] += 0.0006496084304738533;
        result[3] += 0.0030675953661265295;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010826807174564221;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.16552706552706553;
        result[1] += 0.007692307692307693;
        result[2] += 0.013105413105413105;
        result[3] += 0.8133903133903134;
        result[4] += 0;
        result[5] += 0.0002849002849002849;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.8431296224211756;
        result[1] += 0;
        result[2] += 0.008174386920980927;
        result[3] += 0.14168937329700276;
        result[4] += 0.0011677695601401326;
        result[5] += 0.0011677695601401326;
        result[6] += 0.00467107824056053;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0075537478210342835;
        result[3] += 0.8009877977919815;
        result[4] += 0.19145845438698433;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9961538461538462;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0038461538461538464;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0005149330587023687;
        result[1] += 0;
        result[2] += 0.006179196704428424;
        result[3] += 0.7886199794026777;
        result[4] += 0.20185375901132852;
        result[5] += 0.0028321318228630276;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7650602409638554;
        result[4] += 0.23493975903614459;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.008322663252240717;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9916773367477593;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9811656377524328;
        result[1] += 0;
        result[2] += 0.0011509888040179973;
        result[3] += 0.01768337344354923;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5560794880431121;
        result[1] += 0;
        result[2] += 0.008420343550016841;
        result[3] += 0.4328056584708656;
        result[4] += 0;
        result[5] += 0.0003368137420006736;
        result[6] += 0.0023576961940047153;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.8887226881777873;
        result[1] += 0.0012821197713553075;
        result[2] += 0.0026176611998504195;
        result[3] += 0.10721726587958759;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00016026497141941344;
      } else {
        result[0] += 0.996418215930411;
        result[1] += 0;
        result[2] += 0.001876172607879925;
        result[3] += 0.0015350503155381204;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00017056114617090227;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9956076134699854;
        result[1] += 0;
        result[2] += 0.003904343582235237;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004880429477794046;
      } else {
        result[0] += 0.9996692574830495;
        result[1] += 0;
        result[2] += 0.000330742516950554;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.019919246298788693;
        result[1] += 0.010767160161507403;
        result[2] += 0.005383580080753701;
        result[3] += 0.8901749663526245;
        result[4] += 0.07267833109017496;
        result[5] += 0.0010767160161507402;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01101634683724236;
        result[3] += 0.1911869225302061;
        result[4] += 0.7956645344705047;
        result[5] += 0.0021321961620469083;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        result[0] += 0.9757698921369392;
        result[1] += 0;
        result[2] += 0.004846021572612162;
        result[3] += 0.017820853525089886;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001563232765358762;
      } else {
        result[0] += 0.407108239095315;
        result[1] += 0;
        result[2] += 0.005077313639510732;
        result[3] += 0.5859681513962612;
        result[4] += 0;
        result[5] += 0.0006923609508423724;
        result[6] += 0.0011539349180706207;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.9990344749247458;
        result[1] += 0;
        result[2] += 0.0009655250752541603;
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
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.019576957695769576;
        result[1] += 0.00765076507650765;
        result[2] += 0.014176417641764177;
        result[3] += 0.7968046804680468;
        result[4] += 0.15976597659765976;
        result[5] += 0.0020252025202520253;
        result[6] += 0;
      } else {
        result[0] += 0.7430678741480721;
        result[1] += 0;
        result[2] += 0.0050415460741294;
        result[3] += 0.2511436840631127;
        result[4] += 0;
        result[5] += 0.00018672392867145925;
        result[6] += 0.0005601717860143778;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3954802259887006;
        result[4] += 0.6045197740112994;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0014134275618374558;
        result[1] += 0.0063604240282685515;
        result[2] += 0;
        result[3] += 0.04381625441696113;
        result[4] += 0.9484098939929329;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989702348845192;
        result[1] += 0;
        result[2] += 0.0008826558132692591;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014710930221154318;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 0.31378935939196523;
        result[1] += 0.007057546145494028;
        result[2] += 0.00760043431053203;
        result[3] += 0.6156351791530945;
        result[4] += 0.05591748099891422;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7049876193845066;
        result[1] += 0.003006720905553591;
        result[2] += 0.002299257163070393;
        result[3] += 0.2875840113194199;
        result[4] += 0.0003537318712415989;
        result[5] += 0.0008843296781039973;
        result[6] += 0.0008843296781039973;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0.43602261048304214;
        result[1] += 0;
        result[2] += 0.012204522096608427;
        result[3] += 0.46505652620760535;
        result[4] += 0.08466084275436793;
        result[5] += 0.0008992805755395684;
        result[6] += 0.0011562178828365879;
      } else {
        result[0] += 0;
        result[1] += 0.0041109969167523125;
        result[2] += 0;
        result[3] += 0.07656731757451182;
        result[4] += 0.9193216855087358;
        result[5] += 0;
        result[6] += 0;
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
  result[6] /= 20;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_4/test_data.csv", "r");
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
