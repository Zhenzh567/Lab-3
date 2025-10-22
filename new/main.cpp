#include <iostream>
#include <cmath>

int main() {
    // Первая часть: обработка последовательности чисел
    int n;
    std::cout << "n = ";
    std::cin >> n;

    float sum = 0;
    float min_value = 1000000.0f;
    int invalid_count = 0;
    int min_index = 0;
    int current_index = 0;
    bool has_valid_numbers = false;

    for (int i = 0; i < n; ++i) {
        float a;
        std::cin >> a;
        current_index += 1;

        if (a > 10.12) {
            invalid_count += 1;
            continue; // Пропускаем невалидные числа
        }

        // Обрабатываем валидные числа
        has_valid_numbers = true;
        sum += a;
        
        if (a < min_value) {
            min_value = a;
            min_index = current_index;
        }
    }

    // Проверяем, есть ли валидные числа для вывода результатов
    if (invalid_count == n) {
        std::cout << "ERROR" << std::endl;
        return 1;
    }
    
    if (has_valid_numbers) {
        std::cout << "summa = " << sum << std::endl;
        std::cout << "minimum = " << min_value << std::endl;
        std::cout << "index of minimum = " << min_index << std::endl;
    }

    // Вторая часть: поиск цифры 3 в числе
    int x;
    std::cin >> x;
    int position = 0;
    int last_three_position = -1;
    
    // Берем абсолютное значение для обработки отрицательных чисел
    int temp_x = std::abs(x);
    
    if (temp_x < 1000) {
        while (temp_x != 0) {
            position += 1;
            int digit = temp_x % 10;
            if (digit == 3) {
                last_three_position = position;
            }
            temp_x /= 10;
        }
    }

    std::cout << last_three_position << std::endl;
    return 0;
}


