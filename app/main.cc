#include <iostream>

#include <nlohmann/json.hpp>
#include "lib.h"

int main()
{
    print_hello_world();

    std::cout << "JSON Lib Version:"
                << NLOHMANN_JSON_VERSION_MAJOR << "."
                << NLOHMANN_JSON_VERSION_MINOR << "."
                << NLOHMANN_JSON_VERSION_PATCH << std::endl;

    return 0;
}