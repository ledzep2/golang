// Copyright 2009 The Go Authors. All rights reserved.
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.

// This file provides fast assembly versions for the elementary
// arithmetic operations on vectors implemented in arith.go.

// func addVV(z, x, y *Word, n int) (c Word)
TEXT ·addVV(SB),7,$0
	MOVL z+0(FP), DI
	MOVL x+4(FP), SI
	MOVL y+8(FP), CX
	MOVL n+12(FP), BP
	MOVL $0, BX         // i = 0
	MOVL $0, DX         // c = 0
	JMP E1

L1:	MOVL (SI)(BX*4), AX
	RCRL $1, DX
	ADCL (CX)(BX*4), AX
	RCLL $1, DX
	MOVL AX, (DI)(BX*4)
	ADDL $1, BX			// i++

E1:	CMPL BX, BP		// i < n
	JL L1

	MOVL DX, c+16(FP)
	RET


// func subVV(z, x, y *Word, n int) (c Word)
// (same as addVV except for SBBL instead of ADCL and label names)
TEXT ·subVV(SB),7,$0
	MOVL z+0(FP), DI
	MOVL x+4(FP), SI
	MOVL y+8(FP), CX
	MOVL n+12(FP), BP
	MOVL $0, BX         // i = 0
	MOVL $0, DX         // c = 0
	JMP E2

L2:	MOVL (SI)(BX*4), AX
	RCRL $1, DX
	SBBL (CX)(BX*4), AX
	RCLL $1, DX
	MOVL AX, (DI)(BX*4)
	ADDL $1, BX         // i++

E2:	CMPL BX, BP        // i < n
	JL L2

	MOVL DX, c+16(FP)
	RET


// func addVW(z, x *Word, y Word, n int) (c Word)
TEXT ·addVW(SB),7,$0
	MOVL z+0(FP), DI
	MOVL x+4(FP), SI
	MOVL y+8(FP), AX   // c = y
	MOVL n+12(FP), BP
	MOVL $0, BX         // i = 0
	JMP E3

L3:	ADDL (SI)(BX*4), AX
	MOVL AX, (DI)(BX*4)
	RCLL $1, AX
	ANDL $1, AX
	ADDL $1, BX         // i++

E3:	CMPL BX, BP        // i < n
	JL L3

	MOVL AX, c+16(FP)
	RET


// func subVW(z, x *Word, y Word, n int) (c Word)
TEXT ·subVW(SB),7,$0
	MOVL z+0(FP), DI
	MOVL x+4(FP), SI
	MOVL y+8(FP), AX   // c = y
	MOVL n+12(FP), BP
	MOVL $0, BX         // i = 0
	JMP E4

L4:	MOVL (SI)(BX*4), DX	// TODO(gri) is there a reverse SUBL?
	SUBL AX, DX
	MOVL DX, (DI)(BX*4)
	RCLL $1, AX
	ANDL $1, AX
	ADDL $1, BX          // i++

E4:	CMPL BX, BP         // i < n
	JL L4

	MOVL AX, c+16(FP)
	RET


// func shlVW(z, x *Word, s Word, n int) (c Word)
// TODO(gri) implement this routine
TEXT ·shlVW(SB),7,$0
	NOP			// work around bug in linker
	JMP ·shlVW_g(SB)


// func shrVW(z, x *Word, s Word, n int) (c Word)
// TODO(gri) implement this routine
TEXT ·shrVW(SB),7,$0
	NOP			// work around bug in linker
	JMP ·shrVW_g(SB)


// func mulAddVWW(z, x *Word, y, r Word, n int) (c Word)
TEXT ·mulAddVWW(SB),7,$0
	MOVL z+0(FP), DI
	MOVL x+4(FP), SI
	MOVL y+8(FP), BP
	MOVL r+12(FP), CX   // c = r
	MOVL n+16(FP), BX
	LEAL	(SI)(BX*4), SI
	LEAL	(DI)(BX*4), DI
	NEGL BX  // i = -n
	JMP E5

L5:	MOVL (SI)(BX*4), AX
	MULL BP
	ADDL CX, AX
	ADCL $0, DX
	MOVL AX, (DI)(BX*4)
	MOVL DX, CX
	ADDL $1, BX         // i++

E5:	CMPL BX, $0        // i < 0
	JL L5

	MOVL CX, c+20(FP)
	RET


// func addMulVVW(z, x *Word, y Word, n int) (c Word)
TEXT ·addMulVVW(SB),7,$0
	MOVL z+0(FP), DI
	MOVL x+4(FP), SI
	MOVL y+8(FP), BP
	MOVL n+12(FP), BX
	LEAL	(SI)(BX*4), SI
	LEAL	(DI)(BX*4), DI
	NEGL BX  // i = -n
	MOVL $0, CX         // c = 0
	JMP E6

L6:	MOVL (SI)(BX*4), AX
	MULL BP
	ADDL (DI)(BX*4), AX
	ADCL $0, DX
	ADDL CX, AX
	ADCL $0, DX
	MOVL AX, (DI)(BX*4)
	MOVL DX, CX
	ADDL $1, BX         // i++

E6:	CMPL BX, $0        // i < 0
	JL L6

	MOVL CX, c+16(FP)
	RET


// divWVW(z* Word, xn Word, x *Word, y Word, n int) (r Word)
TEXT ·divWVW(SB),7,$0
	MOVL z+0(FP), DI
	MOVL xn+4(FP), DX   // r = xn
	MOVL x+8(FP), SI
	MOVL y+12(FP), CX
	MOVL n+16(FP), BX   // i = n
	JMP E7

L7:	MOVL (SI)(BX*4), AX
	DIVL CX
	MOVL AX, (DI)(BX*4)

E7:	SUBL $1, BX         // i--
	JGE L7              // i >= 0

	MOVL DX, r+20(FP)
	RET
