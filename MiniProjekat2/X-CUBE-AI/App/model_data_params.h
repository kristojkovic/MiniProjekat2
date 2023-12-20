/**
  ******************************************************************************
  * @file    model_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Wed Dec 20 23:26:06 2023
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef MODEL_DATA_PARAMS_H
#define MODEL_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_MODEL_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_model_data_weights_params[1]))
*/

#define AI_MODEL_DATA_CONFIG               (NULL)


#define AI_MODEL_DATA_ACTIVATIONS_SIZES \
  { 92216, }
#define AI_MODEL_DATA_ACTIVATIONS_SIZE     (92216)
#define AI_MODEL_DATA_ACTIVATIONS_COUNT    (1)
#define AI_MODEL_DATA_ACTIVATION_1_SIZE    (92216)



#define AI_MODEL_DATA_WEIGHTS_SIZES \
  { 375448, }
#define AI_MODEL_DATA_WEIGHTS_SIZE         (375448)
#define AI_MODEL_DATA_WEIGHTS_COUNT        (1)
#define AI_MODEL_DATA_WEIGHT_1_SIZE        (375448)



#define AI_MODEL_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_model_activations_table[1])

extern ai_handle g_model_activations_table[1 + 2];



#define AI_MODEL_DATA_WEIGHTS_TABLE_GET() \
  (&g_model_weights_table[1])

extern ai_handle g_model_weights_table[1 + 2];


#endif    /* MODEL_DATA_PARAMS_H */
