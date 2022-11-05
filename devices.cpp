#include "devices.h"
#include <iostream>
#include <string>
using namespace std;

Devices::Devices(Smartphone* smartphone, Laptop* laptop)
{
    this->smartphone = smartphone;
    this->laptop = laptop;
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

Devices::Devices(Smartphone* smartphone)
{
    this->smartphone = smartphone;
    this->laptop = new Laptop("Model", 0, 0);
}

Devices::~Devices() {}


void Devices::input_dev(int* n_sp, int* n_lt)
{
    for (int i = 0; i < *n_sp; i++)
    {
        smartphone[i].input_sp();
    }
    for (int i = 0; i < *n_lt; i++)
    {
        laptop[i].input_lt();
    }
}

void Devices::output_dev(int n_sp, int n_lt)
{
    for (int i = 0; i < n_sp; i++)
    {
        smartphone[i].output_sp();
    }
    for (int i = 0; i < n_lt; i++)
    {
        laptop[i].output_lt();
    }
}

void Devices::outstr_dev(int n_sp, int n_lt)
{
    for (int i = 0; i < n_sp; i++)
    {
        cout << smartphone[i].getstr_sp() << endl;
    }
    for (int i = 0; i < n_lt; i++)
    {
        cout << laptop[i].getstr_lt() << endl;
    }
}

int Devices::income_dev(int n_sp, int n_lt)
{
    int income_sp = 0, income_lt = 0;
    for (int i = 0; i < n_sp; i++)
        income_sp += smartphone[i].income_sp();
    for (int i = 0; i < n_lt; i++)
        income_lt += laptop[i].income_lt();
    return income_sp + income_lt;
}

void outsmartp(Smartphone& smartphone, int n_sp)
{
    for (int i = 0; i < n_sp; i++)
    {
        cout << smartphone.model_sp << "\t|" << smartphone.quantity_sp << "\t|" << smartphone.price_sp << endl;
    }
}