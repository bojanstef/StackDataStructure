//
//  main.cpp
//  StackDataStructure
//
//  Created by Bojan Stefanovic on 2015-10-22.
//  Copyright © 2015 Bojan Stefanovic. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {

    int size_input = 1;
    std::cout << "Stack of size: " << size_input << std::endl;
    Stack my_stack = Stack(size_input);
    
    std::cout << "Push(24)... ";
    my_stack.push(24);
    std::cout << "Top of stack is: " << my_stack.peek() << std::endl;
    
    std::cout << "Push(42)... ";
    my_stack.push(42);
    std::cout << "Top of stack is: " << my_stack.peek() << std::endl;
    
    std::cout << "Push(667)... ";
    my_stack.push(667);
    std::cout << "Top of stack is: " << my_stack.peek() << std::endl;

    while (!(my_stack.isEmpty())) {
        std::cout << "Pop... ";
        my_stack.pop();
        std::cout << "Top of stack is: " << my_stack.peek() << std::endl;
    }
    
    std::cout << "Pop... ";
    my_stack.pop();
    std::cout << "Top of stack is: " << my_stack.peek() << std::endl;
    
    return 0;
}
