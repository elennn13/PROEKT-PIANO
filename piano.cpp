#include "piano.hpp"

// ������� ��� ����������� �������
void displayPiano() {
    std::cout << "   | Z | X | C | V | B | N | M |\n";
}

// ������� ��� ����������� ������� �������
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

// ������� ��� ��������������� ����� �� ������ ������� �������
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

    Beep(frequency, 500); // ������������� ���� � �������� �������� � �������������
}

int main() {
    char key;
    displayPiano(); // ���������� ��������� �������

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