#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

#include "company.h"
#include "devices.h"
#include "creation.h"
#include "laptop.h"
#include "smartphone.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    int exit = 1, n_sp = 0, n_lt = 0, n;
    init_sp("Model", 0, 0);
    init_lt("Model", 0, 0);
    smartphone* smartphone = new struct smartphone[10];
    laptop* laptop = new struct laptop[10];
    devices dev = init_ds(smartphone, laptop);
    creation creat = init_cn(0, 0);
    company comp = init_comp("Brand", dev, creat);
    input(comp, &n_sp, &n_lt);
    do
    {
        n = 0;
        system("cls");
        cout << "Выберите действие:\nПосчитать доход с продаж (1)\nПосчитать издержки компании (2)\nПосчитать прибыль компании (3)\nВывести все данные компании (4)\nВыход из программы (5)\n" << endl;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Доход с продаж =" << income(comp, n_sp, n_lt) << endl;
            _getch();
            break;
        case 2:
            cout << "Издержки компании =" << expenses(comp) << endl;
            _getch();
            break;
        case 3:
            cout << "Прибыль компании =" << profit(comp, n_sp, n_lt) << endl;
            _getch();
            break;
        case 4:
            output(comp, n_sp, n_lt);
            _getch();
            break;
        case 5:
            exit = 0;
            break;
        default:
            break;
        }
    } while (exit);
    return (0);
}