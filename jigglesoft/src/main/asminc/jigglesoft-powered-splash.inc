;==============================================================================
; Title:        Atari 2600 - JiggleSoft Powered Splash Screen.
; Filename:     jigglesoft-powered-splash.inc
; Platform:     Atari 2600
; Language:     6507 Assembly Language (https://cc65.github.io/doc/ca65.html)
; Author:       Justin Lane (atari2600@jigglesoft.co.uk)
; Date:         2021-02-17 23:59
; Version:      2.0.0
;------------------------------------------------------------------------------
; Copyright (c) 2020 Justin Lane
;
; Licensed under the Apache License, Version 2.0 (the "License");
; you may not use this file except in compliance with the License.
; You may obtain a copy of the License at
;
;     http://www.apache.org/licenses/LICENSE-2.0
;
; Unless required by applicable law or agreed to in writing, software
; distributed under the License is distributed on an "AS IS" BASIS,
; WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
; See the License for the specific language governing permissions and
; limitations under the License.
;------------------------------------------------------------------------------

                .IFNDEF     __JIGGLESOFT_GFX_PF_LOGO__INC__
                            __JIGGLESOFT_GFX_PF_LOGO__INC__ = 1

;==============================================================================
; Atari 2600 - JiggleSoft Graphics - Playfield - Logo.
;==============================================================================

                .PUSHSEG

;------------------------------------------------------------------------------
; Graphics Data.
;------------------------------------------------------------------------------

                .RODATA


; Playfield Data.

jigglesoft_logo_pfield:
    PF012L012R_CSV  _,_,_,B,_,B,_,_,_,_,_,_,_,_,_,B,_,_,_,___,B,B,B,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_
    PF012L012R_CSV  _,_,_,B,_,_,_,_,_,_,_,_,_,_,_,B,_,_,_,___,B,_,_,_,_,_,_,_,_,_,B,B,B,B,_,B,_,_,_
    PF012L012R_CSV  _,_,_,B,_,B,_,_,_,_,_,_,_,_,_,B,_,B,B,B,_,B,_,_,_,_,_,_,_,_,_,B,_,_,_,_,B,_,_,_
    PF012L012R_CSV  _,_,_,B,_,B,_,B,B,B,_,B,B,B,_,B,_,B,_,B,_,B,B,B,_,B,B,B,B,_,_,B,_,_,_,B,B,B,_,_
    PF012L012R_CSV  _,_,_,B,_,B,_,B,_,B,_,B,_,B,_,B,_,B,B,B,_,_,_,B,_,B,_,_,B,_,B,B,B,_,_,_,B,_,_,_
    PF012L012R_CSV  B,_,_,B,_,B,_,B,_,B,_,B,_,B,_,B,_,B,_,_,_,_,_,B,_,B,_,_,B,_,_,B,_,_,_,_,B,_,_,_
    PF012L012R_CSV  B,B,B,B,_,B,_,B,B,B,_,B,B,B,_,B,_,B,B,B,_,B,B,B,_,B,B,B,B,_,_,B,_,_,_,_,B,B,B,B
    PF012L012R_CSV  _,_,_,_,_,_,_,_,_,B,_,_,_,B,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_
    PF012L012R_CSV  _,_,_,_,_,_,_,B,B,B,_,B,B,B,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_
jigglesoft_logo_pfield_end:


; Background Colour Data.

jigglesoft_logo_colubk:
                .BYTE           $00
jigglesoft_logo_colubk_end:


; Playfield Colour Data.

jigglesoft_logo_colupf:
                .BYTE           $FE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
                .BYTE           $EE
jigglesoft_logo_colupf_end:



;------------------------------------------------------------------------------

                .POPSEG

;------------------------------------------------------------------------------

                .ENDIF

