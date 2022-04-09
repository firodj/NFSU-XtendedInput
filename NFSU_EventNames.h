#pragma once
#define JOY_EVENT_NULL 0x0
#define JOY_EVENT_TYPE_CHANGED 0x1
#define JOY_EVENT_EXIT_DEMO_DISC 0x2
#define JOY_EVENT_SCROLL_UP 0x3
#define JOY_EVENT_SCROLL_DOWN 0x4
#define JOY_EVENT_SCROLL_LEFT 0x5
#define JOY_EVENT_SCROLL_RIGHT 0x6
#define JOY_EVENT_FENG_START 0x16
#define JOY_EVENT_FENG_BUTTON0 0x17
#define JOY_EVENT_FENG_BUTTON1 0x18
#define JOY_EVENT_FENG_BUTTON2 0x19
#define JOY_EVENT_FENG_BUTTON3 0x1A
#define JOY_EVENT_FENG_LTRIGGER 0x1B
#define JOY_EVENT_FENG_RTRIGGER 0x1C
#define JOY_EVENT_FENG_SELECT 0x1D
#define JOY_EVENT_FENG_SELECT_ALTERNATE 0x1E
#define JOY_EVENT_FENG_CANCEL 0x1F
#define JOY_EVENT_FENG_CANCEL_ALTERNATE 0x20
#define JOY_EVENT_FENG_HELP 0x21
#define JOY_EVENT_FENG_PAD_UP 0x22
#define JOY_EVENT_FENG_PAD_DOWN 0x23
#define JOY_EVENT_FENG_PAD_LEFT 0x24
#define JOY_EVENT_FENG_PAD_RIGHT 0x25
#define JOY_EVENT_FENG_PAD_UP_ALTERNATE 0x26
#define JOY_EVENT_FENG_PAD_DOWN_ALTERNATE 0x27
#define JOY_EVENT_FENG_PAD_LEFT_ALTERNATE 0x28
#define JOY_EVENT_FENG_PAD_RIGHT_ALTERNATE 0x29
#define JOY_EVENT_FENG_QUIT 0x2A
#define JOY_EVENT_FENG_RACEOPTIONS 0x2B
#define JOY_EVENT_START 0x7
#define JOY_EVENT_SELECT 0x8
#define JOY_EVENT_MENU_SELECT 0x9
#define JOY_EVENT_MENU_CANCEL 0xA
#define JOY_EVENT_MENU_BACK 0xB
#define JOY_EVENT_MENU_HELP 0xC
#define JOY_EVENT_MENU_L1 0xD
#define JOY_EVENT_MENU_L2 0xE
#define JOY_EVENT_MENU_R1 0xF
#define JOY_EVENT_MENU_R2 0x10
#define JOY_EVENT_MENU_SQUARE 0x11
#define JOY_EVENT_MENU_ANALOG_LEFT 0x12
#define JOY_EVENT_MENU_ANALOG_RIGHT 0x13
#define JOY_EVENT_MENU_ANALOG_UP 0x14
#define JOY_EVENT_MENU_ANALOG_DOWN 0x15
#define JOY_EVENT_SKIP_DEMO_MODE 0x2D
#define JOY_EVENT_MAIN_MENU_SELECT_TRANSMISSION 0x2E
#define JOY_EVENT_ANY 0x2F
#define JOY_EVENT_EXIT_EDIT_TEXT 0x30
#define JOY_EVENT_CLEAR_TEXT 0x31
#define JOY_EVENT_CANCEL_EDIT_TEXT 0x32
#define JOY_EVENT_DELETE_CHAR 0x33
#define JOY_EVENT_ROTATE_LETTER_UP 0x34
#define JOY_EVENT_ROTATE_LETTER_DOWN 0x35
#define JOY_EVENT_PREV_CHAR 0x36
#define JOY_EVENT_NEXT_CHAR 0x37
#define JOY_EVENT_CARSEL_CHANGE_MODE 0x38
#define JOY_EVENT_CARSEL_UNLOCK 0x39
#define JOY_EVENT_CARSEL_ORBIT_LEFT 0x3A
#define JOY_EVENT_CARSEL_ORBIT_RIGHT 0x3B
#define JOY_EVENT_CARSEL_ORBIT_UP 0x3C
#define JOY_EVENT_CARSEL_ORBIT_DOWN 0x3D
#define JOY_EVENT_CARSEL_ORBIT_LEFTRIGHT 0x40
#define JOY_EVENT_CARSEL_ORBIT_UPDOWN 0x41
#define JOY_EVENT_CARSEL_ORBIT_INOUT 0x42
#define JOY_EVENT_CARSEL_ORBIT_IN 0x3E
#define JOY_EVENT_CARSEL_ORBIT_OUT 0x3F
#define JOY_EVENT_CHANGE_DEBUG_CAMERA 0x44
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_RIGHT 0x45
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFT 0x46
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_UP 0x47
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_DOWN 0x48
#define JOY_EVENT_DEBUG_CAMERA_MOVE_CLOSER 0x49
#define JOY_EVENT_DEBUG_CAMERA_MOVE_FARTHER 0x4A
#define JOY_EVENT_DEBUG_CAMERA_NEXT_CAR 0x4B
#define JOY_EVENT_DEBUG_CAMERA_PREV_CAR 0x4C
#define JOY_EVENT_DEBUG_CAMERA_FOLLOW_CHOPPER 0x4D
#define JOY_EVENT_DEBUG_CAMERA_TURN_LEFT 0x4E
#define JOY_EVENT_DEBUG_CAMERA_TURN_RIGHT 0x4F
#define JOY_EVENT_DEBUG_CAMERA_TURN_DOWN 0x50
#define JOY_EVENT_DEBUG_CAMERA_TURN_UP 0x51
#define JOY_EVENT_DEBUG_CAMERA_MOVE_DOWN 0x52
#define JOY_EVENT_DEBUG_CAMERA_MOVE_UP 0x53
#define JOY_EVENT_DEBUG_CAMERA_MOVE_FWD 0x54
#define JOY_EVENT_DEBUG_CAMERA_MOVE_BACK 0x55
#define JOY_EVENT_DEBUG_CAMERA_MOVE_LEFT 0x56
#define JOY_EVENT_DEBUG_CAMERA_MOVE_RIGHT 0x57
#define JOY_EVENT_DEBUG_CAMERA_TURBO 0x58
#define JOY_EVENT_DEBUG_CAMERA_SUPER_TURBO 0x59
#define JOY_EVENT_DEBUG_CAMERA_SLOW 0x5A
#define JOY_EVENT_DEBUG_CAMERA_FORWARD_BLINK 0x5B
#define JOY_EVENT_DEBUG_CAMERA_BACKWARD_BLINK 0x5C
#define JOY_EVENT_DEBUG_CAMERA_DROP_CAR 0x5D
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFTRIGHT 0x5E
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_UPDOWN 0x5F
#define JOY_EVENT_DEBUG_CAMERA_STRAFE_LEFTRIGHT 0x60
#define JOY_EVENT_DEBUG_CAMERA_INOUT 0x61
#define JOY_EVENT_TRACKROUTE_EDITOR_TURN_LEFTRIGHT 0x62
#define JOY_EVENT_TRACKROUTE_EDITOR_TURN_UPDOWN 0x63
#define JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_FORWARDBACKWARD 0x64
#define JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_LEFTRIGHT 0x65
#define JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_TURBO 0x66
#define JOY_EVENT_TRACKROUTE_EDITOR_MOVE_UP 0x67
#define JOY_EVENT_TRACKROUTE_EDITOR_MOVE_DOWN 0x68
#define JOY_EVENT_TRACKROUTE_EDITOR_DPAD_UP 0x69
#define JOY_EVENT_TRACKROUTE_EDITOR_DPAD_DOWN 0x6A
#define JOY_EVENT_TRACKROUTE_EDITOR_DPAD_LEFT 0x6B
#define JOY_EVENT_TRACKROUTE_EDITOR_DPAD_RIGHT 0x6C
#define JOY_EVENT_TRACKROUTE_EDITOR_NEXT_ROUTE 0x6D
#define JOY_EVENT_TRACKROUTE_EDITOR_NEXT_POINT 0x6E
#define JOY_EVENT_TRACKROUTE_EDITOR_PREV_POINT 0x6F
#define JOY_EVENT_TRACKROUTE_EDITOR_RESET_POS 0x70
#define JOY_EVENT_TRACKROUTE_EDITOR_EDIT_RIGHT_WIDTH 0x71
#define JOY_EVENT_TRACKROUTE_EDITOR_EDIT_LEFT_WIDTH 0x72
#define JOY_EVENT_TRACKROUTE_EDITOR_EDIT_POSITION 0x73
#define JOY_EVENT_TOGGLE_TRACK_MARKER 0x74
#define JOY_EVENT_CAMERA_POV_CHANGE 0x75
#define JOY_EVENT_CAMERA_LOOKBACK 0x76
#define JOY_EVENT_ZONE_FREEZE 0x77
#define JOY_EVENT_ZONE_PREVIEW 0x78
#define JOY_EVENT_ZONE_SLOMO 0x79
#define JOY_EVENT_ZONE_WARP 0x7A
#define JOY_EVENT_REPLAY_SKIP 0x7B
#define JOY_EVENT_REPLAY_PAUSE 0x7C
#define JOY_EVENT_REPLAY_PREVIOUS_MARKER 0x7D
#define JOY_EVENT_REPLAY_NEXT_MARKER 0x7E
#define JOY_EVENT_REPLAY_PLAYBACK_SPEED 0x7F
#define JOY_EVENT_REPLAY_CAMERA_ANGLE 0x80
#define JOY_EVENT_REPLAY_CAMERA_TARGET 0x81
#define JOY_EVENT_REPLAY_HELP 0x82
#define JOY_EVENT_REPLAY_HIDE_TIMELINE 0x83
#define JOY_EVENT_REPLAY_MARK_DEMO 0x84
#define JOY_EVENT_REPLAY_TEST_DEMO 0x85
#define JOY_EVENT_REPLAY_ERASE_DEMO 0x86
#define JOY_EVENT_STEER 0x87
#define JOY_EVENT_STEER_ANALOG 0x88
#define JOY_EVENT_THROTTLE 0x89
#define JOY_EVENT_THROTTLE_ANALOG 0x8A
#define JOY_EVENT_THROTTLE_ANALOG_ALTERNATE 0x8B
#define JOY_EVENT_BRAKE 0x8C
#define JOY_EVENT_BRAKE_ANALOG 0x8D
#define JOY_EVENT_BRAKE_ANALOG_ALTERNATE 0x8E
#define JOY_EVENT_REVERSE 0x8F
#define JOY_EVENT_REVERSE_ANALOG 0x90
#define JOY_EVENT_EBRAKE 0x91
#define JOY_EVENT_EBRAKE_ANALOG 0x92
#define JOY_EVENT_SHIFTUP 0x93
#define JOY_EVENT_SHIFTDOWN 0x94
#define JOY_EVENT_SHIFTUP_ALTERNATE 0x95
#define JOY_EVENT_SHIFTDOWN_ALTERNATE 0x96
#define JOY_EVENT_DISENGAGE_CLUTCH 0x97
#define JOY_EVENT_DISENGAGE_CLUTCH_ANALOG 0x98
#define JOY_EVENT_RESET_CAR 0x99
#define JOY_EVENT_HONK_HORN 0x9A
#define JOY_EVENT_NITRO_BOOST 0x9B
#define JOY_EVENT_NITRO_BOOST_ALTERNATE 0x9C
#define JOY_EVENT_REQUEST_ROADBLOCK 0x9D
#define JOY_EVENT_REQUEST_HELICOPTER 0x9E
#define JOY_EVENT_FIRE_ROCKET 0x9F
#define JOY_EVENT_AIM_ROCKET_LR 0xA0
#define JOY_EVENT_AIM_ROCKET_UD 0xA1
#define JOY_EVENT_AIM_ZOOM 0xA2
#define JOY_EVENT_AUTO_PILOT 0xA3
#define JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT 0xA6
#define JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT 0xA7
#define JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT_ANALOG 0xA8
#define JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT_ANALOG 0xA9
#define JOY_EVENT_CYCLE_HUD 0xAA
#define JOY_EVENT_PAUSE 0xAB
#define JOY_EVENT_SKIP 0xAC
#define NUM_JOY_EVENT 169
#define MAX_JOY_EVENT JOY_EVENT_SKIP

