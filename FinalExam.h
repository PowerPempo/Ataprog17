#ifndef FINALEXAM_H
#define FINALEXAM_H

#include "Exam.h"

class FinalExam : public Exam {
protected:
    std::string examinerName;

public:
    FinalExam(const std::string& subject, int maxScore, int duration, const std::string& examinerName);
    void display() const override;
    bool matches(const std::string& search) const override;
};

#endif // FINALEXAM_H
