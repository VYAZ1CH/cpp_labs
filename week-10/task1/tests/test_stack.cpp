#include "array_stack.h"
#include <iostream>
#include <cassert>

void testStack() {
    ArrayStack<int> intStack;
    assert(intStack.isEmpty());
    intStack.push(1);
    intStack.push(2);
    assert(intStack.size() == 2);
    assert(intStack.top() == 2);
    assert(intStack.pop() == 2);
    assert(intStack.size() == 1);
    assert(intStack.top() == 1);
    assert(intStack.pop() == 1);
    assert(intStack.isEmpty());

    // Тестирование исключений
    try {
        intStack.pop();
    } catch (const std::out_of_range& e) {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }
}

int main() {
    testStack();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}