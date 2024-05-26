#include "FinalExam.h"
#include <iostream>

FinalExam::FinalExam(const std::string& subject, int maxScore, int duration, const std::string& examinerName)
    : Exam(subject, maxScore, duration), examinerName(examinerName) {}

void FinalExam::display() const {
    Exam::display();
    std::cout << "Examiner Name: " << examinerName << std::endl;
}

bool FinalExam::matches(const std::string& search) const {
    return Exam::matches(search) || examinerName.find(search) != std::string::npos;
}
