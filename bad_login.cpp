#include "bad_login.h"

const char* BadLogin::what() const noexcept
{
	return "\n������������ �� ������!\n������ ��������� ����?(y/n):";
}
