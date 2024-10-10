#pragma once

// string 4DEAB931 label: WheelOptions
// string 358CDCFD label: Feedback

typedef enum {
	FORCE_NONE = 0,
	FORCE_SINE = 1,
	FORCE_SQUARE,
	FORCE_TRIANGLE,
	FORCE_SAWTOOTHUP,
	FORCE_SAWTOOTHDN,
	FORCE_SPRING,
	FORCE_DAMPER,
	FORCE_CONSTANT,
} ForceFeedbackType;

typedef struct {
	int offset;
	int posCoeff;
	int negCoeff;
	int posSaturation;
	int negSaturation;
	int deadBand;
} DxDiCondition;

typedef struct {
 	int magnitude;
    int offset;
    int phase;
    int period;
} DxDiPeriodic;

typedef struct {
	int magnitude;
} DxDiConstant;

typedef struct {
    bool active;
    DWORD attackLevel;
    DWORD attackTime;
    DWORD fadeLevel;
    DWORD fadeTime;
} DxDiEnvelope;

typedef struct {
	DWORD dieffFlags;
	DWORD duration;
	DWORD samplePeriod;
	DWORD gain;
	DWORD triggerButton;
	DWORD triggerRepeatInterval;
	DWORD axes[2];
	int direction[2];

	DxDiConstant parConstant;
	DxDiCondition parConditions[2];
	DxDiPeriodic parPeriodic;

	DxDiEnvelope envelope;
	int startDelay;
	ForceFeedbackType forceType;
} DxForceFeedback;


typedef struct {
	int Magnitude;
	int unk;
} LastValueConstantEffect;

typedef struct {
	int Offset;
	int Saturation;
	int Coeff;
} LastValueSpringEffect;


typedef struct {
	int ForceType;
	int Magnitude;
	int Period;
} LastValuePeriodicEffect;

typedef struct {
	bool active;
	float duration;
	float createdAt;
	DxForceFeedback dxff;
} JoyEffectPlayer;

JoyEffectPlayer JoyEffectPlayStates[1];

void __stdcall JoyPlayForceSpring_5C9150(int joynum, int offset, int saturation, int coeff) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluSpring_2498, effnum 0
	// lastValue 2BA0
	LastValueSpringEffect * lastValue = (LastValueSpringEffect*)(thisObj + 0x2BA0);

	lastValue[joynum].Offset = offset;
	lastValue[joynum].Saturation = saturation;
	lastValue[joynum].Coeff = coeff;

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration = 0xFFFFFFFF;	// INFINITE

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 1;
	dxff.parConditions[0].offset = offset;
	dxff.parConditions[0].posCoeff = coeff;
	dxff.parConditions[0].negCoeff = coeff;
	dxff.parConditions[0].posSaturation = saturation;
	dxff.parConditions[0].negSaturation = saturation;
	dxff.parConditions[0].deadBand = 0;

	dxff.parConditions[1].offset = 0;
	dxff.parConditions[1].posCoeff = 8000;
	dxff.parConditions[1].negCoeff = 8000;
	dxff.parConditions[1].posSaturation = 8000;
	dxff.parConditions[1].negSaturation = 8000;
	dxff.parConditions[1].deadBand = 500;

	dxff.startDelay = 0;
	dxff.envelope.active = 0;
	dxff.forceType = FORCE_SPRING;

	printf("JoyPlayForceSpring_5C9150(0x%x, %d, offset=%d, saturation=%d, coeff=%d )\n", thisObj,
		joynum, offset, saturation, coeff);
}

void __stdcall JoyPlayForceDamper_5C9590(int joynum, int coeff) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluSpring_2498, effnum 1
	// lastValue_2BC8
	DWORD * lastValue = (DWORD*)(thisObj + 0x2BC8);
	lastValue[joynum] = coeff;

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration = 0xFFFFFFFF;	// INFINITE

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;

	dxff.parConditions[0].offset = 0;
	dxff.parConditions[0].posCoeff = coeff;
	dxff.parConditions[0].negCoeff = coeff;
	dxff.parConditions[0].posSaturation = 10000;
	dxff.parConditions[0].negSaturation = 10000;
	dxff.parConditions[0].deadBand = 0;

	dxff.parConditions[1].offset = 0;
	dxff.parConditions[1].posCoeff = 8000;
	dxff.parConditions[1].negCoeff = 8000;
	dxff.parConditions[1].posSaturation = 8000;
	dxff.parConditions[1].negSaturation = 8000;
	dxff.parConditions[1].deadBand = 500;

	dxff.startDelay = 0;
	dxff.envelope.active = 0;

	dxff.forceType = FORCE_DAMPER;

	printf("JoyPlayForceDamper_5C9590(0x%x, %d, coeff=%d)\n", thisObj, joynum, coeff);
}

