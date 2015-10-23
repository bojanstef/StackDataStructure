//
//  Stack.cpp
//  StackDataStructure
//
//  Created by Bojan Stefanovic on 2015-10-22.
//  Copyright © 2015 Bojan Stefanovic. All rights reserved.
//

#include "Stack.hpp"

// Default constructor, size size of 64.
Stack::Stack() {
    top = -1;
    int default_size = 64;
    this->size = default_size;
    stack = new int[default_size];
}

// Constructor with size parameter.
Stack::Stack(int size) {
    if (size < 1) {
        std::cout << "Stack size must be at least 1.\n";
        // TODO: This should throw an exception, and not allow instantiation.
    }
    top = -1;
    this->size = size;
    stack = new int[size];
}

// Destructor.
Stack::~Stack() {
    delete [] stack;
}

/*
 * If the top is at size, the stack is full and push is not allowed.
 * Top starts at -1, increases to 0, and then adds value to the array at index 0.
 */
void Stack::push(int value) {
    if (top == size) {
        std::cout << "Full stack. ";
    }
    else {
        top++;
        stack[top] = value;
    }
}

/*
 * If the top is at -1, the stack is empty.
 * Check what the value of the previously pushed integer.
 */
int Stack::peek() {
    if (top == -1) {
        std::cout << "Stack's empty. ";
        return -1; // TODO: This should throw an exception, not return -1, which could be a legitimate value in the stack.
    }
    else {
        return stack[top];
    }
}

/*
 * If the top is at -1, the stack is empty and pop is not allowed.
 * Decrease the top pointer, (ie. disregard the previous value, it can be overwritten now).
 */
void Stack::pop() {
    if (top == -1) {
        std::cout << "Empty stack. ";
    }
    else {
        top--;
    }
}
/*
 * If the top is at -1, then the stack is empty, otherwise it is not.
 */
bool Stack::isEmpty() {
    if (top == -1) {
        return true;
    }
    return false;
}
