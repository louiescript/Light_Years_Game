#pragma once

#include <print>
#include <memory>
#include <map>
#include <unordered_map>

using std::println;

namespace ly
{
	//the reason for this is to swap out the definition in the future
	template<typename T>
	using unique = std::unique_ptr<T>;

	template<typename T>
	using shared = std::shared_ptr<T>;

	template<typename T>
	using weak = std::weak_ptr<T>;

	template<typename T>
	using list = std::vector<T>;

	template<typename key, typename value, typename predicate = std::less<key>>
	using map = std::map<key, value, predicate>;

	template<typename key, typename value, typename hasher = std::hash<key>>
	using dictionary = std::unordered_map<key, value, hasher>;

	//a macro
	#define LOG(M, ...) println(M, ##__VA_ARGS__)
}



