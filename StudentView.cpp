
#include "StudentView.h"
#include <iostream>

using namespace std;

namespace mvc
{

    StudentView::StudentView()
    {
        
    }
    
    StudentView::~StudentView()
    {
        
    }

    void StudentView::printStudentDetails(Student S)
    {
        cout << "Student :" << endl;
        cout << "Name : " << S.getName() << endl;
        cout << "Roll No : " << S.getRollNo() << endl;
    }

}
