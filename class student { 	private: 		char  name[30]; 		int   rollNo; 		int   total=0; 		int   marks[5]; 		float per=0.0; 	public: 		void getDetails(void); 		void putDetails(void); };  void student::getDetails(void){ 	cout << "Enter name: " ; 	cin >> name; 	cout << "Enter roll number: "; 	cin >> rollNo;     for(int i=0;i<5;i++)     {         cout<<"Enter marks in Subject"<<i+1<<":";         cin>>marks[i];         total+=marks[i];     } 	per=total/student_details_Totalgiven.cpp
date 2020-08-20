class student
{
	private:
		char  name[30];
		int   rollNo;
		int   total=0;
	public:
		void getDetails(void);
		void putDetails(void);
};

void student::getDetails(void){
	cout << "Enter name: " ;
	cin >> name;
	cout << "Enter roll number: ";
	cin >> rollNo;
  cout<<"Enter total marks:";
  cin>>total;
}

void student::putDetails(void){
	cout << "Student details:\n";
	cout << "Name:"<< name << ",Roll Number:" << rollNo << ",Total:" << total<<;
}

int main()
{
	student std;		
	
	std.getDetails();
	std.putDetails();
	
	return 0;
}
