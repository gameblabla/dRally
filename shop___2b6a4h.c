#include "drally.h"
#include "drally_structs_fixed.h"

#define COOXY(x,y) (0x280*(y)+(x))

#if defined(DR_MULTIPLAYER)
	extern __DWORD__ ___19bd60h;
#endif // DR_MULTIPLAYER
	extern __BYTE__ * ___1a112ch__VESA101_ACTIVESCREEN_PTR;
	extern __POINTER__ ___1a10bch;
	extern __POINTER__ ___1a10e8h;
	extern __BYTE__ ___185a3ch[];
	extern __BYTE__ ___196a98h[];
	extern __BYTE__ ___196a9ch[];
	extern __BYTE__ ___196aa0h[];
	extern __BYTE__ ___196aa4h[];
	extern __BYTE__ ___196aa8h[];
	extern __BYTE__ ___1a1ef8h[];
	extern __BYTE__ ___1a01e0h[];


void ___27f80h_cdecl(__DWORD__, __DWORD__, __DWORD__, __DWORD__);
void ___25a74h(void);
void ___25e40h(void);
void ___262b4h(void);
void ___26650h(void);
void ___269e4h(void);
void ___26e54h(void);
void ___25330h(void);

extern int isinmenu;

void shop___2b6a4h(void){

	int 	i	, j;
	__BYTE__ 	px;
	__BYTE__ * 	head_img;
	racer_t * 	s_6c;

	s_6c = (racer_t *)___1a01e0h;
	head_img = ___1a10bch;
	
	isinmenu = 1;

#if defined(DR_MULTIPLAYER)
	if(___19bd60h != 0) head_img = ___1a10e8h;
#endif // DR_MULTIPLAYER

	j = -1;
	while(++j < 0x10){

		i = -1;
		while(++i < 0x280){

			px = head_img[COOXY(i,j)];
			if(px != 0) ___1a112ch__VESA101_ACTIVESCREEN_PTR[COOXY(i,j+0x5c)] = px;
		}
	}

	___25330h();

	if((D(___185a3ch) == 0)
		&&(D(___196a98h) != 3)
		&&(D(___196a9ch) != 1)
		&&(D(___196aa0h) != 1)
		&&(D(___196aa4h) == 0)
		&&(D(___196aa8h) == 0)
		&&(s_6c[D(___1a1ef8h)].loanshark_counter != 4)) ___27f80h_cdecl(426, 243, 108, 114);

	___25a74h();
	___25e40h();
	___262b4h();
	___26650h();
	___269e4h();
	___26e54h();
}
