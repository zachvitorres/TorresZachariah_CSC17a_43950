/*******************************************************************************
 * Zachariah Torres Chapter 6 Problem 7
 * -----------------------------------------------------------------------------
 * The purpose of this application is to convert any given temperature from
 * fahrenheit to celsius.
 ******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

void HW6_7() {

    float fTemp, cTemp;

    cout << "Temps 1-20 conversation.\n" << "------------------------\n";

    for(int count = 0; count <=20; count++)
    {
        fTemp = count;
        cTemp = ((.55556)*(fTemp - 32));
        cout << setprecision(2) << fixed << setw(10) << left << fTemp << cTemp << endl;
    }
}

