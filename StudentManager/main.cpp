#include <bits/stdc++.h>
using namespace std;

struct StudentInformation
{
    int ID;
    string Name;
    int Age;
    string Department;
    float CGPA;
};

vector<StudentInformation> Students;

void addStudent()
{
    StudentInformation S;
    cout<<"Enter ID: ";
    cin>>S.ID;
    cin.ignore();

    cout<<"Enter name: ";
    getline(cin, S.Name);

    cout<<"Enter Age: ";
    cin>>S.Age;
    cin.ignore();

    cout<<"Enter Department: ";
    getline(cin, S.Department);

    cout<<"Enter CGPA: ";
    cin>>S.CGPA;
    cin.ignore();

    Students.push_back(S);
    cout<<"\nStudent Information Added Successfully.\n";

}

void displayStudents()
{
    if(Students.empty())
    {
        cout<<"\nNo Student Available.\n";
        return;
    }
    cout<<"All Students...\n";
    for(auto S : Students)
    {
        cout<<"ID: "<<S.ID;
        cout<<"Name: "<<S.Name;
        cout<<"Age: "<<S.Age;
        cout<<"Department: "<<S.Department;
        cout<<"CGPA: "<<S.CGPA<<endl;
    }
    cout<<endl;
}

int main()
{
    int choice;
    do
    {
        cout<<"1.Add New Student\n";
        cout<<"2.Display Student\n";
        cout<<"3.Search Student\n";
        cout<<"4.Update Student\n";
        cout<<"5.Delete Student\n";
        cout<<"6.Exit\n";

        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();

        switch(choice)
        {
        case 1:
            addStudent();
            break;
        case 2:
            displayStudents();
            break;
        case 3:
            cout<<"Search Student feature is not available right now.It will be added soon...";
            break;
        case 4:
            cout<<"Update Student feature is not available right now.It will be added soon...";
            break;
        case 5:
            cout<<"Delete Student feature is not available right now.It will be added soon...";
            break;
        case 6:
            cout<<"Exiting...\n";
            break;
        default:
            cout<<"Invalid Choice.Try Again...\n";

        }
    }
    while(choice != 6);

    return 0;
}
