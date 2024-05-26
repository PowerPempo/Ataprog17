#ifndef TRIAL_H
#define TRIAL_H

#include "Test.h"

class Trial : public Test {
protected:
    bool practical;

public:
    Trial(const std::string& subject, int maxScore, bool practical);
    void display() const override;
    bool matches(const std::string& search) const override;
};

#endif // TRIAL_H
