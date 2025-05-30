#ifndef _HAL_SYSTEM_H
#define _HAL_SYSTEM_H

// Define the CPU family and type.
#if defined(STM32F769xx)
#if !defined(STM32F7)
  #define STM32F7
#endif
#include "stm32f7xx.h"
#include "stm32f7xx_ll_bus.h"
#include "stm32f7xx_ll_rcc.h"
#include "stm32f7xx_ll_system.h"
//#include "stm32f7xx_ll_utils.h"
#include "stm32f7xx_ll_pwr.h"
#include "stm32f7xx_ll_exti.h"
#include "stm32f7xx_ll_gpio.h"
//#include "stm32f7xx_ll_adc.h"
#include "stm32f7xx_ll_cortex.h"
#include "stm32f7xx_ll_crc.h"
#include "stm32f7xx_ll_dma.h"
#include "stm32f7xx_ll_dma2d.h"
#include "stm32f7xx_ll_i2c.h"
//#include "stm32f7xx_ll_iwdg.h"
#include "stm32f7xx_ll_rtc.h"
//#include "stm32f7xx_ll_spi.h"
#include "stm32f7xx_ll_tim.h"
#include "stm32f7xx_ll_usart.h"
//#include "stm32f7xx_ll_wwdg.h"
#include "stm32f7xx_ll_rng.h"
//#include "stm32f7xx_ll_lptim.h"
#include "stm32f7xx_hal.h"
#else
#if !defined(STM32F4)
  #define STM32F4
#endif
#if !defined(STM32F429xx)
  #define STM32F429xx
#endif

// Include LL and HAL include files.
#include "stm32f4xx.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_system.h"
#include "stm32f4xx_ll_utils.h"
#include "stm32f4xx_ll_pwr.h"
#include "stm32f4xx_ll_exti.h"
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_adc.h"
#include "stm32f4xx_ll_cortex.h"
#include "stm32f4xx_ll_crc.h"
#include "stm32f4xx_ll_dac.h"
#include "stm32f4xx_ll_dma.h"
#include "stm32f4xx_ll_dma2d.h"
#include "stm32f4xx_ll_i2c.h"
#include "stm32f4xx_ll_iwdg.h"
#include "stm32f4xx_ll_rtc.h"
#include "stm32f4xx_ll_spi.h"
#include "stm32f4xx_ll_tim.h"
#include "stm32f4xx_ll_usart.h"
#include "stm32f4xx_ll_wwdg.h"
#include "stm32f4xx_ll_rng.h"
#include "stm32f4xx_ll_lptim.h"
#include "stm32f4xx_hal.h"

#endif

// Common HAL functions.
HAL_StatusTypeDef HAL_SystemInit(void);
void HAL_EthDelay(uint32_t Delay);

#endif /* _HAL_SYSTEM_H */
