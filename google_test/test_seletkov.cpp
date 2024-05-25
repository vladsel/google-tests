#include "pch.h"
#include "homework_seletkov.hpp"

//--------------------------------------------------------------------------------------

TEST(GetProductsAmount, ExpectNoExceptionIncorrectData) {
	EXPECT_NO_THROW(GetProductsAmount({'@', '()#@', ' '}, '$'));
}

TEST(GetProductsAmount, ExpectNoExceptionCorrectData) {
	EXPECT_NO_THROW(GetProductsAmount({ 1000, 2000, 3000 }, 5000 / 2.2));
}

TEST(GetProductsAmount, InputCorrectData_To_prices_and_To_amountOfMoney_first) {
	EXPECT_EQ(3, GetProductsAmount({70, 20, 50}, 150));
}

TEST(GetProductsAmount, InputCorrectData_To_prices_and_To_amountOfMoney_second) {
	EXPECT_EQ(2, GetProductsAmount({ 50, 10, 70 }, 80));
}

TEST(GetProductsAmount, InputEmptyData_To_prices_and_To_amountOfMoney) {
	EXPECT_EQ(0, GetProductsAmount({}, 0));
}

TEST(GetProductsAmount, InputEmptyData_To_prices) {
	EXPECT_EQ(0, GetProductsAmount({}, 50));
}

TEST(GetProductsAmount, InputEmptyData_To_amountOfMoney) {
	EXPECT_EQ(0, GetProductsAmount({100, 200, 50}, 0));
}

TEST(GetProductsAmount, InputSimilarData_To_prices_and_To_amountOfMoney) {
	EXPECT_EQ(1, GetProductsAmount({ 50 }, 50));
}

TEST(GetProductsAmount, InputCharData_To_prices_and_To_amountOfMoney) {
	EXPECT_EQ(1, GetProductsAmount({ 'a', 'b', 'c', 'd'}, 'x'));
}

TEST(GetProductsAmount, InputBigData_To_prices_and_To_amountOfMoney) {
	EXPECT_EQ(3, GetProductsAmount({ 89999999, 89999999, 89999999 }, 899999999));
}

TEST(GetProductsAmount, InputNegativeData_To_prices_and_To_amountOfMoney_first) {
	EXPECT_EQ(3, GetProductsAmount({ -76, -789, -50 }, -100));
}

TEST(GetProductsAmount, InputNegativeData_To_prices_and_To_amountOfMoney_second) {
	EXPECT_EQ(0, GetProductsAmount({ -50, -76, -789 }, -10000));
}

TEST(GetProductsAmount, InputNullTerminatorData_To_prices) {
	ASSERT_LE(3, GetProductsAmount({ '\0', '\0', '\0' }, 0));
}

//--------------------------------------------------------------------------------------

TEST(IsLeapYear, ExpectNoExceptionIncorrectData_first) {
	EXPECT_NO_THROW(IsLeapYear('$'));
}

TEST(IsLeapYear, ExpectNoExceptionIncorrectData_second) {
	EXPECT_NO_THROW(IsLeapYear('\0'));
}

TEST(IsLeapYear, ExpectNoExceptionCorrectData_first) {
	EXPECT_NO_THROW(IsLeapYear(-2400));
}

TEST(IsLeapYear, ExpectNoExceptionCorrectData_second) {
	EXPECT_NO_THROW(IsLeapYear(10000 / 10.1));
}

TEST(IsLeapYear, ExpectTrueYear_0) {
	ASSERT_TRUE(IsLeapYear(0));
}

TEST(IsLeapYear, ExpectTrueYear_2000) {
	ASSERT_TRUE(IsLeapYear(2000));
}

TEST(IsLeapYear, ExpectTrueYear_1996) {
	ASSERT_TRUE(IsLeapYear(1996));
}

TEST(IsLeapYear, ExpectTrueYear_1600) {
	ASSERT_TRUE(IsLeapYear(1600));
}

TEST(IsLeapYear, ExpectTrueYear_56) {
	ASSERT_TRUE(IsLeapYear(56));
}

TEST(IsLeapYear, ExpectTrueYear_2020) {
	ASSERT_TRUE(IsLeapYear(2020));
}

TEST(IsLeapYear, ExpectTrueYear_2544) {
	ASSERT_TRUE(IsLeapYear(2544));
}

TEST(IsLeapYear, ExpectTrueYear_888) {
	ASSERT_TRUE(IsLeapYear(888));
}

TEST(IsLeapYear, ExpectTrueYear_neg_888) {
	ASSERT_TRUE(IsLeapYear(-888));
}

TEST(IsLeapYear, ExpectTrueYear_neg_56) {
	ASSERT_TRUE(IsLeapYear(-56));
}

TEST(IsLeapYear, ExpectTrueYear_neg_2024) {
	ASSERT_TRUE(IsLeapYear(-2024));
}

TEST(IsLeapYear, ExpectTrueYear_neg_1600) {
	ASSERT_TRUE(IsLeapYear(-1600));
}

TEST(IsLeapYear, ExpectFalseYear_1900) {
	ASSERT_FALSE(IsLeapYear(1900));
}

TEST(IsLeapYear, ExpectFalseYear_1997) {
	ASSERT_FALSE(IsLeapYear(1997));
}

TEST(IsLeapYear, ExpectFalseYear_200) {
	ASSERT_FALSE(IsLeapYear(200));
}

TEST(IsLeapYear, ExpectFalseYear_3086) {
	ASSERT_FALSE(IsLeapYear(3086));
}

TEST(IsLeapYear, ExpectFalseYear_2021) {
	ASSERT_FALSE(IsLeapYear(2021));
}

TEST(IsLeapYear, ExpectFalseYear_378) {
	ASSERT_FALSE(IsLeapYear(378));
}

TEST(IsLeapYear, ExpectFalseYear_1777) {
	ASSERT_FALSE(IsLeapYear(1777));
}

TEST(IsLeapYear, ExpectFalseYear_122) {
	ASSERT_FALSE(IsLeapYear(122));
}

TEST(IsLeapYear, ExpectFalseYear_neg_122) {
	ASSERT_FALSE(IsLeapYear(-122));
}

TEST(IsLeapYear, ExpectFalseYear_neg_1500) {
	ASSERT_FALSE(IsLeapYear(-1500));
}

TEST(IsLeapYear, ExpectFalseYear_neg_378) {
	ASSERT_FALSE(IsLeapYear(-378));
}

TEST(IsLeapYear, ExpectFalseYear_neg_1300) {
	ASSERT_FALSE(IsLeapYear(-1300));
}