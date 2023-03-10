#include "ctx.hpp"
#include <fstream>

using namespace std;

int main()
{
	ctx* g = new ctx();
	int32_t i = 1;
	g->Write(i);
	bool t = true;
	g->Write(t);
	string buff = g->Read();

	ofstream stream{ "test.txt" };
	stream << buff;
}