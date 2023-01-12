// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

template<typename A,typename B> class Human {
public:
    B health;
    A name; 
    A getter(int) {
        return name;
    }
    B getter(char) {
        return health;
    }
};
using namespace std;

int main()
{
    Human<string, int> One;
    Human<char, double> Two;
    One.name = "Igor";
    Two.name = 'R';
    std::cout << One.getter(4);
    return 0;
}
