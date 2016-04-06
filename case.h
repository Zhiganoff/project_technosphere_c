//
// Created by zhigan on 06.04.16.
//

#ifndef PROJECT_TECHNOSPHERE_C_CASE_H
#define PROJECT_TECHNOSPHERE_C_CASE_H

#include <string>
#include "date.h"

class Status {
public:
    Status(int new_status): type_status(new_status) {}
    void set_status(int new_status);
    int get_status() const;
private:
    int type_status;
};

class Priority {
public:
    Priority(int new_priority): type_priority(new_priority) {}
    void set_priority(int new_priority);
    int get_priority() const;
private:
    int type_priority;
};

class Regularity {
public:
    Regularity(int new_regularity): type_regularity(new_regularity) {}
    void set_regularity(int new_regularity);
    int get_regularity() const;
private:
    int type_regularity;
};

class Color {
public:
    Color(int new_color): type_color(new_color) {}
    void set_color(int new_color);
    int get_color() const;
private:
    int type_color;
};

class Case {
public:
    Case(std::map<std::string, int> init): priority(Priority(init["Priority"])),
                                           regularity(Regularity(init["Regularity"])),
                                           color(Color(init["Color"])) {}
    void set_case(std::map<std::string, int> init);
    void set_priority(int new_priority);
    void set_regularity(int new_regularity);
    void set_color(int new_color);
    int get_priority() const;
    int get_regularity() const;
    int get_color() const;
private:
    Priority priority;
    Regularity regularity;
    Color color;
};

class Task: public Case {
public:
    Task(std::map<std::string, int> init, int new_status, std::string new_description, Date time):
            Case(init),
            status(Status(new_status)),
            description(new_description),
            deadline(time) {}
    void set_task(std::map<std::string, int> init, int new_status, std::string new_description, Date time);
    void set_description(std::string new_description);
    void set_deadline(Date time);
    std::string get_description() const;
    Date get_deadline() const;
private:
    Status status;
    std::string description;
    Date deadline;
};

class Note: public Case {
public:
    Note(std::map<std::string, int> init, std::string new_subject): Case(init),
                                                                    subject(new_subject) {}
    void set_subject(std::string new_subject);
    std::string get_subject() const;
private:
    std::string subject;
};

class Event: public Case {
public:
    Event(std::map<std::string, int> init, std::string new_name, Date new_time): Case(init),
                                                                                 name(new_name),
                                                                                 time(new_time) {}

    void set_name(std::string new_name);
    void set_time(Date new_time);
    std::string get_name() const;
    Date get_time() const;
private:
    std::string name;
    Date time;
};

class View: public Case {
public:
    View(std::map<std::string, int> init, std::string new_description): Case(init),
                                                                        description(new_description) {}
    void set_description(std::string new_description);
    std::string get_description() const;
private:
    std::string description;
};

#endif //PROJECT_TECHNOSPHERE_C_CASE_H
