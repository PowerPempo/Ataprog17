#include "Exam.h"
#include <iostream>

Exam::Exam(const std::string& subject, int maxScore, int duration)
    : Test(subject, maxScore), duration(duration) {}

void Exam::display() const {
    Test::display();
    std::cout << "Duration: " << duration << " minutes" << std::endl;
}

bool Exam::matches(const std::string& search) const {
    return Test::matches(search) || std::to_string(duration).find(search) != std::string::npos;
}
