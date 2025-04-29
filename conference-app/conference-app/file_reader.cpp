#include "lecture.h"
#include <fstream>
#include <iostream>

std::vector<Lecture> readLectures(const std::string& filename) {
    std::ifstream file(filename);
    std::vector<Lecture> lectures;
    Lecture lecture;

    while (file >> lecture.start_time >> lecture.end_time
        >> lecture.surname >> lecture.name >> lecture.patronymic) {
        std::getline(file, lecture.topic);  // Читаем тему (может содержать пробелы)
        lectures.push_back(lecture);
    }
    return lectures;
}

void printLectures(const std::vector<Lecture>& lectures) {
    for (const auto& lecture : lectures) {
        std::cout << lecture.start_time << " - " << lecture.end_time
            << " | " << lecture.surname << " " << lecture.name
            << " |" << lecture.topic << std::endl;
    }
}