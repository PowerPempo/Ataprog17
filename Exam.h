#ifndef EXAM_H
#define EXAM_H

#include "Test.h"

class Exam : public Test {
protected:
    int duration;

public:
    Exam(const std::string& subject, int maxScore, int duration);
    void display() const override;
    bool matches(const std::string& search) const override;
};

#endif // EXAM_H
