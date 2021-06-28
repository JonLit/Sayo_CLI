#pragma once

#define S_NOP 1
#define S_JMP 2
#define S_SJMP 3
#define S_AJMP 4
#define S_SLEEP_X256 5		//���ӳ�
#define S_SLEEP 6	//���ӳ�
#define S_SLEEP_RAND_X256 7	//������ӳ�
#define S_SLEEP_RAND 8	//����ӳ�
#define S_SLEEP_X256_VAL 9	//��ʱ�� ����
#define S_SLEEP_VAL 10		//��ʱ�� ����
#define S_SLEEP_RAND_X8_VAL 11	//��ʱ��� ����
#define S_SLEEP_RAND_VAL 12	//��ʱ��� ����

#define S_SK 0x10
#define S_GK 0X11
#define S_MK 0X12
#define S_MU 0x13

#define S_SK_VAL 0x14
#define S_GK_VAL 0X15
#define S_MK_VAL 0X16
#define S_MU_VAL 0x17

#define S_USK 0X18
#define S_UGK 0X19
#define S_UMK 0X1A
#define S_UMU 0x1B

#define S_USK_VAL 0X1C
#define S_UGK_VAL 0X1D
#define S_UMK_VAL 0X1E
#define S_UMU_VAL 0x1F


#define S_UPDATE 0x20

#define MO_X 0
#define MO_Y 1
#define MO_S 2

#define S_MO_XYZ 0x21
#define S_MO_XYZ_VAL 0x22
#define S_GA_XYZ 0x23
#define S_GA_XYZ_VAL 0x24
#define S_TB_XY 0x25
#define S_TB_XY_VAL 0x26

#define S_GAK 0x2C
#define S_GAK_VAL 0x2D
#define S_UGAK 0x2E
#define S_UGAK_VAL 0x2F

#define S_C2K 0x30
#define S_U2K 0x31


#define S_JZ 0x40
#define S_JNZ 0x41
#define S_DJNZ 0x42
#define S_CJNE 0x43
#define S_CALL 0x44
#define S_RET 0x45
#define S_ANL 0x46
#define S_ANLD 0x47


#define S_ADD_DPTR_DATA 0x48
#define S_ADD_R_DATA 0x49
#define S_ADD_DPTR_R 0x48
#define S_ADD_R_R 0x49
#define S_DEC_DATA 0x4c
#define S_DEC 0x4d
#define S_INC_DATA 0x4E
#define S_INC 0x4F

#define S_DJNZ_VAL 0x52

#define S_LED_CTRL 0xE0
#define S_LED_COL 0xE1

#define S_WHILE_UPDATE 0xF4

#define S_VALUE_RELOAD 0xF7
#define S_WHILE_UP 0xF9
#define S_WHILE_DOWN 0xFA		//����̧��֮ǰ����
#define S_IF_UP_EXIT 0xFB
#define S_IF_DOWN_EXIT 0xFC
#define S_IF_KA_EXIT 0xFD
#define S_RES 0xFE
#define S_EXIT 0xFF
#define S_EXIT_NOT_CLEAN 0


#define S_DATA_V_0 0
#define S_DATA_V_1 1
#define S_DATA_V_2 2
#define S_DATA_V_3 3
#define S_DATA_R0 4
#define S_DATA_R1 5
#define S_DATA_R2 6
#define S_DATA_R3 7
#define S_DATA_RET 8
#define S_DATA_DPTR 9
#define S_DATA_IO 10



#define CV0 {}
#define CV1 {this->script[num].value[0] = buf[i];i++;}
#define CV2 {this->script[num].value[0] = buf[i];i++;this->script[num].value[1] = buf[i];i++;}
#define CV3 {this->script[num].value[0] = buf[i];i++;this->script[num].value[1] = buf[i];i++;this->script[num].value[2] = buf[i];i++;}
#define CV4 {this->script[num].value[0] = buf[i];i++;this->script[num].value[1] = buf[i];i++;this->script[num].value[2] = buf[i];i++;this->script[num].value[3] = buf[i];i++;}

#define WCV0 {}
#define WCV1 {buf[i] = this->script[step].value[0];i++;}
#define WCV2 {buf[i] = this->script[step].value[0];i++;buf[i] = this->script[step].value[1];i++;}
#define WCV3 {buf[i] = this->script[step].value[0];i++;buf[i] = this->script[step].value[1];i++;buf[i] = this->script[step].value[2];i++;}
#define WCV4 {buf[i] = this->script[step].value[0];i++;buf[i] = this->script[step].value[1];i++;buf[i] = this->script[step].value[2];i++;buf[i] = this->script[step].value[3];i++;}

