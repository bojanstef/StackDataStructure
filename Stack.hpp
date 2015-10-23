//
//  Stack.hpp
//  StackDataStructure
//
//  Created by Bojan Stefanovic on 2015-10-22.
//  Copyright © 2015 Bojan Stefanovic. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <iostream>

class Stack {
    
private:
    int top;            // Index of the last element on stack.
    int size;           // The maximum size of the stack.
    int *stack;         // Underlying array of the stack.
    
public:
    Stack();            // Default constructor (size=64).
    Stack(int size);    // Constructor with size parameter.
    ~Stack();           // Destructor.
    
    // Methods
    void push(int value);
    int peek();
    void pop();
    bool isEmpty();
    
};

#endif /* Stack_hpp */
