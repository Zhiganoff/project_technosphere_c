//
// Created by zhigan on 06.04.16.
//

#ifndef PROJECT_TECHNOSPHERE_C_COST_H
#define PROJECT_TECHNOSPHERE_C_COST_H

#include <string>
#include "case.h"

class Cost {
public:
    Cost(int new_amount, int new_type, const std::string new_description, Priority new_priority):
            amount(new_amount),
            type(new_type),
            description(new_description),
            priority(Priority(new_priority)) {}
    void set_amount(double new_amount);
    void set_type(int new_type);
    void set_description(std::string new_description);
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
    Regular_Outcome(int new_amount, int new_type, const std::string new_description, Priority new_priority,
                    int new_frequency): Cost(new_amount, new_type, new_description, new_priority),
                                        frequency(new_frequency) {}
    void set_frequency(int new_frequency);
    int get_frequency() const;
private:
    int frequency;
    bool deficit; // Не сделано ничего для нехватки
};

class Irregular_Outcome: public Cost {  //TODO - оформить нерегулярные расходы
    Irregular_Outcome(int new_amount, int new_type, const std::string new_description, Priority new_priority):
            Cost(new_amount, new_type, new_description, new_priority) {}
};

#endif //PROJECT_TECHNOSPHERE_C_COST_H
