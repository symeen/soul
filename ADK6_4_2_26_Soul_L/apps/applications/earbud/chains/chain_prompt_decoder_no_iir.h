/*!
    \copyright Copyright (c) 2020 Qualcomm Technologies International, Ltd.
        All Rights Reserved.
        Qualcomm Technologies International, Ltd. Confidential and Proprietary.
    \version 
    \file chain_prompt_decoder_no_iir.h
    \brief The chain_prompt_decoder_no_iir chain. This file is generated by C:/qtil/ADK_QCC512X_QCC302X_WIN_6.4.2.26/tools/chaingen/chaingen.py.
*/

#ifndef _CHAIN_PROMPT_DECODER_NO_IIR_H__
#define _CHAIN_PROMPT_DECODER_NO_IIR_H__

/*!
    @startuml
        object OPR_PROMPT_DECODER
        OPR_PROMPT_DECODER : id = CAP_ID_SBC_DECODER
        object EPR_PROMPT_IN #lightgreen
        OPR_PROMPT_DECODER "IN(0)" <-- EPR_PROMPT_IN
        object EPR_TONE_PROMPT_CHAIN_OUT #lightblue
        EPR_TONE_PROMPT_CHAIN_OUT <-- "OUT(0)" OPR_PROMPT_DECODER
    @enduml
*/

#include <chain.h>

extern const chain_config_t chain_prompt_decoder_no_iir_config;

#endif /* _CHAIN_PROMPT_DECODER_NO_IIR_H__ */
