#pragma once
#include <iostream>
#include <string>

struct Message
{
	std::string _message; // ���������
	std::string _recipient; // ����������
	std::string _sender; // �����������

	Message() // �����������
	{
		_message = "-";
		_recipient = "-";
	}
	~Message() // ����������
	{

	}
	void setMessage() //  ���� ���������
	{
		if (std::cin.peek() == '\n')
		{
			std::cin.get();// ������� ���������� � ������ ������ �������� �� ����� ������
		}
		std::getline(std::cin, _message);
	}
	void getMessage() // ����� ���������
	{
		std::cout << _message;
	}
};
