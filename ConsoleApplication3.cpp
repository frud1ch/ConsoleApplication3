// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template<typename A> class Human {
public:
    int health;
    A name;
};
using namespace std;

int main()
{
    Human<int> One;
    return 0;
}
