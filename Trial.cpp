#include "Trial.h"
#include <iostream>

// ��������� ������������
Trial::Trial(const std::string& subject, int maxScore, bool practical)
    : Test(subject, maxScore), practical(practical) {}

// ��������� ������ display
void Trial::display() const {
    Test::display();
    std::cout << "Practical: " << (practical ? "Yes" : "No") << std::endl;
}
// ��������� ������ matches
bool Trial::matches(const std::string& search) const {
    return Test::matches(search) || std::string(practical ? "Yes" : "No").find(search) != std::string::npos;
}
