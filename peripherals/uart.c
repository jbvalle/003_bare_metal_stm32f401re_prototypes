#include <stdint.h>
#define __IO volatile
typedef struct USART_t{

    __IO uint32_t USART_SR;
    __IO uint32_t USART_DR;
    __IO uint32_t USART_BRR;
    __IO uint32_t USART_CR1;
    __IO uint32_t USART_CR2;
    __IO uint32_t USART_CR3;
    __IO uint32_t USART_GTPR;
}USART_t;
