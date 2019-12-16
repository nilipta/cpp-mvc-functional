
#include "Student.h"

#include <string>
#include <stdexcept>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;

namespace mvc {
    
    const string& Student::getName() const
    {
        return this->Name;
    }
    
    void Student::setName(const string& name)
    {
        this->Name = name;
        notify();
    }
    
    const string& Student::getRollNo() const
    {
        return this->RollNo;
    }
    
    void Student::setRollNo(const string& roll)
    {
        this->RollNo = roll;
        notify();
    }
    
    Connection Student::connect(Listener I)
    {
        return listeners_.insert(listeners_.end(), I);
    }
    
    void Student::disconnect(Connection C)
    {
        listeners_.erase(C);
    }
    
    void Student::notify() const
    {
        for(const auto& listener:listeners_)
            listener(*this);
    }
}
