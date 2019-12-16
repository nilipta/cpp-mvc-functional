
#ifndef STUDENTVIEW_H_
#define STUDENTVIEW_H_

#include "Student.h"

namespace mvc {
    
    class StudentView 
    {
    public:
        StudentView();
        virtual ~StudentView();
        
        void printStudentDetails(Student S);
    };
}

#endif
