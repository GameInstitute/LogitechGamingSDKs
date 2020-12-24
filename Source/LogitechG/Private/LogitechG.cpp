// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "LogitechG.h"
#include "LogitechGPrivatePCH.h"


void FLogitechG::StartupModule()
{
	// This code will execute after your module is loaded into memory (but after global variables are initialized, of course.)
}

void FLogitechG::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

std::map<std::wstring, LogiLed::KeyName> CreateLogitechKeyNameMap()
{
	std::map<std::wstring, LogiLed::KeyName> map;

	map[L"A"] = LogiLed::KeyName::A;
	map[L"B"] = LogiLed::KeyName::B;
	map[L"C"] = LogiLed::KeyName::C;
	map[L"D"] = LogiLed::KeyName::D;
	map[L"E"] = LogiLed::KeyName::E;
	map[L"F"] = LogiLed::KeyName::F;
	map[L"G"] = LogiLed::KeyName::G;
	map[L"H"] = LogiLed::KeyName::H;
	map[L"I"] = LogiLed::KeyName::I;
	map[L"J"] = LogiLed::KeyName::J;
	map[L"K"] = LogiLed::KeyName::K;
	map[L"L"] = LogiLed::KeyName::L;
	map[L"M"] = LogiLed::KeyName::M;
	map[L"N"] = LogiLed::KeyName::N;
	map[L"O"] = LogiLed::KeyName::O;
	map[L"P"] = LogiLed::KeyName::P;
	map[L"Q"] = LogiLed::KeyName::Q;
	map[L"R"] = LogiLed::KeyName::R;
	map[L"S"] = LogiLed::KeyName::S;
	map[L"T"] = LogiLed::KeyName::T;
	map[L"U"] = LogiLed::KeyName::U;
	map[L"V"] = LogiLed::KeyName::V;
	map[L"W"] = LogiLed::KeyName::W;
	map[L"X"] = LogiLed::KeyName::X;
	map[L"Y"] = LogiLed::KeyName::Y;
	map[L"Z"] = LogiLed::KeyName::Z;

	map[L"Escape"] = LogiLed::KeyName::ESC;
	map[L"F1"] = LogiLed::KeyName::F1;
	map[L"F2"] = LogiLed::KeyName::F2;
	map[L"F3"] = LogiLed::KeyName::F3;
	map[L"F4"] = LogiLed::KeyName::F4;
	map[L"F5"] = LogiLed::KeyName::F5;
	map[L"F6"] = LogiLed::KeyName::F6;
	map[L"F7"] = LogiLed::KeyName::F7;
	map[L"F8"] = LogiLed::KeyName::F8;
	map[L"F9"] = LogiLed::KeyName::F9;
	map[L"F10"] = LogiLed::KeyName::F10;
	map[L"F11"] = LogiLed::KeyName::F11;
	map[L"F12"] = LogiLed::KeyName::F12;
	// printscreen isn't a supported unreal key
	map[L"ScrollLock"] = LogiLed::KeyName::SCROLL_LOCK;
	map[L"Pause"] = LogiLed::KeyName::PAUSE_BREAK;

	map[L"Tilde"] = LogiLed::KeyName::TILDE;
	map[L"One"] = LogiLed::KeyName::ONE;
	map[L"Two"] = LogiLed::KeyName::TWO;
	map[L"Three"] = LogiLed::KeyName::THREE;
	map[L"Four"] = LogiLed::KeyName::FOUR;
	map[L"Five"] = LogiLed::KeyName::FIVE;
	map[L"Six"] = LogiLed::KeyName::SIX;
	map[L"Seven"] = LogiLed::KeyName::SEVEN;
	map[L"Eight"] = LogiLed::KeyName::EIGHT;
	map[L"Nine"] = LogiLed::KeyName::NINE;
	map[L"Zero"] = LogiLed::KeyName::ZERO;
	map[L"Underscore"] = LogiLed::KeyName::MINUS;
	map[L"Equals"] = LogiLed::KeyName::EQUALS;
	map[L"BackSpace"] = LogiLed::KeyName::BACKSPACE;
	map[L"Insert"] = LogiLed::KeyName::INSERT;
	map[L"Home"] = LogiLed::KeyName::HOME;
	map[L"PageUp"] = LogiLed::KeyName::PAGE_UP;
	map[L"NumLock"] = LogiLed::KeyName::NUM_LOCK;
	map[L"Divide"] = LogiLed::KeyName::NUM_SLASH;
	map[L"Multiply"] = LogiLed::KeyName::NUM_ASTERISK;
	map[L"Subtract"] = LogiLed::KeyName::NUM_MINUS;

	map[L"Tab"] = LogiLed::KeyName::TAB;
	map[L"LeftBracket"] = LogiLed::KeyName::OPEN_BRACKET;
	map[L"RightBracket"] = LogiLed::KeyName::CLOSE_BRACKET;
	map[L"Backslash"] = LogiLed::KeyName::BACKSLASH;
	map[L"Delete"] = LogiLed::KeyName::KEYBOARD_DELETE;
	map[L"End"] = LogiLed::KeyName::END;
	map[L"PageDown"] = LogiLed::KeyName::PAGE_DOWN;
	map[L"Add"] = LogiLed::KeyName::NUM_PLUS;

	map[L"NumPadOne"] = LogiLed::KeyName::NUM_ONE;
	map[L"NumPadTwo"] = LogiLed::KeyName::NUM_TWO;
	map[L"NumPadThree"] = LogiLed::KeyName::NUM_THREE;
	map[L"NumPadFour"] = LogiLed::KeyName::NUM_FOUR;
	map[L"NumPadFive"] = LogiLed::KeyName::NUM_FIVE;
	map[L"NumPadSix"] = LogiLed::KeyName::NUM_SIX;
	map[L"NumPadSeven"] = LogiLed::KeyName::NUM_SEVEN;
	map[L"NumPadEight"] = LogiLed::KeyName::NUM_EIGHT;
	map[L"NumPadNine"] = LogiLed::KeyName::NUM_NINE;
	map[L"NumPadZero"] = LogiLed::KeyName::NUM_ZERO;
	map[L"Decimal"] = LogiLed::KeyName::NUM_PERIOD;
	// unreal doesn't distinguish between numpad enter and normal enter

	map[L"CapsLock"] = LogiLed::KeyName::CAPS_LOCK;
	map[L"Semicolon"] = LogiLed::KeyName::SEMICOLON;
	map[L"Quote"] = LogiLed::KeyName::APOSTROPHE;
	map[L"Enter"] = LogiLed::KeyName::ENTER;

	map[L"LeftShift"] = LogiLed::KeyName::LEFT_SHIFT;
	map[L"Comma"] = LogiLed::KeyName::COMMA;
	map[L"Period"] = LogiLed::KeyName::PERIOD;
	map[L"Slash"] = LogiLed::KeyName::FORWARD_SLASH;
	map[L"RightShift"] = LogiLed::KeyName::RIGHT_SHIFT;

	map[L"Up"] = LogiLed::KeyName::ARROW_UP;
	map[L"Left"] = LogiLed::KeyName::ARROW_LEFT;
	map[L"Down"] = LogiLed::KeyName::ARROW_DOWN;
	map[L"Right"] = LogiLed::KeyName::ARROW_RIGHT;

	map[L"LeftControl"] = LogiLed::KeyName::LEFT_CONTROL;
	// leftwin/rightwin aren't supported keys in unreal
	map[L"LeftAlt"] = LogiLed::KeyName::LEFT_ALT;
	map[L"SpaceBar"] = LogiLed::KeyName::SPACE;
	map[L"RightAlt"] = LogiLed::KeyName::RIGHT_ALT;
	map[L"RightControl"] = LogiLed::KeyName::RIGHT_CONTROL;

	return map;
}

