#pragma once

#include <print>
#include <memory>

using std::println;

namespace ly
{
	template<typename T>
	using unique = std::unique_ptr<T>;

	//a macro
	#define LOG(M, ...) println(M, ##__VA_ARGS__)
}



