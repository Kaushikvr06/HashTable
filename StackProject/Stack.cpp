#include<iostream>
#include<string>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
    StackPtr = NULL;
}
Stack::~Stack()
{
    item* p1;
    item* p2;
    
    p1 = StackPtr;
    while(p1 != NULL)
    {
        p2 = p1;
        p1 = p1->prev;
        p2->prev = NULL;
        delete p2;
    }
}