// Fill out your copyright notice in the Description page of Project Settings.


#include "LogitechGController.h"

ULogitechGController::ULogitechGController()
{
	pLogitechG = static_cast<ILogitechG*>(FModuleManager::Get().GetModule(ILogitechG::GetModularFeatureName()));
}

bool ULogitechGController::LedInit()
{
	if(!pLogitechG)
		return false;
	return pLogitechG->LedInit();
}

bool ULogitechGController::LedInitWithName(const FString name)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedInitWithName(name);
}

bool ULogitechGController::LedGetSdkVersion(int32& majorNum, int32& minorNum, int32 buildNum)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedGetSdkVersion(&majorNum,&minorNum,&buildNum);
}

bool ULogitechGController::LedGetConfigOptionNumber(const FString configPath, double& defaultValue)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedGetConfigOptionNumber(configPath,&defaultValue);
}

bool ULogitechGController::LedGetConfigOptionBool(const FString configPath, bool& defaultValue)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedGetConfigOptionBool(configPath,&defaultValue);
}

bool ULogitechGController::LedGetConfigOptionColor(const FString configPath, int32& defaultRed, int32& defaultGreen, int32& defaultBlue)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedGetConfigOptionColor(configPath,&defaultRed,&defaultGreen,&defaultBlue);
}

bool ULogitechGController::LedGetConfigOptionColorByFColor(const FString configPath, FColor& color)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedGetConfigOptionColorByFColor(configPath,color);
}

bool ULogitechGController::LedGetConfigOptionKeyInput(const FString configPath, FString& defaultValue)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedGetConfigOptionKeyInput(configPath,defaultValue);
}

bool ULogitechGController::LedSetConfigOptionLabel(const FString configPath, FString label)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetConfigOptionLabel(configPath,label);
}

bool ULogitechGController::LedSetTargetDevice(const int32 targetDevice)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetTargetDevice(targetDevice);
}

bool ULogitechGController::LedSaveCurrentLighting()
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSaveCurrentLighting();
}

bool ULogitechGController::LedSetLighting(const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLighting(redPercentage,greenPercentage,bluePercentage);
}

bool ULogitechGController::LedSetLightingByFColor(const FColor color)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingByFColor(color);
}

bool ULogitechGController::LedRestoreLighting()
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedRestoreLighting();
}

bool ULogitechGController::LedFlashLighting(const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage, const int32 milliSecondsDuration, const int32 milliSecondsInterval)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedFlashLighting(redPercentage,greenPercentage,bluePercentage,milliSecondsDuration,milliSecondsInterval);
}

bool ULogitechGController::LedPulseLighting(const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage, const int32 milliSecondsDuration, const int32 milliSecondsInterval)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedPulseLighting(redPercentage,greenPercentage,bluePercentage,milliSecondsDuration,milliSecondsInterval);
}

bool ULogitechGController::LedFlashLightingByFColor(const FColor color, const int32 milliSecondsDuration, const int32 milliSecondsInterval)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedFlashLightingByFColor(color,milliSecondsDuration,milliSecondsInterval);
}

bool ULogitechGController::LedPulseLightingByFColor(const FColor color, const int32 milliSecondsDuration, const int32 milliSecondsInterval)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedPulseLightingByFColor(color,milliSecondsDuration,milliSecondsInterval);
}

bool ULogitechGController::LedStopEffects()
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedStopEffects();
}

bool ULogitechGController::LedExcludeKeysFromBitmap(TArray<TEnumAsByte<ELogitechKeyName>> keyList, const int32 listCount)
{
	if (!pLogitechG)
		return false;

	const int keyNum = keyList.Num();
	if (keyNum <= 0)
		return false;

	KeyName keyNameList[108];

	for (int32 i = 0; i < keyNum; i++)
	{
		uint8 key = keyList[i];
		keyNameList[i] = (KeyName)key;
	}

	for (int32 j = keyNum; j < 108; j++)
	{
		keyNameList[j] = keyNameList[0];
	}
	
	const KeyName* pkeyNameList = keyNameList;
	return pLogitechG->LedExcludeKeysFromBitmap(pkeyNameList,listCount);
}

