//
// Created by zhigan on 06.04.16.
//

#include "case.h"

void Status::set_status(int new_status) {
    type_status = new_status;
}

int Status::get_status() const {
    return type_status;
}

void Priority::set_priority(int new_priority) {
    type_priority = new_priority;
}

int Priority::get_priority() const {
    return type_priority;
}
void Regularity::set_regularity(int new_regularity) {
    type_regularity = new_regularity;
}

int Regularity::get_regularity() const {
    return type_regularity;
}

void Color::set_color(int new_color) {
    type_color = new_color;
}

int Color::get_color() const {
    return type_color;
}

void Case::set_case(std::map<std::string, int> init) {
    this->Case(init);
}

void Case::set_priority(int new_priority) {
    priority.set_priority(new_priority);
}

void Case::set_regularity(int new_regularity) {
    regularity.set_regularity(new_regularity);
}

void Case::set_color(int new_color) {
    color.set_color(new_color);
}

int Case::get_priority() const {
    return priority.get_priority();
}

int Case::get_regularity() const {
    return regularity.get_regularity();
}

int Case::get_color() const {
    return color.get_color();
}

void Task::set_task(std::map<std::string, int> init, int new_status, std::string new_description, Date time) {
    this->Task(init, new_status, new_description, time);
}

void Task::set_description(std::string new_description) {
    description = new_description;
}

void Task::set_deadline(Date time) {
    deadline = time;
}

std::string Task::get_description() const {
    return description;
}

Date Task::get_deadline() const {
    return deadline;
}

void Note::set_subject(std::string new_subject) {
    subject = new_subject;
}

std::string Note::get_subject() const {
    return subject;
}

void Event::set_name(std::string new_name) {
    name = new_name;
}

void Event::set_time(Date new_time) {
    time = new_time;
}

std::string Event:: get_name() const {
    return name;
}

Date Event::get_time() const {
    return time;
}

void View::set_description(std::string new_description) {
    description = new_description;
}

std::string View::get_description() const {
    return description;
}