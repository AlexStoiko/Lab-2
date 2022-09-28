#include "company.h"
#include <iostream>
#include <string>
using namespace std;

company init_comp(string brand, devices devaces, creation creation)
{
    company comp;
    comp.brand = brand;
    comp.devaces = devaces;
    comp.creation = creation;
    return comp;
}

void company::input(int* n_sp, int* n_lt)
{
    cout << "������� �������� ��������" << endl;
    cin >> brand;
    cout << "������� ����� ������� ���������� ����� ��������" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "������� ������ ���������" << endl;
        cin >> devaces.smartphone[i].model_sp;
        cout << "������� ����� ������������� ����������" << endl;
        cin >> devaces.smartphone[i].quantity_sp;
        cout << "�������� ���� ������ ���������" << endl;
        cin >> devaces.smartphone[i].price_sp;
    }
    cout << "������� ����� ������� ��������� ����� ��������" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "������� ������ ��������" << endl;
        cin >> devaces.laptop[i].model_lt;
        cout << "������� ����� ������������� ���������" << endl;
        cin >> devaces.laptop[i].quantity_lt;
        cout << "������� ���� ������ ��������" << endl;
        cin >> devaces.laptop[i].price_lt;
    }
    cout << "������� ���������� ��������" << endl;
    cin >> creation.expenses_rent;
    cout << "������� ���������� ��������" << endl;
    cin >> creation.expenses_creation;
}

void company::output(int n_sp, int n_lt)
{
    cout << "����� ��������: " << brand << endl;
    for (int i = 0; i < n_sp; i++)
    {
        cout << "������ ���������: " << devaces.smartphone[i].model_sp << endl;
        cout << "����� ������������� ��������� = " << devaces.smartphone[i].quantity_sp << endl;
        cout << "���� ������ ��������� = " << devaces.smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "������ ��������: " << devaces.laptop[i].model_lt << endl;
        cout << "����� ������������� ��������� = " << devaces.laptop[i].quantity_lt << endl;
        cout << "���� ������ �������� = " << devaces.laptop[i].price_lt << endl;
    }
    cout << "���������� �������� = " << creation.expenses_rent << endl;
    cout << "���������� �������� = " << creation.expenses_creation << endl;
}

int company::income(int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += devaces.smartphone[i].price_sp * devaces.smartphone[i].quantity_sp;
    for (int i = 0; i < n_lt; i++)
        income_lt += devaces.laptop[i].price_lt * devaces.laptop[i].quantity_lt;
    return income_sp + income_lt;
}

int company::expenses()
{
    return creation.expenses_rent + creation.expenses_creation;
}

int company::profit(int n_sp, int n_lt)
{
    return income(n_sp, n_lt) - expenses();
}