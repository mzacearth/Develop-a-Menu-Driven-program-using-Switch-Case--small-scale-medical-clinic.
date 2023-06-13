#include <iostream>
using namespace std;

class patient{

	private:
		
		int Phone,doctorFee,medicine_charge,Total;
		string Address,Blood_Group,doctor_Name,	app_date,DiagnosisInfo,MedicineInfo,Gender;
		
	public:
		int patientID;
		string PName;
		
		void getPatientInfo();
		void putPatientInfo();
		void makeAppointment();
		void Diagnosis();
		void Billing();
		void printBill();
	
};
		
void patient :: putPatientInfo()
{
	cout<<endl<<"patient ID: "<<patientID<<endl;
	cout<<"patient Name: "<<PName<<endl;
	cout<<"Address: "<<Address<<endl;
	cout<<"Gender: "<<Gender<<endl;
	cout<<"Phone: "<<Phone<<endl;
	cout<<"Blood Group: "<<Blood_Group<<endl;
			
};
		
void patient :: getPatientInfo()
{
	cout<<endl<<"Enter patient ID: ";
	cin>>patientID;
	cout<<"Enter patient Name: ";
	cin>>PName;
	cout<<"Enter Address: ";
	cin>>Address;
	cout<<"Enter Gender: ";
	cin>>Gender;
	cout<<"Enter Phone: ";
	cin>>Phone;
	cout<<"Enter Blood Group: ";
	cin>>Blood_Group;
};
		
void patient :: makeAppointment()
{
	cout<<endl<<"Enter doctor Name: ";
	cin>>doctor_Name;
	cout<<"Enter appointment date: ";
	cin>>app_date;
};
		
		
void patient :: Diagnosis()
{
	cout<<endl<<"Enter Diagnosis Information: ";
	cin>>DiagnosisInfo;
	cout<<"Enter Medicine Information: ";
	cin>>MedicineInfo;
};
		
void patient :: Billing()
{
	cout<<endl<<"Enter doctor Fee: ";
	cin>>doctorFee;
	cout<<"Enter medicine charge: ";
	cin>>medicine_charge;
	Total=medicine_charge+doctorFee;
};
		
			
void patient :: printBill()
{	
	cout<<endl<<"patient ID: "<<patientID<<endl;
	cout<<"patient Name: "<<PName<<endl<<"------------------"<<endl;
	cout<<endl<<"Doctor Fee: "<<doctorFee<<endl;
	cout<<"Medicine charge:"<< medicine_charge<<endl<<"------------------"<<endl;
	cout<<"Total: "<<Total<<endl;
};
		

int main()
{
	patient p;
	int c=0;
	while (1)
	{
		cout<<endl<<"1: Enter Patient Info\n2: print Patient Info\n3: Make Appointment\n4: Diagnosis\n5: Billing\n6: print Bill\n7: Exit\n"<<"Enter choice : ";
		cin>>c;
		switch(c)
		{
			case 1:
				p.getPatientInfo();
				break;
			
			case 2:
				p.putPatientInfo();
				break;
				
			case 3:
				p.makeAppointment();
				break;
				
			case 4:
				p.Diagnosis();
				break;
				
			case 5:
				p.Billing();
				break;
				
			case 6:
				p.printBill();
				break;
				
			case 7:
				cout<<"EXITING";
				return 0;
				
		}
	}
	return 0;
}
