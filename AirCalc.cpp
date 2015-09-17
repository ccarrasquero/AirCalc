/*
*---------------------------------------------------------
* Author: Charles Carrasquero
*   File: AirCalc.cpp
*---------------------------------------------------------
*/

/*
R01_001_00818681 
Algorithm for running the Temperature Calculation Program:
1. What is the desired Starting Temperature?
1a. Input Starting Temperature
2. What is the desired Ending Temperature?
2a. Input Ending Temperature
3. Is Starting Temperature less than Ending Temperature?
3a. If so print an error message
4. Use formula  to compute desired values
5. Add 1 degree to Output from Starting Temperature to Ending Temperature
5a. Print results

*/

#include "stdafx.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int StartingTemperature, EndingTemperature;
    float velocity;

    //R01_002_00818681 
    cout << "What is the desired Starting Temperature?: ";
    cin >> StartingTemperature;

    cout << "What is the desired Ending Temperature?: ";
    cin >> EndingTemperature;

    //R01_003_00818681 

    if (StartingTemperature >= EndingTemperature) {
        cout << "ERROR MESSAGE";
    }
    //R01_004_00818681 
    for (int i = StartingTemperature; i <= EndingTemperature; i++){
        velocity = 331.3 + 0.61 + i;
        cout << "At " << i << " degrees Celsius the velocity of sound is " << velocity << " m/s" <<endl;
    }

    cin >> velocity;
    return 0;
}

/*
R01_005_00818681 
*---------------------------------------------------------
What is the desired Starting Temperature?: 0
What is the desired Ending Temperature?: 5
At 0 degrees Celsius the velocity of sound is 331.91 m/s
At 1 degrees Celsius the velocity of sound is 332.91 m/s
At 2 degrees Celsius the velocity of sound is 333.91 m/s
At 3 degrees Celsius the velocity of sound is 334.91 m/s
At 4 degrees Celsius the velocity of sound is 335.91 m/s
At 5 degrees Celsius the velocity of sound is 336.91 m/s

What is the desired Starting Temperature?: -3
What is the desired Ending Temperature?: 1
At -3 degrees Celsius the velocity of sound is 328.91 m/s
At -2 degrees Celsius the velocity of sound is 329.91 m/s
At -1 degrees Celsius the velocity of sound is 330.91 m/s
At 0 degrees Celsius the velocity of sound is 331.91 m/s
At 1 degrees Celsius the velocity of sound is 332.91 m/s

What is the desired Starting Temperature?: 6
What is the desired Ending Temperature?: 7
At 6 degrees Celsius the velocity of sound is 337.91 m/s
At 7 degrees Celsius the velocity of sound is 338.91 m/s

What is the desired Starting Temperature?: 30
What is the desired Ending Temperature?: 34
At 30 degrees Celsius the velocity of sound is 361.91 m/s
At 31 degrees Celsius the velocity of sound is 362.91 m/s
At 32 degrees Celsius the velocity of sound is 363.91 m/s
At 33 degrees Celsius the velocity of sound is 364.91 m/s
At 34 degrees Celsius the velocity of sound is 365.91 m/s
*---------------------------------------------------------
*/