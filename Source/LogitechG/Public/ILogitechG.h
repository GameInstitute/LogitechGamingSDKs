// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine.h"

#define LOGI_LED_BITMAP_WIDTH 21
#define LOGI_LED_BITMAP_HEIGHT 6
#define LOGI_LED_BITMAP_BYTES_PER_KEY 4

#define LOGI_LED_BITMAP_SIZE (LOGI_LED_BITMAP_WIDTH*LOGI_LED_BITMAP_HEIGHT*LOGI_LED_BITMAP_BYTES_PER_KEY)

#define LOGI_LED_DURATION_INFINITE 0

#define LOGI_DEVICETYPE_MONOCHROME_ORD  0
#define LOGI_DEVICETYPE_RGB_ORD         1
#define LOGI_DEVICETYPE_PERKEY_RGB_ORD  2

#define LOGI_DEVICETYPE_MONOCHROME  (1 << LOGI_DEVICETYPE_MONOCHROME_ORD)
#define LOGI_DEVICETYPE_RGB         (1 << LOGI_DEVICETYPE_RGB_ORD)
#define LOGI_DEVICETYPE_PERKEY_RGB  (1 << LOGI_DEVICETYPE_PERKEY_RGB_ORD)

#define LOGI_DEVICETYPE_ALL (LOGI_DEVICETYPE_MONOCHROME | LOGI_DEVICETYPE_RGB | LOGI_DEVICETYPE_PERKEY_RGB)

typedef enum
{
	ESC = 0x01,
	F1 = 0x3b,
	F2 = 0x3c,
	F3 = 0x3d,
	F4 = 0x3e,
	F5 = 0x3f,
	F6 = 0x40,
	F7 = 0x41,
	F8 = 0x42,
	F9 = 0x43,
	F10 = 0x44,
	F11 = 0x57,
	F12 = 0x58,
	PRINT_SCREEN = 0x137,
	SCROLL_LOCK = 0x46,
	PAUSE_BREAK = 0x145,
	TILDE = 0x29,
	ONE = 0x02,
	TWO = 0x03,
	THREE = 0x04,
	FOUR = 0x05,
	FIVE = 0x06,
	SIX = 0x07,
	SEVEN = 0x08,
	EIGHT = 0x09,
	NINE = 0x0A,
	ZERO = 0x0B,
	MINUS = 0x0C,
	EQUALS = 0x0D,
	BACKSPACE = 0x0E,
	INSERT = 0x152,
	HOME = 0x147,
	PAGE_UP = 0x149,
	NUM_LOCK = 0x45,
	NUM_SLASH = 0x135,
	NUM_ASTERISK = 0x37,
	NUM_MINUS = 0x4A,
	TAB = 0x0F,
	Q = 0x10,
	W = 0x11,
	E = 0x12,
	R = 0x13,
	T = 0x14,
	Y = 0x15,
	U = 0x16,
	I = 0x17,
	O = 0x18,
	P = 0x19,
	OPEN_BRACKET = 0x1A,
	CLOSE_BRACKET = 0x1B,
	BACKSLASH = 0x2B,
	KEYBOARD_DELETE = 0x153,
	END = 0x14F,
	PAGE_DOWN = 0x151,
	NUM_SEVEN = 0x47,
	NUM_EIGHT = 0x48,
	NUM_NINE = 0x49,
	NUM_PLUS = 0x4E,
	CAPS_LOCK = 0x3A,
	A = 0x1E,
	S = 0x1F,
	D = 0x20,
	F = 0x21,
	G = 0x22,
	H = 0x23,
	J = 0x24,
	K = 0x25,
	L = 0x26,
	SEMICOLON = 0x27,
	APOSTROPHE = 0x28,
	ENTER = 0x1C,
	NUM_FOUR = 0x4B,
	NUM_FIVE = 0x4C,
	NUM_SIX = 0x4D,
	LEFT_SHIFT = 0x2A,
	Z = 0x2C,
	X = 0x2D,
	C = 0x2E,
	V = 0x2F,
	B = 0x30,
	N = 0x31,
	M = 0x32,
	COMMA = 0x33,
	PERIOD = 0x34,
	FORWARD_SLASH = 0x35,
	RIGHT_SHIFT = 0x36,
	ARROW_UP = 0x148,
	NUM_ONE = 0x4F,
	NUM_TWO = 0x50,
	NUM_THREE = 0x51,
	NUM_ENTER = 0x11C,
	LEFT_CONTROL = 0x1D,
	LEFT_WINDOWS = 0x15B,
	LEFT_ALT = 0x38,
	SPACE = 0x39,
	RIGHT_ALT = 0x138,
	RIGHT_WINDOWS = 0x15C,
	APPLICATION_SELECT = 0x15D,
	RIGHT_CONTROL = 0x11D,
	ARROW_LEFT = 0x14B,
	ARROW_DOWN = 0x150,
	ARROW_RIGHT = 0x14D,
	NUM_ZERO = 0x52,
	NUM_PERIOD = 0x53,

}KeyName;

