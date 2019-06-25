#include <gtest/gtest.h>
#include "templates.hpp"

TEST(TemplatesTest, MaxValuesOfNumbers) {
  EXPECT_EQ((signed char) 5, GetMax((signed char) 2, (signed char) 5));
  EXPECT_EQ((signed char) 5, GetMax((signed char) 5, (signed char) 2));

  EXPECT_EQ((short) 5, GetMax((short) 2, (short) 5));
  EXPECT_EQ((short) 5, GetMax((short) 5, (short) 2));

  EXPECT_EQ(5, GetMax(2, 5));
  EXPECT_EQ(5, GetMax(5, 2));

  EXPECT_EQ(5L, GetMax(2L, 5L));
  EXPECT_EQ(5L, GetMax(5L, 2L));

  EXPECT_EQ(5UL, GetMax(2UL, 5UL));
  EXPECT_EQ(5UL, GetMax(5UL, 2UL));

  EXPECT_EQ(5LL, GetMax(2LL, 5LL));
  EXPECT_EQ(5LL, GetMax(5LL, 2LL));

  EXPECT_EQ(5ULL, GetMax(2ULL, 5ULL));
  EXPECT_EQ(5ULL, GetMax(5ULL, 2ULL));

  EXPECT_EQ(5.f, GetMax(2.f, 5.f));
  EXPECT_EQ(5.f, GetMax(5.f, 2.f));

  EXPECT_EQ(5., GetMax(2., 5.));
  EXPECT_EQ(5., GetMax(5., 2.));
}

TEST(TemplatesTest, MaxValuesOfOtherComparableTypes) {
  // Some of these may not be intuitive; maybe look into why they work?
  EXPECT_EQ("Hello", GetMax("Hello", "World"));
  EXPECT_EQ("Hello", GetMax("World", "Hello"));

  EXPECT_EQ('b', GetMax('a', 'b'));
  EXPECT_EQ('b', GetMax('b', 'a'));

  EXPECT_EQ(true, GetMax(true, false));
  EXPECT_EQ(true, GetMax(false, true));
}