#include<iostream>
using namespace std;
class Student{
    private:
    string Student_id;
    float gpa;
    public:
    Student(string id ,float g)
    {
        cout << "Student constructor\n";
        Student_id=id;
        gpa=g;
    }
    void display_studentinfo()
    {
        cout << "Student id is :"<<Student_id<<endl;
        cout << "Gpa of student is :"<<gpa<<endl; 
    }
};
class Instructer{
    private:
    string employee_id;
    string subject;
    public:
    Instructer(string emp,string sub )
    { 
        cout << "Instructor constructor\n";
        employee_id=emp;
        subject=sub;
    }
    void display_instructorinfo()
    {
        cout << "Employee id of instructer is :"<<employee_id<<endl;
        cout << "Instructer Subject :"<<subject<<endl;
    }
    

};
class Teacher_Assistant:public Student,public Instructer
{
    private:
    int working_hours;
    public:
    Teacher_Assistant(string id,float gp,string e,string s,int w_h):
    Student(id,gp),Instructer(e,s),working_hours(w_h)
    {
        cout << "Teacher Assistant constructor\n";
    }
    void display()
    {
        display_studentinfo();
        display_instructorinfo();
        cout << "Working hours of TA is :"<<working_hours<<endl;
    }

};
int main()
{
    Teacher_Assistant T("BSE253190",3.44,"SE2213","OOP",12);
    T.display();
    return 0;
}
