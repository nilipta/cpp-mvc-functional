
#ifndef _STUDENTCONTROLLER_H_
#define _STUDENTCONTROLLER_H_

#include <string>

#include "Student.h"
#include "StudentView.h"

namespace mvc {
    
    class StudentController {
        
        public:
            StudentController(Student model);
            virtual ~StudentController(){}
            
            void setStudentName(std::string name);
            std::string getStudentName();
            
            void setStudentRollNo(std::string name);
            std::string getStudentRollNo();
            
        private:
            Student model;
    };
}

#endif
