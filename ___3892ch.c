#include "drally.h"
#include "sfx.h"

#pragma pack(1)
typedef struct font_props_s {
	byte 	w;
	byte 	h;
	byte 	props[];
} font_props_t;

	extern byte ___196a74h[];
	extern byte ___1a2147h[];
	extern byte ___185c0bh[];
	extern void * ___1a1108h;
	extern byte ___19eb50h[];
	extern void * ___1a1138h__VESA101h_DefaultScreenBufferB;
	extern void * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern void * ___1a0fbch;
	extern void * ___1a0fd8h;
	extern byte ___185a28h[];
	extern byte ___1a1ef8h[];
	extern byte ___1a01e0h[];
	extern byte ___196ab4h[];
	extern __DWORD__ ___24cc54h_sfx_volume;
	extern byte ___185a14h_UseWeapons[];
	extern byte ___185a3ch[];
	extern byte ___185a4ch[];
	extern byte ___1a0d60h[];
	extern __DWORD__ ___24cc58h_msx_volume;
	extern byte ___196aa0h[];
	extern byte ___196a9ch[];
	extern byte ___196a98h[];

void dRally_Sound_pushEffect(byte channel, byte n, dword unk, dword a0, dword a1, dword a2);
void dRally_Sound_release(void);
void ___38708h(void);
void ___1240ch(void);
void ___24548h(void);
void ___2faf0h(void);
void ___36068h_cdecl(dword A1);
void dRally_Sound_setMasterVolume(dword vol);
void ___36358h_cdecl(dword A1);
void ___36718h_cdecl(dword A1);
void ___30a84h_cdecl(dword A1, dword A2);
void ___30c60h_cdecl(dword A1);
void __DISPLAY_SET_PALETTE_COLOR(dword b, dword g, dword r, dword n);
void ___2ab50h(void);
void ___38768h(void);
byte ___5994ch(void);
void ___36adch(void);
void ___37ed4h_cdecl(dword);
void ___12e78h_cdecl(byte * A1, font_props_t * A2, const char * A3, dword dst_off);
void ___12cb8h__VESA101_PRESENTSCREEN(void);
void ___2b318h(void);
void ___58c60h(void);
void __VESA101_SETMODE(void);
void dRally_Sound_setMusicVolume(dword vol);
void dRally_Sound_setSampleRate(dword freq);
void dRally_Sound_play(void);
void ___606dfh(void);
void ___605deh_cdecl(dword, dword);
void dRally_Sound_load(dword msx_t, const char * msx_f, dword sfx_t, const char * sfx_f, dword num_ch);
void ___10b80h_cdecl(const char *, dword, const char *, dword, const char *, dword, dword);
dword GET_FILE_SIZE(const char *);

