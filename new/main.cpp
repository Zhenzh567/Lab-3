#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "n = ";
    std::cin >> n;

    float c = 0;
    float mini = 1000000.0f;
    int k = 0;
    int min_index = 0;
    int current_index = 0;
    bool error_found = false;  // Флаг

    for (int i = 0; i < n; ++i) {
        float a;
        std::cin >> a;
        current_index += 1;

        if (a > 10.12) {
            k += 1;
            if (k == n) {
                std::cout << "ERROR" << std::endl;
                return 1;
            }
            error_found = true;  
            continue;
        }

        c += a;
        if (a < mini) {
            mini = a;
            min_index = current_index;
        }
    }

    if (!error_found && min_index != 0) {
        std::cout << "summa = " << c << std::endl;
        std::cout << "minimum = " << mini << std::endl;
        std::cout << "index of minimum = " << min_index << std::endl;
    }
    else if (min_index == 0) {
        std::cout << "error" << std::endl;
    }

    // Вторая часть
    int x;
    std::cin >> x;
    int j = 0;
    int y = -1;

    if (abs(x) < 1000) {
        while (x != 0) {
            j += 1;
            int b = x % 10;
            if (b == 3) {
                y = j;
            }
            x /= 10;
        }
    }

    std::cout << y << std::endl;
    return 0;
}