bool ULogitechGController::LedSetLightingForKeyWithScanCode(const int32 keyCode, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithScanCode(keyCode,redPercentage,greenPercentage,bluePercentage);
}

bool ULogitechGController::LedSetLightingForKeyWithHidCode(const int32 keyCode, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithHidCode(keyCode,redPercentage,greenPercentage,bluePercentage);
}

bool ULogitechGController::LedSetLightingForKeyWithQuartzCode(const int32 keyCode, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithQuartzCode(keyCode,redPercentage,greenPercentage,bluePercentage);
}

bool ULogitechGController::LedSetLightingForKeyWithKeyName(const ELogitechKeyName keyName, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithKeyName((KeyName)keyName,redPercentage,greenPercentage,bluePercentage);
}

bool ULogitechGController::LedSetLightingForKeyWithFKey(const FKey fkey, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithFKey(fkey,redPercentage,greenPercentage,bluePercentage);
}

bool ULogitechGController::LedSetLightingForKeyWithScanCodeByFColor(const int32 keyCode, const FColor color)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithScanCodeByFColor(keyCode,color);
}

bool ULogitechGController::LedSetLightingForKeyWithHidCodeByFColor(const int32 keyCode, const FColor color)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithHidCodeByFColor(keyCode,color);
}

bool ULogitechGController::LedSetLightingForKeyWithQuartzCodeByFColor(const int32 keyCode, const FColor color)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithQuartzCodeByFColor(keyCode,color);
}

bool ULogitechGController::LedSetLightingForKeyWithKeyNameByFColor(const ELogitechKeyName keyName, const FColor color)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithKeyNameByFColor((KeyName)keyName,color);
}

bool ULogitechGController::LedSetLightingForKeyWithFKeyByFColor(const FKey fkey, const FColor color)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForKeyWithFKeyByFColor(fkey,color);
}

bool ULogitechGController::LedSetLightingForTargetZone(EDeviceType deviceType, int32 zone, int32 redPercentage, int32 greenPercentage, int32 bluePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSetLightingForTargetZone((DeviceType)deviceType,zone,redPercentage,greenPercentage,bluePercentage);
}

ELogitechKeyName ULogitechGController::LedGetKeyNameFromFKey(const FKey fkey)
{
	if (!pLogitechG)
		return ELogitechKeyName::EKEY_NONE;
	return (ELogitechKeyName)pLogitechG->LedGetKeyNameFromFKey(fkey);
}

bool ULogitechGController::LedSaveLightingForKey(const ELogitechKeyName keyName)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedSaveLightingForKey((KeyName)keyName);
}

bool ULogitechGController::LedRestoreLightingForKey(const ELogitechKeyName keyName)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedRestoreLightingForKey((KeyName)keyName);
}

bool ULogitechGController::LedFlashSingleKey(const ELogitechKeyName keyName, const int32 redPercentage, const int32 greenPercentage, const int32 bluePercentage, const int32 msDuration, const int32 msInterval)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedFlashSingleKey((KeyName)keyName,redPercentage,greenPercentage,bluePercentage,msDuration,msInterval);
}

bool ULogitechGController::LedPulseSingleKey(const ELogitechKeyName keyName, const int32 startRedPercentage, const int32 startGreenPercentage, const int32 startBluePercentage, const int32 finishRedPercentage, const int32 finishGreenPercentage, const int32 finishBluePercentage, const int32 msDuration, bool isInfinite)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedPulseSingleKey((KeyName)keyName, startRedPercentage, startGreenPercentage, startBluePercentage, finishRedPercentage, finishGreenPercentage, finishBluePercentage, msDuration, isInfinite);
}

bool ULogitechGController::LedFlashSingleKeyByFColor(const ELogitechKeyName keyName, const FColor color, const int32 msDuration, const int32 msInterval)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedFlashSingleKeyByFColor((KeyName)keyName,color,msDuration,msInterval);
}

