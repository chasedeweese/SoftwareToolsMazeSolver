// objective: test the \dontinclude, \skip, \until, \skipline, \line commands
// check: indexpage.xml
/*! A test class. */

class Test
{
  public:
    /// a member function
    void example();
};

/*! \mainpage
 *  \dontinclude example_test.cpp
 *  Our main function starts like this:
 *  \skip main
 *  \until {
 *  First we create a object \c t of the Test class.
 *  \skipline Test
 *  Then we call the example member function 
 *  \line example
 *  After that our little test routine ends.
 *  \line }
 */
