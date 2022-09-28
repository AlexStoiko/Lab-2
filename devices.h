#pragma once
#include "smartphone.h"
#include "laptop.h"

class devices
{
    public:
    smartphone* smartphone;
    laptop* laptop;
};

devices init_ds(smartphone* smartphone, laptop* laptop);

void input_dev(class devices& dev, int* n_sp, int* n_lt);

void output_dev(class devices& dev, int n_sp, int n_lt);

int income_dev(class devices& dev, int n_sp, int n_lt);