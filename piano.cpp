#include "piano.hpp"

// Функция для отображения пианино
void displayPiano() {
    std::cout << "   | Z | X | C | V | B | N | M |\n";
}

// Функция для отображения нажатой клавиши
void pressKey(char key) {
    const int keys_number = 7;
    const char keys[] = "zxcvbnm";
    std::cout << "   ";
    for (size_t i = 0; i < keys_number; ++i) {
        if (key == keys[i]) {
            std::cout << "| # ";
        }
        else {
            std::cout << "|   ";
        }
    }
    std::cout << "|\n";

    std::cout << "   |---|---|---|---|---|---|---|\n";
    std::cout << "     C   D   E   F   G   A   B\n\n";
}

// Функция для воспроизведения звука на основе нажатой клавиши
void playSound(char key) {
    int frequency = 0;
    switch (std::tolower(key)) {
    case 'z': frequency = 262; break; // C
    case 'x': frequency = 294; break; // D
    case 'c': frequency = 330; break; // E
    case 'v': frequency = 349; break; // F
    case 'b': frequency = 392; break; // G
    case 'n': frequency = 440; break; // A
    case 'm': frequency = 494; break; // B
    default: return;
    }

    Beep(frequency, 500); // Воспроизводим звук с заданной частотой и длительностью
}

int main() {
    char key;
    displayPiano(); // Показываем начальное пианино

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