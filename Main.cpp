#include <iostream>
#include <emscripten/emscripten.h>
#include <emscripten/fetch.h>

int main()
{
	std::cout << std::endl;
	return 0;
}

extern "C"
{
	EMSCRIPTEN_KEEPALIVE
	int Return_69()
	{
		return 69;
	}
}