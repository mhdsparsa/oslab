#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Student {
    std::string first_name;
    std::string last_name;
    std::string student_id;
};

int main() {
    std::vector<std::string> first_names = {"Alice", "John", "Bob"};
    std::vector<std::string> last_names = {"Smith", "Doe", "Brown"};
    std::vector<std::string> student_ids = {"1002", "1001", "1003"};

    // Bundle into one vector
    std::vector<Student> students;
    for (size_t i = 0; i < first_names.size(); ++i) {
        students.push_back({first_names[i], last_names[i], student_ids[i]});
    }

    // Sort by first name
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.first_name < b.first_name;
    });

    // Unpack back to separate vectors (optional)
    first_names.clear();
    last_names.clear();
    student_ids.clear();

    for (const auto& student : students) {
        first_names.push_back(student.first_name);
        last_names.push_back(student.last_name);
        student_ids.push_back(student.student_id);
    }

    // Print results
    for (size_t i = 0; i < first_names.size(); ++i) {
        std::cout << first_names[i] << " " << last_names[i] << " (ID: " << student_ids[i] << ")\n";
    }

    return 0;
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    std::vector<std::string> first_names = {"Alice", "John", "Bob","Mahdis","Nikoo","Arya","Ali"};
    std::vector<std::string> last_names = {"Smith", "Doe", "Brown","Parsa","Gholami","Hasani","Nezhadjavad"};
    std::vector<std::string> student_ids = {"1002", "1001", "1003","8004","8105","8055","1014"};

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
