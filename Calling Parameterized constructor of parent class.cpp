#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        int rollno;
        string name;
        
    public:
    // this pointer hota hai c++ me, so access using this->rollno
        Student(int rollno, string name){
            this->rollno = rollno;
            this->name = name;
        }
        
        string getName(){
            return name;
        }
        
        int getRollNo(){
            return rollno;
        }
};

class CollegeStudent: public Student{
    public:
    bool gf;
    
    CollegeStudent(int rollno, string name, bool gf) : Student(rollno, name) {
        this->gf = gf;
    }
};

int main(){
    CollegeStudent a(1041,"Keshav",true);
    cout << a.getName() << " " << a.getRollNo() << " " << a.gf << "\n";
}
