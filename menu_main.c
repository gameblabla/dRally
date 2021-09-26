#include "drally.h"
#include "sfx.h"

#pragma pack(1)
typedef struct rgb24_s {
	__BYTE__ 	r;
	__BYTE__ 	g;
	__BYTE__ 	b;
} rgb24_t;

typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern __DWORD__ ___24cc58h_msx_volume;
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___196abch[];
	extern byte ___1a2010h[];
	extern __DWORD__ ___19bd58h_gamepad;
	extern byte ___196ab8h[];
	extern __DWORD__ ___196a90h_modem_dialing;
	extern byte ___1a1ef8h[];
	extern rgb24_t * ___1a0fb8h;
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern byte ___1a01e0h[];
	extern byte ___196d84h[];
	extern byte ___185a2ch[];
	extern byte ___196a84h[];
	extern void * ___1a1100h__VESA101h_DefaultScreenBuffer;
	extern void * ___1a1124h__VESA101h_ScreenBufferA;
	extern byte ___1a1ef4h[];
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte ___185ba9h[];
	extern byte ___1a10cch[];
	extern byte ___1866b8h[];
	extern byte ___185b58h[];

void ___596f0h(void);
void ___606dfh(void);
void ___3d38ch(void);
void ___3d890h(void);
void ___117f4h(void);
void ___1240ch(void);
void ___24548h(void);
void ___2faf0h(void);
void ___3d2bch(void);
void ___12940h(void);
void restoreDefaultScreenBuffer();
void restoreDefaultScreenBufferA();

void dRally_Sound_load(dword msx_t, const char * msx_f, dword sfx_t, const char * sfx_f, dword num_ch);
void dRally_Sound_setMusicVolume(dword vol);
void dRally_Sound_setEffectsVolume(dword vol);
void dRally_Sound_setMasterVolume(dword vol);
byte dRally_Sound_setPosition(dword pos_n);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void dRally_Sound_play(void);
void dRally_Sound_release(void);
void dRally_Sound_stop(void);
dword __GET_TIMER_TICKS(void);
void srand_watcom106(dword);
void __VESA101_SETMODE(void);
dword ___12c38h__VESA101_CHECKBANKS(void);
void __VGA3_SETMODE(void);
void dRally_System_clean(void);
void ___605deh_cdecl(dword, dword);
void ___117d4h(void);
void ___11564h_cdecl(dword, dword, dword);
void ___135fch(dword, dword, dword, dword);
void ___23230h(void);
void ___13710h(dword, dword);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b318h(void);
void ___58c60h(void);
void ___13a98h_cdecl(dword);
void ___3a7e0h_cdecl(int);
dword ___146c4h_cdecl(dword);
#if defined(DR_CDCHECK)
dword menu___3e4a0h(void);
#endif // DR_CDCHECK
void ___13248h_cdecl(dword, dword ,dword, dword, dword);
void ___12e78h_cdecl(dword, dword, dword, dword);
void ___12e78h_v2(void * font, font_props_t * font_props, const char * str, int x, int y);
void ___13bd4h_cdecl(dword, dword);
byte ___5994ch(void);
byte ___59b3ch(void);
void ___2ab50h(void);
void menu___194a8h(void);
void menu___1e888h(dword);
void menu___218b4h(void);
void menu___22a80h(void);
void menu___3d4f0h(void);
void menu___3da48h(void);
byte ___148cch_cdecl(dword, dword, dword, void *);

void dRally_Console_clear(void);
void dRally_Console_newLine(const char *, int);
void setIntensity___19eb50h(dword);

