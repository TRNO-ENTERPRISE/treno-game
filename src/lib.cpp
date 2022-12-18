
#include "lib.hpp"
#include <iostream>

namespace lib {

auto hallo() -> int {
    std::cout << "Hello World!";
    return 0;
}
} // namespace lib