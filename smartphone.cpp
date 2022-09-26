#include "smartphone.h"

smartphone init_sp(string model, int quality, int price)
{
    smartphone smartp;
    smartp.model_sp = model;
    smartp.quantity_sp = quality;
    smartp.price_sp = price;
    return smartp;
}

void input_smartp(struct smartphone &smartp)
{
    cout << "Введите модель смартфона" << endl;
    cin >> smartp.model_sp;
    cout << "Введите число произведенных смартфонов" << endl;
    cin >> smartp.quantity_sp;
    cout << "Ввведите цену одного смартфона" << endl;
    cin >> smartp.price_sp;
}

void output_smartp(struct smartphone &smartp)
{
    cout << "Модель смартфона: " << smartp.model_sp << endl;
    cout << "Число произведенных смарфонов = " << smartp.quantity_sp << endl;
    cout << "Цена одного смартфона = " << smartp.price_sp << endl;
}