bool ULogitechGController::LedPulseSingleKeyByFColor(const ELogitechKeyName keyName, const FColor startColor, const FColor finishColor, const int32 msDuration, bool isInfinite)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedPulseSingleKeyByFColor((KeyName)keyName,startColor,finishColor,msDuration,isInfinite);
}

bool ULogitechGController::LedStopEffectsOnKey(const ELogitechKeyName keyName)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LedStopEffectsOnKey((KeyName)keyName);
}

void ULogitechGController::LedShutdown()
{
	if (!pLogitechG)
		return ;
	pLogitechG->LedShutdown();
}

bool ULogitechGController::ArxInit(const FString identifier, const FString friendlyName, const ArxCbContext* callbackContext)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxInit(identifier,friendlyName,callbackContext);
}

bool ULogitechGController::ArxAddFileAs(const FString filePath, const FString fileName, const FString mimeType)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxAddFileAs(filePath,fileName,mimeType);
}

bool ULogitechGController::ArxAddContentAs(const void* content, const int32 size, const FString fileName, const FString mimeType)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxAddContentAs(content,size,fileName,mimeType);
}

bool ULogitechGController::ArxAddUTF8StringAs(const FString stringContent, const FString fileName, const FString mimeType)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxAddUTF8StringAs(stringContent,fileName,mimeType);
}

bool ULogitechGController::ArxAddImageFromBitmap(const unsigned char* bitmap, const int32 width, const int32 height, const FString fileName)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxAddImageFromBitmap(bitmap,width,height,fileName);
}

bool ULogitechGController::ArxSetIndex(const FString fileName)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxSetIndex(fileName);
}

bool ULogitechGController::ArxSetTagPropertyById(const FString tagId, const FString prop, const FString newValue)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxSetTagPropertyById(tagId,prop,newValue);
}

bool ULogitechGController::ArxSetTagsPropertyByClass(const FString tagsClass, const FString prop, const FString newValue)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxSetTagsPropertyByClass(tagsClass,prop,newValue);
}

bool ULogitechGController::ArxSetTagContentById(const FString tagId, const FString newContent)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxSetTagContentById(tagId,newContent);
}

bool ULogitechGController::ArxSetTagsContentByClass(const FString tagsClass, const FString newContent)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxSetTagsContentByClass(tagsClass,newContent);
}

int32 ULogitechGController::ArxGetLastError()
{
	if (!pLogitechG)
		return false;
	return pLogitechG->ArxGetLastError();
}

void ULogitechGController::ArxShutdown()
{
	if (!pLogitechG)
		return ;
	pLogitechG->ArxShutdown();
}

bool ULogitechGController::GkeyInit(const GkeyCBContext* gkeyCBContext)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->GkeyInit(gkeyCBContext);
}

bool ULogitechGController::GkeyInitWithoutCallback()
{
	if (!pLogitechG)
		return false;
	return pLogitechG->GkeyInitWithoutCallback();
}

bool ULogitechGController::GkeyInitWithoutContext(const GkeyCB gkeyCallBack)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->GkeyInitWithoutContext(gkeyCallBack);
}

bool ULogitechGController::GkeyIsMouseButtonPressed(const int32 buttonNumber)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->GkeyIsMouseButtonPressed(buttonNumber);
}

FString ULogitechGController::GkeyGetMouseButtonString(const int32 buttonNumber)
{
	if (!pLogitechG)
		return TEXT("");
	return pLogitechG->GkeyGetMouseButtonString(buttonNumber);
}

bool ULogitechGController::GkeyIsKeyboardGkeyPressed(const int32 gkeyNumber, const int32 modeNumber)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->GkeyIsKeyboardGkeyPressed(gkeyNumber,modeNumber);
}

FString ULogitechGController::GkeyGetKeyboardGkeyString(const int32 gkeyNumber, const int32 modeNumber)
{
	if (!pLogitechG)
		return TEXT("");
	return pLogitechG->GkeyGetKeyboardGkeyString(gkeyNumber,modeNumber);
}

void ULogitechGController::GkeyShutdown()
{
	if (!pLogitechG)
		return ;
	pLogitechG->GkeyShutdown();
}