const std::map<std::wstring, LogiLed::KeyName> KeyNameMap = CreateLogitechKeyNameMap();


bool FLogitechG::LedInit()
{
    return LogiLedInit();
}
bool FLogitechG::LedInitWithName(const FString name)
{
    std::string a(TCHAR_TO_UTF8(*name));
    return LogiLedInitWithName(a.c_str());
}
bool FLogitechG::LedGetSdkVersion(int *majorNum, int *minorNum, int *buildNum)
{
	return LogiLedGetSdkVersion(majorNum, minorNum, buildNum);
}
bool FLogitechG::LedGetConfigOptionNumber(const FString configPath, double *defaultValue)
{
	return LogiLedGetConfigOptionNumber(const_cast<WIDECHAR*>(*configPath), defaultValue);
}
bool FLogitechG::LedGetConfigOptionBool(const FString configPath, bool *defaultValue)
{
	return LogiLedGetConfigOptionBool(const_cast<WIDECHAR*>(*configPath), defaultValue);
}
bool FLogitechG::LedGetConfigOptionColor(const FString configPath, int *defaultRed, int *defaultGreen, int *defaultBlue)
{
	return LogiLedGetConfigOptionColor(const_cast<WIDECHAR*>(*configPath), defaultRed, defaultGreen, defaultBlue);
}
bool FLogitechG::LedGetConfigOptionColorByFColor(const FString configPath, FColor &color)
{
	int defaultRed = 0;
	int defaultGreen = 0;
	int defaultBlue = 0;
	toRGBpercent(color, defaultRed, defaultGreen, defaultBlue);
	bool result = LogiLedGetConfigOptionColor(const_cast<WIDECHAR*>(*configPath), &defaultRed, &defaultGreen, &defaultBlue);
	if (result)
	{
		color = toFColor(defaultRed, defaultGreen, defaultBlue);
	}
	return result;
}
bool FLogitechG::LedGetConfigOptionKeyInput(const FString configPath, FString &defaultValue)
{
	wchar_t *buffer = new wchar_t[MAX_PATH];
	bool result = LogiLedGetConfigOptionKeyInput(const_cast<WIDECHAR*>(*configPath), buffer, MAX_PATH);
	if (result)
	{
		defaultValue = FString(buffer);
	}
	delete[] buffer;
	return result;
}
bool FLogitechG::LedSetConfigOptionLabel(const FString configPath, FString label)
{
	return LogiLedSetConfigOptionLabel(const_cast<WIDECHAR*>(*configPath), (WIDECHAR*)(*configPath));
}
bool FLogitechG::LedSetTargetDevice(const int targetDevice)
{
	return LogiLedSetTargetDevice(targetDevice);
}
bool FLogitechG::LedSaveCurrentLighting()
{
	return LogiLedSaveCurrentLighting();
}
bool FLogitechG::LedSetLighting(const int redPercentage, const int greenPercentage, const int bluePercentage)
{
	return LogiLedSetLighting(redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingByFColor(const FColor color)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	return LogiLedSetLighting(redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedRestoreLighting()
{
	return LogiLedRestoreLighting();
}
bool FLogitechG::LedFlashLighting(const int redPercentage, const int greenPercentage, const int bluePercentage, const int milliSecondsDuration, const int milliSecondsInterval)
{
	return LogiLedFlashLighting(redPercentage, greenPercentage, bluePercentage, milliSecondsDuration, milliSecondsInterval);
}
bool FLogitechG::LedPulseLighting(const int redPercentage, const int greenPercentage, const int bluePercentage, const int milliSecondsDuration, const int milliSecondsInterval)
{
	return LogiLedPulseLighting(redPercentage, greenPercentage, bluePercentage, milliSecondsDuration, milliSecondsInterval);
}
bool FLogitechG::LedFlashLightingByFColor(const FColor color, const int milliSecondsDuration, const int milliSecondsInterval)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	return LogiLedFlashLighting(redPercentage, greenPercentage, bluePercentage, milliSecondsDuration, milliSecondsInterval);
}
bool FLogitechG::LedPulseLightingByFColor(const FColor color, const int milliSecondsDuration, const int milliSecondsInterval)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	return LogiLedPulseLighting(redPercentage, greenPercentage, bluePercentage, milliSecondsDuration, milliSecondsInterval);
}
bool FLogitechG::LedStopEffects()
{
	return LogiLedStopEffects();
}
bool FLogitechG::LedExcludeKeysFromBitmap(const KeyName *keyList, const int listCount)
{
	return LogiLedExcludeKeysFromBitmap((LogiLed::KeyName *)keyList, listCount);
}
bool FLogitechG::LedSetLightingFromBitmap(const unsigned char bitmap[])
{
	return LogiLedSetLightingFromBitmap((unsigned char *)bitmap);
}
bool FLogitechG::LedSetLightingForKeyWithScanCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage)
{
	return LogiLedSetLightingForKeyWithScanCode(keyCode, redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingForKeyWithHidCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage)
{
	return LogiLedSetLightingForKeyWithHidCode(keyCode, redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingForKeyWithQuartzCode(const int keyCode, const int redPercentage, const int greenPercentage, const int bluePercentage)
{
	return LogiLedSetLightingForKeyWithQuartzCode(keyCode, redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingForKeyWithKeyName(const KeyName keyName, const int redPercentage, const int greenPercentage, const int bluePercentage)
{
	return LogiLedSetLightingForKeyWithKeyName((LogiLed::KeyName)keyName, redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingForKeyWithFKey(const FKey fkey, const int redPercentage, const int greenPercentage, const int bluePercentage)
{
	FString keyString = fkey.ToString();
	if (KeyNameMap.find(*keyString) != KeyNameMap.end())
	{
		return LogiLedSetLightingForKeyWithKeyName(KeyNameMap.at(*keyString), redPercentage, greenPercentage, bluePercentage);
	}
	return false;
}
bool FLogitechG::LedSetLightingForKeyWithScanCodeByFColor(const int keyCode, const FColor color)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	return LogiLedSetLightingForKeyWithScanCode(keyCode, redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingForKeyWithHidCodeByFColor(const int keyCode, const FColor color)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	return LogiLedSetLightingForKeyWithHidCode(keyCode, redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingForKeyWithQuartzCodeByFColor(const int keyCode, const FColor color)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	return LogiLedSetLightingForKeyWithQuartzCode(keyCode, redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingForKeyWithKeyNameByFColor(const KeyName keyName, const FColor color)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	return LogiLedSetLightingForKeyWithKeyName((LogiLed::KeyName)keyName, redPercentage, greenPercentage, bluePercentage);
}
bool FLogitechG::LedSetLightingForKeyWithFKeyByFColor(const FKey fkey, const FColor color)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	FString keyString = fkey.ToString();
	if (KeyNameMap.find(*keyString) != KeyNameMap.end())
	{
		return LogiLedSetLightingForKeyWithKeyName(KeyNameMap.at(*keyString), redPercentage, greenPercentage, bluePercentage);
	}
	return false;
}
bool FLogitechG::LedSetLightingForTargetZone(DeviceType deviceType, int zone, int redPercentage, int greenPercentage, int bluePercentage)
{
    return LogiLedSetLightingForTargetZone((LogiLed::DeviceType) deviceType, zone, redPercentage, greenPercentage, bluePercentage);
}
KeyName FLogitechG::LedGetKeyNameFromFKey(const FKey fkey)
{
	FString keyString = fkey.ToString();
	if (KeyNameMap.find(*keyString) != KeyNameMap.end())
	{
		return (KeyName)KeyNameMap.at(*keyString);
	}
	return (KeyName)-1;
}
bool FLogitechG::LedSaveLightingForKey(const KeyName keyName)
{
	return LogiLedSaveLightingForKey((LogiLed::KeyName)keyName);
}
bool FLogitechG::LedRestoreLightingForKey(const KeyName keyName)
{
	return LogiLedRestoreLightingForKey((LogiLed::KeyName)keyName);
}
bool FLogitechG::LedFlashSingleKey(const KeyName keyName, const int redPercentage, const int greenPercentage, const int bluePercentage, const int msDuration, const int msInterval)
{
	return LogiLedFlashSingleKey((LogiLed::KeyName)keyName, redPercentage, greenPercentage, bluePercentage, msDuration, msInterval);
}
bool FLogitechG::LedPulseSingleKey(const KeyName keyName, const int startRedPercentage, const int startGreenPercentage, const int startBluePercentage, const int finishRedPercentage, const int finishGreenPercentage, const int finishBluePercentage, const int msDuration, bool isInfinite)
{
	return LogiLedPulseSingleKey((LogiLed::KeyName)keyName, startRedPercentage, startGreenPercentage, startBluePercentage, finishRedPercentage, finishGreenPercentage, finishBluePercentage, msDuration, isInfinite);
}
bool FLogitechG::LedFlashSingleKeyByFColor(const KeyName keyName, const FColor color, const int msDuration, const int msInterval)
{
	int redPercentage = 0;
	int greenPercentage = 0;
	int bluePercentage = 0;
	toRGBpercent(color, redPercentage, greenPercentage, bluePercentage);
	return LogiLedFlashSingleKey((LogiLed::KeyName)keyName, redPercentage, greenPercentage, bluePercentage, msDuration, msInterval);
}
bool FLogitechG::LedPulseSingleKeyByFColor(const KeyName keyName, const FColor startColor, const FColor finishColor, const int msDuration, bool isInfinite)
{
	int startRedPercentage = 0;
	int startGreenPercentage = 0;
	int startBluePercentage = 0;
	int finishRedPercentage = 0;
	int finishGreenPercentage = 0;
	int finishBluePercentage = 0;
	toRGBpercent(finishColor, finishRedPercentage, finishGreenPercentage, finishBluePercentage);
	toRGBpercent(startColor, startRedPercentage, startGreenPercentage, startBluePercentage);
	return LogiLedPulseSingleKey((LogiLed::KeyName)keyName, startRedPercentage, startGreenPercentage, startBluePercentage, finishRedPercentage, finishGreenPercentage, finishBluePercentage, msDuration, isInfinite);
}
bool FLogitechG::LedStopEffectsOnKey(const KeyName keyName)
{
	return LogiLedStopEffectsOnKey((LogiLed::KeyName)keyName);
}
void FLogitechG::LedShutdown()
{
	LogiLedShutdown();
}
void FLogitechG::toRGBpercent(FColor color, int &red, int &green, int &blue)
{
	red = (int)((color.R / 255.0f) * 100);
	green = (int)((color.G / 255.0f) * 100);
	blue = (int)((color.B / 255.0f) * 100);
}
FColor FLogitechG::toFColor(int red, int green, int blue)
{
	red = (int)((red / 100.0f) * 255);
	green = (int)((green / 100.0f) * 255);
	blue = (int)((blue / 100.0f) * 255);
	return FColor(red, green, blue);
}

bool FLogitechG::ArxInit(const FString identifier, const FString friendlyName, const ArxCbContext *callbackContext)
{
	return LogiArxInit(const_cast<WIDECHAR*>(*identifier), const_cast<WIDECHAR*>(*friendlyName), (logiArxCbContext*)callbackContext);
}
bool FLogitechG::ArxAddFileAs(const FString filePath, const FString fileName, const FString mimeType)
{
	return LogiArxAddFileAs(const_cast<WIDECHAR*>(*filePath), const_cast<WIDECHAR*>(*fileName), const_cast<WIDECHAR*>(*mimeType));
}
bool FLogitechG::ArxAddContentAs(const void* content, int size, const FString fileName, const FString mimeType)
{
	return LogiArxAddContentAs(content, size, const_cast<WIDECHAR*>(*fileName), const_cast<WIDECHAR*>(*mimeType));
}
bool FLogitechG::ArxAddUTF8StringAs(const FString stringContent, const FString fileName, const FString mimeType)
{
	return LogiArxAddUTF8StringAs(const_cast<WIDECHAR*>(*mimeType), const_cast<WIDECHAR*>(*mimeType), const_cast<WIDECHAR*>(*mimeType));
}
bool FLogitechG::ArxAddImageFromBitmap(const unsigned char *bitmap, const int width, const int height, const FString fileName)
{
	return LogiArxAddImageFromBitmap((unsigned char *)bitmap, width, height, const_cast<WIDECHAR*>(*fileName));
}
bool FLogitechG::ArxSetIndex(const FString fileName)
{
	return LogiArxSetIndex(const_cast<WIDECHAR*>(*fileName));
}
bool FLogitechG::ArxSetTagPropertyById(const FString tagId, const FString prop, const FString newValue)
{
	return LogiArxSetTagPropertyById(const_cast<WIDECHAR*>(*tagId), const_cast<WIDECHAR*>(*prop), const_cast<WIDECHAR*>(*newValue));
}
bool FLogitechG::ArxSetTagsPropertyByClass(const FString tagsClass, const FString prop, const FString newValue)
{
	return LogiArxSetTagsPropertyByClass(const_cast<WIDECHAR*>(*tagsClass), const_cast<WIDECHAR*>(*prop), const_cast<WIDECHAR*>(*newValue));
}
bool FLogitechG::ArxSetTagContentById(const FString tagId, const FString newContent)
{
	return LogiArxSetTagContentById(const_cast<WIDECHAR*>(*tagId), const_cast<WIDECHAR*>(*newContent));
}
bool FLogitechG::ArxSetTagsContentByClass(const FString tagsClass, const FString newContent)
{
	return LogiArxSetTagsContentByClass(const_cast<WIDECHAR*>(*tagsClass), const_cast<WIDECHAR*>(*newContent));
}
int FLogitechG::ArxGetLastError()
{
	return LogiArxGetLastError();
}
void FLogitechG::ArxShutdown()
{
	LogiArxShutdown();
}


bool FLogitechG::GkeyInit(const GkeyCBContext* gkeyCBContext)
{
	return LogiGkeyInit((logiGkeyCBContext*)gkeyCBContext) ? true : false;
}
bool FLogitechG::GkeyInitWithoutCallback()
{
	return LogiGkeyInitWithoutCallback() ? true : false;
}
bool FLogitechG::GkeyInitWithoutContext(const GkeyCB gkeyCallBack)
{
	return LogiGkeyInitWithoutContext((logiGkeyCB)gkeyCallBack) ? true : false;
}
bool FLogitechG::GkeyIsMouseButtonPressed(const int buttonNumber)
{
	return LogiGkeyIsMouseButtonPressed(buttonNumber) ? true : false;
}
FString FLogitechG::GkeyGetMouseButtonString(const int buttonNumber)
{
	return FString(LogiGkeyGetMouseButtonString(buttonNumber));
}
bool FLogitechG::GkeyIsKeyboardGkeyPressed(const int gkeyNumber, const  int modeNumber)
{
	return LogiGkeyIsKeyboardGkeyPressed(gkeyNumber, modeNumber) ? true : false;
}
FString FLogitechG::GkeyGetKeyboardGkeyString(const int gkeyNumber, const  int modeNumber)
{
	return FString(LogiGkeyGetKeyboardGkeyString(gkeyNumber, modeNumber));
}
void FLogitechG::GkeyShutdown()
{
	LogiGkeyShutdown();
}


bool FLogitechG::LcdInit(const FString friendlyName, const int lcdType)
{
	return LogiLcdInit(const_cast<WIDECHAR*>(*friendlyName), lcdType);
}
bool FLogitechG::LcdIsConnected(const int lcdType)
{
	return LogiLcdIsConnected(lcdType);
}
bool FLogitechG::LcdIsButtonPressed(const int button)
{
	return LogiLcdIsButtonPressed(button);
}
void FLogitechG::LcdUpdate()
{
	LogiLcdUpdate();
}
void FLogitechG::LcdShutdown()
{
	LogiLcdShutdown();
}
bool FLogitechG::LcdMonoSetBackground(const unsigned char* monoBitmap)
{
	return LogiLcdMonoSetBackground((unsigned char *)monoBitmap);
}
bool FLogitechG::LcdMonoSetText(const int lineNumber, const FString text)
{
	return LogiLcdMonoSetText(lineNumber, const_cast<WIDECHAR*>(*text));
}
bool FLogitechG::LcdColorSetBackground(const unsigned char* colorBitmap)
{
	return LogiLcdColorSetBackground((unsigned char *)colorBitmap);
}
bool FLogitechG::LcdColorSetTitle(const FString text, const int red, const int green, const int blue)
{
	return LogiLcdColorSetTitle(const_cast<WIDECHAR*>(*text), red, green, blue);
}
bool FLogitechG::LcdColorSetText(const int lineNumber, const FString text, const int red, const int green, const int blue)
{
	return LogiLcdColorSetText(lineNumber, const_cast<WIDECHAR*>(*text), red, green, blue);
}


bool FLogitechG::WheelInit(const bool ignoreXInputControllers)
{
	return LogiSteeringInitialize(ignoreXInputControllers);
}
bool FLogitechG::WheelGetSdkVersion(int *majorNum, int *minorNum, int *buildNum)
{
	return LogiSteeringGetSdkVersion(majorNum, minorNum, buildNum);
}
bool FLogitechG::WheelUpdate()
{
	return LogiUpdate();
}
DIJOYSTATE* FLogitechG::WheelGetState(const int index)
{
	return (DIJOYSTATE*)LogiGetState(index);
}
FString FLogitechG::WheelGetFriendlyProductName(const int index)
{
	int size = 0;
	wchar_t buffer[MAX_PATH];
	if (LogiGetFriendlyProductName(index, buffer, size))
	{
		return FString(size, buffer);
	}
	return FString();
}
bool FLogitechG::WheelIsConnected(const int index)
{
	return LogiIsConnected(index);
}
bool FLogitechG::WheelIsDeviceConnected(const int index, const int deviceType)
{
	return LogiIsDeviceConnected(index, deviceType);
}
bool FLogitechG::WheelIsManufacturerConnected(const int index, const int manufacturerName)
{
	return LogiIsManufacturerConnected(index, manufacturerName);
}
bool FLogitechG::WheelIsModelConnected(const int index, const int modelName)
{
	return LogiIsModelConnected(index, modelName);
}
bool FLogitechG::WheelButtonTriggered(const int index, const int buttonNbr)
{
	return LogiButtonTriggered(index, buttonNbr);
}
bool FLogitechG::WheelButtonReleased(const int index, const int buttonNbr)
{
	return LogiButtonReleased(index, buttonNbr);
}
bool FLogitechG::WheelButtonIsPressed(const int index, const int buttonNbr)
{
	return LogiButtonIsPressed(index, buttonNbr);
}
bool FLogitechG::WheelGenerateNonLinearValues(const int index, const int nonLinCoeff)
{
	return LogiGenerateNonLinearValues(index, nonLinCoeff);
}
int FLogitechG::WheelGetNonLinearValue(const int index, const int inputValue)
{
	return LogiGetNonLinearValue(index, inputValue);
}
bool FLogitechG::WheelHasForceFeedback(const int index)
{
	return LogiHasForceFeedback(index);
}
bool FLogitechG::WheelIsPlaying(const int index, const int forceType)
{
	return LogiIsPlaying(index, forceType);
}
bool FLogitechG::WheelPlaySpringForce(const int index, const int offsetPercentage, const int saturationPercentage, const int coefficientPercentage)
{
	return LogiPlaySpringForce(index, offsetPercentage, saturationPercentage, coefficientPercentage);
}
bool FLogitechG::WheelStopSpringForce(const int index)
{
	return LogiStopSpringForce(index);
}
bool FLogitechG::WheelPlayConstantForce(const int index, const int magnitudePercentage)
{
	return LogiPlayConstantForce(index, magnitudePercentage);
}
bool FLogitechG::WheelStopConstantForce(const int index)
{
	return LogiStopConstantForce(index);
}
bool FLogitechG::WheelPlayDamperForce(const int index, const int coefficientPercentage)
{
	return LogiPlayDamperForce(index, coefficientPercentage);
}
bool FLogitechG::WheelStopDamperForce(const int index)
{
	return LogiStopDamperForce(index);
}
bool FLogitechG::WheelPlaySideCollisionForce(const int index, const int magnitudePercentage)
{
	return LogiPlaySideCollisionForce(index, magnitudePercentage);
}
bool FLogitechG::WheelPlayFrontalCollisionForce(const int index, const int magnitudePercentage)
{
	return LogiPlayFrontalCollisionForce(index, magnitudePercentage);
}
bool FLogitechG::WheelPlayDirtRoadEffect(const int index, const int magnitudePercentage)
{
	return LogiPlayDirtRoadEffect(index, magnitudePercentage);
}
bool FLogitechG::WheelStopDirtRoadEffect(const int index)
{
	return LogiStopDirtRoadEffect(index);
}
bool FLogitechG::WheelPlayBumpyRoadEffect(const int index, const int magnitudePercentage)
{
	return LogiPlayBumpyRoadEffect(index, magnitudePercentage);
}
bool FLogitechG::WheelStopBumpyRoadEffect(const int index)
{
	return LogiStopBumpyRoadEffect(index);
}
bool FLogitechG::WheelPlaySlipperyRoadEffect(const int index, const int magnitudePercentage)
{
	return LogiPlaySlipperyRoadEffect(index, magnitudePercentage);
}
bool FLogitechG::WheelStopSlipperyRoadEffect(const int index)
{
	return LogiStopSlipperyRoadEffect(index);
}
bool FLogitechG::WheelPlaySurfaceEffect(const int index, const int type, const int magnitudePercentage, const int period)
{
	return LogiPlaySurfaceEffect(index, type, magnitudePercentage, period);
}
bool FLogitechG::WheelStopSurfaceEffect(const int index)
{
	return LogiStopSurfaceEffect(index);
}
bool FLogitechG::WheelPlayCarAirborne(const int index)
{
	return LogiPlayCarAirborne(index);
}
bool FLogitechG::WheelStopCarAirborne(const int index)
{
	return LogiStopCarAirborne(index);
}
bool FLogitechG::WheelPlaySoftstopForce(const int index, const int usableRangePercentage)
{
	return LogiPlaySoftstopForce(index, usableRangePercentage);
}
bool FLogitechG::WheelStopSoftstopForce(const int index)
{
	return LogiStopSoftstopForce(index);
}
bool FLogitechG::WheelSetPreferredControllerProperties(const ControllerPropertiesData properties)
{
	LogiControllerPropertiesData prop;
	memcpy(&prop, &properties, sizeof(LogiControllerPropertiesData));
	bool result = LogiSetPreferredControllerProperties(prop);
	return result;
}
bool FLogitechG::WheelGetCurrentControllerProperties(const int index, ControllerPropertiesData& properties)
{
	LogiControllerPropertiesData prop;
	memcpy(&prop, &properties, sizeof(LogiControllerPropertiesData));
	bool result = LogiGetCurrentControllerProperties(index, prop);
	if (result)
	{
		memcpy(&properties, &prop, sizeof(ControllerPropertiesData));
	}
	return result;
}
int FLogitechG::WheelGetShifterMode(const int index)
{
	return LogiGetShifterMode(index);
}
bool FLogitechG::WheelSetOperatingRange(const int index, const int range)
{
	return LogiSetOperatingRange(index, range);
}
bool FLogitechG::WheelGetOperatingRange(const int index, int& range)
{
	return LogiGetOperatingRange(index, range);
}
bool FLogitechG::WheelPlayLeds(const int index, const float currentRPM, const float rpmFirstLedTurnsOn, const float rpmRedLine)
{
	return LogiPlayLeds(index, currentRPM, rpmFirstLedTurnsOn, rpmRedLine);
}
void FLogitechG::WheelShutdown()
{
	return LogiSteeringShutdown();
}

IMPLEMENT_MODULE(FLogitechG, LogitechG)
