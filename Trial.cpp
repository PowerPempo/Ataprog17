#include "Trial.h"
#include <iostream>

// Реалізація конструктора
Trial::Trial(const std::string& subject, int maxScore, bool practical)
    : Test(subject, maxScore), practical(practical) {}

// Реалізація методу display
void Trial::display() const {
    Test::display();
    std::cout << "Practical: " << (practical ? "Yes" : "No") << std::endl;
}
// Реалізація методу matches
bool Trial::matches(const std::string& search) const {
    return Test::matches(search) || std::string(practical ? "Yes" : "No").find(search) != std::string::npos;
}
