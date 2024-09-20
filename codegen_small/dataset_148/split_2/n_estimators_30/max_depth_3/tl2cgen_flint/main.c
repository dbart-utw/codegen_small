
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
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9995962858296327;
        result[5] += (float)0.0004037141703673799;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.004648280136349551;
        result[2] += (float)0.008057018903005888;
        result[3] += (float)0.986674930275798;
        result[4] += (float)0;
        result[5] += (float)0.0006197706848466068;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += (float)0.6090468497576736;
        result[1] += (float)0.004846526655896607;
        result[2] += (float)0.006462035541195477;
        result[3] += (float)0.37964458804523427;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9933540417539551;
        result[1] += (float)0.000614028750993282;
        result[2] += (float)0.002383876327385683;
        result[3] += (float)0.003611933829372246;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.6119338293722466e-05;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += (float)0.4325895368460529;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.5674104631539472;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9866706161137441;
        result[1] += (float)0;
        result[2] += (float)0.012440758293838863;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0.0002962085308056872;
        result[6] += (float)0.0005924170616113745;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        result[0] += (float)0.0049504950495049506;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.995049504950495;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.169676048858205;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.8297928836962294;
        result[4] += (float)0;
        result[5] += (float)0.0005310674455655868;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.36065573770491804;
        result[1] += (float)0.16393442622950818;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.4262295081967213;
        result[5] += (float)0.04918032786885246;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.027777777777777776;
        result[1] += (float)0;
        result[2] += (float)0.012786596119929453;
        result[3] += (float)0;
        result[4] += (float)0.9585537918871252;
        result[5] += (float)0.0008818342151675485;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += (float)0.03571428571428571;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9642857142857143;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5084269662921348;
        result[1] += (float)0.03089887640449438;
        result[2] += (float)0;
        result[3] += (float)0.4606741573033708;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9951373571285342;
        result[1] += (float)5.0130338881090835e-05;
        result[2] += (float)0.0004511730499298175;
        result[3] += (float)0.004311209143773812;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)5.0130338881090835e-05;
      } else {
        result[0] += (float)0.8063038953315492;
        result[1] += (float)0.0005352363960749331;
        result[2] += (float)0.0044603033006244425;
        result[3] += (float)0.18822479928635147;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00047576568539994053;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
        result[0] += (float)0.016;
        result[1] += (float)0.08;
        result[2] += (float)0;
        result[3] += (float)0.048;
        result[4] += (float)0.856;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.2822277847309137;
        result[1] += (float)0;
        result[2] += (float)0.003128911138923655;
        result[3] += (float)0.5162703379224031;
        result[4] += (float)0.19837296620775974;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0033333333333333335;
        result[2] += (float)0;
        result[3] += (float)0.03666666666666667;
        result[4] += (float)0.96;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.26288848263254116;
        result[1] += (float)0.004021937842778794;
        result[2] += (float)0.011334552102376601;
        result[3] += (float)0.4661791590493602;
        result[4] += (float)0.2555758683729434;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9993945127719962;
        result[1] += (float)0;
        result[2] += (float)0.0006054872280037843;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5931635979208879;
        result[1] += (float)0.0011452735441811292;
        result[2] += (float)0.005550171791031626;
        result[3] += (float)0.39353360937362336;
        result[4] += (float)0.005550171791031626;
        result[5] += (float)0.0002642938948110298;
        result[6] += (float)0.0007928816844330894;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += (float)0.3750879662209711;
        result[1] += (float)0.005277973258268825;
        result[2] += (float)0.005277973258268825;
        result[3] += (float)0.6133004926108374;
        result[4] += (float)0.001055594651653765;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.07379767827529021;
        result[1] += (float)0;
        result[2] += (float)0.017412935323383085;
        result[3] += (float)0.17164179104477612;
        result[4] += (float)0.7371475953565506;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0410958904109589;
        result[2] += (float)0;
        result[3] += (float)0.2671232876712329;
        result[4] += (float)0.6917808219178082;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.004651162790697674;
        result[2] += (float)0;
        result[3] += (float)0.05581395348837209;
        result[4] += (float)0.9395348837209302;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += (float)0.8447787053079225;
        result[1] += (float)0;
        result[2] += (float)0.0033076074972436605;
        result[3] += (float)0.15002362576783745;
        result[4] += (float)0.0012600409513309182;
        result[5] += (float)0.00023625767837454718;
        result[6] += (float)0.000393762797290912;
      } else {
        result[0] += (float)0.8959786377585589;
        result[1] += (float)0.0008768084173608068;
        result[2] += (float)0.0017934717627834684;
        result[3] += (float)0.09979673986688456;
        result[4] += (float)0.0012753576979793553;
        result[5] += (float)0.0001594197122474194;
        result[6] += (float)0.00011956478418556456;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.001379310344827586;
        result[3] += (float)0;
        result[4] += (float)0.9986206896551724;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += (float)0.2058165548098434;
        result[1] += (float)0.012304250559284116;
        result[2] += (float)0;
        result[3] += (float)0.7818791946308725;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.49113475177304966;
        result[1] += (float)0;
        result[2] += (float)0.022163120567375887;
        result[3] += (float)0.4867021276595745;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += (float)0.9815593913419574;
        result[1] += (float)0.0003538709550583887;
        result[2] += (float)0.0006684229151102897;
        result[3] += (float)0.01710376282782212;
        result[4] += (float)0.00019659497503243817;
        result[5] += (float)0;
        result[6] += (float)0.00011795698501946291;
      } else {
        result[0] += (float)0.6836171743823459;
        result[1] += (float)0;
        result[2] += (float)0.006236507555768769;
        result[3] += (float)0.2768049892060446;
        result[4] += (float)0.032381866154953226;
        result[5] += (float)0;
        result[6] += (float)0.000959462700887503;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.36393613328705315;
        result[1] += (float)0;
        result[2] += (float)0.008330440819160016;
        result[3] += (float)0.5140576188823326;
        result[4] += (float)0.1119402985074627;
        result[5] += (float)0.0006942034015966679;
        result[6] += (float)0.001041305102395002;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        result[0] += (float)0.8987905792488861;
        result[1] += (float)0.0021217907914279654;
        result[2] += (float)0.001697432633142372;
        result[3] += (float)0.09611712285168682;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.001273074474856779;
      } else {
        result[0] += (float)0.9865948383863693;
        result[1] += (float)0.00012528188423953897;
        result[2] += (float)0.0006681700492775411;
        result[3] += (float)0.012068821515075587;
        result[4] += (float)0.00025056376847907793;
        result[5] += (float)0.00025056376847907793;
        result[6] += (float)4.176062807984632e-05;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.15439497716894976;
        result[1] += (float)0.0048515981735159815;
        result[2] += (float)0.0048515981735159815;
        result[3] += (float)0.752568493150685;
        result[4] += (float)0.08333333333333333;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.01971326164874552;
        result[1] += (float)0;
        result[2] += (float)0.022700119474313024;
        result[3] += (float)0.052568697729988054;
        result[4] += (float)0.9050179211469535;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += (float)0.43956043956043955;
        result[1] += (float)0;
        result[2] += (float)0.008634222919937205;
        result[3] += (float)0.025902668759811617;
        result[4] += (float)0.5259026687598116;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.011299435028248588;
        result[1] += (float)0;
        result[2] += (float)0.0053358443188951665;
        result[3] += (float)0.9783427495291902;
        result[4] += (float)0.003452605147520402;
        result[5] += (float)0.001569365976145637;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += (float)0.9982643910905409;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.0017356089094590686;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9856815578465064;
        result[1] += (float)0;
        result[2] += (float)0.011454753722794959;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0028636884306987398;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += (float)0.0012057877813504826;
        result[1] += (float)0.0008038585209003216;
        result[2] += (float)0.002813504823151126;
        result[3] += (float)0.8910771704180065;
        result[4] += (float)0.10289389067524117;
        result[5] += (float)0.0012057877813504826;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3764478764478765;
        result[1] += (float)0;
        result[2] += (float)0.011583011583011582;
        result[3] += (float)0;
        result[4] += (float)0.611969111969112;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += (float)0.8963646668285968;
        result[1] += (float)0;
        result[2] += (float)0.0021860578090842847;
        result[3] += (float)0.10080155452999758;
        result[4] += (float)0;
        result[5] += (float)0.00024289531212047608;
        result[6] += (float)0.00040482552020079345;
      } else {
        result[0] += (float)0.9207411011108408;
        result[1] += (float)0.0002837914538230763;
        result[2] += (float)0.0016216654504175789;
        result[3] += (float)0.07727235871239763;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)8.108327252087895e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += (float)0.10798593671521849;
        result[1] += (float)0.005022601707684581;
        result[2] += (float)0.005022601707684581;
        result[3] += (float)0.5544952285283777;
        result[4] += (float)0.32747363134103463;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f30000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.215625;
        result[4] += (float)0.784375;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.024390243902439025;
        result[2] += (float)0;
        result[3] += (float)0.033101045296167246;
        result[4] += (float)0.9425087108013938;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9988069016152717;
        result[1] += (float)0;
        result[2] += (float)0.001101321585903084;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)9.177679882525698e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += (float)0.9119094488188977;
        result[1] += (float)0.0014763779527559055;
        result[2] += (float)0.002829724409448819;
        result[3] += (float)0.08316929133858268;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006151574803149606;
      } else {
        result[0] += (float)0.10873177035259368;
        result[1] += (float)0.0038766845117223555;
        result[2] += (float)0.008860993169651098;
        result[3] += (float)0.5464279121284844;
        result[4] += (float)0.33210263983754845;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0006570302233902761;
        result[2] += (float)0;
        result[3] += (float)0.9957293035479633;
        result[4] += (float)0.0029566360052562424;
        result[5] += (float)0.0006570302233902761;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.055636896046852125;
        result[3] += (float)0;
        result[4] += (float)0.9443631039531479;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41c80000))) ) ) {
        result[0] += (float)0.6841844323252355;
        result[1] += (float)0;
        result[2] += (float)0.002726822012890431;
        result[3] += (float)0.3113534952900347;
        result[4] += (float)0.0009915716410510659;
        result[5] += (float)0;
        result[6] += (float)0.0007436787307882995;
      } else {
        result[0] += (float)0.979531934877896;
        result[1] += (float)0.000704445835942392;
        result[2] += (float)0.0007827175954915466;
        result[3] += (float)0.018511271133375078;
        result[4] += (float)0.000117407639323732;
        result[5] += (float)0.00015654351909830932;
        result[6] += (float)0.00019567939887288666;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.26894223555888974;
        result[1] += (float)0.008252063015753939;
        result[2] += (float)0.007126781695423856;
        result[3] += (float)0.6286571642910728;
        result[4] += (float)0.08702175543885972;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.14308681672025725;
        result[1] += (float)0;
        result[2] += (float)0.01714898177920686;
        result[3] += (float)0.04608788853161844;
        result[4] += (float)0.7936763129689175;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9929624664879357;
        result[4] += (float)0.0060321715817694375;
        result[5] += (float)0.0010053619302949064;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.46870451237263466;
        result[1] += (float)0;
        result[2] += (float)0.025473071324599708;
        result[3] += (float)0;
        result[4] += (float)0.5058224163027657;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x439bc000))) ) ) {
        result[0] += (float)0.9948227797690163;
        result[1] += (float)0;
        result[2] += (float)0.002588610115491836;
        result[3] += (float)0.0017921146953405018;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0007964954201513341;
      } else {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0.5;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += (float)0.9975272007912958;
        result[1] += (float)0;
        result[2] += (float)0.001483679525222552;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0009891196834817012;
      } else {
        result[0] += (float)0.9999587509796642;
        result[1] += (float)0;
        result[2] += (float)4.1249020335767024e-05;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.7390131071703933;
        result[1] += (float)0.0016383962991518889;
        result[2] += (float)0.005782575173477255;
        result[3] += (float)0.22262914417887433;
        result[4] += (float)0.029683885890516577;
        result[5] += (float)0.00019275250578257516;
        result[6] += (float)0.0010601387818041635;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0008058017727639;
        result[2] += (float)0.0077894171367177;
        result[3] += (float)0.8033843674456084;
        result[4] += (float)0.18748321246306743;
        result[5] += (float)0.0005372011818426001;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += (float)0.12221189591078067;
        result[1] += (float)0.0018587360594795538;
        result[2] += (float)0.0037174721189591076;
        result[3] += (float)0.5515799256505576;
        result[4] += (float)0.32063197026022305;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0030643513789581204;
        result[1] += (float)0.012257405515832482;
        result[2] += (float)0;
        result[3] += (float)0.09908069458631256;
        result[4] += (float)0.8855975485188968;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += (float)0.3333333333333333;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.6666666666666666;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.999432226806465;
        result[1] += (float)0;
        result[2] += (float)0.0004920701010636284;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.570309247132746e-05;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.7350974398165838;
        result[1] += (float)0.0013374092472296522;
        result[2] += (float)0.005063049293083683;
        result[3] += (float)0.23079862437905999;
        result[4] += (float)0.026748184944593044;
        result[5] += (float)9.552923194497516e-05;
        result[6] += (float)0.0008597630875047765;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0002768549280177187;
        result[2] += (float)0.00858250276854928;
        result[3] += (float)0.8037098560354374;
        result[4] += (float)0.18687707641196014;
        result[5] += (float)0.0005537098560354374;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += (float)0.14917127071823205;
        result[1] += (float)0.004735595895816891;
        result[2] += (float)0.007103393843725336;
        result[3] += (float)0.8389897395422258;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41000000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.006211180124223602;
        result[1] += (float)0.11180124223602485;
        result[2] += (float)0;
        result[3] += (float)0.8819875776397516;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += (float)0.16355706324206445;
        result[1] += (float)0.000242306760358614;
        result[2] += (float)0;
        result[3] += (float)0.7838623697601164;
        result[4] += (float)0.05209595347710201;
        result[5] += (float)0.000242306760358614;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.048590281943611285;
        result[1] += (float)0.008398320335932815;
        result[2] += (float)0.004199160167966408;
        result[3] += (float)0;
        result[4] += (float)0.9376124775044992;
        result[5] += (float)0.001199760047990402;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x460c7800))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)1;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9841006839173658;
        result[1] += (float)0.0009165902841429881;
        result[2] += (float)0.00299654515969823;
        result[3] += (float)0.011880420221391807;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00010576041740111402;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.9957488554610857;
        result[4] += (float)0.0032701111837802484;
        result[5] += (float)0.0009810333551340746;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.48496530454895914;
        result[1] += (float)0;
        result[2] += (float)0.02467232074016962;
        result[3] += (float)0;
        result[4] += (float)0.49036237471087124;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += (float)0.9981960312687913;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.0018039687312086591;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9782870928829915;
        result[1] += (float)0;
        result[2] += (float)0.013872135102533172;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.007840772014475271;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += (float)0.00036913990402362494;
        result[1] += (float)0;
        result[2] += (float)0.004429678848283499;
        result[3] += (float)0.9453672942045035;
        result[4] += (float)0.04798818752307124;
        result[5] += (float)0.0018456995201181247;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.37561942517343905;
        result[1] += (float)0;
        result[2] += (float)0.013875123885034688;
        result[3] += (float)0;
        result[4] += (float)0.6105054509415263;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.015940488841657812;
        result[2] += (float)0;
        result[3] += (float)0.1339001062699256;
        result[4] += (float)0.8501594048884166;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9995484421253324;
        result[1] += (float)0;
        result[2] += (float)0.00035121168029702475;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001003461943705785;
      } else {
        result[0] += (float)0.7016949152542373;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.2983050847457627;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += (float)0.5207320194522652;
        result[1] += (float)0.003967238290248272;
        result[2] += (float)0.007806501151778858;
        result[3] += (float)0.4671103148195547;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003839262861530586;
      } else {
        result[0] += (float)0.9868513499949815;
        result[1] += (float)0;
        result[2] += (float)0.002007427481682224;
        result[3] += (float)0.010538994278831678;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0006022282445046673;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42860000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.998450460304439;
        result[1] += (float)0;
        result[2] += (float)0.0013672409078479629;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0001822987877130617;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += (float)0.01224342815988477;
        result[1] += (float)0.0066618653222902426;
        result[2] += (float)0.006841915736406194;
        result[3] += (float)0.6454807346056897;
        result[4] += (float)0.3285920057616133;
        result[5] += (float)0.0001800504141159525;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9836633663366338;
        result[1] += (float)0.0001237623762376238;
        result[2] += (float)0.0048267326732673276;
        result[3] += (float)0.010396039603960398;
        result[4] += (float)0;
        result[5] += (float)0.0002475247524752476;
        result[6] += (float)0.0007425742574257427;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0006596306068601583;
        result[2] += (float)0;
        result[3] += (float)0.9947229551451188;
        result[4] += (float)0.00395778364116095;
        result[5] += (float)0.0006596306068601583;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.037900874635568516;
        result[3] += (float)0;
        result[4] += (float)0.9620991253644315;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42860000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += (float)0.9966618979494516;
        result[1] += (float)0;
        result[2] += (float)0.0033381020505484026;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9997513468711148;
        result[1] += (float)0;
        result[2] += (float)0.0002486531288852051;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += (float)0.017419706042460535;
        result[1] += (float)0.005443658138268917;
        result[2] += (float)0.005806568680820178;
        result[3] += (float)0.6541462529486481;
        result[4] += (float)0.3164579931046997;
        result[5] += (float)0.0007258210851025222;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9804677780542425;
        result[1] += (float)0;
        result[2] += (float)0.005722816621050013;
        result[3] += (float)0.012440905697934811;
        result[4] += (float)0;
        result[5] += (float)0.00012440905697934813;
        result[6] += (float)0.0012440905697934813;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.0009904258831297458;
        result[2] += (float)0.0036315615714757345;
        result[3] += (float)0.9953780125453945;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.020260492040520984;
        result[3] += (float)0;
        result[4] += (float)0.9797395079594791;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += (float)0.0005431830526887561;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9983704508419338;
        result[5] += (float)0.0010863661053775121;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.19463779324568187;
        result[1] += (float)0.0030935808197989174;
        result[2] += (float)0.002577984016499098;
        result[3] += (float)0.7994328435163702;
        result[4] += (float)0;
        result[5] += (float)0.0002577984016499098;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += (float)0.9869337353722449;
        result[1] += (float)0.0008974082848732859;
        result[2] += (float)0.002153779883695886;
        result[3] += (float)0.009943283796396009;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)7.179266278986288e-05;
      } else {
        result[0] += (float)0.7662337662337663;
        result[1] += (float)0;
        result[2] += (float)0.03571428571428571;
        result[3] += (float)0.19805194805194806;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3908806765949623;
        result[1] += (float)0;
        result[2] += (float)0.0084574370288656;
        result[3] += (float)0.595513881228167;
        result[4] += (float)0.003125574554145983;
        result[5] += (float)0.0007354293068578783;
        result[6] += (float)0.001287001287001287;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.030303030303030304;
        result[3] += (float)0;
        result[4] += (float)0.9696969696969697;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.9815303430079155;
        result[1] += (float)0;
        result[2] += (float)0.018469656992084433;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9996145989902494;
        result[1] += (float)0;
        result[2] += (float)0.00038540100975064555;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.7085924498554786;
        result[1] += (float)0.00289042655688885;
        result[2] += (float)0.006919505999824823;
        result[3] += (float)0.2805465533853026;
        result[4] += (float)0.00017517736708417273;
        result[5] += (float)0.00017517736708417273;
        result[6] += (float)0.0007007094683366909;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.00027374760470845884;
        result[2] += (float)0.006843690117711471;
        result[3] += (float)0.8124828907747058;
        result[4] += (float)0.18012592389816592;
        result[5] += (float)0.00027374760470845884;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0024752475247524753;
        result[1] += (float)0.04207920792079208;
        result[2] += (float)0;
        result[3] += (float)0.9554455445544554;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += (float)0.15388385199705953;
        result[1] += (float)0.00098015192354815;
        result[2] += (float)0;
        result[3] += (float)0.7946581720166626;
        result[4] += (float)0.049987748100955645;
        result[5] += (float)0.000490075961774075;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.05998835177635411;
        result[1] += (float)0.006988934187536401;
        result[2] += (float)0.004076878276062901;
        result[3] += (float)0;
        result[4] += (float)0.9289458357600466;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += (float)0.9950518125425796;
        result[1] += (float)0.0005378464627630966;
        result[2] += (float)0.002043816558499767;
        result[3] += (float)0.0021872422819032597;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00017928215425436556;
      } else {
        result[0] += (float)0.011111111111111112;
        result[1] += (float)0.03333333333333333;
        result[2] += (float)0;
        result[3] += (float)0.9555555555555556;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += (float)0.32515657620041755;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6748434237995825;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.8022239872915012;
        result[1] += (float)0;
        result[2] += (float)0.03733121525019857;
        result[3] += (float)0;
        result[4] += (float)0.15488482922954727;
        result[5] += (float)0.0023828435266084196;
        result[6] += (float)0.003177124702144559;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.11343804537521815;
        result[1] += (float)0;
        result[2] += (float)0.0017452006980802793;
        result[3] += (float)0;
        result[4] += (float)0.8848167539267016;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6761000862812769;
        result[1] += (float)0;
        result[2] += (float)0.0008628127696289905;
        result[3] += (float)0.32182916307161347;
        result[4] += (float)0.0001725625539257981;
        result[5] += (float)0.0006902502157031924;
        result[6] += (float)0.0003451251078515962;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41700000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        result[0] += (float)0.5;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.5;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.9919786096256684;
        result[1] += (float)0;
        result[2] += (float)0.008021390374331552;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.999577816158127;
        result[1] += (float)0;
        result[2] += (float)0.00038380349261178274;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.8380349261178276e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.746001340867733;
        result[1] += (float)0.0016281965328991475;
        result[2] += (float)0.006800114931519969;
        result[3] += (float)0.22258404367397758;
        result[4] += (float)0.022124317594100183;
        result[5] += (float)0.00019155253328225267;
        result[6] += (float)0.0006704338664878843;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0008088433540037746;
        result[2] += (float)0.00862766244270693;
        result[3] += (float)0.8110002696144514;
        result[4] += (float)0.17956322458883797;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += (float)0.19953775038520802;
        result[1] += (float)0.007704160246533128;
        result[2] += (float)0.010015408320493066;
        result[3] += (float)0.7827426810477658;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0006176652254478073;
        result[1] += (float)0.0067943174799258805;
        result[2] += (float)0;
        result[3] += (float)0.08770846201358863;
        result[4] += (float)0.9048795552810377;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += (float)0.03225806451612903;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.967741935483871;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.3507214206437292;
        result[1] += (float)0.006659267480577136;
        result[2] += (float)0.011098779134295227;
        result[3] += (float)0.6315205327413984;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9991988402258508;
        result[1] += (float)0;
        result[2] += (float)0.0007630093087135664;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.815046543567832e-05;
      } else {
        result[0] += (float)0.5945244474212994;
        result[1] += (float)0.0014233087742799731;
        result[2] += (float)0.0062793034159410585;
        result[3] += (float)0.38353985264567986;
        result[4] += (float)0.012642330877427997;
        result[5] += (float)0.0003348961821835231;
        result[6] += (float)0.0012558606831882117;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.002902757619738752;
        result[3] += (float)0;
        result[4] += (float)0.9970972423802612;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6666666666666666;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.3333333333333333;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9995393120393121;
        result[1] += (float)0;
        result[2] += (float)0.0004222972972972974;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.8390663390663396e-05;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0.001040582726326743;
        result[2] += (float)0.002081165452653486;
        result[3] += (float)0.24141519250780438;
        result[4] += (float)0.7554630593132154;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5837442103690423;
        result[1] += (float)0.0010458688181682356;
        result[2] += (float)0.0062752129090094125;
        result[3] += (float)0.3863738233975796;
        result[4] += (float)0.021664425519199164;
        result[5] += (float)0.00044822949350067237;
        result[6] += (float)0.00044822949350067237;
      }
    }
  } else {
    if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += (float)0.13687150837988826;
        result[1] += (float)0.015363128491620111;
        result[2] += (float)0.006983240223463687;
        result[3] += (float)0.840782122905028;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.007452258965999069;
        result[1] += (float)0.012109920819748486;
        result[2] += (float)0.006054960409874243;
        result[3] += (float)0.9743828598043782;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9885321100917431;
        result[1] += (float)0;
        result[2] += (float)0.011467889908256881;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += (float)0.001201923076923077;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9975961538461539;
        result[5] += (float)0.001201923076923077;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.10176470588235294;
        result[1] += (float)0;
        result[2] += (float)0.009411764705882352;
        result[3] += (float)0.8858823529411765;
        result[4] += (float)0;
        result[5] += (float)0.0029411764705882353;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9944085606863974;
        result[1] += (float)4.8202063048298465e-05;
        result[2] += (float)0.000723030945724477;
        result[3] += (float)0.004772004241781549;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)4.8202063048298465e-05;
      } else {
        result[0] += (float)0.8063005261131785;
        result[1] += (float)0.000898242012062107;
        result[2] += (float)0.0031438470422173745;
        result[3] += (float)0.18907994353907354;
        result[4] += (float)0;
        result[5] += (float)0.00012832028743744385;
        result[6] += (float)0.0004491210060310535;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += (float)0.97043593870268;
        result[1] += (float)0.0005947799314253726;
        result[2] += (float)0.000699741095794556;
        result[3] += (float)0.028199566160520606;
        result[4] += (float)3.4987054789727804e-05;
        result[5] += (float)0;
        result[6] += (float)3.4987054789727804e-05;
      } else {
        result[0] += (float)0.006481481481481482;
        result[1] += (float)0;
        result[2] += (float)0.006481481481481482;
        result[3] += (float)0.9833333333333334;
        result[4] += (float)0.0037037037037037043;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.23123003194888178;
        result[1] += (float)0.0115814696485623;
        result[2] += (float)0.00439297124600639;
        result[3] += (float)0.6485623003194888;
        result[4] += (float)0.1042332268370607;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.11290322580645161;
        result[1] += (float)0;
        result[2] += (float)0.014516129032258065;
        result[3] += (float)0.0478494623655914;
        result[4] += (float)0.8247311827956989;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += (float)0.3016498399409013;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.6983501600590988;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5853797829811537;
        result[1] += (float)0;
        result[2] += (float)0.01770416904625928;
        result[3] += (float)0.0034266133637921186;
        result[4] += (float)0.393489434608795;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += (float)0.8275328692962104;
        result[1] += (float)0;
        result[2] += (float)0.006187161639597835;
        result[3] += (float)0.1554524361948956;
        result[4] += (float)0.006187161639597835;
        result[5] += (float)0.002320185614849188;
        result[6] += (float)0.002320185614849188;
      } else {
        result[0] += (float)0.921063739974673;
        result[1] += (float)0;
        result[2] += (float)0.0037990713381173494;
        result[3] += (float)0.07260447446179824;
        result[4] += (float)0.0016884761502743775;
        result[5] += (float)0.0004221190375685944;
        result[6] += (float)0.0004221190375685944;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9984522942461762;
        result[1] += (float)0;
        result[2] += (float)0.0015477057538237436;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        result[0] += (float)0.8988735919899875;
        result[1] += (float)0.003504380475594493;
        result[2] += (float)0.0022528160200250315;
        result[3] += (float)0.09361702127659574;
        result[4] += (float)0;
        result[5] += (float)0.0010012515644555694;
        result[6] += (float)0.000750938673341677;
      } else {
        result[0] += (float)0.27473148671565856;
        result[1] += (float)0.0033917467495760316;
        result[2] += (float)0.0045223289994347085;
        result[3] += (float)0.6879592990390051;
        result[4] += (float)0.029395138496325607;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += (float)0.12870553359683795;
        result[1] += (float)0;
        result[2] += (float)0.007658102766798419;
        result[3] += (float)0.6998517786561265;
        result[4] += (float)0.16353754940711462;
        result[5] += (float)0.00024703557312252963;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5084391856620846;
        result[1] += (float)0.003306072733600139;
        result[2] += (float)0.010614233513137289;
        result[3] += (float)0.17522185488080738;
        result[4] += (float)0.30085261875761266;
        result[5] += (float)0.0005220114842526536;
        result[6] += (float)0.0010440229685053071;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += (float)0.13892145369284878;
        result[1] += (float)0;
        result[2] += (float)0.005861664712778429;
        result[3] += (float)0.7502930832356389;
        result[4] += (float)0.10433763188745604;
        result[5] += (float)0.0005861664712778429;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.025408348457350273;
        result[2] += (float)0;
        result[3] += (float)0.1088929219600726;
        result[4] += (float)0.8656987295825771;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += (float)0.9926739926739927;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.007326007326007326;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0016736401673640166;
        result[2] += (float)0.004741980474198048;
        result[3] += (float)0.5160390516039052;
        result[4] += (float)0.47670850767085077;
        result[5] += (float)0.0008368200836820083;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9996199645300228;
        result[1] += (float)0;
        result[2] += (float)0.00038003546997719787;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.6873782203940246;
        result[1] += (float)0;
        result[2] += (float)0.006061918164104785;
        result[3] += (float)0.3048278848235549;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0017319766183156527;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9994907485995587;
        result[1] += (float)0;
        result[2] += (float)0.0004526679115034233;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)5.6583488937927916e-05;
      } else {
        result[0] += (float)0.6982385215131389;
        result[1] += (float)0.0028876696505919725;
        result[2] += (float)0.007652324574068727;
        result[3] += (float)0.2902107998844932;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0010106843777071904;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.003640145605824233;
        result[1] += (float)0.0046801872074883;
        result[2] += (float)0.015080603224128965;
        result[3] += (float)0.9630785231409257;
        result[4] += (float)0.013520540821632865;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9868881118881119;
        result[1] += (float)0;
        result[2] += (float)0.013111888111888112;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.3589315525876461;
        result[4] += (float)0.6410684474123539;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.0014184397163120568;
        result[1] += (float)0.007801418439716312;
        result[2] += (float)0;
        result[3] += (float)0.05531914893617021;
        result[4] += (float)0.9354609929078014;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += (float)0.9998764669549104;
        result[1] += (float)0;
        result[2] += (float)0.00012353304508956145;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.5496661101836394;
        result[1] += (float)0;
        result[2] += (float)0.009181969949916527;
        result[3] += (float)0.3975375626043406;
        result[4] += (float)0.0419449081803005;
        result[5] += (float)0;
        result[6] += (float)0.001669449081803005;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += (float)0.9537625861155273;
        result[1] += (float)0.00026497085320614734;
        result[2] += (float)0.0007286698463169052;
        result[3] += (float)0.013447270800211977;
        result[4] += (float)0.031597774244833066;
        result[5] += (float)0;
        result[6] += (float)0.0001987281399046105;
      } else {
        result[0] += (float)0.7557705200651277;
        result[1] += (float)0.001628196532899147;
        result[2] += (float)0.0035437218657216733;
        result[3] += (float)0.2340771956709127;
        result[4] += (float)0.004501484532132937;
        result[5] += (float)0.0001915525332822526;
        result[6] += (float)0.00028732879992337894;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.009230769230769232;
        result[1] += (float)0.043076923076923075;
        result[2] += (float)0;
        result[3] += (float)0.19384615384615383;
        result[4] += (float)0.7538461538461538;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.0022727272727272726;
        result[4] += (float)0.9977272727272727;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += (float)0.35656342182890854;
        result[1] += (float)0.004424778761061947;
        result[2] += (float)0.009587020648967551;
        result[3] += (float)0.629424778761062;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0.13071297989031078;
        result[4] += (float)0.8692870201096892;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += (float)0.00234192037470726;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0.9964871194379391;
        result[5] += (float)0.00117096018735363;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.12603192074848651;
        result[1] += (float)0.001100715465052284;
        result[2] += (float)0.012658227848101266;
        result[3] += (float)0.8596587782058338;
        result[4] += (float)0;
        result[5] += (float)0.000550357732526142;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += (float)0.9375993460193469;
        result[1] += (float)0.0004541532313002407;
        result[2] += (float)0.0028611653571915165;
        result[3] += (float)0.05876742813025115;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0003179072619101685;
      } else {
        result[0] += (float)0.8752019102465061;
        result[1] += (float)0;
        result[2] += (float)0.0011236744153381559;
        result[3] += (float)0.12367441533815576;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9992386173290696;
        result[1] += (float)0;
        result[2] += (float)0.0007613826709304097;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += (float)0.7451715191697895;
        result[1] += (float)0.0013452483905063899;
        result[2] += (float)0.007398866147785145;
        result[3] += (float)0.21946766599404247;
        result[4] += (float)0.025175362736619585;
        result[5] += (float)0.0003843566830018257;
        result[6] += (float)0.0010569808782550207;
      } else {
        result[0] += (float)0;
        result[1] += (float)0.0005376344086021506;
        result[2] += (float)0.006720430107526883;
        result[3] += (float)0.8034946236559141;
        result[4] += (float)0.18870967741935488;
        result[5] += (float)0.0005376344086021506;
        result[6] += (float)0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += (float)0.1377245508982036;
        result[1] += (float)0.021290751829673986;
        result[2] += (float)0.00665335994677312;
        result[3] += (float)0.8343313373253493;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += (float)0;
      result[1] += (float)0;
      result[2] += (float)0;
      result[3] += (float)0;
      result[4] += (float)1;
      result[5] += (float)0;
      result[6] += (float)0;
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += (float)0.005865102639296188;
        result[1] += (float)0.011241446725317693;
        result[2] += (float)0.010263929618768328;
        result[3] += (float)0.9726295210166178;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9917610710607621;
        result[1] += (float)0;
        result[2] += (float)0.008238928939237899;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9995021446078431;
        result[1] += (float)0;
        result[2] += (float)0.00045955882352941176;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)3.829656862745098e-05;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += (float)0.35934027371622407;
        result[1] += (float)0.0011697274535033336;
        result[2] += (float)0.007135337466370334;
        result[3] += (float)0.5358521464498771;
        result[4] += (float)0.09521581471517133;
        result[5] += (float)0.0008188092174523334;
        result[6] += (float)0.0004678909814013334;
      } else {
        result[0] += (float)0.9708171206225681;
        result[1] += (float)0;
        result[2] += (float)0.003404669260700389;
        result[3] += (float)0.024319066147859923;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.0014591439688715954;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)1;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += (float)1;
        result[1] += (float)0;
        result[2] += (float)0;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
      } else {
        result[0] += (float)0.9989564453232274;
        result[1] += (float)0;
        result[2] += (float)0.0009886307464162135;
        result[3] += (float)0;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)5.4923930356456306e-05;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += (float)0.018233915082052618;
        result[1] += (float)0.00963792654337067;
        result[2] += (float)0.004688721021099245;
        result[3] += (float)0.8960666840323;
        result[4] += (float)0.07059129981766085;
        result[5] += (float)0.0007814535035165407;
        result[6] += (float)0;
      } else {
        result[0] += (float)0;
        result[1] += (float)0;
        result[2] += (float)0.0193756727664155;
        result[3] += (float)0.20165052027269464;
        result[4] += (float)0.7789738069608898;
        result[5] += (float)0;
        result[6] += (float)0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += (float)0.5528217481073641;
        result[1] += (float)0;
        result[2] += (float)0.0018926359256710254;
        result[3] += (float)0.4449415003441156;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0.00034411562284927734;
      } else {
        result[0] += (float)0.9705044751830757;
        result[1] += (float)0.0006102522375915378;
        result[2] += (float)0.007526444263628967;
        result[3] += (float)0.021358828315703824;
        result[4] += (float)0;
        result[5] += (float)0;
        result[6] += (float)0;
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
  result[6] /= 30;
  
  // Apply base_scores
  result[0] += (float)0;
  result[1] += (float)0;
  result[2] += (float)0;
  result[3] += (float)0;
  result[4] += (float)0;
  result[5] += (float)0;
  result[6] += (float)0;
  
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
    

    FILE* file = fopen("./../../codegen_small/codegen_small/dataset_148/split_2/test_data.csv", "r");
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
        
    }
    

    return 0;
}
