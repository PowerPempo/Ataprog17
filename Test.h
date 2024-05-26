#ifndef TEST_H
#define TEST_H

#include <string>

class Test {
protected:
    std::string subject;
    int maxScore;

public:
    Test(const std::string& subject, int maxScore);
    virtual ~Test() = default;

    std::string getSubject() const;
    int getMaxScore() const;

    virtual void display() const;
    virtual bool matches(const std::string& search) const;
};

#endif // TEST_H
