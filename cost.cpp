//
// Created by zhigan on 06.04.16.
//

#include "cost.h"

void Cost::set_amount(double new_amount) {
    amount = new_amount;
}

void Cost::set_type(int new_type) {
    type = new_type;
}

void Cost::set_description(std::string new_description) {
    description = new_description;
}

void Cost::set_priority(int new_priority) {
    priority = new_priority;
}

double Cost::get_amount() const {
    return amount;
}

int Cost::get_type() const {
    return type;
}

std::string Cost::get_description() const {
    return description;
}

int Cost::get_priority() const {
    return priority.get_priority();
}

void Regular_Outcome::set_frequency(int new_frequency) {
    frequency = new_frequency;
}

int Regular_Outcome::get_frequency() const {
    return frequency;
}
