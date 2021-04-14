#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
	private:
		int emp_code;
		char name[20];
		int hra;
		int da;
		int ta;
		public:
			void read_data()
			{
				cout<<"\n\nEnter employee code:";
				cin>>emp_code;
				cout<<"\n\n Enter the name of the employee: ";
				cin>>name;
				cout<<"\n\n Enter HRA DA and TA: ";
				cin>>hra>>da>>ta;
				
			}
			void show_data()
			{
				cout<<"\nEmp code:  "<<emp_code;
				cout<<"\n\n Name: "<<name;
				cout<<"\n\n Hra DA TA "<<hra<<da<<ta;
				
			}
			
};
int main()
{
	fstream file;
	Employee e[3],d[3];
	int i;
	file.open("employee.txt",ios::out|ios::binary);
	cout<<"\n Enter the detail of 3 emp";
	for(i=0;i<3;i++)
	{
		e[i].read_data();
		file.write((char*)&e[i],sizeof(e[i]));
		
	}
	file.close();
	file.open("employee.txt",ios::in|ios::binary);
	for(i=0;i<3;i++)
	{
		file.read((char*)&d[i],sizeof(d[i]));
		d[i].show_data();
	}
	return 0;
}




