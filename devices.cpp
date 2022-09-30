#include "devices.h"
#include <iostream>
#include <string>
using namespace std;

Devices::Devices(Smartphone* smartp, Laptop* lap)
{
    smartphone = smartp;
    laptop = lap;
}

Devices::Devices(const Devices& dev_ref)
{
    this->smartphone = new Smartphone(*dev_ref.smartphone);
    this->laptop = new Laptop(*dev_ref.laptop);
}

Devices::Devices()
{
    smartphone = new Smartphone("Model", 0, 0);
    laptop = new Laptop("Model", 0, 0);
}

Devices::Devices(Smartphone* smartp)
{
    smartphone = smartp;
    laptop = new Laptop("Model", 0, 0);
}

Devices::~Devices() {}


void Devices::input_dev(int* n_sp, int* n_lt)
{
    cout << "Введите число моделей смартфонов вашей компании" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "Введите модель смартфона" << endl;
        cin >> smartphone[i].model_sp;
        cout << "Введите число произведенных смартфонов" << endl;
        cin >> smartphone[i].quantity_sp;
        cout << "Ввведите цену одного смартфона" << endl;
        cin >> smartphone[i].price_sp;
    }
    cout << "Введите число моделей ноутбуков вашей компании" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "Введите модель ноутбука" << endl;
        cin >> laptop[i].model_lt;
        cout << "Введите число произведенных ноутбуков" << endl;
        cin >> laptop[i].quantity_lt;
        cout << "Введите цену одного ноутбука" << endl;
        cin >> laptop[i].price_lt;
    }
}

void Devices::output_dev(int n_sp, int n_lt)
{
    for (int i = 0; i < n_sp; i++)
    {
        cout << "Модель смартфона: " << smartphone[i].model_sp << endl;
        cout << "Число произведенных смарфонов = " << smartphone[i].quantity_sp << endl;
        cout << "Цена одного смартфона = " << smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "Модель ноутбука: " << laptop[i].model_lt << endl;
        cout << "Число произведенных ноутбуков = " << laptop[i].quantity_lt << endl;
        cout << "Цена одного ноутбука = " << laptop[i].price_lt << endl;
    }
}

int Devices::income_dev(int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += smartphone[i].price_sp * smartphone[i].quantity_sp;
    for (int i = 0; i < n_lt; i++)
        income_lt += laptop[i].price_lt * laptop[i].quantity_lt;
    return income_sp + income_lt;
}