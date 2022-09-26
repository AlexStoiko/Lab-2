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

void input(struct company& comp, int* n_sp, int* n_lt)
{
    cout << "Введите название компании" << endl;
    cin >> comp.brand;
    cout << "Введите число моделей смартфонов вашей компании" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "Введите модель смартфона" << endl;
        cin >> comp.devaces.smartphone[i].model_sp;
        cout << "Введите число произведенных смартфонов" << endl;
        cin >> comp.devaces.smartphone[i].quantity_sp;
        cout << "Ввведите цену одного смартфона" << endl;
        cin >> comp.devaces.smartphone[i].price_sp;
    }
    cout << "Введите число моделей ноутбуков вашей компании" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "Введите модель ноутбука" << endl;
        cin >> comp.devaces.laptop[i].model_lt;
        cout << "Введите число произведенных ноутбуков" << endl;
        cin >> comp.devaces.laptop[i].quantity_lt;
        cout << "Введите цену одного ноутбука" << endl;
        cin >> comp.devaces.laptop[i].price_lt;
    }
    cout << "Введите постоянные издержки" << endl;
    cin >> comp.creation.expenses_rent;
    cout << "Введите переменные издержки" << endl;
    cin >> comp.creation.expenses_creation;
}

void output(struct company& comp, int n_sp, int n_lt)
{
    cout << "Бренд компании: " << comp.brand << endl;
    for (int i = 0; i < n_sp; i++)
    {
        cout << "Модель смартфона: " << comp.devaces.smartphone[i].model_sp << endl;
        cout << "Число произведенных смарфонов = " << comp.devaces.smartphone[i].quantity_sp << endl;
        cout << "Цена одного смартфона = " << comp.devaces.smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "Модель ноутбука: " << comp.devaces.laptop[i].model_lt << endl;
        cout << "Число произведенных ноутбуков = " << comp.devaces.laptop[i].quantity_lt << endl;
        cout << "Цена одного ноутбука = " << comp.devaces.laptop[i].price_lt << endl;
    }
    cout << "Постоянные издержки = " << comp.creation.expenses_rent << endl;
    cout << "Переменные издержки = " << comp.creation.expenses_creation << endl;
}

int income(struct company& comp, int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += comp.devaces.smartphone[i].price_sp * comp.devaces.smartphone[i].quantity_sp;
    for (int i = 0; i < n_lt; i++)
        income_lt += comp.devaces.laptop[i].price_lt * comp.devaces.laptop[i].quantity_lt;
    return income_sp + income_lt;
}

int expenses(struct company& comp)
{
    return comp.creation.expenses_rent + comp.creation.expenses_creation;
}

int profit(struct company& comp, int n_sp, int n_lt)
{
    return income(comp, n_sp, n_lt) - expenses(comp);
}