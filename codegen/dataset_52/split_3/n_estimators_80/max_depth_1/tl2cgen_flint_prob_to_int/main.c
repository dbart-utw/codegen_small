
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
  return "uint32";
}


void predict(union Entry* data, int pred_margin, uint32_t* result) {
  unsigned int tmp;
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 51352869;
    result[1] += 2334221;
  } else {
    result[0] += 17672000;
    result[1] += 36015090;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 50166626;
    result[1] += 3520464;
  } else {
    result[0] += 11694217;
    result[1] += 41992873;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 8299453;
    result[1] += 45387637;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 17731516;
    result[1] += 35955574;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d8ad57c))) ) ) {
    result[0] += 33094782;
    result[1] += 20592308;
  } else {
    result[0] += 11585109;
    result[1] += 42101982;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3c7559b4))) ) ) {
    result[0] += 36507222;
    result[1] += 17179869;
  } else {
    result[0] += 13707342;
    result[1] += 39979748;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3ef4c2f8))) ) ) {
    result[0] += 50861454;
    result[1] += 2825636;
  } else {
    result[0] += 16464041;
    result[1] += 37223049;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 18635188;
    result[1] += 35051902;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e7158b8))) ) ) {
    result[0] += 50704475;
    result[1] += 2982616;
  } else {
    result[0] += 13357553;
    result[1] += 40329537;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e62007e))) ) ) {
    result[0] += 52060209;
    result[1] += 1626881;
  } else {
    result[0] += 11718502;
    result[1] += 41968589;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ) ^ (0b1 << 31))>((int)(0x3f7cc9da))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15751171;
    result[1] += 37935919;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    result[0] += 37298400;
    result[1] += 16388690;
  } else {
    result[0] += 11184810;
    result[1] += 42502280;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
    result[0] += 52674127;
    result[1] += 1012963;
  } else {
    result[0] += 12015682;
    result[1] += 41671408;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 17744038;
    result[1] += 35943052;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 51495781;
    result[1] += 2191309;
  } else {
    result[0] += 13296335;
    result[1] += 40390755;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 9042036;
    result[1] += 44645054;
  } else {
    result[0] += 43390936;
    result[1] += 10296154;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13045461;
    result[1] += 40641629;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e45b813))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16404388;
    result[1] += 37282702;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14724307;
    result[1] += 38962783;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e178e9f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 12445643;
    result[1] += 41241447;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e87a97e))) ) ) {
    result[0] += 34839495;
    result[1] += 18847595;
  } else {
    result[0] += 12707003;
    result[1] += 40980087;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 51926858;
    result[1] += 1760232;
  } else {
    result[0] += 11694217;
    result[1] += 41992873;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f69aa50))) ) ) {
    result[0] += 49852298;
    result[1] += 3834792;
  } else {
    result[0] += 17134178;
    result[1] += 36552913;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4bf290))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15473135;
    result[1] += 38213955;
  }
  if ( ( !(data[20].missing != -1) || ((*( ((int*)(data)) + 20 ))<=((int)(0x3d53165d))) ) ) {
    result[0] += 35981773;
    result[1] += 17705317;
  } else {
    result[0] += 12707003;
    result[1] += 40980087;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e8e3886))) ) ) {
    result[0] += 51352869;
    result[1] += 2334221;
  } else {
    result[0] += 10885861;
    result[1] += 42801229;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 52060209;
    result[1] += 1626881;
  } else {
    result[0] += 15172438;
    result[1] += 38514652;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f671173))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15735871;
    result[1] += 37951219;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 51897521;
    result[1] += 1789569;
  } else {
    result[0] += 12430016;
    result[1] += 41257075;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e7aaa3b))) ) ) {
    result[0] += 33554431;
    result[1] += 20132659;
  } else {
    result[0] += 10930305;
    result[1] += 42756785;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 8259552;
    result[1] += 45427538;
  } else {
    result[0] += 41093822;
    result[1] += 12593268;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f667a64))) ) ) {
    result[0] += 47444406;
    result[1] += 6242685;
  } else {
    result[0] += 14397901;
    result[1] += 39289189;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f65f7a4))) ) ) {
    result[0] += 51835812;
    result[1] += 1851279;
  } else {
    result[0] += 17207401;
    result[1] += 36479690;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f50240c))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15630418;
    result[1] += 38056672;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15078076;
    result[1] += 38609014;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 50758704;
    result[1] += 2928386;
  } else {
    result[0] += 14196105;
    result[1] += 39490985;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ))<=((int)(0x3e0a708f))) ) ) {
    result[0] += 35624144;
    result[1] += 18062946;
  } else {
    result[0] += 9980292;
    result[1] += 43706798;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14204207;
    result[1] += 39482883;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ) ^ (0b1 << 31))>((int)(0x3f20d899))) ) ) {
    result[0] += 49085340;
    result[1] += 4601750;
  } else {
    result[0] += 14128181;
    result[1] += 39558909;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cf0a3d7))) ) ) {
    result[0] += 50529027;
    result[1] += 3158064;
  } else {
    result[0] += 10382880;
    result[1] += 43304210;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c99f7f9))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15862095;
    result[1] += 37824996;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 51835812;
    result[1] += 1851279;
  } else {
    result[0] += 10475529;
    result[1] += 43211561;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 13854733;
    result[1] += 39832357;
  } else {
    result[0] += 42531331;
    result[1] += 11155759;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3ee0dd83))) ) ) {
    result[0] += 50529027;
    result[1] += 3158064;
  } else {
    result[0] += 16645342;
    result[1] += 37041748;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 50400126;
    result[1] += 3286964;
  } else {
    result[0] += 12292838;
    result[1] += 41394252;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3951b718))) ) ) {
    result[0] += 35037891;
    result[1] += 18649200;
  } else {
    result[0] += 12143508;
    result[1] += 41543582;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e924b34))) ) ) {
    result[0] += 52792306;
    result[1] += 894784;
  } else {
    result[0] += 11372142;
    result[1] += 42314948;
  }
  if ( ( !(data[0].missing != -1) || ((*( ((int*)(data)) + 0 ))<=((int)(0x3f000000))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14578822;
    result[1] += 39108269;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4dce08))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14177110;
    result[1] += 39509980;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ) ^ (0b1 << 31))>((int)(0x3f6db328))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14705594;
    result[1] += 38981496;
  }
  if ( ( !(data[28].missing != -1) || ((*( ((int*)(data)) + 28 ))<=((int)(0x3d1d4413))) ) ) {
    result[0] += 35539342;
    result[1] += 18147749;
  } else {
    result[0] += 10345949;
    result[1] += 43341141;
  }
  if ( ( !(data[22].missing != -1) || ((*( ((int*)(data)) + 22 ))<=((int)(0x3e3f0c34))) ) ) {
    result[0] += 31995337;
    result[1] += 21691754;
  } else {
    result[0] += 9493449;
    result[1] += 44193642;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 8947848;
    result[1] += 44739242;
  } else {
    result[0] += 46881685;
    result[1] += 6805405;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 17971526;
    result[1] += 35715564;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7fcc3a))) ) ) {
    result[0] += 8994695;
    result[1] += 44692395;
  } else {
    result[0] += 46230550;
    result[1] += 7456540;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3a88f862))) ) ) {
    result[0] += 37631138;
    result[1] += 16055952;
  } else {
    result[0] += 9980292;
    result[1] += 43706798;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f7ffc66))) ) ) {
    result[0] += 9172668;
    result[1] += 44514422;
  } else {
    result[0] += 46976204;
    result[1] += 6710886;
  }
  if ( ( !(data[12].missing != -1) || ((*( ((int*)(data)) + 12 ))<=((int)(0x3e39c62a))) ) ) {
    result[0] += 34738706;
    result[1] += 18948385;
  } else {
    result[0] += 9670345;
    result[1] += 44016745;
  }
  if ( ( !(data[3].missing != -1) || ((*( ((int*)(data)) + 3 ) ^ (0b1 << 31))>((int)(0x3eea2142))) ) ) {
    result[0] += 51539607;
    result[1] += 2147483;
  } else {
    result[0] += 16692624;
    result[1] += 36994466;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e3bab22))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14218499;
    result[1] += 39468592;
  }
  if ( ( !(data[19].missing != -1) || ((*( ((int*)(data)) + 19 ) ^ (0b1 << 31))>((int)(0x3f71dbca))) ) ) {
    result[0] += 51769695;
    result[1] += 1917396;
  } else {
    result[0] += 18961823;
    result[1] += 34725267;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e45b813))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 13007885;
    result[1] += 40679205;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 18653989;
    result[1] += 35033101;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 50589759;
    result[1] += 3097332;
  } else {
    result[0] += 11704294;
    result[1] += 41982796;
  }
  if ( ( !(data[5].missing != -1) || ((*( ((int*)(data)) + 5 ) ^ (0b1 << 31))>((int)(0x3f647dd4))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16638561;
    result[1] += 37048529;
  }
  if ( ( !(data[17].missing != -1) || ((*( ((int*)(data)) + 17 ) ^ (0b1 << 31))>((int)(0x3f4e4894))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15578843;
    result[1] += 38108247;
  }
  if ( ( !(data[2].missing != -1) || ((*( ((int*)(data)) + 2 ))<=((int)(0x3e219b91))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 14885966;
    result[1] += 38801124;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ) ^ (0b1 << 31))>((int)(0x3f0c8d8f))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 16058192;
    result[1] += 37628898;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 50223407;
    result[1] += 3463683;
  } else {
    result[0] += 9348498;
    result[1] += 44338592;
  }
  if ( ( !(data[30].missing != -1) || ((*( ((int*)(data)) + 30 ) ^ (0b1 << 31))>((int)(0x3f606930))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 15499620;
    result[1] += 38187470;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3d60bf5d))) ) ) {
    result[0] += 52710962;
    result[1] += 976128;
  } else {
    result[0] += 10582551;
    result[1] += 43104539;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3cd4d402))) ) ) {
    result[0] += 45634027;
    result[1] += 8053063;
  } else {
    result[0] += 15167205;
    result[1] += 38519886;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 52494044;
    result[1] += 1193046;
  } else {
    result[0] += 16253889;
    result[1] += 37433201;
  }
  if ( ( !(data[27].missing != -1) || ((*( ((int*)(data)) + 27 ) ^ (0b1 << 31))>((int)(0x3f6fa92a))) ) ) {
    result[0] += 52466930;
    result[1] += 1220161;
  } else {
    result[0] += 16669964;
    result[1] += 37017126;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c20a527))) ) ) {
    result[0] += 51581715;
    result[1] += 2105376;
  } else {
    result[0] += 10889362;
    result[1] += 42797728;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e691d15))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 10840662;
    result[1] += 42846428;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3c8b2e9d))) ) ) {
    result[0] += 51130563;
    result[1] += 2556528;
  } else {
    result[0] += 11005853;
    result[1] += 42681237;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3e94115e))) ) ) {
    result[0] += 34620647;
    result[1] += 19066443;
  } else {
    result[0] += 10324440;
    result[1] += 43362650;
  }
  if ( ( !(data[15].missing != -1) || ((*( ((int*)(data)) + 15 ) ^ (0b1 << 31))>((int)(0x3f202214))) ) ) {
    result[0] += 53687091;
    result[1] += 0;
  } else {
    result[0] += 17061575;
    result[1] += 36625515;
  }
  if ( ( !(data[4].missing != -1) || ((*( ((int*)(data)) + 4 ))<=((int)(0x3e6d18d2))) ) ) {
    result[0] += 52897575;
    result[1] += 789516;
  } else {
    result[0] += 11563373;
    result[1] += 42123717;
  }
  
  // Apply base_scores
  result[0] += 0;
  result[1] += 0;
  
  // Apply postprocessor
  if (!pred_margin) { postprocess(result); }
}

void postprocess(uint32_t* result) {
  // Do nothing
}


int main() {
    uint32_t result[MAX_N_CLASS];
    union Entry input[TEST_DATA_COLS];
    char line[1024];
    

    FILE* file = fopen("./codegen/dataset_52/split_3/test_data.csv", "r");
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
