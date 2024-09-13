
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
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ) ^ (0b1 << 31))>((int)(0x43320000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.9423929098966026;
        result[4] += 0.05760709010339734;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003168854685377999;
        result[2] += 0.011317338162064282;
        result[3] += 0;
        result[4] += 0.98415572657311;
        result[5] += 0.001358080579447714;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.622792937399679;
        result[1] += 0.0032102728731942215;
        result[2] += 0.004815409309791332;
        result[3] += 0.36918138041733545;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9952852600416652;
        result[1] += 0.0006944190636307152;
        result[2] += 0.0019005153320419575;
        result[3] += 0.0017908702167318447;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003289353459303388;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0.5931095184207218;
        result[1] += 0;
        result[2] += 0.004400855023261662;
        result[3] += 0.4017351942663146;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007544322897019992;
      } else {
        result[0] += 0.989516129032258;
        result[1] += 0;
        result[2] += 0.010483870967741936;
        result[3] += 0;
        result[4] += 0;
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
        result[0] += 0.9982763313072667;
        result[1] += 0;
        result[2] += 0.0015422298829719677;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018143880976140796;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.007547169811320756;
        result[1] += 0.0033542976939203357;
        result[2] += 0.01467505241090147;
        result[3] += 0.6918238993710693;
        result[4] += 0.2825995807127883;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.015775841770661644;
        result[1] += 0.00588650812338121;
        result[2] += 0.008005651047798447;
        result[3] += 0.5375559218271722;
        result[4] += 0.4315987756063103;
        result[5] += 0.0011773016246762421;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0.9917480633209835;
        result[1] += 0;
        result[2] += 0.007578309195015157;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006736274840013472;
      } else {
        result[0] += 0.4189932318104907;
        result[1] += 0;
        result[2] += 0.004653130287648054;
        result[3] += 0.5750846023688664;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012690355329949238;
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
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9968340117593849;
        result[1] += 0;
        result[2] += 0.0027137042062415195;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004522840343735866;
      } else {
        result[0] += 0.9997486068630327;
        result[1] += 0;
        result[2] += 0.0002513931369673608;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.015636363636363636;
        result[1] += 0.0061818181818181816;
        result[2] += 0.0076363636363636364;
        result[3] += 0.6398181818181818;
        result[4] += 0.33036363636363636;
        result[5] += 0.0003636363636363636;
        result[6] += 0;
      } else {
        result[0] += 0.9789060583762571;
        result[1] += 0;
        result[2] += 0.005028207014961982;
        result[3] += 0.014594064262938435;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014716703458425313;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0.000667334000667334;
        result[2] += 0.005005005005005005;
        result[3] += 0.9943276609943277;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.011703511053315995;
        result[3] += 0;
        result[4] += 0.9856957087126138;
        result[5] += 0.002600780234070221;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
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
        result[1] += 0.0002944640753828033;
        result[2] += 0;
        result[3] += 0.9269729093050648;
        result[4] += 0.07273262661955242;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9991119005328597;
        result[5] += 0.0008880994671403197;
        result[6] += 0;
      } else {
        result[0] += 0.7278911564625851;
        result[1] += 0.07482993197278912;
        result[2] += 0.17687074829931973;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0.02040816326530612;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x46426200))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9864826102545716;
        result[1] += 0.0007171029042667624;
        result[2] += 0.0017927572606669059;
        result[3] += 0.010792398709214774;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002151308712800287;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x426e0000))) ) ) {
        result[0] += 0.46480822459470145;
        result[1] += 0;
        result[2] += 0.00276789244760775;
        result[3] += 0.5324238829576908;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8748159057437408;
        result[1] += 0;
        result[2] += 0.008345606283750613;
        result[3] += 0.11462935689739813;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0022091310751104565;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.983520105471325;
        result[1] += 9.417082587814295e-05;
        result[2] += 0.000894622845842358;
        result[3] += 0.015255673792259158;
        result[4] += 0.00014125623881721443;
        result[5] += 4.7085412939071474e-05;
        result[6] += 4.7085412939071474e-05;
      } else {
        result[0] += 0.0045385779122541605;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9954614220877458;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.7287466347591982;
        result[1] += 0.0005384385282680227;
        result[2] += 0.004068202213580615;
        result[3] += 0.2650314089141489;
        result[4] += 0.0005384385282680227;
        result[5] += 0.000598265031408914;
        result[6] += 0.00047861202512713123;
      } else {
        result[0] += 0.6036131774707758;
        result[1] += 0;
        result[2] += 0.009564293304994687;
        result[3] += 0.2603613177470776;
        result[4] += 0.12646121147715197;
        result[5] += 0;
        result[6] += 0;
      }
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0.011532125205930808;
        result[2] += 0.0016474464579901153;
        result[3] += 0.9868204283360791;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9642857142857143;
        result[1] += 0;
        result[2] += 0.03571428571428571;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0.1936629336246927;
        result[1] += 0.0010925976509150504;
        result[2] += 0.0016388964763725759;
        result[3] += 0.8008740781207321;
        result[4] += 0.0019120458891013384;
        result[5] += 0.0008194482381862879;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0048543689320388345;
        result[2] += 0;
        result[3] += 0.12718446601941746;
        result[4] += 0.8679611650485437;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.39072847682119205;
        result[1] += 0.011037527593818985;
        result[2] += 0;
        result[3] += 0.5982339955849889;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9946965870553431;
        result[1] += 0.000613319864348077;
        result[2] += 0.0026336676527888014;
        result[3] += 0.001984270149361426;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.21552781585973e-05;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.23949782713664897;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7605021728633511;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6024744486282947;
        result[1] += 0;
        result[2] += 0.027972027972027965;
        result[3] += 0.0021516944593867665;
        result[4] += 0.3620225927918235;
        result[5] += 0.0026896180742334583;
        result[6] += 0.0026896180742334583;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x43260000))) ) ) {
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
        result[0] += 0;
        result[1] += 0.0005865102639296188;
        result[2] += 0;
        result[3] += 0.9325513196480938;
        result[4] += 0.06627565982404691;
        result[5] += 0.0005865102639296188;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0036680421824850985;
        result[2] += 0.011004126547455296;
        result[3] += 0;
        result[4] += 0.9834938101788171;
        result[5] += 0.0018340210912425492;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41d40000))) ) ) {
        result[0] += 0.6150375939849624;
        result[1] += 0.004511278195488722;
        result[2] += 0;
        result[3] += 0.3804511278195489;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.996139558598587;
        result[1] += 0.0005098696190545561;
        result[2] += 0.0017117051496831526;
        result[3] += 0.0014203510816519777;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021851555102338118;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.44001399090591115;
        result[1] += 0;
        result[2] += 0.0017488632388947185;
        result[3] += 0.5582371458551941;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.989451476793249;
        result[1] += 0;
        result[2] += 0.007836045810729355;
        result[3] += 0.0015069318866787222;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0012055455093429777;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40f00000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42640000))) ) ) {
        result[0] += 0.975;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.025;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6133333333333333;
        result[4] += 0.38666666666666666;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 0.13321234119782216;
        result[1] += 0.0018148820326678767;
        result[2] += 0.0016333938294010892;
        result[3] += 0.5495462794918331;
        result[4] += 0.3123411978221416;
        result[5] += 0.0014519056261343014;
        result[6] += 0;
      } else {
        result[0] += 0.9850756751062261;
        result[1] += 0.0006320890543245427;
        result[2] += 0.0029848649787547845;
        result[3] += 0.011166906626400254;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001404642342943428;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.16436874831035417;
        result[1] += 0;
        result[2] += 0.005136523384698568;
        result[3] += 0.8277912949445797;
        result[4] += 0.002162746688294134;
        result[5] += 0.0005406866720735335;
        result[6] += 0;
      } else {
        result[0] += 0.9944289693593314;
        result[1] += 0;
        result[2] += 0.0031834460803820135;
        result[3] += 0.0015917230401910067;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007958615200955034;
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
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x41080000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x41200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6911764705882353;
        result[4] += 0.3088235294117647;
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
        result[0] += 0.1282005048683736;
        result[1] += 0.0019834114677244855;
        result[2] += 0.0021637216011539846;
        result[3] += 0.560764514965741;
        result[4] += 0.3063469166967183;
        result[5] += 0.0005409304002884962;
        result[6] += 0;
      } else {
        result[0] += 0.9846604132872558;
        result[1] += 0.0005994781014175894;
        result[2] += 0.002856336836166161;
        result[3] += 0.011742718104238662;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014105367092178575;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.31511936339522545;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6848806366047745;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.48518518518518516;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.5148148148148148;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.027624309392265192;
        result[3] += 0;
        result[4] += 0.9696132596685083;
        result[5] += 0.0027624309392265192;
        result[6] += 0;
      } else {
        result[0] += 0.9913458669054014;
        result[1] += 0;
        result[2] += 0.006565204416592062;
        result[3] += 0.0017905102954341987;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002984183825723665;
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
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9956813819577736;
        result[1] += 0;
        result[2] += 0.004318618042226488;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9997929006337241;
        result[1] += 0;
        result[2] += 0.0002070993662759392;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b30000))) ) ) {
        result[0] += 0.5395530329904221;
        result[1] += 0;
        result[2] += 0.010642071656615822;
        result[3] += 0.40067399787158564;
        result[4] += 0.04717985101099681;
        result[5] += 0.000709471443774388;
        result[6] += 0.0012415750266051792;
      } else {
        result[0] += 0.10146341463414635;
        result[1] += 0.005853658536585366;
        result[2] += 0;
        result[3] += 0.4897560975609756;
        result[4] += 0.4029268292682927;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5509510869565218;
        result[1] += 0.002264492753623189;
        result[2] += 0.007812500000000002;
        result[3] += 0.43772644927536236;
        result[4] += 0;
        result[5] += 0.0006793478260869566;
        result[6] += 0.0005661231884057972;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3f800000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.01384083044982699;
        result[1] += 0.002306805074971165;
        result[2] += 0.00980392156862745;
        result[3] += 0.9740484429065744;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.005263157894736842;
        result[1] += 0.05263157894736842;
        result[2] += 0;
        result[3] += 0.9421052631578948;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0.866933867735471;
        result[1] += 0.0011222444889779559;
        result[2] += 0.001843687374749499;
        result[3] += 0.12929859719438877;
        result[4] += 0.0004008016032064128;
        result[5] += 0.00016032064128256512;
        result[6] += 0.0002404809619238477;
      } else {
        result[0] += 0.9802201582387341;
        result[1] += 5.733287467033597e-05;
        result[2] += 0.0025799793601651187;
        result[3] += 0.005102625845659901;
        result[4] += 0.011982570806100218;
        result[5] += 5.733287467033597e-05;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.6470319634703197;
        result[1] += 0;
        result[2] += 0.006278538812785388;
        result[3] += 0.3452054794520548;
        result[4] += 0.0005707762557077625;
        result[5] += 0.00034246575342465754;
        result[6] += 0.0005707762557077625;
      } else {
        result[0] += 0.0014992503748125937;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9985007496251874;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9992453969212194;
        result[1] += 0;
        result[2] += 0.0007168729248415333;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 3.773015393902807e-05;
      } else {
        result[0] += 0.5723109370292256;
        result[1] += 0.0015818017475143116;
        result[2] += 0.007607713166616451;
        result[3] += 0.39673094305513706;
        result[4] += 0.020488098824947273;
        result[5] += 0.00030129557095510696;
        result[6] += 0.0009792106056040976;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41b80000))) ) ) {
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
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0;
        result[1] += 0.01848998459167951;
        result[2] += 0;
        result[3] += 0.03543913713405239;
        result[4] += 0.9460708782742681;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.24203821656050956;
        result[4] += 0.7579617834394905;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.20579494799405645;
        result[1] += 0.007429420505200594;
        result[2] += 0.007429420505200594;
        result[3] += 0.7793462109955424;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.10983981693363844;
        result[4] += 0.8901601830663616;
        result[5] += 0;
        result[6] += 0;
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42120000))) ) ) {
        result[0] += 0.9993828793088249;
        result[1] += 0;
        result[2] += 0.0006171206911751741;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998665064744361;
        result[1] += 0;
        result[2] += 6.674676278200508e-05;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 6.674676278200508e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.01740088105726872;
        result[1] += 0.005947136563876652;
        result[2] += 0.014757709251101321;
        result[3] += 0.8037444933920704;
        result[4] += 0.1568281938325991;
        result[5] += 0.0013215859030837004;
        result[6] += 0;
      } else {
        result[0] += 0.7425592417061612;
        result[1] += 0;
        result[2] += 0.005781990521327014;
        result[3] += 0.2508056872037915;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0008530805687203792;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.001519756838905775;
        result[1] += 0.010638297872340425;
        result[2] += 0;
        result[3] += 0.24772036474164133;
        result[4] += 0.7401215805471124;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0021037868162692847;
        result[2] += 0;
        result[3] += 0.09046283309957924;
        result[4] += 0.9074333800841514;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42400000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
        result[0] += 0.0007258649891120251;
        result[1] += 0.00024195499637067505;
        result[2] += 0.0019356399709654004;
        result[3] += 0.779578998306315;
        result[4] += 0.21485603677715945;
        result[5] += 0.0026615049600774254;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.014084507042253521;
        result[2] += 0;
        result[3] += 0.0021668472372697724;
        result[4] += 0.9837486457204767;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
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
        result[2] += 0.019363762102351315;
        result[3] += 0;
        result[4] += 0.9806362378976486;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.4096638655462185;
        result[1] += 0.01680672268907563;
        result[2] += 0;
        result[3] += 0.5735294117647058;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9967211920288536;
        result[1] += 0.0004371743961528653;
        result[2] += 0.0022587343801231375;
        result[3] += 0.00018215599839702722;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00040074319647345985;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.45334434351775393;
        result[1] += 0;
        result[2] += 0.002890173410404624;
        result[3] += 0.5437654830718415;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8635389378423435;
        result[1] += 0;
        result[2] += 0.008097165991902836;
        result[3] += 0.1274112884020005;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009526077637532747;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
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
        result[1] += 0.004667081518357187;
        result[2] += 0.007778469197261979;
        result[3] += 0.985687616677038;
        result[4] += 0;
        result[5] += 0.001866832607342875;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9971804511278195;
        result[1] += 0.0006506651243493349;
        result[2] += 0.001843551185656449;
        result[3] += 0.00014459224985540774;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018074031231925968;
      } else {
        result[0] += 0.0037593984962406013;
        result[1] += 0.022556390977443608;
        result[2] += 0;
        result[3] += 0.9736842105263158;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.4339523475823406;
        result[1] += 0;
        result[2] += 0.001751927119831815;
        result[3] += 0.5642957252978276;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9854383358098069;
        result[1] += 0;
        result[2] += 0.009806835066864784;
        result[3] += 0.0014858841010401188;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0032689450222882616;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
        result[0] += 0.1201478743068392;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8422674060382009;
        result[4] += 0.03758471965495996;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.17563291139240506;
        result[1] += 0.00039556962025316455;
        result[2] += 0;
        result[3] += 0.7674050632911392;
        result[4] += 0.0557753164556962;
        result[5] += 0.0007911392405063291;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.9578947368421052;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.042105263157894736;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0035714285714285713;
        result[2] += 0.013392857142857142;
        result[3] += 0;
        result[4] += 0.9808035714285714;
        result[5] += 0.002232142857142857;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9989171908837785;
        result[1] += 0.00015468701660307311;
        result[2] += 0.0006703104052799835;
        result[3] += 0.00015468701660307311;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010312467773538208;
      } else {
        result[0] += 0.8700906344410876;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.1299093655589124;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.8128093870317179;
        result[1] += 0.000611134877467457;
        result[2] += 0.0052557599462201305;
        result[3] += 0.18083481024262055;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004889079019739657;
      } else {
        result[0] += 0.27563025210084036;
        result[1] += 0.010084033613445379;
        result[2] += 0;
        result[3] += 0.7142857142857143;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42aa0000))) ) ) {
        result[0] += 0.1338411316648531;
        result[1] += 0;
        result[2] += 0.008705114254624592;
        result[3] += 0.7225244831338411;
        result[4] += 0.1338411316648531;
        result[5] += 0.001088139281828074;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.01580135440180587;
        result[2] += 0;
        result[3] += 0.056433408577878104;
        result[4] += 0.927765237020316;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.15900686740623352;
        result[1] += 0.0005282620179609087;
        result[2] += 0.0031695721077654522;
        result[3] += 0.3697834125726361;
        result[4] += 0.46698362387744324;
        result[5] += 0.0005282620179609087;
        result[6] += 0;
      } else {
        result[0] += 0.07831578947368421;
        result[1] += 0.002105263157894737;
        result[2] += 0;
        result[3] += 0.5086315789473684;
        result[4] += 0.4105263157894737;
        result[5] += 0.0004210526315789474;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 0;
        result[1] += 0.0035211267605633804;
        result[2] += 0;
        result[3] += 0.9964788732394366;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.973404255319149;
        result[1] += 0.026595744680851064;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9957907396271798;
        result[1] += 0.00010022048506714773;
        result[2] += 0.0007015433954700341;
        result[3] += 0.003357386249749449;
        result[4] += 0;
        result[5] += 0;
        result[6] += 5.0110242533573865e-05;
      } else {
        result[0] += 0.8031229195666646;
        result[1] += 0.0005446952732554621;
        result[2] += 0.005083822550384313;
        result[3] += 0.19070386733644012;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005446952732554621;
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
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9979642414586652;
        result[1] += 0;
        result[2] += 0.0019472473004071517;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 8.85112409275978e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.7313937753721246;
        result[1] += 0.0009665571235260005;
        result[2] += 0.007442489851150204;
        result[3] += 0.2336168567562343;
        result[4] += 0.024840518074618213;
        result[5] += 0.00048327856176300023;
        result[6] += 0.0012565242605838008;
      } else {
        result[0] += 0.09311475409836066;
        result[1] += 0.005245901639344262;
        result[2] += 0.0029508196721311475;
        result[3] += 0.41475409836065574;
        result[4] += 0.4839344262295082;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41a80000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008797653958944282;
        result[3] += 0;
        result[4] += 0.9868035190615836;
        result[5] += 0.004398826979472141;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.000667334000667334;
        result[2] += 0.003670337003670337;
        result[3] += 0.9956623289956623;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41f80000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428c0000))) ) ) {
        result[0] += 0.9847501775988634;
        result[1] += 0;
        result[2] += 0.0010419133317546767;
        result[3] += 0.014065829978688136;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014207909069381957;
      } else {
        result[0] += 0.05042016806722689;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9495798319327731;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9668391033293541;
        result[1] += 0.001326435866825839;
        result[2] += 0.0019896538002387586;
        result[3] += 0.02931423265685104;
        result[4] += 0;
        result[5] += 0.00026528717336516777;
        result[6] += 0.00026528717336516777;
      } else {
        result[0] += 0.6441119063109955;
        result[1] += 0;
        result[2] += 0.003513337670787248;
        result[3] += 0.35146389069616135;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009108653220559532;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.999322951929587;
        result[5] += 0.0006770480704129993;
        result[6] += 0;
      } else {
        result[0] += 0.2633637548891786;
        result[1] += 0.001303780964797914;
        result[2] += 0.011734028683181226;
        result[3] += 0.7231638418079096;
        result[4] += 0;
        result[5] += 0.000434593654932638;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3fc00000))) ) ) {
        result[0] += 0.007434944237918215;
        result[1] += 0.02973977695167286;
        result[2] += 0;
        result[3] += 0.21561338289962825;
        result[4] += 0.7472118959107806;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.001440922190201729;
        result[2] += 0;
        result[3] += 0.059077809798270896;
        result[4] += 0.9394812680115274;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.4764331210191083;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.12356687898089172;
        result[4] += 0.3993630573248408;
        result[5] += 0.0006369426751592356;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.0007015082427218519;
        result[2] += 0.006313574184496668;
        result[3] += 0.9722904244124868;
        result[4] += 0.018589968432129077;
        result[5] += 0.002104524728165556;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.31273408239700373;
        result[4] += 0.6872659176029963;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.010355029585798817;
        result[2] += 0;
        result[3] += 0.0007396449704142012;
        result[4] += 0.988905325443787;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42080000))) ) ) {
        result[0] += 0;
        result[1] += 0.022364217252396165;
        result[2] += 0;
        result[3] += 0.9776357827476039;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
        result[0] += 0.9972819193273657;
        result[1] += 0.00025368752944587397;
        result[2] += 0.002101982386837241;
        result[3] += 0.00018120537817562426;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00018120537817562426;
      } else {
        result[0] += 0.6382815075266455;
        result[1] += 0;
        result[2] += 0.0041753653444676405;
        result[3] += 0.35677398088122186;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0007691462476650917;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43ba8000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9985558263381171;
        result[1] += 0;
        result[2] += 0.0014441736618828415;
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
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
        result[0] += 0.012231126107127795;
        result[1] += 0.0029523407844791226;
        result[2] += 0.010122311261071278;
        result[3] += 0.7081400253057781;
        result[4] += 0.2652889076339097;
        result[5] += 0.0012652889076339097;
        result[6] += 0;
      } else {
        result[0] += 0.7443680341474983;
        result[1] += 0;
        result[2] += 0.0033198956604221013;
        result[3] += 0.25088925776618454;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0014228124258951864;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.5497334694340479;
        result[1] += 0.0019280934558239763;
        result[2] += 0.0062379494159011005;
        result[3] += 0.3629352387433367;
        result[4] += 0.0780310763298174;
        result[5] += 0.0004536690484291709;
        result[6] += 0.0006805035726437564;
      } else {
        result[0] += 0.050359712230215826;
        result[1] += 0.003083247687564234;
        result[2] += 0.0041109969167523125;
        result[3] += 0.36896197327852004;
        result[4] += 0.5734840698869476;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
        result[0] += 0.31446540880503143;
        result[1] += 0.0008984725965858042;
        result[2] += 0;
        result[3] += 0.6810422282120395;
        result[4] += 0.0008984725965858042;
        result[5] += 0.0026954177897574125;
        result[6] += 0;
      } else {
        result[0] += 0.9964022306170175;
        result[1] += 0.0008274869580859867;
        result[2] += 0.0016549739161719735;
        result[3] += 0.0009713977334052887;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00014391077531930203;
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
        result[0] += 0.18474820143884893;
        result[1] += 0.005179856115107914;
        result[2] += 0.014100719424460431;
        result[3] += 0.7956834532374101;
        result[4] += 0;
        result[5] += 0.00028776978417266187;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.00797660196756182;
        result[3] += 0.8205264557298592;
        result[4] += 0.17069928210582294;
        result[5] += 0.0007976601967561819;
        result[6] += 0;
      } else {
        result[0] += 0.9882299683114532;
        result[1] += 0;
        result[2] += 0.009959257582616569;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018107741059302852;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.001445086705202312;
        result[1] += 0.00028901734104046245;
        result[2] += 0;
        result[3] += 0.9303468208092486;
        result[4] += 0.06676300578034682;
        result[5] += 0.0011560693641618498;
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
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41e00000))) ) ) {
        result[0] += 0.9911504424778761;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.008849557522123894;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.003961267605633803;
        result[2] += 0.01232394366197183;
        result[3] += 0;
        result[4] += 0.9815140845070423;
        result[5] += 0.0022007042253521128;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42b60000))) ) ) {
        result[0] += 0.9974164907939742;
        result[1] += 0.0004002619896659632;
        result[2] += 0.0020376974019358125;
        result[3] += 7.27749072119933e-05;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.27749072119933e-05;
      } else {
        result[0] += 0.33415233415233414;
        result[1] += 0.007371007371007371;
        result[2] += 0;
        result[3] += 0.6584766584766585;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.1909433962264151;
        result[1] += 0;
        result[2] += 0.004528301886792453;
        result[3] += 0.8045283018867925;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.992846094354215;
        result[1] += 0;
        result[2] += 0.004833720030935808;
        result[3] += 0.0017401392111368909;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000580046403712297;
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
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42020000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991663806208013;
        result[1] += 0;
        result[2] += 0.0007845829451282304;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.90364340705144e-05;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.698153220818238;
        result[1] += 0.0023857912874436686;
        result[2] += 0.007245736502606698;
        result[3] += 0.2902712733056464;
        result[4] += 0.000795263762481223;
        result[5] += 0.0004418132013784572;
        result[6] += 0.0007069011222055315;
      } else {
        result[0] += 0;
        result[1] += 0.0005458515283842794;
        result[2] += 0.007914847161572052;
        result[3] += 0.8051310043668122;
        result[4] += 0.18586244541484717;
        result[5] += 0.0005458515283842794;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.4281984334203655;
        result[4] += 0.5718015665796344;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0007047216349541931;
        result[1] += 0.007751937984496124;
        result[2] += 0;
        result[3] += 0.052854122621564484;
        result[4] += 0.9386892177589852;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ) ^ (0b1 << 31))>((int)(0x40200000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9920634920634921;
        result[5] += 0.007936507936507936;
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0009124087591240876;
        result[1] += 0.0018248175182481751;
        result[2] += 0.002737226277372263;
        result[3] += 0.9930048661800487;
        result[4] += 0;
        result[5] += 0.0015206812652068127;
        result[6] += 0;
      } else {
        result[0] += 0.981081081081081;
        result[1] += 0;
        result[2] += 0.01891891891891892;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.3377777777777778;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6622222222222223;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8909402826566457;
        result[1] += 0;
        result[2] += 0.0031043215423576507;
        result[3] += 0.10554693244016011;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000408463360836533;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x41b40000))) ) ) {
        result[0] += 0.9189297658862877;
        result[1] += 0.0014269788182831662;
        result[2] += 0.0027647714604236346;
        result[3] += 0.0767001114827202;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00017837235228539578;
      } else {
        result[0] += 0.8953817153628653;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.10461828463713478;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.16903294937047952;
        result[1] += 0.0002678810608090009;
        result[2] += 0.0053576212161800165;
        result[3] += 0.6884543262791322;
        result[4] += 0.13474417358692742;
        result[5] += 0.002143048486472007;
        result[6] += 0;
      } else {
        result[0] += 0.10654685494223363;
        result[1] += 0;
        result[2] += 0.0025673940949935813;
        result[3] += 0.5892169448010269;
        result[4] += 0.30166880616174585;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.04145077720207254;
        result[2] += 0;
        result[3] += 0.9585492227979274;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42800000))) ) ) {
        result[0] += 0.9967711846164885;
        result[1] += 0.0007533902561526871;
        result[2] += 0.0022601707684580612;
        result[3] += 0.00014350290593384516;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.175145296692258e-05;
      } else {
        result[0] += 0.003703703703703704;
        result[1] += 0.022222222222222223;
        result[2] += 0;
        result[3] += 0.9740740740740741;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.19039008008266597;
        result[1] += 0;
        result[2] += 0.0054249547920434;
        result[3] += 0.8041849651252906;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9902603856092228;
        result[1] += 0;
        result[2] += 0.006161796859471278;
        result[3] += 0.0013913734843967402;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0021864440469091632;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9989159891598915;
        result[5] += 0.001084010840108401;
        result[6] += 0;
      } else {
        result[0] += 0.1872169099144439;
        result[1] += 0.0035228988424760945;
        result[2] += 0.004277805737292401;
        result[3] += 0.8039758429793659;
        result[4] += 0;
        result[5] += 0.0010065425264217413;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9946608377826353;
        result[1] += 0.0005374995520837068;
        result[2] += 0.0027233310638907805;
        result[3] += 0.0017558318701401084;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.000322499731250224;
      } else {
        result[0] += 0.017482517482517484;
        result[1] += 0.024475524475524476;
        result[2] += 0;
        result[3] += 0.958041958041958;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2552884615384615;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7447115384615385;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.9820005901445854;
        result[1] += 0;
        result[2] += 0.012393036293892004;
        result[3] += 0.0020655060489820007;
        result[4] += 0.0020655060489820007;
        result[5] += 0.00029507229271171436;
        result[6] += 0.0011802891708468574;
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
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.001199040767386091;
        result[1] += 0.0003996802557953637;
        result[2] += 0.002398081534772182;
        result[3] += 0.8968824940047961;
        result[4] += 0.09592326139088729;
        result[5] += 0.0031974420463629096;
        result[6] += 0;
      } else {
        result[0] += 0.3376987839101964;
        result[1] += 0;
        result[2] += 0.01683816651075772;
        result[3] += 0;
        result[4] += 0.6454630495790459;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.8823661718398562;
        result[1] += 0.0003373819163292848;
        result[2] += 0.002436647173489279;
        result[3] += 0.11463487779277255;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00022492127755285656;
      } else {
        result[0] += 0.9857791823029824;
        result[1] += 0;
        result[2] += 0.002468891961287774;
        result[3] += 0.010764368951214695;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009875567845151097;
      }
    }
  } else {
    if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41f80000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42e70000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 1;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.00398406374501992;
        result[1] += 0.014608233731739707;
        result[2] += 0;
        result[3] += 0.05976095617529881;
        result[4] += 0.9216467463479415;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.15404929577464788;
        result[1] += 0.008802816901408451;
        result[2] += 0;
        result[3] += 0.8371478873239436;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.10448979591836735;
        result[1] += 0;
        result[2] += 0.00816326530612245;
        result[3] += 0.2220408163265306;
        result[4] += 0.6653061224489796;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.14474194800155218;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8517656189367482;
        result[4] += 0.002328288707799767;
        result[5] += 0.0011641443538998836;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01783723522853958;
        result[3] += 0;
        result[4] += 0.9777034559643256;
        result[5] += 0.004459308807134895;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9949372018303962;
        result[1] += 0.0001947230065232207;
        result[2] += 0.0006815305228312725;
        result[3] += 0.00413786388861844;
        result[4] += 0;
        result[5] += 0;
        result[6] += 4.868075163080518e-05;
      } else {
        result[0] += 0.8051607393399622;
        result[1] += 0.0007320197645336425;
        result[2] += 0.005490148234002319;
        result[3] += 0.1880070761910572;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0006100164704447021;
      }
    }
  } else {
    if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c50000))) ) ) {
        result[0] += 0.1616897305171158;
        result[1] += 0.005826656955571741;
        result[2] += 0.004369992716678805;
        result[3] += 0.8281136198106337;
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41d00000))) ) ) {
        result[0] += 0.0021598272138228943;
        result[1] += 0.011879049676025918;
        result[2] += 0;
        result[3] += 0.1652267818574514;
        result[4] += 0.8207343412526998;
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
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42140000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x423e0000))) ) ) {
        result[0] += 0.9858514834505231;
        result[1] += 4.287429257417253e-05;
        result[2] += 0.000814611558909278;
        result[3] += 0.012948036357400102;
        result[4] += 0.0001714971702966901;
        result[5] += 0.00012862287772251758;
        result[6] += 4.287429257417253e-05;
      } else {
        result[0] += 0.9145110988809393;
        result[1] += 0.001651073197578426;
        result[2] += 0.000733810310034856;
        result[3] += 0.08273711245643;
        result[4] += 0;
        result[5] += 0.000183452577508714;
        result[6] += 0.000183452577508714;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.1588068181818182;
        result[1] += 0.003693181818181818;
        result[2] += 0.004829545454545454;
        result[3] += 0.7636363636363637;
        result[4] += 0.06875;
        result[5] += 0.0002840909090909091;
        result[6] += 0;
      } else {
        result[0] += 0.028851702250432775;
        result[1] += 0;
        result[2] += 0.024235429890363532;
        result[3] += 0.0571263704558569;
        result[4] += 0.8897864974033468;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.008249068653539117;
        result[3] += 0.8102714209686003;
        result[4] += 0.1809473124002129;
        result[5] += 0.0005321979776476849;
        result[6] += 0;
      } else {
        result[0] += 0.9909543193125283;
        result[1] += 0;
        result[2] += 0.007236544549977386;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0018091361374943465;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x423c0000))) ) ) {
        result[0] += 0.9831302717900656;
        result[1] += 0;
        result[2] += 0.016869728209934397;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.07434464976364417;
        result[1] += 0.010313708637730984;
        result[2] += 0.004727116458960034;
        result[3] += 0.9106145251396648;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.0954879328436516;
        result[1] += 0.0005246589716684154;
        result[2] += 0.008394543546694647;
        result[3] += 0.6311647429171038;
        result[4] += 0.2581322140608604;
        result[5] += 0.006295907660020985;
        result[6] += 0;
      } else {
        result[0] += 0.033419023136246784;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.41645244215938304;
        result[4] += 0.5501285347043702;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42540000))) ) ) {
        result[0] += 0.902201550387597;
        result[1] += 0.000372093023255814;
        result[2] += 0.0017674418604651165;
        result[3] += 0.09525581395348838;
        result[4] += 0;
        result[5] += 6.2015503875969e-05;
        result[6] += 0.0003410852713178295;
      } else {
        result[0] += 0.9950789950789951;
        result[1] += 0;
        result[2] += 0.004921004921004921;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
        result[0] += 0.9834001144819691;
        result[1] += 4.770082045411181e-05;
        result[2] += 0.0005724098454493417;
        result[3] += 0.01555046746804045;
        result[4] += 0.00038160656363289447;
        result[5] += 4.770082045411181e-05;
        result[6] += 0;
      } else {
        result[0] += 0.03576341127922971;
        result[1] += 0;
        result[2] += 0.015130674002751032;
        result[3] += 0;
        result[4] += 0.9491059147180193;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42260000))) ) ) {
        result[0] += 0.34774436090225563;
        result[1] += 0.0012083780880773362;
        result[2] += 0.008995703544575726;
        result[3] += 0.6039205155746509;
        result[4] += 0.03665413533834586;
        result[5] += 0.0012083780880773362;
        result[6] += 0.0002685284640171858;
      } else {
        result[0] += 0.9432948132222521;
        result[1] += 0;
        result[2] += 0.002418704649287826;
        result[3] += 0.05401773716742811;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002687449610319806;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.012461059190031152;
        result[1] += 0.056074766355140186;
        result[2] += 0;
        result[3] += 0.08411214953271028;
        result[4] += 0.8473520249221184;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1542247744052502;
        result[1] += 0.003281378178835111;
        result[2] += 0;
        result[3] += 0.8424938474159147;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.29941860465116277;
        result[1] += 0;
        result[2] += 0.03488372093023256;
        result[3] += 0.6656976744186046;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02054794520547945;
        result[4] += 0.9794520547945206;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
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
        result[3] += 0.9642097802976612;
        result[4] += 0.03543586109142452;
        result[5] += 0.00035435861091424523;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x41dc0000))) ) ) {
        result[0] += 0.984375;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.015625;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004608294930875576;
        result[2] += 0.013405948889819858;
        result[3] += 0;
        result[4] += 0.9811478843736908;
        result[5] += 0.0008378718056137411;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42140000))) ) ) {
        result[0] += 0.99658203125;
        result[1] += 0;
        result[2] += 0.0029296875;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00048828125;
      } else {
        result[0] += 0.9996246715876392;
        result[1] += 0;
        result[2] += 0.0003753284123608157;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a10000))) ) ) {
        result[0] += 0.9732848899337465;
        result[1] += 0.0023509296858303056;
        result[2] += 0.006625347296430861;
        result[3] += 0.017525112203462277;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021372088053002778;
      } else {
        result[0] += 0.46786206896551724;
        result[1] += 0;
        result[2] += 0.007172413793103448;
        result[3] += 0.5244137931034483;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005517241379310345;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
      result[0] += 0;
      result[1] += 0;
      result[2] += 0;
      result[3] += 0;
      result[4] += 1;
      result[5] += 0;
      result[6] += 0;
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x40400000))) ) ) {
        result[0] += 0.19787234042553192;
        result[1] += 0.007978723404255319;
        result[2] += 0;
        result[3] += 0.7941489361702128;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.5268817204301075;
        result[1] += 0;
        result[2] += 0.025089605734767026;
        result[3] += 0.44802867383512546;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9940229885057471;
        result[1] += 0;
        result[2] += 0.005517241379310344;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004597701149425287;
      } else {
        result[0] += 0.9997106481481481;
        result[1] += 0;
        result[2] += 0.00020667989417989417;
        result[3] += 0;
        result[4] += 8.267195767195767e-05;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[1].missing != -1) || ((*( ((int*)(data)) + 1 ))<=((int)(0x41180000))) ) ) {
        result[0] += 0.5462881042387194;
        result[1] += 0.0016086222150727897;
        result[2] += 0.0058714710850156825;
        result[3] += 0.37649802943778643;
        result[4] += 0.06852730636210085;
        result[5] += 0.0007238799967827555;
        result[6] += 0.00048258666452183693;
      } else {
        result[0] += 0.9078947368421053;
        result[1] += 0;
        result[2] += 0.039473684210526314;
        result[3] += 0;
        result[4] += 0.02631578947368421;
        result[5] += 0;
        result[6] += 0.02631578947368421;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40a00000))) ) ) {
        result[0] += 0.9933862433862434;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.006613756613756613;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0002672367717797969;
        result[1] += 0.0002672367717797969;
        result[2] += 0.006680919294494923;
        result[3] += 0.7926242650988776;
        result[4] += 0.1985569214323891;
        result[5] += 0.0016034206306787815;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40f00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.052132701421800945;
        result[2] += 0;
        result[3] += 0.9478672985781991;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9992800946161362;
        result[1] += 5.1421813133131074e-05;
        result[2] += 0.0005656399444644418;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010284362626626215;
      } else {
        result[0] += 0.866877971473851;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.13312202852614896;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.5490065342045607;
        result[1] += 0.0034671289505267375;
        result[2] += 0.007601013468462463;
        result[3] += 0.43899186558207764;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009334577943725831;
      } else {
        result[0] += 0.9844109646369534;
        result[1] += 0;
        result[2] += 0.0035572295459301113;
        result[3] += 0.011508683825068007;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005231219920485458;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41c40000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.13630880579010857;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.8600723763570567;
        result[4] += 0.0016083634901487736;
        result[5] += 0.002010454362685967;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.019148936170212766;
        result[3] += 0;
        result[4] += 0.9797872340425532;
        result[5] += 0.0010638297872340426;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9994623449441222;
        result[1] += 0;
        result[2] += 0.0005376550558777219;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.7081287506819421;
        result[1] += 0.0008183306055646482;
        result[2] += 0.006546644844517185;
        result[3] += 0.2840516457537734;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004546281142025823;
      }
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
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.5471311475409836;
        result[1] += 0;
        result[2] += 0.022540983606557378;
        result[3] += 0.430327868852459;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0009398496240601503;
        result[1] += 0.014097744360902255;
        result[2] += 0;
        result[3] += 0.9849624060150376;
        result[4] += 0;
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
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3fc00000))) ) ) {
        result[0] += 0.9990632576592462;
        result[1] += 0;
        result[2] += 0.0009367423407538021;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9998775260257196;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0001224739742804654;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
        result[0] += 0.015250544662309368;
        result[1] += 0.007038712921065862;
        result[2] += 0.010222892575833753;
        result[3] += 0.6668342550695492;
        result[4] += 0.2996480643539467;
        result[5] += 0.001005530417295123;
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
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b90000))) ) ) {
        result[0] += 0.9931658978301725;
        result[1] += 0;
        result[2] += 0.005467281735861951;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0013668204339654878;
      } else {
        result[0] += 0.43134742686312194;
        result[1] += 0;
        result[2] += 0.0049113815929959425;
        result[3] += 0.5618193465727098;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0019218449711723255;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x437c0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9984676401658554;
        result[1] += 0;
        result[2] += 0.001442221020371372;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.013881377321075e-05;
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
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.003579952267303103;
        result[1] += 0.00477326968973747;
        result[2] += 0;
        result[3] += 0.23031026252983294;
        result[4] += 0.7589498806682577;
        result[5] += 0.002386634844868735;
        result[6] += 0;
      } else {
        result[0] += 0.5536561540608429;
        result[1] += 0.001465252581635501;
        result[2] += 0.007954228300307006;
        result[3] += 0.42980742394641364;
        result[4] += 0.005721462461624337;
        result[5] += 0.0004186435947530003;
        result[6] += 0.0009768350544236673;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ae0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.3774733637747336;
        result[4] += 0.6225266362252664;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.0013986013986013986;
        result[1] += 0.006993006993006993;
        result[2] += 0;
        result[3] += 0.05174825174825175;
        result[4] += 0.9398601398601398;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
      if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x40900000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9925788497217068;
        result[5] += 0.0074211502782931356;
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
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0009253547193090684;
        result[1] += 0.004009870450339297;
        result[2] += 0.0024676125848241827;
        result[3] += 0.9904380012338063;
        result[4] += 0;
        result[5] += 0.00215916101172116;
        result[6] += 0;
      } else {
        result[0] += 0.9806896551724138;
        result[1] += 0;
        result[2] += 0.019310344827586208;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42990000))) ) ) {
        result[0] += 0.9966903073286052;
        result[1] += 0;
        result[2] += 0.002364066193853428;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009456264775413711;
      } else {
        result[0] += 0.9996995708154507;
        result[1] += 0;
        result[2] += 0.0003004291845493562;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x3f000000))) ) ) {
        result[0] += 0.6656748715174466;
        result[1] += 0.0020286718961319995;
        result[2] += 0.010684338652961863;
        result[3] += 0.32066540438193136;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0009467135515282663;
      } else {
        result[0] += 0.731873822975518;
        result[1] += 0;
        result[2] += 0.0021186440677966106;
        result[3] += 0.26553672316384186;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0004708097928436912;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.939868144606245;
        result[1] += 0;
        result[2] += 0.0006520321669202348;
        result[3] += 0.01209881909729769;
        result[4] += 0.04723610809244367;
        result[5] += 0.0001448960370933855;
        result[6] += 0;
      } else {
        result[0] += 0.9836421725239617;
        result[1] += 0;
        result[2] += 0.0021725239616613417;
        result[3] += 0.013162939297124601;
        result[4] += 0.0008945686900958467;
        result[5] += 0;
        result[6] += 0.00012779552715654952;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.7546370579552019;
        result[1] += 0.001155253192991464;
        result[2] += 0.004364289840189975;
        result[3] += 0.22097426352608948;
        result[4] += 0.018163147423143573;
        result[5] += 0.00012836146588794044;
        result[6] += 0.000577626596495732;
      } else {
        result[0] += 0.47558714462299134;
        result[1] += 0;
        result[2] += 0.008034610630407911;
        result[3] += 0.5163782447466008;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42dc0000))) ) ) {
        result[0] += 0.13798836242726517;
        result[1] += 0.006650041562759767;
        result[2] += 0;
        result[3] += 0.8553615960099751;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.007633587786259542;
        result[1] += 0.011450381679389313;
        result[2] += 0;
        result[3] += 0.015267175572519083;
        result[4] += 0.9656488549618321;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42a60000))) ) ) {
        result[0] += 0.3165680473372781;
        result[1] += 0;
        result[2] += 0.023668639053254437;
        result[3] += 0.6597633136094675;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.02156549520766773;
        result[4] += 0.9784345047923323;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40c00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9986357435197817;
        result[5] += 0.001364256480218281;
        result[6] += 0;
      } else {
        result[0] += 0.1804248453885453;
        result[1] += 0.0008066684592632429;
        result[2] += 0.006453347674105943;
        result[3] += 0.8096262436138747;
        result[4] += 0;
        result[5] += 0.0026888948642108095;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x429f0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.6991869918699187;
        result[4] += 0.3008130081300813;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.007046388725778039;
        result[2] += 0;
        result[3] += 0.011156782149148562;
        result[4] += 0.9817968291250734;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x420e0000))) ) ) {
        result[0] += 0.9991292043104387;
        result[1] += 0.0004353978447806684;
        result[2] += 0.0003265483835855013;
        result[3] += 0.0001088494611951671;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9906593914732267;
        result[1] += 0;
        result[2] += 0.0005548876352538611;
        result[3] += 0.008693239618977158;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.248127254231018e-05;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 0.9993110575266965;
        result[1] += 0;
        result[2] += 0.0006889424733034792;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.6943239174709998;
        result[1] += 0.0017710085893916587;
        result[2] += 0.008146639511201629;
        result[3] += 0.2945187284158328;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.001239706012574161;
      }
    }
  }
  if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x43c10000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3f800000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9983612527312454;
        result[1] += 0;
        result[2] += 0.0015477057538237436;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 9.104151493080845e-05;
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
    if ( UNLIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3f000000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42340000))) ) ) {
        result[0] += 0.6113432835820896;
        result[1] += 0;
        result[2] += 0.010348258706467661;
        result[3] += 0.345273631840796;
        result[4] += 0.031840796019900496;
        result[5] += 0.0001990049751243781;
        result[6] += 0.0009950248756218905;
      } else {
        result[0] += 0.055108359133126936;
        result[1] += 0.0043343653250774;
        result[2] += 0;
        result[3] += 0.6321981424148607;
        result[4] += 0.3077399380804954;
        result[5] += 0.0006191950464396285;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.5898767818313603;
        result[1] += 0.0027784489007006523;
        result[2] += 0.007489731819280019;
        result[3] += 0.2408794394781348;
        result[4] += 0.15800918096158492;
        result[5] += 0.00024160425223483932;
        result[6] += 0.000724812756704518;
      } else {
        result[0] += 0;
        result[1] += 0.0012858979854264896;
        result[2] += 0;
        result[3] += 0.7852550364337763;
        result[4] += 0.21345906558079725;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429a0000))) ) ) {
        result[0] += 0.1987630025302221;
        result[1] += 0.000281135788585887;
        result[2] += 0.0028113578858588698;
        result[3] += 0.7930840596007872;
        result[4] += 0.002530222097272983;
        result[5] += 0.002530222097272983;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.004997501249375313;
        result[2] += 0;
        result[3] += 0.12143928035982009;
        result[4] += 0.8735632183908046;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9945498301245753;
        result[1] += 0.00031851642129105323;
        result[2] += 0.0023711778029445072;
        result[3] += 0.002654303510758777;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010617214043035108;
      } else {
        result[0] += 0.014925373134328358;
        result[1] += 0.029850746268656716;
        result[2] += 0;
        result[3] += 0.9552238805970149;
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
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42720000))) ) ) {
        result[0] += 0.003178272175671771;
        result[1] += 0;
        result[2] += 0.008090147356255418;
        result[3] += 0.791100837908119;
        result[4] += 0.19763074255995378;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.8407437348423605;
        result[1] += 0;
        result[2] += 0.005658852061438965;
        result[3] += 0.1463217461600647;
        result[4] += 0.004850444624090542;
        result[5] += 0.0008084074373484236;
        result[6] += 0.0016168148746968471;
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
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9885321100917431;
        result[1] += 0;
        result[2] += 0.011467889908256881;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9994191899636026;
        result[1] += 0;
        result[2] += 0.000580810036397429;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42160000))) ) ) {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a50000))) ) ) {
        result[0] += 0.019255455712451863;
        result[1] += 0.008729139922978177;
        result[2] += 0.003337612323491656;
        result[3] += 0.8973042362002568;
        result[4] += 0.07060333761232349;
        result[5] += 0.0007702182284980744;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.01487778958554729;
        result[3] += 0.19057739992915337;
        result[4] += 0.7927736450584485;
        result[5] += 0.001771165426850868;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9772441538848379;
        result[1] += 0;
        result[2] += 0.005406084988684939;
        result[3] += 0.01584108624591401;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0015086748805632389;
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
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x40d00000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9994279176201373;
        result[5] += 0.0005720823798627002;
        result[6] += 0;
      } else {
        result[0] += 0.18984718984718985;
        result[1] += 0.00259000259000259;
        result[2] += 0.00259000259000259;
        result[3] += 0.8041958041958042;
        result[4] += 0;
        result[5] += 0.000777000777000777;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x41000000))) ) ) {
        result[0] += 0.4240506329113924;
        result[1] += 0.008438818565400843;
        result[2] += 0;
        result[3] += 0.5675105485232067;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9942869462110596;
        result[1] += 0.00043117387086342567;
        result[2] += 0.002730767848801696;
        result[3] += 0.002443318601559412;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010779346771585642;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x42320000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422a0000))) ) ) {
        result[0] += 0.4508320726172466;
        result[1] += 0;
        result[2] += 0.00680786686838124;
        result[3] += 0.02723146747352496;
        result[4] += 0.5151285930408472;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.019632678910702975;
        result[1] += 0;
        result[2] += 0.006966434452184927;
        result[3] += 0.9696010132995567;
        result[4] += 0.0034832172260924636;
        result[5] += 0.00031665611146295124;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x428f0000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9894982497082847;
        result[1] += 0;
        result[2] += 0.009334889148191364;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0011668611435239206;
      }
    }
  }
  if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40800000))) ) ) {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42a90000))) ) ) {
        result[0] += 0.5035398230088496;
        result[1] += 0;
        result[2] += 0.01327433628318584;
        result[3] += 0.4831858407079646;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.14035087719298245;
        result[1] += 0.004784688995215311;
        result[2] += 0.003987240829346092;
        result[3] += 0.5625996810207337;
        result[4] += 0.28827751196172247;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ) ^ (0b1 << 31))>((int)(0x421c0000))) ) ) {
        result[0] += 0.001594896331738437;
        result[1] += 0.019138755980861243;
        result[2] += 0;
        result[3] += 0.03668261562998405;
        result[4] += 0.9425837320574163;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.21714285714285714;
        result[4] += 0.7828571428571428;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41bc0000))) ) ) {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x42440000))) ) ) {
        result[0] += 0.0035863717872086074;
        result[1] += 0;
        result[2] += 0.005379557680812911;
        result[3] += 0.8924088463837417;
        result[4] += 0.09742976688583384;
        result[5] += 0.001195457262402869;
        result[6] += 0;
      } else {
        result[0] += 0.21865284974093263;
        result[1] += 0;
        result[2] += 0.016580310880829015;
        result[3] += 0;
        result[4] += 0.7647668393782383;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
        result[0] += 0.9933868682097308;
        result[1] += 0.0003996947785327568;
        result[2] += 0.0017441226699611205;
        result[3] += 0.004360306674902802;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00010900766687257003;
      } else {
        result[0] += 0.6583772633509054;
        result[1] += 0;
        result[2] += 0.004240201696080679;
        result[3] += 0.3358927343570938;
        result[4] += 0;
        result[5] += 0.0002292000916800367;
        result[6] += 0.0012606005042402019;
      }
    }
  }
  if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42b70000))) ) ) {
    if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x429e0000))) ) ) {
        result[0] += 0.19416175682913767;
        result[1] += 0;
        result[2] += 0.0032137118371719335;
        result[3] += 0.7825388323513658;
        result[4] += 0.019014461703267274;
        result[5] += 0.0010712372790573112;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0.005296610169491525;
        result[2] += 0;
        result[3] += 0.09427966101694915;
        result[4] += 0.9004237288135594;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x427c0000))) ) ) {
        result[0] += 0.9941899839600784;
        result[1] += 0.0007128854036713598;
        result[2] += 0.002673320263767599;
        result[3] += 0.0022099447513812156;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00021386562110140795;
      } else {
        result[0] += 0.00980392156862745;
        result[1] += 0.032679738562091505;
        result[2] += 0;
        result[3] += 0.9575163398692811;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42c70000))) ) ) {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
        result[0] += 1;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.23677884615384615;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.7632211538461539;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x41d80000))) ) ) {
        result[0] += 0.9832303618711385;
        result[1] += 0;
        result[2] += 0.015298617240364814;
        result[3] += 0.0005884083553986466;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.00088261253309797;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.0028776978417266188;
        result[3] += 0;
        result[4] += 0.9942446043165467;
        result[5] += 0.0028776978417266188;
        result[6] += 0;
      }
    }
  }
  if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x428a0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x422e0000))) ) ) {
        result[0] += 0.9832060344418616;
        result[1] += 4.7440580672707434e-05;
        result[2] += 0.0011860145168176859;
        result[3] += 0.015228426395939087;
        result[4] += 0.00023720290336353718;
        result[5] += 4.7440580672707434e-05;
        result[6] += 4.7440580672707434e-05;
      } else {
        result[0] += 0.7149382052659861;
        result[1] += 0.0009672219236969372;
        result[2] += 0.004836109618484685;
        result[3] += 0.26372917786136485;
        result[4] += 0.014884470714669532;
        result[5] += 0.00037614185921547554;
        result[6] += 0.00026867275658248256;
      }
    } else {
      if ( LIKELY( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ))<=((int)(0x4500c800))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.2857142857142857;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.7142857142857143;
        result[5] += 0;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42d90000))) ) ) {
      if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41400000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0;
        result[4] += 1;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.1829105473965287;
        result[1] += 0.004005340453938585;
        result[2] += 0.006008010680907877;
        result[3] += 0.8070761014686249;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x42ce0000))) ) ) {
        result[0] += 0.013513513513513514;
        result[1] += 0.013513513513513514;
        result[2] += 0;
        result[3] += 0.972972972972973;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.001128668171557562;
        result[1] += 0.006772009029345372;
        result[2] += 0;
        result[3] += 0.001128668171557562;
        result[4] += 0.9909706546275395;
        result[5] += 0;
        result[6] += 0;
      }
    }
  }
  if ( UNLIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x41cc0000))) ) ) {
    if ( LIKELY( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x42a30000))) ) ) {
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
        result[1] += 0.0002962085308056872;
        result[2] += 0;
        result[3] += 0.9345379146919431;
        result[4] += 0.06368483412322275;
        result[5] += 0.001481042654028436;
        result[6] += 0;
      }
    } else {
      if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x40e00000))) ) ) {
        result[0] += 0;
        result[1] += 0.009102730819245773;
        result[2] += 0;
        result[3] += 0;
        result[4] += 0.9908972691807543;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.13032886723507917;
        result[1] += 0;
        result[2] += 0.029232643118148598;
        result[3] += 0;
        result[4] += 0.8355663824604141;
        result[5] += 0.0048721071863581;
        result[6] += 0;
      }
    }
  } else {
    if ( LIKELY( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x40400000))) ) ) {
      if ( UNLIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
        result[0] += 0.9900744416873449;
        result[1] += 0;
        result[2] += 0.009925558312655087;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.99964174826845;
        result[1] += 0;
        result[2] += 0.00027864023565002784;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 7.961149590000795e-05;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42660000))) ) ) {
        result[0] += 0.5276732939279957;
        result[1] += 0.001970266881604872;
        result[2] += 0.0053734551316496505;
        result[3] += 0.4646247537166398;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0003582303421099767;
      } else {
        result[0] += 0.8453075512585432;
        result[1] += 0.0013335555925987667;
        result[2] += 0.009834972495415904;
        result[3] += 0.14302383730621773;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0005000833472245376;
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
      if ( LIKELY( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0.999861735222952;
        result[1] += 0;
        result[2] += 0.000138264777048047;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0;
      } else {
        result[0] += 0.9991447143345877;
        result[1] += 0;
        result[2] += 0.0005986999657885734;
        result[3] += 0;
        result[4] += 0;
        result[5] += 0;
        result[6] += 0.0002565856996236743;
      }
    }
  } else {
    if ( LIKELY( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x420c0000))) ) ) {
      if ( LIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x42af0000))) ) ) {
        result[0] += 0.7371007371007371;
        result[1] += 0.000756000756000756;
        result[2] += 0.007938007938007937;
        result[3] += 0.2268947268947269;
        result[4] += 0.02608202608202608;
        result[5] += 0.0004725004725004725;
        result[6] += 0.000756000756000756;
      } else {
        result[0] += 0.0927968851395198;
        result[1] += 0.007138221933809215;
        result[2] += 0.003893575600259572;
        result[3] += 0.4072031148604802;
        result[4] += 0.4889682024659312;
        result[5] += 0;
        result[6] += 0;
      }
    } else {
      if ( UNLIKELY( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ))<=((int)(0x421a0000))) ) ) {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0;
        result[3] += 0.2037037037037037;
        result[4] += 0.7951388888888888;
        result[5] += 0.0011574074074074073;
        result[6] += 0;
      } else {
        result[0] += 0;
        result[1] += 0;
        result[2] += 0.011735419630156473;
        result[3] += 0.984352773826458;
        result[4] += 0.0035561877667140826;
        result[5] += 0.00035561877667140827;
        result[6] += 0;
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
  result[6] /= 50;
  
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
    

    FILE* file = fopen("./codegen_small/dataset_148/split_1/test_data.csv", "r");
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
        
    }
    

    return 0;
}
