#ifndef STUDENT_H
#define STUDENT_H


#include <string>
#include <functional>
#include <list>

namespace mvc {
	
	class Student;
	
	using Listener = std::function<void(const Student&)>;
	using Connection = std::list<Listener>::iterator;
	
	class Student {
		public:
			const std::string& getName() const;
			void setName(const std::string& name);
			
			const std::string& getRollNo() const;
			void setRollNo(const std::string& roll);
			
			Connection connect(Listener I);
			void disconnect(Connection C);
			
		private:
			std::string RollNo;
			std::string Name;
			
			std::list<Listener> listeners_;
			
			void notify() const;
 	};
}

#endif
