#include<iostream>
#include<fstream>
using namespace std;  

string database="student.csv";
fstream fout;
int age;
string name,place,gender;


void sendToDatabase()
{
    cout<<"\n-----------------------\n";
    cout<<"\nSAVING DATA TO DATABASE PROCESS\n";
    cout<<"\nSending the data to corresponding departments\n";
    fout.open(database, ios::out | ios::app);
    fout<<name<<","<<age<<","<<place<<","<<gender<<"\n";
    fout.close();
    cout<<"\nData saved successfully.\n";
    visa();
}

void registeration()
{
    cout<<"\n-----------------------\n";
    cout<<"\nREGISTRATION PROCESS\n";
    cout<<"\nComplete the registration\n-------------------\n";
    cout<<"\nEnter Name: \n";
    cin>>name;
    cout<<"\nEnter Age: \n";
    cin>>age;
    cout<<"\nEnter Place: \n";
    cin>>place;
    cout<<"\nEnter gender: \n"; 
    cin>>gender;
    verification();
}

int main()
{
    cout<<"Student Admission Process\n";
    registeration();
    cout<<"End of Student Admission Process\n";
}