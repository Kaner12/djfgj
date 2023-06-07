﻿// Калькулятор.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"kalk.h"
#include"Header.h"
using namespace std;

int main()
{
    setlocale(0, "");
    system("chcp 1251");
    kalk k = kalk();
    Proverka p = Proverka();
    int n = 0;
    float a = 0, b = 0, res = 0;
    cout << "Первое число" << endl;
    a = p.prov();
    cout << "Второе число" << endl;
    b = p.prov();
    do
    {
        cout <<"Выберети операцию\n1 сложение\n2 вычитание\n3 умножение\n4 деление\n5 изменить числа\n0 выход" << endl;
        n = p.prov();
        switch (n)
        {
        case 1:
            res = k.sub(a, b);
            cout << a << "+" << b << "=" << res << endl;
            break;
        case 2:
            res = k.add(a, b);
            cout << a << "-" << b << "=" << res << endl;
            break;
        case 3:
            res = k.mul(a, b);
            cout << a << "*" << b << "=" << res << endl;
            break;
        case 4:
            if (b != 0)
            {
                res = k.div(a, b);
                cout << a << "/" << b << "=" << res << endl;
            }
            else
            {
                while (b == 0) 
                {
                    cout << "Деление на 0 невозможно\n измените второе число" << endl;
                    b = p.prov();
                }
                res = k.div(a, b);
                cout << a << "/" << b << "=" << res << endl;
            }
            break;
        case 5:
            cout << "Первое число" << endl;
            a = p.prov();
            cout << "Второе число" << endl;
            b = p.prov();
            break;
        case 0:
            cout << "Выход";
            break;
        default:
            cout << "Некоректный выбор операции";
            break;
        }
    } while (n != 0);
    getchar();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
