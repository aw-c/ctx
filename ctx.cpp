#include		"ctx.hpp"


std::string ctx::Read()
{
	return buffer;
}

void ctx::TrimBuffer(size_t size)
{
	if (buffer.size() < size)
		throw;
	buffer = buffer.substr(size);
}
