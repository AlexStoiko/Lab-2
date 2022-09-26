#include "devices.h"
#include <iostream>
#include <string>
using namespace std;

devices init_ds(smartphone* smartphone, laptop* laptop)
{
    devices dev;
    dev.smartphone = smartphone;
    dev.laptop = laptop;
    return dev;
}

void input_dev(struct devices &dev, int* n_sp, int* n_lt)
{
    cout << "Введите число моделей смартфонов вашей компании" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "Введите модель смартфона" << endl;
        cin >> dev.smartphone[i].model_sp;
        cout << "Введите число произведенных смартфонов" << endl;
        cin >> dev.smartphone[i].quantity_sp;
        cout << "Ввведите цену одного смартфона" << endl;
        cin >> dev.smartphone[i].price_sp;
    }
    cout << "Введите число моделей ноутбуков вашей компании" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "Введите модель ноутбука" << endl;
        cin >> dev.laptop[i].model_lt;
        cout << "Введите число произведенных ноутбуков" << endl;
        cin >> dev.laptop[i].quantity_lt;
        cout << "Введите цену одного ноутбука" << endl;
        cin >> dev.laptop[i].price_lt;
    }
}

void output_dev(struct devices &dev, int n_sp, int n_lt)
{
    for (int i = 0; i < n_sp; i++)
    {
        cout << "Модель смартфона: " << dev.smartphone[i].model_sp << endl;
        cout << "Число произведенных смарфонов = " << dev.smartphone[i].quantity_sp << endl;
        cout << "Цена одного смартфона = " << dev.smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "Модель ноутбука: " << dev.laptop[i].model_lt << endl;
        cout << "Число произведенных ноутбуков = " << dev.laptop[i].quantity_lt << endl;
        cout << "Цена одного ноутбука = " << dev.laptop[i].price_lt << endl;
    }
}

int income_dev(struct devices &dev, int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += dev.smartphone[i].price_sp * dev.smartphone[i].quantity_sp;
    for (int i = 0; i < n_lt; i++)
        income_lt += dev.laptop[i].price_lt * dev.laptop[i].quantity_lt;
    return income_sp + income_lt;
}