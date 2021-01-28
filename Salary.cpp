#include <iostream>
#include <string>
int cal_com(int salary,int sale,int Percent_com);
using namespace std;
int main()
{
	string name;
	int salary,sale,Percent_com,tcp,total;
	cout<<"*************Homework 2 Salary**************"<<endl;
	cout<<"Enter Name : ";
	cin>>name;
	cout<<"Enter Salary : ";
	cin>>salary;
	cout<<"Enter Sale : ";
	cin>>sale;
	cout<<"Enter Commisstion Percent: ";
	cin>>Percent_com;
	cout<<"----------------output----------------"<<endl;
	cout<<"Your Name = "<<name<<endl;
	cout<<"Total Revenue : "<<cal_com(salary,sale,Percent_com)<<" Bath"<<endl;
}
int cal_com(int salary,int sale,int Percent_com)
{

	int total;
	int tcp;
	tcp = Percent_com*sale/100;
	total = tcp+salary;
	return(total);

}