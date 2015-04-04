#include "myheader.h"

char *getInput(char[]);
int *cntVwlCns(char[], int);

void HW10_6(){
    bool retry = true;
    char *usrWord;
    char usrWrd[51];
    int length = 0;
    int vowels = 0;
    int cons = 0;
    int *vwlCns;
    char menu, menuRetry;
    do{
        cout << "A) Count the number of vowels in the string\n" 
             << "B) Count the number of consonants in the string\n"
             << "C) Count both the vowels and consonants in the string\n"
             << "D) Enter another string\n"
             << "E) Exit the program\n\n"
             << "Please enter your menu choice: ";
       
        cin  >> menu;
        menu = tolower(menu);
        
        if(menu == 'a'){
            usrWord = getInput(usrWrd);
            cout << usrWord;
            length = strlen(usrWord);
            vwlCns = cntVwlCns(usrWord, length);
            vowels = vwlCns[0];
            
            cout << "There are " << vowels << " vowels\n";
            cout << "Would you like to return to the menu?[Y/N]: ";
            cin  >> menuRetry;
            menuRetry = toupper(menuRetry);
            menuRetry == 'Y' ? retry = true : retry = false;
        }
        else if(menu == 'b'){
            usrWord = getInput(usrWrd);
            length = strlen(usrWord);
            vwlCns = cntVwlCns(usrWord, length);
            cons = vwlCns[1];
            
            cout << "There are " << cons << " consonants\n";
            
            cout << "Would you like to return to the menu?[Y/N]: ";
            cin  >> menuRetry;
            menuRetry = toupper(menuRetry);
            menuRetry == 'Y' ? retry = true : retry = false;
        }
        else if(menu == 'c'){
            usrWord = getInput(usrWrd);
            length = strlen(usrWord);
            vwlCns = cntVwlCns(usrWord, length);
            vowels = vwlCns[0];
            cons = vwlCns[1];
            
            cout << "There are " << vowels << " vowels and " << cons << 
                    " consonants\n";
            cout << "\nWould you like to return to the menu?[Y/N]: ";
            cin  >> menuRetry;
            menuRetry = toupper(menuRetry);
            menuRetry == 'Y' ? retry = true : retry = false;
        }
        else if(menu == 'd'){
            usrWord = getInput(usrWrd);
            length = strlen(usrWord);
        }
        else if(menu == 'e'){
            retry = false;
        }
        else{
            cout << "<INVALID ENTRY>\nPlease enter another choice\n\n";
        }
        cout << endl;
     
    }while(retry);
}
char *getInput(char usrWrd[]){
    
    cout << "Please enter the character string up to 50 characters: ";
    cin  >> usrWrd;
    return usrWrd;
}

int *cntVwlCns(char usrWord[], int length){
    int vwlCns[2] = {0.0};
    char a = 'a';
    char e = 'e';
    char i = 'i';
    char o = 'o';
    char u = 'u';
    
    for(int count = 0; count < length; count ++){
        if(usrWord[count] == a || usrWord[count] == e || usrWord[count] == i || 
           usrWord[count] == o || usrWord[count] == u)
            vwlCns[0]++;
        else
            vwlCns[1]++;
    }
    return vwlCns;
}
