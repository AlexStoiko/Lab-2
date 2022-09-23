#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <math.h>
#include <stdlib.h>
using namespace std;



struct creation
{
    int expenses_rent;
    int expenses_creation;
};

struct smartphone
{
    string model_sp;
    int quantity_sp;
    int price_sp;
};

struct laptop
{
    string model_lt;
    int quantity_lt;
    int price_lt;
};

struct devices
{
    smartphone smartphone;
    laptop laptop;
};

struct company
{
    string brand;
    devices devaces;
    creation creation;
} comp;

void init(struct company &comp)
{
    comp.brand = "Brand";
    comp.devaces.smartphone.model_sp = "SmartPhone";
    comp.devaces.smartphone.quantity_sp = 0;
    comp.devaces.smartphone.price_sp = 0;
    comp.devaces.laptop.model_lt = "Laptop";
    comp.devaces.laptop.quantity_lt = 0;
    comp.devaces.laptop.price_lt = 0;
    comp.creation.expenses_rent = 0;
    comp.creation.expenses_creation = 0;
}

void input(struct company &comp)
{
    cout << "Введите название компании" << endl;
    cin >> comp.brand;
    cout << "Введите модель смартфона" << endl;
    cin >> comp.devaces.smartphone.model_sp;
    cout << "Введите число произведенных смартфонов" << endl;
    cin >> comp.devaces.smartphone.quantity_sp;
    cout << "Ввведите цену одного смартфона" << endl;
    cin >> comp.devaces.smartphone.price_sp;
    cout << "Введите модель ноутбука" << endl;
    cin >> comp.devaces.laptop.model_lt;
    cout << "Введите число произведенных ноутбуков" << endl;
    cin >> comp.devaces.laptop.quantity_lt;
    cout << "Введите цену одного ноутбука" << endl;
    cin >> comp.devaces.laptop.price_lt;
    cout << "Введите постоянные издержки" << endl;
    cin >> comp.creation.expenses_rent;
    cout << "Введите переменные издержки" << endl;
    cin >> comp.creation.expenses_creation;
}

void output(struct company &comp)
{
    cout << comp.brand << endl;
    cout << comp.devaces.smartphone.model_sp << endl;
    cout << comp.devaces.smartphone.quantity_sp << endl;
    cout << comp.devaces.smartphone.price_sp << endl;
    cout << comp.devaces.laptop.model_lt << endl;
    cout << comp.devaces.laptop.quantity_lt << endl;
    cout << comp.devaces.laptop.price_lt << endl;
    cout << comp.creation.expenses_rent << endl;
    cout << comp.creation.expenses_creation << endl;
}

int income(struct company &comp)
{
    int income = 0, p_sp = 0, q_sp = 0, p_lt = 0, q_lt = 0;
    income = comp.devaces.smartphone.price_sp * comp.devaces.smartphone.quantity_sp + comp.devaces.laptop.price_lt * comp.devaces.laptop.quantity_lt;
    return income;
}

int expenses(struct company &comp)
{
    int expenses = 0, ex_r = 0, ex_c = 0;
    return expenses;
}

int profit(struct company &comp)
{
    int profit = 0;
    profit = income(comp) - expenses(comp);
    return profit;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    init(comp);
    input(comp);
    //output(comp);
    cout << "Прибыль компании =" << profit(comp) << endl;
    return (0);
}
