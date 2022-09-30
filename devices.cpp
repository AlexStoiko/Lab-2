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
    cout << "������� ����� ������� ���������� ����� ��������" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "������� ������ ���������" << endl;
        cin >> smartphone[i].model_sp;
        cout << "������� ����� ������������� ����������" << endl;
        cin >> smartphone[i].quantity_sp;
        cout << "�������� ���� ������ ���������" << endl;
        cin >> smartphone[i].price_sp;
    }
    cout << "������� ����� ������� ��������� ����� ��������" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "������� ������ ��������" << endl;
        cin >> laptop[i].model_lt;
        cout << "������� ����� ������������� ���������" << endl;
        cin >> laptop[i].quantity_lt;
        cout << "������� ���� ������ ��������" << endl;
        cin >> laptop[i].price_lt;
    }
}

void Devices::output_dev(int n_sp, int n_lt)
{
    for (int i = 0; i < n_sp; i++)
    {
        cout << "������ ���������: " << smartphone[i].model_sp << endl;
        cout << "����� ������������� ��������� = " << smartphone[i].quantity_sp << endl;
        cout << "���� ������ ��������� = " << smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "������ ��������: " << laptop[i].model_lt << endl;
        cout << "����� ������������� ��������� = " << laptop[i].quantity_lt << endl;
        cout << "���� ������ �������� = " << laptop[i].price_lt << endl;
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