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
    cout << "������� ������ ��������" << endl;
    cin >> lap.model_lt;
    cout << "������� ����� ������������� ���������" << endl;
    cin >> lap.quantity_lt;
    cout << "������� ���� ������ ��������" << endl;
    cin >> lap.price_lt;
}

void output(struct laptop &lap)
{
    cout << "������ ��������: " << lap.model_lt << endl;
    cout << "����� ������������� ��������� = " << lap.quantity_lt << endl;
    cout << "���� ������ �������� = " << lap.price_lt << endl;
}