void __stdcall JoyPlayForceDamper_5C9D90(int joynum, int coeff)
{
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluSpring_2498, effnum 2
	// lastValue_2BF8
	DWORD * lastValue = (DWORD*)(thisObj + 0x2BF8);
	lastValue[joynum] = coeff;

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration = 0xFFFFFFFF;	// INFINITE

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;

	dxff.parConditions[0].offset = 0;
	dxff.parConditions[0].posCoeff = -coeff;
	dxff.parConditions[0].negCoeff = -coeff;
	dxff.parConditions[0].posSaturation = 10000;
	dxff.parConditions[0].negSaturation = 10000;
	dxff.parConditions[0].deadBand = 0;

	dxff.parConditions[1].offset = 0;
	dxff.parConditions[1].posCoeff = 8000;
	dxff.parConditions[1].negCoeff = 8000;
	dxff.parConditions[1].posSaturation = 8000;
	dxff.parConditions[1].negSaturation = 8000;
	dxff.parConditions[1].deadBand = 500;

	dxff.startDelay = 0;
	dxff.envelope.active = 0;

	dxff.forceType = FORCE_DAMPER;

	printf("JoyPlayForceDamper_5C9D90(0x%x, %d, coeff=%d)\n", thisObj, joynum, coeff);
}

void __stdcall JoyPlayForceConstant_5C9380(int joynum, int magnitude) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluConstant_24E8, effnum 0
	// lastValue_2BB8
	LastValueConstantEffect * lastValue = (LastValueConstantEffect*)(thisObj + 0x2BB8);

	lastValue[joynum].Magnitude = magnitude;

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration = 0xFFFFFFFF;	// INFINITE

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parConstant.magnitude = magnitude;

	dxff.startDelay = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime = 0;

	dxff.forceType = FORCE_CONSTANT;

	printf("JoyPlayForceConstant_5C9380(0x%x, %d, magnitude=%d)\n", thisObj, joynum, magnitude);
}

void __stdcall JoyPlayForceSquare_5C9760(int joynum, int magnitude) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluSquare_2538, effnum 0
	// lastValue_2BE0
	DWORD * lastValue = (DWORD*)(thisObj + 0x2BE0);
	lastValue[joynum] = magnitude;

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration = 150000; // microseconds

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parPeriodic.magnitude = magnitude;	// sustain-level
	dxff.parPeriodic.offset = 0;
	dxff.parPeriodic.phase = 0;
	dxff.parPeriodic.period = 75000; // microseconds

	dxff.startDelay = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime = 20000; // microseconds
	dxff.forceType = FORCE_SQUARE;

	const int summedTime = *(int*)0x8651AC;
	const float elapsedTime = summedTime * 0.00025f;

	JoyEffectPlayStates[0].active = true;
	JoyEffectPlayStates[0].dxff = dxff;
	// JoyEffectPlayStates[0].duration = dxff.duration * 0.0000001f;
	JoyEffectPlayStates[0].duration = 0.5;
	JoyEffectPlayStates[0].createdAt = elapsedTime;

	printf("JoyPlayForceSquare_5C9760(0x%x, %d, magnitude=%d)\n", thisObj, joynum, magnitude);
}

void __stdcall JoyPlayForceSquare_5C9BB0(int joynum, int magnitude) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluSquare_2538, effnum 2
	// lastValue4_2BF0
	DWORD * lastValue = (DWORD*)(thisObj + 0x2BF0);
	lastValue[joynum] = magnitude;

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration = 0xFFFFFFFF; // INFINITE microseconds

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parPeriodic.magnitude = magnitude;	// sustain-level
	dxff.parPeriodic.offset = 0;
	dxff.parPeriodic.phase = 0;
	dxff.parPeriodic.period = 100000; // microseconds

	dxff.startDelay = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime = 0; // microseconds
	dxff.forceType = FORCE_SQUARE;

	printf("JoyPlayForceSquare_5C9BB0(0x%x, %d, magnitude=%d)\n", thisObj, joynum, magnitude);
}

