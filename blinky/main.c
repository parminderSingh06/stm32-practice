#define PERIPHERAL_BASE (0x40000000)

#define AHB1_OFFSET (0x00020000)

#define AHB1_BASE (PERIPHERAL_BASE + AHB1_OFFSET)

#define GPIOA_OFFSET (0x0000UL)

#define GPIOA_BASE (AHB1_BASE + GPIOA_OFFSET)

#define RCC_OFFSET (0x3800UL)

#define RCC_BASE (GPIOA_BASE + RCC_OFFSET)

#define AHB1ENR_OFFSET (0X30UL)

#define RCC_AHB1ENR_R (*(volatile unsigned int *)) (RCC_BASE + AHB1ENR_OFFSET)

#define MODE_R_OFFSET (0x00UL)

#define GPIOA_MODE_R (*(volatile unsigned int *)) (GPIOA_BASE + MODE_R_OFFSET)

#define OD_R_OFFSET (0x14)

#define GPIOA_OD_R (*(volatile unsigned int *)) (GPIOA_BASE + OD_R_OFFSET)

#define PIN5 (1U << 5)

#define LED_PIN (PIN5)

int main(void){

}