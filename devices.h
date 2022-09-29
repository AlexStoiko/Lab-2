#pragma once
#include "smartphone.h"
#include "laptop.h"

class Devices
{
    public:
    string brandd;
    Smartphone* smartphone;
    Laptop* laptop;

    void input_dev(int* n_sp, int* n_lt);

    void output_dev(int n_sp, int n_lt);

    int income_dev(int n_sp, int n_lt);

    Devices(string brand, Smartphone* smartphone, Laptop* laptop);

    Devices();

    Devices(Smartphone* smartp);

    ~Devices();
};

//devices (smartphone* smartphone, laptop* laptop);