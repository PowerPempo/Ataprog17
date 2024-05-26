#include "Test.h"
#include <iostream>

Test::Test(const std::string& subject, int maxScore) : subject(subject), maxScore(maxScore) {}

std::string Test::getSubject() const {
    return subject;
}

int Test::getMaxScore() const {
    return maxScore;
}

void Test::display() const {
    std::cout << "Subject: " << subject << ", Max Score: " << maxScore << std::endl;
}

bool Test::matches(const std::string& search) const {
    return subject.find(search) != std::string::npos;
}