bool ULogitechGController::LcdInit(const FString friendlyName, const int32 lcdType)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LcdInit(friendlyName,lcdType);
}

bool ULogitechGController::LcdIsConnected(const int32 lcdType)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LcdIsConnected(lcdType);
}

bool ULogitechGController::LcdIsButtonPressed(const int32 button)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LcdIsButtonPressed(button);
}

void ULogitechGController::LcdUpdate()
{
	if (!pLogitechG)
		return ;
	pLogitechG->LcdUpdate();
}

void ULogitechGController::LcdShutdown()
{
	if (!pLogitechG)
		return ;
	pLogitechG->LcdShutdown();
}

bool ULogitechGController::LcdMonoSetBackground(const unsigned char* monoBitmap)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LcdMonoSetBackground(monoBitmap);
}

bool ULogitechGController::LcdMonoSetText(const int32 lineNumber, const FString text)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LcdMonoSetText(lineNumber,text);
}

bool ULogitechGController::LcdColorSetBackground(const unsigned char* colorBitmap)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LcdColorSetBackground(colorBitmap);
}

bool ULogitechGController::LcdColorSetTitle(const FString text, const int32 red, const int32 green, const int32 blue)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LcdColorSetTitle(text,red,green,blue);
}

bool ULogitechGController::LcdColorSetText(const int32 lineNumber, const FString text, const int32 red, const int32 green, const int32 blue)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->LcdColorSetText(lineNumber,text,red,green,blue);
}

bool ULogitechGController::WheelInit(const bool ignoreXInputControllers)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelInit(ignoreXInputControllers);
}

bool ULogitechGController::WheelGetSdkVersion(int32& majorNum, int32& minorNum, int32& buildNum)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelGetSdkVersion(&majorNum, &minorNum, &buildNum);
}

bool ULogitechGController::WheelUpdate()
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelUpdate();
}

DIJOYSTATE* ULogitechGController::WheelGetState(const int32 index)
{
	if (!pLogitechG)
		return nullptr;
	return pLogitechG->WheelGetState(index);
}

FString ULogitechGController::WheelGetFriendlyProductName(const int32 index)
{
	if (!pLogitechG)
		return TEXT("");
	return pLogitechG->WheelGetFriendlyProductName(index);
}

bool ULogitechGController::WheelIsConnected(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelIsConnected(index);
}

bool ULogitechGController::WheelIsDeviceConnected(const int32 index, const int32 deviceType)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelIsDeviceConnected(index,deviceType);
}

bool ULogitechGController::WheelIsManufacturerConnected(const int32 index, const int32 manufacturerName)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelIsManufacturerConnected(index,manufacturerName);
}

bool ULogitechGController::WheelIsModelConnected(const int32 index, const int32 modelName)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelIsModelConnected(index,modelName);
}

bool ULogitechGController::WheelButtonTriggered(const int32 index, const int32 buttonNbr)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelButtonTriggered(index,buttonNbr);
}

bool ULogitechGController::WheelButtonReleased(const int32 index, const int32 buttonNbr)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelButtonReleased(index,buttonNbr);
}

bool ULogitechGController::WheelButtonIsPressed(const int32 index, const int32 buttonNbr)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelButtonIsPressed(index,buttonNbr);
}

bool ULogitechGController::WheelGenerateNonLinearValues(const int32 index, const int32 nonLinCoeff)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelGenerateNonLinearValues(index,nonLinCoeff);
}

int32 ULogitechGController::WheelGetNonLinearValue(const int32 index, const int32 inputValue)
{
	if (!pLogitechG)
		return -1;
	return pLogitechG->WheelGetNonLinearValue(index,inputValue);
}

bool ULogitechGController::WheelHasForceFeedback(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelHasForceFeedback(index);
}

bool ULogitechGController::WheelIsPlaying(const int32 index, const int32 forceType)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelIsPlaying(index,forceType);
}

bool ULogitechGController::WheelPlaySpringForce(const int32 index, const int32 offsetPercentage, const int32 saturationPercentage, const int32 coefficientPercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlaySpringForce(index,offsetPercentage,saturationPercentage,coefficientPercentage);
}

