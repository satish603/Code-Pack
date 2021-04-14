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
				cout<<"Emp code:  "<<emp_code;
				cout<<"\n\n Name: "<<name;
				cout<<"\n\n Hra DA TA "<<hra<<da<<ta;
				
			}
			
};
int main()
{
	fstream file;
	Employee e;
	int no;
	file.open("employee.txt",ios::ate|ios::in|ios::out|ios::binary);
	int num_objects=file.tellp()/sizeof(e);
	cout<<"\n Enter th object whose recode has to search";
	cin>>no;
	int location=(no-1)*sizeof(e);
	file.seekp(location);
	cout<<"\n ENter new details:-";
	e.read_data();
	file.write((char*)&e,sizeof(e));
	file.seekg(location);
	cout<<"File updated";
	file.read((char*)&e,sizeof(e));
	e.show_data();
		return 0;
}

