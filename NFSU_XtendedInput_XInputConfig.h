#pragma once

int bStringHash(char* a1);

//
// Constants for gamepad buttons -- from XInput.h
//
#define XINPUT_GAMEPAD_DPAD_UP          0x0001
#define XINPUT_GAMEPAD_DPAD_DOWN        0x0002
#define XINPUT_GAMEPAD_DPAD_LEFT        0x0004
#define XINPUT_GAMEPAD_DPAD_RIGHT       0x0008
#define XINPUT_GAMEPAD_START            0x0010
#define XINPUT_GAMEPAD_BACK             0x0020
#define XINPUT_GAMEPAD_LEFT_THUMB       0x0040
#define XINPUT_GAMEPAD_RIGHT_THUMB      0x0080
#define XINPUT_GAMEPAD_LEFT_SHOULDER    0x0100
#define XINPUT_GAMEPAD_RIGHT_SHOULDER   0x0200
#define XINPUT_GAMEPAD_A                0x1000
#define XINPUT_GAMEPAD_B                0x2000
#define XINPUT_GAMEPAD_X                0x4000
#define XINPUT_GAMEPAD_Y                0x8000

// other gamepad stuff -- sticks & triggers
#define XINPUT_GAMEPAD_LT_CONFIGDEF 1
#define XINPUT_GAMEPAD_RT_CONFIGDEF 2
#define XINPUT_GAMEPAD_LS_X_CONFIGDEF 3
#define XINPUT_GAMEPAD_LS_Y_CONFIGDEF 4
#define XINPUT_GAMEPAD_RS_X_CONFIGDEF 5
#define XINPUT_GAMEPAD_RS_Y_CONFIGDEF 6
#define XINPUT_GAMEPAD_DPAD_CONFIGDEF 7
#define XINPUT_GAMEPAD_LS_UP_CONFIGDEF 8
#define XINPUT_GAMEPAD_LS_DOWN_CONFIGDEF 9
#define XINPUT_GAMEPAD_LS_LEFT_CONFIGDEF 10
#define XINPUT_GAMEPAD_LS_RIGHT_CONFIGDEF 11
#define XINPUT_GAMEPAD_RS_UP_CONFIGDEF 12
#define XINPUT_GAMEPAD_RS_DOWN_CONFIGDEF 13
#define XINPUT_GAMEPAD_RS_LEFT_CONFIGDEF 14
#define XINPUT_GAMEPAD_RS_RIGHT_CONFIGDEF 15

// comparing strings by hash
#define XINPUT_GAMEPAD_DPAD_UP_HASH         0xE4BBAB51 
#define XINPUT_GAMEPAD_DPAD_DOWN_HASH       0x024A7864 
#define XINPUT_GAMEPAD_DPAD_LEFT_HASH       0x024EAEB7 
#define XINPUT_GAMEPAD_DPAD_RIGHT_HASH      0x4C934D2A 
#define XINPUT_GAMEPAD_START_HASH           0xB60DCFE2 
#define XINPUT_GAMEPAD_BACK_HASH            0xA0A172C5 
#define XINPUT_GAMEPAD_LEFT_THUMB_HASH      0xD89FD05E 
#define XINPUT_GAMEPAD_RIGHT_THUMB_HASH     0x4A112211 
#define XINPUT_GAMEPAD_LEFT_SHOULDER_HASH   0x80D7FD44 
#define XINPUT_GAMEPAD_RIGHT_SHOULDER_HASH  0x7575D617
#define XINPUT_GAMEPAD_LB_HASH				0x74BF0962
#define XINPUT_GAMEPAD_RB_HASH				0x74BF0A28
#define XINPUT_GAMEPAD_A_HASH               0xA6726515 
#define XINPUT_GAMEPAD_B_HASH               0xA6726516 
#define XINPUT_GAMEPAD_X_HASH               0xA672652C 
#define XINPUT_GAMEPAD_Y_HASH               0xA672652D 
#define XINPUT_GAMEPAD_LT_HASH              0x74BF0974
#define XINPUT_GAMEPAD_RT_HASH              0x74BF0A3A
#define XINPUT_GAMEPAD_LS_X_HASH            0xA0A73ECA
#define XINPUT_GAMEPAD_LS_Y_HASH            0xA0A73ECB
#define XINPUT_GAMEPAD_RS_X_HASH            0xA0AA8910
#define XINPUT_GAMEPAD_RS_Y_HASH            0xA0AA8911
#define XINPUT_GAMEPAD_DPAD_HASH            0xA0A2CB0D
#define XINPUT_GAMEPAD_LS_UP_HASH			0xB58F17F7
#define XINPUT_GAMEPAD_LS_DOWN_HASH			0x55ABA68A
#define XINPUT_GAMEPAD_LS_LEFT_HASH			0x55AFDCDD
#define XINPUT_GAMEPAD_LS_RIGHT_HASH		0x0C1A4010
#define XINPUT_GAMEPAD_RS_UP_HASH			0xB5FBAAFD
#define XINPUT_GAMEPAD_RS_DOWN_HASH			0x23891310
#define XINPUT_GAMEPAD_RS_LEFT_HASH			0x238D4963
#define XINPUT_GAMEPAD_RS_RIGHT_HASH		0x95A53D56


