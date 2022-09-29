#include "company.h"
#include <iostream>
#include <string>
using namespace std;

Company init_comp(string brand, Devices devaces, Creation creation)
{
    Company comp;
    comp.brand = brand;
    comp.devises = devaces;
    comp.creation = creation;
    return comp;
}


Company::Company(string brandc, Devices dev, Creation creat)
{
    brand = brandc;
    devises = dev;
    creation = creat;
}

Company::Company()
{
    devises.smartphone->model_sp = "Model";
    devises.smartphone->price_sp = 0;
    devises.smartphone->quantity_sp = 0;
    creation.expenses_creation = 0;
    creation.expenses_rent = 0;
    brand = "Brand";
}

Company::Company(string brandc)
{
    brand = brandc;
    devises.smartphone->model_sp = "Model";
    devises.smartphone->price_sp = 0;
    devises.smartphone->quantity_sp = 0;
    creation.expenses_creation = 0;
    creation.expenses_rent = 0;
}

Company::~Company() {}

void Company::input(int* n_sp, int* n_lt)
{
    cout << "������� �������� ��������" << endl;
    cin >> brand;
    cout << "������� ����� ������� ���������� ����� ��������" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "������� ������ ���������" << endl;
        cin >> devises.smartphone[i].model_sp;
        cout << "������� ����� ������������� ����������" << endl;
        cin >> devises.smartphone[i].quantity_sp;
        cout << "�������� ���� ������ ���������" << endl;
        cin >> devises.smartphone[i].price_sp;
    }
    cout << "������� ����� ������� ��������� ����� ��������" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "������� ������ ��������" << endl;
        cin >> devises.laptop[i].model_lt;
        cout << "������� ����� ������������� ���������" << endl;
        cin >> devises.laptop[i].quantity_lt;
        cout << "������� ���� ������ ��������" << endl;
        cin >> devises.laptop[i].price_lt;
    }
    cout << "������� ���������� ��������" << endl;
    cin >> creation.expenses_rent;
    cout << "������� ���������� ��������" << endl;
    cin >> creation.expenses_creation;
}

void Company::output(int n_sp, int n_lt)
{
    cout << "����� ��������: " << brand << endl;
    for (int i = 0; i < n_sp; i++)
    {
        cout << "������ ���������: " << devises.smartphone[i].model_sp << endl;
        cout << "����� ������������� ��������� = " << devises.smartphone[i].quantity_sp << endl;
        cout << "���� ������ ��������� = " << devises.smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "������ ��������: " << devises.laptop[i].model_lt << endl;
        cout << "����� ������������� ��������� = " << devises.laptop[i].quantity_lt << endl;
        cout << "���� ������ �������� = " << devises.laptop[i].price_lt << endl;
    }
    cout << "���������� �������� = " << creation.expenses_rent << endl;
    cout << "���������� �������� = " << creation.expenses_creation << endl;
}

int Company::income(int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += devises.smartphone[i].price_sp * devises.smartphone[i].quantity_sp;
    for (int i = 0; i < n_lt; i++)
        income_lt += devises.laptop[i].price_lt * devises.laptop[i].quantity_lt;
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