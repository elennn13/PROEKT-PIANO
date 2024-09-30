#include <iostream>
#include <conio.h> // Для _getch()
#include "piano.hpp"


int main() {
    char key;
    displayPiano(); // Показываем начальное пианино
    pressKey();  // Отображаем нажатую клавишу


    while (true) {
        key = _getch(); // Ожидаем нажатия клавиши

        // Очистка экрана (имитация)
        system("cls");

        displayPiano(); // Отображаем пианино снова
        pressKey(key);  // Отображаем нажатую клавишу
        playSound(key); // Воспроизводим звук
    }


    return 0;
}