#define JOY_EVENT_NULL_HASH 0xA318810C
#define JOY_EVENT_TYPE_CHANGED_HASH 0x006C889C
#define JOY_EVENT_EXIT_DEMO_DISC_HASH 0xCECE9AD1
#define JOY_EVENT_SCROLL_UP_HASH 0xDBC3BEA4
#define JOY_EVENT_SCROLL_DOWN_HASH 0xDBA4AC77
#define JOY_EVENT_SCROLL_LEFT_HASH 0xDBA8E2CA
#define JOY_EVENT_SCROLL_RIGHT_HASH 0x5134039D
#define JOY_EVENT_FENG_START_HASH 0x1C9C2FBE
#define JOY_EVENT_FENG_BUTTON0_HASH 0x9B77165C
#define JOY_EVENT_FENG_BUTTON1_HASH 0x9B77165D
#define JOY_EVENT_FENG_BUTTON2_HASH 0x9B77165E
#define JOY_EVENT_FENG_BUTTON3_HASH 0x9B77165F
#define JOY_EVENT_FENG_LTRIGGER_HASH 0xF27C1950
#define JOY_EVENT_FENG_RTRIGGER_HASH 0x7C071696
#define JOY_EVENT_FENG_SELECT_HASH 0xAF1886F0
#define JOY_EVENT_FENG_SELECT_ALTERNATE_HASH 0x1AF9536F
#define JOY_EVENT_FENG_CANCEL_HASH 0x897EAB56
#define JOY_EVENT_FENG_CANCEL_ALTERNATE_HASH 0xD94CAF55
#define JOY_EVENT_FENG_HELP_HASH 0x84B8A399
#define JOY_EVENT_FENG_PAD_UP_HASH 0xA7CCB8E9
#define JOY_EVENT_FENG_PAD_DOWN_HASH 0xCDD54BFC
#define JOY_EVENT_FENG_PAD_LEFT_HASH 0xCDD9824F
#define JOY_EVENT_FENG_PAD_RIGHT_HASH 0x897893C2
#define JOY_EVENT_FENG_PAD_UP_ALTERNATE_HASH 0xFA8B10A8
#define JOY_EVENT_FENG_PAD_DOWN_ALTERNATE_HASH 0x6C88D77B
#define JOY_EVENT_FENG_PAD_LEFT_ALTERNATE_HASH 0x0CD7518E
#define JOY_EVENT_FENG_PAD_RIGHT_ALTERNATE_HASH 0x2BE50EC1
#define JOY_EVENT_FENG_QUIT_HASH 0x84BDD6B3
#define JOY_EVENT_FENG_RACEOPTIONS_HASH 0x8BCB0D17
#define JOY_EVENT_START_HASH 0x068262FF
#define JOY_EVENT_SELECT_HASH 0xD5C52251
#define JOY_EVENT_MENU_SELECT_HASH 0x403B2005
#define JOY_EVENT_MENU_CANCEL_HASH 0x1AA1446B
#define JOY_EVENT_MENU_BACK_HASH 0xD4C496F6
#define JOY_EVENT_MENU_HELP_HASH 0xD4C7F36E
#define JOY_EVENT_MENU_L1_HASH 0xC0B96D42
#define JOY_EVENT_MENU_L2_HASH 0xC0B96D43
#define JOY_EVENT_MENU_R1_HASH 0xC0B96E08
#define JOY_EVENT_MENU_R2_HASH 0xC0B96E09
#define JOY_EVENT_MENU_SQUARE_HASH 0x41192656
#define JOY_EVENT_MENU_ANALOG_LEFT_HASH 0x0A70FA41
#define JOY_EVENT_MENU_ANALOG_RIGHT_HASH 0x58FF09F4
#define JOY_EVENT_MENU_ANALOG_UP_HASH 0x8BE18C5B
#define JOY_EVENT_MENU_ANALOG_DOWN_HASH 0x0A6CC3EE
#define JOY_EVENT_SKIP_DEMO_MODE_HASH 0xEF107810
#define JOY_EVENT_MAIN_MENU_SELECT_TRANSMISSION_HASH 0x097F2392
#define JOY_EVENT_ANY_HASH 0xEDAB3099
#define JOY_EVENT_EXIT_EDIT_TEXT_HASH 0x2ED2C4D4
#define JOY_EVENT_CLEAR_TEXT_HASH 0x063BD29C
#define JOY_EVENT_CANCEL_EDIT_TEXT_HASH 0x35E63480
#define JOY_EVENT_DELETE_CHAR_HASH 0x754B55C1
#define JOY_EVENT_ROTATE_LETTER_UP_HASH 0x40FA9873
#define JOY_EVENT_ROTATE_LETTER_DOWN_HASH 0x69F93606
#define JOY_EVENT_PREV_CHAR_HASH 0x7F1B692B
#define JOY_EVENT_NEXT_CHAR_HASH 0x48B2E8CD
#define JOY_EVENT_CARSEL_CHANGE_MODE_HASH 0x2CF071F4
#define JOY_EVENT_CARSEL_UNLOCK_HASH 0x07FD2016
#define JOY_EVENT_CARSEL_ORBIT_LEFT_HASH 0xDD9A5374
#define JOY_EVENT_CARSEL_ORBIT_RIGHT_HASH 0x91538987
#define JOY_EVENT_CARSEL_ORBIT_UP_HASH 0x8E6CFCCE
#define JOY_EVENT_CARSEL_ORBIT_DOWN_HASH 0xDD961D21
#define JOY_EVENT_CARSEL_ORBIT_LEFTRIGHT_HASH 0x1E91B492
#define JOY_EVENT_CARSEL_ORBIT_UPDOWN_HASH 0xC3415926
#define JOY_EVENT_CARSEL_ORBIT_INOUT_HASH 0x90B38E98
#define JOY_EVENT_CARSEL_ORBIT_IN_HASH 0x8E6CFB40
#define JOY_EVENT_CARSEL_ORBIT_OUT_HASH 0x5C0C7E01
#define JOY_EVENT_CHANGE_DEBUG_CAMERA_HASH 0x5B738F25
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_RIGHT_HASH 0x63A98CAB
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFT_HASH 0xA5EA8218
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_UP_HASH 0x8AD93272
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_DOWN_HASH 0xA5E64BC5
#define JOY_EVENT_DEBUG_CAMERA_MOVE_CLOSER_HASH 0xEDDB875D
#define JOY_EVENT_DEBUG_CAMERA_MOVE_FARTHER_HASH 0x76C94BA1
#define JOY_EVENT_DEBUG_CAMERA_NEXT_CAR_HASH 0xB16F32B3
#define JOY_EVENT_DEBUG_CAMERA_PREV_CAR_HASH 0x467A1F51
#define JOY_EVENT_DEBUG_CAMERA_FOLLOW_CHOPPER_HASH 0xF8BF1262
#define JOY_EVENT_DEBUG_CAMERA_TURN_LEFT_HASH 0x82861C12
#define JOY_EVENT_DEBUG_CAMERA_TURN_RIGHT_HASH 0xD3B865E5
#define JOY_EVENT_DEBUG_CAMERA_TURN_DOWN_HASH 0x8281E5BF
#define JOY_EVENT_DEBUG_CAMERA_TURN_UP_HASH 0x3DF205EC
#define JOY_EVENT_DEBUG_CAMERA_MOVE_DOWN_HASH 0xE87A56CD
#define JOY_EVENT_DEBUG_CAMERA_MOVE_UP_HASH 0x155EDB7A
#define JOY_EVENT_DEBUG_CAMERA_MOVE_FWD_HASH 0xC13A0C16
#define JOY_EVENT_DEBUG_CAMERA_MOVE_BACK_HASH 0xE878FFE6
#define JOY_EVENT_DEBUG_CAMERA_MOVE_LEFT_HASH 0xE87E8D20
#define JOY_EVENT_DEBUG_CAMERA_MOVE_RIGHT_HASH 0xF8BEF8B3
#define JOY_EVENT_DEBUG_CAMERA_TURBO_HASH 0xE415234B
#define JOY_EVENT_DEBUG_CAMERA_SUPER_TURBO_HASH 0xC48BED19
#define JOY_EVENT_DEBUG_CAMERA_SLOW_HASH 0x5C3E0084
#define JOY_EVENT_DEBUG_CAMERA_FORWARD_BLINK_HASH 0xC823E8A3
#define JOY_EVENT_DEBUG_CAMERA_BACKWARD_BLINK_HASH 0x169F032D
#define JOY_EVENT_DEBUG_CAMERA_DROP_CAR_HASH 0x4A4B2809
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFTRIGHT_HASH 0x64BCA9B6
#define JOY_EVENT_DEBUG_CAMERA_ROTATE_UPDOWN_HASH 0xE057C0CA
#define JOY_EVENT_DEBUG_CAMERA_STRAFE_LEFTRIGHT_HASH 0x7D8765CC
#define JOY_EVENT_DEBUG_CAMERA_INOUT_HASH 0xE34A34CE
#define JOY_EVENT_TRACKROUTE_EDITOR_TURN_LEFTRIGHT_HASH 0xEBA97ECB
#define JOY_EVENT_TRACKROUTE_EDITOR_TURN_UPDOWN_HASH 0x2AB5A5FF
#define JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_FORWARDBACKWARD_HASH 0x62EBC9A7
#define JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_LEFTRIGHT_HASH 0x0C07F23C
#define JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_TURBO_HASH 0x58B475BF
#define JOY_EVENT_TRACKROUTE_EDITOR_MOVE_UP_HASH 0x695F9AB5
#define JOY_EVENT_TRACKROUTE_EDITOR_MOVE_DOWN_HASH 0x3FA7D0C8
#define JOY_EVENT_TRACKROUTE_EDITOR_DPAD_UP_HASH 0xB56C1197
#define JOY_EVENT_TRACKROUTE_EDITOR_DPAD_DOWN_HASH 0xC0AD882A
#define JOY_EVENT_TRACKROUTE_EDITOR_DPAD_LEFT_HASH 0xC0B1BE7D
#define JOY_EVENT_TRACKROUTE_EDITOR_DPAD_RIGHT_HASH 0xD75855B0
#define JOY_EVENT_TRACKROUTE_EDITOR_NEXT_ROUTE_HASH 0x07FA9987
#define JOY_EVENT_TRACKROUTE_EDITOR_NEXT_POINT_HASH 0x07D634C2
#define JOY_EVENT_TRACKROUTE_EDITOR_PREV_POINT_HASH 0x0B4EC0E0
#define JOY_EVENT_TRACKROUTE_EDITOR_RESET_POS_HASH 0x63DCC2AE
#define JOY_EVENT_TRACKROUTE_EDITOR_EDIT_RIGHT_WIDTH_HASH 0x1445DB3C
#define JOY_EVENT_TRACKROUTE_EDITOR_EDIT_LEFT_WIDTH_HASH 0x5B146029
#define JOY_EVENT_TRACKROUTE_EDITOR_EDIT_POSITION_HASH 0x68452094
#define JOY_EVENT_TOGGLE_TRACK_MARKER_HASH 0x5119F6C8
#define JOY_EVENT_CAMERA_POV_CHANGE_HASH 0xECFDD073
#define JOY_EVENT_CAMERA_LOOKBACK_HASH 0x603C555F
#define JOY_EVENT_ZONE_FREEZE_HASH 0x4CD10C2D
#define JOY_EVENT_ZONE_PREVIEW_HASH 0xE8C1FBCE
#define JOY_EVENT_ZONE_SLOMO_HASH 0x60534EB6
#define JOY_EVENT_ZONE_WARP_HASH 0xD461A0A6
#define JOY_EVENT_REPLAY_SKIP_HASH 0x80395394
#define JOY_EVENT_REPLAY_PAUSE_HASH 0x8728347B
#define JOY_EVENT_REPLAY_PREVIOUS_MARKER_HASH 0xF251029B
#define JOY_EVENT_REPLAY_NEXT_MARKER_HASH 0xEEB042BD
#define JOY_EVENT_REPLAY_PLAYBACK_SPEED_HASH 0xAE9D5F34
#define JOY_EVENT_REPLAY_CAMERA_ANGLE_HASH 0x3EC80DAC
#define JOY_EVENT_REPLAY_CAMERA_TARGET_HASH 0x43367BCC
#define JOY_EVENT_REPLAY_HELP_HASH 0x80333246
#define JOY_EVENT_REPLAY_HIDE_TIMELINE_HASH 0x6D0E8D2D
#define JOY_EVENT_REPLAY_MARK_DEMO_HASH 0x3BC3A24C
#define JOY_EVENT_REPLAY_TEST_DEMO_HASH 0x7E2AB741
#define JOY_EVENT_REPLAY_ERASE_DEMO_HASH 0xCCDB6DD1
#define JOY_EVENT_STEER_HASH 0x06827254
#define JOY_EVENT_STEER_ANALOG_HASH 0x64CC5205
#define JOY_EVENT_THROTTLE_HASH 0x3D84CB07
#define JOY_EVENT_THROTTLE_ANALOG_HASH 0x38C38358
#define JOY_EVENT_THROTTLE_ANALOG_ALTERNATE_HASH 0xB138F1D7
#define JOY_EVENT_BRAKE_HASH 0x054DA8B6
#define JOY_EVENT_BRAKE_ANALOG_HASH 0xC5524627
#define JOY_EVENT_BRAKE_ANALOG_ALTERNATE_HASH 0xDE98C366
#define JOY_EVENT_REVERSE_HASH 0x422464AD
#define JOY_EVENT_REVERSE_ANALOG_HASH 0x7F6D063E
#define JOY_EVENT_EBRAKE_HASH 0xB4E9DA3B
#define JOY_EVENT_EBRAKE_ANALOG_HASH 0xA560F00C
#define JOY_EVENT_SHIFTUP_HASH 0x953371F4
#define JOY_EVENT_SHIFTDOWN_HASH 0xAFCE73C7
#define JOY_EVENT_SHIFTUP_ALTERNATE_HASH 0x1968D373
#define JOY_EVENT_SHIFTDOWN_ALTERNATE_HASH 0xB9E27906
#define JOY_EVENT_DISENGAGE_CLUTCH_HASH 0x1194EC7A
#define JOY_EVENT_DISENGAGE_CLUTCH_ANALOG_HASH 0x78D7256B
#define JOY_EVENT_RESET_CAR_HASH 0x760C5369
#define JOY_EVENT_HONK_HORN_HASH 0xB198A437
#define JOY_EVENT_NITRO_BOOST_HASH 0x180CE4E3
#define JOY_EVENT_NITRO_BOOST_ALTERNATE_HASH 0x89C5FD22
#define JOY_EVENT_REQUEST_ROADBLOCK_HASH 0xC8E7C74A
#define JOY_EVENT_REQUEST_HELICOPTER_HASH 0xDADE3708
#define JOY_EVENT_FIRE_ROCKET_HASH 0xB70BDC7E
#define JOY_EVENT_AIM_ROCKET_LR_HASH 0xB250076C
#define JOY_EVENT_AIM_ROCKET_UD_HASH 0xB2500887
#define JOY_EVENT_AIM_ZOOM_HASH 0xF7172D6C
#define JOY_EVENT_AUTO_PILOT_HASH 0x414F2A31
#define JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT_HASH 0xDD4FFC77
#define JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT_HASH 0x87BE52EA
#define JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT_ANALOG_HASH 0xBCBAB6C8
#define JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT_ANALOG_HASH 0xDE7EEDDB
#define JOY_EVENT_CYCLE_HUD_HASH 0x57874E81
#define JOY_EVENT_PAUSE_HASH 0x0642036F
#define JOY_EVENT_SKIP_HASH 0xA31B1408


