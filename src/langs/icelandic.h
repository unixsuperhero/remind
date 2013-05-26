/***************************************************************/
/*                                                             */
/*  ICELANDIC.H                                                */
/*                                                             */
/*  Support for the Icelandic language.                        */
/*                                                             */
/*  This file is part of REMIND.                               */
/*  Copyright (C) 1992-1998 by David F. Skoll                  */
/*  Copyright 1999-2000 by Roaring Penguin Software Inc.       */
/*  Translated by Bj�rn Dav��sson (bjossi@snerpa.is)           */
/*                                                             */
/***************************************************************/

/* The very first define in a language support file must be L_LANGNAME: */
#define L_LANGNAME "Icelandic"

/* Day names */
#define L_SUNDAY "sunnudagur"
#define L_MONDAY "m�nudagur"
#define L_TUESDAY "�ri�judagur"
#define L_WEDNESDAY "mi�vikudagur"
#define L_THURSDAY "fimmtudagur"
#define L_FRIDAY "f�studagur"
#define L_SATURDAY "laugardagur"

/* Month names */
#define L_JAN "jan�ar"
#define L_FEB "febr�ar"
#define L_MAR "mars"
#define L_APR "apr�l"
#define L_MAY "ma�"
#define L_JUN "j�n�"
#define L_JUL "j�l�"
#define L_AUG "�g�st"
#define L_SEP "september"
#define L_OCT "okt�ber"
#define L_NOV "n�vember"
#define L_DEC "desember"

/* Today and tomorrow */
#define L_TODAY "� dag"
#define L_TOMORROW "� morgun"

/* The default banner */
#define L_BANNER "Minnisatri�i: %w, %d%s %m, %y%o:"

/* "am" and "pm" */
#define L_AM "fh"
#define L_PM "eh"

/*** The following are only used in dosubst.c ***/
#ifdef L_IN_DOSUBST

/* Ago and from now */
#define L_AGO "s��an"
#define L_FROMNOW "fr� �v� n�"

/* "in %d days' time" */
#define L_INXDAYS "eftir %d daga"

/* "on" as in "on date..." */
#define L_ON "�ann"

/* Pluralizing - this is a problem for many languages and may require
   a more drastic fix */
#define L_PLURAL "a"

/* Minutes, hours, at, etc */
#define L_NOW "n�na"
#define L_AT "kl."
#define L_MINUTE "m�n�tu"
#define L_HOUR "klukkustund"
#define L_IS "er"
#define L_WAS "var"
#define L_AND "og"
/* What to add to make "hour" plural */
#define L_HPLU "ir"  
/* What to add to make "minute" plural */
#define L_MPLU "r"

/* Define any overrides here, such as L_ORDINAL_OVERRIDE, L_A_OVER, etc.
   See the file dosubst.c for more info. */

#endif /* L_IN_DOSUBST */
