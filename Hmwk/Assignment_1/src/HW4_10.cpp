/*******************************************************************************
 * Zachariah Torres Chapter 4 Problem 10
 * -----------------------------------------------------------------------------
 * The purpose of this application is to calculate the amount of bulk discount
 * applied to a specific order.
 ******************************************************************************/

#include <iostream>


using namespace std;

void HW4_10(){

    const char RETAIL = 99;  //The price of each unit before discount
    const float LEVEL1 = .2, //The amount of discount from 10-19
                LEVEL2 = .3, //The amount of discount from 20-49
                LEVEL3 = .4, //The amount of discount from 50-99
                LEVEL4 = .5; //The amount of discount above 100

    unsigned short units;    //The amount of units to be purchased
    float total;             //The total due
    float discount;          //The amount of discount applied to the purchase

    cout << "This program calculates the discount applied to an order.\n\n";

    //Reads in the amount of units and checks if the input is greater than 0
    do{
        units = 0;
        cout << "Please enter the amount of units to be purchased: ";
        cin  >> units;

        if(units < 1)
            cout << "\nINVALID ENTRY: Units must be greater than 0.\n";

    }while(units  < 1);

    //These if else if statements calculate the total and discount depending
    //on the bulk amount
    if(units < 10)
        total = (units * RETAIL);

    else if(units >= 10 && units <= 19)
    {
        total = (units * RETAIL);
        discount = (total * LEVEL1);
        total = (total - discount);
    }
    else if(units >= 20 && units <=49)
    {
        total = (units * RETAIL);
        discount = (total * LEVEL2);
        total = (total - discount);
    }
    else if(units >= 50 && units <= 99)
    {
        total = (units * RETAIL);
        discount = (total * LEVEL3);
        total = (total - discount);
    }
    else
    {
        total = (units * RETAIL);
        discount = (total * LEVEL4);
        total = (total - discount);
    }

    //Outputting the results
    cout << "The total is: " << total << endl;
    cout << "With the discount of: " << discount;
}
