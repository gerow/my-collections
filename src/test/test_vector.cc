#include "gtest/gtest.h"
#include "mycoll/vector.h"

TEST(VectorTest, TestConstructsProperly) {
  mgcoll::vector<int> v;

  ASSERT_EQ(0, v.size());
}

TEST(VectorTest, TestPushBackProperly) {
  mgcoll::vector<int> v;

  v.push_back(1);

  ASSERT_EQ(1, v[0]);
  ASSERT_EQ(1, v.size());
}

TEST(VectorTest, TestReAllocatesProperly) {
  mgcoll::vector<int> v;

  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);

  ASSERT_EQ(1, v[0]);
  ASSERT_EQ(2, v[1]);
  ASSERT_EQ(3, v[2]);
  ASSERT_EQ(4, v[3]);
  ASSERT_EQ(5, v[4]);
  ASSERT_EQ(6, v[5]);

  ASSERT_EQ(6, v.size());
}

TEST(VectorTest, TestReassigns) {
  mgcoll::vector<int> v;

  v.push_back(1);
  v[0] = 5;

  ASSERT_EQ(5, v[0]);
}
