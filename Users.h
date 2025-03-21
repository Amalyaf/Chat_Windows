#pragma once
#include <iostream>

class Users
{
public:
	std::string _name; // ���
	std::string _login; // �����
	std::string _password; // ������
	Users(); // �����������
	~Users() = default;// ����������
	void setUser(); // ����� ����������� ������ ������������
	std::string getLogin(); // ����� ���������� ����� ������������
	std::string getPassword(); // ����� ���������� ������ ������������
	std::string getName(); // ����� ���������� ��� ������������
	friend std::ostream& operator<<(std::ostream& output, const Users& user); // ���������� ��������� ������
	bool operator==(const Users& user); // ���������� ��������� ������
};
