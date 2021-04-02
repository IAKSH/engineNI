module;

#include <string>
#include <stdexcept>

module engine_basic;

using std::string;

namespace engine::args
{
	void setFPS(int _fps) noexcept(false)
	{
		if (_fps <= 0)
		{
			throw std::invalid_argument("fps isn't a positive integer");
		}
		else
		{
			fps = _fps;
		}
	}

	void setTPS(int _tps) noexcept(false)
	{
		if (_tps <= 0)
		{
			throw std::invalid_argument("tps isn't a positive integer");
		}
		else
		{
			tps = _tps;
		}
	}

	void setTitle(string _title) noexcept
	{
		title = _title;
	}
}