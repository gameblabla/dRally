#include "drally.h"

void ___38878h_cdecl(void){

/*
cpu 386
%include "macros.inc"

	extern	__CHK
	extern	___196bdch
	extern	___3881ch
	extern	___185c0bh
	extern	___1a1108h
	extern	___12e78h_cdecl
	extern	___1a112ch__VESA101_ACTIVESCREEN_PTR
	extern	___1398ch__VESA101_PRESENTRECTANGLE
	extern	___1a10fch

section .text

__GDECL(___38878h_cdecl)
	push 	edx
	push 	ecx
	push 	eax
	call 	___38878h
	pop 	eax
	pop 	ecx
	pop 	edx
	retn

__GDECL(___38878h)
		push    14h
		call    near __CHK
		push    ebx
		push    ecx
		push    edx
		push    esi
		mov     edx, [___196bdch]
		inc     edx
		mov     [___196bdch], edx
		cmp     edx, byte 0fh
		jne     short ___388d6h

	push 	edx
	push 	ecx
		call    ___3881ch
	pop 	ecx
	pop 	edx

		mov     ecx, 102beh
		mov     ebx, __dfr_180998h
		mov     edx, ___185c0bh
		mov     eax, [___1a1108h]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 14h
		mov     ebx, 168h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 0fb08h
		add     edx, 0fb08h

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
___388d6h:
		cmp     dword [___196bdch], byte 1eh
		jne     short ___38925h

	push 	edx
	push 	ecx
		call    ___3881ch
	pop 	ecx
	pop 	edx

		mov     ecx, 102beh
		mov     ebx, __dfr_180998h
		mov     edx, ___185c0bh
		mov     eax, [___1a10fch]

	push 	ecx
	push 	ebx
	push 	edx
	push 	eax
		call    ___12e78h_cdecl
	add 	esp, 10h

		mov     ecx, 14h
		mov     ebx, 168h
		mov     edx, [___1a112ch__VESA101_ACTIVESCREEN_PTR]
		mov     eax, 0fb08h
		add     edx, 0fb08h
		xor     esi, esi

	push 	ecx
	push	ebx
	push 	edx
	push 	eax
		call    ___1398ch__VESA101_PRESENTRECTANGLE
	add 	esp, 10h
	
		mov     [___196bdch], esi
___38925h:
		pop     esi
		pop     edx
		pop     ecx
		pop     ebx
		retn    

section .data
__dfr_180998h:
	db 	"Waiting for other players...",0,0,0,0
*/
}
