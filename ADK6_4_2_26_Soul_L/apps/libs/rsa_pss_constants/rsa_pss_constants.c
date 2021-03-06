/****************************************************************************
Generated from D:\2.Sources\01.Bluetooth\08.Beflex\01.Earbuds_work\Blade_earbud\Earbud_L\apps\applications\earbud\qcc512x_qcc302x\QCC3020-AA_DEV-BRD-R2-AA\dfu\dfu-public.key
by C:\qtil\ADK_QCC512X_QCC302X_WIN_6.4.0.43\tools\gen_rsa_pss_constants.py
at 15:48:22 24/12/2019

FILE NAME
    rsa_pss_constants.c

DESCRIPTION
    Constant data needed for the rsa_decrypt and the ce_pkcs1_pss_padding_verify
    function.

NOTES
    The constant data for the rsa_decrypt is generated by the host from the
    RSA public key and compiled into the rsa_pss_constants library.
    It is directly related to the RSA private and public key pair, and if they
    change then this file must be regenerated from the public key.

****************************************************************************/

#include "rsa_decrypt.h"

/*
 * The const rsa_mod_t *mod parameter for the rsa_decrypt function.
 */
const rsa_mod_t rsa_decrypt_constant_mod = {
    /* uint16 M[RSA_SIGNATURE_SIZE] where RSA_SIGNATURE_SIZE is 128 */
    {
        0xa8f4,     /* 00 */
        0x8ef4,     /* 01 */
        0x3d27,     /* 02 */
        0xd536,     /* 03 */
        0x5de0,     /* 04 */
        0x2f71,     /* 05 */
        0x789d,     /* 06 */
        0xd52f,     /* 07 */
        0x9e21,     /* 08 */
        0x9698,     /* 09 */
        0xff2b,     /* 10 */
        0xe43a,     /* 11 */
        0x06f3,     /* 12 */
        0xff04,     /* 13 */
        0x6317,     /* 14 */
        0x4bde,     /* 15 */
        0x1a36,     /* 16 */
        0x613a,     /* 17 */
        0x79c3,     /* 18 */
        0xeed7,     /* 19 */
        0x8331,     /* 20 */
        0xc276,     /* 21 */
        0x731b,     /* 22 */
        0x1abb,     /* 23 */
        0xe439,     /* 24 */
        0x3c6d,     /* 25 */
        0xd528,     /* 26 */
        0x77fc,     /* 27 */
        0x8b15,     /* 28 */
        0xf27d,     /* 29 */
        0xcdfa,     /* 30 */
        0xce62,     /* 31 */
        0x2a53,     /* 32 */
        0x10ce,     /* 33 */
        0x6491,     /* 34 */
        0x2dcc,     /* 35 */
        0xa437,     /* 36 */
        0x1445,     /* 37 */
        0x5c0b,     /* 38 */
        0x2715,     /* 39 */
        0x58d1,     /* 40 */
        0xf956,     /* 41 */
        0xc533,     /* 42 */
        0x3447,     /* 43 */
        0xe78d,     /* 44 */
        0xec10,     /* 45 */
        0x35f1,     /* 46 */
        0xf478,     /* 47 */
        0xbdee,     /* 48 */
        0xe585,     /* 49 */
        0x49b7,     /* 50 */
        0x0c1e,     /* 51 */
        0x1aa3,     /* 52 */
        0x173b,     /* 53 */
        0xa928,     /* 54 */
        0xd3c4,     /* 55 */
        0x22d1,     /* 56 */
        0x1a7f,     /* 57 */
        0xcead,     /* 58 */
        0x3fb3,     /* 59 */
        0xc16b,     /* 60 */
        0x82c3,     /* 61 */
        0x0866,     /* 62 */
        0xe8f6,     /* 63 */
        0x41e6,     /* 64 */
        0x42bf,     /* 65 */
        0x42ba,     /* 66 */
        0x2b91,     /* 67 */
        0x1457,     /* 68 */
        0xfe06,     /* 69 */
        0xc795,     /* 70 */
        0xb756,     /* 71 */
        0xa6c5,     /* 72 */
        0x8150,     /* 73 */
        0x4dd1,     /* 74 */
        0x96d6,     /* 75 */
        0xfa96,     /* 76 */
        0xada4,     /* 77 */
        0xc697,     /* 78 */
        0xb5bd,     /* 79 */
        0x0895,     /* 80 */
        0x5dff,     /* 81 */
        0xfb02,     /* 82 */
        0x327f,     /* 83 */
        0x8b4a,     /* 84 */
        0x2ce4,     /* 85 */
        0x09d4,     /* 86 */
        0x5000,     /* 87 */
        0x1fac,     /* 88 */
        0x14b8,     /* 89 */
        0x0fe7,     /* 90 */
        0x7617,     /* 91 */
        0x1e46,     /* 92 */
        0xd4d2,     /* 93 */
        0x63ae,     /* 94 */
        0x4b38,     /* 95 */
        0x496b,     /* 96 */
        0x98ea,     /* 97 */
        0x07d3,     /* 98 */
        0x0938,     /* 99 */
        0xcd2c,     /* 100 */
        0xa4b5,     /* 101 */
        0xec5f,     /* 102 */
        0x228a,     /* 103 */
        0xe330,     /* 104 */
        0x39f2,     /* 105 */
        0xcdf3,     /* 106 */
        0xb745,     /* 107 */
        0xf54f,     /* 108 */
        0x8e86,     /* 109 */
        0xce07,     /* 110 */
        0x59ac,     /* 111 */
        0xfb2d,     /* 112 */
        0x9eb7,     /* 113 */
        0xd248,     /* 114 */
        0x4933,     /* 115 */
        0xc965,     /* 116 */
        0xadfd,     /* 117 */
        0x722a,     /* 118 */
        0xecad,     /* 119 */
        0xb409,     /* 120 */
        0x4205,     /* 121 */
        0xc929,     /* 122 */
        0xee50,     /* 123 */
        0x76c2,     /* 124 */
        0x28aa,     /* 125 */
        0x9027,     /* 126 */
        0x4599      /* 127 */
    },
    /* uint16 M_dash */
    0xc157
};

