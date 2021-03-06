#ifndef PROJECT_TECHNOSPHERE_C_DATE_H
#define PROJECT_TECHNOSPHERE_C_DATE_H

#include <string>
#include <map>
#include "case.h"
#include "cost.h"

class Date {
public:
    Date(std::map<std::string, int> &init): year(init["Year"]),
                                            month(init["Month"]),
                                            day(init["Day"]),
                                            hour(init["Hour"]),
                                            minute(init["Minute"]) {}
    void set_date(std::map<std::string, int> &init);
    std::map <std::string, int> get_date() const;
private:
    int year, month, day, hour, minute;
};

class Day {
public:
    Day(Date &new_date): date(new_date) {}
    void set_date(Date &new_date);
    Date get_date();
private:
    Date date;
    Case_List cases;
};

#endif //PROJECT_TECHNOSPHERE_C_DATE_H
