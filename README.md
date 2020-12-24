# Logitech Gaming SDKs for Unreal
----

This runtime plugin links to our .libs which find and load our SDK .dlls shipped with Logitech Gaming Software. LGS and the SDK .dlls are responsible for all the work done to communicate to each of the devices. We designed this loading scheme to allow for older versions of our .lib to have support for newer devices by upgrading LGS. This takes the burden off the game developer by shipping a smaller .lib and also ensures future support.

This plugin enables the control of Logitech Gaming products by porting these SDKs to the UE4 engine:
- Logitech|G ARX Control SDK
- Logitech|G LED Illumination SDK
- Logitech|G G-Key Macro SDK
- Logitech|G LCD Gamepanel SDK
- Logitech|G Steering Wheel SDK

## Details
List of Modules:
- LogitechG (Runtime)

List of Features:
- Enable lighting control of LogitechG PerKey RGB, RGB, and Monochrome keyboards.
- Easily implement LogitechG Steering Wheels as a Direct Input controllers and to play Force Feedback effects.
- Develop ARX second screen applets for LogitechG's ARX Control iOS/Android App.
- Develop LCD screen applets for LogitechG LCD keyboards.
- Allow binding and key event capture for LogitechG G-Keys.

Intended Platforms: Win32 and Win64

Documentation Included: Yes

Important\Additional Notes: The SDKs require Logitech Gaming Software to be installed and running to communicate with the devices.
