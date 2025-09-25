#include <gtest/gtest.h>
#include "../include/extruct.h"

TEST(ExtructNumbersTest, Basic) {
    vector<string> expected = {"12", "3", "045"};
    EXPECT_EQ(extructNumbers("ab12c3d045ef"), expected);
}

TEST(ExtructNumbersTest, NoNumbers) {
    vector<string> expected = {};
    EXPECT_EQ(extructNumbers("abcdef"), expected);
}

TEST(ExtructNumbersTest, OnlyNumbers) {
    vector<string> expected = {"12345"};
    EXPECT_EQ(extructNumbers("12345"), expected);
}

TEST(ExtructNumbersTest, Mixed) {
    vector<string> expected = {"1", "22", "003"};
    EXPECT_EQ(extructNumbers("a1b22c003d"), expected);
}

TEST(ExtructNumbersTest, Last) {
    vector<string> expected = {"781", "9", "9", "791", "21"};
    EXPECT_EQ(extructNumbers("safi781hkfs9a9f791fas21"), expected);
}