/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("\0");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aabbaabaabbaa");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ab");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_not_complex_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aabbaababbaa");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("**^**");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("[}");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_number_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("11211");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_number_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("1a12141");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, is_mixed_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("1a2H*#*H2a1");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_palindrome_with_space)
{
    Practice obj;
    bool actual = obj.isPalindrome("1a2H* *H2a1");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, is_not_palindrome_with_space)
{
    Practice obj;
    bool actual = obj.isPalindrome("1 a2H* *H2a1");
    ASSERT_FALSE(actual);
}
TEST(PracticeTest, sorted)
{
    Practice obj;
    int num[3] = {5, 3 , 1};
    obj.sortDescending(num[0],num[1],num[2]);

    ASSERT_GE(num[0], num[1]);
    ASSERT_GE(num[1], num[2]);
    ASSERT_GE(num[0], num[2]);
}
TEST(PracticeTest, secondSmallerThird)
{
    Practice obj;
    int num[3] = {5, 2 , 9};
    obj.sortDescending(num[0],num[1],num[2]);

    ASSERT_GE(num[0], num[1]);
    ASSERT_GE(num[1], num[2]);
    ASSERT_GE(num[0], num[2]);
}
TEST(PracticeTest, not_sorted)
{
    Practice obj;
    int num[3] = {3, 5 , 2};
    obj.sortDescending(num[0],num[1],num[2]);

    ASSERT_GE(num[0], num[1]);
    ASSERT_GE(num[1], num[2]);
    ASSERT_GE(num[0], num[2]);
}
