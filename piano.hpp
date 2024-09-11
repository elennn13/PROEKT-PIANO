#ifndef PIANO_HPP
#define PIANO_HPP

#include <iostream>
#include <conio.h> // ��� _getch()
#include <windows.h> // ��� Beep()

// ������� ��� ����������� �������
void displayPiano();

// ������� ��� ����������� ������� �������
void pressKey(char key);

// ������� ��� ��������������� ����� �� ������ ������� �������
void playSound(char key);

#endif // PIANO_H
