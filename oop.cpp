#include<iostream>
using namespace std;



class Employee{
public:
    string Name;
    int Age;
    string Company;

    void intro(){
        cout << "Name : " << Name << endl;
        cout << "Age : : " << Age << endl;
        cout << " Company : " << Company << endl;
    }
    // Constructor has same name as class and has no return type
    // Helps create a new instance
    // We created our constructor here, and lost the default constructor
    // Shows the format of the instance created, that it should have these parameters
    Employee(string name, int age, string company){
        Name = name;
        Age = age;
        Company = company;
    } // Means an Emplyee instance will have name, age and company as parameters

};

class Student
{
public:
    string Name;
    string Company;
    int Age;
    
    void introduction(){
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Company : " << Company << endl;
    }
    
};



//Encapsulation
class People{

private:
        string Name;
        int Age;
        string Company;
public:
        // Getters and setters:
        void setName(string name){
           // sets name of the privately declared Name from the parameter name 
            Name = name;
        }
        
        string getName(){
            // returns the Name
            return Name;
        }

        void introduction(){
        cout << "Name : " << Name << endl;
        cout << "Age : " << Age << endl;
        cout << "Company : " << Company << endl;
        }       

        People(string name, int age, string company){
            name = name;
            age = age;
            company = company;
        }


};




int main()
{
    Student student1; // A variable student of type Student
    student1.Name = "Yash";
    student1.Age = 23;
    student1.Company = "Unemployed";
    student1.introduction();

    Student student2; 
    student2.Name = "Pranjal";
    student2.Age = 22;
    student2.Company = "Besharam";
    student2.introduction();

    // Using custom constructor
    Employee employee1 = Employee("Yash Kumar", 24, "Google");
    employee1.intro();
    
    Employee employee2 = Employee("Pranjal",24, "Doctor");
    employee2.intro();
    

    // Accessing Encapsualted objects
    People person1("Yash Person", 23, "Samsung");
    person1.setName("Pranjal");
    cout << person1.getName() << endl;
    person1.introduction(); // Only the fuction can be accessed since it is declared as public
    
}


