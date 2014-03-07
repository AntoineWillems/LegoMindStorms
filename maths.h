  /////////////////////////////
 // MATHEMATICAL PROCESSING //
/////////////////////////////

/*
 *
 Angular speed
 --------------
 AS = 2PI / TIME (radians per seconds)
 
 Linear speed
 -------------
 LS = (MOTOR_RAY * 2PI)/TIME (meters per seconds)
 LS = CARPET_SIZE/TIME
 *
 */

float rpmToAngularSpeed(int rpm)
{
    float timeForOneRotate = 60/rpm;
    return 2*PI/timeForOneRotate;
}

float angularToLinear(float as)
{
    return MOTOR_RAY*as;
}

float rpmToLinearSpeed(int rpm)
{
    return angularToLinear(rpmToAngularSpeed(rpm));
}

int computeDelayForSpeed(int motor_speed)
{
    float delay = CARPET_SIZE/rpmToLinearSpeed(motor_speed) * 1000;
	NumOut(0, LCD_LINE5, delay);
	return(delay);
}