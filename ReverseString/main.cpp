//
//  main.cpp
//  ReverseString
//
//  Created by Mariama Jaiteh on 10/19/16.
//  Copyright © 2016 Mariama Jaiteh. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string myString = "";
    cout << "Enter your sentence: " << endl;
    getline(cin,myString);
    for(int i = myString.length(); i >= 0; i--)
    {
        cout << myString[i];
    }
    cout << endl;
    
    
    
    
    
    return 0;
}
