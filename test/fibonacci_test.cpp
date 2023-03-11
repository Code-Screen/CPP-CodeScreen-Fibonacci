#include <gtest/gtest.h>

#include "fibonacci.h"

TEST(fibonacci, test1) {
  EXPECT_EQ(fibonacci(0), 0);
}

TEST(fibonacci, test2) {
  EXPECT_EQ(fibonacci(5), 5);
}

TEST(fibonacci, test3) {
  EXPECT_EQ(fibonacci(20), 6765);
}

TEST(fibonacci, test4) {
  EXPECT_EQ(fibonacci(25), 75025);
}