int bStringHash(char* a1);

int ConvertJoyEventNameToID(char* name)
{
	switch (bStringHash(name))
	{
	case JOY_EVENT_NULL_HASH:
		return JOY_EVENT_NULL;
	case JOY_EVENT_TYPE_CHANGED_HASH:
		return JOY_EVENT_TYPE_CHANGED;
	case JOY_EVENT_EXIT_DEMO_DISC_HASH:
		return JOY_EVENT_EXIT_DEMO_DISC;
	case JOY_EVENT_SCROLL_UP_HASH:
		return JOY_EVENT_SCROLL_UP;
	case JOY_EVENT_SCROLL_DOWN_HASH:
		return JOY_EVENT_SCROLL_DOWN;
	case JOY_EVENT_SCROLL_LEFT_HASH:
		return JOY_EVENT_SCROLL_LEFT;
	case JOY_EVENT_SCROLL_RIGHT_HASH:
		return JOY_EVENT_SCROLL_RIGHT;
	case JOY_EVENT_FENG_START_HASH:
		return JOY_EVENT_FENG_START;
	case JOY_EVENT_FENG_BUTTON0_HASH:
		return JOY_EVENT_FENG_BUTTON0;
	case JOY_EVENT_FENG_BUTTON1_HASH:
		return JOY_EVENT_FENG_BUTTON1;
	case JOY_EVENT_FENG_BUTTON2_HASH:
		return JOY_EVENT_FENG_BUTTON2;
	case JOY_EVENT_FENG_BUTTON3_HASH:
		return JOY_EVENT_FENG_BUTTON3;
	case JOY_EVENT_FENG_LTRIGGER_HASH:
		return JOY_EVENT_FENG_LTRIGGER;
	case JOY_EVENT_FENG_RTRIGGER_HASH:
		return JOY_EVENT_FENG_RTRIGGER;
	case JOY_EVENT_FENG_SELECT_HASH:
		return JOY_EVENT_FENG_SELECT;
	case JOY_EVENT_FENG_SELECT_ALTERNATE_HASH:
		return JOY_EVENT_FENG_SELECT_ALTERNATE;
	case JOY_EVENT_FENG_CANCEL_HASH:
		return JOY_EVENT_FENG_CANCEL;
	case JOY_EVENT_FENG_CANCEL_ALTERNATE_HASH:
		return JOY_EVENT_FENG_CANCEL_ALTERNATE;
	case JOY_EVENT_FENG_HELP_HASH:
		return JOY_EVENT_FENG_HELP;
	case JOY_EVENT_FENG_PAD_UP_HASH:
		return JOY_EVENT_FENG_PAD_UP;
	case JOY_EVENT_FENG_PAD_DOWN_HASH:
		return JOY_EVENT_FENG_PAD_DOWN;
	case JOY_EVENT_FENG_PAD_LEFT_HASH:
		return JOY_EVENT_FENG_PAD_LEFT;
	case JOY_EVENT_FENG_PAD_RIGHT_HASH:
		return JOY_EVENT_FENG_PAD_RIGHT;
	case JOY_EVENT_FENG_PAD_UP_ALTERNATE_HASH:
		return JOY_EVENT_FENG_PAD_UP_ALTERNATE;
	case JOY_EVENT_FENG_PAD_DOWN_ALTERNATE_HASH:
		return JOY_EVENT_FENG_PAD_DOWN_ALTERNATE;
	case JOY_EVENT_FENG_PAD_LEFT_ALTERNATE_HASH:
		return JOY_EVENT_FENG_PAD_LEFT_ALTERNATE;
	case JOY_EVENT_FENG_PAD_RIGHT_ALTERNATE_HASH:
		return JOY_EVENT_FENG_PAD_RIGHT_ALTERNATE;
	case JOY_EVENT_FENG_QUIT_HASH:
		return JOY_EVENT_FENG_QUIT;
	case JOY_EVENT_FENG_RACEOPTIONS_HASH:
		return JOY_EVENT_FENG_RACEOPTIONS;
	case JOY_EVENT_START_HASH:
		return JOY_EVENT_START;
	case JOY_EVENT_SELECT_HASH:
		return JOY_EVENT_SELECT;
	case JOY_EVENT_MENU_SELECT_HASH:
		return JOY_EVENT_MENU_SELECT;
	case JOY_EVENT_MENU_CANCEL_HASH:
		return JOY_EVENT_MENU_CANCEL;
	case JOY_EVENT_MENU_BACK_HASH:
		return JOY_EVENT_MENU_BACK;
	case JOY_EVENT_MENU_HELP_HASH:
		return JOY_EVENT_MENU_HELP;
	case JOY_EVENT_MENU_L1_HASH:
		return JOY_EVENT_MENU_L1;
	case JOY_EVENT_MENU_L2_HASH:
		return JOY_EVENT_MENU_L2;
	case JOY_EVENT_MENU_R1_HASH:
		return JOY_EVENT_MENU_R1;
	case JOY_EVENT_MENU_R2_HASH:
		return JOY_EVENT_MENU_R2;
	case JOY_EVENT_MENU_SQUARE_HASH:
		return JOY_EVENT_MENU_SQUARE;
	case JOY_EVENT_MENU_ANALOG_LEFT_HASH:
		return JOY_EVENT_MENU_ANALOG_LEFT;
	case JOY_EVENT_MENU_ANALOG_RIGHT_HASH:
		return JOY_EVENT_MENU_ANALOG_RIGHT;
	case JOY_EVENT_MENU_ANALOG_UP_HASH:
		return JOY_EVENT_MENU_ANALOG_UP;
	case JOY_EVENT_MENU_ANALOG_DOWN_HASH:
		return JOY_EVENT_MENU_ANALOG_DOWN;
	case JOY_EVENT_SKIP_DEMO_MODE_HASH:
		return JOY_EVENT_SKIP_DEMO_MODE;
	case JOY_EVENT_MAIN_MENU_SELECT_TRANSMISSION_HASH:
		return JOY_EVENT_MAIN_MENU_SELECT_TRANSMISSION;
	case JOY_EVENT_ANY_HASH:
		return JOY_EVENT_ANY;
	case JOY_EVENT_EXIT_EDIT_TEXT_HASH:
		return JOY_EVENT_EXIT_EDIT_TEXT;
	case JOY_EVENT_CLEAR_TEXT_HASH:
		return JOY_EVENT_CLEAR_TEXT;
	case JOY_EVENT_CANCEL_EDIT_TEXT_HASH:
		return JOY_EVENT_CANCEL_EDIT_TEXT;
	case JOY_EVENT_DELETE_CHAR_HASH:
		return JOY_EVENT_DELETE_CHAR;
	case JOY_EVENT_ROTATE_LETTER_UP_HASH:
		return JOY_EVENT_ROTATE_LETTER_UP;
	case JOY_EVENT_ROTATE_LETTER_DOWN_HASH:
		return JOY_EVENT_ROTATE_LETTER_DOWN;
	case JOY_EVENT_PREV_CHAR_HASH:
		return JOY_EVENT_PREV_CHAR;
	case JOY_EVENT_NEXT_CHAR_HASH:
		return JOY_EVENT_NEXT_CHAR;
	case JOY_EVENT_CARSEL_CHANGE_MODE_HASH:
		return JOY_EVENT_CARSEL_CHANGE_MODE;
	case JOY_EVENT_CARSEL_UNLOCK_HASH:
		return JOY_EVENT_CARSEL_UNLOCK;
	case JOY_EVENT_CARSEL_ORBIT_LEFT_HASH:
		return JOY_EVENT_CARSEL_ORBIT_LEFT;
	case JOY_EVENT_CARSEL_ORBIT_RIGHT_HASH:
		return JOY_EVENT_CARSEL_ORBIT_RIGHT;
	case JOY_EVENT_CARSEL_ORBIT_UP_HASH:
		return JOY_EVENT_CARSEL_ORBIT_UP;
	case JOY_EVENT_CARSEL_ORBIT_DOWN_HASH:
		return JOY_EVENT_CARSEL_ORBIT_DOWN;
	case JOY_EVENT_CARSEL_ORBIT_LEFTRIGHT_HASH:
		return JOY_EVENT_CARSEL_ORBIT_LEFTRIGHT;
	case JOY_EVENT_CARSEL_ORBIT_UPDOWN_HASH:
		return JOY_EVENT_CARSEL_ORBIT_UPDOWN;
	case JOY_EVENT_CARSEL_ORBIT_INOUT_HASH:
		return JOY_EVENT_CARSEL_ORBIT_INOUT;
	case JOY_EVENT_CARSEL_ORBIT_IN_HASH:
		return JOY_EVENT_CARSEL_ORBIT_IN;
	case JOY_EVENT_CARSEL_ORBIT_OUT_HASH:
		return JOY_EVENT_CARSEL_ORBIT_OUT;
	case JOY_EVENT_CHANGE_DEBUG_CAMERA_HASH:
		return JOY_EVENT_CHANGE_DEBUG_CAMERA;
	case JOY_EVENT_DEBUG_CAMERA_ROTATE_RIGHT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_ROTATE_RIGHT;
	case JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFT;
	case JOY_EVENT_DEBUG_CAMERA_ROTATE_UP_HASH:
		return JOY_EVENT_DEBUG_CAMERA_ROTATE_UP;
	case JOY_EVENT_DEBUG_CAMERA_ROTATE_DOWN_HASH:
		return JOY_EVENT_DEBUG_CAMERA_ROTATE_DOWN;
	case JOY_EVENT_DEBUG_CAMERA_MOVE_CLOSER_HASH:
		return JOY_EVENT_DEBUG_CAMERA_MOVE_CLOSER;
	case JOY_EVENT_DEBUG_CAMERA_MOVE_FARTHER_HASH:
		return JOY_EVENT_DEBUG_CAMERA_MOVE_FARTHER;
	case JOY_EVENT_DEBUG_CAMERA_NEXT_CAR_HASH:
		return JOY_EVENT_DEBUG_CAMERA_NEXT_CAR;
	case JOY_EVENT_DEBUG_CAMERA_PREV_CAR_HASH:
		return JOY_EVENT_DEBUG_CAMERA_PREV_CAR;
	case JOY_EVENT_DEBUG_CAMERA_FOLLOW_CHOPPER_HASH:
		return JOY_EVENT_DEBUG_CAMERA_FOLLOW_CHOPPER;
	case JOY_EVENT_DEBUG_CAMERA_TURN_LEFT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_TURN_LEFT;
	case JOY_EVENT_DEBUG_CAMERA_TURN_RIGHT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_TURN_RIGHT;
	case JOY_EVENT_DEBUG_CAMERA_TURN_DOWN_HASH:
		return JOY_EVENT_DEBUG_CAMERA_TURN_DOWN;
	case JOY_EVENT_DEBUG_CAMERA_TURN_UP_HASH:
		return JOY_EVENT_DEBUG_CAMERA_TURN_UP;
	case JOY_EVENT_DEBUG_CAMERA_MOVE_DOWN_HASH:
		return JOY_EVENT_DEBUG_CAMERA_MOVE_DOWN;
	case JOY_EVENT_DEBUG_CAMERA_MOVE_UP_HASH:
		return JOY_EVENT_DEBUG_CAMERA_MOVE_UP;
	case JOY_EVENT_DEBUG_CAMERA_MOVE_FWD_HASH:
		return JOY_EVENT_DEBUG_CAMERA_MOVE_FWD;
	case JOY_EVENT_DEBUG_CAMERA_MOVE_BACK_HASH:
		return JOY_EVENT_DEBUG_CAMERA_MOVE_BACK;
	case JOY_EVENT_DEBUG_CAMERA_MOVE_LEFT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_MOVE_LEFT;
	case JOY_EVENT_DEBUG_CAMERA_MOVE_RIGHT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_MOVE_RIGHT;
	case JOY_EVENT_DEBUG_CAMERA_TURBO_HASH:
		return JOY_EVENT_DEBUG_CAMERA_TURBO;
	case JOY_EVENT_DEBUG_CAMERA_SUPER_TURBO_HASH:
		return JOY_EVENT_DEBUG_CAMERA_SUPER_TURBO;
	case JOY_EVENT_DEBUG_CAMERA_SLOW_HASH:
		return JOY_EVENT_DEBUG_CAMERA_SLOW;
	case JOY_EVENT_DEBUG_CAMERA_FORWARD_BLINK_HASH:
		return JOY_EVENT_DEBUG_CAMERA_FORWARD_BLINK;
	case JOY_EVENT_DEBUG_CAMERA_BACKWARD_BLINK_HASH:
		return JOY_EVENT_DEBUG_CAMERA_BACKWARD_BLINK;
	case JOY_EVENT_DEBUG_CAMERA_DROP_CAR_HASH:
		return JOY_EVENT_DEBUG_CAMERA_DROP_CAR;
	case JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFTRIGHT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFTRIGHT;
	case JOY_EVENT_DEBUG_CAMERA_ROTATE_UPDOWN_HASH:
		return JOY_EVENT_DEBUG_CAMERA_ROTATE_UPDOWN;
	case JOY_EVENT_DEBUG_CAMERA_STRAFE_LEFTRIGHT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_STRAFE_LEFTRIGHT;
	case JOY_EVENT_DEBUG_CAMERA_INOUT_HASH:
		return JOY_EVENT_DEBUG_CAMERA_INOUT;
	case JOY_EVENT_TRACKROUTE_EDITOR_TURN_LEFTRIGHT_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_TURN_LEFTRIGHT;
	case JOY_EVENT_TRACKROUTE_EDITOR_TURN_UPDOWN_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_TURN_UPDOWN;
	case JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_FORWARDBACKWARD_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_FORWARDBACKWARD;
	case JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_LEFTRIGHT_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_LEFTRIGHT;
	case JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_TURBO_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_TURBO;
	case JOY_EVENT_TRACKROUTE_EDITOR_MOVE_UP_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_MOVE_UP;
	case JOY_EVENT_TRACKROUTE_EDITOR_MOVE_DOWN_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_MOVE_DOWN;
	case JOY_EVENT_TRACKROUTE_EDITOR_DPAD_UP_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_DPAD_UP;
	case JOY_EVENT_TRACKROUTE_EDITOR_DPAD_DOWN_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_DPAD_DOWN;
	case JOY_EVENT_TRACKROUTE_EDITOR_DPAD_LEFT_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_DPAD_LEFT;
	case JOY_EVENT_TRACKROUTE_EDITOR_DPAD_RIGHT_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_DPAD_RIGHT;
	case JOY_EVENT_TRACKROUTE_EDITOR_NEXT_ROUTE_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_NEXT_ROUTE;
	case JOY_EVENT_TRACKROUTE_EDITOR_NEXT_POINT_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_NEXT_POINT;
	case JOY_EVENT_TRACKROUTE_EDITOR_PREV_POINT_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_PREV_POINT;
	case JOY_EVENT_TRACKROUTE_EDITOR_RESET_POS_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_RESET_POS;
	case JOY_EVENT_TRACKROUTE_EDITOR_EDIT_RIGHT_WIDTH_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_EDIT_RIGHT_WIDTH;
	case JOY_EVENT_TRACKROUTE_EDITOR_EDIT_LEFT_WIDTH_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_EDIT_LEFT_WIDTH;
	case JOY_EVENT_TRACKROUTE_EDITOR_EDIT_POSITION_HASH:
		return JOY_EVENT_TRACKROUTE_EDITOR_EDIT_POSITION;
	case JOY_EVENT_TOGGLE_TRACK_MARKER_HASH:
		return JOY_EVENT_TOGGLE_TRACK_MARKER;
	case JOY_EVENT_CAMERA_POV_CHANGE_HASH:
		return JOY_EVENT_CAMERA_POV_CHANGE;
	case JOY_EVENT_CAMERA_LOOKBACK_HASH:
		return JOY_EVENT_CAMERA_LOOKBACK;
	case JOY_EVENT_ZONE_FREEZE_HASH:
		return JOY_EVENT_ZONE_FREEZE;
	case JOY_EVENT_ZONE_PREVIEW_HASH:
		return JOY_EVENT_ZONE_PREVIEW;
	case JOY_EVENT_ZONE_SLOMO_HASH:
		return JOY_EVENT_ZONE_SLOMO;
	case JOY_EVENT_ZONE_WARP_HASH:
		return JOY_EVENT_ZONE_WARP;
	case JOY_EVENT_REPLAY_SKIP_HASH:
		return JOY_EVENT_REPLAY_SKIP;
	case JOY_EVENT_REPLAY_PAUSE_HASH:
		return JOY_EVENT_REPLAY_PAUSE;
	case JOY_EVENT_REPLAY_PREVIOUS_MARKER_HASH:
		return JOY_EVENT_REPLAY_PREVIOUS_MARKER;
	case JOY_EVENT_REPLAY_NEXT_MARKER_HASH:
		return JOY_EVENT_REPLAY_NEXT_MARKER;
	case JOY_EVENT_REPLAY_PLAYBACK_SPEED_HASH:
		return JOY_EVENT_REPLAY_PLAYBACK_SPEED;
	case JOY_EVENT_REPLAY_CAMERA_ANGLE_HASH:
		return JOY_EVENT_REPLAY_CAMERA_ANGLE;
	case JOY_EVENT_REPLAY_CAMERA_TARGET_HASH:
		return JOY_EVENT_REPLAY_CAMERA_TARGET;
	case JOY_EVENT_REPLAY_HELP_HASH:
		return JOY_EVENT_REPLAY_HELP;
	case JOY_EVENT_REPLAY_HIDE_TIMELINE_HASH:
		return JOY_EVENT_REPLAY_HIDE_TIMELINE;
	case JOY_EVENT_REPLAY_MARK_DEMO_HASH:
		return JOY_EVENT_REPLAY_MARK_DEMO;
	case JOY_EVENT_REPLAY_TEST_DEMO_HASH:
		return JOY_EVENT_REPLAY_TEST_DEMO;
	case JOY_EVENT_REPLAY_ERASE_DEMO_HASH:
		return JOY_EVENT_REPLAY_ERASE_DEMO;
	case JOY_EVENT_STEER_HASH:
		return JOY_EVENT_STEER;
	case JOY_EVENT_STEER_ANALOG_HASH:
		return JOY_EVENT_STEER_ANALOG;
	case JOY_EVENT_THROTTLE_HASH:
		return JOY_EVENT_THROTTLE;
	case JOY_EVENT_THROTTLE_ANALOG_HASH:
		return JOY_EVENT_THROTTLE_ANALOG;
	case JOY_EVENT_THROTTLE_ANALOG_ALTERNATE_HASH:
		return JOY_EVENT_THROTTLE_ANALOG_ALTERNATE;
	case JOY_EVENT_BRAKE_HASH:
		return JOY_EVENT_BRAKE;
	case JOY_EVENT_BRAKE_ANALOG_HASH:
		return JOY_EVENT_BRAKE_ANALOG;
	case JOY_EVENT_BRAKE_ANALOG_ALTERNATE_HASH:
		return JOY_EVENT_BRAKE_ANALOG_ALTERNATE;
	case JOY_EVENT_REVERSE_HASH:
		return JOY_EVENT_REVERSE;
	case JOY_EVENT_REVERSE_ANALOG_HASH:
		return JOY_EVENT_REVERSE_ANALOG;
	case JOY_EVENT_EBRAKE_HASH:
		return JOY_EVENT_EBRAKE;
	case JOY_EVENT_EBRAKE_ANALOG_HASH:
		return JOY_EVENT_EBRAKE_ANALOG;
	case JOY_EVENT_SHIFTUP_HASH:
		return JOY_EVENT_SHIFTUP;
	case JOY_EVENT_SHIFTDOWN_HASH:
		return JOY_EVENT_SHIFTDOWN;
	case JOY_EVENT_SHIFTUP_ALTERNATE_HASH:
		return JOY_EVENT_SHIFTUP_ALTERNATE;
	case JOY_EVENT_SHIFTDOWN_ALTERNATE_HASH:
		return JOY_EVENT_SHIFTDOWN_ALTERNATE;
	case JOY_EVENT_DISENGAGE_CLUTCH_HASH:
		return JOY_EVENT_DISENGAGE_CLUTCH;
	case JOY_EVENT_DISENGAGE_CLUTCH_ANALOG_HASH:
		return JOY_EVENT_DISENGAGE_CLUTCH_ANALOG;
	case JOY_EVENT_RESET_CAR_HASH:
		return JOY_EVENT_RESET_CAR;
	case JOY_EVENT_HONK_HORN_HASH:
		return JOY_EVENT_HONK_HORN;
	case JOY_EVENT_NITRO_BOOST_HASH:
		return JOY_EVENT_NITRO_BOOST;
	case JOY_EVENT_NITRO_BOOST_ALTERNATE_HASH:
		return JOY_EVENT_NITRO_BOOST_ALTERNATE;
	case JOY_EVENT_REQUEST_ROADBLOCK_HASH:
		return JOY_EVENT_REQUEST_ROADBLOCK;
	case JOY_EVENT_REQUEST_HELICOPTER_HASH:
		return JOY_EVENT_REQUEST_HELICOPTER;
	case JOY_EVENT_FIRE_ROCKET_HASH:
		return JOY_EVENT_FIRE_ROCKET;
	case JOY_EVENT_AIM_ROCKET_LR_HASH:
		return JOY_EVENT_AIM_ROCKET_LR;
	case JOY_EVENT_AIM_ROCKET_UD_HASH:
		return JOY_EVENT_AIM_ROCKET_UD;
	case JOY_EVENT_AIM_ZOOM_HASH:
		return JOY_EVENT_AIM_ZOOM;
	case JOY_EVENT_AUTO_PILOT_HASH:
		return JOY_EVENT_AUTO_PILOT;
	case JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT_HASH:
		return JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT;
	case JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT_HASH:
		return JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT;
	case JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT_ANALOG_HASH:
		return JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT_ANALOG;
	case JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT_ANALOG_HASH:
		return JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT_ANALOG;
	case JOY_EVENT_CYCLE_HUD_HASH:
		return JOY_EVENT_CYCLE_HUD;
	case JOY_EVENT_PAUSE_HASH:
		return JOY_EVENT_PAUSE;
	case JOY_EVENT_SKIP_HASH:
		return JOY_EVENT_SKIP;
	default:
		return 0;
	}
}

