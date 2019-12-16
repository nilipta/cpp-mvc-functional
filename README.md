# MVC code
> lambda code in main

```cpp
Connection c1 = model.connect([&](const Student& mo) {
		view.printStudentDetails(mo);
	});
```
1. the responsible code for lambda function

> #include <functional>

## how the code uses the register the model for view in controller

```cpp
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

```
## better for loop

```cpp
void Student::notify() const
    {
        for(const auto& listener:listeners_)
            listener(*this);
    }

```

## use **virtual destructor**

```cpp

virtual ~StudentController(){}

```

## analyse why these type ofmentions are needed???

```cpp
StudentView::StudentView()
    {
        
    }
    
StudentView::~StudentView()
    {
        
    }

```

# output

```
_
-------- printing data ----------
Student :
Name : Nilipta
Roll No : 10
Student :
Name : Rajat
Roll No : 10
_
```
