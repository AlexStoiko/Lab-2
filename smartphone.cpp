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
    cout << "������� ������ ���������" << endl;
    cin >> smartp.model_sp;
    cout << "������� ����� ������������� ����������" << endl;
    cin >> smartp.quantity_sp;
    cout << "�������� ���� ������ ���������" << endl;
    cin >> smartp.price_sp;
}

void output_smartp(struct smartphone &smartp)
{
    cout << "������ ���������: " << smartp.model_sp << endl;
    cout << "����� ������������� ��������� = " << smartp.quantity_sp << endl;
    cout << "���� ������ ��������� = " << smartp.price_sp << endl;
}