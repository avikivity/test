//  (C) Copyright Raffi Enficiaud 2017.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.
//
//! @file
//! checking the preconditions
// *****************************************************************************

#define BOOST_TEST_MODULE test_preconditions
#include <boost/test/unit_test.hpp>

bool returning_false() {
  return false;
}

BOOST_AUTO_TEST_CASE(fail,
                     *boost::unit_test::precondition([](boost::unit_test::test_unit_id){
                        return returning_false();
                     }
                     ))
{

}
BOOST_AUTO_TEST_CASE(success)
{
  BOOST_TEST(true);
}
