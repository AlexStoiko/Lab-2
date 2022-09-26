#include "laptop.h"

laptop init_lt(string model, int quality, int price)
{
    laptop lap;
    lap.model_lt = model;
    lap.quantity_lt = quality;
    lap.price_lt = price;
    return lap;
}

void input(struct laptop &lap)
{
    cout << "Введите модель ноутбука" << endl;
    cin >> lap.model_lt;
    cout << "Введите число произведенных ноутбуков" << endl;
    cin >> lap.quantity_lt;
    cout << "Введите цену одного ноутбука" << endl;
    cin >> lap.price_lt;
}

void output(struct laptop &lap)
{
    cout << "Модель ноутбука: " << lap.model_lt << endl;
    cout << "Число произведенных ноутбуков = " << lap.quantity_lt << endl;
    cout << "Цена одного ноутбука = " << lap.price_lt << endl;
}