short int ConvertXInputNameToBitmask(char* InName)
{
	switch (bStringHash(InName))
	{
	case XINPUT_GAMEPAD_DPAD_UP_HASH:
		return XINPUT_GAMEPAD_DPAD_UP;
	case XINPUT_GAMEPAD_DPAD_DOWN_HASH:
		return XINPUT_GAMEPAD_DPAD_DOWN;
	case XINPUT_GAMEPAD_DPAD_LEFT_HASH:
		return XINPUT_GAMEPAD_DPAD_LEFT;
	case XINPUT_GAMEPAD_DPAD_RIGHT_HASH:
		return XINPUT_GAMEPAD_DPAD_RIGHT;
	case XINPUT_GAMEPAD_START_HASH:
		return XINPUT_GAMEPAD_START;
	case XINPUT_GAMEPAD_BACK_HASH:
		return XINPUT_GAMEPAD_BACK;
	case XINPUT_GAMEPAD_LEFT_THUMB_HASH:
		return XINPUT_GAMEPAD_LEFT_THUMB;
	case XINPUT_GAMEPAD_RIGHT_THUMB_HASH:
		return XINPUT_GAMEPAD_RIGHT_THUMB;
	case XINPUT_GAMEPAD_LB_HASH:
	case XINPUT_GAMEPAD_LEFT_SHOULDER_HASH:
		return XINPUT_GAMEPAD_LEFT_SHOULDER;
	case XINPUT_GAMEPAD_RB_HASH:
	case XINPUT_GAMEPAD_RIGHT_SHOULDER_HASH:
		return XINPUT_GAMEPAD_RIGHT_SHOULDER;
	case XINPUT_GAMEPAD_A_HASH:
		return XINPUT_GAMEPAD_A;
	case XINPUT_GAMEPAD_B_HASH:
		return XINPUT_GAMEPAD_B;
	case XINPUT_GAMEPAD_X_HASH:
		return XINPUT_GAMEPAD_X;
	case XINPUT_GAMEPAD_Y_HASH:
		return XINPUT_GAMEPAD_Y;

	default:
		break;
	}
	return 0;
}

int ConvertXInputOtherConfigDef(char* InName)
{
	switch (bStringHash(InName))
	{
		case XINPUT_GAMEPAD_LT_HASH:
			return XINPUT_GAMEPAD_LT_CONFIGDEF;
		case XINPUT_GAMEPAD_RT_HASH:
			return XINPUT_GAMEPAD_RT_CONFIGDEF;
		case XINPUT_GAMEPAD_LS_X_HASH:
			return XINPUT_GAMEPAD_LS_X_CONFIGDEF;
		case XINPUT_GAMEPAD_LS_Y_HASH:
			return XINPUT_GAMEPAD_LS_Y_CONFIGDEF;
		case XINPUT_GAMEPAD_RS_X_HASH:
			return XINPUT_GAMEPAD_RS_X_CONFIGDEF;
		case XINPUT_GAMEPAD_RS_Y_HASH:
			return XINPUT_GAMEPAD_RS_Y_CONFIGDEF;
		case XINPUT_GAMEPAD_DPAD_HASH:
			return XINPUT_GAMEPAD_DPAD_CONFIGDEF;
		case XINPUT_GAMEPAD_LS_UP_HASH:
			return XINPUT_GAMEPAD_LS_UP_CONFIGDEF;
		case XINPUT_GAMEPAD_LS_DOWN_HASH:
			return XINPUT_GAMEPAD_LS_DOWN_CONFIGDEF;
		case XINPUT_GAMEPAD_LS_LEFT_HASH:
			return XINPUT_GAMEPAD_LS_LEFT_CONFIGDEF;
		case XINPUT_GAMEPAD_LS_RIGHT_HASH:
			return XINPUT_GAMEPAD_LS_RIGHT_CONFIGDEF;
		case XINPUT_GAMEPAD_RS_UP_HASH:
			return XINPUT_GAMEPAD_RS_UP_CONFIGDEF;
		case XINPUT_GAMEPAD_RS_DOWN_HASH:
			return XINPUT_GAMEPAD_RS_DOWN_CONFIGDEF;
		case XINPUT_GAMEPAD_RS_LEFT_HASH:
			return XINPUT_GAMEPAD_RS_LEFT_CONFIGDEF;
		case XINPUT_GAMEPAD_RS_RIGHT_HASH:
			return XINPUT_GAMEPAD_RS_RIGHT_CONFIGDEF;
	}
	return 0;
}


