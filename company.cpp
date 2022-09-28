#include "company.h"
#include <iostream>
#include <string>
using namespace std;

company init_comp(string brand, devices devaces, creation creation)
{
    company comp;
    comp.brand = brand;
    comp.devaces = devaces;
    comp.creation = creation;
    return comp;
}

void company::input(int* n_sp, int* n_lt)
{
    cout << "Введите название компании" << endl;
    cin >> brand;
    cout << "Введите число моделей смартфонов вашей компании" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "Введите модель смартфона" << endl;
        cin >> devaces.smartphone[i].model_sp;
        cout << "Введите число произведенных смартфонов" << endl;
        cin >> devaces.smartphone[i].quantity_sp;
        cout << "Ввведите цену одного смартфона" << endl;
        cin >> devaces.smartphone[i].price_sp;
    }
    cout << "Введите число моделей ноутбуков вашей компании" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "Введите модель ноутбука" << endl;
        cin >> devaces.laptop[i].model_lt;
        cout << "Введите число произведенных ноутбуков" << endl;
        cin >> devaces.laptop[i].quantity_lt;
        cout << "Введите цену одного ноутбука" << endl;
        cin >> devaces.laptop[i].price_lt;
    }
    cout << "Введите постоянные издержки" << endl;
    cin >> creation.expenses_rent;
    cout << "Введите переменные издержки" << endl;
    cin >> creation.expenses_creation;
}

void company::output(int n_sp, int n_lt)
{
    cout << "Бренд компании: " << brand << endl;
    for (int i = 0; i < n_sp; i++)
    {
        cout << "Модель смартфона: " << devaces.smartphone[i].model_sp << endl;
        cout << "Число произведенных смарфонов = " << devaces.smartphone[i].quantity_sp << endl;
        cout << "Цена одного смартфона = " << devaces.smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "Модель ноутбука: " << devaces.laptop[i].model_lt << endl;
        cout << "Число произведенных ноутбуков = " << devaces.laptop[i].quantity_lt << endl;
        cout << "Цена одного ноутбука = " << devaces.laptop[i].price_lt << endl;
    }
    cout << "Постоянные издержки = " << creation.expenses_rent << endl;
    cout << "Переменные издержки = " << creation.expenses_creation << endl;
}

int company::income(int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += devaces.smartphone[i].price_sp * devaces.smartphone[i].quantity_sp;
    for (int i = 0; i < n_lt; i++)
        income_lt += devaces.laptop[i].price_lt * devaces.laptop[i].quantity_lt;
    return income_sp + income_lt;
}

int company::expenses()
{
    return creation.expenses_rent + creation.expenses_creation;
}

int company::profit(int n_sp, int n_lt)
{
    return income(n_sp, n_lt) - expenses();
}