module;

#include <string>
#include <list>
#include <vector>

export module engine_basic;

using std::vector;
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
	export class Component
	{
	protected:
		const int ID;

	public:
		Component();
		~Component();
	};
	export class GameObject
	{
	protected:
		const int ID;
		vector <Component&> compContainer;

	public:
		GameObject();
		~GameObject();
	};

	static vector<GameObject&> gameObjectSampleContainer;
	static vector<GameObject*> gameObjectExampleContainer;

	export void pushGameObjectSample(GameObject&);
	export void pushGameObjectExample(GameObject&);
	export const GameObject& accessGameObjectSample(int);
	export const GameObject& accessGameObjectExample(int);
}