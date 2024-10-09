#pragma once
#define GAMEFLOWMANAGER_STATUS_ADDR 0x008654A4
#define JOYSTICKTYPE_P1_ADDR 0x00864788
#define JOYSTICKTYPE_P2_ADDR 0x00864789
#define NUMSCANNERCONFIGS_ADDR 0x007FE770
#define DEVICE_COUNT_ADDR 0x00870764
#define GAME_HWND_ADDR 0x00870990
#define JOY2_ADDR 0x865768

// functions
#define INITJOY_ADDR 0x00579550
void(*FESendKeystroke)(unsigned int key) = (void(*)(unsigned int))0x0055DBD0;


// injection addresses
#define INITJOY_CALL_ADDR 0x0057ED80

#define ACTUALREADJOYDATA_CALL_ADDR1 0x005D2C97

#define EVENTGEN_JMP_ADDR_ENTRY 0x005C19D7
#define EVENTGEN_JMP_ADDR_EXIT 0x005C20D4

// NFSU2 - no FE hooks (for now...)
//#define FENG_SENDMSG_HOOK_ADDR 0x004F7C08

#define DINPUTENUM_JMP_ADDR_ENTRY 0x005D04B3
#define DINPUTENUM_JMP_ADDR_EXIT 0x005D04C8

#define JOYBUFFER_JMP_ADDR_ENTRY 0x005CFD7D
#define JOYBUFFER_JMP_ADDR_EXIT 0x5CFFDE

#define SCANNERCONFIG_POINTER_ADDR 0x00572149

#define WNDPROC_POINTER_ADDR 0x5D25A5

#define FINDSCANNERCONFIG_ADDR 0x00572120

#define LASTCONTROLLED_KB 0
#define LASTCONTROLLED_CONTROLLER 1
unsigned int LastControlledDevice = 0; // 0 = keyboard, 1 = controller
unsigned int LastControlledDeviceOldState = 0;

#define STEER_HANDLER_ADDR1 0x0041E083
#define STEER_HANDLER_ADDR2 0x0041E09A
#define REALDRIVER_STEER_OFFSET 0x2C8

#define DISABLE_WHEEL_ADDR 0x005D2C83
