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

void Stack::push(string name, int value)
{
    item* n = new item;
    
    n->name = name;
    n->value = value;
    
    if(StackPtr == NULL)
    {
        StackPtr = n;
        StackPtr->prev = NULL;
    }
    
    else
    {
        n->prev = StackPtr;
        StackPtr = n;
    }
}

void Stack::ReadItem(item* r)
{
    cout<<"--------------\n";
    
    cout<<"Name: "<<r->name<<"\n";
    cout<<"Value: "<<r->value<<"\n";

    cout<<"--------------\n";      
}

void Stack::pop()
{
    if(StackPtr == NULL)
    {
        cout<<"Stack is empty \n";
    }
    
    else
    {
        item* p = StackPtr;
        ReadItem(p);
        StackPtr = StackPtr->prev;
        delete p;
    }
}

void Stack::Print()
{
    item* p = StackPtr;
    
    while(p != NULL)
    {
        ReadItem(p);
        p = p->prev;
    }
}