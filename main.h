  ////////////////////////
 // DEFINING CONSTANTS //
////////////////////////

#define VALID_COLOR true
#define INVALID_COLOR false

#define CARPET_SIZE 12.5 //centimeters (cm)
#define MOTOR_RAY 2 //centimeters (cm)

#define DEFAULT_CARPET_SPEED 20 //rotation per minuts (rpm)
#define DEFAULT_ARM_SPEED 120 //rotation per minuts (rpm)

#include "maths.h"

enum State {
    INIT, STATE1, STATE2, STATE3, STATE4
};

struct Color
{
	string name;
	bool isValid;
};

void initParams();
void initColors();

task Eject1();
task Eject2();
task Eject3();

task buttonLeftEvent();
task buttonRightEvent();
task buttonCenterEvent();
task colorAnalysis();

void startOrStop();
void startRobot();
void stopRobot();

void updateCarpetSpeed();

void displayInterface();
string isSelected(int optionNum);
string isInvalid(int colorIndex);
string isRunning();