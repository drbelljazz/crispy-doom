#include "marshmallow.h"

#define HORIZONTAL_TILE_LIMIT 5

#define BLUE_TECHBASE_TEXTURE "COMP03_1"
#define GRAYPANEL_TILE_WIDTH 64
#define GRAYPANEL_COLUMN_WITHBLUE_LEFT "COMP03_7"
#define GRAYPANEL_COLUMN_WITHBLUE_RIGHT "COMP03_6"
#define GRAYPANEL_WITH_VENT "COMP04_7"
#define GRAYPANEL_WITH_YELLOWSTRIPE "COMP04_8"
#define GRAYPANEL_COLUMN "COMP03_4"
#define GRAYPANEL_COLUMN_VENT "COMP03_8"
#define GRAYPANEL_COLUMN_WIDTH 32
#define GRAYPANEL_WITH_SCREEN1 "COMP02_4"
#define GRAYPANEL_WITH_SCREEN2 "COMP02_6"
#define WHITEPANEL_TERMINAL "COMP1B_4"
#define BORDER_TILE "COMP03_4"
#define BUTTON_TILE "EXIT2"

#define X_START 31
#define Y_TOCLEAR_STATUSBAR 54 // 54 is too short, 55 is too long...

#define NEW_X_OFFSET 42
#define NEW_Y_OFFSET 24

#define DATAPAD_DECORATIONS_LEFT_SIDE 55-NEW_X_OFFSET
#define DATAPAD_DECORATIONS_RIGHT_SIDE 197-NEW_X_OFFSET

#define DATAPAD2_X 95-NEW_X_OFFSET
#define DATAPAD2_Y 96-NEW_Y_OFFSET
#define DATAPAD2_LEFTHANDLE 60-NEW_X_OFFSET
#define DATAPAD2_RIGHTHANDLE 190-NEW_X_OFFSET

#define DATAPAD2_BUTTON1_X DATAPAD_DECORATIONS_LEFT_SIDE
#define DATAPAD2_BUTTON1_Y 66 +2
#define DATAPAD2_BUTTON2_X DATAPAD_DECORATIONS_LEFT_SIDE
#define DATAPAD2_BUTTON2_Y 48 +2
#define DATAPAD2_BUTTON3_X DATAPAD_DECORATIONS_RIGHT_SIDE
#define DATAPAD2_BUTTON3_Y 66 +2

// USABLE TEXTURES AS DECORATIONS:

// BLUE = W46_37
// YELLOW = W46_39
// RED = W46_38

// BIG RED LIGHT = WARNB0
// BIG RED LIGHT X = 187
// BIG RED LIGHT Y = 39

#define YELLOWLIGHT_TILE "W46_39"
#define REDLIGHT_TILE "W46_38"
#define BLUELIGHT_TILE "W46_37"
#define DATAPAD2_DISKLED_X DATAPAD_DECORATIONS_RIGHT_SIDE // -NEW_X_OFFSET
#define DATAPAD2_DISKLED_Y 28

#define PKE_BLINKTIMER 50
#define BLINK_TIMER 1000
char* blinking_light;
int blink_timer;

void BlinkingLight();
void Draw_Datapad();
void Draw_Wallpaper(char* tile);

char* background;
#define DOOM2_SUBSTITUTE "RW33_4"

void V_DrawPatchShadow1(int x, int y, patch_t *patch);
void V_DrawPatchShadow2(int x, int y, patch_t *patch);
void V_DrawFilledBox(int x, int y, int w, int h, int c);
void V_DrawHorizLine(int x, int y, int w, int c);

#define DATAPAD2_DISK_X 15 +130
#define DATAPAD2_DISK_Y 8

#define DATAPAD2_OLDBLUETILE_X DATAPAD2_X -2 // Second half of the screen was +64
#define DATAPAD2_OLDBLUETILE_Y DATAPAD2_Y


#define LEFT_BORDER_X 15
#define LEFT_BORDER_Y 34
#define RIGHT_BORDER_X 303
#define RIGHT_BORDER_Y 34

#define LEFT_BORDER_TILE GRAYPANEL_COLUMN_WITHBLUE_LEFT
#define RIGHT_BORDER_TILE GRAYPANEL_COLUMN_WITHBLUE_RIGHT