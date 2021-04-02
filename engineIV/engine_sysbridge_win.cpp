// sysbridge在Windows下的实现
// -------------------------
module;

#include <iostream>
#include <stdexcept>
#include <Windows.h>

module engine_sysbridge;

import engine_exception;

namespace sysbridge::keyboard
{
	bool checkKeyDown(int key) noexcept
	{
		short vkCode;

		switch (key)
		{
		case 36:
			vkCode = VK_F1;
			break;
			//case static_cast<int>(keyboard::Key::B):

			//case static_cast<int>(keyboard::Key::C) :

			// so on ...
		default:
			return false;
			break;
		}

		return (GetAsyncKeyState(vkCode) && 0x8000);
	}
}