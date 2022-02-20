#include <iostream>
#include <string>

// Find the trash bin closest to a house
int findClosestBin(std::string bins, int index) {
    int rightDistance = -1.0, leftDistance = -1.0;

    // Check from index to end for bin
    for (int i = 1; i <= bins.size() - index; i++) {
        if (bins[index + i] == 49) {
            rightDistance = i;
            break;
        }
    }

    // Check from index to beginning for bin
    for (int i = -1; i >= -1 * (index); i--) {
        if (bins[index + i] == 49) {
            leftDistance = -1 * i;
            break;
        }
    }

    // if either distance is negative, return the other
    if (rightDistance < 0) {
        return leftDistance;
    }
    else if (leftDistance < 0) {
        return rightDistance;
    }

    //otherwise return whichever distance is smaller
    if (rightDistance < leftDistance) {
        return rightDistance;
    }
    else {
        return leftDistance;
    }
}

int main() {
    // First input is the number of test cases
    int numOfTests;
    std::cin >> numOfTests;

    std::string bins;
    int numOfHouses;
    int caseCount = 0;

    while (caseCount < numOfTests) {
        caseCount++;
        // Next inputs are an integer for the number of houses and a string denoting houses with a trash bin as 1 and houses without as a 0
        std::cin >> numOfHouses >> bins;

        int distanceSum = 0;

        for (int i = 0; i < numOfHouses; i++) {
            // Only find the closest bin for houses without a bin
            if (bins[i] == 48) {
                distanceSum += findClosestBin(bins, i);
            }
        }

        std::cout << "Case #" << caseCount << ": " << distanceSum << std::endl;;

    }
}
