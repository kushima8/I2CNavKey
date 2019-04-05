/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef PWM_H
#define	PWM_H


#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */


    void PWM_GP1(uint8_t duty);
    void PWM_GP2(uint8_t duty);
    void PWM_GP3(uint8_t duty);
    void PWM_Start_CreateGammaTable(void);
    void PWM_CreateGammaTable(void);




#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

