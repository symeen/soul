/*!
    \copyright Copyright (c) 2020 Qualcomm Technologies International, Ltd.
        All Rights Reserved.
        Qualcomm Technologies International, Ltd. Confidential and Proprietary.
    \version 
    \file chain_prompt_pcm.c
    \brief The chain_prompt_pcm chain. This file is generated by C:/qtil/ADK_QCC512X_QCC302X_WIN_6.4.2.26/tools/chaingen/chaingen.py.
*/

#include <chain_prompt_pcm.h>
#include <cap_id_prim.h>
#include <opmsg_prim.h>
#include <hydra_macros.h>
#include <../av_headset_chain_roles.h>
static const operator_config_t operators[] =
{
    MAKE_OPERATOR_CONFIG(CAP_ID_IIR_RESAMPLER, OPR_TONE_PROMPT_RESAMPLER)
};

static const operator_endpoint_t inputs[] =
{
    {OPR_TONE_PROMPT_RESAMPLER, EPR_PROMPT_IN, 0}
};

static const operator_endpoint_t outputs[] =
{
    {OPR_TONE_PROMPT_RESAMPLER, EPR_TONE_PROMPT_CHAIN_OUT, 0}
};

const chain_config_t chain_prompt_pcm_config = {0, 0, operators, 1, inputs, 1, outputs, 1, NULL, 0};

