
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9902642559109875;
        result[1] += 0;
        result[2] += 0.00764951321279555;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020862308762169685;
      } else {
        result[0] += 0.999637352674524;
        result[1] += 0;
        result[2] += 0.00036264732547597464;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.01483924154987634;
        result[1] += 0.0054410552349546575;
        result[2] += 0.009398186314921682;
        result[3] += 0.6611706512778236;
        result[4] += 0.3088211046990932;
        result[5] += 0.00032976092333058534;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41700000))) ) ) {
        result[0] += 0.6270261595249559;
        result[1] += 0;
        result[2] += 0.0035307334296260633;
        result[3] += 0.3673567645642754;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020863424811426736;
      } else {
        result[0] += 0.9187794480592326;
        result[1] += 0;
        result[2] += 0.005609154139555755;
        result[3] += 0.07471393313888265;
        result[4] += 0;
        result[5] += 0.0004487323311644604;
        result[6] += 0.0004487323311644604;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x3f800000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0.0002879355024474518;
        result[2] += 0;
        result[3] += 0.9363662539591132;
        result[4] += 0.0627699395335445;
        result[5] += 0.0005758710048949036;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0053285968028419185;
        result[2] += 0.010213143872113677;
        result[3] += 0;
        result[4] += 0.9835701598579041;
        result[5] += 0.0008880994671403197;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9970681916895904;
        result[1] += 0.0005067323005646447;
        result[2] += 0.0019907340379325326;
        result[3] += 0.00010858549297813813;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00032575647893441444;
      } else {
        result[0] += 0;
        result[1] += 0.02702702702702703;
        result[2] += 0;
        result[3] += 0.972972972972973;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.18546496483459238;
        result[1] += 0;
        result[2] += 0.004428236519927065;
        result[3] += 0.8095858296431363;
        result[4] += 0;
        result[5] += 0.0005209690023443606;
        result[6] += 0;
      } else {
        result[0] += 0.9935385784872672;
        result[1] += 0;
        result[2] += 0.0032307107563664004;
        result[3] += 0.0011402508551881414;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0020904599011782594;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x453af800))) ) ) {
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
        result[1] += 0.00349428208386277;
        result[2] += 0.006670902160101652;
        result[3] += 0.9882465057179162;
        result[4] += 0;
        result[5] += 0.0015883100381194409;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.9971654916781743;
        result[1] += 0.0006177774547568864;
        result[2] += 0.001926012064830293;
        result[3] += 3.633985027981685e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00025437895195871795;
      } else {
        result[0] += 0.34595959595959597;
        result[1] += 0.020202020202020204;
        result[2] += 0;
        result[3] += 0.6338383838383839;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.1948717948717949;
        result[1] += 0;
        result[2] += 0.005641025641025642;
        result[3] += 0.7992307692307693;
        result[4] += 0;
        result[5] += 0.00025641025641025646;
        result[6] += 0;
      } else {
        result[0] += 0.9920889056319457;
        result[1] += 0;
        result[2] += 0.004520625353173856;
        result[3] += 0.0018835938971557733;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0015068751177246186;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0003244646333549643;
        result[1] += 0;
        result[2] += 0.0035691109669046075;
        result[3] += 0.9750162232316677;
        result[4] += 0.019143413367942893;
        result[5] += 0.001946787800129786;
        result[6] += 0;
      } else {
        result[0] += 0.5239071038251366;
        result[1] += 0;
        result[2] += 0.007513661202185792;
        result[3] += 0;
        result[4] += 0.4685792349726776;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.010506208213944603;
        result[2] += 0;
        result[3] += 0.15663801337153774;
        result[4] += 0.8328557784145176;
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
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.992914501653283;
        result[1] += 0;
        result[2] += 0.0051960321209258385;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001889466225791214;
      } else {
        result[0] += 0.999700265479147;
        result[1] += 0;
        result[2] += 0.0002997345208529588;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.5302881466928618;
        result[1] += 0.0013097576948264572;
        result[2] += 0.003929273084479371;
        result[3] += 0.4638179436804191;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006548788474132286;
      } else {
        result[0] += 0.8655203619909503;
        result[1] += 0.0025339366515837107;
        result[2] += 0.010316742081447965;
        result[3] += 0.12054298642533938;
        result[4] += 0;
        result[5] += 0.0001809954751131222;
        result[6] += 0.000904977375565611;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42ad0000))) ) ) {
        result[0] += 0.49755415793151647;
        result[1] += 0;
        result[2] += 0.00838574423480084;
        result[3] += 0.4926624737945493;
        result[4] += 0.0013976240391334732;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17003105590062112;
        result[1] += 0.010869565217391304;
        result[2] += 0.007763975155279503;
        result[3] += 0.8113354037267081;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.002188183807439825;
        result[1] += 0.0262582056892779;
        result[2] += 0;
        result[3] += 0.4814004376367615;
        result[4] += 0.49015317286652077;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01702127659574468;
        result[4] += 0.9829787234042553;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9994627782041443;
        result[1] += 0;
        result[2] += 0.000498848810437452;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.837298541826554e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.0022346368715083797;
        result[1] += 0.004469273743016759;
        result[2] += 0;
        result[3] += 0.22569832402234638;
        result[4] += 0.7653631284916201;
        result[5] += 0.0022346368715083797;
        result[6] += 0;
      } else {
        result[0] += 0.6030776950740153;
        result[1] += 0.0010035962197875723;
        result[2] += 0.007108806556828637;
        result[3] += 0.3760140503470771;
        result[4] += 0.01154135652755708;
        result[5] += 0.0002508990549468931;
        result[6] += 0.0010035962197875723;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.000589101620029455;
        result[1] += 0.0002945508100147275;
        result[2] += 0;
        result[3] += 0.9366715758468336;
        result[4] += 0.06156111929307806;
        result[5] += 0.0008836524300441826;
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
        result[0] += 0.9882352941176471;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.011764705882352941;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.002626970227670753;
        result[2] += 0.014010507880910683;
        result[3] += 0;
        result[4] += 0.9816112084063048;
        result[5] += 0.0017513134851138354;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.985632183908046;
        result[1] += 0;
        result[2] += 0.014367816091954023;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995192885470496;
        result[1] += 0;
        result[2] += 0.0004406521652045027;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.0059287745863876e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9073660714285714;
        result[1] += 0.002120535714285714;
        result[2] += 0.009375;
        result[3] += 0.08002232142857142;
        result[4] += 0;
        result[5] += 0.00011160714285714285;
        result[6] += 0.0010044642857142856;
      } else {
        result[0] += 0;
        result[1] += 0.002146690518783542;
        result[2] += 0.004651162790697674;
        result[3] += 0.9932021466905188;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9960099750623442;
        result[1] += 0;
        result[2] += 0.0034912718204488783;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004987531172069826;
      } else {
        result[0] += 0.9997114591920857;
        result[1] += 0;
        result[2] += 0.0002885408079142622;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.598724884080371;
        result[1] += 0.0013523956723338485;
        result[2] += 0.0038639876352395673;
        result[3] += 0.2990726429675425;
        result[4] += 0.0946676970633694;
        result[5] += 0.000579598145285935;
        result[6] += 0.0017387944358578052;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.023792357606344627;
        result[3] += 0.855803893294881;
        result[4] += 0.12040374909877433;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.5385616661243084;
        result[1] += 0.003471092309361102;
        result[2] += 0.005315110098709187;
        result[3] += 0.3960299381711682;
        result[4] += 0.0557544202191127;
        result[5] += 0.0003254149040026033;
        result[6] += 0.0005423581733376722;
      } else {
        result[0] += 0;
        result[1] += 0.0013802622498274672;
        result[2] += 0;
        result[3] += 0.1090407177363699;
        result[4] += 0.8895790200138026;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a70000))) ) ) {
        result[0] += 0.3455223880597015;
        result[1] += 0.004104477611940298;
        result[2] += 0.006343283582089552;
        result[3] += 0.6432835820895523;
        result[4] += 0.0007462686567164179;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0029296875;
        result[1] += 0;
        result[2] += 0.0087890625;
        result[3] += 0.2177734375;
        result[4] += 0.7705078125;
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
        result[0] += 0.016;
        result[1] += 0.112;
        result[2] += 0;
        result[3] += 0.872;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424e0000))) ) ) {
        result[0] += 0.983088145401198;
        result[1] += 0.0007742776804270752;
        result[2] += 0.0005297689392395778;
        result[3] += 0.01511879049676026;
        result[4] += 0.0003260116549166633;
        result[5] += 8.150291372916582e-05;
        result[6] += 8.150291372916582e-05;
      } else {
        result[0] += 0.7091435664046338;
        result[1] += 0;
        result[2] += 0.006826644600744725;
        result[3] += 0.2525858502275548;
        result[4] += 0.030409598676044685;
        result[5] += 0.0004137360364087712;
        result[6] += 0.0006206040546131568;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.3778538812785388;
        result[1] += 0;
        result[2] += 0.00684931506849315;
        result[3] += 0.4956240487062405;
        result[4] += 0.11967275494672755;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9003831417624522;
        result[1] += 0;
        result[2] += 0.00646551724137931;
        result[3] += 0.08740421455938698;
        result[4] += 0.003352490421455939;
        result[5] += 0.0011973180076628352;
        result[6] += 0.0011973180076628352;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9709821428571429;
        result[4] += 0.028645833333333332;
        result[5] += 0.0003720238095238095;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995843724023276;
        result[5] += 0.00041562759767248546;
        result[6] += 0;
      } else {
        result[0] += 0.5070422535211268;
        result[1] += 0.1267605633802817;
        result[2] += 0.30985915492957744;
        result[3] += 0.028169014084507043;
        result[4] += 0;
        result[5] += 0.028169014084507043;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9975651327002678;
        result[1] += 0;
        result[2] += 0.0007304601899196494;
        result[3] += 0.0017044071098125152;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13333333333333333;
        result[1] += 0.13333333333333333;
        result[2] += 0;
        result[3] += 0.7333333333333333;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0.8506936632920885;
        result[1] += 0.0017997750281214847;
        result[2] += 0.006224221972253468;
        result[3] += 0.1403074615673041;
        result[4] += 0;
        result[5] += 0.00014998125234345707;
        result[6] += 0.0008248968878890139;
      } else {
        result[0] += 0.48947614593077643;
        result[1] += 0;
        result[2] += 0.0035079513564078577;
        result[3] += 0.5070159027128157;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0.0008576329331046313;
        result[2] += 0;
        result[3] += 0.9379645511720984;
        result[4] += 0.060606060606060615;
        result[5] += 0.0005717552887364209;
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
        result[0] += 0.6916666666666667;
        result[1] += 0.075;
        result[2] += 0.20833333333333334;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.025;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.9968917980034373;
        result[1] += 0.00043880498775002744;
        result[2] += 0.001901488280250119;
        result[3] += 0.00029253665850001827;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004753720700625297;
      } else {
        result[0] += 0.37365010799136067;
        result[1] += 0.0367170626349892;
        result[2] += 0;
        result[3] += 0.5896328293736501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
        result[0] += 0.18770307423144214;
        result[1] += 0;
        result[2] += 0.005248687828042989;
        result[3] += 0.8065483629092727;
        result[4] += 0;
        result[5] += 0.0004998750312421895;
        result[6] += 0;
      } else {
        result[0] += 0.9951700154559505;
        result[1] += 0;
        result[2] += 0.004250386398763524;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000579598145285935;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42df0000))) ) ) {
        result[0] += 0.2942097026604069;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5156494522691706;
        result[4] += 0.19014084507042253;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.01079136690647482;
        result[1] += 0.03597122302158273;
        result[2] += 0;
        result[3] += 0.20503597122302158;
        result[4] += 0.7482014388489209;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0.3419282511210762;
        result[1] += 0.004484304932735426;
        result[2] += 0.011771300448430493;
        result[3] += 0.6418161434977578;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.000782472613458529;
        result[2] += 0;
        result[3] += 0.07981220657276995;
        result[4] += 0.9194053208137715;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.9988106026280018;
        result[1] += 0;
        result[2] += 0.0011893973719981875;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997705369435521;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002294630564479119;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7953877458738413;
        result[1] += 0.0012434998869545557;
        result[2] += 0.008478408320144699;
        result[3] += 0.17782048383450147;
        result[4] += 0.014695907754917477;
        result[5] += 0.0004521817770743839;
        result[6] += 0.0019217725525661315;
      } else {
        result[0] += 0;
        result[1] += 0.0010917030567685591;
        result[2] += 0.005458515283842795;
        result[3] += 0.7991266375545852;
        result[4] += 0.1935043668122271;
        result[5] += 0.0008187772925764193;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9982046678635548;
        result[5] += 0.0017953321364452424;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00030959752321981426;
        result[1] += 0.0018575851393188853;
        result[2] += 0.0058823529411764705;
        result[3] += 0.9907120743034056;
        result[4] += 0;
        result[5] += 0.001238390092879257;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.6293375394321766;
        result[1] += 0.0015772870662460567;
        result[2] += 0.0031545741324921135;
        result[3] += 0.3659305993690852;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9964300172978544;
        result[1] += 0.0007360789076589011;
        result[2] += 0.0015457657060836923;
        result[3] += 0.0008464907438077363;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004416473445953407;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.21476846057571966;
        result[1] += 0;
        result[2] += 0.0037546933667083854;
        result[3] += 0.7812265331664581;
        result[4] += 0;
        result[5] += 0.00025031289111389235;
        result[6] += 0;
      } else {
        result[0] += 0.9937440758293838;
        result[1] += 0;
        result[2] += 0.004170616113744076;
        result[3] += 0.0013270142180094786;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007582938388625592;
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45b71400))) ) ) {
        result[0] += 0.9995790923700927;
        result[1] += 0;
        result[2] += 0.00038264329991581853;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.8264329991581855e-05;
      } else {
        result[0] += 0.75;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7004481213374698;
        result[1] += 0.0021544295070665288;
        result[2] += 0.006635642881764908;
        result[3] += 0.2837814546708032;
        result[4] += 0.005601516718372975;
        result[5] += 0.0007755946225439503;
        result[6] += 0.000603240261978628;
      } else {
        result[0] += 0;
        result[1] += 0.0021493820526598604;
        result[2] += 0.006179473401397098;
        result[3] += 0.8089736700698549;
        result[4] += 0.18162278344975819;
        result[5] += 0.0010746910263299302;
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
        result[0] += 0.01557632398753894;
        result[1] += 0.040498442367601244;
        result[2] += 0;
        result[3] += 0.9439252336448598;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.003032600454890068;
        result[1] += 0.002274450341167551;
        result[2] += 0.007202426080363912;
        result[3] += 0.6899166034874905;
        result[4] += 0.2975739196360879;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9957671957671957;
        result[1] += 0;
        result[2] += 0.004232804232804233;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.003076923076923077;
        result[1] += 0.024615384615384615;
        result[2] += 0;
        result[3] += 0.24615384615384617;
        result[4] += 0.7261538461538461;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.034071550255536626;
        result[4] += 0.9659284497444633;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x424a0000))) ) ) {
        result[0] += 0.9855665923373199;
        result[1] += 0.0008108655990269611;
        result[2] += 0.0006486924792215689;
        result[3] += 0.01269004662477194;
        result[4] += 0.00020271639975674027;
        result[5] += 4.0543279951348054e-05;
        result[6] += 4.0543279951348054e-05;
      } else {
        result[0] += 0.7085229623500207;
        result[1] += 0;
        result[2] += 0.009722796855606123;
        result[3] += 0.2561026065370294;
        result[4] += 0.024617294166321888;
        result[5] += 0.0006206040546131568;
        result[6] += 0.0004137360364087712;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4510024358253701;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.54899756417463;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8251379227632526;
        result[1] += 0;
        result[2] += 0.012233149436315663;
        result[3] += 0;
        result[4] += 0.15903094267210363;
        result[5] += 0.0007195970256656273;
        result[6] += 0.002878388102662509;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x422c0000))) ) ) {
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
        result[3] += 0.5892857142857143;
        result[4] += 0.4107142857142857;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9708328982632001;
        result[1] += 0.0005568897706310258;
        result[2] += 0.0011137795412620515;
        result[3] += 0.02728759876092026;
        result[4] += 0;
        result[5] += 0.00010441683199331732;
        result[6] += 0.00010441683199331732;
      } else {
        result[0] += 0.11003299049097613;
        result[1] += 0.004269357655734524;
        result[2] += 0.011643702697457792;
        result[3] += 0.5286241024645837;
        result[4] += 0.34523578497962354;
        result[5] += 0.00019406171162429653;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0.26626540556033246;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7337345944396675;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6109839816933639;
        result[1] += 0;
        result[2] += 0.017734553775743706;
        result[3] += 0;
        result[4] += 0.37128146453089245;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.9289822455613903;
        result[1] += 0;
        result[2] += 0.005501375343835959;
        result[3] += 0.06351587896974244;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002000500125031258;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9530685920577617;
        result[4] += 0.036101083032490974;
        result[5] += 0.010830324909747292;
        result[6] += 0;
      }
    }
  }
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9995018393623544;
        result[1] += 0;
        result[2] += 0.0004981606376456162;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6120940473382088;
        result[1] += 0.0011008885743492964;
        result[2] += 0.004953998584571834;
        result[3] += 0.3264920971927342;
        result[4] += 0.05441534953212236;
        result[5] += 0.00015726979633561377;
        result[6] += 0.0007863489816780689;
      } else {
        result[0] += 0.007010834926704908;
        result[1] += 0;
        result[2] += 0.017208413001912046;
        result[3] += 0.7884002549394519;
        result[4] += 0.18419375398342894;
        result[5] += 0.0031867431485022306;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.20342612419700215;
        result[1] += 0.007851534618129907;
        result[2] += 0.0028551034975017845;
        result[3] += 0.7858672376873662;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001749271137026239;
        result[1] += 0.0058309037900874635;
        result[2] += 0;
        result[3] += 0.09096209912536443;
        result[4] += 0.9014577259475218;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.8206101077553498;
        result[1] += 0;
        result[2] += 0.002807709819395963;
        result[3] += 0.16869024131127636;
        result[4] += 0.007284868720594931;
        result[5] += 0.0002276521475185916;
        result[6] += 0.0003794202458643193;
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
        result[0] += 0.06707897240723121;
        result[1] += 0;
        result[2] += 0.005233111322549952;
        result[3] += 0.5956232159847764;
        result[4] += 0.3306374881065652;
        result[5] += 0.0014272121788772598;
        result[6] += 0;
      } else {
        result[0] += 0.9161052293872315;
        result[1] += 0.00036092396535129936;
        result[2] += 0.0020051331408405524;
        result[3] += 0.08128809752967599;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00024061597690086628;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.012280701754385965;
        result[2] += 0.0008771929824561404;
        result[3] += 0.9868421052631579;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9700996677740864;
        result[1] += 0;
        result[2] += 0.029900332225913623;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3576923076923077;
        result[4] += 0.6423076923076924;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0021231422505307855;
        result[1] += 0.00778485491861288;
        result[2] += 0;
        result[3] += 0.055201698513800426;
        result[4] += 0.9348903043170559;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 0.3491081179468511;
        result[1] += 0.005460502366217692;
        result[2] += 0.011285038223516564;
        result[3] += 0.6334182744812523;
        result[4] += 0.0007280669821623589;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.08860759493670886;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9113924050632911;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3723150357995227;
        result[4] += 0.6276849642004774;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007122507122507123;
        result[1] += 0.00641025641025641;
        result[2] += 0;
        result[3] += 0.05056980056980057;
        result[4] += 0.9423076923076923;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.9964318433868558;
        result[1] += 4.821833261005835e-05;
        result[2] += 0.0005304016587106419;
        result[3] += 0.0029413182892135594;
        result[4] += 4.821833261005835e-05;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0042780748663101605;
        result[1] += 0.0032085561497326204;
        result[2] += 0.020320855614973262;
        result[3] += 0.2374331550802139;
        result[4] += 0.732620320855615;
        result[5] += 0.0021390374331550803;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42040000))) ) ) {
        result[0] += 0.8010986929342678;
        result[1] += 0.00107343562543411;
        result[2] += 0.003914882869230284;
        result[3] += 0.1927132664014649;
        result[4] += 0;
        result[5] += 0.0003157163604217971;
        result[6] += 0.0008840058091810317;
      } else {
        result[0] += 0.025373134328358207;
        result[1] += 0;
        result[2] += 0.017164179104477612;
        result[3] += 0.8455223880597015;
        result[4] += 0.10895522388059702;
        result[5] += 0.0029850746268656717;
        result[6] += 0;
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
        result[0] += 0;
        result[1] += 0.0002878526194588371;
        result[2] += 0;
        result[3] += 0.9286125503742084;
        result[4] += 0.06994818652849741;
        result[5] += 0.0011514104778353484;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.4054054054054053;
        result[1] += 0.10810810810810809;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.47297297297297286;
        result[5] += 0.01351351351351351;
        result[6] += 0;
      } else {
        result[0] += 0.025134649910233394;
        result[1] += 0;
        result[2] += 0.00807899461400359;
        result[3] += 0;
        result[4] += 0.9649910233393177;
        result[5] += 0.0017953321364452424;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.8349237687835911;
        result[1] += 0;
        result[2] += 0.0017549632554568389;
        result[3] += 0.16299221235055392;
        result[4] += 0;
        result[5] += 0.0003290556103981573;
        result[6] += 0;
      } else {
        result[0] += 0.8848353156450138;
        result[1] += 0.0014867337602927724;
        result[2] += 0.0028019213174748404;
        result[3] += 0.1104757548032937;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00040027447392497717;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.9927511609468797;
        result[1] += 0;
        result[2] += 0.003284630195945181;
        result[3] += 0.0030581039755351682;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009061048816400498;
      } else {
        result[0] += 0.9489858635525507;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.051014136447449294;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.8506986027944112;
        result[1] += 0;
        result[2] += 0.006786427145708583;
        result[3] += 0.14251497005988023;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.04158790170132325;
        result[1] += 0.004017013232514178;
        result[2] += 0.006379962192816635;
        result[3] += 0.5323724007561437;
        result[4] += 0.41564272211720227;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.7883767535070141;
        result[1] += 0;
        result[2] += 0.0056112224448897794;
        result[3] += 0.20480961923847696;
        result[4] += 0;
        result[5] += 0.0004008016032064128;
        result[6] += 0.0008016032064128256;
      } else {
        result[0] += 0.9845177459778478;
        result[1] += 0.00044466003718974856;
        result[2] += 0.000606354596167839;
        result[3] += 0.014067426631093864;
        result[4] += 0.00020211819872261298;
        result[5] += 4.04236397445226e-05;
        result[6] += 0.00012127091923356779;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.4656172328086164;
        result[1] += 0;
        result[2] += 0.0115990057995029;
        result[3] += 0.027340513670256836;
        result[4] += 0.49544324772162385;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.017571884984025562;
        result[1] += 0;
        result[2] += 0.0035143769968051125;
        result[3] += 0.9734824281150161;
        result[4] += 0.005111821086261982;
        result[5] += 0.00031948881789137386;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 0.9991189427312775;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.000881057268722467;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9787472035794184;
        result[1] += 0;
        result[2] += 0.017337807606263984;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0039149888143176735;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9947780678851175;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.005221932114882507;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009383797309978103;
        result[1] += 0.0003127932436659368;
        result[2] += 0.00875821082264623;
        result[3] += 0.6947137941820456;
        result[4] += 0.2934000625586487;
        result[5] += 0.0018767594619956206;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9992588836447323;
        result[1] += 0;
        result[2] += 0.0006240979833833912;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011701837188438584;
      } else {
        result[0] += 0.7021735225435604;
        result[1] += 0.0016166696604993716;
        result[2] += 0.00610741871744207;
        result[3] += 0.28911442428597095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009879647925273938;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.011494252873563218;
        result[1] += 0.05747126436781609;
        result[2] += 0;
        result[3] += 0.9310344827586207;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.20242656449553;
        result[1] += 0.006385696040868455;
        result[2] += 0.008301404853128991;
        result[3] += 0.7828863346104725;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9925198690977092;
        result[1] += 0;
        result[2] += 0.0065451145395044414;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009350163627863488;
      } else {
        result[0] += 0.9998343342306896;
        result[1] += 0;
        result[2] += 0.00016566576931041624;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.7424826522744795;
        result[1] += 0.0008673862760215882;
        result[2] += 0.007613723978411719;
        result[3] += 0.22234001542020046;
        result[4] += 0.02515420200462606;
        result[5] += 0.00038550501156515033;
        result[6] += 0.001156515034695451;
      } else {
        result[0] += 0.0907585293143425;
        result[1] += 0.006955945677376615;
        result[2] += 0.001987413050679033;
        result[3] += 0.4236502153030805;
        result[4] += 0.47664789665452134;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41b00000))) ) ) {
        result[0] += 0;
        result[1] += 0.0016144656118824668;
        result[2] += 0.006457862447529867;
        result[3] += 0.9919276719405876;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.015235457063711912;
        result[3] += 0;
        result[4] += 0.9833795013850416;
        result[5] += 0.0013850415512465374;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x423e0000))) ) ) {
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
        result[4] += 0.9991932230738201;
        result[5] += 0.0008067769261799112;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 0.12479740680713128;
        result[1] += 0.0032414910858995136;
        result[2] += 0.005672609400324149;
        result[3] += 0.8638573743922204;
        result[4] += 0;
        result[5] += 0.0024311183144246355;
        result[6] += 0;
      } else {
        result[0] += 0.21494661921708186;
        result[1] += 0.002491103202846975;
        result[2] += 0.004626334519572953;
        result[3] += 0.7758007117437722;
        result[4] += 0;
        result[5] += 0.002135231316725979;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9954653422586912;
        result[1] += 0.0005398402072986395;
        result[2] += 0.0020873821348880725;
        result[3] += 0.0017634780105088889;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014395738861297053;
      } else {
        result[0] += 0;
        result[1] += 0.046762589928057555;
        result[2] += 0;
        result[3] += 0.9532374100719424;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4443645515009887;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5556354484990114;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9874589429680501;
        result[1] += 0;
        result[2] += 0.01015228426395939;
        result[3] += 0.00029859659599880563;
        result[4] += 0;
        result[5] += 0.0005971931919976113;
        result[6] += 0.001492982979994028;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.2215417106652587;
        result[1] += 0.0029567053854276664;
        result[2] += 0;
        result[3] += 0.7235480464625133;
        result[4] += 0.050897571277719114;
        result[5] += 0.0010559662090813093;
        result[6] += 0;
      } else {
        result[0] += 0.9956228342148459;
        result[1] += 0.0015806432001945407;
        result[2] += 0.002553346708006566;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00024317587695300627;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9996333302777524;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.000275002291685764;
        result[5] += 9.166743056192135e-05;
        result[6] += 0;
      } else {
        result[0] += 0.10537751222161869;
        result[1] += 0;
        result[2] += 0.018468223791417708;
        result[3] += 0.042368278109722976;
        result[4] += 0.8337859858772406;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.32110977080820263;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6788902291917973;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7442023893183415;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.25579761068165846;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.9790481891649208;
        result[1] += 0;
        result[2] += 0.014067644417838972;
        result[3] += 0.0005986231667165521;
        result[4] += 0.0029931158335827603;
        result[5] += 0.001795869500149656;
        result[6] += 0.0014965579167913801;
      } else {
        result[0] += 0.0015220700152207;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9984779299847792;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
        result[0] += 0.9994649954142464;
        result[1] += 0;
        result[2] += 0.000420360745949251;
        result[3] += 0;
        result[4] += 3.8214613268113725e-05;
        result[5] += 0;
        result[6] += 7.642922653622745e-05;
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
        result[0] += 0.6098347757671125;
        result[1] += 0.001966955153422502;
        result[2] += 0.0036978756884343037;
        result[3] += 0.33469708890637295;
        result[4] += 0.04901652242328875;
        result[5] += 0.0003147128245476003;
        result[6] += 0.00047206923682140047;
      } else {
        result[0] += 0.007343124165554072;
        result[1] += 0;
        result[2] += 0.017356475300400534;
        result[3] += 0.7663551401869159;
        result[4] += 0.2049399198931909;
        result[5] += 0.004005340453938585;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.010719754977029096;
        result[2] += 0;
        result[3] += 0.9892802450229708;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.966789667896679;
        result[1] += 0;
        result[2] += 0.033210332103321034;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.7932930181418362;
        result[1] += 0;
        result[2] += 0.0021990104452996153;
        result[3] += 0.19846069268829028;
        result[4] += 0.002748763056624519;
        result[5] += 0.002748763056624519;
        result[6] += 0.0005497526113249038;
      } else {
        result[0] += 0.984412955465587;
        result[1] += 0.0005668016194331983;
        result[2] += 0.0004453441295546559;
        result[3] += 0.014089068825910931;
        result[4] += 0.00028340080971659917;
        result[5] += 0.00012145748987854252;
        result[6] += 8.097165991902834e-05;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.5640584694754943;
        result[1] += 0;
        result[2] += 0.00988822012037833;
        result[3] += 0.3731728288907996;
        result[4] += 0.05288048151332759;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07927043142756927;
        result[1] += 0.006313574184496668;
        result[2] += 0.00175377060680463;
        result[3] += 0.3900385829533497;
        result[4] += 0.5226236408277797;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.002057008521892448;
        result[1] += 0;
        result[2] += 0.007052600646488392;
        result[3] += 0.7975315897737291;
        result[4] += 0.1933588010578901;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8474911102331094;
        result[1] += 0;
        result[2] += 0.007111813512445673;
        result[3] += 0.13709996048992493;
        result[4] += 0.0035559067562228367;
        result[5] += 0.0019755037534571317;
        result[6] += 0.002765705254839984;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42060000))) ) ) {
        result[0] += 0.9991407704425033;
        result[1] += 0;
        result[2] += 0.0008592295574967779;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998436522826767;
        result[1] += 0;
        result[2] += 0.00015634771732332708;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6083792289535799;
        result[1] += 0;
        result[2] += 0.011014948859166011;
        result[3] += 0.34107002360346184;
        result[4] += 0.037568843430369786;
        result[5] += 0;
        result[6] += 0.001966955153422502;
      } else {
        result[0] += 0.05794392523364486;
        result[1] += 0.006230529595015576;
        result[2] += 0.0012461059190031153;
        result[3] += 0.632398753894081;
        result[4] += 0.3003115264797508;
        result[5] += 0.001869158878504673;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.5864644635581712;
        result[1] += 0.005658669081032141;
        result[2] += 0.004979628791308284;
        result[3] += 0.38863739248528745;
        result[4] += 0.013354459031235853;
        result[5] += 0.00022634676324128565;
        result[6] += 0.000679040289723857;
      } else {
        result[0] += 0.3589001447178003;
        result[1] += 0.00016079755587715066;
        result[2] += 0.006431902235086027;
        result[3] += 0.35761376427078306;
        result[4] += 0.2760894034410677;
        result[5] += 0.0008039877793857533;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
        result[0] += 0.9991957720588235;
        result[1] += 0;
        result[2] += 0.0006893382352941177;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011488970588235294;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.5329211498313795;
        result[1] += 0.001686205235265778;
        result[2] += 0.004817729243616509;
        result[3] += 0.43969808896740004;
        result[4] += 0.02015416733579573;
        result[5] += 0.00024088646218082543;
        result[6] += 0.00048177292436165086;
      } else {
        result[0] += 0.5939226519337016;
        result[1] += 0;
        result[2] += 0.023756906077348067;
        result[3] += 0.0022099447513812156;
        result[4] += 0.3751381215469613;
        result[5] += 0.0016574585635359116;
        result[6] += 0.0033149171270718232;
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
        result[0] += 0.14295257181028725;
        result[1] += 0.015364061456245824;
        result[2] += 0.004676018704074816;
        result[3] += 0.8370073480293921;
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
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.32247284878863824;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.14954051796157058;
        result[4] += 0.5279866332497911;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00042826552462526765;
        result[2] += 0.012419700214132762;
        result[3] += 0.871948608137045;
        result[4] += 0.11434689507494647;
        result[5] += 0.0008565310492505353;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.8827705367539346;
        result[1] += 0.00033805356270893587;
        result[2] += 0.0026668669947038275;
        result[3] += 0.11411185816774969;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011268452090297862;
      } else {
        result[0] += 0.9852366053969496;
        result[1] += 0;
        result[2] += 0.0028353539303871723;
        result[3] += 0.011145874071177161;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007821666014861165;
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
        result[0] += 0;
        result[1] += 0.02127659574468085;
        result[2] += 0.002364066193853428;
        result[3] += 0.9763593380614657;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9807073954983923;
        result[1] += 0;
        result[2] += 0.01929260450160772;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9845985123021171;
        result[1] += 0.00019073049780659929;
        result[2] += 0.0012397482357428952;
        result[3] += 0.013541865344268548;
        result[4] += 0.00019073049780659929;
        result[5] += 9.536524890329964e-05;
        result[6] += 0.00014304787335494946;
      } else {
        result[0] += 0.7115128246147283;
        result[1] += 0.0003732736095558044;
        result[2] += 0.005492454540606836;
        result[3] += 0.2683837252706234;
        result[4] += 0.013224550738548498;
        result[5] += 0.00047992321228603423;
        result[6] += 0.0005332480136511492;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.1886574074074074;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5752314814814815;
        result[4] += 0.2361111111111111;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1002313030069391;
        result[1] += 0.006939090208172706;
        result[2] += 0.0038550501156515036;
        result[3] += 0.5150346954510409;
        result[4] += 0.37393986121819583;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.008982035928143712;
        result[1] += 0.038922155688622756;
        result[2] += 0;
        result[3] += 0.20059880239520958;
        result[4] += 0.7514970059880239;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03409090909090909;
        result[4] += 0.9659090909090909;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
        result[0] += 0.9395335017085129;
        result[1] += 0;
        result[2] += 0.002971326697370376;
        result[3] += 0.037438716386866744;
        result[4] += 0.019610756202644485;
        result[5] += 0.0004456990046055564;
        result[6] += 0;
      } else {
        result[0] += 0.5805810397553517;
        result[1] += 0.0012232415902140672;
        result[2] += 0.0024464831804281344;
        result[3] += 0.35061162079510705;
        result[4] += 0.06483180428134556;
        result[5] += 0.0001529051987767584;
        result[6] += 0.0001529051987767584;
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
        result[0] += 0.3598200899550225;
        result[1] += 0;
        result[2] += 0.0074962518740629685;
        result[3] += 0.3988005997001499;
        result[4] += 0.22938530734632684;
        result[5] += 0;
        result[6] += 0.004497751124437781;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41e80000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9836759784167748;
        result[1] += 0.00020490403660952122;
        result[2] += 0.00040980807321904243;
        result[3] += 0.013387063725155385;
        result[4] += 0.0023222457482412404;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8169577109194193;
        result[1] += 0.0009467704607616243;
        result[2] += 0.002419524510835262;
        result[3] += 0.1790448138018094;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006311803071744162;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.24971275373420146;
        result[1] += 0.006127920337035618;
        result[2] += 0.00804289544235925;
        result[3] += 0.6595174262734584;
        result[4] += 0.07583301417081578;
        result[5] += 0.0007659900421294523;
        result[6] += 0;
      } else {
        result[0] += 0.10496957403651115;
        result[1] += 0;
        result[2] += 0.013184584178498986;
        result[3] += 0.11511156186612576;
        result[4] += 0.7652129817444219;
        result[5] += 0.0015212981744421906;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.9804878048780488;
        result[1] += 0;
        result[2] += 0.01951219512195122;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.06404657933042213;
        result[1] += 0.006550218340611353;
        result[2] += 0.000727802037845706;
        result[3] += 0.5946142649199417;
        result[4] += 0.33406113537117904;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9552056260510625;
        result[1] += 0;
        result[2] += 0.0019874636905671916;
        result[3] += 0.01696988228099679;
        result[4] += 0.025072618865616878;
        result[5] += 0.0007644091117566122;
        result[6] += 0;
      } else {
        result[0] += 0.7107913669064747;
        result[1] += 0;
        result[2] += 0.005435651478816946;
        result[3] += 0.28041566746602714;
        result[4] += 0.0015987210231814544;
        result[5] += 0.0006394884092725819;
        result[6] += 0.0011191047162270181;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42240000))) ) ) {
        result[0] += 0.9677817172807153;
        result[1] += 0.0008735419557062843;
        result[2] += 0.0013873901649452752;
        result[3] += 0.029392117568470273;
        result[4] += 0.00015415446277169725;
        result[5] += 5.138482092389908e-05;
        result[6] += 0.00035969374646729354;
      } else {
        result[0] += 0.05691594970218399;
        result[1] += 0.0052945069490403715;
        result[2] += 0.016545334215751162;
        result[3] += 0.4894109861019193;
        result[4] += 0.43084050297816023;
        result[5] += 0.0009927200529450697;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.1796707229778096;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6528274874731568;
        result[4] += 0.16750178954903364;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9936865220971727;
        result[1] += 0;
        result[2] += 0.0030194894317869887;
        result[3] += 0.0030194894317869887;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002744990392533626;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.9376403273701746;
        result[1] += 0.0005069892083725647;
        result[2] += 0.00021728108930252772;
        result[3] += 0.014340551893966828;
        result[4] += 0.04729485043818353;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.982846902201741;
        result[1] += 0;
        result[2] += 0.0028161802355350747;
        result[3] += 0.013312852022529444;
        result[4] += 0.0010240655401945727;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.7957008779897061;
        result[1] += 0.0009082652134423249;
        result[2] += 0.00326975476839237;
        result[3] += 0.19927338782924608;
        result[4] += 0;
        result[5] += 6.055101422948833e-05;
        result[6] += 0.0007871631849833482;
      } else {
        result[0] += 0.15071972904318373;
        result[1] += 0;
        result[2] += 0.01397121083827265;
        result[3] += 0.7307366638441999;
        result[4] += 0.10160880609652836;
        result[5] += 0.0029635901778154107;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.14922813036020582;
        result[1] += 0.009433962264150943;
        result[2] += 0;
        result[3] += 0.8413379073756432;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.003115264797507788;
        result[1] += 0.03426791277258567;
        result[2] += 0;
        result[3] += 0.18691588785046728;
        result[4] += 0.7757009345794392;
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
        result[0] += 0.26851851851851855;
        result[1] += 0;
        result[2] += 0.024691358024691357;
        result[3] += 0.7067901234567902;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.08033989957512554;
        result[1] += 0.0003862495171881035;
        result[2] += 0;
        result[3] += 0.9169563538045578;
        result[4] += 0.001544998068752414;
        result[5] += 0.000772499034376207;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03259452411994785;
        result[3] += 0;
        result[4] += 0.9634941329856584;
        result[5] += 0.003911342894393742;
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
        result[1] += 0.09883720930232558;
        result[2] += 0;
        result[3] += 0.9011627906976745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.3676333021515435;
        result[1] += 0.004677268475210477;
        result[2] += 0;
        result[3] += 0.627689429373246;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9899924943707781;
        result[1] += 0.00085778619679045;
        result[2] += 0.0021087244004431896;
        result[3] += 0.0070052539404553416;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.5741091532935415e-05;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42200000))) ) ) {
        result[0] += 0.7984126984126982;
        result[1] += 0;
        result[2] += 0.010052910052910051;
        result[3] += 0.18941798941798937;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002116402116402116;
      } else {
        result[0] += 0.5218111540585312;
        result[1] += 0;
        result[2] += 0.0025768452052273147;
        result[3] += 0.4756120007362415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0.9989442567567568;
        result[1] += 0;
        result[2] += 0.0008445945945945946;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021114864864864866;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.012345679012345678;
        result[1] += 0.0017028522775649213;
        result[2] += 0.010217113665389528;
        result[3] += 0.6951894423158791;
        result[4] += 0.2792677735206471;
        result[5] += 0.001277139208173691;
        result[6] += 0;
      } else {
        result[0] += 0.7341109259700073;
        result[1] += 0;
        result[2] += 0.006189002618424186;
        result[3] += 0.25612949297786247;
        result[4] += 0;
        result[5] += 0.0004760771244941681;
        result[6] += 0.003094501309212093;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.6022492540739041;
        result[1] += 0.007344503098462245;
        result[2] += 0.0039017672710580675;
        result[3] += 0.37181546935965115;
        result[4] += 0.013770943309616708;
        result[5] += 0.0006885471654808355;
        result[6] += 0.00022951572182694515;
      } else {
        result[0] += 0.3659506762132061;
        result[1] += 0.0004773269689737471;
        result[2] += 0.0071599045346062064;
        result[3] += 0.35242641209228326;
        result[4] += 0.27366746221161503;
        result[5] += 0.0001591089896579157;
        result[6] += 0.0001591089896579157;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x457e0000))) ) ) {
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9309143686502177;
        result[4] += 0.06821480406386067;
        result[5] += 0.0008708272859216256;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0036883356385431073;
        result[2] += 0.00875979714153988;
        result[3] += 0;
        result[4] += 0.9861687413554634;
        result[5] += 0.0013831258644536654;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.998917804689513;
        result[1] += 0.0002576655501159495;
        result[2] += 0.0006699304303014687;
        result[3] += 0.0001030662200463798;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.15331100231899e-05;
      } else {
        result[0] += 0.8925979680696662;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.10740203193033382;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5373999447971296;
        result[1] += 0.0037261937620756283;
        result[2] += 0.009108473640629314;
        result[3] += 0.4494893734474193;
        result[4] += 0;
        result[5] += 0.00013800717637317143;
        result[6] += 0.00013800717637317143;
      } else {
        result[0] += 0.9844787092821403;
        result[1] += 0;
        result[2] += 0.0030634126416828346;
        result[3] += 0.011947309302563056;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005105687736138058;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41500000))) ) ) {
        result[0] += 0.07142857142857142;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9285714285714286;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.001536688436419516;
        result[1] += 0.0042258932001536685;
        result[2] += 0.004610065309258548;
        result[3] += 0.9884748367268537;
        result[4] += 0;
        result[5] += 0.001152516327314637;
        result[6] += 0;
      } else {
        result[0] += 0.961038961038961;
        result[1] += 0;
        result[2] += 0.03896103896103896;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9990455283000859;
        result[1] += 0;
        result[2] += 0.000811300944926983;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014317075498711463;
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
        result[0] += 0.8524105918345817;
        result[1] += 0.002215423567886908;
        result[2] += 0.007068256145162992;
        result[3] += 0.13714526848823716;
        result[4] += 0;
        result[5] += 0.00021099272075113408;
        result[6] += 0.0009494672433801034;
      } else {
        result[0] += 0;
        result[1] += 0.002178649237472767;
        result[2] += 0.005809731299927378;
        result[3] += 0.9920116194625999;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9961371318203767;
        result[1] += 0;
        result[2] += 0.003380009657170449;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004828585224529213;
      } else {
        result[0] += 0.9996268656716418;
        result[1] += 0;
        result[2] += 0.00037313432835820896;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.6805270155928925;
        result[1] += 0.0019340021757524477;
        result[2] += 0.004714130303396591;
        result[3] += 0.2799468149401668;
        result[4] += 0.03179016076393086;
        result[5] += 0.00036262540795358394;
        result[6] += 0.0007252508159071679;
      } else {
        result[0] += 0.3620689655172414;
        result[1] += 0;
        result[2] += 0.005804028678729942;
        result[3] += 0.5133151246159099;
        result[4] += 0.11676340047797883;
        result[5] += 0.0003414134516899966;
        result[6] += 0.001707067258449983;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.10204081632653061;
        result[1] += 0.005695301376364499;
        result[2] += 0.005220692928334125;
        result[3] += 0.5571903179876602;
        result[4] += 0.3298528713811106;
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
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.017094017094017096;
        result[1] += 0.08547008547008547;
        result[2] += 0;
        result[3] += 0.8974358974358975;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.9370832125253697;
        result[1] += 0.0002174543345897362;
        result[2] += 0.0002899391127863149;
        result[3] += 0.014496955639315745;
        result[4] += 0.04783995360974196;
        result[5] += 7.248477819657873e-05;
        result[6] += 0;
      } else {
        result[0] += 0.9840316811446091;
        result[1] += 0;
        result[2] += 0.0022994379151762903;
        result[3] += 0.012774655084312723;
        result[4] += 0.0006387327542156362;
        result[5] += 0;
        result[6] += 0.0002554931016862545;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 0.3460450074114001;
        result[1] += 0.0014822800161703275;
        result[2] += 0.008758927368279207;
        result[3] += 0.6070610429861205;
        result[4] += 0.03557472038808786;
        result[5] += 0.0006737636437137853;
        result[6] += 0.00040425818622827114;
      } else {
        result[0] += 0.9404730502066297;
        result[1] += 0;
        result[2] += 0.0031653917172250064;
        result[3] += 0.05557021014683901;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007913479293062516;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41300000))) ) ) {
        result[0] += 0.15146948003014318;
        result[1] += 0.00904295403165034;
        result[2] += 0.008289374529012811;
        result[3] += 0.8311981914091937;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001885014137606032;
        result[1] += 0.008482563619227144;
        result[2] += 0;
        result[3] += 0.1470311027332705;
        result[4] += 0.8426013195098964;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.9318762668546753;
        result[1] += 0.0009694192297523574;
        result[2] += 0.0015863223759584031;
        result[3] += 0.06486295937252137;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007050321670926236;
      } else {
        result[0] += 0.9967405855305279;
        result[1] += 0.00017461148943600488;
        result[2] += 0.00023281531924800652;
        result[3] += 0.0023863570222920666;
        result[4] += 0.00017461148943600488;
        result[5] += 0.00029101914906000815;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.1919288210994598;
        result[1] += 0.0044486812837623135;
        result[2] += 0.016205910390848427;
        result[3] += 0.7677152843978392;
        result[4] += 0.01874801398156975;
        result[5] += 0.0009532888465204957;
        result[6] += 0;
      } else {
        result[0] += 0.001454192922927775;
        result[1] += 0.005332040717401842;
        result[2] += 0;
        result[3] += 0.13717886572952012;
        result[4] += 0.8560349006301503;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.14804102024717328;
        result[1] += 0;
        result[2] += 0.010255061793321063;
        result[3] += 0.8374967131212201;
        result[4] += 0.003155403628714173;
        result[5] += 0.001051801209571391;
        result[6] += 0;
      } else {
        result[0] += 0.992963103841765;
        result[1] += 0;
        result[2] += 0.0045644731837200464;
        result[3] += 0.0011411182959300116;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013313046785850134;
      }
    } else {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x445c0000))) ) ) {
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.007309941520467836;
        result[1] += 0.011695906432748537;
        result[2] += 0.007797270955165692;
        result[3] += 0.973196881091618;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9885535900104059;
        result[1] += 0;
        result[2] += 0.011446409989594173;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.8357364341085272;
        result[1] += 0;
        result[2] += 0.003875968992248062;
        result[3] += 0.1578294573643411;
        result[4] += 0.0020155038759689923;
        result[5] += 0.00023255813953488373;
        result[6] += 0.000310077519379845;
      } else {
        result[0] += 0.8868692456632552;
        result[1] += 0.0007112656577231596;
        result[2] += 0.002133796973169479;
        result[3] += 0.10629470107084996;
        result[4] += 0.003674872564902991;
        result[5] += 0.00019757379381198878;
        result[6] += 0.00011854427628719326;
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
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.07384740922072623;
        result[1] += 0;
        result[2] += 0.015503875968992248;
        result[3] += 0.6993064055487556;
        result[4] += 0.20971032231742145;
        result[5] += 0.0016319869441044472;
        result[6] += 0;
      } else {
        result[0] += 0.029469548133595286;
        result[1] += 0;
        result[2] += 0.0019646365422396855;
        result[3] += 0.5108055009823183;
        result[4] += 0.4577603143418468;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3950617283950617;
        result[4] += 0.6049382716049383;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00857843137254902;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.991421568627451;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.999406674907293;
        result[1] += 0;
        result[2] += 0.0005438813349814586;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.9443757725587144e-05;
      } else {
        result[0] += 0.7078651685393258;
        result[1] += 0.018726591760299626;
        result[2] += 0;
        result[3] += 0.27340823970037453;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.8130659374050441;
        result[1] += 0.0009115770282588879;
        result[2] += 0.003767851716803403;
        result[3] += 0.18128228501975083;
        result[4] += 0;
        result[5] += 0.00030385900941962927;
        result[6] += 0.0006684898207231845;
      } else {
        result[0] += 0.14297253634894994;
        result[1] += 0.009693053311793216;
        result[2] += 0.014539579967689824;
        result[3] += 0.8311793214862683;
        result[4] += 0;
        result[5] += 0.0016155088852988695;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0.08831794460056204;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8892011240465677;
        result[4] += 0.021276595744680854;
        result[5] += 0.0012043356081894825;
        result[6] += 0;
      } else {
        result[0] += 0.28491965389369595;
        result[1] += 0.0006180469715698393;
        result[2] += 0;
        result[3] += 0.6019777503090235;
        result[4] += 0.11248454882571075;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999096657633243;
        result[5] += 0.0009033423667570009;
        result[6] += 0;
      } else {
        result[0] += 0.71875;
        result[1] += 0.078125;
        result[2] += 0.1953125;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.0078125;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9945054945054945;
        result[1] += 0;
        result[2] += 0.005494505494505495;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996419050650539;
        result[1] += 0;
        result[2] += 0.0003580949349460868;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9437612723397278;
        result[1] += 0.004590916543695688;
        result[2] += 0.005738645679619609;
        result[3] += 0.0455812428266929;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003279226102639777;
      } else {
        result[0] += 0.4146341463414634;
        result[1] += 0;
        result[2] += 0.007702182284980745;
        result[3] += 0.5754630478635614;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0022006235099944985;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.006522829904666332;
        result[1] += 0.006021073758153537;
        result[2] += 0.01154039136979428;
        result[3] += 0.9759157049673859;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9926547743966422;
        result[1] += 0;
        result[2] += 0.007345225603357817;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42560000))) ) ) {
        result[0] += 0.9804245283018868;
        result[1] += 0.0010613207547169811;
        result[2] += 0.000550314465408805;
        result[3] += 0.017413522012578616;
        result[4] += 0.00031446540880503143;
        result[5] += 7.861635220125786e-05;
        result[6] += 0.00015723270440251572;
      } else {
        result[0] += 0.6748686096512184;
        result[1] += 0;
        result[2] += 0.007644529383659819;
        result[3] += 0.28834209268991884;
        result[4] += 0.027711419015766844;
        result[5] += 0.0009555661729574774;
        result[6] += 0.0004777830864787387;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.661942620117525;
        result[1] += 0;
        result[2] += 0.00553059108192188;
        result[3] += 0.32987671390713214;
        result[4] += 0.0010369858278603526;
        result[5] += 0.0010369858278603526;
        result[6] += 0.0005761032377001959;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
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
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9664259927797834;
        result[4] += 0.03285198555956679;
        result[5] += 0.0007220216606498195;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.453125;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.078125;
        result[4] += 0.46875;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00579950289975145;
        result[1] += 0.002899751449875725;
        result[2] += 0.007456503728251864;
        result[3] += 0;
        result[4] += 0.9826014913007457;
        result[5] += 0.0012427506213753107;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 0.48541114058355445;
        result[1] += 0;
        result[2] += 0.0026525198938992045;
        result[3] += 0.5083996463306809;
        result[4] += 0;
        result[5] += 0.003536693191865606;
        result[6] += 0;
      } else {
        result[0] += 0.6421404682274248;
        result[1] += 0.0033444816053511705;
        result[2] += 0.0016722408026755853;
        result[3] += 0.3528428093645485;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993573522914407;
        result[1] += 0;
        result[2] += 0.0005623167449893561;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.033096356990803e-05;
      } else {
        result[0] += 0.7038297129896187;
        result[1] += 0.0027043531361772657;
        result[2] += 0.007938585012649392;
        result[3] += 0.2837826049027305;
        result[4] += 0;
        result[5] += 8.723719794120212e-05;
        result[6] += 0.00165750676088284;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9969620253164557;
        result[1] += 0;
        result[2] += 0.0015189873417721519;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0015189873417721519;
      } else {
        result[0] += 0.9998761149653121;
        result[1] += 0;
        result[2] += 0.0001238850346878097;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.7388443935926774;
        result[1] += 0.0006674294431731503;
        result[2] += 0.009057971014492754;
        result[3] += 0.22683066361556065;
        result[4] += 0.02326468344774981;
        result[5] += 0.0008581235697940503;
        result[6] += 0.0004767353165522502;
      } else {
        result[0] += 0;
        result[1] += 0.0015987210231814548;
        result[2] += 0.006661337596589395;
        result[3] += 0.7972288835598188;
        result[4] += 0.1939781508126832;
        result[5] += 0.0005329070077271516;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42da0000))) ) ) {
        result[0] += 0.14684756584197925;
        result[1] += 0.01596169193934557;
        result[2] += 0;
        result[3] += 0.8371907422186752;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.008968609865470852;
        result[1] += 0.013452914798206279;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9775784753363229;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0.011618900077459334;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.024012393493415957;
        result[4] += 0.9643687064291248;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.21262458471760798;
        result[1] += 0;
        result[2] += 0.026578073089700997;
        result[3] += 0.760797342192691;
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
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42060000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9989401968205904;
        result[1] += 0;
        result[2] += 0.0009084027252081756;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001514004542013626;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0.19920931254118163;
        result[1] += 0.0035141664836371624;
        result[2] += 0.006369426751592357;
        result[3] += 0.4337799253239622;
        result[4] += 0.35712716889962665;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8010686852944451;
        result[1] += 0.0012245352332183011;
        result[2] += 0.007124568629633753;
        result[3] += 0.17499721696537904;
        result[4] += 0.013247244795725258;
        result[5] += 0.0010018924635422464;
        result[6] += 0.0013358566180563286;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 0.0016556291390728477;
        result[2] += 0;
        result[3] += 0.9917218543046358;
        result[4] += 0.005298013245033113;
        result[5] += 0.0013245033112582781;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03671071953010279;
        result[3] += 0;
        result[4] += 0.9632892804698973;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420a0000))) ) ) {
        result[0] += 0.9985515992757996;
        result[1] += 0;
        result[2] += 0.001448400724200362;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9996636394214599;
        result[1] += 0;
        result[2] += 0.0002242403856934634;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001121201928467317;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6073168845231649;
        result[1] += 0.0010054915306674916;
        result[2] += 0.006651713202877251;
        result[3] += 0.3309614045943228;
        result[4] += 0.052904323613581855;
        result[5] += 0;
        result[6] += 0.001160182535385567;
      } else {
        result[0] += 0.08200734394124848;
        result[1] += 0.004079967360261119;
        result[2] += 0.014687882496940027;
        result[3] += 0.8763769889840882;
        result[4] += 0.02243982048143615;
        result[5] += 0.00040799673602611185;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.34341637010676157;
        result[4] += 0.6565836298932385;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0013966480446927375;
        result[1] += 0.009776536312849162;
        result[2] += 0;
        result[3] += 0.05027932960893855;
        result[4] += 0.9385474860335196;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.3712190650779102;
        result[1] += 0.01008249312557287;
        result[2] += 0;
        result[3] += 0.618698441796517;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.2767808591625884;
        result[1] += 0.005437737901033171;
        result[2] += 0.0076128330614464385;
        result[3] += 0.5981511691136487;
        result[4] += 0.1120174007612833;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.04704875962360992;
        result[1] += 0;
        result[2] += 0.0051325919589392645;
        result[3] += 0.11377245508982035;
        result[4] += 0.8340461933276304;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
        result[0] += 0.75;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994273060476482;
        result[1] += 0;
        result[2] += 0.0005726939523518632;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.005025125628140704;
        result[1] += 0.005025125628140704;
        result[2] += 0;
        result[3] += 0.23743718592964824;
        result[4] += 0.7525125628140703;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5970898143502258;
        result[1] += 0.0011707643418631879;
        result[2] += 0.006439203880247533;
        result[3] += 0.3830071918381;
        result[4] += 0.010369627027931093;
        result[5] += 0.0005017561465127947;
        result[6] += 0.0014216424151195853;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x40600000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a00000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1111111111111111;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.8888888888888888;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.9992026880801868;
        result[1] += 0;
        result[2] += 0.0007973119198132012;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998855704313995;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011442956860052638;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.019857206604194554;
        result[1] += 0.0071396697902722;
        result[2] += 0.012940651494868362;
        result[3] += 0.786925479696564;
        result[4] += 0.1713520749665328;
        result[5] += 0.00178491744756805;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0054671968190854875;
        result[2] += 0;
        result[3] += 0.1525844930417495;
        result[4] += 0.841948310139165;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9817778872198966;
        result[1] += 0;
        result[2] += 0.005909874415168678;
        result[3] += 0.011204136912090618;
        result[4] += 0;
        result[5] += 0.00012312238364934746;
        result[6] += 0.0009849790691947797;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0015533980582524273;
        result[3] += 0.9984466019417476;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0;
        result[1] += 0.005955334987593052;
        result[2] += 0.008933002481389578;
        result[3] += 0.6471464019851116;
        result[4] += 0.33647642679900747;
        result[5] += 0.001488833746898263;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00027337342810278845;
        result[2] += 0.003827227993439038;
        result[3] += 0.5051940951339531;
        result[4] += 0.4893384363039913;
        result[5] += 0.0013668671405139422;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9966429628560084;
        result[1] += 0.0005775547774609248;
        result[2] += 0.0019131502003393135;
        result[3] += 0.0005775547774609248;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002887773887304624;
      } else {
        result[0] += 0.3046875;
        result[1] += 0.021484375;
        result[2] += 0;
        result[3] += 0.673828125;
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
        result[0] += 0.41758652946679137;
        result[1] += 0;
        result[2] += 0.006735266604303087;
        result[3] += 0.5747427502338635;
        result[4] += 0;
        result[5] += 0.00037418147801683815;
        result[6] += 0.0005612722170252573;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.8246728971962617;
        result[1] += 0;
        result[2] += 0.002691588785046729;
        result[3] += 0.16680373831775702;
        result[4] += 0.005158878504672897;
        result[5] += 0.00022429906542056075;
        result[6] += 0.0004485981308411215;
      } else {
        result[0] += 0.8690129663932259;
        result[1] += 0.0006048463312289722;
        result[2] += 0.0024949911163195107;
        result[3] += 0.11957055910482746;
        result[4] += 0.007938608097380262;
        result[5] += 0.00011340868710543231;
        result[6] += 0.00026462026991267535;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x458d2000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.4;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.382262996941896;
        result[1] += 0;
        result[2] += 0.03363914373088685;
        result[3] += 0.5840978593272171;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13497536945812807;
        result[1] += 0.007881773399014778;
        result[2] += 0;
        result[3] += 0.8571428571428571;
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
        result[0] += 0.010101010101010102;
        result[1] += 0.030303030303030304;
        result[2] += 0;
        result[3] += 0.9595959595959596;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0005326231691078562;
        result[2] += 0.005858854860186418;
        result[3] += 0.7869507323568575;
        result[4] += 0.20505992010652463;
        result[5] += 0.0015978695073235686;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0053106744556558685;
        result[2] += 0;
        result[3] += 0.09240573552841211;
        result[4] += 0.9022835900159321;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.8151658767772512;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1848341232227488;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.003205128205128205;
        result[1] += 0.019230769230769232;
        result[2] += 0;
        result[3] += 0.9775641025641025;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9957574878526362;
        result[1] += 0.0006889549641018203;
        result[2] += 0.0023206904053956054;
        result[3] += 0.0011603452026978027;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.252157516861267e-05;
      } else {
        result[0] += 0.6439024390243903;
        result[1] += 0;
        result[2] += 0.003857061826432218;
        result[3] += 0.35087918321043676;
        result[4] += 0;
        result[5] += 0.00022688598979013047;
        result[6] += 0.0011344299489506524;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0005060728744939272;
        result[1] += 0.004554655870445345;
        result[2] += 0;
        result[3] += 0.736842105263158;
        result[4] += 0.25759109311740896;
        result[5] += 0.0005060728744939272;
        result[6] += 0;
      } else {
        result[0] += 0.6363636363636364;
        result[1] += 0;
        result[2] += 0.02058319039451115;
        result[3] += 0;
        result[4] += 0.34305317324185247;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9977921195652174;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.0022078804347826085;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7920617065723927;
        result[1] += 0;
        result[2] += 0.006106379559697895;
        result[3] += 0.20006427767957577;
        result[4] += 0;
        result[5] += 0.0003213883978788366;
        result[6] += 0.0014462477904547647;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.2723404255319149;
        result[1] += 0.00425531914893617;
        result[2] += 0;
        result[3] += 0.5468085106382978;
        result[4] += 0.17659574468085107;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9290824390649697;
        result[1] += 0.0006655020380999917;
        result[2] += 0.0012478163214374844;
        result[3] += 0.06892105482073038;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.318775476249896e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.23674475955610358;
        result[1] += 0.007809288943690916;
        result[2] += 0.006576243321002877;
        result[3] += 0.6678997122893547;
        result[4] += 0.08055898068228524;
        result[5] += 0.0004110152075626798;
        result[6] += 0;
      } else {
        result[0] += 0.0870026525198939;
        result[1] += 0;
        result[2] += 0.01273209549071618;
        result[3] += 0.1013262599469496;
        result[4] += 0.7978779840848806;
        result[5] += 0.0010610079575596816;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 0.12629325722440243;
        result[1] += 0.0010702818408847663;
        result[2] += 0.004281127363539065;
        result[3] += 0.7788084195504816;
        result[4] += 0.08847663217980735;
        result[5] += 0.0010702818408847663;
        result[6] += 0;
      } else {
        result[0] += 0.9905596763317599;
        result[1] += 0.0005323490790360933;
        result[2] += 0.0018454768073251234;
        result[3] += 0.0068495581502644;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002129396316144373;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0.41129865656217707;
        result[1] += 0;
        result[2] += 0.004305890458146745;
        result[3] += 0.47623148467103;
        result[4] += 0.10816396830864623;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9253486464315013;
        result[1] += 0;
        result[2] += 0.006836204539239814;
        result[3] += 0.059338255400601586;
        result[4] += 0.006562756357670222;
        result[5] += 0.0008203445447087777;
        result[6] += 0.0010937927262783702;
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
        result[0] += 0.1493877551020408;
        result[1] += 0.024489795918367346;
        result[2] += 0;
        result[3] += 0.8261224489795919;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0.007103393843725336;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02999210734017364;
        result[4] += 0.9629044988161011;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2052980132450331;
        result[1] += 0;
        result[2] += 0.033112582781456956;
        result[3] += 0.7615894039735099;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9949672873678913;
        result[1] += 0;
        result[2] += 0.0020130850528434826;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.003019627579265224;
      } else {
        result[0] += 0.9997936527588626;
        result[1] += 0;
        result[2] += 0.000206347241137386;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.745787054768288;
        result[1] += 0.0007659900421294523;
        result[2] += 0.007085407889697434;
        result[3] += 0.22031788586748371;
        result[4] += 0.024320183837610112;
        result[5] += 0.0005744925315970893;
        result[6] += 0.0011489850631941786;
      } else {
        result[0] += 0;
        result[1] += 0.0021569156106767324;
        result[2] += 0.00862766244270693;
        result[3] += 0.8080345106497708;
        result[4] += 0.18064168239417633;
        result[5] += 0.0005392289026691831;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.15445719329214475;
        result[1] += 0.00617828773168579;
        result[2] += 0;
        result[3] += 0.4563106796116505;
        result[4] += 0.383053839364519;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.050175614651279475;
        result[1] += 0.010536879076768691;
        result[2] += 0.002508780732563974;
        result[3] += 0.366783743100853;
        result[4] += 0.5699949824385349;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x439b0000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9947594092424964;
        result[1] += 0;
        result[2] += 0.005240590757503573;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998350923482849;
        result[1] += 0;
        result[2] += 0.0001236807387862797;
        result[3] += 0;
        result[4] += 4.122691292875989e-05;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.5365179949630352;
        result[1] += 0.0010561377853603054;
        result[2] += 0.004630757981964416;
        result[3] += 0.4342351125192948;
        result[4] += 0.022422617596880332;
        result[5] += 0.0004874482086278333;
        result[6] += 0.0006499309448371111;
      } else {
        result[0] += 0.5931263858093127;
        result[1] += 0;
        result[2] += 0.021618625277161862;
        result[3] += 0.0022172949002217295;
        result[4] += 0.37749445676274945;
        result[5] += 0.002771618625277162;
        result[6] += 0.002771618625277162;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.1206896551724138;
        result[1] += 0.0028735632183908046;
        result[2] += 0.0009578544061302681;
        result[3] += 0.5545977011494253;
        result[4] += 0.32088122605363983;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.014861995753715499;
        result[2] += 0;
        result[3] += 0.1029723991507431;
        result[4] += 0.8821656050955414;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41480000))) ) ) {
        result[0] += 0.25;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.75;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008830612791008831;
        result[3] += 0.7915440192667915;
        result[4] += 0.1982873963071983;
        result[5] += 0.001337971635001338;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005832449628844115;
        result[2] += 0;
        result[3] += 0.09437963944856839;
        result[4] += 0.8997879109225875;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.9971719758817565;
        result[1] += 0.00021343578250893763;
        result[2] += 0.0007470252387812817;
        result[3] += 0.001707486260071501;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00016007683688170322;
      } else {
        result[0] += 0.9682819383259912;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03171806167400881;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5401469605878424;
        result[1] += 0.002004008016032064;
        result[2] += 0.00895123580494322;
        result[3] += 0.4486305945223781;
        result[4] += 0;
        result[5] += 0.0001336005344021376;
        result[6] += 0.0001336005344021376;
      } else {
        result[0] += 0.9859357355507649;
        result[1] += 0;
        result[2] += 0.0033877425315676007;
        result[3] += 0.010060568730109845;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006159531875577456;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x45afc400))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9945866141732284;
        result[1] += 0;
        result[2] += 0.0034448818897637795;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001968503937007874;
      } else {
        result[0] += 0.9999172356714257;
        result[1] += 0;
        result[2] += 8.276432857438444e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4635bc00))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
        result[0] += 0.19918612122510174;
        result[1] += 0.0023559648747055045;
        result[2] += 0.005354465624330691;
        result[3] += 0.42835724994645535;
        result[4] += 0.36474619832940675;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7909364884473712;
        result[1] += 0.0018975332068311191;
        result[2] += 0.008036611228931798;
        result[3] += 0.1833910034602076;
        result[4] += 0.014175689251032478;
        result[5] += 0.00044647840160732215;
        result[6] += 0.0011161960040183053;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42600000))) ) ) {
        result[0] += 0;
        result[1] += 0.001675603217158177;
        result[2] += 0;
        result[3] += 0.9929624664879356;
        result[4] += 0.00435656836461126;
        result[5] += 0.0010053619302949062;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03784570596797671;
        result[3] += 0;
        result[4] += 0.9621542940320232;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0.04395604395604396;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9560439560439561;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a40000))) ) ) {
        result[0] += 0.07174887892376682;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9260089686098655;
        result[4] += 0.0018684603886397607;
        result[5] += 0.0003736920777279522;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.013068181818181817;
        result[3] += 0;
        result[4] += 0.9863636363636363;
        result[5] += 0.0005681818181818182;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
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
        result[1] += 0.0023584905660377358;
        result[2] += 0;
        result[3] += 0.9941037735849056;
        result[4] += 0;
        result[5] += 0.003537735849056604;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.999126047749573;
        result[1] += 0;
        result[2] += 0.0006753267389663529;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00019862551146069204;
      } else {
        result[0] += 0.7069467737664401;
        result[1] += 0.0028246094094800953;
        result[2] += 0.00856209727248654;
        result[3] += 0.28069556006708446;
        result[4] += 0;
        result[5] += 0.00017653808809250596;
        result[6] += 0.0007944213964162768;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
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
        result[0] += 0.9993856078642194;
        result[1] += 0;
        result[2] += 0.0004991936103217879;
        result[3] += 0;
        result[4] += 7.679901697258276e-05;
        result[5] += 0;
        result[6] += 3.839950848629138e-05;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9040229885057471;
        result[1] += 0.00210727969348659;
        result[2] += 0.0019157088122605363;
        result[3] += 0.09061302681992338;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013409961685823754;
      } else {
        result[0] += 0.4301966833783263;
        result[1] += 0;
        result[2] += 0.010219822599305824;
        result[3] += 0.5383725414577709;
        result[4] += 0.02024681835711531;
        result[5] += 0;
        result[6] += 0.0009641342074816814;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.0023784355179704017;
        result[1] += 0.003171247357293869;
        result[2] += 0.010306553911205074;
        result[3] += 0.8187103594080338;
        result[4] += 0.16173361522198731;
        result[5] += 0.0036997885835095136;
        result[6] += 0;
      } else {
        result[0] += 0.9891122278056952;
        result[1] += 0;
        result[2] += 0.008375209380234505;
        result[3] += 0.002512562814070352;
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
        result[0] += 0.010380622837370242;
        result[1] += 0.03460207612456748;
        result[2] += 0;
        result[3] += 0.9550173010380623;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.993890977443609;
        result[1] += 0;
        result[2] += 0.003289473684210526;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.002819548872180451;
      } else {
        result[0] += 0.9998348881367126;
        result[1] += 0;
        result[2] += 0.0001238338974655329;
        result[3] += 0;
        result[4] += 4.12779658218443e-05;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.00042069835927639884;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991586032814472;
        result[5] += 0.00042069835927639884;
        result[6] += 0;
      } else {
        result[0] += 0.021379980563654033;
        result[1] += 0.009475218658892129;
        result[2] += 0.017249757045675412;
        result[3] += 0.9506802721088435;
        result[4] += 0;
        result[5] += 0.0012147716229348883;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9822954067104123;
        result[1] += 0;
        result[2] += 0.0060666088894391484;
        result[3] += 0.010647517642689118;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009904667574594528;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00194325689856199;
        result[3] += 0.998056743101438;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.3941814033086138;
        result[1] += 0.004563605248146035;
        result[2] += 0.005704506560182544;
        result[3] += 0.5955504848830576;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.18916666666666668;
        result[1] += 0.009166666666666667;
        result[2] += 0.006666666666666667;
        result[3] += 0.795;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.09704641350210971;
        result[1] += 0.0009376465072667606;
        result[2] += 0.010782934833567747;
        result[3] += 0.6174402250351618;
        result[4] += 0.27097984060009384;
        result[5] += 0.0028129395218002818;
        result[6] += 0;
      } else {
        result[0] += 0.026634382566585957;
        result[1] += 0;
        result[2] += 0.002421307506053269;
        result[3] += 0.3922518159806295;
        result[4] += 0.5786924939467313;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.9377168949771689;
        result[1] += 0.000502283105022831;
        result[2] += 0.0031506849315068495;
        result[3] += 0.05780821917808219;
        result[4] += 0;
        result[5] += 0.00022831050228310502;
        result[6] += 0.000593607305936073;
      } else {
        result[0] += 0.8708895811699551;
        result[1] += 0;
        result[2] += 0.0013153340256143997;
        result[3] += 0.12779508480443064;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0005555555555555557;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9983333333333334;
        result[5] += 0.0011111111111111113;
        result[6] += 0;
      } else {
        result[0] += 0.2451891891891892;
        result[1] += 0.0036756756756756758;
        result[2] += 0.0019459459459459458;
        result[3] += 0.7487567567567568;
        result[4] += 0;
        result[5] += 0.00043243243243243243;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0.09523809523809523;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9047619047619048;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9939451415231981;
        result[1] += 0.0005836008170411438;
        result[2] += 0.0028085789320105047;
        result[3] += 0.0024803034724248615;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018237525532535746;
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
        result[0] += 0.845380749903363;
        result[1] += 0;
        result[2] += 0.008117510630073444;
        result[3] += 0.14031696946269812;
        result[4] += 0.001932740626207963;
        result[5] += 0.0015461925009663702;
        result[6] += 0.002705836876691148;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00779445727482679;
        result[3] += 0.7869515011547344;
        result[4] += 0.20496535796766743;
        result[5] += 0.0002886836027713626;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9848790322580645;
        result[1] += 0;
        result[2] += 0.0002880184331797235;
        result[3] += 0.0146889400921659;
        result[4] += 0;
        result[5] += 0.00014400921658986175;
        result[6] += 0;
      } else {
        result[0] += 0.26011560693641617;
        result[1] += 0;
        result[2] += 0.04238921001926782;
        result[3] += 0.36801541425818884;
        result[4] += 0.32947976878612717;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.00537109375;
        result[1] += 0.00390625;
        result[2] += 0.00146484375;
        result[3] += 0.76220703125;
        result[4] += 0.22607421875;
        result[5] += 0.0009765625;
        result[6] += 0;
      } else {
        result[0] += 0.8181114551083593;
        result[1] += 0;
        result[2] += 0.005030959752321982;
        result[3] += 0.17530959752321984;
        result[4] += 0;
        result[5] += 0.00019349845201238394;
        result[6] += 0.0013544891640866876;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9984335839598998;
        result[1] += 0;
        result[2] += 0.0015664160401002505;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.39338235294117646;
        result[1] += 0.008501838235294117;
        result[2] += 0.012408088235294117;
        result[3] += 0.37063419117647056;
        result[4] += 0.21323529411764705;
        result[5] += 0.0013786764705882354;
        result[6] += 0.00045955882352941176;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.2204356846473029;
        result[1] += 0.0015560165975103733;
        result[2] += 0;
        result[3] += 0.4221991701244813;
        result[4] += 0.3558091286307054;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8620902429618202;
        result[1] += 0;
        result[2] += 0.0005399151561897417;
        result[3] += 0.11762437331276514;
        result[4] += 0.01951407635942923;
        result[5] += 0;
        result[6] += 0.00023139220979560355;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0.1288981288981289;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8309078309078309;
        result[4] += 0.040194040194040194;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.02819237147595357;
        result[1] += 0.006633499170812605;
        result[2] += 0.021558872305140964;
        result[3] += 0;
        result[4] += 0.9386401326699835;
        result[5] += 0.0049751243781094535;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.994392523364486;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.005607476635514018;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0013365410318096768;
        result[2] += 0.002138465650895483;
        result[3] += 0.4993317294840952;
        result[4] += 0.49585672280139004;
        result[5] += 0.0013365410318096768;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 0.9989904655075715;
        result[1] += 0.00011217049915872125;
        result[2] += 0.0005608524957936063;
        result[3] += 0.0003365114974761638;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9937284692165004;
        result[1] += 0;
        result[2] += 0.0001766628389718223;
        result[3] += 0.005829873686070136;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00026499425845773346;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5473343648895765;
        result[1] += 0.002672668448445632;
        result[2] += 0.007314671543114362;
        result[3] += 0.4418342945561964;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008440005626670418;
      } else {
        result[0] += 0.985660530865453;
        result[1] += 0;
        result[2] += 0.002542459066409031;
        result[3] += 0.011390216617512458;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004067934506254449;
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
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9355305001445504;
        result[4] += 0.06418039895923677;
        result[5] += 0.0002891008962127783;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.9529411764705882;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.047058823529411764;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0036714089031665903;
        result[2] += 0.010555300596603947;
        result[3] += 0;
        result[4] += 0.9830197338228546;
        result[5] += 0.0027535566773749425;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x40600000))) ) ) {
        result[0] += 0.999293900385639;
        result[1] += 0;
        result[2] += 0.0005974689044592906;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010863070990168921;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5272429332240886;
        result[1] += 0.00341390140652738;
        result[2] += 0.007237470981838045;
        result[3] += 0.46155947016250176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005462242250443808;
      } else {
        result[0] += 0.9657456040191825;
        result[1] += 0;
        result[2] += 0.006394153916419274;
        result[3] += 0.0269467915049098;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009134505594884678;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x41800000))) ) ) {
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
        result[0] += 0.9986442516268981;
        result[1] += 0;
        result[2] += 0.0013557483731019523;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.01642491467576792;
        result[1] += 0.007252559726962458;
        result[2] += 0.012158703071672355;
        result[3] += 0.8031143344709898;
        result[4] += 0.1601962457337884;
        result[5] += 0.0008532423208191126;
        result[6] += 0;
      } else {
        result[0] += 0.7456831831831832;
        result[1] += 0;
        result[2] += 0.003472222222222222;
        result[3] += 0.2493430930930931;
        result[4] += 0;
        result[5] += 0.00028153153153153153;
        result[6] += 0.00121996996996997;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.003745318352059925;
        result[1] += 0.0149812734082397;
        result[2] += 0;
        result[3] += 0.4943820224719101;
        result[4] += 0.4868913857677903;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02073578595317726;
        result[4] += 0.9792642140468227;
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
        result[0] += 0.9943555973659455;
        result[1] += 0;
        result[2] += 0.0051740357478833494;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00047036688617121356;
      } else {
        result[0] += 0.9998760689056885;
        result[1] += 0;
        result[2] += 0.00012393109431156277;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.6009179710486054;
        result[1] += 0.0051782982229022015;
        result[2] += 0.0037660350712016015;
        result[3] += 0.3627162527951042;
        result[4] += 0.02683299988231141;
        result[5] += 0.00011768859597505005;
        result[6] += 0.0004707543839002002;
      } else {
        result[0] += 0.5811675329868052;
        result[1] += 0;
        result[2] += 0.00819672131147541;
        result[3] += 0.08036785285885646;
        result[4] += 0.3288684526189524;
        result[5] += 0.00019992003198720512;
        result[6] += 0.0011995201919232307;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.0023521505376344087;
        result[2] += 0.006384408602150538;
        result[3] += 0.991263440860215;
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
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0005859947260474657;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.933196601230589;
        result[4] += 0.06533841195429242;
        result[5] += 0.0008789920890711984;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995527728085868;
        result[5] += 0.0004472271914132379;
        result[6] += 0;
      } else {
        result[0] += 0.6612903225806451;
        result[1] += 0.0967741935483871;
        result[2] += 0.1774193548387097;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.06451612903225806;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6847248778415126;
        result[1] += 0;
        result[2] += 0.010197578075207138;
        result[3] += 0.30401529636711283;
        result[4] += 0;
        result[5] += 0.00021244954323348204;
        result[6] += 0.0008497981729339282;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.5068119891008175;
        result[1] += 0.021798365122615803;
        result[2] += 0;
        result[3] += 0.4713896457765668;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.921152575957728;
        result[1] += 0.0010320343461030386;
        result[2] += 0.0019402245706737122;
        result[3] += 0.07566875825627478;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002064068692206077;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.009158557527189469;
        result[1] += 0.006868918145392102;
        result[2] += 0.011448196908986836;
        result[3] += 0.9708070978820836;
        result[4] += 0.0017172295363480255;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9896907216494846;
        result[1] += 0;
        result[2] += 0.010309278350515464;
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
        result[0] += 0.00784313725490196;
        result[1] += 0.0196078431372549;
        result[2] += 0;
        result[3] += 0.9725490196078431;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.1260115606936416;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8728323699421965;
        result[4] += 0;
        result[5] += 0.0011560693641618498;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0186799501867995;
        result[3] += 0;
        result[4] += 0.9800747198007472;
        result[5] += 0.0012453300124533001;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9959384972439803;
        result[1] += 4.8351223285949136e-05;
        result[2] += 0.0004351610095735422;
        result[3] += 0.003577990523160236;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.806941020292054;
        result[1] += 0.0006953663316265252;
        result[2] += 0.004172197989759151;
        result[3] += 0.18717997344964918;
        result[4] += 0;
        result[5] += 0.0003160756052847842;
        result[6] += 0.0006953663316265252;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.3841269841269842;
        result[1] += 0.0037037037037037043;
        result[2] += 0.011640211640211642;
        result[3] += 0.5656084656084657;
        result[4] += 0.03492063492063493;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1382488479262673;
        result[1] += 0.010138248847926268;
        result[2] += 0;
        result[3] += 0.6746543778801843;
        result[4] += 0.17695852534562212;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.024539877300613498;
        result[1] += 0;
        result[2] += 0.004294478527607362;
        result[3] += 0.12269938650306748;
        result[4] += 0.8484662576687116;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9726775956284153;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.0273224043715847;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001244296972210701;
        result[1] += 0;
        result[2] += 0.011613438407299876;
        result[3] += 0.6607216922438822;
        result[4] += 0.32600580671920365;
        result[5] += 0.00041476565740356696;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421e0000))) ) ) {
        result[0] += 0.9615866150694287;
        result[1] += 0.0007398133394035967;
        result[2] += 0.0017072615524698384;
        result[3] += 0.035511040291372635;
        result[4] += 0;
        result[5] += 0.00017072615524698384;
        result[6] += 0.0002845435920783064;
      } else {
        result[0] += 0.8654876741693462;
        result[1] += 0;
        result[2] += 0.0023043944265809216;
        result[3] += 0.13183279742765272;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00037513397642015007;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 0.9803921568627451;
        result[1] += 0;
        result[2] += 0.0196078431372549;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07433945364979848;
        result[1] += 0.010300044782803403;
        result[2] += 0.0008956560680698612;
        result[3] += 0.7948947604120018;
        result[4] += 0.11957008508732647;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42920000))) ) ) {
        result[0] += 0.36578171091445427;
        result[1] += 0;
        result[2] += 0.029498525073746312;
        result[3] += 0.6047197640117994;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.022837370242214532;
        result[4] += 0.9771626297577855;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41880000))) ) ) {
        result[0] += 0.647777400746522;
        result[1] += 0;
        result[2] += 0.010179843909060063;
        result[3] += 0.3030200203596879;
        result[4] += 0.03902273498473024;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8905748302219192;
        result[1] += 0.0004546358650868071;
        result[2] += 0.001989031909754781;
        result[3] += 0.10607223027306568;
        result[4] += 0.00042622112351888166;
        result[5] += 0.0001989031909754781;
        result[6] += 0.0002841474156792545;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43590000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.25;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.75;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.1754010695187166;
        result[1] += 0.0037433155080213902;
        result[2] += 0;
        result[3] += 0.7823529411764706;
        result[4] += 0.038502673796791446;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0336;
        result[1] += 0;
        result[2] += 0.0144;
        result[3] += 0;
        result[4] += 0.9488;
        result[5] += 0.0032;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.8506294658046955;
        result[1] += 0;
        result[2] += 0.00249517976636044;
        result[3] += 0.1466485199047295;
        result[4] += 0;
        result[5] += 0.00011341726210729273;
        result[6] += 0.00011341726210729273;
      } else {
        result[0] += 0.9884603704828424;
        result[1] += 0;
        result[2] += 0.006377163680534467;
        result[3] += 0.0036440935317339812;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0015183723048891589;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0.17261709793645594;
        result[1] += 0.00032754667540124465;
        result[2] += 0.0026203734032099572;
        result[3] += 0.61578774975434;
        result[4] += 0.20733704552898788;
        result[5] += 0.0013101867016049786;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0016638935108153079;
        result[2] += 0;
        result[3] += 0.06156405990016639;
        result[4] += 0.9367720465890182;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.4805194805194805;
        result[1] += 0.04415584415584416;
        result[2] += 0;
        result[3] += 0.4753246753246753;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9196042053184911;
        result[1] += 0.0005772005772005772;
        result[2] += 0.0025149453720882294;
        result[3] += 0.07701504844361987;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002886002886002886;
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
        result[0] += 0.0008873114463176575;
        result[1] += 0.0002957704821058858;
        result[2] += 0;
        result[3] += 0.9251700680272109;
        result[4] += 0.0730553090801538;
        result[5] += 0.0005915409642117716;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991043439319302;
        result[5] += 0.0008956560680698612;
        result[6] += 0;
      } else {
        result[0] += 0.6865671641791046;
        result[1] += 0.09701492537313434;
        result[2] += 0.18656716417910452;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.02985074626865672;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9950568462679189;
        result[1] += 0;
        result[2] += 0.004448838358872961;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004943153732081067;
      } else {
        result[0] += 0.9996579588695541;
        result[1] += 0;
        result[2] += 0.00034204113044593613;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5315919037199125;
        result[1] += 0.004102844638949671;
        result[2] += 0.006291028446389497;
        result[3] += 0.4574671772428884;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005470459518599562;
      } else {
        result[0] += 0.9654541294898192;
        result[1] += 0;
        result[2] += 0.007778540379775795;
        result[3] += 0.02493708533516358;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018302447952413636;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9981067435989902;
        result[1] += 0;
        result[2] += 0.0016227912008654887;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00027046520014424813;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.5099318114438186;
        result[1] += 0.0017047139045360214;
        result[2] += 0.004595315742662319;
        result[3] += 0.4788763711829232;
        result[4] += 0.004372961755114142;
        result[5] += 0.0002223539875481767;
        result[6] += 0.0002964719833975689;
      } else {
        result[0] += 0.6237571951857667;
        result[1] += 0;
        result[2] += 0.027210884353741496;
        result[3] += 0.0015698587127158557;
        result[4] += 0.3464154892726321;
        result[5] += 0.0005232862375719519;
        result[6] += 0.0005232862375719519;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0;
        result[1] += 0.025179856115107917;
        result[2] += 0;
        result[3] += 0.5071942446043166;
        result[4] += 0.4676258992805756;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.01884159106769016;
        result[4] += 0.9811584089323099;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9851116625310173;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.01488833746898263;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0012139605462822456;
        result[1] += 0.0003034901365705614;
        result[2] += 0.0069802731411229115;
        result[3] += 0.7013657056145675;
        result[4] += 0.2880121396054628;
        result[5] += 0.00212443095599393;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.8818318318318318;
        result[1] += 0.0005255255255255255;
        result[2] += 0.00274024024024024;
        result[3] += 0.11471471471471471;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018768768768768769;
      } else {
        result[0] += 0.9881407429187494;
        result[1] += 0;
        result[2] += 0.0022542389493286287;
        result[3] += 0.009408997353719493;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00019602077820248947;
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
        result[0] += 0;
        result[1] += 0.010383386581469648;
        result[2] += 0;
        result[3] += 0.9896166134185304;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9633699633699634;
        result[1] += 0;
        result[2] += 0.03663003663003663;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9664082687338501;
        result[1] += 0;
        result[2] += 0.03359173126614987;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07738095238095238;
        result[1] += 0.005952380952380952;
        result[2] += 0.0018315018315018315;
        result[3] += 0.9148351648351648;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.8369884169884171;
        result[1] += 0;
        result[2] += 0.0033976833976833982;
        result[3] += 0.15559845559845562;
        result[4] += 0.002934362934362935;
        result[5] += 0.00046332046332046335;
        result[6] += 0.0006177606177606179;
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
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.8862908011869437;
        result[1] += 0.0007121661721068251;
        result[2] += 0.0018991097922848668;
        result[3] += 0.10642927794263107;
        result[4] += 0.0042729970326409504;
        result[5] += 7.912957467853612e-05;
        result[6] += 0.00031651829871414446;
      } else {
        result[0] += 0.006060606060606061;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9939393939393939;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0.324531190202832;
        result[1] += 0.006505931879066207;
        result[2] += 0.006505931879066207;
        result[3] += 0.6624569460390356;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0031645569620253164;
        result[1] += 0.0379746835443038;
        result[2] += 0;
        result[3] += 0.20253164556962025;
        result[4] += 0.7563291139240507;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.027808676307007785;
        result[4] += 0.9721913236929922;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11699507389162561;
        result[1] += 0;
        result[2] += 0.007389162561576354;
        result[3] += 0.27955665024630544;
        result[4] += 0.5960591133004927;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.9176765147721583;
        result[1] += 0;
        result[2] += 0.00100150225338007;
        result[3] += 0.07881822734101152;
        result[4] += 0.0022033049574361543;
        result[5] += 0.00020030045067601402;
        result[6] += 0.00010015022533800701;
      } else {
        result[0] += 0.9472548918905039;
        result[1] += 0.0008730933182681938;
        result[2] += 0.0020029787889682097;
        result[3] += 0.04386009963535515;
        result[4] += 0.005649427353500078;
        result[5] += 0.00015407529145909304;
        result[6] += 0.00020543372194545736;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4469488730071468;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5530511269928532;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8198631872308083;
        result[1] += 0;
        result[2] += 0.010640993159361543;
        result[3] += 0.0005067139599695973;
        result[4] += 0.16746896376995188;
        result[5] += 0.0010134279199391946;
        result[6] += 0.0005067139599695973;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.0071823204419889505;
        result[1] += 0.0066298342541436465;
        result[2] += 0.009392265193370166;
        result[3] += 0.9751381215469613;
        result[4] += 0.0016574585635359116;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9926547743966422;
        result[1] += 0;
        result[2] += 0.007345225603357817;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.34085778781038373;
        result[4] += 0.6591422121896162;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007052186177715092;
        result[1] += 0.005641748942172073;
        result[2] += 0;
        result[3] += 0.054301833568406205;
        result[4] += 0.9393511988716502;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0.0024783147459727386;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9975216852540273;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.11354466858789626;
        result[1] += 0.0005763688760806918;
        result[2] += 0.016138328530259368;
        result[3] += 0.8657060518731989;
        result[4] += 0;
        result[5] += 0.004034582132564842;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9925359548516294;
        result[1] += 0.0006189695976697615;
        result[2] += 0.0017476788640087384;
        result[3] += 0.004551247041689423;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005461496450027307;
      } else {
        result[0] += 0.6605028751832225;
        result[1] += 0;
        result[2] += 0.0042845867628819485;
        result[3] += 0.333746758371857;
        result[4] += 0;
        result[5] += 0.0005637614161686774;
        result[6] += 0.0009020182658698838;
      }
    }
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0.0005707762557077625;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994292237442922;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.25255669186305024;
        result[1] += 0.0017785682525566918;
        result[2] += 0.002445531347265451;
        result[3] += 0.742996887505558;
        result[4] += 0;
        result[5] += 0.00022232103156958648;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d30000))) ) ) {
        result[0] += 0.9942690311418686;
        result[1] += 0.0010092272202998848;
        result[2] += 0.0025591118800461364;
        result[3] += 0.001910322952710496;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002523068050749712;
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
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.33765560165975106;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6623443983402489;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8069868995633188;
        result[1] += 0;
        result[2] += 0.03755458515283843;
        result[3] += 0;
        result[4] += 0.15021834061135372;
        result[5] += 0.004366812227074236;
        result[6] += 0.0008733624454148472;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.16345467523197718;
        result[1] += 0;
        result[2] += 0.0007137758743754462;
        result[3] += 0.6645253390435404;
        result[4] += 0.17094932191291937;
        result[5] += 0.0003568879371877231;
        result[6] += 0;
      } else {
        result[0] += 0.9961175818080976;
        result[1] += 0;
        result[2] += 0.0016638935108153079;
        result[3] += 0.0019412090959511925;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00027731558513588466;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.0015669069257286117;
        result[1] += 0.0006267627702914447;
        result[2] += 0.0025070510811657787;
        result[3] += 0.951425885302413;
        result[4] += 0.04136634283923535;
        result[5] += 0.0025070510811657787;
        result[6] += 0;
      } else {
        result[0] += 0.5102328863796753;
        result[1] += 0;
        result[2] += 0.0077628793225123505;
        result[3] += 0;
        result[4] += 0.4820042342978123;
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
        result[1] += 0.087248322147651;
        result[2] += 0;
        result[3] += 0.912751677852349;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.9974035608308606;
        result[1] += 0.000158965663416702;
        result[2] += 0.000423908435777872;
        result[3] += 0.002013565069944892;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.967622571692877;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.032377428307123035;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9570325999308836;
        result[1] += 0.0019582997350535655;
        result[2] += 0.0049533463886649014;
        result[3] += 0.035825365741274054;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00023038820412394888;
      } else {
        result[0] += 0.62703408955933;
        result[1] += 0;
        result[2] += 0.006532842380330205;
        result[3] += 0.36572039434612186;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007126737142178406;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
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
        result[0] += 0.050205761316872426;
        result[1] += 0.00823045267489712;
        result[2] += 0.006584362139917695;
        result[3] += 0.9349794238683128;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.06516643225503985;
        result[1] += 0;
        result[2] += 0.003750586029067042;
        result[3] += 0.6605719643694328;
        result[4] += 0.26863572433192684;
        result[5] += 0.001875293014533521;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0015384615384615385;
        result[2] += 0;
        result[3] += 0.07846153846153846;
        result[4] += 0.92;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.288135593220339;
        result[1] += 0.00897308075772682;
        result[2] += 0;
        result[3] += 0.7028913260219342;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993840468124423;
        result[1] += 0;
        result[2] += 0.0005004619648906683;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001154912226670773;
      } else {
        result[0] += 0.6987346316072871;
        result[1] += 0.0011666517095934668;
        result[2] += 0.00843578928475276;
        result[3] += 0.2900475634927757;
        result[4] += 0;
        result[5] += 0.0004487121959974872;
        result[6] += 0.0011666517095934668;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.05342237061769616;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9207011686143572;
        result[4] += 0.02587646076794658;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.016260162601626018;
        result[2] += 0.027642276422764227;
        result[3] += 0;
        result[4] += 0.9560975609756097;
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
        result[0] += 0.08103347034644745;
        result[1] += 0.002935995302407516;
        result[2] += 0.009982384028185555;
        result[3] += 0.904286553141515;
        result[4] += 0;
        result[5] += 0.0017615971814445098;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9582575298160502;
        result[1] += 0;
        result[2] += 0.0009096422073984233;
        result[3] += 0.040731756620173844;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010107135637760258;
      } else {
        result[0] += 0.547808764940239;
        result[1] += 0;
        result[2] += 0.009628154050464808;
        result[3] += 0.43725099601593626;
        result[4] += 0;
        result[5] += 0.0013280212483399733;
        result[6] += 0.00398406374501992;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.999164624638004;
        result[1] += 0;
        result[2] += 0.0007796836711962575;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.569169079973268e-05;
      } else {
        result[0] += 0.6622633800898815;
        result[1] += 0.004085523627944981;
        result[2] += 0.008307231376821463;
        result[3] += 0.32507149666348906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00027236824186299875;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      result[0] += 1;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 0;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
        result[0] += 0;
        result[1] += 0.008310249307479225;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9916897506925207;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00020420665713702266;
        result[2] += 0.005717786399836635;
        result[3] += 0.6271186440677966;
        result[4] += 0.36593832958954464;
        result[5] += 0.0010210332856851133;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9962000579038793;
        result[1] += 0.0008323682686740009;
        result[2] += 0.00231615518239722;
        result[3] += 0.00036189924724956566;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002895193977996525;
      } else {
        result[0] += 0.025454545454545455;
        result[1] += 0.02909090909090909;
        result[2] += 0;
        result[3] += 0.9454545454545454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4571183533447684;
        result[1] += 0;
        result[2] += 0.0008576329331046312;
        result[3] += 0.5420240137221269;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9843148860609648;
        result[1] += 0;
        result[2] += 0.013021604024859428;
        result[3] += 0.0008878366380585973;
        result[4] += 0;
        result[5] += 0.0005918910920390649;
        result[6] += 0.0011837821840781299;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ) ^ (0b1 << 31))>((int)(0x41780000))) ) ) {
        result[0] += 0.058823529411764705;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9411764705882353;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9995751911639762;
        result[5] += 0.0004248088360237893;
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
        result[1] += 0.0025252525252525255;
        result[2] += 0.007891414141414142;
        result[3] += 0.9880050505050505;
        result[4] += 0;
        result[5] += 0.0015782828282828283;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.9974398361495136;
        result[1] += 0;
        result[2] += 0.0015360983102918587;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0010240655401945725;
      } else {
        result[0] += 0.9997472620050548;
        result[1] += 0;
        result[2] += 0.0002527379949452401;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9433117851815018;
        result[1] += 0.003149345267694348;
        result[2] += 0.0074589756340129295;
        result[3] += 0.044919608818166756;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011602850986242336;
      } else {
        result[0] += 0.4261026102610261;
        result[1] += 0;
        result[2] += 0.007380738073807381;
        result[3] += 0.5650765076507651;
        result[4] += 0;
        result[5] += 0.00036003600360036;
        result[6] += 0.00108010801080108;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.01904761904761905;
        result[1] += 0.031746031746031744;
        result[2] += 0;
        result[3] += 0.0761904761904762;
        result[4] += 0.873015873015873;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.31157154026583267;
        result[1] += 0.003909304143862392;
        result[2] += 0.007427677873338546;
        result[3] += 0.6759186864738077;
        result[4] += 0.0011727912431587178;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a80000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.02661826981246219;
        result[1] += 0;
        result[2] += 0.003629764065335753;
        result[3] += 0.14337568058076225;
        result[4] += 0.8263762855414398;
        result[5] += 0;
        result[6] += 0;
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
        result[0] += 0.9990862016448371;
        result[1] += 0;
        result[2] += 0.0007234236978373438;
        result[3] += 0;
        result[4] += 3.8074931465123364e-05;
        result[5] += 0;
        result[6] += 0.00015229972586049346;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.002280501710376283;
        result[1] += 0.004561003420752566;
        result[2] += 0;
        result[3] += 0.24401368301026224;
        result[4] += 0.7468643101482326;
        result[5] += 0.002280501710376283;
        result[6] += 0;
      } else {
        result[0] += 0.6070396191123959;
        result[1] += 0.001190273762965482;
        result[2] += 0.00824689678626084;
        result[3] += 0.3704301989457575;
        result[4] += 0.011902737629654821;
        result[5] += 0.0004250977724876722;
        result[6] += 0.0007651759904778099;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1998919502971367;
        result[1] += 0.0037817396002160996;
        result[2] += 0.008103727714748784;
        result[3] += 0.7876823338735819;
        result[4] += 0;
        result[5] += 0.0005402485143165856;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9968205240653437;
        result[1] += 0;
        result[2] += 0.0013156452143405328;
        result[3] += 0.0017541936191207105;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001096371011950444;
      } else {
        result[0] += 0.569490403706155;
        result[1] += 0;
        result[2] += 0.008603573792190605;
        result[3] += 0.4209133024487095;
        result[4] += 0;
        result[5] += 0.0003309066843150232;
        result[6] += 0.0006618133686300464;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.999343760253746;
        result[1] += 0;
        result[2] += 0.0004374931641693099;
        result[3] += 0;
        result[4] += 0.00010937329104232747;
        result[5] += 0;
        result[6] += 0.00010937329104232747;
      } else {
        result[0] += 0.5482594015601352;
        result[1] += 0.00116427989288625;
        result[2] += 0.008266387239492376;
        result[3] += 0.3675631621841891;
        result[4] += 0.07393177319827687;
        result[5] += 0.000116427989288625;
        result[6] += 0.00069856793573175;
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
        result[0] += 0.1277330264672037;
        result[1] += 0.01380897583429229;
        result[2] += 0.010356731875719217;
        result[3] += 0.8481012658227848;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0016420361247947454;
        result[1] += 0.0003284072249589491;
        result[2] += 0.00361247947454844;
        result[3] += 0.9714285714285714;
        result[4] += 0.020689655172413793;
        result[5] += 0.0022988505747126436;
        result[6] += 0;
      } else {
        result[0] += 0.5145631067961165;
        result[1] += 0;
        result[2] += 0.013176144244105409;
        result[3] += 0;
        result[4] += 0.4722607489597781;
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
        result[1] += 0.06842105263157895;
        result[2] += 0;
        result[3] += 0.9315789473684211;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.9987141668557598;
        result[1] += 0.0003781862188941835;
        result[2] += 0.0006807351940095302;
        result[3] += 7.56372437788367e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001512744875576734;
      } else {
        result[0] += 0.9901756475141411;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.009824352485858886;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9989468141126909;
        result[1] += 0;
        result[2] += 0.00105318588730911;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6988834612700628;
        result[1] += 0.0011339846475924634;
        result[2] += 0.008548499651081646;
        result[3] += 0.2900383810188416;
        result[4] += 0;
        result[5] += 0.00026168876482903;
        result[6] += 0.0011339846475924634;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.11619365609348917;
        result[1] += 0.00033388981636060105;
        result[2] += 0;
        result[3] += 0.8814691151919868;
        result[4] += 0.0010016694490818032;
        result[5] += 0.0010016694490818032;
        result[6] += 0;
      } else {
        result[0] += 0.002607561929595828;
        result[1] += 0;
        result[2] += 0.020860495436766623;
        result[3] += 0;
        result[4] += 0.9674054758800521;
        result[5] += 0.009126466753585397;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429d0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7766990291262136;
        result[4] += 0.22330097087378642;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.00771055753262159;
        result[2] += 0;
        result[3] += 0.00830367734282325;
        result[4] += 0.9839857651245552;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.9970203868269734;
        result[1] += 5.227391531625719e-05;
        result[2] += 0.0007841087297438578;
        result[3] += 0.0019864087820177733;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015682174594877155;
      } else {
        result[0] += 0.9677716390423573;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.03222836095764273;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.8176153892686467;
        result[1] += 0.0004839392656221644;
        result[2] += 0.004234468574193939;
        result[3] += 0.17669832436029279;
        result[4] += 0;
        result[5] += 0.0001209848164055411;
        result[6] += 0.0008468937148387877;
      } else {
        result[0] += 0.16014558689717925;
        result[1] += 0.012738853503184714;
        result[2] += 0.01637852593266606;
        result[3] += 0.8107370336669699;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
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
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9993934715483017;
        result[1] += 0;
        result[2] += 0.0004962505513895015;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00011027790030877812;
      }
    }
  } else {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6143698468786809;
        result[1] += 0.0009422850412249707;
        result[2] += 0.006910090302316451;
        result[3] += 0.32540243423635656;
        result[4] += 0.05111896348645466;
        result[5] += 0.000706713780918728;
        result[6] += 0.0005496662740478996;
      } else {
        result[0] += 0.07014746911119968;
        result[1] += 0.0031885213232363493;
        result[2] += 0.01315265045834994;
        result[3] += 0.8935831008369869;
        result[4] += 0.019529693104822637;
        result[5] += 0.00039856516540454366;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007704160246533128;
        result[1] += 0.00847457627118644;
        result[2] += 0;
        result[3] += 0.21956856702619415;
        result[4] += 0.7711864406779662;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0006303183107469272;
        result[1] += 0.0003151591553734636;
        result[2] += 0.0034667507091080997;
        result[3] += 0.9514654900724866;
        result[4] += 0.041916167664670656;
        result[5] += 0.002206114087614245;
        result[6] += 0;
      } else {
        result[0] += 0.5164681149264191;
        result[1] += 0;
        result[2] += 0.009110021023125438;
        result[3] += 0;
        result[4] += 0.4744218640504555;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0.010030090270812437;
        result[2] += 0;
        result[3] += 0.13941825476429287;
        result[4] += 0.8505516549648947;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
        result[0] += 0.9978990020259622;
        result[1] += 0.0003001425677196668;
        result[2] += 0.0012005702708786671;
        result[3] += 0.00037517820964958344;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022510692578975007;
      } else {
        result[0] += 0.9900297619047619;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.009970238095238095;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5383989145183176;
        result[1] += 0.003256445047489824;
        result[2] += 0.007734056987788332;
        result[3] += 0.44979647218453195;
        result[4] += 0;
        result[5] += 0.00013568521031207602;
        result[6] += 0.00067842605156038;
      } else {
        result[0] += 0.9859387923904053;
        result[1] += 0;
        result[2] += 0.002791563275434243;
        result[3] += 0.01054590570719603;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007237386269644334;
      }
    }
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x459b9800))) ) ) {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44aee000))) ) ) {
        result[0] += 0.9994259252171916;
        result[1] += 0;
        result[2] += 0.0004975314784339239;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.654330437444984e-05;
      } else {
        result[0] += 0.75;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.25;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 0.17820846135665327;
        result[1] += 0.0030725596785629874;
        result[2] += 0.003781611912077523;
        result[3] += 0.46088395178444813;
        result[4] += 0.3540534152682581;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7855247797941208;
        result[1] += 0.0013796030988008068;
        result[2] += 0.0072163854398811424;
        result[3] += 0.1792422795288125;
        result[4] += 0.02600021224663059;
        result[5] += 0.00031836994587710926;
        result[6] += 0.00031836994587710926;
      }
    } else {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.0013240648791790798;
        result[2] += 0.0029791459781529296;
        result[3] += 0.995696789142668;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01749271137026239;
        result[3] += 0;
        result[4] += 0.9795918367346939;
        result[5] += 0.0029154518950437317;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42360000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9832976445396145;
        result[1] += 0;
        result[2] += 0.00028551034975017847;
        result[3] += 0.01641684511063526;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.272;
        result[1] += 0;
        result[2] += 0.03;
        result[3] += 0.358;
        result[4] += 0.34;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.13656783468104222;
        result[1] += 0.008086253369272238;
        result[2] += 0;
        result[3] += 0.5624438454627134;
        result[4] += 0.29290206648697215;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6665572694453561;
        result[1] += 0;
        result[2] += 0.00426649163111257;
        result[3] += 0.3070233016081392;
        result[4] += 0.021168362323596982;
        result[5] += 0.00016409583196586806;
        result[6] += 0.0008204791598293403;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
        result[0] += 0.3342526199669057;
        result[1] += 0.007722007722007722;
        result[2] += 0.013789299503585218;
        result[3] += 0.6425813568670712;
        result[4] += 0.001654715940430226;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0008019246190858059;
        result[2] += 0;
        result[3] += 0.09141940657578188;
        result[4] += 0.9077786688051324;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.8894394672163641;
        result[1] += 0.0008721160707206851;
        result[2] += 0.002219931816379926;
        result[3] += 0.10239435503052408;
        result[4] += 0.004796638388963768;
        result[5] += 0.00015856655831285186;
        result[6] += 0.00011892491873463888;
      } else {
        result[0] += 0.00796812749003984;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9920318725099602;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
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
        result[0] += 0.9995044598612488;
        result[1] += 0;
        result[2] += 0.0004574216665396051;
        result[3] += 0;
        result[4] += 3.811847221163376e-05;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.001101321585903084;
        result[1] += 0.001101321585903084;
        result[2] += 0;
        result[3] += 0.2312775330396476;
        result[4] += 0.7643171806167401;
        result[5] += 0.002202643171806168;
        result[6] += 0;
      } else {
        result[0] += 0.5837666742030297;
        result[1] += 0.0005275454065867813;
        result[2] += 0.009721908207099256;
        result[3] += 0.38427914688371395;
        result[4] += 0.020574270856884472;
        result[5] += 0.0005275454065867813;
        result[6] += 0.0006029090360991787;
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
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.014937106918238994;
        result[2] += 0.0031446540880503146;
        result[3] += 0.9819182389937107;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9614147909967846;
        result[1] += 0;
        result[2] += 0.03858520900321544;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
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
        result[1] += 0.0030627871362940277;
        result[2] += 0.00408371618172537;
        result[3] += 0.6462480857580398;
        result[4] += 0.34558448187850943;
        result[5] += 0.0010209290454313426;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.20955882352941177;
        result[1] += 0;
        result[2] += 0.004493464052287581;
        result[3] += 0.7839052287581699;
        result[4] += 0;
        result[5] += 0.002042483660130719;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9972388172096993;
        result[1] += 0;
        result[2] += 0.0006526432049801697;
        result[3] += 0.001957929614940509;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00015060997038003916;
      } else {
        result[0] += 0.18604651162790697;
        result[1] += 0.046511627906976744;
        result[2] += 0;
        result[3] += 0.7674418604651163;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x422c0000))) ) ) {
        result[0] += 0.8875808840726592;
        result[1] += 0.0021828954548998207;
        result[2] += 0.006938489124503002;
        result[3] += 0.10236220472440945;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009355266235284946;
      } else {
        result[0] += 0.5010309278350515;
        result[1] += 0;
        result[2] += 0.003665521191294387;
        result[3] += 0.4953035509736541;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0008849557522123895;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9356932153392331;
        result[4] += 0.06312684365781712;
        result[5] += 0.0002949852507374632;
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
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.86;
        result[1] += 0;
        result[2] += 0.07;
        result[3] += 0;
        result[4] += 0.07;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007426823940585408;
        result[2] += 0.0030581039755351682;
        result[3] += 0;
        result[4] += 0.9886413280908694;
        result[5] += 0.0008737439930100481;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.9715639810426541;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02843601895734597;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2804642166344294;
        result[1] += 0.02321083172147002;
        result[2] += 0;
        result[3] += 0.6963249516441006;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9957705910234441;
        result[1] += 0.0006927480220220952;
        result[2] += 0.002041783643854596;
        result[3] += 0.0012031939329857442;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002916833776935137;
      } else {
        result[0] += 0.6559333483449673;
        result[1] += 0;
        result[2] += 0.003152443143436163;
        result[3] += 0.3404638594911056;
        result[4] += 0;
        result[5] += 0.00011258725512272011;
        result[6] += 0.00033776176536816035;
      }
    }
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0.20280082987551867;
        result[1] += 0.0005186721991701245;
        result[2] += 0;
        result[3] += 0.7946058091286307;
        result[4] += 0.001037344398340249;
        result[5] += 0.001037344398340249;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.03341584158415842;
        result[3] += 0;
        result[4] += 0.9628712871287128;
        result[5] += 0.0037128712871287127;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0;
        result[1] += 0.006230529595015576;
        result[2] += 0;
        result[3] += 0.10799584631360332;
        result[4] += 0.885773624091381;
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
    if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42260000))) ) ) {
        result[0] += 0.9982946793997272;
        result[1] += 0.00011368804001819008;
        result[2] += 0.0003979081400636653;
        result[3] += 0.001136880400181901;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.684402000909504e-05;
      } else {
        result[0] += 0.9850402761795167;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.014959723820483314;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9596689590861406;
        result[1] += 0.0018650192330108403;
        result[2] += 0.005595057699032522;
        result[3] += 0.032288145471500176;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005828185103158877;
      } else {
        result[0] += 0.6233009708737864;
        result[1] += 0;
        result[2] += 0.005097087378640777;
        result[3] += 0.3703883495145631;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012135922330097086;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.021052631578947368;
        result[1] += 0.12631578947368421;
        result[2] += 0;
        result[3] += 0.8526315789473684;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.31689901394083647;
        result[1] += 0.005440326419585175;
        result[2] += 0.007480448826929616;
        result[3] += 0.6701802108126488;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.003510825043885313;
        result[1] += 0.0011702750146284377;
        result[2] += 0.004681100058513751;
        result[3] += 0.9075482738443534;
        result[4] += 0.07957870099473376;
        result[5] += 0.003510825043885313;
        result[6] += 0;
      } else {
        result[0] += 0.23382519863791146;
        result[1] += 0;
        result[2] += 0.0170261066969353;
        result[3] += 0;
        result[4] += 0.7491486946651532;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.8922822946760215;
        result[1] += 0;
        result[2] += 0.0030540652084193147;
        result[3] += 0.10408584399504746;
        result[4] += 0;
        result[5] += 8.254230293025175e-05;
        result[6] += 0.0004952538175815105;
      } else {
        result[0] += 0.9217496154006071;
        result[1] += 0.0006236746912810278;
        result[2] += 0.0017047108228348093;
        result[3] += 0.07563095089601264;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00029104818926447965;
      }
    }
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a20000))) ) ) {
      if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x424c0000))) ) ) {
        result[0] += 0.9783989834815756;
        result[1] += 0;
        result[2] += 0.021601016518424398;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0790413054563998;
        result[1] += 0.0025497195308516064;
        result[2] += 0.0030596634370219276;
        result[3] += 0.914329423763386;
        result[4] += 0.0010198878123406426;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41b80000))) ) ) {
        result[0] += 0.0009578544061302681;
        result[1] += 0.013409961685823755;
        result[2] += 0;
        result[3] += 0.23275862068965517;
        result[4] += 0.7528735632183908;
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
    if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
        result[0] += 0.09735888140859658;
        result[1] += 0;
        result[2] += 0.01294665976178146;
        result[3] += 0.8120145002589332;
        result[4] += 0.07612635939927499;
        result[5] += 0.0015535991714137752;
        result[6] += 0;
      } else {
        result[0] += 0.9127762773521468;
        result[1] += 0.0004685002480295431;
        result[2] += 0.00242517775450587;
        result[3] += 0.0840820151022433;
        result[4] += 0;
        result[5] += 2.7558838119384888e-05;
        result[6] += 0.0002204707049550791;
      }
    } else {
      if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x44d9c000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.3333333333333333;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.6666666666666666;
        result[5] += 0;
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
    

    FILE* file = fopen("./codegen/dataset_148/split_4/test_data.csv", "r");
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
