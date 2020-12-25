// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ILogitechG.h"
#include "Engine/Texture2D.h"
#include "LogitechGController.generated.h"

UENUM(BlueprintType)
enum ELogitechKeyName
{
	EKEY_NONE = 0x00,
	EKEY_ESC = 0x01,
	EKEY_F1 = 0x3b,
	EKEY_F2 = 0x3c,
	EKEY_F3 = 0x3d,
	EKEY_F4 = 0x3e,
	EKEY_F5 = 0x3f,
	EKEY_F6 = 0x40,
	EKEY_F7 = 0x41,
	EKEY_F8 = 0x42,
	EKEY_F9 = 0x43,
	EKEY_F10 = 0x44,
	EKEY_F11 = 0x57,
	EKEY_F12 = 0x58,
	EKEY_PRINT_SCREEN = 0x137,
	EKEY_SCROLL_LOCK = 0x46,
	EKEY_PAUSE_BREAK = 0x145,
	EKEY_TILDE = 0x29,
	EKEY_ONE = 0x02,
	EKEY_TWO = 0x03,
	EKEY_THREE = 0x04,
	EKEY_FOUR = 0x05,
	EKEY_FIVE = 0x06,
	EKEY_SIX = 0x07,
	EKEY_SEVEN = 0x08,
	EKEY_EIGHT = 0x09,
	EKEY_NINE = 0x0A,
	EKEY_ZERO = 0x0B,
	EKEY_MINUS = 0x0C,
	EKEY_EQUALS = 0x0D,
	EKEY_BACKSPACE = 0x0E,
	EKEY_INSERT = 0x152,
	EKEY_HOME = 0x147,
	EKEY_PAGE_UP = 0x149,
	EKEY_NUM_LOCK = 0x45,
	EKEY_NUM_SLASH = 0x135,
	EKEY_NUM_ASTERISK = 0x37,
	EKEY_NUM_MINUS = 0x4A,
	EKEY_TAB = 0x0F,
	EKEY_Q = 0x10,
	EKEY_W = 0x11,
	EKEY_E = 0x12,
	EKEY_R = 0x13,
	EKEY_T = 0x14,
	EKEY_Y = 0x15,
	EKEY_U = 0x16,
	EKEY_I = 0x17,
	EKEY_O = 0x18,
	EKEY_P = 0x19,
	EKEY_OPEN_BRACKET = 0x1A,
	EKEY_CLOSE_BRACKET = 0x1B,
	EKEY_BACKSLASH = 0x2B,
	EKEY_KEYBOARD_DELETE = 0x153,
	EKEY_END = 0x14F,
	EKEY_PAGE_DOWN = 0x151,
	EKEY_NUM_SEVEN = 0x47,
	EKEY_NUM_EIGHT = 0x48,
	EKEY_NUM_NINE = 0x49,
	EKEY_NUM_PLUS = 0x4E,
	EKEY_CAPS_LOCK = 0x3A,
	EKEY_A = 0x1E,
	EKEY_S = 0x1F,
	EKEY_D = 0x20,
	EKEY_F = 0x21,
	EKEY_G = 0x22,
	EKEY_H = 0x23,
	EKEY_J = 0x24,
	EKEY_K = 0x25,
	EKEY_L = 0x26,
	EKEY_SEMICOLON = 0x27,
	EKEY_APOSTROPHE = 0x28,
	EKEY_ENTER = 0x1C,
	EKEY_NUM_FOUR = 0x4B,
	EKEY_NUM_FIVE = 0x4C,
	EKEY_NUM_SIX = 0x4D,
	EKEY_LEFT_SHIFT = 0x2A,
	EKEY_Z = 0x2C,
	EKEY_X = 0x2D,
	EKEY_C = 0x2E,
	EKEY_V = 0x2F,
	EKEY_B = 0x30,
	EKEY_N = 0x31,
	EKEY_M = 0x32,
	EKEY_COMMA = 0x33,
	EKEY_PERIOD = 0x34,
	EKEY_FORWARD_SLASH = 0x35,
	EKEY_RIGHT_SHIFT = 0x36,
	EKEY_ARROW_UP = 0x148,
	EKEY_NUM_ONE = 0x4F,
	EKEY_NUM_TWO = 0x50,
	EKEY_NUM_THREE = 0x51,
	EKEY_NUM_ENTER = 0x11C,
	EKEY_LEFT_CONTROL = 0x1D,
	EKEY_LEFT_WINDOWS = 0x15B,
	EKEY_LEFT_ALT = 0x38,
	EKEY_SPACE = 0x39,
	EKEY_RIGHT_ALT = 0x138,
	EKEY_RIGHT_WINDOWS = 0x15C,
	EKEY_APPLICATION_SELECT = 0x15D,
	EKEY_RIGHT_CONTROL = 0x11D,
	EKEY_ARROW_LEFT = 0x14B,
	EKEY_ARROW_DOWN = 0x150,
	EKEY_ARROW_RIGHT = 0x14D,
	EKEY_NUM_ZERO = 0x52,
	EKEY_NUM_PERIOD = 0x53,
};

