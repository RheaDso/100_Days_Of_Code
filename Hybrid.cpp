#include<iostream>

using namespace std;

class person
{
    protected:
    char name[20];
    int age;

    public:
    void getdata1()
    {
        cout<<"Enter Employee Name: "<<endl;
        cin>>name;
        cout<<"Enter the Employee Age: "<<endl;
        cin>>age;
    }
    void putdata1()
    {
        cout<<"\nEmployee Name: "<<name;
        cout<<"\nEmployee Age: "<<age;
    }
};
class employee: public person
{
    protected:
    char designation[20];
    int basic, DA, HRA, CCA;

    public:
    void getdata2()
    {
        cout<<"Designation of the Employee: "<<endl;
        cin>>designation;
        cout<<"Basic = "<<endl;
        cin>>basic;
        cout<<"DA = "<<endl;
        cin>>DA;
        cout<<"HRA = "<<endl;
        cin>>HRA;
        cout<<"CCA = "<<endl;
        cin>>CCA; 
    }
    void putdata2()
    {
        cout<<"\nDesignation = "<<designation;
        cout<<"\nBasic = "<<basic;
        cout<<"\nDA = "<<DA;
        cout<<"\nHRA = "<<HRA;
        cout<<"\nCCA = "<<CCA;
    }
};
class salary: public employee
{
    protected:
    int total_salary;

    public:
    void display()
    {
        total_salary = basic + DA + HRA +CCA;
        cout<<" Total Salary : " <<total_salary;
    }
};
int main()
{
    salary s;
    
    s.getdata1();
    s.getdata2();
    cout<<"--------------------------"<<endl;
    s.putdata1();
    s.putdata2();
    cout<<"--------------------------"<<endl;
    s.display();

    return 0;
}
