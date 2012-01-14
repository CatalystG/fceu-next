/******************************************************************************* 
 * settings.h - FCEUNext PS3
 *
 *  Created on: Aug 18, 2011
********************************************************************************/

/* Emulator-specific additions */
#ifndef PS3SETTINGS_H
#define PS3SETTINGS_H

#define MAX_PATH_LENGTH		1024

struct SSettings
{
	int			PS3OverscanAmount;
	uint32_t		Orientation;
	uint32_t		PS3PALTemporalMode60Hz;
	uint32_t		PS3FontSize;
	uint32_t		PS3CurrentResolution;
	uint32_t		ScreenshotsEnabled;
	uint32_t		ApplyShaderPresetOnStartup;
	uint32_t		PS3KeepAspect;
	uint32_t		PS3Smooth;
	uint32_t		PS3Smooth2;
	uint32_t		ScaleEnabled;
	uint32_t		ScaleFactor;
	uint32_t		TripleBuffering;
	uint32_t		PS3OverscanEnabled;
	uint32_t		SoundMode;
	uint32_t		ViewportX;
	uint32_t		ViewportY;
	uint32_t		ViewportWidth;
	uint32_t		ViewportHeight;
	uint32_t		Throttled;
	uint32_t		ControlScheme;
	uint32_t		SaveCustomControlScheme;
	uint32_t		CurrentSaveStateSlot;
	uint32_t		CurrentCheatPosition;
	uint32_t		FCEUDisableSpriteLimitation;
	uint32_t		FCEUGameGenie;
	uint32_t		FCEUPPUMode;
	uint32_t		FCEUControlstyle;
	uint32_t		FCEUPalette;
	uint32_t		FCEUScanlinePALStart;
	uint32_t		FCEUScanlinePALEnd;
	uint32_t		FCEUScanlineNTSCStart;
	uint32_t		FCEUScanlineNTSCEnd;
	char			PS3CurrentShader[MAX_PATH_LENGTH];
	char			PS3CurrentShader2[MAX_PATH_LENGTH];
	char			ShaderPresetPath[MAX_PATH_LENGTH];
	char			ShaderPresetTitle[MAX_PATH_LENGTH];
	char			RSoundServerIPAddress[MAX_PATH_LENGTH];
	char			PS3PathSaveStates[MAX_PATH_LENGTH];
	char			PS3PathSRAM[MAX_PATH_LENGTH];
	char			PS3PathROMDirectory[MAX_PATH_LENGTH];
	char			PS3CurrentBorder[MAX_PATH_LENGTH];
	char			PS3PathCheats[MAX_PATH_LENGTH];
	char			GameAwareShaderPath[MAX_PATH_LENGTH];
	char			PS3CurrentInputPresetTitle[MAX_PATH_LENGTH];
	char			PS3PathBaseDirectory[MAX_PATH_LENGTH];
};

extern struct SSettings		Settings;
#endif