UENUM(BlueprintType)
enum EDeviceType
{
	EDevice_Keyboard = 0x0,
	EDevice_Mouse = 0x3,
	EDevice_Mousemat = 0x4,
	EDevice_Headset = 0x8,
	EDevice_Speaker = 0xe
};

USTRUCT(BlueprintType)
struct FControllerPropertiesData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="ControllerPropertiesData")
		bool forceEnable;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		int32 overallGain;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		int32 springGain;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		int32 damperGain;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		bool defaultSpringEnabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		int32 defaultSpringGain;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		bool combinePedals;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		int32 wheelRange;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		bool gameSettingsEnabled;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ControllerPropertiesData")
		bool allowGameSettings;

	ControllerPropertiesData _propertiesData;

	FControllerPropertiesData()
	{
		_propertiesData.forceEnable = forceEnable;
		_propertiesData.overallGain = overallGain;
		_propertiesData.springGain = springGain;
		_propertiesData.damperGain = damperGain;
		_propertiesData.defaultSpringEnabled = defaultSpringEnabled;
		_propertiesData.defaultSpringGain = defaultSpringGain;
		_propertiesData.combinePedals = combinePedals;
		_propertiesData.wheelRange = wheelRange;
		_propertiesData.gameSettingsEnabled = gameSettingsEnabled;
		_propertiesData.allowGameSettings = allowGameSettings;
	}

	FControllerPropertiesData(ControllerPropertiesData propertiesData) :_propertiesData(propertiesData)
	{
		forceEnable = propertiesData.forceEnable;
		overallGain = propertiesData.overallGain;
		springGain = propertiesData.springGain;
		damperGain = propertiesData.damperGain;
		defaultSpringEnabled = propertiesData.defaultSpringEnabled;
		defaultSpringGain = propertiesData.defaultSpringGain;
		combinePedals = propertiesData.combinePedals;
		wheelRange = propertiesData.wheelRange;
		gameSettingsEnabled = propertiesData.gameSettingsEnabled;
		allowGameSettings = propertiesData.allowGameSettings;
	}
};

UCLASS(Blueprintable,BlueprintType)
class LOGITECHG_API ULogitechGController : public UObject
{
	GENERATED_BODY()
public:
	ULogitechGController();

