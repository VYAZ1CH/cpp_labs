#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include "stack.h"
#include <vector>
#include <stdexcept>

template <typename T>
class ArrayStack : public Stack<T> {
private:
    std::vector<T> elements;

public:
    void push(const T& value) override {
        elements.push_back(value);
    }

    T pop() override {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty");
        }
        T value = elements.back();
        elements.pop_back();
        return value;
    }

    T top() const override {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty");
        }
        return elements.back();
    }

    bool isEmpty() const override {
        return elements.empty();
    }

    int size() const override {
        return elements.size();
    }
};

#endif