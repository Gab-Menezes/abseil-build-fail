#include <iostream>
#include <string>
#include <absl/strings/str_cat.h>

int main() {
	auto s = absl::StrCat("a ", 1, " b");
	std::cout << s << '\n';

	std::cin.get();
	return 0;
}