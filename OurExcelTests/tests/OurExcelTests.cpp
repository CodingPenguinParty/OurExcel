//
// Created by Nikolay Fedotenko on 04.10.2021.
//

#include <gtest/gtest.h>

TEST(OurExcelTests, EmptyTest)  // NOLINT
{
    SUCCEED();
}

/**
 *  @brief Run all tests
 */
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}