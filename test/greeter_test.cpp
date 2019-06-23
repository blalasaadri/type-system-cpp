#include <gtest/gtest.h>
#include "greeter.hpp"

TEST(GreeterTest, GreetFoo) {
  ASSERT_EQ(L"Hello, foo!", greeting(L"foo"));
}
