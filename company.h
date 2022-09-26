#pragma once
#include "devices.h"
#include "creation.h"

struct company
{
    string brand;
    devices devaces;
    creation creation;
};

company init_comp(string brand, devices devaces, creation creation);

void input(struct company& comp, int* n_sp, int* n_lt);

void output(struct company& comp, int n_sp, int n_lt);

int income(struct company& comp, int n_sp, int n_lt);

int expenses(struct company& comp);

int profit(struct company& comp, int n_sp, int n_lt);