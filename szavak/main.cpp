//
//  main.cpp
//  szavak
//
//  Created by sdaniel on 22/02/16.
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
    ifstream fileInput("szoveg.txt");
    string maxStr="";
    string tempStr="";

    // Get input from file
    while(!fileInput.eof()) {
        getline(fileInput,tempStr);
        if(tempStr.length()>maxStr.length()){
            maxStr=tempStr;
        }
    }

    cout<<"2. feladat"<<endl;
    cout<<"Leghosszabb szo: "<<maxStr<<", hossza: "<<maxStr.length()<<endl;
    fileInput.close();
}

void t3(){
    ifstream fileInput("szoveg.txt");

    int wordCounter=0;
    string tempStr="";


    // Get input from file
    int lineNum=0;
    while(!fileInput.eof()) {
        int mghNum=0, msgNum=0;
        getline(fileInput,tempStr);
       // cout<<tempStr<<endl;
        char mghCond[5]={'a','e','i','o','u'};
        char msgCond[21]={'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z','y'};

        for(int k=0; k<tempStr.length();k++){
            char charTemp=tempStr[k];
            for(int c=0; c<5;c++){
                if(charTemp==mghCond[c]){
                    mghNum++;
                }
            }
            for(int c=0; c<21;c++){
                if(charTemp==msgCond[c]){
                    msgNum++;
                }
            }
        }
        // cout<<"     mgh "<<mghNum<<endl;
        // cout<<"     msg "<<msgNum<<endl;

        if (mghNum>msgNum) {
            cout<<tempStr<<" ";
            wordCounter++;
        }

        lineNum++;
    }

    double percentage= double(wordCounter)/double(lineNum);
    percentage*=100;    // 1.00946
    percentage=int(percentage);

    cout<<endl; cout<<endl;
    cout<<"3. feladat"<<endl;
    cout<<"Ennyi darab: "<<wordCounter<<endl;
    cout<<"Osszes darab: "<<lineNum<<endl;
    cout<<"Ennyi szazalek: "<<percentage<<"%"<<endl;
    fileInput.close();
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

    fileInput.close();
    return 0;
}
