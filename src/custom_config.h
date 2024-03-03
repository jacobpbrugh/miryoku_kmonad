// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#pragma once

#define MIRYOKU_KMONAD_OS_MAC
#define MIRYOKU_KMONAD_KEYBOARD_MAC "Apple Internal Keyboard / Trackpad"

#define MIRYOKU_LAYER_NUM \
U_NP,              7,                 8,                 9,                 U_NP,              U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_NA,              \
;,                 1,                 2,                 3,                 =,                 U_NA,              sft,               ctl,               alt,               met,               \
U_NP,              4,                 5,                 6,                 \\,                U_NA,              U_DF(U_NUM),       U_DF(U_NAV),       ralt,              U_NA,              \
U_NP,              U_NP,              `,                 0,                 -,                 U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
U_NP,              @,                 #,                 $,                 U_NP,              U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_NA,              \
[,                 ],                 U_LPRN,            U_RPRN,            U_NP,              U_NA,              sft,               ctl,               alt,               met,               \
^,                 %,                 &,                 *,                 U_NP,              U_NA,              U_DF(U_SYM),       U_DF(U_MOUSE),     ralt,              U_NA,              \
U_NP,              U_NP,              !,                 :,                 U_NP,              U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
comp,              f7,                f8,                f9,                sysrq,             U_NA,              U_DF(U_BASE),      U_DF(U_EXTRA),     U_DF(U_TAP),       U_NA,              \
f11,               f1,                f2,                f3,                slck,              U_NA,              sft,               ctl,               alt,               met,               \
f10,               f4,                f5,                f6,                pause,             U_NA,              U_DF(U_FUN),       U_DF(U_MEDIA),     ralt,              U_NA,              \
U_NP,              U_NP,              f12,               spc,               tab,               U_NA,              U_NA,              U_NA,              U_NP,              U_NP
