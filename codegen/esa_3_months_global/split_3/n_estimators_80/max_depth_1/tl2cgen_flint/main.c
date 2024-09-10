
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
  return 87;
}
const char* get_threshold_type(void) {
  return "float32";
}
const char* get_leaf_output_type(void) {
  return "float32";
}


void predict(union Entry* data, int pred_margin, float* result) {
  unsigned int tmp;
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.0052179251074278695;
    result[1] += 0.9947820748925721;
  } else {
    result[0] += 0.8109163851351351;
    result[1] += 0.18908361486486486;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7967762234936177;
    result[1] += 0.20322377650638232;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06084385306493802;
    result[1] += 0.939156146935062;
  } else {
    result[0] += 0.9372818180553817;
    result[1] += 0.0627181819446183;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9402927161334241;
    result[1] += 0.0597072838665759;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 0.008142431791942639;
    result[1] += 0.9918575682080574;
  } else {
    result[0] += 0.7666224327190552;
    result[1] += 0.2333775672809448;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8019603967303466;
    result[1] += 0.1980396032696534;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.059715548721891214;
    result[1] += 0.9402844512781088;
  } else {
    result[0] += 0.9378606517677991;
    result[1] += 0.06213934823220093;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8022849446760092;
    result[1] += 0.19771505532399075;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8019896279175112;
    result[1] += 0.19801037208248884;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8027524799600653;
    result[1] += 0.19724752003993476;
  }
  if ( ( !(data[56].missing != -1) || ((*( ((int*)(data)) + 56 ))<=((int)(0x3f36800b))) ) ) {
    result[0] += 0.04517575677636352;
    result[1] += 0.9548242432236365;
  } else {
    result[0] += 0.7565340110365663;
    result[1] += 0.2434659889634338;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05787242243206783;
    result[1] += 0.9421275775679322;
  } else {
    result[0] += 0.9356328195202875;
    result[1] += 0.06436718047971245;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06139816471842516;
    result[1] += 0.9386018352815748;
  } else {
    result[0] += 0.9369732146576503;
    result[1] += 0.06302678534234972;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7970046935330976;
    result[1] += 0.2029953064669025;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8012891740792237;
    result[1] += 0.1987108259207763;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8060841605247341;
    result[1] += 0.19391583947526594;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9401136866469246;
    result[1] += 0.05988631335307532;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8094878725121977;
    result[1] += 0.1905121274878023;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 0.009518928022259647;
    result[1] += 0.9904810719777404;
  } else {
    result[0] += 0.7556136312690334;
    result[1] += 0.2443863687309667;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005342695771637918;
    result[1] += 0.9946573042283621;
  } else {
    result[0] += 0.8086477728991054;
    result[1] += 0.19135222710089458;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8024127301121026;
    result[1] += 0.19758726988789746;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.061167344622079275;
    result[1] += 0.9388326553779207;
  } else {
    result[0] += 0.9374830381684701;
    result[1] += 0.06251696183152987;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8056992854017792;
    result[1] += 0.1943007145982208;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.003804890219560878;
    result[1] += 0.9961951097804391;
  } else {
    result[0] += 0.7638815031463263;
    result[1] += 0.23611849685367367;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8010686108640167;
    result[1] += 0.19893138913598335;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7775635801601799;
    result[1] += 0.22243641983982015;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8014215723310648;
    result[1] += 0.19857842766893521;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05777351247600768;
    result[1] += 0.9422264875239923;
  } else {
    result[0] += 0.9360238128201578;
    result[1] += 0.06397618717984217;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8010723331087204;
    result[1] += 0.1989276668912796;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9402838762381293;
    result[1] += 0.05971612376187072;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 0.010003615764734242;
    result[1] += 0.9899963842352658;
  } else {
    result[0] += 0.7654668103975195;
    result[1] += 0.23453318960248046;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06011001517450683;
    result[1] += 0.9398899848254931;
  } else {
    result[0] += 0.9372080088987764;
    result[1] += 0.06279199110122358;
  }
  if ( ( !(data[59].missing != -1) || ((*( ((int*)(data)) + 59 ))<=((int)(0x3ec73f8a))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7972268961011176;
    result[1] += 0.2027731038988823;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.775959326685676;
    result[1] += 0.22404067331432395;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8041509081570715;
    result[1] += 0.1958490918429285;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8013446119726201;
    result[1] += 0.19865538802737992;
  }
  if ( ( !(data[6].missing != -1) || ((*( ((int*)(data)) + 6 ))<=((int)(0x3e049398))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7785047411879107;
    result[1] += 0.2214952588120893;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005635542517466322;
    result[1] += 0.9943644574825337;
  } else {
    result[0] += 0.8088870397824826;
    result[1] += 0.19111296021751742;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.057676420296259294;
    result[1] += 0.9423235797037407;
  } else {
    result[0] += 0.9361571091474006;
    result[1] += 0.06384289085259946;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9403197085649816;
    result[1] += 0.05968029143501842;
  }
  if ( ( !(data[45].missing != -1) || ((*( ((int*)(data)) + 45 ))<=((int)(0x3f3dbb99))) ) ) {
    result[0] += 0.004431221117933785;
    result[1] += 0.9955687788820662;
  } else {
    result[0] += 0.763574404053927;
    result[1] += 0.23642559594607304;
  }
  if ( ( !(data[32].missing != -1) || ((*( ((int*)(data)) + 32 ))<=((int)(0x3eb621fc))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.9396037240391502;
    result[1] += 0.06039627596084984;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47367328332475783;
    result[1] += 0.5263267166752421;
  } else {
    result[0] += 0.9983562410380163;
    result[1] += 0.0016437589619837023;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8024389677629059;
    result[1] += 0.19756103223709415;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8014821181745322;
    result[1] += 0.1985178818254678;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8029385941960729;
    result[1] += 0.19706140580392703;
  }
  if ( ( !(data[7].missing != -1) || ((*( ((int*)(data)) + 7 ))<=((int)(0x3f440eb4))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8075666149231434;
    result[1] += 0.19243338507685664;
  }
  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7537740021074355;
    result[1] += 0.24622599789256447;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8089501565838382;
    result[1] += 0.1910498434161618;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06178432834394296;
    result[1] += 0.938215671656057;
  } else {
    result[0] += 0.9372058038530596;
    result[1] += 0.06279419614694036;
  }
  if ( ( !(data[25].missing != -1) || ((*( ((int*)(data)) + 25 ))<=((int)(0x3f46693e))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8090045315012425;
    result[1] += 0.19099546849875748;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8023284847429085;
    result[1] += 0.19767151525709142;
  }
  if ( ( !(data[52].missing != -1) || ((*( ((int*)(data)) + 52 ))<=((int)(0x3f481571))) ) ) {
    result[0] += 0.010292212465812581;
    result[1] += 0.9897077875341874;
  } else {
    result[0] += 0.7561779422552637;
    result[1] += 0.24382205774473628;
  }
  if ( ( !(data[42].missing != -1) || ((*( ((int*)(data)) + 42 ))<=((int)(0x3aeee91c))) ) ) {
    result[0] += 0.009325287986834888;
    result[1] += 0.9906747120131651;
  } else {
    result[0] += 0.7675475845531299;
    result[1] += 0.23245241544687015;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.057273923815422734;
    result[1] += 0.9427260761845773;
  } else {
    result[0] += 0.9355123674911661;
    result[1] += 0.06448763250883392;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4726227908489645;
    result[1] += 0.5273772091510355;
  } else {
    result[0] += 0.9982767453774859;
    result[1] += 0.0017232546225140887;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.49642291303791614;
    result[1] += 0.5035770869620838;
  } else {
    result[0] += 0.9211299649255854;
    result[1] += 0.07887003507441463;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05754830802229159;
    result[1] += 0.9424516919777084;
  } else {
    result[0] += 0.9349396922607954;
    result[1] += 0.06506030773920453;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06050985685227078;
    result[1] += 0.9394901431477292;
  } else {
    result[0] += 0.9375785824933834;
    result[1] += 0.06242141750661656;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8017508948824905;
    result[1] += 0.19824910511750954;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.47261467351563136;
    result[1] += 0.5273853264843686;
  } else {
    result[0] += 0.9984496846915105;
    result[1] += 0.0015503153084894335;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.5004722178498348;
    result[1] += 0.4995277821501653;
  } else {
    result[0] += 0.9196097437626433;
    result[1] += 0.08039025623735671;
  }
  if ( ( !(data[26].missing != -1) || ((*( ((int*)(data)) + 26 ))<=((int)(0x3f4ee256))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.8019235013299572;
    result[1] += 0.19807649867004287;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06148613791390412;
    result[1] += 0.9385138620860959;
  } else {
    result[0] += 0.9378809205189186;
    result[1] += 0.062119079481081384;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.059538435367720716;
    result[1] += 0.9404615646322793;
  } else {
    result[0] += 0.9369243941999122;
    result[1] += 0.06307560580008771;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 0.004311691557832906;
    result[1] += 0.995688308442167;
  } else {
    result[0] += 0.7645397298360075;
    result[1] += 0.23546027016399254;
  }
  if ( ( !(data[23].missing != -1) || ((*( ((int*)(data)) + 23 ))<=((int)(0x3e1b4246))) ) ) {
    result[0] += 0.497575751615346;
    result[1] += 0.5024242483846539;
  } else {
    result[0] += 0.9207727737433995;
    result[1] += 0.07922722625660052;
  }
  if ( ( !(data[21].missing != -1) || ((*( ((int*)(data)) + 21 ))<=((int)(0x3e93eafe))) ) ) {
    result[0] += 0.4700470688917415;
    result[1] += 0.5299529311082585;
  } else {
    result[0] += 0.9822250668103932;
    result[1] += 0.017774933189606774;
  }
  if ( ( !(data[57].missing != -1) || ((*( ((int*)(data)) + 57 ))<=((int)(0x3dd00b58))) ) ) {
    result[0] += 0.8001305769652989;
    result[1] += 0.19986942303470112;
  } else {
    result[0] += 0;
    result[1] += 1;
  }
  if ( ( !(data[13].missing != -1) || ((*( ((int*)(data)) + 13 ))<=((int)(0x3e8cf75c))) ) ) {
    result[0] += 0.4710516590198217;
    result[1] += 0.5289483409801783;
  } else {
    result[0] += 0.9984816808960418;
    result[1] += 0.001518319103958141;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.057425060296313314;
    result[1] += 0.9425749397036867;
  } else {
    result[0] += 0.9345196025443812;
    result[1] += 0.06548039745561884;
  }
  if ( ( !(data[53].missing != -1) || ((*( ((int*)(data)) + 53 ))<=((int)(0x3f36bc04))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.7544583117131387;
    result[1] += 0.2455416882868613;
  }
  if ( ( !(data[54].missing != -1) || ((*( ((int*)(data)) + 54 ))<=((int)(0x3f621b95))) ) ) {
    result[0] += 0.014570887367040652;
    result[1] += 0.9854291126329593;
  } else {
    result[0] += 0.7565168404126147;
    result[1] += 0.24348315958738528;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.0045444130451386235;
    result[1] += 0.9954555869548614;
  } else {
    result[0] += 0.8087619002899503;
    result[1] += 0.19123809971004965;
  }
  if ( ( !(data[24].missing != -1) || ((*( ((int*)(data)) + 24 ))<=((int)(0x3eb3ea17))) ) ) {
    result[0] += 0.06106306885915946;
    result[1] += 0.9389369311408405;
  } else {
    result[0] += 0.9375561013965333;
    result[1] += 0.06244389860346663;
  }
  if ( ( !(data[14].missing != -1) || ((*( ((int*)(data)) + 14 ))<=((int)(0x3eb4a764))) ) ) {
    result[0] += 0.05810090396353241;
    result[1] += 0.9418990960364676;
  } else {
    result[0] += 0.9356369312373953;
    result[1] += 0.06436306876260464;
  }
  if ( ( !(data[34].missing != -1) || ((*( ((int*)(data)) + 34 ))<=((int)(0x3f4fd360))) ) ) {
    result[0] += 0;
    result[1] += 1;
  } else {
    result[0] += 0.799517483940354;
    result[1] += 0.20048251605964595;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.0053345526596555405;
    result[1] += 0.9946654473403445;
  } else {
    result[0] += 0.8094659339110829;
    result[1] += 0.19053406608891707;
  }
  if ( ( !(data[16].missing != -1) || ((*( ((int*)(data)) + 16 ))<=((int)(0x3f42a534))) ) ) {
    result[0] += 0.005366522036994748;
    result[1] += 0.9946334779630053;
  } else {
    result[0] += 0.8107536732320919;
    result[1] += 0.18924632676790812;
  }
  if ( ( !(data[41].missing != -1) || ((*( ((int*)(data)) + 41 ))<=((int)(0x3ae6f353))) ) ) {
    result[0] += 0.0036243204399175155;
    result[1] += 0.9963756795600824;
  } else {
    result[0] += 0.7650769563074264;
    result[1] += 0.23492304369257352;
  }
  
  // Average tree outputs
  result[0] /= 80;
  result[1] /= 80;
  
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
    

    FILE* file = fopen("./codegen/esa_3_months_global/split_3/test_data.csv", "r");
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
