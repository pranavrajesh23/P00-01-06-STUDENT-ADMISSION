#include<iostream>
#include<fstream>
using namespace std;  

string database="student.csv";
fstream fout;
int age;
string name,place,gender;

void finalize()
{
    cout<<"\n-----------------------\n";
    cout<<"\nFINALIZE PROCESS\n";
    cout<<"\nFinalizing the student admission process.\n";
    cout<<"\nThank you for completing the registration.\n";
}

void assignTutor()
{
    cout<<"\n-----------------------\n";
    cout<<"\nASSIGN TUTOR PROCESS\n";
    cout<<"\nAssign a personal tutor for the student\n";
    cout<<"\nMeet the tutor and discuss the course details\n";
    string credit;
    cout<<"\nDoes the student have extra credits? (yes/no): \n";
    cin>>credit;
    if(credit == "yes")
    {
        cout<<"\nChoose the extra credit courses.\n";
    }
    else
    {
        cout<<"\nNo extra credits assigned.\n";
    }
    finalize();
}

void accomodation()
{
    cout<<"\n-----------------------\n";
    cout<<"\nACCOMODATION PROCESS\n";
    cout<<"\nDo you need accommodation? (yes/no): \n";
    string need;
    cin>>need;  
    if(need=="yes")
    {
        cout<<"\nAssign the accommodation\n";
    }
    else
    {
        cout<<"\nNo accommodation needed.\n";
    }
    assignTutor();
}

void tutionFee()
{
    cout<<"\n-----------------------\n";
    cout<<"\nTUTION FEE PROCESS\n";
    cout<<"\nPay the tution fee\n";
    while (true)
    {
        string fee;
        cout<<"\nHave you paid the tution fee? (yes/no): \n";
        cin>>fee;
        if(fee == "yes")
        {
            cout<<"\nTution fee paid successfully.\n";
            accomodation();
            break;
        }
        else
        {
            cout<<"\nPlease pay the tution fee.\n";
        }
    }
}

void visa()
{
    cout<<"\n-----------------------\n";
    cout<<"\nVISA PROCESS PROCESS\n";
    cout<<"\nVisa process initiated\n";
    string need,applied;
    cout<<"\nDo you need a visa? (yes/no): ";
    cin>>need;  
    if(need == "yes")
    {
        cout<<"\nInform student about visa requirements.\n";
        while(true)
        {
        cout<<"\nHave you applied for the visa? (yes/no): ";
        cin>>applied;
        if(applied == "yes")
        {
            cout<<"\nVisa application is in process.\n";
            tutionFee();
            break;
        }
        else
        {
            cout<<"\nPlease apply for the visa.\n";
        }
        }
    }
    else
    {
        tutionFee();    
    }
}

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

void verification()
{
    cout<<"\n-----------------------\n";
    cout<<"\nVERIFICATION PROCESS\n";
    cout<<"\nVerify it by the admission committee\n";
    string verify;
    cout<<"\nDid you verify the data? (yes/no): ";
    cin>>verify;
    if(verify=="yes")
    {
        cout<<"\nData verified successfully.\n";
        sendToDatabase();
    }
    else
    {
        cout<<"\nPlease re-enter the data.\n";
        registeration();
    }

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