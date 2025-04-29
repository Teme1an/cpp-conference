#include "lecture.h"
#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8); // ������������� UTF-8 ��� ������
    SetConsoleCP(CP_UTF8);       // ������������� UTF-8 ��� �����
    std::vector<Lecture> lectures = readLectures("data.txt");
    printLectures(lectures);
    return 0;
}