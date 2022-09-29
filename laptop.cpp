#include "laptop.h"

Laptop::Laptop(string model, int quality, int price)
{
    model_lt = model;
    quantity_lt = quality;
    price_lt = price;
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
    cout << "������� ������ ��������" << endl;
    cin >> model_lt;
    cout << "������� ����� ������������� ���������" << endl;
    cin >> quantity_lt;
    cout << "������� ���� ������ ��������" << endl;
    cin >> price_lt;
}

void Laptop::output()
{
    cout << "������ ��������: " << model_lt << endl;
    cout << "����� ������������� ��������� = " << quantity_lt << endl;
    cout << "���� ������ �������� = " << price_lt << endl;
}