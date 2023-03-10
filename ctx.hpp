#include <iostream>

class ctx
{
private:
	std::string buffer;
public:
	template <typename T>
	void Write(T sth);

	std::string Read();
};

template <typename T>
inline void ctx::Write(T sth) {
	size_t size = sizeof(T);
	std::string t(size, '0');
	memcpy(t.data(), &sth, size);

	buffer += t;
};