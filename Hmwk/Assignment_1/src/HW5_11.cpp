/*******************************************************************************
 * Zachariah Torres Chapter 5 Problem 11
 * -----------------------------------------------------------------------------
 * The purpose of this program is to predict the population of a specific
 * organism.
 *
 ******************************************************************************/

#include <iostream>

using namespace std;

void HW5_11(){

    unsigned short startOrg,
                   dayMultiply;

    float dayIncrease, totalOrg;

    cout << "The program predicts the population of an organism.\n\n";

    do{
        cout << "Please the starting number of organisms: ";
        cin  >> startOrg;

        if(startOrg < 2)
            cout << "\nINVALID ENTRY: Number must be greater than 1.\n";
    }while(startOrg < 2);

    do{
        cout << "\nPlease enter the percentage of increase (ex. 20): ";
        cin  >> dayIncrease;

        if(dayIncrease < 1)
            cout << "\nINVALID ENTRY: Increase has to be greater 0.\n";
    }while(dayIncrease < 1);

    do{
        cout << "\nPlease enter the number of days they will multiply: ";
        cin  >> dayMultiply;

        if(dayMultiply < 1)
            cout << "\nINVALID ENTRY: The Days must be greater than 0.\n";
    }while(dayMultiply < 1);

    //Calculating the amount of increase
    dayIncrease = (dayIncrease * .01);

    for(char count = 1; count <= dayMultiply; count++)
    {
        totalOrg = (startOrg + (startOrg * dayIncrease));

        if(count < dayMultiply)
        cout << "The increase for day " << count << " is: " << totalOrg << endl;

        if(count == dayMultiply)
            cout << "The total population is " << totalOrg;
    }

}
