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

void input(struct company& comp, int* n_sp, int* n_lt)
{
    cout << "������� �������� ��������" << endl;
    cin >> comp.brand;
    cout << "������� ����� ������� ���������� ����� ��������" << endl;
    cin >> *n_sp;
    for (int i = 0; i < *n_sp; i++)
    {
        cout << "������� ������ ���������" << endl;
        cin >> comp.devaces.smartphone[i].model_sp;
        cout << "������� ����� ������������� ����������" << endl;
        cin >> comp.devaces.smartphone[i].quantity_sp;
        cout << "�������� ���� ������ ���������" << endl;
        cin >> comp.devaces.smartphone[i].price_sp;
    }
    cout << "������� ����� ������� ��������� ����� ��������" << endl;
    cin >> *n_lt;
    for (int i = 0; i < *n_lt; i++)
    {
        cout << "������� ������ ��������" << endl;
        cin >> comp.devaces.laptop[i].model_lt;
        cout << "������� ����� ������������� ���������" << endl;
        cin >> comp.devaces.laptop[i].quantity_lt;
        cout << "������� ���� ������ ��������" << endl;
        cin >> comp.devaces.laptop[i].price_lt;
    }
    cout << "������� ���������� ��������" << endl;
    cin >> comp.creation.expenses_rent;
    cout << "������� ���������� ��������" << endl;
    cin >> comp.creation.expenses_creation;
}

void output(struct company& comp, int n_sp, int n_lt)
{
    cout << "����� ��������: " << comp.brand << endl;
    for (int i = 0; i < n_sp; i++)
    {
        cout << "������ ���������: " << comp.devaces.smartphone[i].model_sp << endl;
        cout << "����� ������������� ��������� = " << comp.devaces.smartphone[i].quantity_sp << endl;
        cout << "���� ������ ��������� = " << comp.devaces.smartphone[i].price_sp << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << "������ ��������: " << comp.devaces.laptop[i].model_lt << endl;
        cout << "����� ������������� ��������� = " << comp.devaces.laptop[i].quantity_lt << endl;
        cout << "���� ������ �������� = " << comp.devaces.laptop[i].price_lt << endl;
    }
    cout << "���������� �������� = " << comp.creation.expenses_rent << endl;
    cout << "���������� �������� = " << comp.creation.expenses_creation << endl;
}

int income(struct company& comp, int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += comp.devaces.smartphone[i].price_sp * comp.devaces.smartphone[i].quantity_sp;
    for (int i = 0; i < n_lt; i++)
        income_lt += comp.devaces.laptop[i].price_lt * comp.devaces.laptop[i].quantity_lt;
    return income_sp + income_lt;
}

int expenses(struct company& comp)
{
    return comp.creation.expenses_rent + comp.creation.expenses_creation;
}

int profit(struct company& comp, int n_sp, int n_lt)
{
    return income(comp, n_sp, n_lt) - expenses(comp);
}