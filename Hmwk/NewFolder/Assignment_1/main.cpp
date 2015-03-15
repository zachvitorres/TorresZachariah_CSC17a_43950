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
        cout << "Please enter your chapter choice[3,4,5,6,7,8]: ";
        cin  >> chap;
        
        
        
        switch(chap){
        
            case 3:
                do{
                    cout << "\nNow enter the problem you would like to see[12,13]: ";
                    cin  >> prob;
                    
                    if(prob == 12)
                        cout << "inside problem\n";
                    
                    else if(prob == 13)
                        cout << "inside problem\n";
                    
                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                    
            case 4:
                do{
                    cout << "\nNow enter the problem you would like to see[10]: ";
                    cin  >> prob;
                
                    if(prob == 10)
                        cout << "inside problem\n";
                    
                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                    
            case 5:
                do{
                    cout << "\nNow enter the problem you would like to see[11]: ";
                    cin  >> prob;
            
                    if(prob == 11)
                        cout << "inside problem\n";
                    
                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                    
            case 6:
                do{
                    cout << "\nNow enter the problem you would like to see[7]: ";
                    cin  >> prob;
                
                    if(prob == 7)
                        cout << "inside problem\n";
                    
                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                    
            case 7:
                do{
                    cout << "\nNow enter the problem you would like to see[6]: ";
                    cin  >> prob;
                
                    if(prob == 6)
                        cout << "inside problem\n";
                    
                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                
            case 8:
                do{
                    cout << "\nNow enter the problem you would like to see[7]: ";
                    cin  >> prob;
                
                    if(prob == 7)
                        cout << "inside problem\n";
                    
                    else{
                        cout << "<INVALID ENTRY>\nPlease enter a valid #.\n";
                        probRep = true;
                    }
                }while(probRep);
                    
            default:
                cout << "<INVALID ENTRY>\nPlease enter a valid chapter.\n";
                repeat = true;
        }
    }while(repeat);
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

