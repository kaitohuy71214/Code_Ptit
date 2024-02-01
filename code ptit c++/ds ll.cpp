#include <bits/stdc++.h>
using namespace std;
struct Student
{
    string MSV, Name, Class, Email, Phone;
    void input (){
        getline( cin, Name);
        getline( cin, Class);
        getline( cin, Email);
        getline( cin, Phone);
    } 
};
bool compare(const Student& student1, const Student& student2){
    if (student1.Name == student2.Name)
    {
        return student1.MSV < student2.MSV;
    }
    return student1.Class < student2.Class;
    
}
int main(){
    ifstream inputFile("DANHSACH.in");
    vector<Student> students;
    string line;
    while (getline(inputFile, line))
    {
        Student student;
        student.MSV = line;
        student.input();
        student.Phone = "0" + student.Phone;
        students.push_back(student);
    }
    inputFile.close();
    sort(students.begin(), students.end(), compare);
    ofstream outputFile("DANHSACH.out");
    for ( const auto& student : students){
        outputFile << student.MSV << " " << student.Name << " " << student.Class << " " << student.Email << " " << student.Phone << endl;
    }
    outputFile.close();
    return 0;
}