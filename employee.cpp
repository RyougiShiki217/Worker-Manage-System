#include"employee.h"
Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}
void Employee::Show_info()
{
	cout << "ְ�����: " << this->m_id
		<< "\tְ������: " << this->m_name
		<< "\tְ����λ: " << this->getDeptname()
		<< "\tְ��: ��ɾ�������������" << endl;
}
string Employee::getDeptname()
{
	return "Ա��";
}