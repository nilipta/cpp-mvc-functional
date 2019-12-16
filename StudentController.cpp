
#include "Student.h"
#include "StudentController.h"

using namespace std;

namespace mvc {
    
    StudentController::StudentController(Student model)
    {
        this->model = model;
    }

    void StudentController::setStudentName(string name) {
        model.setName(name);
    }
    
    string StudentController::getStudentName()
     {
        return model.getName();
     }
     
    void StudentController::setStudentRollNo(string roll)
     {
         model.setRollNo(roll);
     }
     
    string StudentController::getStudentRollNo()
     {
         return model.getRollNo();
     }
}