char JoyEventNames[MAX_JOY_EVENT + 1][50] =
{
"JOY_EVENT_NULL",
"JOY_EVENT_TYPE_CHANGED",
"JOY_EVENT_EXIT_DEMO_DISC",
"JOY_EVENT_SCROLL_UP",
"JOY_EVENT_SCROLL_DOWN",
"JOY_EVENT_SCROLL_LEFT",
"JOY_EVENT_SCROLL_RIGHT",
"JOY_EVENT_START",
"JOY_EVENT_SELECT",
"JOY_EVENT_MENU_SELECT",
"JOY_EVENT_MENU_CANCEL",
"JOY_EVENT_MENU_BACK",
"JOY_EVENT_MENU_HELP",
"JOY_EVENT_MENU_L1",
"JOY_EVENT_MENU_L2",
"JOY_EVENT_MENU_R1",
"JOY_EVENT_MENU_R2",
"JOY_EVENT_MENU_SQUARE",
"JOY_EVENT_MENU_ANALOG_LEFT",
"JOY_EVENT_MENU_ANALOG_RIGHT",
"JOY_EVENT_MENU_ANALOG_UP",
"JOY_EVENT_MENU_ANALOG_DOWN",
"JOY_EVENT_FENG_START",
"JOY_EVENT_FENG_BUTTON0",
"JOY_EVENT_FENG_BUTTON1",
"JOY_EVENT_FENG_BUTTON2",
"JOY_EVENT_FENG_BUTTON3",
"JOY_EVENT_FENG_LTRIGGER",
"JOY_EVENT_FENG_RTRIGGER",
"JOY_EVENT_FENG_SELECT",
"JOY_EVENT_FENG_SELECT_ALTERNATE",
"JOY_EVENT_FENG_CANCEL",
"JOY_EVENT_FENG_CANCEL_ALTERNATE",
"JOY_EVENT_FENG_HELP",
"JOY_EVENT_FENG_PAD_UP",
"JOY_EVENT_FENG_PAD_DOWN",
"JOY_EVENT_FENG_PAD_LEFT",
"JOY_EVENT_FENG_PAD_RIGHT",
"JOY_EVENT_FENG_PAD_UP_ALTERNATE",
"JOY_EVENT_FENG_PAD_DOWN_ALTERNATE",
"JOY_EVENT_FENG_PAD_LEFT_ALTERNATE",
"JOY_EVENT_FENG_PAD_RIGHT_ALTERNATE",
"JOY_EVENT_FENG_QUIT",
"JOY_EVENT_FENG_RACEOPTIONS",
"Unknown_0x2C",
"JOY_EVENT_SKIP_DEMO_MODE",
"JOY_EVENT_MAIN_MENU_SELECT_TRANSMISSION",
"JOY_EVENT_ANY",
"JOY_EVENT_EXIT_EDIT_TEXT",
"JOY_EVENT_CLEAR_TEXT",
"JOY_EVENT_CANCEL_EDIT_TEXT",
"JOY_EVENT_DELETE_CHAR",
"JOY_EVENT_ROTATE_LETTER_UP",
"JOY_EVENT_ROTATE_LETTER_DOWN",
"JOY_EVENT_PREV_CHAR",
"JOY_EVENT_NEXT_CHAR",
"JOY_EVENT_CARSEL_CHANGE_MODE",
"JOY_EVENT_CARSEL_UNLOCK",
"JOY_EVENT_CARSEL_ORBIT_LEFT",
"JOY_EVENT_CARSEL_ORBIT_RIGHT",
"JOY_EVENT_CARSEL_ORBIT_UP",
"JOY_EVENT_CARSEL_ORBIT_DOWN",
"JOY_EVENT_CARSEL_ORBIT_IN",
"JOY_EVENT_CARSEL_ORBIT_OUT",
"JOY_EVENT_CARSEL_ORBIT_LEFTRIGHT",
"JOY_EVENT_CARSEL_ORBIT_UPDOWN",
"JOY_EVENT_CARSEL_ORBIT_INOUT",
"Unknown_0x43",
"JOY_EVENT_CHANGE_DEBUG_CAMERA",
"JOY_EVENT_DEBUG_CAMERA_ROTATE_RIGHT",
"JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFT",
"JOY_EVENT_DEBUG_CAMERA_ROTATE_UP",
"JOY_EVENT_DEBUG_CAMERA_ROTATE_DOWN",
"JOY_EVENT_DEBUG_CAMERA_MOVE_CLOSER",
"JOY_EVENT_DEBUG_CAMERA_MOVE_FARTHER",
"JOY_EVENT_DEBUG_CAMERA_NEXT_CAR",
"JOY_EVENT_DEBUG_CAMERA_PREV_CAR",
"JOY_EVENT_DEBUG_CAMERA_FOLLOW_CHOPPER",
"JOY_EVENT_DEBUG_CAMERA_TURN_LEFT",
"JOY_EVENT_DEBUG_CAMERA_TURN_RIGHT",
"JOY_EVENT_DEBUG_CAMERA_TURN_DOWN",
"JOY_EVENT_DEBUG_CAMERA_TURN_UP",
"JOY_EVENT_DEBUG_CAMERA_MOVE_DOWN",
"JOY_EVENT_DEBUG_CAMERA_MOVE_UP",
"JOY_EVENT_DEBUG_CAMERA_MOVE_FWD",
"JOY_EVENT_DEBUG_CAMERA_MOVE_BACK",
"JOY_EVENT_DEBUG_CAMERA_MOVE_LEFT",
"JOY_EVENT_DEBUG_CAMERA_MOVE_RIGHT",
"JOY_EVENT_DEBUG_CAMERA_TURBO",
"JOY_EVENT_DEBUG_CAMERA_SUPER_TURBO",
"JOY_EVENT_DEBUG_CAMERA_SLOW",
"JOY_EVENT_DEBUG_CAMERA_FORWARD_BLINK",
"JOY_EVENT_DEBUG_CAMERA_BACKWARD_BLINK",
"JOY_EVENT_DEBUG_CAMERA_DROP_CAR",
"JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFTRIGHT",
"JOY_EVENT_DEBUG_CAMERA_ROTATE_UPDOWN",
"JOY_EVENT_DEBUG_CAMERA_STRAFE_LEFTRIGHT",
"JOY_EVENT_DEBUG_CAMERA_INOUT",
"JOY_EVENT_TRACKROUTE_EDITOR_TURN_LEFTRIGHT",
"JOY_EVENT_TRACKROUTE_EDITOR_TURN_UPDOWN",
"JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_FORWARDBACKWARD",
"JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_LEFTRIGHT",
"JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_TURBO",
"JOY_EVENT_TRACKROUTE_EDITOR_MOVE_UP",
"JOY_EVENT_TRACKROUTE_EDITOR_MOVE_DOWN",
"JOY_EVENT_TRACKROUTE_EDITOR_DPAD_UP",
"JOY_EVENT_TRACKROUTE_EDITOR_DPAD_DOWN",
"JOY_EVENT_TRACKROUTE_EDITOR_DPAD_LEFT",
"JOY_EVENT_TRACKROUTE_EDITOR_DPAD_RIGHT",
"JOY_EVENT_TRACKROUTE_EDITOR_NEXT_ROUTE",
"JOY_EVENT_TRACKROUTE_EDITOR_NEXT_POINT",
"JOY_EVENT_TRACKROUTE_EDITOR_PREV_POINT",
"JOY_EVENT_TRACKROUTE_EDITOR_RESET_POS",
"JOY_EVENT_TRACKROUTE_EDITOR_EDIT_RIGHT_WIDTH",
"JOY_EVENT_TRACKROUTE_EDITOR_EDIT_LEFT_WIDTH",
"JOY_EVENT_TRACKROUTE_EDITOR_EDIT_POSITION",
"JOY_EVENT_TOGGLE_TRACK_MARKER",
"JOY_EVENT_CAMERA_POV_CHANGE",
"JOY_EVENT_CAMERA_LOOKBACK",
"JOY_EVENT_ZONE_FREEZE",
"JOY_EVENT_ZONE_PREVIEW",
"JOY_EVENT_ZONE_SLOMO",
"JOY_EVENT_ZONE_WARP",
"JOY_EVENT_REPLAY_SKIP",
"JOY_EVENT_REPLAY_PAUSE",
"JOY_EVENT_REPLAY_PREVIOUS_MARKER",
"JOY_EVENT_REPLAY_NEXT_MARKER",
"JOY_EVENT_REPLAY_PLAYBACK_SPEED",
"JOY_EVENT_REPLAY_CAMERA_ANGLE",
"JOY_EVENT_REPLAY_CAMERA_TARGET",
"JOY_EVENT_REPLAY_HELP",
"JOY_EVENT_REPLAY_HIDE_TIMELINE",
"JOY_EVENT_REPLAY_MARK_DEMO",
"JOY_EVENT_REPLAY_TEST_DEMO",
"JOY_EVENT_REPLAY_ERASE_DEMO",
"JOY_EVENT_STEER",
"JOY_EVENT_STEER_ANALOG",
"JOY_EVENT_THROTTLE",
"JOY_EVENT_THROTTLE_ANALOG",
"JOY_EVENT_THROTTLE_ANALOG_ALTERNATE",
"JOY_EVENT_BRAKE",
"JOY_EVENT_BRAKE_ANALOG",
"JOY_EVENT_BRAKE_ANALOG_ALTERNATE",
"JOY_EVENT_REVERSE",
"JOY_EVENT_REVERSE_ANALOG",
"JOY_EVENT_EBRAKE",
"JOY_EVENT_EBRAKE_ANALOG",
"JOY_EVENT_SHIFTUP",
"JOY_EVENT_SHIFTDOWN",
"JOY_EVENT_SHIFTUP_ALTERNATE",
"JOY_EVENT_SHIFTDOWN_ALTERNATE",
"JOY_EVENT_DISENGAGE_CLUTCH",
"JOY_EVENT_DISENGAGE_CLUTCH_ANALOG",
"JOY_EVENT_RESET_CAR",
"JOY_EVENT_HONK_HORN",
"JOY_EVENT_NITRO_BOOST",
"JOY_EVENT_NITRO_BOOST_ALTERNATE",
"JOY_EVENT_REQUEST_ROADBLOCK",
"JOY_EVENT_REQUEST_HELICOPTER",
"JOY_EVENT_FIRE_ROCKET",
"JOY_EVENT_AIM_ROCKET_LR",
"JOY_EVENT_AIM_ROCKET_UD",
"JOY_EVENT_AIM_ZOOM",
"JOY_EVENT_AUTO_PILOT",
"Unknown_0xA4",
"Unknown_0xA5",
"JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT",
"JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT",
"JOY_EVENT_DRAG_RACE_CHANGE_LANE_LEFT_ANALOG",
"JOY_EVENT_DRAG_RACE_CHANGE_LANE_RIGHT_ANALOG",
"JOY_EVENT_CYCLE_HUD",
"JOY_EVENT_PAUSE",
"JOY_EVENT_SKIP"
};

