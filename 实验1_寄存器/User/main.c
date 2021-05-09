 #include"stm32f10x.h"
 
 typedef unsigned int u32;
 
 void SystemInit()
 {
	 
 }
 
 void delay(u32 i)
 {
		while(i--);
 }
 int main()
 {
		RCC_APB2ENR |= 1 << 4;
		GPIOC_CRL &=~(0x0f<<(4*0));
		GPIOC_CRL |=(3<<(4*0));
		GPIOC_BSRR = (1<<(16+0));
		while(1)
		{
				GPIOC_BSRR = (1<<(16+0));
				delay(0xfffff);
				GPIOC_BSRR = (1<<(0));
				delay(0xfffff);
		}
 
 }

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
/* 
 
  #include"stm32f10x.h"
 
 typedef unsigned int u32;
 
 void SystemInit()//stm32 start with this current function
 {
	 
 }
 
 void delay(u32 i)
 {
		while(i--);
 }
 int main()
 {
		RCC_APB2ENR |= 1 << 4;//clock
		GPIOC_CRL &=~(0x0f<<(4*0));//the two B contral one pin
		GPIOC_CRL |=(3<<(4*0));//the max output speed is 50MHZ
	 //SETup the mode of GPIO
		GPIOC_BSRR = (1<<(16+0));//setup the sixteenth bit at 1;
		while(1)
		{
				GPIOC_BSRR = (1<<(16+0));
				delay(0xfffff);
				GPIOC_BSRR = (1<<(0));
				delay(0xfffff);
		}
 
 }*/




