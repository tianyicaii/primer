#include <gtest/gtest.h>
#include "hello.h"

// Demonstrate some basic assertions.

TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

// fixture

class VecTest : public testing::Test {
 protected:
  VecTest() {
     // q0_ remains empty
     q1_.push_back(1);
     q2_.push_back(2);
     q2_.push_back(3);
  }

  // ~QueueTest() override = default;

  std::vector<int> q0_;
  std::vector<int> q1_;
  std::vector<int> q2_;
};

TEST_F(VecTest, IsEmptyInitially) {
  EXPECT_EQ(q0_.size(), 0);
}