typedef enum
{
    Keyboard = 0x0,
    Mouse = 0x3,
    Mousemat = 0x4,
    Headset = 0x8,
    Speaker = 0xe
}DeviceType;

#define LOGI_ARX_ORIENTATION_PORTRAIT 0x01
#define LOGI_ARX_ORIENTATION_LANDSCAPE 0x10

#define LOGI_ARX_EVENT_FOCUS_ACTIVE 0x01
#define LOGI_ARX_EVENT_FOCUS_INACTIVE 0x02
#define LOGI_ARX_EVENT_TAP_ON_TAG 0x04
#define LOGI_ARX_EVENT_MOBILEDEVICE_ARRIVAL 0x08
#define LOGI_ARX_EVENT_MOBILEDEVICE_REMOVAL 0x10

#define LOGI_ARX_DEVICETYPE_IPHONE 0x01
#define LOGI_ARX_DEVICETYPE_IPAD 0x02
#define LOGI_ARX_DEVICETYPE_ANDROID_SMALL 0x03
#define LOGI_ARX_DEVICETYPE_ANDROID_NORMAL 0x04
#define LOGI_ARX_DEVICETYPE_ANDROID_LARGE 0x05
#define LOGI_ARX_DEVICETYPE_ANDROID_XLARGE 0x06
#define LOGI_ARX_DEVICETYPE_ANDROID_OTHER 0x07

typedef void(__cdecl *logiArxCb)(unsigned __int32 eventType, unsigned __int32 eventValue, wchar_t *eventArg, void * context);

typedef struct
{
	logiArxCb arxCallBack;
	void* arxContext;
}ArxCbContext;

#define LOGITECH_MAX_MOUSE_BUTTONS 20
#define LOGITECH_MAX_GKEYS 29
#define LOGITECH_MAX_M_STATES 3

typedef struct
{
	unsigned int keyIdx : 8;
	unsigned int keyDown : 1;
	unsigned int mState : 2;
	unsigned int mouse : 1;
	unsigned int reserved1 : 4;
	unsigned int reserved2 : 16;
} KeyCode;

typedef void(__cdecl *GkeyCB)(KeyCode gkeyCode, const wchar_t* gkeyOrButtonString, void* context);

typedef struct
{
	GkeyCB gkeyCallBack;
	void* gkeyContext;
} GkeyCBContext;


#define LOGI_LCD_TYPE_MONO    (0x00000001)
#define LOGI_LCD_TYPE_COLOR   (0x00000002)

#define LOGI_LCD_MONO_BUTTON_0 (0x00000001)
#define LOGI_LCD_MONO_BUTTON_1 (0x00000002)
#define LOGI_LCD_MONO_BUTTON_2 (0x00000004)
#define LOGI_LCD_MONO_BUTTON_3 (0x00000008)

#define LOGI_LCD_COLOR_BUTTON_LEFT   (0x00000100)
#define LOGI_LCD_COLOR_BUTTON_RIGHT  (0x00000200)
#define LOGI_LCD_COLOR_BUTTON_OK     (0x00000400)
#define LOGI_LCD_COLOR_BUTTON_CANCEL (0x00000800)
#define LOGI_LCD_COLOR_BUTTON_UP     (0x00001000)
#define LOGI_LCD_COLOR_BUTTON_DOWN   (0x00002000)
#define LOGI_LCD_COLOR_BUTTON_MENU   (0x00004000)

const int LCD_MONO_WIDTH = 160;
const int LCD_MONO_HEIGHT = 43;

