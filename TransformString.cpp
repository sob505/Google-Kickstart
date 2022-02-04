#include <iostream>
#include <string>

int findClosestKey(char letter, std::string key) {
    int closest = 26;
    for (auto check : key) {
        int distance = letter - check;
        if (distance < 0) { distance *= -1; }
        if (distance > 13) { distance = 26 - distance; }
        if (distance < closest) {
            closest = distance;
        }
    }
    return closest;
}

int countStr(std::string padlock, std::string key) {
    int count = 0;
    for (auto letter : padlock) {
        // If the character of the padlock isn't found in the key
        if (key.find(letter) > key.size()) {
            count += findClosestKey(letter, key);
        }
    }
    return count;
}

int main() {
    int numOfTests;
    std::cin >> numOfTests;

    for (int i = 0; i < numOfTests; ++i) {
        std::string padlock, key;
        std::cin >> padlock >> key;
        int numOfCases = countStr(padlock, key);
        std::cout << "Case #" << i + 1 << ": " << numOfCases << std::endl;
    }

    return 0;
}