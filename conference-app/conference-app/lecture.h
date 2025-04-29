#pragma once
#include <string>
#include <vector>

struct Lecture {
    std::string start_time;  // "09:30"
    std::string end_time;    // "10:15"
    std::string surname;     // "Иванов"
    std::string name;        // "Иван"
    std::string patronymic;  // "Иванович"
    std::string topic;       // "Методы сортировки в C++"
};

std::vector<Lecture> readLectures(const std::string& filename);
void printLectures(const std::vector<Lecture>& lectures);