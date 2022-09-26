#pragma once
#include "smartphone.h"
#include "laptop.h"

struct devices
{
    smartphone* smartphone;
    laptop* laptop;
};

devices init_ds(smartphone* smartphone, laptop* laptop);

void input_dev(struct devices& dev, int* n_sp, int* n_lt);

void output_dev(struct devices& dev, int n_sp, int n_lt);

int income_dev(struct devices& dev, int n_sp, int n_lt);