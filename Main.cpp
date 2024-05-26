#include <iostream>
#include <vector>
#include <algorithm>
#include "Test.h"
#include "Exam.h"
#include "FinalExam.h"
#include "Trial.h"

void displayMenu() {
    std::cout << "1. Add Test\n";
    std::cout << "2. Add Exam\n";
    std::cout << "3. Add Final Exam\n";
    std::cout << "4. Add Trial\n";
    std::cout << "5. Display All\n";
    std::cout << "6. Search\n";
    std::cout << "7. Delete\n";
    std::cout << "8. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    std::vector<Test*> tests;
    int choice;
    std::string subject, search, examinerName;
    int maxScore, duration;
    bool practical;

    while (true) {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Enter subject: ";
            std::cin >> subject;
            std::cout << "Enter max score: ";
            std::cin >> maxScore;
            tests.push_back(new Test(subject, maxScore));
            break;
        case 2:
            std::cout << "Enter subject: ";
            std::cin >> subject;
            std::cout << "Enter max score: ";
            std::cin >> maxScore;
            std::cout << "Enter duration: ";
            std::cin >> duration;
            tests.push_back(new Exam(subject, maxScore, duration));
            break;
        case 3:
            std::cout << "Enter subject: ";
            std::cin >> subject;
            std::cout << "Enter max score: ";
            std::cin >> maxScore;
            std::cout << "Enter duration: ";
            std::cin >> duration;
            std::cout << "Enter examiner name: ";
            std::cin >> examinerName;
            tests.push_back(new FinalExam(subject, maxScore, duration, examinerName));
            break;
        case 4:
            std::cout << "Enter subject: ";
            std::cin >> subject;
            std::cout << "Enter max score: ";
            std::cin >> maxScore;
            std::cout << "Enter practical (1 for Yes, 0 for No): ";
            std::cin >> practical;
            tests.push_back(new Trial(subject, maxScore, practical));
            break;
        case 5:
            for (const auto& test : tests) {
                test->display();
            }
            break;
        case 6:
            std::cout << "Enter search term: ";
            std::cin >> search;
            for (const auto& test : tests) {
                if (test->matches(search)) {
                    test->display();
                }
            }
            break;
        case 7:
            std::cout << "Enter search term for deletion: ";
            std::cin >> search;
            tests.erase(std::remove_if(tests.begin(), tests.end(), [&](Test* test) {
                if (test->matches(search)) {
                    delete test;
                    return true;
                }
                return false;
                }), tests.end());
            break;
        case 8:
            for (auto& test : tests) {
                delete test;
            }
            tests.clear();
            return 0;
        default:
            std::cout << "Invalid option. Please try again." << std::endl;
        }
    }

    return 0;
}