const int LCD_COLOR_WIDTH = 320;
const int LCD_COLOR_HEIGHT = 240;

typedef struct ControllerPropertiesData
{
	bool forceEnable;
	int overallGain;
	int springGain;
	int damperGain;
	bool defaultSpringEnabled;
	int defaultSpringGain;
	bool combinePedals;
	int wheelRange;
	bool gameSettingsEnabled;
	bool allowGameSettings;
}ControllerPropertiesData;

typedef struct DIJOYSTATE {
	int				lX;                     /* x-axis position              */
	int				lY;                     /* y-axis position              */
	int				lZ;                     /* z-axis position              */
	int				lRx;                    /* x-axis rotation              */
	int				lRy;                    /* y-axis rotation              */
	int				lRz;                    /* z-axis rotation              */
	int				rglSlider[2];           /* extra axes positions         */
	unsigned int	rgdwPOV[4];             /* POV directions               */
	unsigned char   rgbButtons[128];        /* 128 buttons                  */
	int				lVX;                    /* x-axis velocity              */
	int				lVY;                    /* y-axis velocity              */
	int				lVZ;                    /* z-axis velocity              */
	int				lVRx;                   /* x-axis angular velocity      */
	int				lVRy;                   /* y-axis angular velocity      */
	int				lVRz;                   /* z-axis angular velocity      */
	int				rglVSlider[2];          /* extra axes velocities        */
	int				lAX;                    /* x-axis acceleration          */
	int				lAY;                    /* y-axis acceleration          */
	int				lAZ;                    /* z-axis acceleration          */
	int				lARx;                   /* x-axis angular acceleration  */
	int				lARy;                   /* y-axis angular acceleration  */
	int				lARz;                   /* z-axis angular acceleration  */
	int				rglASlider[2];          /* extra axes accelerations     */
	int				lFX;                    /* x-axis force                 */
	int				lFY;                    /* y-axis force                 */
	int				lFZ;                    /* z-axis force                 */
	int				lFRx;                   /* x-axis torque                */
	int				lFRy;                   /* y-axis torque                */
	int				lFRz;                   /* z-axis torque                */
	int				rglFSlider[2];          /* extra axes forces            */
} DIJOYSTATE;

const int MAX_CONTROLLERS = 2;

const int FORCE_NONE = -1;
const int FORCE_SPRING = 0;
const int FORCE_CONSTANT = 1;
const int FORCE_DAMPER = 2;
const int FORCE_SIDE_COLLISION = 3;
const int FORCE_FRONTAL_COLLISION = 4;
const int FORCE_DIRT_ROAD = 5;
const int FORCE_BUMPY_ROAD = 6;
const int FORCE_SLIPPERY_ROAD = 7;
const int FORCE_SURFACE_EFFECT = 8;
const int NUMBER_FORCE_EFFECTS = 9;
const int FORCE_SOFTSTOP = 10;
const int FORCE_CAR_AIRBORNE = 11;

const int PERIODICTYPE_NONE = -1;
const int PERIODICTYPE_SINE = 0;
const int PERIODICTYPE_SQUARE = 1;
const int PERIODICTYPE_TRIANGLE = 2;

const int DEVICE_TYPE_NONE = -1;
const int DEVICE_TYPE_WHEEL = 0;
const int DEVICE_TYPE_JOYSTICK = 1;
const int DEVICE_TYPE_GAMEPAD = 2;
const int DEVICE_TYPE_OTHER = 3;
const int NUMBER_DEVICE_TYPES = 4;

const int MANUFACTURER_NONE = -1;
const int MANUFACTURER_LOGITECH = 0;
const int MANUFACTURER_MICROSOFT = 1;
const int MANUFACTURER_OTHER = 2;

