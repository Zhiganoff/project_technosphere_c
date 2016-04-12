#ifndef PROJECT_TECHNOSPHERE_C_COST_H
#define PROJECT_TECHNOSPHERE_C_COST_H

#include <string>
#include <vector>
#include "case.h"

class Cost {
public:
    Cost(int new_amount, int new_type, const std::string &new_description, Priority new_priority):
            amount(new_amount),
            type(new_type),
            description(new_description),
            priority(Priority(new_priority)) {}
    void set_amount(double new_amount);
    void set_type(int new_type);
    void set_description(std::string &new_description);
    void set_priority(int new_priority);
    double get_amount() const;
    int get_type() const;
    std::string get_description() const;
    int get_priority() const;
private:
    double amount;
    int type;
    std::string description;
    Priority priority;
};

class Regular_Outcome: public Cost {
public:
    Regular_Outcome(int new_amount, int new_type, const std::string &new_description, Priority new_priority,
                    int new_frequency): Cost(new_amount, new_type, new_description, new_priority),
                                        frequency(new_frequency) {}
    void set_frequency(int new_frequency);
    int get_frequency() const;
private:
    int frequency;
    bool deficit; // TODO - сделать нехватку
};

class Irregular_Outcome: public Cost {  //TODO - оформить нерегулярные расходы
    Irregular_Outcome(int new_amount, int new_type, const std::string &new_description, Priority new_priority):
            Cost(new_amount, new_type, new_description, new_priority) {}
};

class Cost_List {
public:
    Cost_List(Date new_time): time(new_time),
                              reg(nullptr),
                              irreg(nullptr) {}
    void set_time(Date new_time);
    Date get_time() const;
    std::vector<Cost *> *get_regular() const;
    std::vector<Cost *> *get_irregular() const;
    void add_regular(Regular_Outcome &cost);
    void add_irregular(Irregular_Outcome &cost);
    void delete_reg(int num);
    void delete_irreg(int num);
private:
    std::vector<Cost *> *reg, *irreg;
    Date time;
    static const std::size_t size_block = 10; //Размер блока выделяемой памяти
};

#endif //PROJECT_TECHNOSPHERE_C_COST_H