bool bIsEventDigitalDownOnly(unsigned int joyevent)
{
	return (joyevent == JOY_EVENT_START) 
		|| (joyevent == JOY_EVENT_SELECT) 
		|| (joyevent == JOY_EVENT_CAMERA_POV_CHANGE) 
		|| (joyevent == JOY_EVENT_PAUSE) 
		|| (joyevent == JOY_EVENT_SKIP) 
		|| (joyevent == JOY_EVENT_CHANGE_DEBUG_CAMERA)
		|| (joyevent == JOY_EVENT_CYCLE_HUD)
		|| (joyevent == JOY_EVENT_DEBUG_CAMERA_DROP_CAR);
}

bool bIsEventAnalog(unsigned int joyevent)
{
	return joyevent == JOY_EVENT_DISENGAGE_CLUTCH_ANALOG ||
		joyevent == JOY_EVENT_EBRAKE_ANALOG ||
		joyevent == JOY_EVENT_REVERSE_ANALOG ||
		joyevent == JOY_EVENT_THROTTLE_ANALOG_ALTERNATE ||
		joyevent == JOY_EVENT_BRAKE_ANALOG ||
		joyevent == JOY_EVENT_BRAKE_ANALOG_ALTERNATE ||
		joyevent == JOY_EVENT_THROTTLE_ANALOG ||
		joyevent == JOY_EVENT_THROTTLE_ANALOG_ALTERNATE ||
		joyevent == JOY_EVENT_STEER_ANALOG ||
		joyevent == JOY_EVENT_STEER ||
		joyevent == JOY_EVENT_TRACKROUTE_EDITOR_TURN_LEFTRIGHT ||
		joyevent == JOY_EVENT_TRACKROUTE_EDITOR_TURN_UPDOWN ||
		joyevent == JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_FORWARDBACKWARD ||
		joyevent == JOY_EVENT_TRACKROUTE_EDITOR_DRIVE_LEFTRIGHT ||
		joyevent == JOY_EVENT_DEBUG_CAMERA_INOUT ||
		joyevent == JOY_EVENT_DEBUG_CAMERA_STRAFE_LEFTRIGHT ||
		joyevent == JOY_EVENT_DEBUG_CAMERA_ROTATE_UPDOWN ||
		joyevent == JOY_EVENT_DEBUG_CAMERA_ROTATE_LEFTRIGHT ||
		joyevent == JOY_EVENT_CARSEL_ORBIT_INOUT ||
		joyevent == JOY_EVENT_CARSEL_ORBIT_UPDOWN ||
		joyevent == JOY_EVENT_CARSEL_ORBIT_LEFTRIGHT;
}
