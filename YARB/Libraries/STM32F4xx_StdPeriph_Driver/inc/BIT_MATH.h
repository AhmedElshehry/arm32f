/*************************************************************/
/*		Author  :	maher									 */
/*		Date	:	25 oct 2021								 */
/*		Version	:	V02										 */
/*************************************************************/
#ifndef BIT_MATH_H
#define BIT_MATH_H

/* Set a certain bit in any register */
#define SET_BIT(VAR,BIT)		VAR |=  (1 << (BIT))		
/* Clear a certain bit in any register */
#define CLR_BIT(VAR,BIT)		VAR &= ~(1 << (BIT))		// disable bit
#define  GET_BIT(VAR,BIT)		(( VAR >> BIT) & 1 )
/* Toggle a certain bit in any register */
#define TOG_BIT(VAR,BIT)		VAR ^=  (1 << (BIT))
/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )
/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLR(REG,BIT) ( !(REG & (1<<BIT)) )
/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )
/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )







#endif