void menu_main(void){

    dword   n;
    dword   eax, ebx, ecx, esi, edi, ebp;
	void * 	edx;
    byte    esp[0x2c];


	D(esp+0x24) = 0;
	D(esp+0xc) = 0;
	D(esp+0x18) = 0x4e;
	D(esp+0x20) = 0xaf;

	dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
	dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
	dRally_Sound_setEffectsVolume(___24cc54h_sfx_volume);
	dRally_Sound_setPosition(0x2d00);
	dRally_Sound_setSampleRate(0x5622);
	dRally_Sound_play();
	B(___1a2010h+1) = B(___196abch);
	B(___1a2010h+2) = B(___196abch+1);
	B(___1a2010h+3) = B(___196abch+2);
	D(___196ab8h) = 4;
	B(___1a2010h+4) = B(___196abch+3);

	if((___19bd58h_gamepad == 1)||(___19bd58h_gamepad == 2)){

		___596f0h();
		strcpy(___1866b8h+0x60e, "Gamepad/Joystick Enabled");
		B(___185b58h+3*9+3) = 1;
	}
	else {

		strcpy(___1866b8h+0x60e, "Gamepad/Joystick Disabled");
		B(___185b58h+3*9+3) = 0;
	}

	if(___196a90h_modem_dialing == 0) strcpy(___1866b8h+0xd7a, "Pulse Dialing");  

	srand_watcom106(__GET_TIMER_TICKS());
	___606dfh();
	__VESA101_SETMODE();

	if(___12c38h__VESA101_CHECKBANKS()){
			
		__VGA3_SETMODE();
		printf(	"DEATH RALLY Error: Your VGA-adapter is not fully VESA (VBE 1.0) compliant.\n"
				"                   Use UNIVBE or similar emulator to fix the problem.\n");
		printf("Please consult DRHELP.EXE for more information on how to resolve this problem.\n");

		dRally_Sound_release();
		dRally_System_clean();
		exit(0x70);
	}

	___605deh_cdecl(0x3c, 0);
	___117d4h();
	//___3d38ch();	// APOGEE/GT/REMEDY
	___3d890h();
	___117f4h();
	___1240ch();
	___24548h();
	___2faf0h();
	___3d2bch();
	___12940h();

	edx = &___1a0fb8h[D(___1a01e0h+0x2c+0x6c*D(___1a1ef8h))];
	___11564h_cdecl(B(edx), B(edx+1), B(edx+2));
	memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101h_DefaultScreenBufferB, 0x4b000);
	D(0x6c*D(___1a1ef8h)+___1a01e0h+0x40) = 0;
	B(0x6c*D(___1a1ef8h)+___1a01e0h) = 0;

	dRally_Console_clear();
	dRally_Console_newLine("           Welcome to Death Rally - Full version 1.1", 1);
	//dRally_Console_newLine("    Developed by Remedy Entertainment for Apogee Software", 1);
	dRally_Console_newLine("       Powered by dRally, open source Death Rally engine", 1);
	dRally_Console_newLine("", 1);
	dRally_Console_newLine(" Use arrow keys to change selection and press enter to confirm.", 1);
	dRally_Console_newLine("", 1);

	___135fch(0, 0x173, 0x27f, 0x6d);
	___23230h();

    if(D(esp+0xc) == 0){

		D(esp+4) = D(esp+0x20)+0x38;
		D(esp+0x10) = 640*(D(esp+0x20)+0x12)+D(esp+0x18)+0x28;
		D(esp+0x14) = 640*(D(esp+0x20)+0x32)+D(esp+0x18)+0xa6;
		ebp = D(esp+0x18)+0x8c;

		while(1){

			memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd200, ___1a1138h__VESA101h_DefaultScreenBufferB+0xd200, 0x2c380);
			___13710h(0, 1);

			if(D(___196d84h)||D(___185a2ch)){
				
				if(D(___196a84h) == 0){

					___12cb8h__VESA101_PRESENTSCREEN();
					___2b318h();

					D(esp+0x1c) = -1;
					D(esp) = 0;
					while(++D(esp+0x1c) < 0x32){

						___58c60h();
						if(D(esp+0x1c)%2) ___13a98h_cdecl(0);
						setIntensity___19eb50h(D(esp));
						D(esp) += 2;
					}

					D(___196d84h) = 0;

					if(D(___185a2ch)){

						D(___185a2ch) = 0;
						memcpy(___1a1100h__VESA101h_DefaultScreenBuffer, ___1a1124h__VESA101h_ScreenBufferA, 0x4b000);
						restoreDefaultScreenBuffer();
						restoreDefaultScreenBufferA();
					}
				}
			}

			if(D(esp+0x24) != 0){

				if(D(___196a84h) == 0){

					restoreDefaultScreenBuffer();
					___3a7e0h_cdecl(-1);
					dRally_Sound_stop();
					dRally_Sound_play();
					dRally_Sound_setPosition(D(___1a1ef4h));
					D(esp+0x24) = 0;
					dRally_Sound_setMasterVolume(0x10000);
				}
			}

			if(D(___196a84h) == 0) ___12cb8h__VESA101_PRESENTSCREEN();

			eax = ___146c4h_cdecl(0)+1;

			switch(eax){
			case 0:
				menu___1e888h(0);
				break;
			case 1: // START RACING
#if defined(DR_CDCHECK)
				if(menu___3e4a0h()){
#endif // DR_CDCHECK
					menu___194a8h();
#if defined(DR_CDCHECK)
				}
				else {
						
					___13710h(0, 0);
					___13248h_cdecl(D(esp+0x18), D(esp+0x20), 0x1e4, 0x61, 1);
					___12e78h_cdecl(___1a1108h, ___185c0bh, "Please insert Death Rally to CD-ROM drive!", D(esp+0x10));
					___12e78h_cdecl(D(___1a10cch), ___185ba9h, "CONTINUE", D(esp+0x14));
					___13bd4h_cdecl(ebp, D(esp+4));
					___12cb8h__VESA101_PRESENTSCREEN();

					while(1){

						dRally_Sound_pushEffect(1, SFX_BUMMER, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
						___5994ch();
						___59b3ch();
						H(ebx) = 0;

						while(1){

							if((H(ebx) == 0x1c)||(H(ebx) == 0x9c)) break;
							H(ebx) = ___5994ch();
							___2ab50h();
							___2ab50h();
							___13bd4h_cdecl(ebp, D(esp+4));
							if(H(ebx) == 1) break;
						}

						___5994ch();
						___59b3ch();
						if(menu___3e4a0h()) break;
						if(H(ebx) == 1) break;
					}

					if(H(ebx) != 1) menu___194a8h();
				}
#endif // DR_CDCHECK
				break;
			case 2:	// MULTIPLAYER
				menu___1e888h(2);
				break;
			case 3:	// CONFIGURE
				menu___218b4h();
				break;
			case 4: // HALL OF FAME
				menu___22a80h();
				D(esp+0x24) = 1;
				break;
			case 5: // CREDITS
				menu___3d4f0h();
				break;
			case 6: // SHOW PREVIEW
				menu___3da48h();
				break;
			case 7: // EXIT TO DOS
				___13710h(0, 0);
				___13248h_cdecl(170, 200, 300, 80, 1);
				//___12e78h_cdecl(___1a1108h, ___185c0bh, "Are you sure?", 0x208fd);
				___12e78h_v2(___1a1108h, ___185c0bh, "Are you sure?", 253, 208);
				___148cch_cdecl(180, 238, 1, esp+0xc);
				break;
			default:
				break;
			}

			if(D(esp+0xc)) break;
		}
	}
}
