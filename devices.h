#pragma once
#include "smartphone.h"
#include "laptop.h"

class Devices
{
    public:
    Smartphone* smartphone;
    Laptop* laptop;

    void input_dev(int* n_sp, int* n_lt);

    void output_dev(int n_sp, int n_lt);

    int income_dev(int n_sp, int n_lt);

    Devices(Smartphone* smartphone, Laptop* laptop);

    Devices();

    Devices(Smartphone* smartp);

    Devices(const Devices & dev_ref);

    ~Devices();
};