#include "laptop.h"

Laptop::Laptop(string model, int quality, int price)
{
    model_lt = model;
    quantity_lt = quality;
    price_lt = price;
}

Laptop::Laptop(const Laptop& lap_ref)
{
    model_lt = string(lap_ref.model_lt);
    quantity_lt = int(lap_ref.quantity_lt);
    price_lt = int(lap_ref.price_lt);
}

Laptop::Laptop()
{
    model_lt = "Model";
    quantity_lt = 0;
    price_lt = 0;
}

Laptop::Laptop(string model)
{
    model_lt = model;
    quantity_lt = 0;
    price_lt = 0;
}

Laptop::~Laptop() {}

void Laptop::input()
{
    cout << "Введите модель ноутбука" << endl;
    cin >> model_lt;
    cout << "Введите число произведенных ноутбуков" << endl;
    cin >> quantity_lt;
    cout << "Введите цену одного ноутбука" << endl;
    cin >> price_lt;
}

void Laptop::output()
{
    cout << "Модель ноутбука: " << model_lt << endl;
    cout << "Число произведенных ноутбуков = " << quantity_lt << endl;
    cout << "Цена одного ноутбука = " << price_lt << endl;
}