void __stdcall JoyPlayForceSine_5C99D0(int joynum, int magnitude) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluSquare_2538, effnum 1
	// lastValue_2BE8
	DWORD * lastValue = (DWORD*)(thisObj + 0x2BE8);
	lastValue[joynum] = magnitude;

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration = 0xFFFFFFFF; // INFINITE microseconds

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parPeriodic.magnitude = magnitude;	// sustain-level
	dxff.parPeriodic.offset = 0;
	dxff.parPeriodic.phase = 0;
	dxff.parPeriodic.period = 65000; // microseconds

	dxff.startDelay = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime = 0; // microseconds
	dxff.forceType = FORCE_SINE;

	printf("JoyPlayForceSine_5C99D0(0x%x, %d, magnitude=%d)\n", thisObj, joynum, magnitude);
}

void __stdcall JoyPlayForcefeedback_5C9FD0(int joynum, int forceType, int magnitude, int period) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluSquare_2538, effnum 3
	// lastValue_2C00
	LastValuePeriodicEffect * lastValue = (LastValuePeriodicEffect*)(thisObj + 0x2C00);

	lastValue->ForceType = forceType;
	lastValue->Magnitude = magnitude;
	lastValue->Period = period;

	char *forceTypeName = "NULL";

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration = 0xFFFFFFFF; // INFINITE microseconds

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parPeriodic.magnitude = magnitude;	// sustain-level
	dxff.parPeriodic.offset = 0;
	dxff.parPeriodic.phase = 0;
	dxff.parPeriodic.period = 1000 * period; // microseconds

	dxff.startDelay = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime = 0; // microseconds

	switch ( forceType )
    {
      case 0:
	  	dxff.forceType = FORCE_SINE;
        forceTypeName = "GUID_Sine";
        break;
      case 1:
	  	dxff.forceType = FORCE_SQUARE;
        forceTypeName = "GUID_Square";
        break;
      case 2:
	  	dxff.forceType = FORCE_TRIANGLE;
        forceTypeName = "GUID_Triangle";
        break;
      case 3:
	  	dxff.forceType = FORCE_SAWTOOTHUP;
        forceTypeName = "GUID_SawtoothUp";
        break;
      case 4:
	  	dxff.forceType = FORCE_SAWTOOTHDN;
        forceTypeName = "GUID_SawtoothDown";
        break;
      default:
        break;
    }

	printf("JoyPlayForcefeedback_5C9FD0(0x%x, %d, %s, magnitude=%d, period=%d)\n", thisObj, joynum, forceTypeName, magnitude, period);
}

bool __stdcall JoyGetStatusEffect_5C0070(int a1_joynum, int a2_effnum) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	//printf("JoyGetStatusEffect_5C0070( 0x%x, channel-%d, effnum-%d\n", thisObj, a1_joynum, a2_effnum);
}

void InitForceFeedback() {
    //injector::MakeJMP(0x5C9150, JoyPlayForceSpring_5C9150, true);
	injector::MakeJMP(0x5C9380, JoyPlayForceConstant_5C9380, true);
	//injector::MakeJMP(0x5C9590, JoyPlayForceDamper_5C9590, true);
	//injector::MakeJMP(0x5C9D90, JoyPlayForceDamper_5C9D90, true);
	injector::MakeJMP(0x5C9760, JoyPlayForceSquare_5C9760, true);
	injector::MakeJMP(0x5C9BB0, JoyPlayForceSquare_5C9BB0, true);
	injector::MakeJMP(0x5C99D0, JoyPlayForceSine_5C99D0, true);
	injector::MakeJMP(0x5C9FD0, JoyPlayForcefeedback_5C9FD0, true);

	//injector::MakeJMP(0x5C0070, JoyGetStatusEffect_5C0070, true);
}


void UpdateControllerFeedback()
{
	const int summedTime = *(int*)0x8651AC;
	const float elapsedTime = summedTime * 0.00025f;
	XINPUT_VIBRATION vibration = {0, 0};

	//printf("elapsedTime = %.3f, summedTime = %d\n", elapsedTime, summedTime);
	if (JoyEffectPlayStates[0].active) {
		const float gain = 65535 * JoyEffectPlayStates[0].dxff.gain/10000;

		//printf("Vibrate %.3f %.3f\n", JoyEffectPlayStates[0].duration, gain);

		if (elapsedTime - JoyEffectPlayStates[0].createdAt >= JoyEffectPlayStates[0].duration) {
			JoyEffectPlayStates[0].active = false;
		} else {
			vibration.wRightMotorSpeed = gain;
		}

		XInputSetState(0, &vibration);

	}
}
