#pragma once


struct creation
{
    int expenses_rent;
    int expenses_creation;
};

creation init_cn(int expenses_rent, int expenses_creation);

void input_creat(struct creation& creat);

void output_creat(struct creation& creat);

int expenses_creat(struct creation& creat);