const int MODEL_G27 = 0;
const int MODEL_DRIVING_FORCE_GT = 1;
const int MODEL_G25 = 2;
const int MODEL_MOMO_RACING = 3;
const int MODEL_MOMO_FORCE = 4;
const int MODEL_DRIVING_FORCE_PRO = 5;
const int MODEL_DRIVING_FORCE = 6;
const int MODEL_NASCAR_RACING_WHEEL = 7;
const int MODEL_FORMULA_FORCE = 8;
const int MODEL_FORMULA_FORCE_GP = 9;
const int MODEL_FORCE_3D_PRO = 10;
const int MODEL_EXTREME_3D_PRO = 11;
const int MODEL_FREEDOM_24 = 12;
const int MODEL_ATTACK_3 = 13;
const int MODEL_FORCE_3D = 14;
const int MODEL_STRIKE_FORCE_3D = 15;
const int MODEL_G940_JOYSTICK = 16;
const int MODEL_G940_THROTTLE = 17;
const int MODEL_G940_PEDALS = 18;
const int MODEL_RUMBLEPAD = 19;
const int MODEL_RUMBLEPAD_2 = 20;
const int MODEL_CORDLESS_RUMBLEPAD_2 = 21;
const int MODEL_CORDLESS_GAMEPAD = 22;
const int MODEL_DUAL_ACTION_GAMEPAD = 23;
const int MODEL_PRECISION_GAMEPAD_2 = 24;
const int MODEL_CHILLSTREAM = 25;
const int MODEL_G29 = 26;
const int MODEL_G920 = 27;
const int NUMBER_MODELS = 28;

#define LOGITECHG_MODULE_NAME	TEXT("LogitechG")

/**
 * The public interface to this module.  In most cases, this interface is only public to sibling modules
 * within this plugin.
 */
class ILogitechG : public IModuleInterface
{

public:
	static FName GetModularFeatureName()
	{
		static FName FeatureName = FName(LOGITECHG_MODULE_NAME);
		return FeatureName;
	}

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline ILogitechG& Get()
	{
		return FModuleManager::LoadModuleChecked< ILogitechG >("LogitechG");
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded("LogitechG");
	}

