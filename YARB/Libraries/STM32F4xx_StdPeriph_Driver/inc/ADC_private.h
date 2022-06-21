/**********************************************************************/
/*  name       : Ahmed elshehry                                       */
/*  SW         :  ADC                                                   */
/*  version    :  V01                                                 */
/*  DATA       : 15/2/2022                                            */
/**************************************************************************/

#ifndef ADC_PRIVATE_H 
#define ADC_PRIVATE_H


typedef struct 
{
	u32 volatile     SR    ;
	u32 volatile     CR1   ;
	u32 volatile     CR2   ;
	u32 volatile     SMPR1 ;
	u32 volatile     SMPR2 ;
	u32 volatile     JOFR1 ;
	u32 volatile     JOFR2 ;
	u32 volatile     JOFR3 ;
	u32 volatile     JOFR4 ;
	u32 volatile     HTR   ;
	u32 volatile     LTR   ;
	u32 volatile     SQR1  ;
	u32 volatile     SQR2  ;
	u32 volatile     SQR3  ;
	u32 volatile     JSQR  ;
	u32 volatile     JDR1  ;
	u32 volatile     JDR2  ;
	u32 volatile     JDR3  ;
	u32 volatile     JDR4  ;
	u32 volatile     DR    ;
	
	
}ADC_T  ;

typedef struct 
{
	u32 volatile      CSR ;
	u32 volatile      CCR ;
	u32 volatile      CDR ;
	
}ADC_COMMON;

#define    ADC1          ((ADC_T * )0x40012000+0x000)       
#define    ADC2          ((ADC_T * )0x40012000+0x100)       
#define    ADC3          ((ADC_T * )0x40012000+0x200)       
#define    ADC        ((ADC_COMMON * )0x40012000+0x300)       


#endif
