module;

#include <string>
#include <list>

export module engine_basic;

using std::string;
using std::list;

namespace engine::args
{
	static int fps;
	static int tps;
	static string title;

	export void setFPS(int) noexcept(false);
	export void setTPS(int) noexcept(false);
	export void setTitle(string) noexcept;
}

namespace engine::data
{
	export class GameObject
	{
	protected:
		int ID;

	public:
		GameObject();
		~GameObject();
	};
}