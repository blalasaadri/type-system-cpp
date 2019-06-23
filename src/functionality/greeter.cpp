#include <sstream>
#include <string>

std::wstring greeting(std::wstring name) {
  std::wstringstream stream;
  stream << "Hello, " << name << "!";
  return stream.str();
}
