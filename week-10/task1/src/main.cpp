#include "array_stack.h"
#include <iostream>
#include <string>

int main() {
    ArrayStack<std::string> stringStack;

    stringStack.push("Hello");
    stringStack.push("World");

    while (!stringStack.isEmpty()) {
        std::cout << stringStack.pop() << std::endl;
    }

    return 0;
}