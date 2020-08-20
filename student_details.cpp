#include <iostream>
using namespace std;

class student
{
	private:
		char  name[30];
		int   rollNo;
		int   total=0;
		int   marks[5];
		float per=0.0;
	public:
		void getDetails(void);
		void putDetails(void);
};

void student::getDetails(void){
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter marks in Subject"<<i+1<<":";
        cin>>marks[i];
        total+=marks[i];
    }
	per=total/5;
}

void student::putDetails(void){
	cout << "Student details:\n";
	cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total<<", Percentage:"<<per;
}

int main()
{
	student std;		
	
	std.getDetails();
	std.putDetails();
	
	return 0;
}
