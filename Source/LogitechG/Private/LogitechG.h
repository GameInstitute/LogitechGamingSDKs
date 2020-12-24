#pragma once

#include "ILogitechG.h"
#include "Runtime/Core/Public/Containers/UnrealString.h"
#include "Windows/AllowWindowsPlatformTypes.h" 
#include <map>
#include <string>
#include "Windows/HideWindowsPlatformTypes.h"  

class FLogitechG : public ILogitechG
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

    bool LedInit();
    bool LedInitWithName(const FString name);
	bool LedGetSdkVersion(int *majorNum, int *minorNum, int *buildNum);
	bool LedGetConfigOptionNumber(const FString configPath, double *defaultValue);
	bool LedGetConfigOptionBool(const FString configPath, bool *defaultValue);
	bool LedGetConfigOptionColor(const FString configPath, int *defaultRed, int *defaultGreen, int *defaultBlue);
	bool LedGetConfigOptionColorByFColor(const FString configPath, FColor &color);
	bool LedGetConfigOptionKeyInput(const FString configPath, FString &defaultValue);
	bool LedSetConfigOptionLabel(const FString configPath, FString label);
	bool LedSetTargetDevice(const int targetDevice);
	bool LedSaveCurrentLighting();
	bool LedSetLighting(const int redPercentage, const int greenPercentage, const int bluePercentage);
	bool LedSetLightingByFColor(const FColor color);
	bool LedRestoreLighting();
	bool LedFlashLighting(const int redPercentage, const int greenPercentage, const int bluePercentage, const int milliSecondsDuration, const int milliSecondsInterval);
	bool LedPulseLighting(const int redPercentage, const int greenPercentage, const int bluePercentage, const int milliSecondsDuration, const int milliSecondsInterval);
	bool LedFlashLightingByFColor(const FColor color, const int milliSecondsDuration, const int milliSecondsInterval);
	bool LedPulseLightingByFColor(const FColor color, const int milliSecondsDuration, const int milliSecondsInterval);
	bool LedStopEffects();
	bool LedExcludeKeysFromBitmap(const KeyName *keyList, const int listCount);
	bool LedSetLightingFromBitmap(const unsigned char bitmap[]);
	bool LedSetLightingForKeyWithScanCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage);
	bool LedSetLightingForKeyWithHidCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage);
	bool LedSetLightingForKeyWithQuartzCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage);
	bool LedSetLightingForKeyWithKeyName(const KeyName keyName, const int redPercentage, const int greenPercentage, const int bluePercentage);
	bool LedSetLightingForKeyWithFKey(const FKey fkey, const int redPercentage, const int greenPercentage, const int bluePercentage);
	bool LedSetLightingForKeyWithScanCodeByFColor(const int keyCode, const FColor color);
	bool LedSetLightingForKeyWithHidCodeByFColor(const int keyCode, const FColor color);
	bool LedSetLightingForKeyWithQuartzCodeByFColor(const int keyCode, const FColor color);
	bool LedSetLightingForKeyWithKeyNameByFColor(const KeyName keyName, const FColor color);
            bool LedSetLightingForKeyWithFKeyByFColor(const FKey fkey, const FColor color);
            bool LedSetLightingForTargetZone(DeviceType deviceType, int zone, int redPercentage, int greenPercentage, int bluePercentage);
	KeyName LedGetKeyNameFromFKey(const FKey fkey);
	bool LedSaveLightingForKey(const KeyName keyName);
	bool LedRestoreLightingForKey(const KeyName keyName);
	bool LedFlashSingleKey(const KeyName keyName, const int redPercentage, const int greenPercentage, const int bluePercentage, const int msDuration, const int msInterval);
	bool LedPulseSingleKey(const KeyName keyName, const int startRedPercentage, const int startGreenPercentage, const int startBluePercentage, const int finishRedPercentage, const int finishGreenPercentage, const int finishBluePercentage, const int msDuration, bool isInfinite);
	bool LedFlashSingleKeyByFColor(const KeyName keyName, const FColor color, const int msDuration, const int msInterval);
	bool LedPulseSingleKeyByFColor(const KeyName keyName, const FColor startColor, const FColor finishColor, const int msDuration, bool isInfinite);
	bool LedStopEffectsOnKey(const KeyName keyName);
	void LedShutdown();

	bool ArxInit(const FString identifier, const FString friendlyName, const ArxCbContext *callbackContext);
	bool ArxAddFileAs(const FString filePath, const FString fileName, const FString mimeType);
	bool ArxAddContentAs(const void* content, const int size, const FString fileName, const FString mimeType);
	bool ArxAddUTF8StringAs(const FString stringContent, const FString fileName, const FString mimeType);
	bool ArxAddImageFromBitmap(const unsigned char *bitmap, const int width, const int height, const FString fileName);
	bool ArxSetIndex(const FString fileName);
	bool ArxSetTagPropertyById(const FString tagId, const FString prop, const FString newValue);
	bool ArxSetTagsPropertyByClass(const FString tagsClass, const FString prop, const FString newValue);
	bool ArxSetTagContentById(const FString tagId, const FString newContent);
	bool ArxSetTagsContentByClass(const FString tagsClass, const FString newContent);
	int ArxGetLastError();
	void ArxShutdown();

	bool GkeyInit(const GkeyCBContext* gkeyCBContext);
	bool GkeyInitWithoutCallback();
	bool GkeyInitWithoutContext(const GkeyCB gkeyCallBack);
	bool GkeyIsMouseButtonPressed(const int buttonNumber);
	FString GkeyGetMouseButtonString(const int buttonNumber);
	bool GkeyIsKeyboardGkeyPressed(const int gkeyNumber, const int modeNumber);
	FString GkeyGetKeyboardGkeyString(const int gkeyNumber, const int modeNumber);
	void GkeyShutdown();

	bool LcdInit(const FString friendlyName, const int lcdType);
	void LcdUpdate();
	bool LcdIsConnected(const int lcdType);
	bool LcdIsButtonPressed(const int button);
	bool LcdMonoSetBackground(const unsigned char* monoBitmap);
	bool LcdMonoSetText(const int lineNumber, const FString text);
	bool LcdColorSetBackground(const unsigned char* colorBitmap);
	bool LcdColorSetTitle(const FString text, const int red, const int green, const int blue);
	bool LcdColorSetText(const int lineNumber, const FString text, const int red, const int green, const int blue);
	void LcdShutdown();

	bool WheelInit(const bool ignoreXInputControllers);
	bool WheelGetSdkVersion(int *majorNum, int *minorNum, int *buildNum);
	bool WheelUpdate();
	DIJOYSTATE* WheelGetState(const int index);
	FString WheelGetFriendlyProductName(const int index);
	bool WheelIsConnected(const int index);
	bool WheelIsDeviceConnected(const int index, const int deviceType);
	bool WheelIsManufacturerConnected(const int index, const int manufacturerName);
	bool WheelIsModelConnected(const int index, const int modelName);
	bool WheelButtonTriggered(const int index, const int buttonNbr);
	bool WheelButtonReleased(const int index, const int buttonNbr);
	bool WheelButtonIsPressed(const int index, const int buttonNbr);
	bool WheelGenerateNonLinearValues(const int index, const int nonLinCoeff);
	int WheelGetNonLinearValue(const int index, const int inputValue);
	bool WheelHasForceFeedback(const int index);
	bool WheelIsPlaying(const int index, const int forceType);
	bool WheelPlaySpringForce(const int index, const int offsetPercentage, const int saturationPercentage, const int coefficientPercentage);
	bool WheelStopSpringForce(const int index);
	bool WheelPlayConstantForce(const int index, const int magnitudePercentage);
	bool WheelStopConstantForce(const int index);
	bool WheelPlayDamperForce(const int index, const int coefficientPercentage);
	bool WheelStopDamperForce(const int index);
	bool WheelPlaySideCollisionForce(const int index, const int magnitudePercentage);
	bool WheelPlayFrontalCollisionForce(const int index, const int magnitudePercentage);
	bool WheelPlayDirtRoadEffect(const int index, const int magnitudePercentage);
	bool WheelStopDirtRoadEffect(const int index);
	bool WheelPlayBumpyRoadEffect(const int index, const int magnitudePercentage);
	bool WheelStopBumpyRoadEffect(const int index);
	bool WheelPlaySlipperyRoadEffect(const int index, const int magnitudePercentage);
	bool WheelStopSlipperyRoadEffect(const int index);
	bool WheelPlaySurfaceEffect(const int index, const int type, const int magnitudePercentage, const int period);
	bool WheelStopSurfaceEffect(const int index);
	bool WheelPlayCarAirborne(const int index);
	bool WheelStopCarAirborne(const int index);
	bool WheelPlaySoftstopForce(const int index, const int usableRangePercentage);
	bool WheelStopSoftstopForce(const int index);
	bool WheelSetPreferredControllerProperties(const ControllerPropertiesData properties);
	bool WheelGetCurrentControllerProperties(const int index, ControllerPropertiesData& properties);
	int WheelGetShifterMode(const int index);
	bool WheelSetOperatingRange(const int index, const int range);
	bool WheelGetOperatingRange(const int index, int& range);
	bool WheelPlayLeds(const int index, const float currentRPM, const float rpmFirstLedTurnsOn, const float rpmRedLine);
	void WheelShutdown();

private:
	TMap<FString, KeyName> keyMap;

	void toRGBpercent(FColor color, int &red, int &green, int &blue);
	FColor toFColor(int red, int green, int blue);
};
