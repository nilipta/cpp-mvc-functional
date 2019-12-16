
#include <iostream>
#include "StudentController.h"
#include "StudentView.h"
#include "Student.h"

using namespace mvc;
using namespace std;

using namespace mvc;
using namespace std;

Student fetchStudentFromDatabase() {
	Student S;
	S.setName("Pepito");
	S.setRollNo("10");
	return S;
}

int main()
{
	Student model = fetchStudentFromDatabase();
	
	StudentView view = StudentView();
	
	Connection c1 = model.connect([&](const Student& mo) {
		view.printStudentDetails(mo);
	});
	
	StudentController controller = StudentController(model);
	
	cout << "-------- printing data ----------" <<endl;
	controller.setStudentName("Nilipta");
	controller.setStudentName("Rajat");
	

	return 0;
}


