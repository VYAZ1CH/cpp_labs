#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
public:
    virtual ~Stack() {}

    virtual void push(const T& value) = 0; // Добавить элемент
    virtual T pop() = 0;                    // Удалить элемент
    virtual T top() const = 0;              // Получить верхний элемент
    virtual bool isEmpty() const = 0;       // Проверить, пуст ли стек
    virtual int size() const = 0;           // Получить размер стека
};

#endif