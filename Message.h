﻿#pragma once
#include <iostream>
#include <string>

struct Message
{
	std::string _message; // сообщение
	std::string _recipient; // получатель
	std::string _sender; // отправитель

	Message() // конструткор
	{
		_message = "-";
		_recipient = "-";
	}
	~Message() // деструктор
	{

	}
	void setMessage() //  ввод сообщения
	{
		if (std::cin.peek() == '\n')
		{
			std::cin.get();// убирает оставшийся в потоке символ перехода на новую строку
		}
		std::getline(std::cin, _message);
	}
	void getMessage() // вывод сообщения
	{
		std::cout << _message;
	}
};
