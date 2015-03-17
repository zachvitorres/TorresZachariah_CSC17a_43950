/*******************************************************************************
 * Zachariah Torres 3.13
 * ------------------------------------------------------------------------
 * This program calculates the property tax on a property sale
 ******************************************************************************/
#include "myheader.h"


void HW3_13(){

    const float PROPTAX  = 0.64, //Holds the property tax
    			ASSESS = 0.6;

    float propertyTax,   //The amount of tax collected .64 per $100
    	  actualVal,     //The value being charged by seller
    	  assessVal;     //60% of the actual value

    cout << "This program calculates tax per acre\n\n";

    do{
    	cout << "Please enter the actual value of the property: ";
    	cin  >> actualVal;

    	if(actualVal <= 0)
    		cout << "<INVALID ENTRY>\n\n";
    }while(actualVal <= 0);

    assessVal = actualVal * ASSESS;
    propertyTax = PROPTAX * (assessVal / 100);

    cout << "The actual value is " << actualVal << " the assessment " <<
    		"value is " << assessVal << "\nand the amount of property " <<
    		"tax is " << propertyTax;
}

