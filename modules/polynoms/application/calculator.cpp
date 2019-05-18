// Copyright 2019 Malkin Danil

#include <iostream>

#include "include/polynoms_calculator.h"

int main(int argc, const char** argv) {
    PolynomsCalculator cal;
    std::cout << cal(argc, &argv[1]);
    return 0;
}
