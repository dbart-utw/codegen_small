
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
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d7b000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9819494584837545;
          result[1] += 0;
          result[2] += 0.018050541516245487;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990486317085455;
          result[1] += 0;
          result[2] += 0.0009513682914544742;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.998719590268886;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012804097311139564;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40c00000))) ) ) {
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x42c90000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7866043613707167;
          result[1] += 0.005295950155763241;
          result[2] += 0.002180685358255452;
          result[3] += 0.20373831775700937;
          result[4] += 0.0003115264797507789;
          result[5] += 0.0003115264797507789;
          result[6] += 0.0015576323987538943;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.0027100271002710027;
          result[2] += 0.009033423667570008;
          result[3] += 0.9471544715447154;
          result[4] += 0.04110207768744354;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990444338270426;
          result[1] += 0.00047778308647873863;
          result[2] += 0.00047778308647873863;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0030627871362940277;
          result[1] += 0.0035732516590096988;
          result[2] += 0.01225114854517611;
          result[3] += 0.9803471158754467;
          result[4] += 0;
          result[5] += 0.0007656967840735069;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42280000))) ) ) {
          result[0] += 0.9899048168445342;
          result[1] += 0;
          result[2] += 0.008076146524372657;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020190366310931644;
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0.9986434825502528;
          result[1] += 8.221317877255724e-05;
          result[2] += 0.000657705430180458;
          result[3] += 0.0006165988407941793;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8877111626366346;
          result[1] += 0.004968532626697582;
          result[2] += 0.0023186485591255384;
          result[3] += 0.10433918516064922;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000662471016893011;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.18756336600202772;
          result[1] += 0.005407232173031429;
          result[2] += 0.006421088205474822;
          result[3] += 0.8002703616086516;
          result[4] += 0.0003379520108144643;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.22727272727272727;
          result[1] += 0;
          result[2] += 0.1919191919191919;
          result[3] += 0.31313131313131315;
          result[4] += 0.2676767676767677;
          result[5] += 0;
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
          result[0] += 0.003125;
          result[1] += 0.05625;
          result[2] += 0;
          result[3] += 0.940625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7368421052631579;
          result[5] += 0.2631578947368421;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.9525267993874426;
          result[1] += 0;
          result[2] += 0.04747320061255743;
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
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42890000))) ) ) {
          result[0] += 0.9995548631204095;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0004451368795904741;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9741100323624596;
          result[1] += 0;
          result[2] += 0.0226537216828479;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0032362459546925572;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9880668257756563;
          result[1] += 0;
          result[2] += 0.011933174224343675;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9996923786818427;
          result[1] += 0;
          result[2] += 0.0003076213181573483;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a80000))) ) ) {
          result[0] += 0.03453815261044177;
          result[1] += 0.004016064257028112;
          result[2] += 0.008433734939759036;
          result[3] += 0.9514056224899599;
          result[4] += 0.0012048192771084338;
          result[5] += 0.00040160642570281126;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0344053851907255;
          result[3] += 0.24906507105459985;
          result[4] += 0.7165295437546746;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.5479333101771449;
          result[1] += 0;
          result[2] += 0.0015630427231677665;
          result[3] += 0.44980896144494614;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006946856547412296;
        } else {
          result[0] += 0.9736553238199781;
          result[1] += 0;
          result[2] += 0.00592755214050494;
          result[3] += 0.018441273326015372;
          result[4] += 0;
          result[5] += 0.00021953896816684964;
          result[6] += 0.0017563117453347971;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17469310670443816;
          result[1] += 0.007554296506137866;
          result[2] += 0;
          result[3] += 0.817752596789424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.007547169811320755;
          result[1] += 0.07924528301886792;
          result[2] += 0;
          result[3] += 0.09433962264150944;
          result[4] += 0.8188679245283019;
          result[5] += 0;
          result[6] += 0;
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
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.13392857142857142;
          result[1] += 0;
          result[2] += 0.03125;
          result[3] += 0.8348214285714286;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.054474708171206226;
          result[4] += 0.9455252918287937;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9937007874015747;
          result[1] += 0;
          result[2] += 0.004724409448818898;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015748031496062992;
        } else {
          result[0] += 0.9995015452098495;
          result[1] += 0;
          result[2] += 0.0004984547901505334;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9982876712328768;
          result[5] += 0.0017123287671232876;
          result[6] += 0;
        } else {
          result[0] += 0.026817804810616533;
          result[1] += 0.0049764998617638926;
          result[2] += 0.01271772186895217;
          result[3] += 0.9543820846004977;
          result[4] += 0;
          result[5] += 0.001105888858169754;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
          result[0] += 0.6189644218551462;
          result[1] += 0;
          result[2] += 0.004129606099110547;
          result[3] += 0.3757941550190598;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011118170266836089;
        } else {
          result[0] += 0.9165209790209791;
          result[1] += 0.00043706293706293706;
          result[2] += 0.004152097902097902;
          result[3] += 0.0784527972027972;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00043706293706293706;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
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
          result[0] += 0.002688172043010753;
          result[1] += 0.021505376344086023;
          result[2] += 0;
          result[3] += 0.9758064516129032;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9991539763113367;
          result[1] += 0;
          result[2] += 0.0007402707275803723;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010575296108291032;
        } else {
          result[0] += 0.9999409018379528;
          result[1] += 0;
          result[2] += 5.9098162047160334e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.03029155622870125;
          result[1] += 0.005679666792881484;
          result[2] += 0.013252555850056797;
          result[3] += 0.8477849299507763;
          result[4] += 0.10185535781900795;
          result[5] += 0.001135933358576297;
          result[6] += 0;
        } else {
          result[0] += 0.9834394904458599;
          result[1] += 0;
          result[2] += 0.004203821656050956;
          result[3] += 0.01070063694267516;
          result[4] += 0;
          result[5] += 0.0007643312101910828;
          result[6] += 0.0008917197452229299;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41ac0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01274787535410765;
          result[3] += 0;
          result[4] += 0.981586402266289;
          result[5] += 0.005665722379603401;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0010145417653026716;
          result[2] += 0.005072708826513358;
          result[3] += 0.993912749408184;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0121580547112462;
          result[1] += 0.03343465045592705;
          result[2] += 0;
          result[3] += 0.14893617021276595;
          result[4] += 0.8054711246200608;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.2411242603550296;
          result[1] += 0.029585798816568046;
          result[2] += 0;
          result[3] += 0.7292899408284024;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.023255813953488372;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.046511627906976744;
          result[4] += 0.9302325581395349;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.2413793103448276;
          result[1] += 0;
          result[2] += 0.04482758620689655;
          result[3] += 0.7137931034482758;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9911764705882353;
          result[1] += 0;
          result[2] += 0.008823529411764706;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005341880341880342;
          result[3] += 0.9700854700854701;
          result[4] += 0.024572649572649572;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.011148272017837236;
          result[2] += 0;
          result[3] += 0.9888517279821628;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9493087557603687;
          result[1] += 0;
          result[2] += 0.05069124423963134;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
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
          result[3] += 1;
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
          result[1] += 0.21348314606741572;
          result[2] += 0;
          result[3] += 0.7865168539325843;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5;
          result[5] += 0.5;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9786148377479646;
          result[1] += 5.733287467033597e-05;
          result[2] += 0.0012613232427473914;
          result[3] += 0.02006650613461759;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4374578329510188;
          result[1] += 0.0013493455673998112;
          result[2] += 0.004452840372419378;
          result[3] += 0.550532991499123;
          result[4] += 0.005667251383079207;
          result[5] += 0.0002698691134799623;
          result[6] += 0.0002698691134799623;
        } else {
          result[0] += 0.9819513025710881;
          result[1] += 0;
          result[2] += 0.0008513536523071685;
          result[3] += 0.017197343776604805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d00000))) ) ) {
          result[0] += 0.9868942395611094;
          result[1] += 0;
          result[2] += 0.011581834806461445;
          result[3] += 0.0006095702529716549;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009143553794574825;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8095238095238095;
          result[5] += 0.19047619047619047;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.00425531914893617;
          result[4] += 0.9957446808510638;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9984624846248462;
          result[4] += 0.0006150061500615006;
          result[5] += 0.0009225092250922509;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9984202211690363;
          result[5] += 0.001579778830963665;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.39473684210526316;
          result[2] += 0.6052631578947368;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9977878682035162;
          result[1] += 0;
          result[2] += 0.0022121317964838745;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0.41286307053941906;
          result[1] += 0.026970954356846474;
          result[2] += 0;
          result[3] += 0.5601659751037344;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9424996992662094;
          result[1] += 0.0016841092265126906;
          result[2] += 0.00805966558402502;
          result[3] += 0.045591242632022126;
          result[4] += 0;
          result[5] += 0.0001202935161794779;
          result[6] += 0.0020449897750511245;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.4;
          result[2] += 0;
          result[3] += 0.6;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005368647100930566;
          result[3] += 0.9946313528990695;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9849246231155779;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01507537688442211;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0013531799729364006;
          result[2] += 0;
          result[3] += 0.9905277401894452;
          result[4] += 0.0040595399188092015;
          result[5] += 0.0040595399188092015;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.9803652968036529;
          result[1] += 0.005479452054794521;
          result[2] += 0.00410958904109589;
          result[3] += 0.008675799086757991;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013698630136986301;
        } else {
          result[0] += 0.9988482211415408;
          result[1] += 4.2658476239228734e-05;
          result[2] += 0.00046924323863151607;
          result[3] += 0.0005545601911099735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 8.531695247845747e-05;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ab0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.025080042689434364;
          result[3] += 0.8847385272145144;
          result[4] += 0.09018143009605123;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9956726986624705;
          result[1] += 0;
          result[2] += 0.004327301337529505;
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
          result[0] += 0.20901126408010012;
          result[1] += 0.014392991239048811;
          result[2] += 0.006257822277847309;
          result[3] += 0.7703379224030038;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.95;
          result[5] += 0.05;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40c00000))) ) ) {
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
          result[2] += 0.03994082840236687;
          result[3] += 0;
          result[4] += 0.9600591715976331;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0.9905660377358491;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.009433962264150943;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9254237288135593;
          result[1] += 0;
          result[2] += 0.061016949152542375;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.013559322033898305;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.08888888888888889;
          result[2] += 0;
          result[3] += 0.1111111111111111;
          result[4] += 0.8;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3425;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6566666666666666;
          result[4] += 0.0008333333333333334;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.45604395604395603;
          result[1] += 0;
          result[2] += 0.04395604395604396;
          result[3] += 0.5;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40600000))) ) ) {
          result[0] += 0.8722943722943723;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1277056277056277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9326819841099419;
          result[1] += 0;
          result[2] += 0.0002147305132059265;
          result[3] += 0.06678118960704314;
          result[4] += 0;
          result[5] += 0.0002147305132059265;
          result[6] += 0.00010736525660296326;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42300000))) ) ) {
          result[0] += 0.0781448538754765;
          result[1] += 0;
          result[2] += 0.01397712833545108;
          result[3] += 0.7852604828462516;
          result[4] += 0.1207115628970775;
          result[5] += 0.0019059720457433292;
          result[6] += 0;
        } else {
          result[0] += 0.989145183175034;
          result[1] += 0;
          result[2] += 0.008141112618724558;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0027137042062415195;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
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
          result[0] += 0.9989521288330024;
          result[1] += 0;
          result[2] += 0.0008824178248400617;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00016545334215751158;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.4773982923154194;
          result[1] += 0.0037669512807634357;
          result[2] += 0.0027624309392265192;
          result[3] += 0.48920140632847814;
          result[4] += 0.026368658965344047;
          result[5] += 0;
          result[6] += 0.0005022601707684581;
        } else {
          result[0] += 0.9901625320786998;
          result[1] += 0;
          result[2] += 0.003421727972626176;
          result[3] += 0.00641573994867408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41e80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41580000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.05714285714285714;
          result[2] += 0;
          result[3] += 0.9428571428571428;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.28597922848664686;
          result[1] += 0.004821958456973294;
          result[2] += 0.016320474777448073;
          result[3] += 0.6921364985163204;
          result[4] += 0;
          result[5] += 0.000741839762611276;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.020833333333333332;
          result[1] += 0.3333333333333333;
          result[2] += 0;
          result[3] += 0.6458333333333334;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
          result[0] += 0.9868263473053892;
          result[1] += 0;
          result[2] += 0.013173652694610778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07317073170731707;
          result[1] += 0.00430416068866571;
          result[2] += 0.003825920612147298;
          result[3] += 0.9177427068388331;
          result[4] += 0.0009564801530368245;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.8555133079847909;
          result[1] += 0;
          result[2] += 0.053231939163498096;
          result[3] += 0.09125475285171103;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44db3000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990915697674418;
          result[1] += 0;
          result[2] += 0.0009084302325581395;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.6663029244871236;
          result[1] += 0.002182453077258839;
          result[2] += 0.003491924923614142;
          result[3] += 0.32736796158882586;
          result[4] += 0.00021824530772588389;
          result[5] += 0;
          result[6] += 0.00043649061545176777;
        } else {
          result[0] += 0;
          result[1] += 0.0011198208286674132;
          result[2] += 0.010078387458006719;
          result[3] += 0.7975923852183651;
          result[4] += 0.18980963045912655;
          result[5] += 0.0013997760358342665;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.9696423977360432;
          result[1] += 0;
          result[2] += 0.0038590172369436584;
          result[3] += 0.02649858502701312;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.45454545454545453;
          result[1] += 0;
          result[2] += 0.09090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.45454545454545453;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992380123006587;
          result[1] += 0;
          result[2] += 0.0007075600065313232;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.442769281010179e-05;
        }
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.43478260869565216;
          result[1] += 0.001570048309178744;
          result[2] += 0.006400966183574879;
          result[3] += 0.47729468599033814;
          result[4] += 0.078743961352657;
          result[5] += 0.0008454106280193237;
          result[6] += 0.00036231884057971015;
        } else {
          result[0] += 0.9689311384187341;
          result[1] += 0;
          result[2] += 0.004869000695571528;
          result[3] += 0.024113146301878045;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0020867145838163697;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c90000))) ) ) {
          result[0] += 0.04446460980036298;
          result[1] += 0;
          result[2] += 0.013157894736842105;
          result[3] += 0.9396551724137931;
          result[4] += 0.0009074410163339383;
          result[5] += 0.0018148820326678765;
          result[6] += 0;
        } else {
          result[0] += 0.646551724137931;
          result[1] += 0.09482758620689655;
          result[2] += 0;
          result[3] += 0.25862068965517243;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.6818181818181818;
          result[2] += 0;
          result[3] += 0.3181818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008086253369272238;
          result[2] += 0;
          result[3] += 0.9919137466307277;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41f40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.980204896683452;
          result[1] += 0.00023152167621693582;
          result[2] += 0.001099727962030445;
          result[3] += 0.01829021242113793;
          result[4] += 0.00011576083810846791;
          result[5] += 0;
          result[6] += 5.7880419054233955e-05;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.8938588600866793;
          result[1] += 0.0013083653610270669;
          result[2] += 0.003270913402567667;
          result[3] += 0.10074413279908415;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008177283506419167;
        } else {
          result[0] += 0.512378640776699;
          result[1] += 0;
          result[2] += 0.004368932038834952;
          result[3] += 0.48325242718446604;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.15997942386831276;
          result[1] += 0;
          result[2] += 0.006172839506172839;
          result[3] += 0.8333333333333334;
          result[4] += 0.00051440329218107;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17288801571709234;
          result[1] += 0;
          result[2] += 0.05304518664047151;
          result[3] += 0.20235756385068762;
          result[4] += 0.5658153241650294;
          result[5] += 0.005893909626719057;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.029850746268656716;
          result[1] += 0.029850746268656716;
          result[2] += 0;
          result[3] += 0.9402985074626866;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43608000))) ) ) {
          result[0] += 0;
          result[1] += 0.013636363636363636;
          result[2] += 0;
          result[3] += 0.020454545454545454;
          result[4] += 0.9659090909090909;
          result[5] += 0;
          result[6] += 0;
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
          result[0] += 0.14255014326647564;
          result[1] += 0.011461318051575931;
          result[2] += 0.013610315186246419;
          result[3] += 0.7829512893982808;
          result[4] += 0.0494269340974212;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05416116248348745;
          result[4] += 0.9458388375165125;
          result[5] += 0;
          result[6] += 0;
        }
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.022964509394572025;
          result[2] += 0;
          result[3] += 0.9770354906054279;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9952174903211114;
          result[1] += 0;
          result[2] += 0.0038715554543384194;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009109542245502164;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.9878564549223232;
          result[1] += 0.00012562288011389809;
          result[2] += 0.0005443658138268917;
          result[3] += 0.011431682090364725;
          result[4] += 0;
          result[5] += 4.187429337129936e-05;
          result[6] += 0;
        } else {
          result[0] += 0.16666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8333333333333334;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17085271317829456;
          result[1] += 0.0018604651162790699;
          result[2] += 0.015193798449612403;
          result[3] += 0.8114728682170542;
          result[4] += 0;
          result[5] += 0.00062015503875969;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.008108108108108109;
          result[1] += 0.043243243243243246;
          result[2] += 0;
          result[3] += 0.22432432432432434;
          result[4] += 0.7243243243243244;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.038880248833592534;
          result[4] += 0.9611197511664075;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.910377358490566;
          result[1] += 0;
          result[2] += 0.026729559748427674;
          result[3] += 0.06289308176100629;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9918460534898892;
          result[4] += 0.005870841487279844;
          result[5] += 0.0022831050228310505;
          result[6] += 0;
        } else {
          result[0] += 0.7307692307692307;
          result[1] += 0;
          result[2] += 0.2692307692307692;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0.9980519480519481;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.001948051948051948;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9473684210526315;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.05263157894736842;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9421296296296297;
          result[1] += 0;
          result[2] += 0.034722222222222224;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.023148148148148147;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0.125;
          result[1] += 0.016260162601626018;
          result[2] += 0;
          result[3] += 0.5538617886178862;
          result[4] += 0.3048780487804878;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5116744496330887;
          result[1] += 0;
          result[2] += 0.0066711140760507;
          result[3] += 0.36624416277518346;
          result[4] += 0.11541027351567712;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.16808510638297874;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8297872340425533;
          result[4] += 0;
          result[5] += 0.0021276595744680856;
          result[6] += 0;
        } else {
          result[0] += 0.9965233514891645;
          result[1] += 0;
          result[2] += 0.00034766485108355543;
          result[3] += 0.0031289836597519992;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01455989410986102;
          result[3] += 0.8510919920582396;
          result[4] += 0.1317008603573792;
          result[5] += 0.0026472534745201853;
          result[6] += 0;
        } else {
          result[0] += 0.9805589307411908;
          result[1] += 0;
          result[2] += 0.015795868772782506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003645200486026732;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41380000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 0.9232236842105265;
          result[1] += 0.0006578947368421054;
          result[2] += 0.001842105263157895;
          result[3] += 0.07171052631578949;
          result[4] += 0.0021710526315789477;
          result[5] += 0.0003289473684210527;
          result[6] += 6.578947368421054e-05;
        } else {
          result[0] += 0.9081632653061225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.09059987631416203;
          result[4] += 0.0012368583797155227;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.9801352493660186;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.018808114961961116;
          result[4] += 0.0010566356720202875;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5566343042071198;
          result[1] += 0;
          result[2] += 0.0024271844660194173;
          result[3] += 0.38349514563106796;
          result[4] += 0.05744336569579288;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d10000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.29155555555555557;
          result[1] += 0.0035555555555555557;
          result[2] += 0.008;
          result[3] += 0.696;
          result[4] += 0.0008888888888888889;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05110062893081761;
          result[1] += 0;
          result[2] += 0.02279874213836478;
          result[3] += 0.14386792452830188;
          result[4] += 0.7814465408805031;
          result[5] += 0.0007861635220125787;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41080000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0625;
          result[2] += 0;
          result[3] += 0.9375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9977763659466328;
          result[4] += 0.0012706480304955528;
          result[5] += 0.0009529860228716646;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004651162790697674;
          result[4] += 0.9953488372093023;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ec0000))) ) ) {
          result[0] += 0.6470588235294118;
          result[1] += 0.3235294117647059;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.029411764705882353;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6699029126213593;
          result[1] += 0;
          result[2] += 0.3106796116504854;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.019417475728155338;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0.9148936170212766;
          result[1] += 0.0851063829787234;
          result[2] += 0;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9829268292682927;
          result[1] += 0;
          result[2] += 0.01707317073170732;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994457859942203;
          result[1] += 0;
          result[2] += 0.0005542140057796603;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9466898090751302;
          result[1] += 0.0014877262583684603;
          result[2] += 0.008182494421026532;
          result[3] += 0.042896107116290605;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007438631291842301;
        } else {
          result[0] += 0;
          result[1] += 0.0007390983000739098;
          result[2] += 0.0029563932002956393;
          result[3] += 0.9963045084996305;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
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
          result[3] += 0.9745331069609509;
          result[4] += 0.024617996604414265;
          result[5] += 0.0008488964346349746;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0008771929824561404;
          result[2] += 0;
          result[3] += 0.8342105263157895;
          result[4] += 0.1649122807017544;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.2173913043478261;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7391304347826088;
          result[5] += 0.04347826086956522;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01366742596810934;
          result[3] += 0;
          result[4] += 0.9854214123006834;
          result[5] += 0.0009111617312072893;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9982431482782853;
          result[1] += 0.00028109627547435;
          result[2] += 0.0009135628952916374;
          result[3] += 0.0005621925509487;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9897335080821319;
          result[1] += 0;
          result[2] += 0.0008737439930100481;
          result[3] += 0.008955875928352992;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00043687199650502403;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
          result[0] += 0.9873997709049256;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012600229095074456;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8588235294117647;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1411764705882353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.5795422435716304;
          result[1] += 0.0018366770274088726;
          result[2] += 0.00861825374399548;
          result[3] += 0.40915512856739195;
          result[4] += 0;
          result[5] += 0.00014128284826222097;
          result[6] += 0.0007064142413111048;
        } else {
          result[0] += 0;
          result[1] += 0.03103448275862069;
          result[2] += 0;
          result[3] += 0.9689655172413794;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9268929503916449;
          result[1] += 0;
          result[2] += 0.0032637075718015664;
          result[3] += 0.06984334203655353;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9937507658375199;
          result[1] += 0;
          result[2] += 0.004656292121063595;
          result[3] += 0.0009802720254870727;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006126700159294204;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.2727272727272727;
          result[3] += 0;
          result[4] += 0.36363636363636365;
          result[5] += 0.36363636363636365;
          result[6] += 0;
        } else {
          result[0] += 0.0003380662609871535;
          result[1] += 0;
          result[2] += 0.001352265043948614;
          result[3] += 0.9976335361730899;
          result[4] += 0;
          result[5] += 0.000676132521974307;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7403508771929824;
          result[4] += 0.2596491228070175;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007096392667060911;
          result[2] += 0;
          result[3] += 0.0059136605558840925;
          result[4] += 0.986989946777055;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980645161290322;
          result[1] += 8.064516129032258e-05;
          result[2] += 0.0014516129032258066;
          result[3] += 0.0004032258064516129;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423a0000))) ) ) {
          result[0] += 0.9982070820259973;
          result[1] += 0;
          result[2] += 0.0017929179740026895;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x425a0000))) ) ) {
          result[0] += 0.48442751512435583;
          result[1] += 0.003809097019941743;
          result[2] += 0.002464709836432893;
          result[3] += 0.5088505489580999;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00044812906116961686;
        } else {
          result[0] += 0.8307401483204886;
          result[1] += 0.0010178857059764432;
          result[2] += 0.010469681547186274;
          result[3] += 0.15675439872037225;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010178857059764432;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0.3333333333333333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9869705439690389;
          result[1] += 0.00021500752526338422;
          result[2] += 0.0005590195656847989;
          result[3] += 0.012169425929907546;
          result[4] += 0;
          result[5] += 4.300150505267684e-05;
          result[6] += 4.300150505267684e-05;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.9872596153846154;
          result[1] += 0.0021634615384615386;
          result[2] += 0.002403846153846154;
          result[3] += 0.007211538461538462;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009615384615384616;
        } else {
          result[0] += 0.68188302425107;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3181169757489301;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.007545931758530184;
          result[2] += 0.006889763779527559;
          result[3] += 0.8996062992125984;
          result[4] += 0.08595800524934383;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981024667931688;
          result[1] += 0.0018975332068311196;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.09341825902335456;
          result[1] += 0;
          result[2] += 0.08280254777070063;
          result[3] += 0.03397027600849257;
          result[4] += 0.7898089171974523;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07092819614711034;
          result[4] += 0.9290718038528897;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.007997334221926024;
          result[3] += 0.8403865378207265;
          result[4] += 0.15028323892035989;
          result[5] += 0.0013328890369876708;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7197278911564626;
          result[4] += 0.2802721088435374;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42400000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.9869684499314129;
          result[1] += 0;
          result[2] += 0.006858710562414266;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.006172839506172839;
        } else {
          result[0] += 0.9991682838924314;
          result[1] += 0;
          result[2] += 0.0008317161075686166;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9862500000000001;
          result[1] += 0;
          result[2] += 0.012500000000000002;
          result[3] += 0.0012500000000000002;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.12179487179487179;
          result[1] += 0.00641025641025641;
          result[2] += 0.0009157509157509158;
          result[3] += 0.8708791208791209;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0018674136321195146;
          result[1] += 0.011204481792717087;
          result[2] += 0.0018674136321195146;
          result[3] += 0.9850606909430439;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9612903225806452;
          result[1] += 0;
          result[2] += 0.03870967741935484;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.997421351211965;
          result[1] += 0;
          result[2] += 0.0025786487880350697;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998750988800533;
          result[1] += 0;
          result[2] += 0.00012490111994670886;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.998661311914324;
          result[5] += 0.0013386880856760374;
          result[6] += 0;
        } else {
          result[0] += 0.40777458909470393;
          result[1] += 0.0022175841377511094;
          result[2] += 0.007826767545003915;
          result[3] += 0.5808765979650405;
          result[4] += 0;
          result[5] += 0.000521784503000261;
          result[6] += 0.0007826767545003915;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0.9938241106719368;
          result[1] += 0;
          result[2] += 0.004693675889328063;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014822134387351778;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45cb4000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9974849094567404;
          result[1] += 0;
          result[2] += 0.0025150905432595573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997938314365825;
          result[1] += 0;
          result[2] += 0.0002061685634174501;
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
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
          result[0] += 0;
          result[1] += 0.011658031088082901;
          result[2] += 0;
          result[3] += 0.07901554404145078;
          result[4] += 0.9093264248704663;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01730257320319432;
          result[1] += 0.004658385093167702;
          result[2] += 0.007985803016858917;
          result[3] += 0.738243123336291;
          result[4] += 0.23070097604259096;
          result[5] += 0.0011091393078970719;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9960977265015271;
          result[1] += 0;
          result[2] += 0.0033932813030200207;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005089921954530032;
        } else {
          result[0] += 0.943650126156434;
          result[1] += 0;
          result[2] += 0.012195121951219513;
          result[3] += 0.04163162321278385;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002523128679562658;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006635700066357001;
          result[2] += 0;
          result[3] += 0.9993364299933643;
          result[4] += 0;
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
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
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
          result[2] += 0.9411764705882353;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.058823529411764705;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9953314659197012;
          result[1] += 0;
          result[2] += 0.003734827264239029;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009337068160597573;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
          result[0] += 0.9995825796577154;
          result[1] += 0;
          result[2] += 0.0004174203422846807;
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
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.573231185218567;
          result[1] += 0;
          result[2] += 0.009689049121225778;
          result[3] += 0.3548895899053628;
          result[4] += 0.06219017575484453;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8647716069668089;
          result[1] += 0.0013144922773578704;
          result[2] += 0.004436411436082813;
          result[3] += 0.12668419323036476;
          result[4] += 0.0003286230693394676;
          result[5] += 0.0006572461386789352;
          result[6] += 0.0018074268813670716;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9990147783251232;
          result[4] += 0.0006568144499178982;
          result[5] += 0.0003284072249589491;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.029535864978902954;
          result[3] += 0;
          result[4] += 0.9676511954992968;
          result[5] += 0.0028129395218002813;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.20916481892091648;
          result[1] += 0.008869179600886918;
          result[2] += 0.009608277900960829;
          result[3] += 0.7723577235772358;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.06853146853146853;
          result[4] += 0.9314685314685315;
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
          result[0] += 0.026785714285714284;
          result[1] += 0.125;
          result[2] += 0;
          result[3] += 0.8482142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0.9814814814814815;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.018518518518518517;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0013966480446927375;
          result[2] += 0;
          result[3] += 0.9958100558659218;
          result[4] += 0;
          result[5] += 0.002793296089385475;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
          result[0] += 0.9978532183531638;
          result[1] += 0.00029108903685914927;
          result[2] += 0.000982425499399629;
          result[3] += 0.0006913364625404795;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001819306480369683;
        } else {
          result[0] += 0.8863636363636364;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.11363636363636363;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.004061738424045491;
          result[2] += 0.015434606011372868;
          result[3] += 0.9524776604386678;
          result[4] += 0.02761982128350934;
          result[5] += 0.00040617384240454913;
          result[6] += 0;
        } else {
          result[0] += 0.9632721202003339;
          result[1] += 0;
          result[2] += 0.03672787979966611;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.001893939393939394;
          result[1] += 0.026515151515151516;
          result[2] += 0;
          result[3] += 0.5170454545454546;
          result[4] += 0.45454545454545453;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.027369826435246995;
          result[4] += 0.972630173564753;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9195612431444241;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.08043875685557587;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007899934167215274;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9921000658327848;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9940227136879858;
          result[1] += 0;
          result[2] += 0.004184100418410042;
          result[3] += 0.0002988643156007173;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0014943215780035867;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.1724137931034483;
          result[3] += 0;
          result[4] += 0.5862068965517241;
          result[5] += 0.2413793103448276;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.003179650238473768;
          result[3] += 0;
          result[4] += 0.9968203497615262;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9954864593781344;
          result[1] += 0;
          result[2] += 0.003009027081243731;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0015045135406218655;
        } else {
          result[0] += 0.9996722520381827;
          result[1] += 0;
          result[2] += 0.00032774796181736244;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.03917137476459511;
          result[1] += 0.0030131826741996237;
          result[2] += 0.009039548022598872;
          result[3] += 0.8470809792843692;
          result[4] += 0.10131826741996235;
          result[5] += 0.00037664783427495297;
          result[6] += 0;
        } else {
          result[0] += 0.9859173126614987;
          result[1] += 0;
          result[2] += 0.0036175710594315244;
          result[3] += 0.008914728682170543;
          result[4] += 0;
          result[5] += 0.0003875968992248062;
          result[6] += 0.0011627906976744186;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9970238095238095;
          result[5] += 0.002976190476190476;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0017041581458759373;
          result[2] += 0.010224948875255624;
          result[3] += 0.9877300613496932;
          result[4] += 0;
          result[5] += 0.00034083162917518747;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.2551928783382789;
          result[1] += 0.004451038575667656;
          result[2] += 0;
          result[3] += 0.7403560830860534;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
          result[0] += 0.05102040816326531;
          result[1] += 0.20408163265306123;
          result[2] += 0;
          result[3] += 0.7448979591836735;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.9042553191489362;
          result[1] += 0;
          result[2] += 0.09574468085106383;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00823045267489712;
          result[3] += 0.9917695473251029;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9969864389753893;
          result[1] += 0;
          result[2] += 0.0025113008538422904;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005022601707684581;
        } else {
          result[0] += 0.9997536844698058;
          result[1] += 0;
          result[2] += 0.00024631553019417875;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4625fc00))) ) ) {
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b80000))) ) ) {
          result[0] += 0;
          result[1] += 0.005050505050505051;
          result[2] += 0;
          result[3] += 0.98989898989899;
          result[4] += 0;
          result[5] += 0.005050505050505051;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0015337423312883436;
          result[3] += 0;
          result[4] += 0.9984662576687117;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.6529758346853385;
          result[1] += 0.0012808470668602167;
          result[2] += 0.005721116898642301;
          result[3] += 0.33891213389121333;
          result[4] += 8.538980445734777e-05;
          result[5] += 8.538980445734777e-05;
          result[6] += 0.0009392878490308255;
        } else {
          result[0] += 0.005191434133679429;
          result[1] += 0;
          result[2] += 0.018170019467878003;
          result[3] += 0.8059701492537313;
          result[4] += 0.16872160934458144;
          result[5] += 0.001946787800129786;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.6097560975609756;
          result[1] += 0;
          result[2] += 0.024390243902439025;
          result[3] += 0.36585365853658536;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009009009009009009;
          result[2] += 0;
          result[3] += 0.990990990990991;
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
          result[0] += 0.010752688172043012;
          result[1] += 0.07526881720430108;
          result[2] += 0;
          result[3] += 0.9139784946236559;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9710144927536232;
          result[1] += 0;
          result[2] += 0.028985507246376812;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0013333333333333333;
          result[3] += 0.9986666666666667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0.052631578947368425;
          result[1] += 0.6315789473684211;
          result[2] += 0;
          result[3] += 0.31578947368421056;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.12714285714285714;
          result[1] += 0.0064285714285714285;
          result[2] += 0.007142857142857143;
          result[3] += 0.8592857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9962871287128713;
          result[5] += 0.0037128712871287127;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006605019815059446;
          result[2] += 0.009247027741083226;
          result[3] += 0.9874504623513871;
          result[4] += 0;
          result[5] += 0.0026420079260237785;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9933194655572446;
          result[1] += 0.00036002880230418433;
          result[2] += 0.0016801344107528601;
          result[3] += 0.004440355228418274;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002000160012801024;
        } else {
          result[0] += 0.6043331076506432;
          result[1] += 0;
          result[2] += 0.0023019634394041977;
          result[3] += 0.3921462423832092;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012186865267433988;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42680000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9625550660792952;
          result[1] += 0;
          result[2] += 0.037444933920704845;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9930555555555556;
          result[1] += 0;
          result[2] += 0.00625;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006944444444444445;
        } else {
          result[0] += 0.9997278911564625;
          result[1] += 0;
          result[2] += 0.00027210884353741496;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8645879241956809;
          result[1] += 0.001873071837814015;
          result[2] += 0.005949757602468048;
          result[3] += 0.12626707800793302;
          result[4] += 0;
          result[5] += 0.00033054208902600263;
          result[6] += 0.000991626267078008;
        } else {
          result[0] += 0;
          result[1] += 0.000271370420624152;
          result[2] += 0.010854816824966078;
          result[3] += 0.8111261872455903;
          result[4] += 0.17774762550881953;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0.8333333333333334;
          result[1] += 0.10784313725490197;
          result[2] += 0;
          result[3] += 0.058823529411764705;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.05550581915846016;
          result[1] += 0;
          result[2] += 0.01566696508504924;
          result[3] += 0.9256938227394808;
          result[4] += 0.0017905102954341987;
          result[5] += 0.0013428827215756492;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0.0149812734082397;
          result[1] += 0.011235955056179775;
          result[2] += 0;
          result[3] += 0.0898876404494382;
          result[4] += 0.8838951310861424;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9965870307167235;
          result[4] += 0.0034129692832764505;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07741935483870968;
          result[4] += 0.9225806451612903;
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
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.9366902746588357;
          result[1] += 0.0009500777336327518;
          result[2] += 0.0018137847642079807;
          result[3] += 0.0603731214372085;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00017274140611504577;
        } else {
          result[0] += 0.9969230769230769;
          result[1] += 5.8055152394775034e-05;
          result[2] += 0.0004644412191582003;
          result[3] += 0.0022060957910014513;
          result[4] += 5.8055152394775034e-05;
          result[5] += 0.00029027576197387516;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.015052684395383844;
          result[3] += 0.8575012543903663;
          result[4] += 0.12694430506773707;
          result[5] += 0.0005017561465127947;
          result[6] += 0;
        } else {
          result[0] += 0.9820051413881749;
          result[1] += 0;
          result[2] += 0.017994858611825194;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8991021804189825;
          result[1] += 0;
          result[2] += 0.006840530141085934;
          result[3] += 0.08892689183411714;
          result[4] += 0.0025651988029072254;
          result[5] += 0.0012825994014536127;
          result[6] += 0.0012825994014536127;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008700696055684454;
          result[3] += 0.8016241299303944;
          result[4] += 0.18880510440835266;
          result[5] += 0.0008700696055684454;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 0.8068669527896996;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.19313304721030042;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.008;
          result[1] += 0.018;
          result[2] += 0;
          result[3] += 0.974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0.013803680981595092;
          result[2] += 0.004601226993865031;
          result[3] += 0.9815950920245399;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9196428571428571;
          result[1] += 0;
          result[2] += 0.08035714285714286;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.017973856209150325;
          result[4] += 0.9820261437908496;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011009174311926606;
          result[2] += 0;
          result[3] += 0.08073394495412844;
          result[4] += 0.908256880733945;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0333033303330333;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9666966696669667;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.20689655172413793;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7877984084880637;
          result[4] += 0.005305039787798408;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07317073170731707;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7560975609756098;
          result[4] += 0.17073170731707318;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5875;
          result[1] += 0.1875;
          result[2] += 0.2;
          result[3] += 0.0125;
          result[4] += 0;
          result[5] += 0.0125;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011494252873563218;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9885057471264368;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9992944615229552;
          result[1] += 5.039560550320012e-05;
          result[2] += 0.0006551428715416015;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.07142857142857142;
          result[2] += 0;
          result[3] += 0.9285714285714286;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0.5892857142857143;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4107142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9737335834896811;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02626641651031895;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.9677754677754679;
          result[1] += 0.005197505197505199;
          result[2] += 0.006237006237006238;
          result[3] += 0.019490644490644495;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012993762993762997;
        } else {
          result[0] += 0.07603060972599358;
          result[1] += 0;
          result[2] += 0.006911873611453962;
          result[3] += 0.9170575166625524;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.9352750809061489;
          result[1] += 0;
          result[2] += 0.003236245954692557;
          result[3] += 0.061488673139158574;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9958877600387035;
          result[1] += 0;
          result[2] += 0.0026608611514271894;
          result[3] += 0.0007256894049346881;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0007256894049346881;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42db0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0041386445938955;
          result[3] += 0.7589239524055873;
          result[4] += 0.2359027418520435;
          result[5] += 0.001034661148473875;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04296875;
          result[2] += 0;
          result[3] += 0.16015625;
          result[4] += 0.796875;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d60000))) ) ) {
          result[0] += 0.997491547606064;
          result[1] += 0;
          result[2] += 0.0008725051804995092;
          result[3] += 0.0014178209183117025;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0002181262951248773;
        } else {
          result[0] += 0.10526315789473684;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8947368421052632;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
          result[0] += 0.07929824561403509;
          result[1] += 0;
          result[2] += 0.008421052631578947;
          result[3] += 0.9122807017543859;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.992089650626236;
          result[1] += 0;
          result[2] += 0.005932762030323006;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001977587343441002;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.006944444444444444;
          result[1] += 0.011284722222222222;
          result[2] += 0.018229166666666668;
          result[3] += 0.9626736111111112;
          result[4] += 0.0008680555555555555;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9804270462633452;
          result[1] += 0;
          result[2] += 0.019572953736654804;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009708737864077669;
          result[2] += 0;
          result[3] += 0.9902912621359223;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9991766384894061;
          result[1] += 0;
          result[2] += 0.0006586892084751345;
          result[3] += 0;
          result[4] += 5.4890767372927874e-05;
          result[5] += 0;
          result[6] += 0.00010978153474585575;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001607717041800643;
          result[3] += 0.1832797427652733;
          result[4] += 0.815112540192926;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6247146118721462;
          result[1] += 0.0005707762557077625;
          result[2] += 0.003852739726027397;
          result[3] += 0.3530251141552511;
          result[4] += 0.016552511415525113;
          result[5] += 0.0005707762557077625;
          result[6] += 0.0007134703196347032;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42220000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.996937212863706;
          result[1] += 0;
          result[2] += 0.002041858090862685;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010209290454313426;
        } else {
          result[0] += 0.9997882402766993;
          result[1] += 0;
          result[2] += 0.00021175972330062822;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
          result[0] += 0.010014306151645207;
          result[1] += 0;
          result[2] += 0.007629947544110634;
          result[3] += 0.7649022412970911;
          result[4] += 0.2150691463996185;
          result[5] += 0.002384358607534573;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0707070707070707;
          result[2] += 0;
          result[3] += 0.16835016835016836;
          result[4] += 0.7609427609427609;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5834597875569044;
          result[1] += 0;
          result[2] += 0.004931714719271623;
          result[3] += 0.41009104704097116;
          result[4] += 0;
          result[5] += 0.0007587253414264037;
          result[6] += 0.0007587253414264037;
        } else {
          result[0] += 0.9877970456005138;
          result[1] += 0;
          result[2] += 0.0038535645472061657;
          result[3] += 0.006422607578676943;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019267822736030828;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.5883983369629775;
          result[1] += 0.005147495545436546;
          result[2] += 0.006335379132844979;
          result[3] += 0.36012670758265686;
          result[4] += 0.03939813898237972;
          result[5] += 0.0005939417937042169;
          result[6] += 0;
        } else {
          result[0] += 0.5806742925948224;
          result[1] += 0;
          result[2] += 0.010836845273931367;
          result[3] += 0.062311860325105356;
          result[4] += 0.34587597832630945;
          result[5] += 0;
          result[6] += 0.00030102347983142685;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
          result[0] += 0;
          result[1] += 0.001610305958132045;
          result[2] += 0;
          result[3] += 0.9967793880837359;
          result[4] += 0.0010735373054213634;
          result[5] += 0.0005367686527106817;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006263048016701462;
          result[3] += 0;
          result[4] += 0.9937369519832986;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0.9871794871794872;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.01282051282051282;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001557632398753894;
          result[2] += 0;
          result[3] += 0.9953271028037384;
          result[4] += 0;
          result[5] += 0.003115264797507788;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.6943396226415094;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.30566037735849055;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9980207995969629;
          result[1] += 0.0005757673899744503;
          result[2] += 0.000503796466227644;
          result[3] += 0.0008276656230882724;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.197092374680629e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.1683884297520661;
          result[1] += 0.0030991735537190084;
          result[2] += 0.008264462809917356;
          result[3] += 0.8199035812672176;
          result[4] += 0;
          result[5] += 0.0003443526170798898;
          result[6] += 0;
        } else {
          result[0] += 0.2717948717948718;
          result[1] += 0.03076923076923077;
          result[2] += 0.08205128205128205;
          result[3] += 0.6153846153846154;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.0009749756256093598;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9990250243743907;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42680000))) ) ) {
          result[0] += 0.9889033942558747;
          result[1] += 0;
          result[2] += 0.004242819843342037;
          result[3] += 0.0009791122715404699;
          result[4] += 0.0019582245430809398;
          result[5] += 0.0013054830287206266;
          result[6] += 0.0026109660574412533;
        } else {
          result[0] += 0.9131652661064426;
          result[1] += 0;
          result[2] += 0.08683473389355742;
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
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42940000))) ) ) {
          result[0] += 0.0026785714285714286;
          result[1] += 0.0004464285714285714;
          result[2] += 0.0026785714285714286;
          result[3] += 0.9910714285714286;
          result[4] += 0;
          result[5] += 0.003125;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9501246882793017;
          result[1] += 0;
          result[2] += 0.04987531172069826;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9989915401423048;
          result[1] += 0;
          result[2] += 0.0009524343100453807;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.602554764972827e-05;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.5406117371579101;
          result[1] += 0.0016098346260793209;
          result[2] += 0.006439338504317283;
          result[3] += 0.4507536953022099;
          result[4] += 0;
          result[5] += 0.00014634860237084735;
          result[6] += 0.00043904580711254205;
        } else {
          result[0] += 0.9754079521948978;
          result[1] += 0;
          result[2] += 0.002298322224775914;
          result[3] += 0.020684900022983226;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016088255573431397;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42f40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.16129032258064516;
          result[2] += 0;
          result[3] += 0.8387096774193549;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x43608000))) ) ) {
          result[0] += 0;
          result[1] += 0.010086455331412104;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9899135446685879;
          result[5] += 0;
          result[6] += 0;
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
          result[0] += 0.14084507042253522;
          result[1] += 0.012519561815336464;
          result[2] += 0.010172143974960876;
          result[3] += 0.8364632237871674;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10173410404624278;
          result[4] += 0.8982658959537573;
          result[5] += 0;
          result[6] += 0;
        }
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
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.9961331901181526;
          result[1] += 0.0001432151808091658;
          result[2] += 0.0009308986752595776;
          result[3] += 0.002649480844969567;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001432151808091658;
        } else {
          result[0] += 0.874296435272045;
          result[1] += 0.00375234521575985;
          result[2] += 0.00075046904315197;
          result[3] += 0.11969981238273922;
          result[4] += 0;
          result[5] += 0.000375234521575985;
          result[6] += 0.001125703564727955;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
          result[0] += 0.27079303675048355;
          result[1] += 0.0024177949709864605;
          result[2] += 0.005319148936170213;
          result[3] += 0.7200193423597679;
          result[4] += 0.0007253384912959381;
          result[5] += 0.0007253384912959381;
          result[6] += 0;
        } else {
          result[0] += 0.0031545741324921135;
          result[1] += 0.022082018927444796;
          result[2] += 0;
          result[3] += 0.21766561514195584;
          result[4] += 0.7570977917981072;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9992067689053411;
          result[1] += 0;
          result[2] += 0.0007932310946589106;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.265625;
          result[3] += 0.734375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41c80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0053705692803437165;
          result[3] += 0.9946294307196563;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.005055611729019211;
          result[3] += 0.2901921132457027;
          result[4] += 0.7037411526794742;
          result[5] += 0.0010111223458038423;
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
          result[0] += 0.954177897574124;
          result[1] += 0;
          result[2] += 0.03504043126684636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.01078167115902965;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
          result[0] += 0.8;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.2;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995054401582592;
          result[1] += 0;
          result[2] += 0.00045651677699155445;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.8043064749296204e-05;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.030246336139694425;
          result[1] += 0.004053632678515748;
          result[2] += 0.019020891799189275;
          result[3] += 0.8584346741502964;
          result[4] += 0.08668537574056752;
          result[5] += 0.0015590894917368262;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004398826979472141;
          result[3] += 0;
          result[4] += 0.9956011730205279;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
          result[0] += 0.9851067350653648;
          result[1] += 0;
          result[2] += 0.0028131722654310774;
          result[3] += 0.011418169783220255;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006619228859837829;
        } else {
          result[0] += 0.3928070994862214;
          result[1] += 0;
          result[2] += 0.004904250350303597;
          result[3] += 0.600887435777674;
          result[4] += 0;
          result[5] += 0.00023353573096683791;
          result[6] += 0.0011676786548341896;
        }
      }
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.0343558282208589;
          result[2] += 0;
          result[3] += 0.9656441717791411;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0025252525252525255;
          result[2] += 0;
          result[3] += 0.9974747474747475;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.8641975308641975;
          result[1] += 0;
          result[2] += 0.13580246913580246;
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
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006435006435006435;
          result[2] += 0.009652509652509652;
          result[3] += 0.9877734877734877;
          result[4] += 0;
          result[5] += 0.0019305019305019305;
          result[6] += 0;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42020000))) ) ) {
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
          result[2] += 0.0045662100456621;
          result[3] += 0.9954337899543378;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46426200))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9955411430887716;
          result[1] += 0.0005159007996462393;
          result[2] += 0.002432103769760843;
          result[3] += 0.001400302170468364;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011055017135276557;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9526938239159002;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04730617608409987;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.01416256157635468;
          result[1] += 0;
          result[2] += 0.004618226600985222;
          result[3] += 0.9806034482758621;
          result[4] += 0;
          result[5] += 0.0006157635467980296;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42180000))) ) ) {
          result[0] += 0.9965230828665251;
          result[1] += 0;
          result[2] += 0.0025111068186208234;
          result[3] += 0.0005794861889124977;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003863241259416651;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x429e0000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9886792452830189;
          result[5] += 0.011320754716981131;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9987441130298274;
          result[4] += 0;
          result[5] += 0.0012558869701726845;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.28205128205128205;
          result[2] += 0.6410256410256411;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.07692307692307693;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
          result[0] += 0.9948096131199023;
          result[1] += 0.0006106337505997296;
          result[2] += 0.0024425350023989183;
          result[3] += 0.0020936014306276443;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.3616696471409256e-05;
        } else {
          result[0] += 0.0037735849056603774;
          result[1] += 0.011320754716981131;
          result[2] += 0;
          result[3] += 0.9849056603773585;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9993192648059904;
          result[4] += 0;
          result[5] += 0.0006807351940095302;
          result[6] += 0;
        } else {
          result[0] += 0.9786184210526315;
          result[1] += 0;
          result[2] += 0.02138157894736842;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.9979505196896502;
          result[1] += 0;
          result[2] += 0.001903088859610599;
          result[3] += 0.00014639145073927685;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9713868613138686;
          result[1] += 0;
          result[2] += 0.0037956204379562043;
          result[3] += 0.02335766423357664;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00145985401459854;
        }
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9859154929577465;
          result[5] += 0.014084507042253521;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007656967840735069;
          result[2] += 0.011485451761102604;
          result[3] += 0.9800918836140888;
          result[4] += 0;
          result[5] += 0.0007656967840735069;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.10191925876902713;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8828590337524818;
          result[4] += 0.015221707478491065;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.281496062992126;
          result[1] += 0.000984251968503937;
          result[2] += 0;
          result[3] += 0.5974409448818898;
          result[4] += 0.11909448818897637;
          result[5] += 0.000984251968503937;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8461538461538461;
          result[1] += 0.07692307692307693;
          result[2] += 0.07692307692307693;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41ec0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.9633507853403142;
          result[1] += 0.03664921465968586;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9971560985885822;
          result[1] += 0.00010532968190436065;
          result[2] += 0.0006846429323783442;
          result[3] += 0.0020539287971350325;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9737302977232924;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.02626970227670753;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9927927927927929;
          result[1] += 0.0014414414414414417;
          result[2] += 0.004684684684684685;
          result[3] += 0.0006006006006006007;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004804804804804805;
        } else {
          result[0] += 0.6182729941291585;
          result[1] += 0;
          result[2] += 0.005870841487279843;
          result[3] += 0.37451076320939336;
          result[4] += 0;
          result[5] += 0.0002446183953033268;
          result[6] += 0.0011007827788649706;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41980000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.47570332480818406;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.5191815856777493;
          result[4] += 0.005115089514066496;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9979342869392368;
          result[1] += 0.0005066843356588846;
          result[2] += 0.000623611490041704;
          result[3] += 0.0007795143625521301;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000155902872510426;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x418c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.6666666666666666;
          result[5] += 0.3333333333333333;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.006289308176100629;
          result[2] += 0;
          result[3] += 0.989517819706499;
          result[4] += 0;
          result[5] += 0.0041928721174004195;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
          result[0] += 0.17722165474974463;
          result[1] += 0.012768130745658836;
          result[2] += 0;
          result[3] += 0.6874361593462717;
          result[4] += 0.12257405515832483;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5793510324483776;
          result[1] += 0;
          result[2] += 0.006784660766961652;
          result[3] += 0.41386430678466074;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.1530891197375615;
          result[1] += 0;
          result[2] += 0.009841443411700382;
          result[3] += 0.02077638053581192;
          result[4] += 0.8162930563149262;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7878787878787878;
          result[1] += 0;
          result[2] += 0.030303030303030304;
          result[3] += 0.18181818181818182;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c90000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
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
          result[3] += 1;
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
          result[0] += 0.5060240963855421;
          result[1] += 0;
          result[2] += 0.4939759036144578;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9591836734693878;
          result[1] += 0;
          result[2] += 0.029684601113172546;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.011131725417439705;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
          result[0] += 0.6190476190476191;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.38095238095238093;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9981040086673889;
          result[1] += 0;
          result[2] += 0.0017154207295052367;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018057060310581438;
        }
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.0032948929159802307;
          result[2] += 0;
          result[3] += 0.2784184514003295;
          result[4] += 0.7182866556836903;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12946428571428573;
          result[4] += 0.8705357142857143;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7097701149425287;
          result[1] += 0.002612330198537095;
          result[2] += 0.0066179031696273075;
          result[3] += 0.2797805642633229;
          result[4] += 8.707767328456984e-05;
          result[5] += 0.00017415534656913968;
          result[6] += 0.0009578544061302681;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.012310939148786495;
          result[3] += 0.9862820963770665;
          result[4] += 0.0010552233556102711;
          result[5] += 0.000351741118536757;
          result[6] += 0;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41980000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0026666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9973333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9397590361445783;
          result[1] += 0;
          result[2] += 0.060240963855421686;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9972067039106145;
          result[1] += 0;
          result[2] += 0.002793296089385475;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.02641933670601462;
          result[1] += 0.012085441259134347;
          result[2] += 0.005902192242833053;
          result[3] += 0.8827993254637437;
          result[4] += 0.07166947723440137;
          result[5] += 0.0011242270938729626;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.011859838274932614;
          result[3] += 0.17628032345013478;
          result[4] += 0.8118598382749326;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.8491295938104448;
          result[1] += 0;
          result[2] += 0.01160541586073501;
          result[3] += 0.13733075435203096;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019342359767891683;
        } else {
          result[0] += 0.9870435806831565;
          result[1] += 0;
          result[2] += 0.0047114252061248516;
          result[3] += 0.00654364611961785;
          result[4] += 0;
          result[5] += 0.00039261876717707096;
          result[6] += 0.00130872922392357;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42ca0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006688963210702341;
          result[2] += 0;
          result[3] += 0.9993311036789297;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0029850746268656717;
          result[3] += 0;
          result[4] += 0.9970149253731343;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9753086419753086;
          result[1] += 0;
          result[2] += 0.024691358024691357;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.26055312954876275;
          result[1] += 0.010189228529839884;
          result[2] += 0;
          result[3] += 0.7292576419213974;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.022457067371202115;
          result[1] += 0.018494055482166448;
          result[2] += 0.013210039630118891;
          result[3] += 0.9458388375165125;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42680000))) ) ) {
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
          result[4] += 0.9987212276214834;
          result[5] += 0.0012787723785166241;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.0006784260515603799;
          result[1] += 0.0006784260515603799;
          result[2] += 0.0013568521031207597;
          result[3] += 0.9959294436906377;
          result[4] += 0;
          result[5] += 0.0013568521031207597;
          result[6] += 0;
        } else {
          result[0] += 0.9380952380952381;
          result[1] += 0;
          result[2] += 0.06190476190476191;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9981735159817352;
          result[1] += 0;
          result[2] += 0.0016438356164383563;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018264840182648402;
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9471969594136012;
          result[1] += 0.001628885570788652;
          result[2] += 0.004750916248133568;
          result[3] += 0.04493009366092032;
          result[4] += 0;
          result[5] += 0.00013574046423238766;
          result[6] += 0.0013574046423238768;
        } else {
          result[0] += 0;
          result[1] += 0.00035549235691432633;
          result[2] += 0.0035549235691432635;
          result[3] += 0.9960895840739424;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
          result[0] += 0.0011627906976744186;
          result[1] += 0;
          result[2] += 0.0050387596899224806;
          result[3] += 0.9891472868217054;
          result[4] += 0.002325581395348837;
          result[5] += 0.002325581395348837;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4895397489539749;
          result[4] += 0.5104602510460251;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0014265335235378032;
          result[1] += 0;
          result[2] += 0.017118402282453638;
          result[3] += 0;
          result[4] += 0.9814550641940085;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.018161180476730987;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.981838819523269;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9913606911447084;
          result[1] += 0.0021598272138228943;
          result[2] += 0.004319654427645789;
          result[3] += 0.0021598272138228943;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9998812210476303;
          result[1] += 0;
          result[2] += 0.0001187789523696401;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0.9594395280235989;
          result[1] += 0;
          result[2] += 0.005899705014749263;
          result[3] += 0.03466076696165193;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9968084011119119;
          result[1] += 0;
          result[2] += 0.00020590960568310515;
          result[3] += 0.002882734479563472;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010295480284155257;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.999135097733956;
          result[1] += 0;
          result[2] += 0.0008649022660439371;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7189199503864134;
          result[1] += 0.0009541074324968989;
          result[2] += 0.005533823108482014;
          result[3] += 0.2729701364373628;
          result[4] += 0;
          result[5] += 9.541074324968989e-05;
          result[6] += 0.0015265718919950382;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
          result[0] += 0.24363636363636362;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7563636363636363;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.13597033374536466;
          result[1] += 0.016069221260815822;
          result[2] += 0.014833127317676144;
          result[3] += 0.8331273176761433;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.09130434782608696;
          result[2] += 0;
          result[3] += 0.8913043478260869;
          result[4] += 0;
          result[5] += 0.017391304347826087;
          result[6] += 0;
        } else {
          result[0] += 0.9960560047327943;
          result[1] += 0;
          result[2] += 0.0033523959771248274;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005915992900808519;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
          result[0] += 0.9619883040935673;
          result[1] += 0;
          result[2] += 0.0017543859649122807;
          result[3] += 0.03625730994152047;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990967086320782;
          result[1] += 5.6455710495116585e-05;
          result[2] += 0.00022582284198046634;
          result[3] += 0.00033873426297069956;
          result[4] += 0.000282278552475583;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.27905095713130224;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7209490428686978;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42100000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9845925925925926;
          result[1] += 0;
          result[2] += 0.01362962962962963;
          result[3] += 0.0005925925925925926;
          result[4] += 0;
          result[5] += 0.0002962962962962963;
          result[6] += 0.0008888888888888889;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.00142602495543672;
          result[3] += 0.996078431372549;
          result[4] += 0.0017825311942959;
          result[5] += 0.00071301247771836;
          result[6] += 0;
        } else {
          result[0] += 0.9791469194312796;
          result[1] += 0.005687203791469194;
          result[2] += 0.015165876777251185;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
          result[0] += 0;
          result[1] += 0.06944444444444445;
          result[2] += 0;
          result[3] += 0.9305555555555556;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.02;
          result[2] += 0;
          result[3] += 0.008;
          result[4] += 0.972;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.711340206185567;
          result[1] += 0;
          result[2] += 0.13917525773195877;
          result[3] += 0.14948453608247422;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c40000))) ) ) {
          result[0] += 0.21927710843373494;
          result[1] += 0;
          result[2] += 0.043373493975903614;
          result[3] += 0.7373493975903614;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9982964224872232;
          result[5] += 0.0017035775127768314;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42860000))) ) ) {
          result[0] += 0.0017825311942959;
          result[1] += 0;
          result[2] += 0.00267379679144385;
          result[3] += 0.9910873440285205;
          result[4] += 0;
          result[5] += 0.004456327985739751;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021897810218978103;
          result[3] += 0;
          result[4] += 0.9781021897810219;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.9496021220159151;
          result[1] += 0;
          result[2] += 0.03183023872679045;
          result[3] += 0;
          result[4] += 0.01856763925729443;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004418262150220913;
          result[3] += 0;
          result[4] += 0.9955817378497791;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
          result[0] += 0.9982821719321832;
          result[1] += 7.468817686160281e-05;
          result[2] += 0.0008962581223392337;
          result[3] += 0.0006721935917544253;
          result[4] += 0;
          result[5] += 0;
          result[6] += 7.468817686160281e-05;
        } else {
          result[0] += 0.988558352402746;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.011441647597254004;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.7338976454563144;
          result[1] += 0.001264837517026659;
          result[2] += 0.002626970227670753;
          result[3] += 0.26201595641175324;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001945903872348706;
        } else {
          result[0] += 0.9277634130575307;
          result[1] += 0;
          result[2] += 0.006948933419521654;
          result[3] += 0.06447963800904978;
          result[4] += 0;
          result[5] += 0.00016160310277957336;
          result[6] += 0.0006464124111182935;
        }
      }
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.36;
          result[1] += 0;
          result[2] += 0.01818181818181818;
          result[3] += 0.6218181818181818;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.6521739130434783;
          result[2] += 0;
          result[3] += 0.34782608695652173;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.008538899430740038;
          result[2] += 0;
          result[3] += 0.99146110056926;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9922779922779923;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.007722007722007722;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0011350737797956867;
          result[3] += 0.21452894438138478;
          result[4] += 0.7832009080590239;
          result[5] += 0.0011350737797956867;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42480000))) ) ) {
          result[0] += 0;
          result[1] += 0.0003518648838845883;
          result[2] += 0.00422237860661506;
          result[3] += 0.9746657283603096;
          result[4] += 0.019000703729767768;
          result[5] += 0.0017593244194229415;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.6666666666666666;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41900000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0.9159490182569755;
          result[1] += 0;
          result[2] += 0.004305890458146745;
          result[3] += 0.07974509128487771;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7183507549361208;
          result[1] += 0;
          result[2] += 0.0017421602787456446;
          result[3] += 0.27932636469221833;
          result[4] += 0;
          result[5] += 0.00029036004645760743;
          result[6] += 0.00029036004645760743;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0.9939844302901628;
          result[1] += 0;
          result[2] += 0.0021231422505307855;
          result[3] += 0.0021231422505307855;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017692852087756545;
        } else {
          result[0] += 0.9604651162790697;
          result[1] += 0;
          result[2] += 0.018604651162790697;
          result[3] += 0.01627906976744186;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.004651162790697674;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9963201471941122;
          result[1] += 0;
          result[2] += 0.0036798528058877645;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999515855725006;
          result[1] += 0;
          result[2] += 0.0004841442749939482;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.5263452914798207;
          result[1] += 0.0036434977578475337;
          result[2] += 0.0014013452914798206;
          result[3] += 0.46860986547085204;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.89779921615918;
          result[1] += 0.004220681338558939;
          result[2] += 0.010853180584865842;
          result[3] += 0.08712692191739524;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9882629107981221;
          result[1] += 0;
          result[2] += 0.011737089201877934;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9454545454545454;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.05454545454545454;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0.9996983105390185;
          result[1] += 0;
          result[2] += 0.00030168946098149636;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9990251035827443;
          result[1] += 0;
          result[2] += 0.0009748964172556666;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9942084942084942;
          result[5] += 0.005791505791505791;
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x41f40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.625;
          result[3] += 0.375;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.024484848484848484;
          result[1] += 0.008242424242424242;
          result[2] += 0.01309090909090909;
          result[3] += 0.9534545454545454;
          result[4] += 0;
          result[5] += 0.0007272727272727272;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bd0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.9945036642238508;
          result[1] += 0.0004996668887408396;
          result[2] += 0.0039973351099267165;
          result[3] += 0.00016655562958027984;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0008327781479013992;
        } else {
          result[0] += 0.720626631853786;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.2793733681462141;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9619534355479841;
          result[1] += 0;
          result[2] += 0.01590005678591709;
          result[3] += 0.018739352640545145;
          result[4] += 0;
          result[5] += 0.0005678591709256105;
          result[6] += 0.0028392958546280523;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.001924557351809084;
          result[3] += 0.9980754426481909;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.25;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.375;
          result[5] += 0.375;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.07021604938271606;
          result[1] += 0.0007716049382716049;
          result[2] += 0.008873456790123456;
          result[3] += 0.9174382716049383;
          result[4] += 0;
          result[5] += 0.002700617283950617;
          result[6] += 0;
        } else {
          result[0] += 0.46194690265486726;
          result[1] += 0;
          result[2] += 0.0017699115044247787;
          result[3] += 0.536283185840708;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41500000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.24;
          result[4] += 0.76;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004357298474945534;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9956427015250545;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.9950535861500412;
          result[1] += 0;
          result[2] += 0.00494641384995878;
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.9995156798643904;
          result[1] += 0;
          result[2] += 0.000484320135609638;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.08895265423242468;
          result[1] += 0.03156384505021521;
          result[2] += 0.03730272596843615;
          result[3] += 0.8421807747489239;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9789395441030722;
          result[1] += 0;
          result[2] += 0.006813676907829532;
          result[3] += 0.012884043607532206;
          result[4] += 0;
          result[5] += 0.00012388503468780968;
          result[6] += 0.0012388503468780969;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0003621876131836291;
          result[2] += 0;
          result[3] += 0.9996378123868164;
          result[4] += 0;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.009987515605493134;
          result[3] += 0;
          result[4] += 0.9850187265917603;
          result[5] += 0.004993757802746567;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0006495615459564793;
          result[2] += 0.003247807729782397;
          result[3] += 0.9961026307242611;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.9973459156590976;
          result[1] += 0;
          result[2] += 0.0026540843409023885;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997045208312814;
          result[1] += 0;
          result[2] += 9.849305623953512e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019698611247907023;
        }
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.08982035928143713;
          result[2] += 0.0748502994011976;
          result[3] += 0.8353293413173652;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9966898954703833;
          result[1] += 0.000348432055749129;
          result[2] += 0.002787456445993032;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001742160278745645;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.0025725836089672913;
          result[1] += 0;
          result[2] += 0.005145167217934583;
          result[3] += 0.9922822491730982;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8314263920671243;
          result[1] += 0;
          result[2] += 0.012967200610221205;
          result[3] += 0.15369946605644547;
          result[4] += 0;
          result[5] += 0.0007627765064836003;
          result[6] += 0.0011441647597254005;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41180000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x421c0000))) ) ) {
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.001594896331738437;
          result[2] += 0;
          result[3] += 0.9977671451355662;
          result[4] += 0;
          result[5] += 0.0006379585326953748;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0.4444444444444444;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.5555555555555556;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.8532110091743119;
          result[1] += 0;
          result[2] += 0.11926605504587157;
          result[3] += 0;
          result[4] += 0.027522935779816515;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.026490066225165563;
          result[3] += 0;
          result[4] += 0.9695364238410596;
          result[5] += 0.003973509933774834;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9986619718309859;
          result[1] += 0.00014084507042253522;
          result[2] += 0.0008450704225352113;
          result[3] += 0.00035211267605633805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9943613099110822;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.005638690088917805;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9879931389365352;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.012006861063464836;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8336018411967779;
          result[1] += 0.007364787111622554;
          result[2] += 0.010356731875719217;
          result[3] += 0.14798619102416571;
          result[4] += 0;
          result[5] += 0.00023014959723820482;
          result[6] += 0.00046029919447640965;
        } else {
          result[0] += 0.12256076686066415;
          result[1] += 0;
          result[2] += 0.0030811365970558027;
          result[3] += 0.87435809654228;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
          result[0] += 0.9980909958638243;
          result[1] += 0;
          result[2] += 0.001590836780146357;
          result[3] += 0.0003181673560292714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9606276747503567;
          result[1] += 0;
          result[2] += 0.0031383737517831673;
          result[3] += 0.03395149786019972;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0022824536376604854;
        }
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.005392156862745098;
          result[1] += 0;
          result[2] += 0.013725490196078431;
          result[3] += 0.8318627450980393;
          result[4] += 0.14901960784313725;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9976340694006309;
          result[1] += 0;
          result[2] += 0.002365930599369085;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9993133963991455;
          result[1] += 0;
          result[2] += 0.0005721696673787;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011443393347574;
        } else {
          result[0] += 0.5785243888826879;
          result[1] += 0.0008929568032146446;
          result[2] += 0.005134501618484207;
          result[3] += 0.411764705882353;
          result[4] += 0.0023440116084384424;
          result[5] += 0.0004464784016073223;
          result[6] += 0.0008929568032146446;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40d00000))) ) ) {
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.26874115983026875;
          result[1] += 0.016973125884016973;
          result[2] += 0;
          result[3] += 0.7142857142857143;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.042270531400966184;
          result[1] += 0.01570048309178744;
          result[2] += 0.014492753623188406;
          result[3] += 0.927536231884058;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41100000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9885931558935361;
          result[5] += 0.011406844106463879;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.9375;
          result[2] += 0;
          result[3] += 0.0625;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0009137983551629608;
          result[1] += 0;
          result[2] += 0.004264392324093817;
          result[3] += 0.9939080109655803;
          result[4] += 0;
          result[5] += 0.0009137983551629608;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bf0000))) ) ) {
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
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.9633251833740831;
          result[1] += 0.007334963325183374;
          result[2] += 0;
          result[3] += 0.029339853300733496;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.995353396014085;
          result[1] += 0.00032671434275964714;
          result[2] += 0.002504809961157295;
          result[3] += 0.0017787780883580788;
          result[4] += 0;
          result[5] += 0;
          result[6] += 3.6301593639960794e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42ca0000))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3333333333333333;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0311284046692607;
          result[2] += 0;
          result[3] += 0.9688715953307393;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.2913143735588009;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.708685626441199;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9858407079646018;
          result[1] += 0;
          result[2] += 0.01415929203539823;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42bb0000))) ) ) {
          result[0] += 0.5169491525423728;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.4830508474576271;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9702304737516005;
          result[1] += 0;
          result[2] += 0.005761843790012804;
          result[3] += 0.02144686299615877;
          result[4] += 0;
          result[5] += 0.0012804097311139564;
          result[6] += 0.0012804097311139564;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.003028009084027252;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9651778955336866;
          result[4] += 0.03179409538228615;
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
          result[3] += 0.9143932267168392;
          result[4] += 0.08231420507996239;
          result[5] += 0.0032925682031984954;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41600000))) ) ) {
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
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0;
          result[1] += 0.00408997955010225;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9959100204498977;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04183535762483131;
          result[3] += 0;
          result[4] += 0.9541160593792173;
          result[5] += 0.004048582995951417;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
          result[0] += 0.9997222222222222;
          result[1] += 0;
          result[2] += 0.0002777777777777778;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.9959588058923218;
          result[1] += 6.518055012384304e-05;
          result[2] += 0.0011080693521053318;
          result[3] += 0.002802763655325251;
          result[4] += 0;
          result[5] += 0;
          result[6] += 6.518055012384304e-05;
        } else {
          result[0] += 0.9597030752916225;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.04029692470837752;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
          result[0] += 0.3771186440677966;
          result[1] += 0.019067796610169493;
          result[2] += 0;
          result[3] += 0.6038135593220338;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9926067254948724;
          result[1] += 0.0013117099928452182;
          result[2] += 0.0051275936083949435;
          result[3] += 0.0004769854519437157;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0004769854519437157;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
          result[0] += 0.36650148662041626;
          result[1] += 0;
          result[2] += 0.002973240832507433;
          result[3] += 0.6305252725470764;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9889941913787832;
          result[1] += 0;
          result[2] += 0.008560073372057475;
          result[3] += 0.0012228676245796392;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0012228676245796392;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b10000))) ) ) {
          result[0] += 0.5163043478260869;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.483695652173913;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1318864774624374;
          result[1] += 0.021702838063439065;
          result[2] += 0;
          result[3] += 0.8464106844741235;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.007627765064836003;
          result[2] += 0.010678871090770405;
          result[3] += 0.851258581235698;
          result[4] += 0.13043478260869565;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.99800796812749;
          result[1] += 0.00199203187250996;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b40000))) ) ) {
          result[0] += 0.047573739295908656;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.024738344433872503;
          result[4] += 0.9276879162702188;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.11267605633802817;
          result[3] += 0.8873239436619719;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.8574545454545456;
          result[1] += 0.004363636363636365;
          result[2] += 0.0007272727272727273;
          result[3] += 0.1352727272727273;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0021818181818181823;
        } else {
          result[0] += 0.9863886113886113;
          result[1] += 8.325008325008325e-05;
          result[2] += 0.000666000666000666;
          result[3] += 0.01257076257076257;
          result[4] += 0.0001665001665001665;
          result[5] += 8.325008325008325e-05;
          result[6] += 4.1625041625041625e-05;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
          result[0] += 0.5896566341670199;
          result[1] += 0;
          result[2] += 0.010173802458668927;
          result[3] += 0.3459092835947435;
          result[4] += 0.0542602797795676;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7877997914494262;
          result[1] += 0;
          result[2] += 0.0015641293013555783;
          result[3] += 0.2090719499478623;
          result[4] += 0;
          result[5] += 0.0005213764337851928;
          result[6] += 0.0010427528675703856;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.26260609086370446;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7373939091362955;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
          result[0] += 0.9795669411405917;
          result[1] += 0;
          result[2] += 0.012503812137846907;
          result[3] += 0.0015248551387618179;
          result[4] += 0.0015248551387618179;
          result[5] += 0.002134797194266545;
          result[6] += 0.002744739249771272;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0030303030303030303;
          result[3] += 0;
          result[4] += 0.996969696969697;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
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
          result[3] += 0.9795100222717149;
          result[4] += 0.0200445434298441;
          result[5] += 0.00044543429844097997;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0;
          result[1] += 0.0016750418760469012;
          result[2] += 0;
          result[3] += 0.8601340033500837;
          result[4] += 0.13819095477386933;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
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
          result[2] += 0.7058823529411765;
          result[3] += 0;
          result[4] += 0.29411764705882354;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9991039426523297;
          result[5] += 0.0008960573476702509;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.5172413793103449;
          result[2] += 0.4482758620689655;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.034482758620689655;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0.9810874704491725;
          result[1] += 0.0070921985815602835;
          result[2] += 0;
          result[3] += 0.01182033096926714;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9975973089860644;
          result[1] += 0.0003696447713747089;
          result[2] += 0.0019221528111484864;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00011089343141241267;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.9269662921348315;
          result[1] += 0.07303370786516854;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.017992424242424244;
          result[1] += 0;
          result[2] += 0.0006313131313131314;
          result[3] += 0.9810606060606061;
          result[4] += 0;
          result[5] += 0.0003156565656565657;
          result[6] += 0;
        } else {
          result[0] += 0.9824324324324324;
          result[1] += 0;
          result[2] += 0.01756756756756757;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.09090909090909091;
          result[1] += 0;
          result[2] += 0.9090909090909091;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9938032532920218;
          result[1] += 0;
          result[2] += 0.0027110766847405115;
          result[3] += 0.002130131680867545;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013555383423702557;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0005385029617662897;
          result[3] += 0.9983844911147012;
          result[4] += 0.0010770059235325794;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9724596391263058;
          result[1] += 0.010446343779677113;
          result[2] += 0.017094017094017096;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0.028985507246376812;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9710144927536232;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.003952569169960474;
          result[1] += 0.08300395256916997;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9130434782608695;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03375527426160337;
          result[3] += 0.9662447257383966;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9922480620155039;
          result[1] += 0;
          result[2] += 0.007751937984496124;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42860000))) ) ) {
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
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9937198067632851;
          result[1] += 0;
          result[2] += 0.004347826086956523;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0019323671497584543;
        } else {
          result[0] += 0.999586178357128;
          result[1] += 0;
          result[2] += 0.0004138216428719222;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
          result[0] += 0.7179430097951914;
          result[1] += 0.0017809439002671415;
          result[2] += 0.0033392698130008903;
          result[3] += 0.27626892252894036;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006678539626001781;
        } else {
          result[0] += 0.9097724922440538;
          result[1] += 0;
          result[2] += 0.008531540847983453;
          result[3] += 0.06902792140641158;
          result[4] += 0.010599793174767322;
          result[5] += 0.0002585315408479835;
          result[6] += 0.0018097207859358842;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.01911764705882353;
          result[3] += 0;
          result[4] += 0.975;
          result[5] += 0.0058823529411764705;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0053475935828877;
          result[3] += 0.9946524064171123;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43260000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994861913937059;
          result[1] += 0;
          result[2] += 0.0005138086062941554;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9620253164556962;
          result[1] += 0;
          result[2] += 0.0379746835443038;
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
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
          result[0] += 0;
          result[1] += 0.054901960784313725;
          result[2] += 0;
          result[3] += 0.09411764705882353;
          result[4] += 0.8509803921568627;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007679180887372013;
          result[2] += 0.006257110352673493;
          result[3] += 0.9837883959044369;
          result[4] += 0.0005688282138794084;
          result[5] += 0.0017064846416382253;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
          result[0] += 0.9761904761904762;
          result[1] += 0.023809523809523808;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9962897871509471;
          result[1] += 0;
          result[2] += 0.0025385666861941028;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011716461628588166;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.07284113381674358;
          result[1] += 0;
          result[2] += 0.008239947264337508;
          result[3] += 0.918918918918919;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.826218487394958;
          result[1] += 0;
          result[2] += 0.010756302521008404;
          result[3] += 0.06218487394957983;
          result[4] += 0.09714285714285714;
          result[5] += 0.0020168067226890756;
          result[6] += 0.0016806722689075631;
        } else {
          result[0] += 0.05493133583021224;
          result[1] += 0;
          result[2] += 0.008114856429463172;
          result[3] += 0.16729088639200998;
          result[4] += 0.7696629213483146;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x420c0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004651162790697674;
          result[4] += 0.9953488372093023;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009463722397476342;
          result[2] += 0;
          result[3] += 0.9974763406940064;
          result[4] += 0.0006309148264984229;
          result[5] += 0.0009463722397476342;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42740000))) ) ) {
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
          result[2] += 0.9375;
          result[3] += 0;
          result[4] += 0.0625;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x42240000))) ) ) {
          result[0] += 0;
          result[1] += 0.08426966292134831;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9157303370786517;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009345794392523365;
          result[2] += 0.008878504672897197;
          result[3] += 0;
          result[4] += 0.9878504672897196;
          result[5] += 0.002336448598130841;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9973074851911686;
          result[1] += 0.0005026027643152038;
          result[2] += 0.0019745108598097296;
          result[3] += 0.00010770059235325796;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00010770059235325796;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.15789473684210525;
          result[3] += 0.8421052631578947;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
          result[0] += 0.9642857142857143;
          result[1] += 0.03571428571428571;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
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
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
          result[0] += 0.8839745531657074;
          result[1] += 0;
          result[2] += 0.004241139048773099;
          result[3] += 0.11026961526810057;
          result[4] += 0;
          result[5] += 0.0003029385034837928;
          result[6] += 0.0012117540139351712;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0.3916378030677882;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6083621969322118;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9899451553930531;
          result[1] += 0;
          result[2] += 0.010054844606946984;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42760000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9894459102902374;
          result[1] += 0;
          result[2] += 0.010554089709762533;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9987000928505106;
          result[1] += 0;
          result[2] += 0.0011142061281337048;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018570102135561745;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
          result[0] += 0.8732334950432399;
          result[1] += 0.002531111579835478;
          result[2] += 0.0033748154397806374;
          result[3] += 0.11959502214722634;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001265555789917739;
        } else {
          result[0] += 0.9573300822919842;
          result[1] += 0;
          result[2] += 0.007314843035659861;
          result[3] += 0.03352636391344103;
          result[4] += 0;
          result[5] += 0.0003047851264858275;
          result[6] += 0.0015239256324291377;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.15812720848056538;
          result[1] += 0.004122497055359246;
          result[2] += 0.016195524146054182;
          result[3] += 0.7988810365135454;
          result[4] += 0.021790341578327443;
          result[5] += 0.0008833922261484099;
          result[6] += 0;
        } else {
          result[0] += 0.0005120327700972862;
          result[1] += 0.007168458781362007;
          result[2] += 0;
          result[3] += 0.15873015873015872;
          result[4] += 0.833589349718382;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42810000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006884681583476765;
          result[2] += 0;
          result[3] += 0.9989672977624785;
          result[4] += 0.00034423407917383823;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.7777777777777778;
          result[5] += 0.2222222222222222;
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
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41d40000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.007978723404255319;
          result[1] += 0.0031914893617021275;
          result[2] += 0.010638297872340425;
          result[3] += 0.9606382978723405;
          result[4] += 0.017553191489361703;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9869706840390879;
          result[1] += 0;
          result[2] += 0.013029315960912053;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.061855670103092786;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9381443298969072;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.007142857142857143;
          result[1] += 0.05714285714285714;
          result[2] += 0;
          result[3] += 0.9357142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.07088607594936709;
          result[4] += 0.9291139240506329;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0018975332068311196;
          result[4] += 0.9981024667931688;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428d0000))) ) ) {
          result[0] += 0.5872594558725945;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.41274054412740546;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8194444444444444;
          result[1] += 0;
          result[2] += 0.016025641025641024;
          result[3] += 0.11538461538461539;
          result[4] += 0.049145299145299144;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9994622416839517;
          result[1] += 0;
          result[2] += 0.0005377583160482446;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.57083287611105;
          result[1] += 0.001755733567431142;
          result[2] += 0.00603533413804455;
          result[3] += 0.41841325578843397;
          result[4] += 0.0012070668276089101;
          result[5] += 0.0005486667398222319;
          result[6] += 0.0012070668276089101;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.07407407407407407;
          result[3] += 0;
          result[4] += 0.9259259259259259;
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
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ca0000))) ) ) {
          result[0] += 0;
          result[1] += 0.006396588486140725;
          result[2] += 0.007462686567164179;
          result[3] += 0.9834754797441365;
          result[4] += 0.0026652452025586353;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.03308823529411765;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9669117647058824;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5;
          result[1] += 0.5;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0.3295194508009153;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.12128146453089245;
          result[4] += 0.5491990846681922;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0037509377344336083;
          result[3] += 0;
          result[4] += 0.9962490622655664;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
          result[0] += 0.00510204081632653;
          result[1] += 0;
          result[2] += 0.04591836734693878;
          result[3] += 0.9489795918367347;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8380952380952381;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1619047619047619;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9982785177131467;
          result[1] += 0;
          result[2] += 0.0015402736250792787;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0001812086617740328;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8034004299394176;
          result[1] += 0.0027359781121751026;
          result[2] += 0.007230799296462771;
          result[3] += 0.17822943130740668;
          result[4] += 0.005276529216337698;
          result[5] += 0.000586281024037522;
          result[6] += 0.0025405511041625955;
        } else {
          result[0] += 0;
          result[1] += 0.0008067769261799112;
          result[2] += 0.009681323114158934;
          result[3] += 0.8148446954417103;
          result[4] += 0.17466720451795079;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8470477386934672;
          result[1] += 0;
          result[2] += 0.003140703517587939;
          result[3] += 0.14353015075376882;
          result[4] += 0.005339195979899496;
          result[5] += 0;
          result[6] += 0.0009422110552763817;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.8046875;
          result[4] += 0.1935763888888889;
          result[5] += 0.001736111111111111;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.9867549668874173;
          result[1] += 0;
          result[2] += 0.013245033112582781;
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
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.5660220420045747;
          result[1] += 0.0022873778332293615;
          result[2] += 0.002495321272613849;
          result[3] += 0.33104595550010396;
          result[4] += 0.09814930338947807;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9991474850809889;
          result[4] += 0;
          result[5] += 0.0008525149190110827;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42540000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.14349775784753363;
          result[3] += 0;
          result[4] += 0.8385650224215246;
          result[5] += 0.017937219730941704;
          result[6] += 0;
        } else {
          result[0] += 0.9541062801932367;
          result[1] += 0;
          result[2] += 0.024154589371980676;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.021739130434782608;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9141213995747148;
          result[1] += 0.0011115406920549004;
          result[2] += 0.003044654939106901;
          result[3] += 0.07075198144210323;
          result[4] += 0.010632128358786004;
          result[5] += 0.0002416392808815001;
          result[6] += 9.665571235260003e-05;
        } else {
          result[0] += 0.6922536448269805;
          result[1] += 0;
          result[2] += 0.0008782715615668365;
          result[3] += 0.3058141577375725;
          result[4] += 0.0003513086246267346;
          result[5] += 0;
          result[6] += 0.0007026172492534692;
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
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0.24709302325581395;
          result[1] += 0.029069767441860465;
          result[2] += 0;
          result[3] += 0.7238372093023255;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.03526448362720403;
          result[1] += 0;
          result[2] += 0.027707808564231738;
          result[3] += 0.9370277078085643;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.234375;
          result[4] += 0.765625;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0020597322348094747;
          result[2] += 0;
          result[3] += 0.02368692070030896;
          result[4] += 0.9742533470648815;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x420a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9913344887348353;
          result[1] += 0;
          result[2] += 0.008665511265164644;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0.9999494719822142;
          result[1] += 0;
          result[2] += 5.052801778586226e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992914501653283;
          result[1] += 0;
          result[2] += 0.0007085498346717053;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41780000))) ) ) {
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41580000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9924012158054711;
          result[5] += 0.007598784194528876;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.013888888888888888;
          result[2] += 0;
          result[3] += 0.9861111111111112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.6982304704359086;
          result[1] += 0.002157962883038412;
          result[2] += 0.007941303409581357;
          result[3] += 0.28597324126025037;
          result[4] += 0.00492015537332758;
          result[5] += 0.00034527406128614593;
          result[6] += 0.00043159257660768246;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.010416666666666666;
          result[3] += 0.9881944444444445;
          result[4] += 0.001388888888888889;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
          result[0] += 0;
          result[1] += 0.046511627906976744;
          result[2] += 0;
          result[3] += 0.7034883720930233;
          result[4] += 0.25;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.011204481792717087;
          result[2] += 0;
          result[3] += 0.38095238095238093;
          result[4] += 0.6078431372549019;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9988085782366958;
          result[1] += 0;
          result[2] += 0.0011914217633042098;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9969199178644764;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.003080082135523614;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
          result[0] += 0.02159282108805384;
          result[1] += 0.006730229949523275;
          result[2] += 0.00532809871003926;
          result[3] += 0.9646662927650028;
          result[4] += 0.0005608524957936063;
          result[5] += 0.0011217049915872126;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.04477611940298507;
          result[2] += 0;
          result[3] += 0.0037313432835820895;
          result[4] += 0.9514925373134329;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0014204545454545455;
          result[3] += 0;
          result[4] += 0.9985795454545454;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.021634615384615384;
          result[3] += 0.21586538461538463;
          result[4] += 0.7625;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.9967741935483871;
          result[1] += 0;
          result[2] += 0.0022580645161290325;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.000967741935483871;
        } else {
          result[0] += 0.007358636715724245;
          result[1] += 0;
          result[2] += 0.000774593338497289;
          result[3] += 0.9918667699457785;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9877329558858221;
          result[1] += 0;
          result[2] += 0.0033026657230478887;
          result[3] += 0.00778485491861288;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011795234725171032;
        } else {
          result[0] += 0.8631284916201117;
          result[1] += 0.002793296089385475;
          result[2] += 0.025139664804469275;
          result[3] += 0.10893854748603352;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9493670886075949;
          result[1] += 0;
          result[2] += 0.05063291139240506;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9968274111675127;
          result[1] += 0;
          result[2] += 0.0031725888324873096;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.999751665907868;
          result[1] += 0;
          result[2] += 0.0002483340921319482;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x431e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43a38000))) ) ) {
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
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x429d0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0.007000538502961767;
          result[2] += 0.0016155088852988692;
          result[3] += 0.9908454496499731;
          result[4] += 0.0005385029617662897;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9962529274004684;
          result[1] += 0;
          result[2] += 0.0028103044496487124;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009367681498829041;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.051194539249146756;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7918088737201365;
          result[4] += 0.15699658703071673;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.3611774065234686;
          result[1] += 0.007955449482895784;
          result[2] += 0.015115354017501989;
          result[3] += 0.568019093078759;
          result[4] += 0.0477326968973747;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42280000))) ) ) {
          result[0] += 0;
          result[1] += 0.0046645138141370645;
          result[2] += 0.007176175098672408;
          result[3] += 0.3796196627197704;
          result[4] += 0.6081808396124866;
          result[5] += 0.0003588087549336204;
          result[6] += 0;
        } else {
          result[0] += 0.9902101929167867;
          result[1] += 0;
          result[2] += 0.007198387561186294;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002591419522027066;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.03215926493108729;
          result[3] += 0;
          result[4] += 0.9663093415007658;
          result[5] += 0.0015313935681470138;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.002918642831083546;
          result[3] += 0.9970813571689164;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x4398c000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9923857868020305;
          result[1] += 0;
          result[2] += 0.007614213197969543;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9994224549514862;
          result[1] += 0;
          result[2] += 0.0005775450485137841;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b40000))) ) ) {
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
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.66425855513308;
          result[1] += 0.0020912547528517114;
          result[2] += 0.009505703422053233;
          result[3] += 0.29087452471482894;
          result[4] += 0.03098859315589354;
          result[5] += 0.001711026615969582;
          result[6] += 0.000570342205323194;
        } else {
          result[0] += 0.3322709163346614;
          result[1] += 0;
          result[2] += 0.010889774236387782;
          result[3] += 0.5420982735723772;
          result[4] += 0.11261620185922974;
          result[5] += 0.0002656042496679947;
          result[6] += 0.0018592297476759628;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.6831353919239905;
          result[1] += 0;
          result[2] += 0.00047505938242280285;
          result[3] += 0.26247030878859856;
          result[4] += 0.05296912114014252;
          result[5] += 0;
          result[6] += 0.0009501187648456057;
        } else {
          result[0] += 0.12331838565022422;
          result[1] += 0;
          result[2] += 0.005605381165919283;
          result[3] += 0.7500000000000001;
          result[4] += 0.11995515695067266;
          result[5] += 0.0011210762331838567;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.0033333333333333335;
          result[1] += 0.03666666666666667;
          result[2] += 0;
          result[3] += 0.24;
          result[4] += 0.72;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.004597701149425287;
          result[4] += 0.9954022988505747;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
          result[0] += 0.09008189262966333;
          result[1] += 0.004549590536851683;
          result[2] += 0.003639672429481347;
          result[3] += 0.5177434030937216;
          result[4] += 0.38398544131028206;
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
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
          result[0] += 0.009569377990430622;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9904306220095693;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.1875;
          result[2] += 0;
          result[3] += 0.3125;
          result[4] += 0.5;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
          result[0] += 0.9765395894428153;
          result[1] += 0;
          result[2] += 0.02346041055718475;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.06188925081433225;
          result[1] += 0.008686210640608035;
          result[2] += 0.0010857763300760044;
          result[3] += 0.9277958740499457;
          result[4] += 0.0005428881650380022;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 0.06923076923076923;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.3;
          result[4] += 0.6307692307692307;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1989247311827957;
          result[1] += 0;
          result[2] += 0.010752688172043012;
          result[3] += 0.22401433691756273;
          result[4] += 0.5663082437275986;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
          result[0] += 0.6666666666666666;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.3333333333333333;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9995437262357414;
          result[1] += 0;
          result[2] += 0.00045627376425855514;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0.001488095238095238;
          result[2] += 0.002976190476190476;
          result[3] += 0.25892857142857145;
          result[4] += 0.7336309523809523;
          result[5] += 0.002976190476190476;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.10820895522388059;
          result[4] += 0.8917910447761194;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.7942799234320459;
          result[1] += 0.0014637991217205269;
          result[2] += 0.006643396013962391;
          result[3] += 0.1819614908231055;
          result[4] += 0.014074991555005066;
          result[5] += 0.00022519986488008108;
          result[6] += 0.0013511991892804864;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006997900629811057;
          result[3] += 0.9888033589923023;
          result[4] += 0.003848845346396081;
          result[5] += 0.0003498950314905528;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.002890173410404624;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9645953757225434;
          result[4] += 0.03251445086705202;
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
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9982876712328768;
          result[5] += 0.0017123287671232876;
          result[6] += 0;
        } else {
          result[0] += 0.6862745098039216;
          result[1] += 0.09803921568627451;
          result[2] += 0.19607843137254902;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0.0196078431372549;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e40000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0009657170449058426;
          result[2] += 0;
          result[3] += 0.9164654756156446;
          result[4] += 0.08208594881699662;
          result[5] += 0.0004828585224529213;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 0.9714285714285714;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.02857142857142857;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002348796241926013;
          result[2] += 0.008220786846741044;
          result[3] += 0;
          result[4] += 0.9876688197298884;
          result[5] += 0.0017615971814445098;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x40200000))) ) ) {
          result[0] += 0.9978936282253817;
          result[1] += 0;
          result[2] += 0.00210637177461822;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9922480620155039;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.007751937984496124;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9924812030075187;
          result[1] += 0;
          result[2] += 0.007518796992481203;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9999134611224092;
          result[1] += 0;
          result[2] += 8.653887759075765e-05;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.1237410071942446;
          result[1] += 0.033093525179856115;
          result[2] += 0.030215827338129497;
          result[3] += 0.8129496402877698;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9788662357036301;
          result[1] += 0.0002486325211337643;
          result[2] += 0.00634012928891099;
          result[3] += 0.012804574838388861;
          result[4] += 0;
          result[5] += 0.00012431626056688214;
          result[6] += 0.0016161113873694678;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
          result[0] += 0;
          result[1] += 0.00142602495543672;
          result[2] += 0;
          result[3] += 0.9985739750445632;
          result[4] += 0;
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
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
          result[0] += 0.959436994347778;
          result[1] += 0.001773246148731021;
          result[2] += 0.0008866230743655105;
          result[3] += 0.0376814806605342;
          result[4] += 0.00022165576859137763;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.7449139280125195;
          result[1] += 0;
          result[2] += 0.005477308294209703;
          result[3] += 0.24491392801251957;
          result[4] += 0.001564945226917058;
          result[5] += 0.000782472613458529;
          result[6] += 0.002347417840375587;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43780000))) ) ) {
          result[0] += 0.9990181037127953;
          result[1] += 6.13685179502915e-05;
          result[2] += 0.000368211107701749;
          result[3] += 0.0005523166615526235;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.007657500870170553;
          result[2] += 0.013226592412112773;
          result[3] += 0.9791159067177166;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
          result[0] += 0.9964170548190613;
          result[1] += 0;
          result[2] += 0.0035829451809387316;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8472222222222222;
          result[1] += 0;
          result[2] += 0.1388888888888889;
          result[3] += 0.013888888888888888;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
          result[0] += 0.005801305293691081;
          result[1] += 0;
          result[2] += 0.009789702683103698;
          result[3] += 0.9844089920232052;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8674399337199669;
          result[1] += 0;
          result[2] += 0.006213753106876553;
          result[3] += 0.11930405965202982;
          result[4] += 0.004556752278376139;
          result[5] += 0.0008285004142502071;
          result[6] += 0.0016570008285004142;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
          result[2] += 0.0136986301369863;
          result[3] += 0;
          result[4] += 0.9863013698630136;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44628000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40900000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
          result[0] += 0.9988208705905474;
          result[1] += 0;
          result[2] += 0.000982607841210573;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00019652156824211456;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
          result[0] += 0.9074623177662466;
          result[1] += 0.0019767729182110206;
          result[2] += 0.00605386706202125;
          result[3] += 0.08290091425747467;
          result[4] += 0;
          result[5] += 0.0004941932295527551;
          result[6] += 0.001111934766493699;
        } else {
          result[0] += 0.16741711011051985;
          result[1] += 0;
          result[2] += 0.013507981989357348;
          result[3] += 0.7056897257470324;
          result[4] += 0.1125665165779779;
          result[5] += 0.0008186655751125665;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
          result[0] += 0.13059529303184125;
          result[1] += 0.004153207198892478;
          result[2] += 0.0046146746654360865;
          result[3] += 0.53068758652515;
          result[4] += 0.3299492385786802;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012605042016806723;
          result[2] += 0;
          result[3] += 0.0861344537815126;
          result[4] += 0.9012605042016807;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40200000))) ) ) {
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
          result[4] += 0.8333333333333334;
          result[5] += 0.16666666666666666;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cf0000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006793478260869565;
          result[2] += 0;
          result[3] += 0.9993206521739131;
          result[4] += 0;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x418c0000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.00030959752321981426;
          result[2] += 0.0037151702786377707;
          result[3] += 0.9721362229102167;
          result[4] += 0.02198142414860681;
          result[5] += 0.0018575851393188853;
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
          result[0] += 0.9906542056074766;
          result[1] += 0;
          result[2] += 0.009345794392523364;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429b0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.7558139534883721;
          result[4] += 0.2441860465116279;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0205761316872428;
          result[2] += 0;
          result[3] += 0.00823045267489712;
          result[4] += 0.9711934156378601;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41280000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.009259259259259259;
          result[2] += 0;
          result[3] += 0.9907407407407407;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
          result[0] += 0;
          result[1] += 0.049689440993788817;
          result[2] += 0;
          result[3] += 0.9503105590062112;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 0.9994442479664528;
          result[1] += 0;
          result[2] += 0.0005052291214065579;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 5.052291214065579e-05;
        } else {
          result[0] += 0.6645569620253164;
          result[1] += 0.0031645569620253164;
          result[2] += 0;
          result[3] += 0.3322784810126582;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
          result[0] += 0.9115812542144303;
          result[1] += 0.0010114632501685772;
          result[2] += 0.006237356709372893;
          result[3] += 0.08066419420094403;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005057316250842886;
        } else {
          result[0] += 0.5178952358378762;
          result[1] += 0;
          result[2] += 0.002370229912301493;
          result[3] += 0.4797345342498222;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40200000))) ) ) {
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
          result[4] += 0.9090909090909091;
          result[5] += 0.09090909090909091;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42bc0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.006853582554517134;
          result[3] += 0.9903426791277259;
          result[4] += 0;
          result[5] += 0.002803738317757009;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9931584948688712;
          result[1] += 0;
          result[2] += 0.0068415051311288486;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9922779922779923;
          result[1] += 0;
          result[2] += 0.007722007722007722;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9997420353411582;
          result[1] += 0;
          result[2] += 0.00025796465884173866;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
          result[0] += 0.8954593453009504;
          result[1] += 0.0024639211545230554;
          result[2] += 0.011615628299894404;
          result[3] += 0.08940513903555086;
          result[4] += 0;
          result[5] += 0.00017599436818021823;
          result[6] += 0.0008799718409010912;
        } else {
          result[0] += 0.9451058201058201;
          result[1] += 0;
          result[2] += 0.000992063492063492;
          result[3] += 0.05357142857142857;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00033068783068783067;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41100000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006493506493506494;
          result[2] += 0;
          result[3] += 0.9993506493506493;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.008723235527359239;
          result[3] += 0.9912767644726408;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x43ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.04057971014492753;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9594202898550724;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
          result[0] += 0.5328519855595668;
          result[1] += 0;
          result[2] += 0.012996389891696752;
          result[3] += 0.4541516245487365;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.1903409090909091;
          result[1] += 0.007575757575757576;
          result[2] += 0.002840909090909091;
          result[3] += 0.7992424242424242;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c10000))) ) ) {
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
          result[3] += 1;
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
          result[0] += 0.0273972602739726;
          result[1] += 0.136986301369863;
          result[2] += 0;
          result[3] += 0.8356164383561644;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.44372294372294374;
          result[1] += 0;
          result[2] += 0.032467532467532464;
          result[3] += 0.5238095238095238;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9947929459154099;
          result[1] += 9.824630348283146e-05;
          result[2] += 0.0005894778208969888;
          result[3] += 0.004470206808468831;
          result[4] += 0;
          result[5] += 0;
          result[6] += 4.912315174141573e-05;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0.4426989441153747;
          result[1] += 0.0007725985063095545;
          result[2] += 0.00424929178470255;
          result[3] += 0.5361833633788308;
          result[4] += 0.01532320370847283;
          result[5] += 0.0002575328354365182;
          result[6] += 0.0005150656708730364;
        } else {
          result[0] += 0.9815683104284559;
          result[1] += 0;
          result[2] += 0.0006467259498787389;
          result[3] += 0.01778496362166532;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.5172413793103449;
          result[3] += 0;
          result[4] += 0.41379310344827586;
          result[5] += 0.06896551724137931;
          result[6] += 0;
        } else {
          result[0] += 0.9914831130690163;
          result[1] += 0;
          result[2] += 0.004992657856093981;
          result[3] += 0.0017621145374449342;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0017621145374449342;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
          result[0] += 0.0985576923076923;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9014423076923077;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977485484062093;
          result[1] += 0;
          result[2] += 0.0002369949046095509;
          result[3] += 0.0020144566891811826;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
          result[0] += 0.7493857493857495;
          result[1] += 0.0024570024570024574;
          result[2] += 0.0027641277641277644;
          result[3] += 0.24262899262899265;
          result[4] += 0.0006142506142506143;
          result[5] += 0.0006142506142506143;
          result[6] += 0.0015356265356265358;
        } else {
          result[0] += 0.9875361805186367;
          result[1] += 0.000118140469017662;
          result[2] += 0.000708842814105972;
          result[3] += 0.011282414791186721;
          result[4] += 0.000354421407052986;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.32142857142857145;
          result[4] += 0.6785714285714286;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.26244852115312617;
          result[1] += 0.008611007113440658;
          result[2] += 0.005990265818045676;
          result[3] += 0.6334706102583302;
          result[4] += 0.08947959565705728;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
          result[0] += 0.06997084548104957;
          result[1] += 0;
          result[2] += 0.014577259475218658;
          result[3] += 0.019825072886297375;
          result[4] += 0.8956268221574344;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6486486486486487;
          result[1] += 0;
          result[2] += 0.05405405405405406;
          result[3] += 0.2972972972972973;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.912621359223301;
          result[1] += 0;
          result[2] += 0.025889967637540454;
          result[3] += 0.061488673139158574;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cd0000))) ) ) {
          result[0] += 0.0035818951481602084;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9964181048518398;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.6301369863013698;
          result[1] += 0;
          result[2] += 0.1506849315068493;
          result[3] += 0;
          result[4] += 0.136986301369863;
          result[5] += 0.0821917808219178;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x433e8000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 1;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9887525562372188;
          result[1] += 0;
          result[2] += 0.008691206543967281;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002556237218813906;
        }
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
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
          result[1] += 0.00962962962962963;
          result[2] += 0.011851851851851851;
          result[3] += 0.9785185185185186;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.7619047619047619;
          result[1] += 0;
          result[2] += 0.09523809523809523;
          result[3] += 0.14285714285714285;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9902048085485308;
          result[1] += 0;
          result[2] += 0.009795191451469279;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41e80000))) ) ) {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0.7856570512820511;
          result[1] += 0;
          result[2] += 0.005208333333333332;
          result[3] += 0.20713141025641021;
          result[4] += 0;
          result[5] += 0.0004006410256410255;
          result[6] += 0.001602564102564102;
        } else {
          result[0] += 0.8852005532503459;
          result[1] += 0.012448132780082988;
          result[2] += 0;
          result[3] += 0.10096818810511758;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013831258644536656;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
          result[0] += 0.9990314566050449;
          result[1] += 0;
          result[2] += 0.0007158799006190255;
          result[3] += 0;
          result[4] += 0.00016844232955741777;
          result[5] += 0;
          result[6] += 8.422116477870889e-05;
        } else {
          result[0] += 0;
          result[1] += 0.010380622837370242;
          result[2] += 0;
          result[3] += 0.9757785467128027;
          result[4] += 0.010380622837370242;
          result[5] += 0.0034602076124567475;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.04285714285714286;
          result[3] += 0;
          result[4] += 0.9571428571428572;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.0014875418371141688;
          result[1] += 0;
          result[2] += 0.0026031982149497955;
          result[3] += 0.995909259947936;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42420000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x42040000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 1;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9712793733681462;
          result[4] += 0.02610966057441253;
          result[5] += 0.0026109660574412533;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42d30000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.989051094890511;
          result[1] += 0;
          result[2] += 0.008029197080291973;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0029197080291970805;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41600000))) ) ) {
          result[0] += 0.2;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.8;
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
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e80000))) ) ) {
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
          result[2] += 0.008813559322033898;
          result[3] += 0.9905084745762712;
          result[4] += 0;
          result[5] += 0.0006779661016949153;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
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
          result[3] += 1;
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
          result[1] += 1;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9938791124713083;
          result[1] += 0;
          result[2] += 0.0045906656465187455;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.001530221882172915;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
          result[0] += 0.9998435381245436;
          result[1] += 0;
          result[2] += 0.00015646187545634714;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9992863939105614;
          result[1] += 0;
          result[2] += 0.0007136060894386299;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
          result[0] += 0;
          result[1] += 0.05161290322580645;
          result[2] += 0.08064516129032258;
          result[3] += 0.867741935483871;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9964358452138493;
          result[1] += 0;
          result[2] += 0.0032247114731839784;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00033944331296673454;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.8439262880782249;
          result[1] += 0;
          result[2] += 0.008273787138021812;
          result[3] += 0.14441519368183528;
          result[4] += 0;
          result[5] += 0.000376081233546446;
          result[6] += 0.003008649868371568;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004321209938782859;
          result[3] += 0.9956787900612172;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42d40000))) ) ) {
          result[0] += 0;
          result[1] += 0.006937033084311633;
          result[2] += 0.008537886872998933;
          result[3] += 0.9829242262540021;
          result[4] += 0.0016008537886872999;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.048327137546468404;
          result[2] += 0;
          result[3] += 0.0037174721189591076;
          result[4] += 0.9479553903345725;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
          result[0] += 0.9473684210526315;
          result[1] += 0.05263157894736842;
          result[2] += 0;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41800000))) ) ) {
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
          result[3] += 1;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b90000))) ) ) {
          result[0] += 0.3008130081300813;
          result[1] += 0;
          result[2] += 0.018583042973286876;
          result[3] += 0.08362369337979095;
          result[4] += 0.5969802555168409;
          result[5] += 0;
          result[6] += 0;
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
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
          result[0] += 0.31677018633540377;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.6754658385093169;
          result[4] += 0.007763975155279504;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9977667948013912;
          result[1] += 0.0005857587406187077;
          result[2] += 0.0007688083470620538;
          result[3] += 0.0005125388980413692;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0003660992128866923;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.9971671388101984;
          result[4] += 0.0018885741265344668;
          result[5] += 0.0009442870632672334;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.25806451612903225;
          result[3] += 0;
          result[4] += 0.7419354838709677;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.17892364046210202;
          result[1] += 0;
          result[2] += 0.00676246830092984;
          result[3] += 0.8137503522118907;
          result[4] += 0;
          result[5] += 0.0005635390250774867;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9873817034700315;
          result[1] += 0;
          result[2] += 0.0067598017124831005;
          result[3] += 0.003605227579990987;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.002253267237494367;
        }
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42440000))) ) ) {
          result[0] += 0.6176470588235294;
          result[1] += 0;
          result[2] += 0.38235294117647056;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.004682622268470343;
          result[2] += 0.0036420395421436005;
          result[3] += 0.9750260145681582;
          result[4] += 0.01664932362122789;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
          result[0] += 0.9963855421686747;
          result[1] += 0;
          result[2] += 0.0036144578313253013;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9589442815249267;
          result[1] += 0;
          result[2] += 0.04105571847507331;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 1;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.006993006993006993;
          result[1] += 0.045454545454545456;
          result[2] += 0;
          result[3] += 0.9475524475524476;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.1407942238267148;
          result[4] += 0.8592057761732852;
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
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.0013513513513513514;
          result[2] += 0.01891891891891892;
          result[3] += 0.9459459459459459;
          result[4] += 0.032432432432432434;
          result[5] += 0.0013513513513513514;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
          result[0] += 0.993836166022321;
          result[1] += 0.0005106134656065359;
          result[2] += 0.0013130060544168064;
          result[3] += 0.004157852505653221;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.00018236195200233422;
        } else {
          result[0] += 0.6578332944197992;
          result[1] += 0;
          result[2] += 0.0037356992762082653;
          result[3] += 0.337847303292085;
          result[4] += 0;
          result[5] += 0.00011674060238150829;
          result[6] += 0.00046696240952603317;
        }
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43080000))) ) ) {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
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
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.004662004662004662;
          result[3] += 0;
          result[4] += 0.9953379953379954;
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
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9932508436445444;
          result[1] += 0;
          result[2] += 0.00562429696287964;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0011248593925759281;
        } else {
          result[0] += 0.9995100440960314;
          result[1] += 0;
          result[2] += 0.0004899559039686428;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
          result[0] += 0.013262599469496022;
          result[1] += 0.005305039787798408;
          result[2] += 0;
          result[3] += 0.9350132625994695;
          result[4] += 0.046419098143236075;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.036613272311212815;
          result[3] += 0.2768878718535469;
          result[4] += 0.6864988558352403;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
          result[0] += 0.5605206073752712;
          result[1] += 0;
          result[2] += 0.004338394793926248;
          result[3] += 0.4338394793926248;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0013015184381778744;
        } else {
          result[0] += 0.950290851401375;
          result[1] += 0;
          result[2] += 0.00951877313590693;
          result[3] += 0.03807509254362772;
          result[4] += 0;
          result[5] += 0.0005288207297726072;
          result[6] += 0.0015864621893178215;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
          result[0] += 0.026022304832713755;
          result[1] += 0.008261049153242462;
          result[2] += 0.014043783560512184;
          result[3] += 0.9500206526228832;
          result[4] += 0;
          result[5] += 0.0016522098306484924;
          result[6] += 0;
        } else {
          result[0] += 0.7480447784082196;
          result[1] += 0.00015335071308081582;
          result[2] += 0.003527066400858764;
          result[3] += 0.24766140162551756;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0006134028523232633;
        }
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x40a00000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a90000))) ) ) {
          result[0] += 0;
          result[1] += 0.0006527415143603133;
          result[2] += 0;
          result[3] += 0.9983681462140992;
          result[4] += 0.0006527415143603133;
          result[5] += 0.00032637075718015666;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.02650602409638554;
          result[3] += 0;
          result[4] += 0.9698795180722891;
          result[5] += 0.0036144578313253013;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.24644549763033174;
          result[4] += 0.7535545023696683;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.012265512265512266;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0.9877344877344877;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
          result[0] += 0.9784574306693368;
          result[1] += 0.0009102494083378846;
          result[2] += 0.001213665877783846;
          result[3] += 0.019418654044541538;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.08344733242134063;
          result[1] += 0.008207934336525308;
          result[2] += 0.028727770177838577;
          result[3] += 0.8796169630642955;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.5297594781899715;
          result[1] += 0;
          result[2] += 0.003465144720750102;
          result[3] += 0.4657562168772931;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0010191602119853241;
        }
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42420000))) ) ) {
          result[0] += 0.9965724078834619;
          result[1] += 0;
          result[2] += 0.003427592116538132;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.8825665859564165;
          result[1] += 0;
          result[2] += 0.0012106537530266344;
          result[3] += 0.1162227602905569;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
          result[0] += 0.9916107382550335;
          result[1] += 0;
          result[2] += 0.006711409395973154;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0016778523489932886;
        } else {
          result[0] += 0.9985838559579203;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0.0014161440420797087;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
          result[0] += 1;
          result[1] += 0;
          result[2] += 0;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0.9805194805194806;
          result[1] += 0;
          result[2] += 0.01948051948051948;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
          result[0] += 0.9964448958862366;
          result[1] += 0;
          result[2] += 0.0030472320975114273;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0005078720162519045;
        } else {
          result[0] += 0.9997476022211005;
          result[1] += 0;
          result[2] += 0.0002523977788995457;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        }
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
          result[0] += 0.026130358191426895;
          result[1] += 0.008220786846741044;
          result[2] += 0.013211978860833822;
          result[3] += 0.9348209042865532;
          result[4] += 0.017028772753963594;
          result[5] += 0.0005871990604815032;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0.002957121734844751;
          result[2] += 0;
          result[3] += 0.14243469689502217;
          result[4] += 0.8546081813701331;
          result[5] += 0;
          result[6] += 0;
        }
      } else {
        if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
          result[0] += 0.974169002803364;
          result[1] += 0;
          result[2] += 0.00881057268722467;
          result[3] += 0.015818982779335203;
          result[4] += 0;
          result[5] += 0.00020024028834601522;
          result[6] += 0.001001201441730076;
        } else {
          result[0] += 0.9961880559085134;
          result[1] += 0;
          result[2] += 0.00031766200762388825;
          result[3] += 0.002541296060991106;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0.0009529860228716647;
        }
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42cc0000))) ) ) {
          result[0] += 0;
          result[1] += 0.000326477309826967;
          result[2] += 0;
          result[3] += 0.9986940907606922;
          result[4] += 0.000652954619653934;
          result[5] += 0.000326477309826967;
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
        if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
          result[0] += 0;
          result[1] += 0;
          result[2] += 1;
          result[3] += 0;
          result[4] += 0;
          result[5] += 0;
          result[6] += 0;
        } else {
          result[0] += 0;
          result[1] += 0;
          result[2] += 0.0028694404591104736;
          result[3] += 0;
          result[4] += 0.9971305595408895;
          result[5] += 0;
          result[6] += 0;
        }
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