void ___3892ch_cdecl(dword A1, dword A2){

	dword	eax, ebx, ecx, edx, edi, esi, ebp, rr, gg, bb, nn, p5, p6, p7;
	byte 	esp[0x70];

	void * 	ebxp;
	void * 	esip;

	eax = A1;
	edx = A2;


		D(esp+0x64) = eax;
		ebx = D(esp+0x64);
		edx ^= edx;
		H(eax) = 0;
		D(___196a74h) = edx;
		B(___1a2147h) = H(eax);
		if(ebx != 2) goto ___38c51h;
		___36adch();
		eax = 0x14;
		ecx = 0x46b6e;
		ebx = "Press any key to continue...";
		edx = ___185c0bh;
		___37ed4h_cdecl(eax);
		eax = ___1a1108h;
		ebp ^= ebp;
		___12e78h_cdecl(eax, edx, ebx, ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		___2b318h();
___38994h:
		___58c60h();
		esi ^= esi;
		edi ^= edi;
		D(esp+0x68) = esi;
		esi = ebp;
___389a3h:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		eax = D(esp+0x68);
		eax++;
		edi += 0xc;
		D(esp+0x68) = eax;
		if((int)eax < 0x60) goto ___389a3h;
		ebx = 0x80;
		edi = 0x600;
		esi = ebp;
		D(esp+0x68) = ebx;
___38a40h:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		ecx = D(esp+0x68);
		ecx++;
		edi += 0xc;
		D(esp+0x68) = ecx;
		if((int)ecx < 0x100) goto ___38a40h;
		ebp += 0x20000;
		if(ebp != 0x640000) goto ___38994h;
___38ae2h:
		___2ab50h();
		___38768h();
		L(eax) = ___5994ch();
		if(L(eax) == 0) goto ___38ae2h;
		___2b318h();
		ebp = 0x640000;
___38affh:
		___58c60h();
		esi = ebp;
		edx ^= edx;
		edi ^= edi;
		D(esp+0x68) = edx;
___38b0eh:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		ebx = D(esp+0x68);
		ebx++;
		edi += 0xc;
		D(esp+0x68) = ebx;
		if((int)ebx < 0x60) goto ___38b0eh;
		esi = 0x80;
		edi = 0x600;
		D(esp+0x68) = esi;
		esi = ebp;
___38babh:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		eax = D(esp+0x68);
		eax++;
		edi += 0xc;
		D(esp+0x68) = eax;
		if((int)eax < 0x100) goto ___38babh;
		ebp -= 0x20000;
		if(ebp == 0xfffe0000) goto ___38f99h;
		goto ___38affh;
___38c51h:
		ecx = 0x4b000;
		edx = 0x36;
		memcpy(___1a112ch__VESA101_ACTIVESCREEN_PTR, ___1a1138h__VESA101h_DefaultScreenBufferB, ecx);
		ecx = 0x182;
		esip = ___1a0fbch;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd32c;

		while(1){

			edi = edx;

			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		ecx = 0x182;
		edx = 0x110;
		esip = ___1a0fd8h;
		ebxp = ___1a112ch__VESA101_ACTIVESCREEN_PTR+0xd362;

		while(1){

			edi = edx;
		
			while(1){

				L(eax) = B(esip);
				if(L(eax) != 0) B(ebxp) = L(eax);
				ebxp++;
				esip++;
				edi--;
				if(edi == 0) break;
			}

			ebxp += 0x280;
			ebxp -= edx;
			ecx--;
			if(ecx == 0) break;
		}

		eax = 0x14;
		ebp ^= ebp;
		___37ed4h_cdecl(eax);
		eax ^= eax;
		D(esp+0x6c) = ebp;
		___36068h_cdecl(eax);
		___12cb8h__VESA101_PRESENTSCREEN();
___38cfah:
		if(D(___185a28h) == 0) goto ___38d0ah;
		eax = ebp;
		dRally_Sound_setMasterVolume(eax);
___38d0ah:
		___58c60h();
		edi ^= edi;
		esi = D(esp+0x6c);
		D(esp+0x68) = edi;
___38d19h:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		eax = D(esp+0x68);
		eax++;
		edi += 0xc;
		D(esp+0x68) = eax;
		if((int)eax < 0x100) goto ___38d19h;
		W(esp+0x6e) += 2;
		ebx = D(esp+0x6c);
		ebp += 0x51e;
		if(ebx != 0x640000) goto ___38cfah;
		ecx ^= ecx;
		D(___185a28h) = ecx;
___38dcch:
		___2ab50h();
		___38768h();
		L(eax) = ___5994ch();
		L(edx) = L(eax);
		if(L(eax) == 0) goto ___38dcch;
		if(L(eax) == 1) goto ___38de7h;
		L(edx) ^= L(eax);
___38de7h:
		eax ^= eax;
		L(eax) = L(edx);
		___36358h_cdecl(eax);
		if(L(edx)) goto ___38e0fh;
___38df4h:
		___2ab50h();
		___38768h();
		L(eax) = ___5994ch();
		L(edx) = L(eax);
		if(L(eax) == 0) goto ___38df4h;
		if(L(eax) == 1) goto ___38e0fh;
		L(edx) ^= L(eax);
___38e0fh:
		eax ^= eax;
		L(eax) = L(edx);
		___36718h_cdecl(eax);
		if(L(edx)) goto ___38e2fh;
___38e1ch:
		___2ab50h();
		___38768h();
		L(eax) = ___5994ch();
		if(L(eax) == 0) goto ___38e1ch;
___38e2fh:
		edx = 0x13;
		eax ^= eax;
		___30a84h_cdecl(eax, edx);
		eax = 0x14;
		___30c60h_cdecl(eax);
		___36adch();
		eax = 0x14;
		esi = D(esp+0x64);
		___37ed4h_cdecl(eax);
		___12cb8h__VESA101_PRESENTSCREEN();
		if(esi) goto ___38f61h;
		edx = D(___1a1ef8h);
		D(esp+0x68) = esi;
		eax ^= eax;
___38e71h:
		ebp = D(eax+___1a01e0h+0x44);
		if((int)esi >= (int)ebp) goto ___38e83h;
		if(edx == D(esp+0x68)) goto ___38e83h;
		esi = ebp;
___38e83h:
		ebx = D(esp+0x68);
		ebx++;
		eax += 0x6c;
		D(esp+0x68) = ebx;
		if((int)ebx < 0x14) goto ___38e71h;
		edi = D(___1a1ef8h);
		eax = 8*edi;
		eax -= edi;
		eax <<= 0x2;
		eax -= edi;
		if((int)esi >= (int)D(eax*4+___1a01e0h+0x44)) goto ___38ec1h;
		if(D(___196ab4h) != 0) goto ___38ec1h;
		B(___1a2147h) = 1;
___38ec1h:
		edi = D(___1a1ef8h);
		eax = 8*edi;
		eax -= edi;
		eax <<= 0x2;
		eax -= edi;
		L(eax) = !!((int)esi < (int)D(eax*4+___1a01e0h+0x44));
		ecx = 0x46b6e;
		eax &= 0xff;
		D(___196ab4h) = eax;
		___38708h();
		___12e78h_cdecl(___1a1108h, ___185c0bh, "Please wait while loading...", ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
		___1240ch();
		___24548h();
		___2faf0h();
		___38708h();
		dRally_Sound_pushEffect(1, SFX_CLICK_4, 0, ___24cc54h_sfx_volume, 0x28000, 0x8000);
		ecx = 0x46b6e;
		___12e78h_cdecl(___1a1108h, ___185c0bh, "Press any key to continue...", ecx);
		___12cb8h__VESA101_PRESENTSCREEN();
___38f61h:
		if(D(esp+0x64) == 1){
		
			ecx = 0x46b6e;
			ebx = "Press any key to continue...";
			edx = ___185c0bh;
			eax = ___1a1108h;
			___12e78h_cdecl(___1a1108h, ___185c0bh, "Press any key to continue...", 0x46b6e);
			___12cb8h__VESA101_PRESENTSCREEN();
		}

	while(1){

		___2ab50h();
		___38768h();
		L(eax) = ___5994ch();
		if(L(eax) != 0) break;
	}

___38f99h:
		if(D(esp+0x64) == 2) goto ___39383h;
		if(D(___185a14h_UseWeapons) == 0) goto ___38fc3h;
		if(D(___185a3ch) != 0) goto ___38fc3h;
		if(D(___185a4ch) != 0) goto ___39383h;
___38fc3h:
		___2b318h();
		ebp = 0x640000;
___38fcdh:
		___58c60h();
		if(B(___1a2147h) != 1) goto ___3907dh;
		esi = ebp;
		eax ^= eax;
		edi ^= edi;
		D(esp+0x68) = eax;
___38fe9h:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		eax = D(esp+0x68);
		eax++;
		edi += 0xc;
		D(esp+0x68) = eax;
		if((int)eax >= 0x100) goto ___391b2h;
		goto ___38fe9h;
___3907dh:
		edi ^= edi;
		esi = ebp;
		D(esp+0x68) = edi;
___39085h:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		ecx = D(esp+0x68);
		ecx++;
		edi += 0xc;
		D(esp+0x68) = ecx;
		if((int)ecx < 0x60) goto ___39085h;
		edx = 0x80;
		edi = 0x600;
		esi = ebp;
		D(esp+0x68) = edx;
___39122h:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		ebx = D(esp+0x68);
		ebx++;
		edi += 0xc;
		D(esp+0x68) = ebx;
		if((int)ebx < 0x100) goto ___39122h;
___391b2h:
		ebp -= 0x20000;
		if(ebp != 0xfffe0000) goto ___38fcdh;
		if(B(___1a2147h) != 1) goto ___39617h;
		dRally_Sound_release();
		L(eax) = 0;
		B(esp) = L(eax);
		esi = ___1a0d60h;
		edi = esp;
		strcat(edi, esi);
		esi = "endani0.haf";
		edi = esp;
		strcat(edi, esi);
		eax = esp;
		eax = GET_FILE_SIZE(eax);
		if((int)eax <= 0) goto ___39275h;
		ecx = 0x2;
		ebx = "tr0-mus.cmf";
		edx = 0x1;
		eax = "endani0.haf";
		___10b80h_cdecl(eax, edx, ebx, ecx, "endani0e.cmf", 1, 0x78);
		dRally_Sound_release();
___39275h:
		ecx = "MEN-SAM.CMF";
		ebx = 0x2;
		edx = "MEN-MUS.CMF";
		eax = 0x1;
		dRally_Sound_load(eax, edx, ebx, ecx, 5);
		eax = ___24cc58h_msx_volume;
		dRally_Sound_setMusicVolume(eax);
		eax = 0x5622;
		esi = 0x60;
		dRally_Sound_setSampleRate(eax);
		dRally_Sound_play();
		edi = 0x640000;
		H(eax) = 0;
		D(esp+0x68) = esi;
		B(___1a2147h) = H(eax);
		___606dfh();
		__VESA101_SETMODE();
		___2b318h();
		eax = 0x46;
		edx ^= edx;
		esi = 0x480;
		___605deh_cdecl(eax, edx);
___392eeh:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = edi;
		eax = D(esi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = edi;
		eax = D(esi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = edi;
		eax = D(esi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		edx = D(esp+0x68);
		edx++;
		esi += 0xc;
		D(esp+0x68) = edx;
		if((int)edx >= 0x80) goto ___39617h;
		goto ___392eeh;
___39383h:
		___2b318h();
		ebp = 0x640000;
___3938dh:
		___58c60h();
		if(B(___1a2147h) != 1) goto ___39439h;
		esi ^= esi;
		edi ^= edi;
		D(esp+0x68) = esi;
		esi = ebp;
___393a9h:
		eax ^= eax;
		L(eax) = B(esp+0x68);
		nn = eax;
		edx = esi;
		eax = D(edi+___19eb50h);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		rr = eax;
		edx = esi;
		eax = D(edi+___19eb50h+4);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		gg = eax;
		edx = esi;
		eax = D(edi+___19eb50h+8);
		___imul32(&eax, &edx, edx);
		eax += 0x8000;
		edx += !!(eax < 0x8000);
		eax = (eax>>0x10)|(edx<<0x10);
		eax += 0x8000;
		eax = (int)eax>>0x10;
		eax &= 0xff;
		bb = eax;
		__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
		ebx = D(esp+0x68);
		ebx++;
		edi += 0xc;
		D(esp+0x68) = ebx;
		if((int)ebx < 0x100) goto ___393a9h;
___39439h:
		ebp -= 0x20000;
		if(ebp != 0xfffe0000) goto ___3938dh;

		if(B(___1a2147h) == 1){

			dRally_Sound_release();

			eax = GET_FILE_SIZE(strcat(strcpy(esp, ___1a0d60h), "endani0.haf"));
			if((int)eax > 0){

				___10b80h_cdecl("endani0.haf", 1, "tr0-mus.cmf", 2, "endani0e.cmf", 1, 0x78);
				dRally_Sound_release();
			}

			dRally_Sound_load(1, "MEN-MUS.CMF", 2, "MEN-SAM.CMF", 5);
			dRally_Sound_setMusicVolume(___24cc58h_msx_volume);
			dRally_Sound_setSampleRate(0x5622);
			dRally_Sound_play();
			B(___1a2147h) = 0;
			___606dfh();
			__VESA101_SETMODE();
			___2b318h();
			___605deh_cdecl(0x46, 0);
			D(esp+0x68) = 0x60;
			D(___196aa0h) = 0;
			D(___196a9ch) = 0;
			D(___196a98h) = 0;
			esi = 0x480;

			while(1){

				nn = B(esp+0x68);

				eax = D(___19eb50h+esi);
				___imul32(&eax, &edx, 0x640000);
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax>>0x10)|(edx<<0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				rr = eax;

				eax = D(___19eb50h+esi+4);
				___imul32(&eax, &edx, 0x640000);
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax>>0x10)|(edx<<0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				gg = eax;

				eax = D(___19eb50h+esi+8);
				___imul32(&eax, &edx, 0x640000);
				eax += 0x8000;
				edx += !!(eax < 0x8000);
				eax = (eax>>0x10)|(edx<<0x10);
				eax += 0x8000;
				eax = (int)eax>>0x10;
				eax &= 0xff;
				bb = eax;
				__DISPLAY_SET_PALETTE_COLOR(bb, gg , rr, nn);
				esi += 0xc;
				D(esp+0x68)++;
				if((int)D(esp+0x68) >= 0x80) break;
			}
		}
___39617h:
		___5994ch();
		D(___196a74h) = 1;
		return;
}
