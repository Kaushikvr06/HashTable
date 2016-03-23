#include<iostream>
#include<string>
#include <cstdlib>

#include "stack.h"

using namespace std;

int main()
{
    Stack Kaushik;
    Kaushik.push("Kaushik",3);
    Kaushik.push("Coffee",0);
    Kaushik.push("Lunch",0);
    Kaushik.push("Videos",6);
    
    Kaushik.Print();
    cout<<"Popping \n";
    Kaushik.pop();
    cout<<"Popping \n";
    Kaushik.pop();
    cout<<"Popping \n";
    Kaushik.pop();
    cout<<"Popping \n";
    Kaushik.pop();
    cout<<"Popping \n";
    Kaushik.pop();
    
    cout<<"-- New Stack -- \n";
    
    Kaushik.push("Kaushik",3);
    Kaushik.push("Books",5);
    Kaushik.Print();
    
    return 0;
}