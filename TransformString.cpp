#include <iostream>
#include <string>

// Find a letter in the key that is closest to the selected padlock letter
int findClosestKey(char letter, std::string key) {
    int closest = 26;
    for (auto check : key) {
        int distance = letter - check;
        
        // Convert negative distances to be positive
        if (distance < 0) { distance *= -1; }
        // If the distance is over half of the alphabet, go the other direction in the key
        if (distance > 13) { distance = 26 - distance; }
        
        if (distance < closest) {
            closest = distance;
        }
    }
    return closest;
}

// Operate on the padlock so it only includes letters in the key
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
    // First input is number of test cases
    int numOfTests;
    std::cin >> numOfTests;

    for (int i = 0; i < numOfTests; ++i) {
        // Following inputs are the string padlock and the string key
        std::string padlock, key;
        std::cin >> padlock >> key;
        
        // Find the fewest number of operations required to change the padlock to include only the letters in the key
        int numOfCases = countStr(padlock, key);
        std::cout << "Case #" << i + 1 << ": " << numOfCases << std::endl;
    }

    return 0;
}
