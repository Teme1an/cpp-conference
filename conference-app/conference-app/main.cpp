#include "lecture.h"
#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8); // Устанавливаем UTF-8 для вывода
    SetConsoleCP(CP_UTF8);       // Устанавливаем UTF-8 для ввода
    std::vector<Lecture> lectures = readLectures("data.txt");
    printLectures(lectures);
    return 0;
}