#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int arr[] = {4, 2, 5, 2, 8, 4, 2, 5, 4, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::map<int, int> countMap;
    for (int i = 0; i < size; ++i) {
        countMap[arr[i]]++;
    }

    std::vector<std::pair<int, int>> countVec(countMap.begin(), countMap.end());
    std::sort(countVec.begin(), countVec.end(), [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.second > b.second;
    });

    for (const auto& pair : countVec) {
        std::cout << pair.first << " : " << pair.second << std::endl;
    }

    return 0;
}