/* 
 * The "lump of memory passed in initialised to R^2N mod M" needed for the
 * uint16 *A parameter for the rsa_decrypt function. This must be copied into
 * a writable array of RSA_SIGNATURE_SIZE uint16 from here before use.
 */
const  uint16 rsa_decrypt_constant_sign_r2n[RSA_SIGNATURE_SIZE] = {
    0x0c33,     /* 00 */
    0x4558,     /* 01 */
    0x4ae1,     /* 02 */
    0xedc1,     /* 03 */
    0xf8cf,     /* 04 */
    0x6c19,     /* 05 */
    0x83e7,     /* 06 */
    0x6053,     /* 07 */
    0xa967,     /* 08 */
    0x022c,     /* 09 */
    0x7041,     /* 10 */
    0x060c,     /* 11 */
    0xebcd,     /* 12 */
    0x698c,     /* 13 */
    0x6e34,     /* 14 */
    0xfc0c,     /* 15 */
    0x0a6e,     /* 16 */
    0x0104,     /* 17 */
    0x6d20,     /* 18 */
    0xa70f,     /* 19 */
    0x8ff2,     /* 20 */
    0x16a7,     /* 21 */
    0xfb6f,     /* 22 */
    0x8fdf,     /* 23 */
    0x184e,     /* 24 */
    0x51d1,     /* 25 */
    0x6abf,     /* 26 */
    0xd621,     /* 27 */
    0xf916,     /* 28 */
    0x4b85,     /* 29 */
    0x9952,     /* 30 */
    0x20fd,     /* 31 */
    0xeccd,     /* 32 */
    0x6ba5,     /* 33 */
    0xb503,     /* 34 */
    0x867d,     /* 35 */
    0xc599,     /* 36 */
    0x51dc,     /* 37 */
    0xa23a,     /* 38 */
    0x3104,     /* 39 */
    0x744a,     /* 40 */
    0x306d,     /* 41 */
    0x7f7c,     /* 42 */
    0xf489,     /* 43 */
    0x9c2e,     /* 44 */
    0xfc6e,     /* 45 */
    0xc53f,     /* 46 */
    0x7034,     /* 47 */
    0x5b9d,     /* 48 */
    0x1574,     /* 49 */
    0xc455,     /* 50 */
    0x6b77,     /* 51 */
    0xa343,     /* 52 */
    0x6e17,     /* 53 */
    0xf87f,     /* 54 */
    0x0adc,     /* 55 */
    0x72b3,     /* 56 */
    0x8f82,     /* 57 */
    0xa009,     /* 58 */
    0xe841,     /* 59 */
    0x0215,     /* 60 */
    0xf746,     /* 61 */
    0x9353,     /* 62 */
    0x10bd,     /* 63 */
    0x95d8,     /* 64 */
    0x98f1,     /* 65 */
    0x193b,     /* 66 */
    0xaec4,     /* 67 */
    0x2fc0,     /* 68 */
    0xa155,     /* 69 */
    0x1799,     /* 70 */
    0x636d,     /* 71 */
    0xf589,     /* 72 */
    0xe0ac,     /* 73 */
    0x203d,     /* 74 */
    0xe92b,     /* 75 */
    0x8dd5,     /* 76 */
    0x6ea0,     /* 77 */
    0x538a,     /* 78 */
    0x5b34,     /* 79 */
    0x68a7,     /* 80 */
    0xe601,     /* 81 */
    0xb8ef,     /* 82 */
    0x9bce,     /* 83 */
    0x8ffc,     /* 84 */
    0xd774,     /* 85 */
    0x6d0d,     /* 86 */
    0xf918,     /* 87 */
    0x9e27,     /* 88 */
    0xeb4b,     /* 89 */
    0x2bf0,     /* 90 */
    0xab57,     /* 91 */
    0x6ee1,     /* 92 */
    0x05bf,     /* 93 */
    0xc928,     /* 94 */
    0xb19c,     /* 95 */
    0xd47d,     /* 96 */
    0x838e,     /* 97 */
    0xd650,     /* 98 */
    0xfb08,     /* 99 */
    0x9fc2,     /* 100 */
    0x2d1e,     /* 101 */
    0x1d79,     /* 102 */
    0x6316,     /* 103 */
    0xc501,     /* 104 */
    0xed09,     /* 105 */
    0x484a,     /* 106 */
    0x4044,     /* 107 */
    0xfdf8,     /* 108 */
    0x5a64,     /* 109 */
    0x8314,     /* 110 */
    0xd9c5,     /* 111 */
    0xf194,     /* 112 */
    0x51d4,     /* 113 */
    0xfd3a,     /* 114 */
    0xcf6b,     /* 115 */
    0xb976,     /* 116 */
    0xe64f,     /* 117 */
    0x07df,     /* 118 */
    0xe277,     /* 119 */
    0x1141,     /* 120 */
    0x172c,     /* 121 */
    0x62ff,     /* 122 */
    0x0e68,     /* 123 */
    0xfff3,     /* 124 */
    0xb9b6,     /* 125 */
    0xe41e,     /* 126 */
    0x6d0c      /* 127 */
};

/*
 * The value to be provided for the saltlen parameter to the 
 * ce_pkcs1_pss_padding_verify function used to decode the PSS padded SHA-256
 * hash. It has to match the value that was used in the encoding process.
 */
const unsigned long ce_pkcs1_pss_padding_verify_constant_saltlen = 222;
