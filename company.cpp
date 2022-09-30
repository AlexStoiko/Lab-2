#include "company.h"
#include <iostream>
#include <string>
using namespace std;

Company::Company(const Company& comp)
{
    brand = string(comp.brand);
    devices = Devices(comp.devices);
    creation = Creation(comp.creation);
}

Company::Company(string brandc, Devices dev, Creation creat)
{
    brand = brandc;
    devices = dev;
    creation = creat;
}

Company::Company()
{
    devices = Devices();
    /*
    devices.smartphone->model_sp = "Model";
    devices.smartphone->price_sp = 0;
    devices.smartphone->quantity_sp = 0;
    devices.laptop->model_lt = "Model";
    devices.laptop->price_lt = 0;
    devices.laptop->quantity_lt = 0;
    creation.expenses_creation = 0;
    creation.expenses_rent = 0;
    */
    creation = Creation();
    brand = "Brand";
}

Company::Company(string brandc)
{
    brand = brandc;
    devices = Devices();
    creation = Creation();
}

Company::~Company() {}

void Company::input(int* n_sp, int* n_lt)
{
    cout << "Введите название компании" << endl;
    cin >> brand;
    cout << "Введите число моделей смартфонов вашей компании" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "Введите модель смартфона" << endl;
        cin >> devices.smartphone[i].model_sp;
        cout << "Введите число произведенных смартфонов" << endl;
        cin >> devices.smartphone[i].quantity_sp;
        cout << "Ввведите цену одного смартфона" << endl;
        cin >> devices.smartphone[i].price_sp;
    }
    cout << "Введите число моделей ноутбуков вашей компании" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "Введите модель ноутбука" << endl;
        cin >> devices.laptop[i].model_lt;
        cout << "Введите число произведенных ноутбуков" << endl;
        cin >> devices.laptop[i].quantity_lt;
        cout << "Введите цену одного ноутбука" << endl;
        cin >> devices.laptop[i].price_lt;
    }
    cout << "Введите постоянные издержки" << endl;
    cin >> creation.expenses_rent;
    cout << "Введите переменные издержки" << endl;
    cin >> creation.expenses_creation;
}

void Company::output(int n_sp, int n_lt)
{
    cout << "Бренд компании: " << brand << endl;
    for (int i = 0; i < n_sp; i++)
    {
        cout << "Модель смартфона: " << devices.smartphone[i].model_sp << endl;
        cout << "Число произведенных смарфонов = " << devices.smartphone[i].quantity_sp << endl;
        cout << "Цена одного смартфона = " << devices.smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "Модель ноутбука: " << devices.laptop[i].model_lt << endl;
        cout << "Число произведенных ноутбуков = " << devices.laptop[i].quantity_lt << endl;
        cout << "Цена одного ноутбука = " << devices.laptop[i].price_lt << endl;
    }
    cout << "Постоянные издержки = " << creation.expenses_rent << endl;
    cout << "Переменные издержки = " << creation.expenses_creation << endl;
}

int Company::income(int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += devices.smartphone[i].price_sp * devices.smartphone[i].quantity_sp;
    for (int i = 0; i < n_lt; i++)
        income_lt += devices.laptop[i].price_lt * devices.laptop[i].quantity_lt;
    return income_sp + income_lt;
}

int Company::expenses()
{
    return creation.expenses_rent + creation.expenses_creation;
}

int Company::profit(int n_sp, int n_lt)
{
    return income(n_sp, n_lt) - expenses();
}