bool ULogitechGController::WheelStopSpringForce(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopSpringForce(index);
}

bool ULogitechGController::WheelPlayConstantForce(const int32 index, const int32 magnitudePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlayConstantForce(index,magnitudePercentage);
}

bool ULogitechGController::WheelStopConstantForce(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopConstantForce(index);
}

bool ULogitechGController::WheelPlayDamperForce(const int32 index, const int32 coefficientPercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlayDamperForce(index,coefficientPercentage);
}

bool ULogitechGController::WheelStopDamperForce(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopDamperForce(index);
}

bool ULogitechGController::WheelPlaySideCollisionForce(const int32 index, const int32 magnitudePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlaySideCollisionForce(index,magnitudePercentage);
}

bool ULogitechGController::WheelPlayFrontalCollisionForce(const int32 index, const int32 magnitudePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlayFrontalCollisionForce(index,magnitudePercentage);
}

bool ULogitechGController::WheelPlayDirtRoadEffect(const int32 index, const int32 magnitudePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlayDirtRoadEffect(index,magnitudePercentage);
}

bool ULogitechGController::WheelStopDirtRoadEffect(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopDirtRoadEffect(index);
}

bool ULogitechGController::WheelPlayBumpyRoadEffect(const int32 index, const int32 magnitudePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlayBumpyRoadEffect(index,magnitudePercentage);
}

bool ULogitechGController::WheelStopBumpyRoadEffect(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopBumpyRoadEffect(index);
}

bool ULogitechGController::WheelPlaySlipperyRoadEffect(const int32 index, const int32 magnitudePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlaySlipperyRoadEffect(index,magnitudePercentage);
}

bool ULogitechGController::WheelStopSlipperyRoadEffect(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopSlipperyRoadEffect(index);
}

bool ULogitechGController::WheelPlaySurfaceEffect(const int32 index, const int32 type, const int32 magnitudePercentage, const int32 period)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlaySurfaceEffect(index,type,magnitudePercentage,period);
}

bool ULogitechGController::WheelStopSurfaceEffect(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopSurfaceEffect(index);
}

bool ULogitechGController::WheelPlayCarAirborne(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlayCarAirborne(index);
}

bool ULogitechGController::WheelStopCarAirborne(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopCarAirborne(index);
}

bool ULogitechGController::WheelPlaySoftstopForce(const int32 index, const int32 usableRangePercentage)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlaySoftstopForce(index,usableRangePercentage);
}

bool ULogitechGController::WheelStopSoftstopForce(const int32 index)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelStopSoftstopForce(index);
}

bool ULogitechGController::WheelSetPreferredControllerProperties(const FControllerPropertiesData properties)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelSetPreferredControllerProperties(properties._propertiesData);
}

bool ULogitechGController::WheelGetCurrentControllerProperties(const int32 index, FControllerPropertiesData& properties)
{
	if (!pLogitechG)
		return false;
	ControllerPropertiesData data;
	bool bResult = pLogitechG->WheelGetCurrentControllerProperties(index,data);
	properties=FControllerPropertiesData(data);
	return bResult;
}

int32 ULogitechGController::WheelGetShifterMode(const int32 index)
{
	if (!pLogitechG)
		return -1;
	return pLogitechG->WheelGetShifterMode(index);
}

bool ULogitechGController::WheelSetOperatingRange(const int32 index, const int32 range)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelSetOperatingRange(index,range);
}

bool ULogitechGController::WheelGetOperatingRange(const int32 index, int32& range)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelGetOperatingRange(index,range);
}

bool ULogitechGController::WheelPlayLeds(const int32 index, const float currentRPM, const float rpmFirstLedTurnsOn, const float rpmRedLine)
{
	if (!pLogitechG)
		return false;
	return pLogitechG->WheelPlayLeds(index,currentRPM,rpmFirstLedTurnsOn,rpmRedLine);
}

void ULogitechGController::WheelShutdown()
{
	if (!pLogitechG)
		return ;
	pLogitechG->WheelShutdown();
}
