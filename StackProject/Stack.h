/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Stack.h
 * Author: Kaushik
 *
 * Created on March 23, 2016, 2:45 PM
 */

#ifndef STACK_H
#define STACK_H

#include<string>
using namespace std;


class Stack
{
    struct item
    {
        string name;
        int value;
        item* prev;
    };
    
    item* StackPtr; //Always points to the top of the stack.
};


#endif /* STACK_H */

