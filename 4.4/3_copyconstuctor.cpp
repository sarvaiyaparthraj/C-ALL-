#include<iostream>
using namespace std;


class Student
{
  
    private:
        
     int Rollno;
     string name;

     public:
      Student(int Rollno, string name)

      {
          this->Rollno = Rollno;
          this->name = name;
         
      }
      Student(const Student &s)
      {
        Rollno = s.Rollno;
        name = s.name;

      }

      void DispalyStudentDetails()
      {
        cout << "student name is "  << name << " and their roll no is "<< Rollno << endl;

      }


};

int main()
{
  Student s1(19,"admin");

  s1.DispalyStudentDetails();

  Student s2 = s1;

    return 0;
}
