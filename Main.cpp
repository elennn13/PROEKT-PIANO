#include <iostream>
#include <conio.h> // ��� _getch()
#include "piano.hpp"


int main() {
    char key;
    displayPiano(); // ���������� ��������� �������
    pressKey();  // ���������� ������� �������


    while (true) {
        key = _getch(); // ������� ������� �������

        // ������� ������ (��������)
        system("cls");

        displayPiano(); // ���������� ������� �����
        pressKey(key);  // ���������� ������� �������
        playSound(key); // ������������� ����
    }


    return 0;
}