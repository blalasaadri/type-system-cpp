#include <sstream>
#include <string>
#include "greeter.hpp"

std::wstring greeting(std::wstring name) {
  std::wstringstream stream;
  stream << "Hello, " << name << "!";
  return stream.str();
}
