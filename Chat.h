#pragma once
#include <vector>
#include "Users.h"
#include "Message.h"

constexpr auto userData = "C:/Windows/Temp/userData.txt";	// ���� ��� �������� ������ ������������� 
constexpr auto user_count = "C:/Windows/Temp/user_count.txt";	// ���� ��� �������� ���-�� ������������������ �������������
constexpr auto private_message = "C:/Windows/Temp/private_message.txt";	// ���� ��� �������� ��������������� ������ ���������
constexpr auto public_message = "C:/Windows/Temp/public_message.txt";	// ���� ��� �������� ������������� ����� ���������
constexpr auto prvt_msg_count = "C:/Windows/Temp/private_message_count.txt";   // ���� ��� �������� ���-�� ������ ������������� ���������
constexpr auto pblc_msg_count = "C:/Windows/Temp/public_message_count.txt";   // ���� ��� �������� ���-�� ����� ������������� ���������

class Chat
{
private:
	std::vector<Users> allUsers; // ��� ������������������ ������������
	std::string _recipient; //���������� ���������
	std::string _sender; // ����������� ���������
	std::string _login; // ����� ��������������� ������������
	std::string _password; // ������ ��������������� ������������
	std::vector<Message>allMessage; // ��� ����� ��������� ���������
	std::vector<Message>allPublicMessage; // ��� ����� ����� ���������
	std::vector<Message>viewedMessage; // ������������� ���������
	bool _status = false; // ���� ��� �������� ���� ������ = true, � ��������� ������ - false.
public:
	Chat(); // �����������
	~Chat(); // ����������
	void writeUsers() const; // ����� ��� ������ ������ � ������������� � ����
	void writeMessage() const; // ����� ��� ������ ������ � ���������� � ����
	void readUsers(); // ����� ��� ������ ������ � ������������� �� �����
	void readPrivateMessage(); // ����� ��� ������ ������ ��������� �� �����
	void readPublicMessage(); // ����� ��� ������ ����� ��������� �� �����			   
	int getReadUsersStatus(); // ����� ������� 1, ���� ���� ���� userData, ����� -1
	void getChat(); // ����� ������� ������ ������������
	void enter(); // ����������� ������������
	void registration(); //  ����������� ������������
	void sendPrivateMessage(); // �������� ������ ���������
	void sendPublicMessage(); // �������� ��������� ���������
	bool getstatus(); // ����� ������� ������ ����������� (_status)
	void exit(); // ����������� ��������������� ������������
	void printMessage(std::string recipient); // ����� �� ����� ����� ���������
	void deletePrivateMessage(std::string recipient); // ����������� ����������� ������ ��������� � viewedMessage � �� �������� �� allMessage
	void deletePublicMessage(std::string recipient); // �������� ����������� ����� ��������� �� allPublicMessage
	void printAllMessage(); // ����� �� ����� ���� ������������� ������ ���������
	void start(); // ������ ������ ���������
};
