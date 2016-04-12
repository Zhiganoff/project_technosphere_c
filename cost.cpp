#include "cost.h"

void Cost::set_amount(double new_amount) {
    amount = new_amount;
}

void Cost::set_type(int new_type) {
    type = new_type;
}

void Cost::set_description(std::string &new_description) {
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

void Cost_List::set_time(Date new_time) {
    time = new_time;
}

Date Cost_List::get_time() const {
    return time;
}

std::vector<Cost *> *Cost_List::get_regular() const {
    return reg;
}

std::vector<Cost *> *Cost_List::get_irregular() const {
    return irreg;
}

void Cost_List::add_regular(Regular_Outcome &cost) {
    if (reg->capacity() % size_block == 0) {
        reg->reserve(reg->capacity() + size_block);
    }
    Cost *tmp = new Cost(cost);
    reg->push_back(tmp);
}

void Cost_List::add_irregular(Irregular_Outcome &cost) {
    if (irreg->capacity() % size_block == 0) {
        irreg->reserve(irreg->capacity() + size_block);
    }
    Cost *tmp = new Cost(cost);
    irreg->push_back(tmp);
}

void Cost_List::delete_reg(int num) {
    reg->erase(reg->begin() + num);
}

void Cost_List::delete_irreg(int num) {
    irreg->erase(irreg->begin() + num);
}
