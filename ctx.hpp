#pragma once
#include		<iostream>

class ctx
{
private:
	std::string buffer;
public:
	template <typename T>
	void Write(T sth);

	template <typename T>
	inline ctx& operator<<(T value)
	{
		Write(value);

		return *this;
	}

	std::string Read();

	void TrimBuffer(size_t);
};

template <typename T>
inline void ctx::Write(T sth) {

	size_t size = sizeof(T);
	std::string t(size, '0');
	memcpy(t.data(), &sth, size);

	buffer += t;
};
