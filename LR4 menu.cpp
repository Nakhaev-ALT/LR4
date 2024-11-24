#include <iostream>
using namespace std;

// Function declarations
void Task1(); // Задача 1: Перевірка, чи всі цифри тризначного числа різні
void Task2(); // Задача 2: Обчислення кількості секунд від початку останньої хвилини
void Task3(); // Задача 3: Обчислення площі кільця
void DisplayMenu(); // Функція для відображення меню

int main() {
    int choice;
    do {
        DisplayMenu(); // Відображення меню
        cin >> choice;

        // Перевірка некоректного вводу
        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number from 1 to 4.\n";
            continue;
        }

        switch (choice) {
        case 1:
            Task1(); // Виклик задачі 1
            break;
        case 2:
            Task2(); // Виклик задачі 2
            break;
        case 3:
            Task3(); // Виклик задачі 3
            break;
        case 4:
            cout << "Exiting the program. Goodbye!\n"; // Завершення програми
            break;
        }
    } while (choice != 4);

    return 0;
}

// Function to display the menu
void DisplayMenu() {
    // Меню програми
    cout << "\n=== Program Menu ===\n";
    cout << "1. Check if all digits of a three-digit number are different\n";
    cout << "2. Find seconds elapsed since the last full minute\n";
    cout << "3. Calculate the area of a ring\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

// Function for Task 1
void Task1() {
    // Реалізація перевірки унікальності цифр числа
    cout << "Task 1: Checking if all digits of a three-digit number are different.\n";
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;

    // Перевірка правильності введення
    if (number < 100 || number > 999) {
        cout << "Invalid input! Please enter a three-digit number.\n";
        return;
    }

    int first = number / 100;
    int second = (number / 10) % 10;
    int third = number % 10;

    // Перевірка унікальності цифр
    if (first != second && first != third && second != third) {
        cout << "All digits are different.\n";
    }
    else {
        cout << "Some digits are the same.\n";
    }
}

// Function for Task 2
void Task2() {
    // Реалізація обчислення секунд від останньої хвилини
    cout << "Task 2: Finding seconds elapsed since the last full minute.\n";
    int seconds;
    cout << "Enter the number of seconds since the start of the day: ";
    cin >> seconds;

    // Перевірка правильності введення
    if (seconds < 0 || seconds >= 86400) {
        cout << "Invalid input! Seconds should be in the range [0, 86399].\n";
        return;
    }

    // Обчислення залишку
    int result = seconds % 60;
    cout << "Seconds elapsed since the last full minute: " << result << " seconds.\n";
}

// Function for Task 3
void Task3() {
    // Реалізація обчислення площі кільця
    cout << "Task 3: Calculating the area of a ring.\n";
    double R1, R2;
    cout << "Enter the outer radius (R1): ";
    cin >> R1;
    cout << "Enter the inner radius (R2): ";
    cin >> R2;

    // Перевірка правильності введення
    if (R1 <= R2 || R1 <= 0 || R2 <= 0) {
        cout << "Invalid input! Ensure that R1 > R2 and both are positive numbers.\n";
        return;
    }

    // Обчислення площі
    const double PI = 3.14;
    double area = PI * (R1 * R1 - R2 * R2);
    cout << "The area of the ring: " << area << "\n";
}



