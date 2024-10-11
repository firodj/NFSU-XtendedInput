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
 	int Magnitude;  // 0 through 10,000 at Peak
    int Offset;
    int Phase;  // 0 through 35,999
    int Period4k; // microsecond
} DxDiPeriodic;

typedef struct {
	int magnitude;
} DxDiConstant;

typedef struct {
    bool active;
    DWORD attackLevel;
    DWORD attackTime4k; // in microseconds, stored as *  0.004
    DWORD fadeLevel;
    DWORD fadeTime4k;   // in microseconds, stored as *  0.004
} DxDiEnvelope;

typedef struct {
	DWORD dieffFlags;
	DWORD duration4k;
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
	int startDelay4k;   // in microseconds
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
    int createdAt4k;
    int time4k;
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
	dxff.duration4k = 0xFFFFFFFF;	// INFINITE

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

	dxff.startDelay4k = 0;
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
	dxff.duration4k = 0xFFFFFFFF;	// INFINITE

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

	dxff.startDelay4k = 0;
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
	dxff.duration4k = 0xFFFFFFFF;	// INFINITE

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

	dxff.startDelay4k = 0;
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
	dxff.duration4k = 0xFFFFFFFF;	// INFINITE

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parConstant.magnitude = magnitude;

	dxff.startDelay4k = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime4k = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime4k = 0;

	dxff.forceType = FORCE_CONSTANT;

	printf("JoyPlayForceConstant_5C9380(0x%x, %d, magnitude=%d)\n", thisObj, joynum, magnitude);
}

inline int GetElapsedTime4k() {
	const int summedTime = *(int*)0x8651AC;
	return summedTime; // * 0.00025f;
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
	dxff.duration4k = 150000 * 0.004; // microseconds

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parPeriodic.Magnitude = magnitude;	// sustain-level
	dxff.parPeriodic.Offset = 0;
	dxff.parPeriodic.Phase = 0;
	dxff.parPeriodic.Period4k = 75000 * 0.004; // microseconds

	dxff.startDelay4k = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime4k = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime4k = 20000 * 0.004; // microseconds
	dxff.forceType = FORCE_SQUARE;

	JoyEffectPlayStates[0].active = true;
	JoyEffectPlayStates[0].dxff = dxff;
	JoyEffectPlayStates[0].createdAt4k = GetElapsedTime4k();
    JoyEffectPlayStates[0].time4k = 0;
    //printf("! JoyPlayForceSquare_5C9760(0x%x, %d, magnitude=%d)\n", thisObj, joynum, magnitude);
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
	dxff.duration4k = 0xFFFFFFFF; // INFINITE microseconds

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parPeriodic.Magnitude = magnitude;	// sustain-level
	dxff.parPeriodic.Offset = 0;
	dxff.parPeriodic.Phase = 0;
	dxff.parPeriodic.Period4k = 100000 * 0.004; // microseconds

	dxff.startDelay4k = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime4k = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime4k = 0; // microseconds
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
	dxff.duration4k = 0xFFFFFFFF; // INFINITE microseconds

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parPeriodic.Magnitude = magnitude;	// sustain-level
	dxff.parPeriodic.Offset = 0;
	dxff.parPeriodic.Phase = 0;
	dxff.parPeriodic.Period4k = 65000 * 0.004; // microseconds

	dxff.startDelay4k = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime4k = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime4k = 0; // microseconds
	dxff.forceType = FORCE_SINE;

	printf("JoyPlayForceSine_5C99D0(0x%x, %d, magnitude=%d)\n", thisObj, joynum, magnitude);
}

