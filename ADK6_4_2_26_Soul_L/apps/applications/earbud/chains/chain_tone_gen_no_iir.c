/*!
    \copyright Copyright (c) 2020 Qualcomm Technologies International, Ltd.
        All Rights Reserved.
        Qualcomm Technologies International, Ltd. Confidential and Proprietary.
    \version 
    \file chain_tone_gen_no_iir.c
    \brief The chain_tone_gen_no_iir chain. This file is generated by C:/qtil/ADK_QCC512X_QCC302X_WIN_6.4.2.26/tools/chaingen/chaingen.py.
*/

#include <chain_tone_gen_no_iir.h>
#include <cap_id_prim.h>
#include <opmsg_prim.h>
#include <hydra_macros.h>
#include <../av_headset_chain_roles.h>
static const operator_config_t operators[] =
{
    MAKE_OPERATOR_CONFIG(CAP_ID_RINGTONE_GENERATOR, OPR_TONE_GEN)
};

static const operator_endpoint_t outputs[] =
{
    {OPR_TONE_GEN, EPR_TONE_PROMPT_CHAIN_OUT, 0}
};

const chain_config_t chain_tone_gen_no_iir_config = {0, 0, operators, 1, NULL, 0, outputs, 1, NULL, 0};
