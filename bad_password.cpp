#include "bad_password.h"

const char* BadPassword::what() const noexcept
{
	return "\n������������ ������!\n������ ��������� ����?(y/n):";
}
