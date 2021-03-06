#ifndef MotorPID_h

#define MotorPID_h



#include "Arduino.h"



class MotorPID

{

   public:

        MotorPID(int ,int,char,int);
        void errorcheck();
        int limit ;
        int x;        
        void setPID(float,float,float);             
        float pidTerm_scaled ; 

    private:
        //pins
        int dir;      
        int pwm;
        int limiter ;                
        char analog ;        
        int pidlow ;      
        
        void PIDcalculation();
        
        double Kp  ;
        double Ki  ;
        double Kd  ;

        float last_error;
        float error;
        float changeError ;
        float totalError ;
        float pidTerm ;
        float pidTerm_scaled ;
        
        int setpoint ;        
        int angle ;        
        int pot ;             
        
             
};



#endif
