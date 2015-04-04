/*
 * File:   main.cpp
 * Author: zachvitorres
 *
 * Created on March 11, 2015, 6:15 PM
 */

#include "myheader.h"

/*
 *
 */
int main(int argc, char** argv) {

    unsigned short chap = 0;
    unsigned short prob = 0;
    bool repeat = false;
    bool probRep = false;



    do{
        cout << "Please enter your chapter choice[10,11,12]: ";
        cin  >> chap;

        switch(chap){

            case 10:
                do{
                    cout << "\nNow enter the problem you would like to see[4,6]: ";
                    cin  >> prob;

                    if(prob == 4)
                        HW10_4();

                    else if(prob == 6)
                        HW10_6();

                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                break;

            case 11:
                do{
                    cout << "\nNow enter the problem you would like to see[9]: ";
                    cin  >> prob;

                    if(prob == 9)
                        HW11_9();

                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                break;

            case 12:
                do{
                    cout << "\nNow enter the problem you would like to see[7,8,11]: ";
                    cin  >> prob;

                    if(prob == 7)
                        HW12_7();
                    else if (prob == 8)
                        HW12_8();
                    else if (prob == 11)
                        HW12_11();

                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                break;

            default:
                cout << "<INVALID ENTRY>\nPlease enter a valid chapter.\n";
                repeat = true;
        }
    }while(repeat);











    return 0;
}

