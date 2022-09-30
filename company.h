#pragma once
#include "devices.h"
#include "creation.h"

class Company
{
    public:
    string brand;
    Devices devices;
    Creation creation;
    void input(int* n_sp, int* n_lt);
    void output(int n_sp, int n_lt);
    int income(int n_sp, int n_lt);
    int expenses();
    int profit(int n_sp, int n_lt);
    Company(string brandc, Devices devaces, Creation creation);
    Company();
    Company(string brandc);
    Company(const Company& comp);

    ~Company();
};