/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, placeMineInBounds_0x0)
{
	Field minefield;
	
	minefield.placeMine(0,0);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(0,0) );
}

TEST(FieldTest, inbounds_overload constructor)
{
		Field minefield(15)

	Minefield.placeMine(12,12);

}
