
#include <stdint.h>
typedef struct NVIC_t{
    volatile uint32_t ISER[8];
    volatile uint32_t ICER[8];
    volatile uint32_t ISPR[8];
    volatile uint32_t ICPR[8];
    volatile uint32_t IABR[8];
    volatile uint32_t IPR[8];
    volatile uint32_t STIR[8];
}NVIC_t;
