#pragma once
#include "devices.h"
#include "creation.h"

class company
{
    public:
    string brand;
    devices devaces;
    creation creation;

    void input(int* n_sp, int* n_lt);

    void output(int n_sp, int n_lt);

    int income(int n_sp, int n_lt);

    int expenses();

    int profit(int n_sp, int n_lt);
};

company init_comp(string brand, devices devaces, creation creation);
/*
void input(class company& comp, int* n_sp, int* n_lt);

void output(class company& comp, int n_sp, int n_lt);

int income(class company& comp, int n_sp, int n_lt);

int expenses(class company& comp);

int profit(class company& comp, int n_sp, int n_lt);
*/