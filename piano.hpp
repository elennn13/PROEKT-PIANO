#ifndef PIANO_HPP
#define PIANO_HPP

#include <iostream>
#include <conio.h> // Для _getch()
#include <windows.h> // Для Beep()

// Функция для отображения пианино
void displayPiano();

// Функция для отображения нажатой клавиши
void pressKey(char key);

// Функция для воспроизведения звука на основе нажатой клавиши
void playSound(char key);

#endif // PIANO_H
