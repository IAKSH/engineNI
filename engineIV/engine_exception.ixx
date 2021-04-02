module;

#include <stdexcept>

export module engine_exception;

namespace exception
{
	export class badKeyboard : public std::exception
	{
	private:
		const char* info;

	public:
		badKeyboard(const char*);
		~badKeyboard();

		const char* what() const override;
	};
}