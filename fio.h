//
// Created by Максим Уланов on 24.05.2022.
//
#pragma once
#include <iostream>

class FIO {
    friend class letter;
    friend class letter1;

private:
    std::string person_surname;
    std::string person_name;
    std::string person_patronymic;
public:
    std::string show_full_fio();
};