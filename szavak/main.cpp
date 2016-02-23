//
//  main.cpp
//  szavak
//
//  Created by sdaniel on 23/02/16.
//  Copyright © 2016 Daniel Spindelbauer. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream fileInput("szoveg.txt");

void t1(){
    string userInput="";
    char charCond[5]={'a','e','i','o','u'};
    int result=0;
    
    cout<<"1. feladat"<<endl;
    cout<<"Type in a word: ";
    cin>>userInput;
    userInput="loremipsum"; // DEBUG
    
    for(int i=0; i<userInput.length();i++){
        char charTemp=userInput[i];
        for(int c=0; c<5;c++){
            if(charTemp==charCond[c]){
                result++;
            }
        }
    }
    if(result>0){
        cout<<"Van benne maganhangzo."<<endl;
    }else{
        cout<<"Nincs benne maganhangzo."<<endl;
    }
}

void t2(){
    string maxStr="";
    string tempStr="";
    
    // Get input from file
    int i=0;
    while(!fileInput.eof()) {
        getline(fileInput,tempStr);
        if(tempStr.length()>maxStr.length()){
            maxStr=tempStr;
        }
        i++;
    }
    
    cout<<"2. feladat"<<endl;
    cout<<"Leghosszabb szo: "<<maxStr<<", hossza: "<<maxStr.length()<<endl;
}

void t3(){
    int mghNum=0, msgNum=0, wordCounter=0;
    string tempStr="";
    
    // Get input from file
    int i=0;
    while(!fileInput.eof()) {
        getline(fileInput,tempStr);
        
        
        
        
        
        
        
        i++;
    }
    double percentage=0;
    percentage= wordCounter/i;
    
    cout<<"3. feladat"<<endl;
    cout<<"Ennyi darab: "<<wordCounter<<endl;
    cout<<"ˆsszes darab: "<<i<<endl;
    cout<<"Ennyi szazalek: "<<percentage<<endl;
}

int main(){
    // Get input from file
    //  int i=0;
    //  while(!fileInput.eof()) {
    //getline(fileInput,ip[i]);
    //     i++;
    //}
    
    
    t1();
    cout<<endl;
    t2();
    cout<<endl;
    t3();
    return 0;
}