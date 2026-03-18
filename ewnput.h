#include "windows.h"

//ewnput.h is an input library ONLY FOR WINDOWS (i'll bring it to more operating systems)
//LOG:
//v1 - 18.03.2026 - finished at 22:57

//KEYS
const int K_BACKSPACE = 0x08;
const int K_TAB = 0x09;
const int K_CLEAR = 0x0C;
const int K_RETURN = 0x0D;
const int K_SHIFT = 0x10;
const int K_CTRL = 0x11;
const int K_ALT = 0x12;
const int K_CAPS = 0x14;
const int K_ESC = 0x1B;
const int K_SPACE = 0x20;
const int K_UP = 0x26;
const int K_DOWN = 0x28;
const int K_RIGHT = 0x27;
const int K_LEFT = 0x25;
const int K_0 = 0x30;
const int K_1 = 0x31;
const int K_2 = 0x32;
const int K_3 = 0x33;
const int K_4 = 0x34;
const int K_5 = 0x35;
const int K_6 = 0x36;
const int K_7 = 0x37;
const int K_8 = 0x38;
const int K_9 = 0x39;
const int K_A = 0x41;
const int K_B = 0x42;
const int K_C = 0x43;
const int K_D = 0x44;
const int K_E = 0x45;
const int K_F = 0x46;
const int K_G = 0x47;
const int K_H = 0x48;
const int K_I = 0x49;
const int K_J = 0x4A;
const int K_K = 0x4B;
const int K_L = 0x4C;
const int K_M = 0x4D;
const int K_N = 0x4E;
const int K_O = 0x4F;
const int K_P = 0x50;
const int K_Q = 0x51;
const int K_R = 0x52;
const int K_S = 0x53;
const int K_T = 0x54;
const int K_U = 0x55;
const int K_V = 0x56;
const int K_W = 0x57;
const int K_X = 0x58;
const int K_Y = 0x59;
const int K_Z = 0x5A;
const int K_LWIN = 0x5B;
const int K_RWIN = 0x5C;
const int K_F1 = 0x70;
const int K_F2 = 0x71;
const int K_F3 = 0x72;
const int K_F4 = 0x73;
const int K_F5 = 0x74;
const int K_F6 = 0x75;
const int K_F7 = 0x76;
const int K_F8 = 0x77;
const int K_F9 = 0x78;
const int K_F10 = 0x79;
const int K_F11 = 0x7A;
const int K_F12 = 0x7B;
const int K_LSHIFT = 0xA0;
const int K_RSHIFT = 0xA1;
const int K_LCTRL = 0xA2;
const int K_RCTRL = 0xA3;
//KEYS

int ewn_isPressed(int key) {
	int got = GetAsyncKeyState(key);
	if (got != 0) {
		return 1;
	}else if (got == 0) {
		return 0;
	}
}