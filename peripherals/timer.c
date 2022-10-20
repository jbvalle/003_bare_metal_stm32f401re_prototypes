#include <stdint.h>

#define __IO volatile

typedef struct TIMx_t{
    __IO uint32_t TIMx_CR1;
    __IO uint32_t TIMx_CR2;
    __IO uint32_t TIMx_SMCR;
    __IO uint32_t TIMx_DIER;
    __IO uint32_t TIMx_SR;
    __IO uint32_t TIMx_EGR;
    __IO uint32_t TIMx_CCMR1;
    __IO uint32_t TIMx_CCMR2;
    __IO uint32_t TIMx_CCER;
    __IO uint32_t TIMx_CNT;
    __IO uint32_t TIMx_PSC;
    __IO uint32_t TIMx_ARR;
    __IO uint32_t res1;
    __IO uint32_t TIMx_CCR1;
    __IO uint32_t TIMx_CCR2;
    __IO uint32_t TIMx_CCR3;
    __IO uint32_t TIMx_CCR4;
    __IO uint32_t res2;
    __IO uint32_t TIMx_DCR;
    __IO uint32_t TIMx_DMAR;
    __IO uint32_t TIMx_OR;
}TIMx_t;
