// Copyright 2018 Your Name <your_email>

#include <gtest/gtest.h>
#include "header.hpp"
TEST(SharedPtr, value )
{
    int*a = new int;
    a[0] = 10;
    SharedPtr<int> test(a);
    EXPECT_EQ(static_cast<int>(test._adress[0]), 10);
}
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
