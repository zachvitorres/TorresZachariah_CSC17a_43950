/*
 *
 *
 *
 *
 */

#include "myheader.h"
void HW3_12(){

	/**************************************************************************
	 * The purpose of this program is to output the monthly sales report of a
	 * business. S = T/1.06 where S is the product sales and T is the total
	 * income (product sales + sales tax)
	 *************************************************************************/

	const float TOTALTAXES  = 1.06, //Holds the tax variable
	                STATETAXES  = 0.04, //Holds the state taxes
	                COUNTYTAXES = 0.02; //Holds the county taxes

	    char month[10];          //Holds the month of the report
	    unsigned short year = 0; //Holds the year of the report
	    float totalCollected,    //Holds the total collected for the month
	          sales,             //Holds the total amount of sales
	          stateTax,          //Holds the total amount of state taxes
	          countyTax,         //Holds the total amount of county taxes
	          totalTax;          //Holds the total amount of taxes

	    cout << "The purpose of this program is to output the monthly " <<
	    		"sales report of a business. S = T/1.06 where S is the " <<
	    		"product sales and T is the total income " <<
	    		"(product sales + sales tax)\n\n";

	    //Receiving input for month
	    cout << "Please enter the month: ";
	    cin  >> month;


	    //Receiving input for year
	    do{
	    cout << "\nPlease enter the year: ";
	    cin  >> year;

	    //Displays an error message
	    if(year < 1900)
	        cout << "\nInvalid Entry: Year must be after the 19th century.\n";
	    }while(year < 1900);

	    //Receiving input for totalCollected
	    do{
	    cout << "\nPlease enter the total collected for the year: ";
	    cin  >> totalCollected;

	    //Displays an error message
	    if(totalCollected < 0)
	        cout << "\nInvalid Entry: Total Collected can not be less than 0.\n";
	    }while(totalCollected < 0);

	    //calculating sales tax report
	    sales = (totalCollected / TOTALTAXES);
	    cout << sales << endl;
	    totalTax = (totalCollected - sales);
	    stateTax = (sales * STATETAXES);
	    countyTax = (sales * COUNTYTAXES);

	    //Outputting formatted output
	    cout <<  endl << setprecision(2) << fixed << left << "Month:  " << month <<
	            "\n-------------------" << endl << setw(20) << "Total Collected:" <<
	            "$" << right << setw(10) << totalCollected << endl << left <<
	            setw(20) << "Sales:" << "$" << right << setw(10) << sales << endl <<
	            left << setw(20) << "County Sales Tax:" << "$" << right <<
	            setw(10) << countyTax << endl << left << setw(20) <<
	            "State Sales Tax" << "$" << right << setw(10) << stateTax << endl <<
	            left << setw(20) << "Total Sales Tax" << "$" << right << setw(10) <<
	            totalTax << endl;
}


