typedef struct 
{
    volatile uint32_t MODER;    /*offset: 0x00      */
    volatile uint32_t OTYPER;   /*offset: 0x04      */
    volatile uint32_t OSPEEDR;  /*offset: 0x08      */
    volatile uint32_t PUPDR;    /*offset: 0x0C      */
    volatile uint32_t IDR;      /*offset: 0x10      */
    volatile uint32_t ODR;      /*offset: 0x14      */
    volatile uint32_t BSRR;     /*offset: 0x18      */
    volatile uint32_t LCKR;     /*offset: 0x1C      */
    volatile uint32_t AFRL;     /*offset: 0x20     */    
    volatile uint32_t AFRH;     /*offset: 0x24      */
} GPIO_TypeDef;

typedef struct
{
    volatile uint32_t DUMMY[12];
    volatile uint32_t AHB1ENR;      /*offset: 0x30*/ 
} RCC_TypeDef;

#define RCC_BASE    0x40023800
#define GPIOA_BASE  0x40020000

#define RCC     ((RCC_TypeDef*) RCC_BASE)
#define GPIOA   ((GPIO_TypeDef*)GPIOA_BASE)

#define GPIOAEN     (1U<<0)

#define PIN5        (1U<<5)

#define LED_PIN     PIN5

int main(void){
    RCC->AHB1ENR |= GPIOAEN;

    GPIOA->MODER &= ~(1U<<11);
    GPIOA->MODER |= (1U<<10);

    while(1){
        GPIOA->ODR ^= LED_PIN;

        for(int i=0;i<200000;i++){}
    }
}