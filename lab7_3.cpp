#include <iostream>

char before(char input_char) {
    if (input_char >= 'A' && input_char <= 'Z') {
        if (input_char == 'A') {
            return 'Z';
        } else {
            return input_char - 1;
        }
    } else {
        return '0';
    }
}

int main() {
    std::cout << before('A');
    std::cout << before('B');
    std::cout << before('P');
    std::cout << before('T');
    std::cout << before('Z');
    std::cout << before('a');
    std::cout << before('0');
    std::cout << before('c');
    
    return 0;
}