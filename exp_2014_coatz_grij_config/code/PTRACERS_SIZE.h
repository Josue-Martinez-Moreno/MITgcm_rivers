C $Header: /u/gcmpack/MITgcm/verification/thesis/code/PTRACERS_SIZE.h,v 1.1 2014/08/27 02:12:49 jmc Exp $
C $Name:  $

#ifdef ALLOW_PTRACERS

CBOP
C    !ROUTINE: PTRACERS_SIZE.h
C    !INTERFACE:
C #include PTRACERS_SIZE.h

C    !DESCRIPTION:
C Contains passive tracer array size (number of tracers).

C PTRACERS_num defines how many passive tracers are allocated/exist.
C  and is set here (default 1)
C
C     Number of tracers
      INTEGER PTRACERS_num
      PARAMETER(PTRACERS_num = 3 )

CEOP
#endif /* ALLOW_PTRACERS */

