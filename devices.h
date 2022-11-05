#pragma once
#include "smartphone.h"
#include "laptop.h"

class Devices
{
    private:
    Smartphone* smartphone;
    Laptop* laptop;
    public:
    void input_dev(int* n_sp, int* n_lt);
    void output_dev(int n_sp, int n_lt);
    int income_dev(int n_sp, int n_lt);
    void outstr_dev(int n_sp, int n_lt);
    Devices(Smartphone* smartphone, Laptop* laptop);
    friend void outsmartp(Smartphone& smartphone, int n_sp);
    Devices();

    Devices(Smartphone* smartphone);

    Devices(const Devices & dev_ref);

    ~Devices();
};