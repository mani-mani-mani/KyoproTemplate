#pragma once
#include "pch.h"

template<typename T>
class Factorial {
private:
	static std::vector<T> memo_;
	static T calc_(T n) {
		// already calurated
		if (memo_[n] != -1) {
			return memo_[n];
		}
		if (n == 0) {
			return 1;
		}
		if (n == 1) {
			return 1;
		}
		// recursive
		return n * calc_(n - 1);
	}
public:
	static T at(T n) {
		if (memo_.size() <= n) {
			memo_.resize(n + 1, -1);
		}
		// already calcurated
		if (memo_[n] != -1) {
			return memo_[n];
		}
		// calcurate factorial
		memo_[n] = calc_(n);
		return memo_[n];
	}
};

template <typename T>
std::vector<T> Factorial<T>::memo_(0);
