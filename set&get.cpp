#include<iostream>
using namespace std;

class student{
private:
    string school;
public :
    string name;
    int ID;
    char sex;
    double gpa;
    student(string aName, int aId, char aSex,double aGpa){
       name = aName;
       ID = aId;
       sex = aSex;
       gpa = aGpa;
       setSchool(aGpa);
    }
    void setSchool(double aGpa){
    if (aGpa >= 3.0 && aGpa <= 4.0)
        school = "SOEEC";
    else if (aGpa >= 2.5 && aGpa < 3.0)
        school = "SOMCM";
    else if (aGpa >= 2.0 && aGpa < 2.5)
        school = "SOCA";
    else
        school = "unable to take the next semster";
    }
    string getSchool()
    {
        return school;
    }
};

int main(){
    string aName, aSchool;
    char aSex;
    int aId;
    int aGpa;
   cout << "enter your Name:---";
   cin >> aName;
   cout << "enter Your sex:----";
   cin >> aSex;
   cout << "enter Your id:----";
   cin >> aId;
   cout << "enter Your Gpa:----";
   cin >> aGpa;
   student s1(aName, aId, aSex, aGpa);
   cout <<s1.getSchool();

}