            virtual bool LedInit() = 0;
            virtual bool LedInitWithName(const FString name) = 0;
	virtual bool LedGetSdkVersion(int *majorNum, int *minorNum, int *buildNum) = 0;
	virtual bool LedGetConfigOptionNumber(const FString configPath, double *defaultValue) = 0;
	virtual bool LedGetConfigOptionBool(const FString configPath, bool *defaultValue) = 0;
	virtual bool LedGetConfigOptionColor(const FString configPath, int *defaultRed, int *defaultGreen, int *defaultBlue) = 0;
	virtual bool LedGetConfigOptionColorByFColor(const FString configPath, FColor &color) = 0;
	virtual bool LedGetConfigOptionKeyInput(const FString configPath, FString &defaultValue) = 0;
	virtual bool LedSetConfigOptionLabel(const FString configPath, FString label) = 0;
	virtual bool LedSetTargetDevice(const int targetDevice) = 0;
	virtual bool LedSaveCurrentLighting() = 0;
	virtual bool LedSetLighting(const int redPercentage, const int greenPercentage, const int bluePercentage) = 0;
	virtual bool LedSetLightingByFColor(const FColor color) = 0;
	virtual bool LedRestoreLighting() = 0;
	virtual bool LedFlashLighting(const int redPercentage, const int greenPercentage, const int bluePercentage, const int milliSecondsDuration, const int milliSecondsInterval) = 0;
	virtual bool LedPulseLighting(const int redPercentage, const int greenPercentage, const int bluePercentage, const int milliSecondsDuration, const int milliSecondsInterval) = 0;
	virtual bool LedFlashLightingByFColor(const FColor color, const int milliSecondsDuration, const int milliSecondsInterval) = 0;
	virtual bool LedPulseLightingByFColor(const FColor color, const int milliSecondsDuration, const int milliSecondsInterval) = 0;
	virtual bool LedStopEffects() = 0;
	virtual bool LedExcludeKeysFromBitmap(const KeyName *keyList, const int listCount) = 0;
	virtual bool LedSetLightingFromBitmap(const unsigned char bitmap[]) = 0;
	virtual bool LedSetLightingForKeyWithScanCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage) = 0;
	virtual bool LedSetLightingForKeyWithHidCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage) = 0;
	virtual bool LedSetLightingForKeyWithQuartzCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage) = 0;
	virtual bool LedSetLightingForKeyWithKeyName(const KeyName keyName, const int redPercentage, const int greenPercentage, const int bluePercentage) = 0;
	virtual bool LedSetLightingForKeyWithFKey(const FKey fkey, const int redPercentage, const int greenPercentage, const int bluePercentage) = 0;
	virtual bool LedSetLightingForKeyWithScanCodeByFColor(const int keyCode, const FColor color) = 0;
	virtual bool LedSetLightingForKeyWithHidCodeByFColor(const int keyCode, const FColor color) = 0;
	virtual bool LedSetLightingForKeyWithQuartzCodeByFColor(const int keyCode, const FColor color) = 0;
            virtual bool LedSetLightingForKeyWithKeyNameByFColor(const KeyName keyName, const FColor color) = 0;
            virtual bool LedSetLightingForKeyWithFKeyByFColor(const FKey fkey, const FColor color) = 0;
            virtual bool LedSetLightingForTargetZone(DeviceType deviceType, int zone, int redPercentage, int greenPercentage, int bluePercentage) = 0;
	virtual KeyName LedGetKeyNameFromFKey(const FKey fkey) = 0;
	virtual bool LedSaveLightingForKey(const KeyName keyName) = 0;
	virtual bool LedRestoreLightingForKey(const KeyName keyName) = 0;
	virtual bool LedFlashSingleKey(const KeyName keyName, const int redPercentage, const int greenPercentage, const int bluePercentage, const int msDuration, const int msInterval) = 0;
	virtual bool LedPulseSingleKey(const KeyName keyName, const int startRedPercentage, const int startGreenPercentage, const int startBluePercentage, const int finishRedPercentage, const int finishGreenPercentage, const int finishBluePercentage, const int msDuration, bool isInfinite) = 0;
	virtual bool LedFlashSingleKeyByFColor(const KeyName keyName, const FColor color, const int msDuration, const int msInterval) = 0;
	virtual bool LedPulseSingleKeyByFColor(const KeyName keyName, const FColor startColor, const FColor finishColor, const int msDuration, bool isInfinite) = 0;
	virtual bool LedStopEffectsOnKey(const KeyName keyName) = 0;
	virtual void LedShutdown() = 0;

	virtual bool ArxInit(const FString identifier, const FString friendlyName, const ArxCbContext *callbackContext) = 0;
	virtual bool ArxAddFileAs(const FString filePath, const FString fileName, const FString mimeType = "") = 0;
	virtual bool ArxAddContentAs(const void* content, const int size, const FString fileName, const FString mimeType = "") = 0;
	virtual bool ArxAddUTF8StringAs(const FString stringContent, const FString fileName, const FString mimeType = "") = 0;
	virtual bool ArxAddImageFromBitmap(const unsigned char *bitmap, const int width, const int height, const FString fileName) = 0;
	virtual bool ArxSetIndex(const FString fileName) = 0;
	virtual bool ArxSetTagPropertyById(const FString tagId, const FString prop, const FString newValue) = 0;
	virtual bool ArxSetTagsPropertyByClass(const FString tagsClass, const FString prop, const FString newValue) = 0;
	virtual bool ArxSetTagContentById(const FString tagId, const FString newContent) = 0;
	virtual bool ArxSetTagsContentByClass(const FString tagsClass, const FString newContent) = 0;
	virtual int ArxGetLastError() = 0;
	virtual void ArxShutdown() = 0;

	virtual bool GkeyInit(const GkeyCBContext* gkeyCBContext) = 0;
	virtual bool GkeyInitWithoutCallback() = 0;
	virtual bool GkeyInitWithoutContext(const GkeyCB gkeyCallBack) = 0;
	virtual bool GkeyIsMouseButtonPressed(const int buttonNumber) = 0;
	virtual FString GkeyGetMouseButtonString(const int buttonNumber) = 0;
	virtual bool GkeyIsKeyboardGkeyPressed(const int gkeyNumber, const int modeNumber) = 0;
	virtual FString GkeyGetKeyboardGkeyString(const int gkeyNumber, const int modeNumber) = 0;
	virtual void GkeyShutdown() = 0;

	virtual bool LcdInit(const FString friendlyName, const int lcdType) = 0;
	virtual bool LcdIsConnected(const int lcdType) = 0;
	virtual bool LcdIsButtonPressed(const int button) = 0;
	virtual void LcdUpdate() = 0;
	virtual void LcdShutdown() = 0;
	virtual bool LcdMonoSetBackground(const unsigned char* monoBitmap) = 0;
	virtual bool LcdMonoSetText(const int lineNumber, const FString text) = 0;
	virtual bool LcdColorSetBackground(const unsigned char * colorBitmap) = 0;
	virtual bool LcdColorSetTitle(const FString text, const int red = 255, const int green = 255, const int blue = 255) = 0;
	virtual bool LcdColorSetText(const int lineNumber, const FString text, const int red = 255, const int green = 255, const int blue = 255) = 0;

	virtual bool WheelInit(const bool ignoreXInputControllers = false) = 0;
	virtual bool WheelGetSdkVersion(int *majorNum, int *minorNum, int *buildNum) = 0;
	virtual bool WheelUpdate() = 0;
	virtual DIJOYSTATE* WheelGetState(const int index) = 0;
	virtual FString WheelGetFriendlyProductName(const int index) = 0;
	virtual bool WheelIsConnected(const int index) = 0;
	virtual bool WheelIsDeviceConnected(const int index, const int deviceType) = 0;
	virtual bool WheelIsManufacturerConnected(const int index, const int manufacturerName) = 0;
	virtual bool WheelIsModelConnected(const int index, const int modelName) = 0;
	virtual bool WheelButtonTriggered(const int index, const int buttonNbr) = 0;
	virtual bool WheelButtonReleased(const int index, const int buttonNbr) = 0;
	virtual bool WheelButtonIsPressed(const int index, const int buttonNbr) = 0;
	virtual bool WheelGenerateNonLinearValues(const int index, const int nonLinCoeff) = 0;
	virtual int WheelGetNonLinearValue(const int index, const int inputValue) = 0;
	virtual bool WheelHasForceFeedback(const int index) = 0;
	virtual bool WheelIsPlaying(const int index, const int forceType) = 0;
	virtual bool WheelPlaySpringForce(const int index, const int offsetPercentage, const int saturationPercentage, const int coefficientPercentage) = 0;
	virtual bool WheelStopSpringForce(const int index) = 0;
	virtual bool WheelPlayConstantForce(const int index, const int magnitudePercentage) = 0;
	virtual bool WheelStopConstantForce(const int index) = 0;
	virtual bool WheelPlayDamperForce(const int index, const int coefficientPercentage) = 0;
	virtual bool WheelStopDamperForce(const int index) = 0;
	virtual bool WheelPlaySideCollisionForce(const int index, const int magnitudePercentage) = 0;
	virtual bool WheelPlayFrontalCollisionForce(const int index, const int magnitudePercentage) = 0;
	virtual bool WheelPlayDirtRoadEffect(const int index, const int magnitudePercentage) = 0;
	virtual bool WheelStopDirtRoadEffect(const int index) = 0;
	virtual bool WheelPlayBumpyRoadEffect(const int index, const int magnitudePercentage) = 0;
	virtual bool WheelStopBumpyRoadEffect(const int index) = 0;
	virtual bool WheelPlaySlipperyRoadEffect(const int index, const int magnitudePercentage) = 0;
	virtual bool WheelStopSlipperyRoadEffect(const int index) = 0;
	virtual bool WheelPlaySurfaceEffect(const int index, const int type, const int magnitudePercentage, const int period) = 0;
	virtual bool WheelStopSurfaceEffect(const int index) = 0;
	virtual bool WheelPlayCarAirborne(const int index) = 0;
	virtual bool WheelStopCarAirborne(const int index) = 0;
	virtual bool WheelPlaySoftstopForce(const int index, const int usableRangePercentage) = 0;
	virtual bool WheelStopSoftstopForce(const int index) = 0;
	virtual bool WheelSetPreferredControllerProperties(const ControllerPropertiesData properties) = 0;
	virtual bool WheelGetCurrentControllerProperties(const int index, ControllerPropertiesData& properties) = 0;
	virtual int WheelGetShifterMode(const int index) = 0;
	virtual bool WheelSetOperatingRange(const int index, const int range) = 0;
	virtual bool WheelGetOperatingRange(const int index, int& range) = 0;
	virtual bool WheelPlayLeds(const int index, const float currentRPM, const float rpmFirstLedTurnsOn, const float rpmRedLine) = 0;
	virtual void WheelShutdown() = 0;
};

