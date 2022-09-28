#include "creation.h"
#include <iostream>
#include <string>
using namespace std;

creation init_cn(int expenses_rent, int expenses_creation)
{
    creation creat;
    creat.expenses_rent = expenses_rent;
    creat.expenses_creation = expenses_creation;
    return creat;
}

void input_creat(class creation &creat)
{
    cout << "Введите постоянные издержки" << endl;
    cin >> creat.expenses_rent;
    cout << "Введите переменные издержки" << endl;
    cin >> creat.expenses_creation;
}

void output_creat(class creation &creat)
{
    cout << "Постоянные издержки = " << creat.expenses_rent << endl;
    cout << "Переменные издержки = " << creat.expenses_creation << endl;
}

int expenses_creat(class creation &creat)
{
    return creat.expenses_rent + creat.expenses_creation;
}