	/**** Logitech Led Controller ****/
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedInit();
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedInitWithName(const FString name);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedGetSdkVersion(int32& majorNum, int32& minorNum, int32 buildNum);
	//UFUNCTION(BlueprintCallable,Category="Logitech|LED")
    bool LedGetConfigOptionNumber(const FString configPath, double& defaultValue);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
   		bool LedGetConfigOptionBool(const FString configPath, bool& defaultValue);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
   		bool LedGetConfigOptionColor(const FString configPath, int32& defaultRed, int32 &defaultGreen, int32 &defaultBlue);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedGetConfigOptionColorByFColor(const FString configPath, FColor &color);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
   		bool LedGetConfigOptionKeyInput(const FString configPath, FString &defaultValue);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetConfigOptionLabel(const FString configPath, FString label);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
   		bool LedSetTargetDevice(const int32 targetDevice);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSaveCurrentLighting();
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLighting(const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingByFColor(const FColor color);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedRestoreLighting();
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedFlashLighting(const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage, const int32 milliSecondsDuration, const int32 milliSecondsInterval);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedPulseLighting(const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage, const int32 milliSecondsDuration, const int32 milliSecondsInterval);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedFlashLightingByFColor(const FColor color, const int32 milliSecondsDuration, const int32 milliSecondsInterval);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedPulseLightingByFColor(const FColor color, const int32 milliSecondsDuration, const int32 milliSecondsInterval);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedStopEffects();
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedExcludeKeysFromBitmap(TArray<TEnumAsByte<ELogitechKeyName>> keyList, const int32 listCount);

    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithScanCode(const int32 keyCode, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithHidCode(const int32 keyCode, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithQuartzCode(const int32 keyCode, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithKeyName(const ELogitechKeyName keyName, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithFKey(const FKey fkey, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithScanCodeByFColor(const int32 keyCode, const FColor color);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithHidCodeByFColor(const int32 keyCode, const FColor color);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithQuartzCodeByFColor(const int32 keyCode, const FColor color);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithKeyNameByFColor(const ELogitechKeyName keyName, const FColor color);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForKeyWithFKeyByFColor(const FKey fkey, const FColor color);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSetLightingForTargetZone(EDeviceType deviceType, int32 zone, int32 redPercentage, int32 greenPercentage, int32 bluePercentage);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		ELogitechKeyName LedGetKeyNameFromFKey(const FKey fkey);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedSaveLightingForKey(const ELogitechKeyName keyName);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedRestoreLightingForKey(const ELogitechKeyName keyName);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedFlashSingleKey(const ELogitechKeyName keyName, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage, const int32 msDuration, const int32 msInterval);
    UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedPulseSingleKey(const ELogitechKeyName keyName, const int32 startRedPercentage, const int32 startGreenPercentage, const int32 startBluePercentage, const int32 finishRedPercentage, const int32 finishGreenPercentage, const int32 finishBluePercentage, const int32 msDuration, bool isInfinite);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedFlashSingleKeyByFColor(const ELogitechKeyName keyName, const FColor color, const int32 msDuration, const int32 msInterval);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
	    bool LedPulseSingleKeyByFColor(const ELogitechKeyName keyName, const FColor startColor, const FColor finishColor, const int32 msDuration, bool isInfinite);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		bool LedStopEffectsOnKey(const ELogitechKeyName keyName);
	UFUNCTION(BlueprintCallable,Category="Logitech|LED")
		void LedShutdown();
	/**** Logitech Led Controller ****/

	/**** Logitech Arx Controller ****/
	bool ArxInit(const FString identifier, const FString friendlyName, const ArxCbContext* callbackContext);
	bool ArxAddFileAs(const FString filePath, const FString fileName, const FString mimeType = "");
	bool ArxAddContentAs(const void* content, const int32 size, const FString fileName, const FString mimeType = "");
	bool ArxAddUTF8StringAs(const FString stringContent, const FString fileName, const FString mimeType = "");
	bool ArxAddImageFromBitmap(const unsigned char* bitmap, const int32 width, const int32 height, const FString fileName);
	bool ArxSetIndex(const FString fileName);
	bool ArxSetTagPropertyById(const FString tagId, const FString prop, const FString newValue);
	bool ArxSetTagsPropertyByClass(const FString tagsClass, const FString prop, const FString newValue);
	bool ArxSetTagContentById(const FString tagId, const FString newContent);
	bool ArxSetTagsContentByClass(const FString tagsClass, const FString newContent);
	int32 ArxGetLastError();
	void ArxShutdown();
	/**** Logitech Arx Controller ****/

	/**** Logitech Key Controller ****/
	bool GkeyInit(const GkeyCBContext* gkeyCBContext);
	bool GkeyInitWithoutCallback();
	bool GkeyInitWithoutContext(const GkeyCB gkeyCallBack);
	bool GkeyIsMouseButtonPressed(const int32 buttonNumber);
	FString GkeyGetMouseButtonString(const int32 buttonNumber);
	bool GkeyIsKeyboardGkeyPressed(const int32 gkeyNumber, const int32 modeNumber);
	FString GkeyGetKeyboardGkeyString(const int32 gkeyNumber, const int32 modeNumber);
	void GkeyShutdown();
	/**** Logitech Key Controller ****/

	/**** Logitech LCD Controller ****/
	UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		bool LcdInit(const FString friendlyName, const int32 lcdType);
	UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		bool LcdIsConnected(const int32 lcdType);
	UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		bool LcdIsButtonPressed(const int32 button);
	UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		void LcdUpdate();
	UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		void LcdShutdown();
	//UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		bool LcdMonoSetBackground(const unsigned char* monoBitmap);
	UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		bool LcdMonoSetText(const int32 lineNumber, const FString text);
	//UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		bool LcdColorSetBackground(const unsigned char* colorBitmap);
	UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		bool LcdColorSetTitle(const FString text, const int32 red = 255, const int32 green = 255, const int32 blue = 255);
	UFUNCTION(BlueprintCallable, Category = "Logitech|LCD")
		bool LcdColorSetText(const int32 lineNumber, const FString text, const int32 red = 255, const int32 green = 255, const int32 blue = 255);
	/**** Logitech LCD Controller ****/

	/**** Logitech Wheel Controller ****/
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelInit(const bool ignoreXInputControllers = false);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelGetSdkVersion(int32& majorNum, int32& minorNum, int32& buildNum);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelUpdate();
	DIJOYSTATE* WheelGetState(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		FString WheelGetFriendlyProductName(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelIsConnected(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelIsDeviceConnected(const int32 index, const int32 deviceType);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelIsManufacturerConnected(const int32 index, const int32 manufacturerName);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelIsModelConnected(const int32 index, const int32 modelName);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelButtonTriggered(const int32 index, const int32 buttonNbr);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelButtonReleased(const int32 index, const int32 buttonNbr);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelButtonIsPressed(const int32 index, const int32 buttonNbr);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelGenerateNonLinearValues(const int32 index, const int32 nonLinCoeff);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		int32 WheelGetNonLinearValue(const int32 index, const int32 inputValue);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelHasForceFeedback(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelIsPlaying(const int32 index, const int32 forceType);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlaySpringForce(const int32 index, const int32 offsetPercentage, const int32 saturationPercentage, const int32 coefficientPercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopSpringForce(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlayConstantForce(const int32 index, const int32 magnitudePercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopConstantForce(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlayDamperForce(const int32 index, const int32 coefficientPercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopDamperForce(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlaySideCollisionForce(const int32 index, const int32 magnitudePercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlayFrontalCollisionForce(const int32 index, const int32 magnitudePercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlayDirtRoadEffect(const int32 index, const int32 magnitudePercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopDirtRoadEffect(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlayBumpyRoadEffect(const int32 index, const int32 magnitudePercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopBumpyRoadEffect(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlaySlipperyRoadEffect(const int32 index, const int32 magnitudePercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopSlipperyRoadEffect(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlaySurfaceEffect(const int32 index, const int32 type, const int32 magnitudePercentage, const int32 period);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopSurfaceEffect(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlayCarAirborne(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopCarAirborne(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlaySoftstopForce(const int32 index, const int32 usableRangePercentage);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelStopSoftstopForce(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelSetPreferredControllerProperties(const FControllerPropertiesData properties);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelGetCurrentControllerProperties(const int32 index, FControllerPropertiesData& properties);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		int32 WheelGetShifterMode(const int32 index);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelSetOperatingRange(const int32 index, const int32 range);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelGetOperatingRange(const int32 index, int32& range);	
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		bool WheelPlayLeds(const int32 index, const float currentRPM, const float rpmFirstLedTurnsOn, const float rpmRedLine);
	UFUNCTION(BlueprintCallable, Category = "Logitech|Wheel")
		void WheelShutdown();
	/**** Logitech Wheel Controller ****/

private:
	ILogitechG* pLogitechG = nullptr;
};
