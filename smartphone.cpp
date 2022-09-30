#include "smartphone.h"

Smartphone::Smartphone(string model, int quality, int price)
{
    model_sp = model;
    quantity_sp = quality;
    price_sp = price;
}

Smartphone::Smartphone(const Smartphone& smart_ref)
{
    model_sp = string(smart_ref.model_sp);
    quantity_sp = int(smart_ref.quantity_sp);
    price_sp = int(smart_ref.price_sp);
}

Smartphone::Smartphone()
{
    model_sp = "Model";
    quantity_sp = 0;
    price_sp = 0;
}

Smartphone::Smartphone(string model)
{
    model_sp = model;
    quantity_sp = 0;
    price_sp = 0;
}

Smartphone::~Smartphone() {}

void Smartphone::input_smartp()
{
    cout << "Введите модель смартфона" << endl;
    cin >> model_sp;
    cout << "Введите число произведенных смартфонов" << endl;
    cin >> quantity_sp;
    cout << "Ввведите цену одного смартфона" << endl;
    cin >> price_sp;
}

void Smartphone::output_smartp()
{
    cout << "Модель смартфона: " << model_sp << endl;
    cout << "Число произведенных смарфонов = " << quantity_sp << endl;
    cout << "Цена одного смартфона = " << price_sp << endl;
}