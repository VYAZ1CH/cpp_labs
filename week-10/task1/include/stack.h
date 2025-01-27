#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack {
public:
    virtual ~Stack() {}

    virtual void push(const T& value) = 0; // �������� �������
    virtual T pop() = 0;                    // ������� �������
    virtual T top() const = 0;              // �������� ������� �������
    virtual bool isEmpty() const = 0;       // ���������, ���� �� ����
    virtual int size() const = 0;           // �������� ������ �����
};

#endif