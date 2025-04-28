#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> first_names = {"Alice", "John", "Bob"};
    std::vector<std::string> last_names = {"Smith", "Doe", "Brown"};
    std::vector<std::string> student_ids = {"1002", "1001", "1003"};

    // Sort each vector separately
    std::sort(first_names.begin(), first_names.end());
    std::sort(last_names.begin(), last_names.end());
    std::sort(student_ids.begin(), student_ids.end());

    // Print sorted first names
    std::cout << "Sorted First Names:\n";
    for (const auto& name : first_names) {
        std::cout << name << "\n";
    }

    // Print sorted last names
    std::cout << "\nSorted Last Names:\n";
    for (const auto& name : last_names) {
        std::cout << name << "\n";
    }

    // Print sorted student IDs
    std::cout << "\nSorted Student IDs:\n";
    for (const auto& id : student_ids) {
        std::cout << id << "\n";
    }

    return 0;
}
