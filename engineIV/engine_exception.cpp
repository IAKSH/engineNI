module;

#include <stdexcept>

module engine_exception;

namespace exception
{
	badKeyboard::badKeyboard(const char* _info):info(_info)
	{};
	badKeyboard::~badKeyboard() = default;

	const char* badKeyboard::what() const
	{
		return info;
	}
}