void __stdcall JoyPlayForcefeedback_5C9FD0(int joynum, int forceType, int magnitude, int periodInMS) {
	unsigned int thisObj = 0;
	_asm mov thisObj, ecx

	// buluSquare_2538, effnum 3
	// lastValue_2C00
	LastValuePeriodicEffect * lastValue = (LastValuePeriodicEffect*)(thisObj + 0x2C00);

	lastValue->ForceType = forceType;
	lastValue->Magnitude = magnitude;
	lastValue->Period = periodInMS;

	char *forceTypeName = "NULL";

	DxForceFeedback dxff;
	memset(&dxff, 0, sizeof(dxff));
	dxff.dieffFlags = 0x12;	//  DIEFF_CARTESIAN |  DIEFF_OBJECTOFFSETS
	dxff.duration4k = 0xFFFFFFFF; // INFINITE microseconds

	dxff.samplePeriod = 0;
	dxff.gain = 10000; // MAX
	dxff.triggerButton = 0xFFFFFFFF; // DIEB_NOTRIGGER
	dxff.triggerRepeatInterval = 0;
	dxff.axes[0] = 0;
	dxff.axes[1] = 4;
	dxff.direction[0] = 1;
	dxff.direction[1] = 0;
	dxff.parPeriodic.Magnitude = magnitude;	// sustain-level
	dxff.parPeriodic.Offset = 0;
	dxff.parPeriodic.Phase = 0;
	dxff.parPeriodic.Period4k = 1000 * periodInMS * 0.004; // microseconds

	dxff.startDelay4k = 0;
	dxff.envelope.active = 1;
	dxff.envelope.attackLevel = 0;
	dxff.envelope.attackTime4k = 0;
	dxff.envelope.fadeLevel = 0;
	dxff.envelope.fadeTime4k = 0; // microseconds

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

    if (magnitude != 0) {
        JoyEffectPlayStates[0].active = true;
        JoyEffectPlayStates[0].dxff = dxff;

        JoyEffectPlayStates[0].createdAt4k = GetElapsedTime4k();
        JoyEffectPlayStates[0].time4k = 0;
        //printf("! JoyPlayForcefeedback_5C9FD0(0x%x, %d, %s, magnitude=%d, period=%d)\n", thisObj, joynum, forceTypeName, magnitude, period);
    }
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
	//const int summedTime = *(int*)0x8651AC;
	//const float elapsedTime = summedTime * 0.00025f;
	XINPUT_VIBRATION vibration = {0, 0};

	//printf("elapsedTime = %.3f, summedTime = %d\n", elapsedTime, summedTime);
	if (JoyEffectPlayStates[0].active) {
        const DxForceFeedback &dxff = JoyEffectPlayStates[0].dxff;

        JoyEffectPlayStates[0].time4k = (GetElapsedTime4k() - JoyEffectPlayStates[0].createdAt4k);

        int duration = max(2000, dxff.duration4k == 0xFFFFFFFF ? 2000 : dxff.duration4k);

        if (JoyEffectPlayStates[0].time4k < JoyEffectPlayStates[0].dxff.startDelay4k) {
            return;
        }

        int currentPos = JoyEffectPlayStates[0].time4k - dxff.startDelay4k;

        int attackLevel = 0;
        int fadeLevel = 0;
        int normalLevel = 100;

        if (dxff.envelope.active) {
            int attackPhase = 0;
            if (dxff.envelope.attackTime4k != 0 && currentPos < dxff.envelope.attackTime4k) {
                attackPhase = (dxff.envelope.attackTime4k - currentPos) * 100 / dxff.envelope.attackTime4k;
            }

            int fadePhase = 0;
            if (dxff.envelope.fadeTime4k != 0 && duration != 0xFFFFFFFF) {
                int fadePos = duration - dxff.envelope.fadeTime4k;
                if (currentPos > fadePos) {
                    fadePhase = (currentPos - fadePos) * 100 / dxff.envelope.fadeTime4k;
                }
            }

            normalLevel = 100 - attackPhase - fadePhase;
            attackLevel = dxff.envelope.attackLevel * attackPhase;
            fadeLevel = dxff.envelope.fadeLevel * fadePhase;
        }

        int wavePeriod;
        int wavePhase;
        int magnitude;

#if 0
        switch (dxff.forceType) {
            case FORCE_SQUARE:
            case FORCE_SINE:
            case FORCE_TRIANGLE:
                wavePeriod = max( 1, dxff.parPeriodic.Period4k );
                wavePhase = ( currentPos % wavePeriod ) * 360 / dxff.parPeriodic.Period4k;
                wavePhase = ( wavePhase + (dxff.parPeriodic.Phase / 100) ) % 360;
                magnitude = (dxff.parPeriodic.Magnitude * normalLevel) / 100;

                switch (dxff.forceType) {
                    case FORCE_SQUARE:
                        if( 180 <= wavePhase ) magnitude = -magnitude;
                        break;

                    case FORCE_SINE:
                        magnitude	= magnitude * sin( wavePhase * 3.14159265358979323846 / 180.0 );
                        break;
                    case FORCE_TRIANGLE:
                        if( 0 <= wavePhase && wavePhase < 90 )
                        {
                            magnitude	= -magnitude * ( 90 - wavePhase ) / 90;
                        }
                        if( 90 <= wavePhase && wavePhase < 180 )
                        {
                            magnitude	= magnitude * ( wavePhase - 90 ) / 90;
                        }
                        if( 180 <= wavePhase && wavePhase < 270 )
                        {
                            magnitude	= magnitude * ( 90 - ( wavePhase - 180 ) ) / 90;
                        }
                        if( 270 <= wavePhase && wavePhase < 360 )
                        {
                            magnitude	= -magnitude * ( wavePhase - 270 ) / 90;
                        }
                        break;
                }
                magnitude += dxff.parPeriodic.Offset;
                break;
        }
#endif
        // magnitude = (dxff.parPeriodic.Magnitude * normalLevel + attackLevel + fadeLevel) / 100;
        magnitude = (dxff.parPeriodic.Magnitude * normalLevel) / 100;
        float gain = min(65535, 65535 * (dxff.gain * 0.0001f) * fabs(magnitude * 0.0001f));
        float Lgain=0.0f, Hgain = 0.0f;

        switch (dxff.forceType) {
            case FORCE_SINE:
                Lgain = gain; break;
            case FORCE_TRIANGLE:
                Hgain = gain; break;
            case FORCE_SQUARE:
                Hgain = gain; Lgain = gain; break;
        }

        //printf("Vibrate t=%d duration=%d\n", JoyEffectPlayStates[0].time4k, duration);
		if (JoyEffectPlayStates[0].time4k >= duration) {
			JoyEffectPlayStates[0].active = false;
		} else {
			vibration.wLeftMotorSpeed = Hgain;
            vibration.wRightMotorSpeed = Lgain;
            //printf("Vibrate L=%.3f H=%.3f normal=%d\n", Lgain, Hgain, normalLevel);
		}

		XInputSetState(0, &vibration);
	}
}
