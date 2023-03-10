#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/mayhemit-c/mayhemit.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/mayhemit-c/mayhemit.c");

EXTERN_C_LINKAGE void TestSuite_mayhemit_c_1a722543_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_mayhemit_c_1a722543_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_mayhemit_c_1a722543);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_mayhemit_c_1a722543_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_main_1);
        CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_main_2);
        CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_mayhemit_1);
        CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_mayhemit_2);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_mayhemit_c_1a722543_testSuiteTearDown);
CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_main_3);
CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_main_4);
CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_mayhemit_3);
CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_mayhemit_4);
CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_main_5);
CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_main_6);
CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_mayhemit_5);
CPPTEST_TEST(TestSuite_mayhemit_c_1a722543_test_mayhemit_6);
CPPTEST_TEST_DS(TestSuite_mayhemit_c_1a722543_test_main, CPPTEST_DS("test_mayhemit_mayhem"));
CPPTEST_TEST_SUITE_END();
        
void TestSuite_mayhemit_c_1a722543_test_main_1(void);
void TestSuite_mayhemit_c_1a722543_test_main_2(void);
void TestSuite_mayhemit_c_1a722543_test_mayhemit_1(void);
void TestSuite_mayhemit_c_1a722543_test_mayhemit_2(void);

void TestSuite_mayhemit_c_1a722543_test_main_3(void);
void TestSuite_mayhemit_c_1a722543_test_main_4(void);
void TestSuite_mayhemit_c_1a722543_test_mayhemit_3(void);
void TestSuite_mayhemit_c_1a722543_test_mayhemit_4(void);
void TestSuite_mayhemit_c_1a722543_test_main_5(void);
void TestSuite_mayhemit_c_1a722543_test_main_6(void);
void TestSuite_mayhemit_c_1a722543_test_mayhemit_5(void);
void TestSuite_mayhemit_c_1a722543_test_mayhemit_6(void);
void TestSuite_mayhemit_c_1a722543_test_main(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_mayhemit_c_1a722543);

void TestSuite_mayhemit_c_1a722543_testSuiteSetUp(void);
void TestSuite_mayhemit_c_1a722543_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_mayhemit_c_1a722543_testSuiteTearDown(void);
void TestSuite_mayhemit_c_1a722543_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_mayhemit_c_1a722543_setUp(void);
void TestSuite_mayhemit_c_1a722543_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_mayhemit_c_1a722543_tearDown(void);
void TestSuite_mayhemit_c_1a722543_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_main_1 */
/* CPPTEST_TEST_CASE_CONTEXT int main(int, char **) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_main_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 0;
    /* Initializing argument 2 (argv) */ 
    char _argv_0_1 [1];
    char * _argv_0  = (char * )cpptestMemset((void*)&_argv_0_1, 0, (1 * sizeof(char)));
    char ** _argv  = & _argv_0;
    {
        /* Tested function call */
        int _return  = main(_argc, _argv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("char ** _argv ", ( _argv ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_1 */

/* CPPTEST_TEST_CASE_BEGIN test_main_2 */
/* CPPTEST_TEST_CASE_CONTEXT int main(int, char **) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_main_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 1;
    /* Initializing argument 2 (argv) */ 
    char _argv_0_1 [1];
    char * _argv_0  = (char * )cpptestMemset((void*)&_argv_0_1, 0, (1 * sizeof(char)));
    char ** _argv  = & _argv_0;
    {
        /* Tested function call */
        int _return  = main(_argc, _argv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("char ** _argv ", ( _argv ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_2 */

/* CPPTEST_TEST_CASE_BEGIN test_mayhemit_1 */
/* CPPTEST_TEST_CASE_CONTEXT int mayhemit(char *) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_mayhemit_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    char _buf_0 [1];
    char * _buf  = (char * )cpptestMemset((void*)&_buf_0, 0, (1 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = mayhemit(_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _buf", ( _buf ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_mayhemit_1 */

/* CPPTEST_TEST_CASE_BEGIN test_mayhemit_2 */
/* CPPTEST_TEST_CASE_CONTEXT int mayhemit(char *) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_mayhemit_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    char _buf_0 [16];
    char * _buf  = (char * )cpptestMemset((void*)&_buf_0, 0, (16 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = mayhemit(_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _buf", ( _buf ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_mayhemit_2 */

/* CPPTEST_TEST_CASE_BEGIN test_main_3 */
/* CPPTEST_TEST_CASE_CONTEXT int main(int, char **) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_main_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 0;
    /* Initializing argument 2 (argv) */ 
    char _argv_0_1 [1];
    char * _argv_0  = (char * )cpptestMemset((void*)&_argv_0_1, 0, (1 * sizeof(char)));
    char ** _argv  = & _argv_0;
    {
        /* Tested function call */
        int _return  = main(_argc, _argv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("char ** _argv ", ( _argv ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_3 */

/* CPPTEST_TEST_CASE_BEGIN test_main_4 */
/* CPPTEST_TEST_CASE_CONTEXT int main(int, char **) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_main_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 1;
    /* Initializing argument 2 (argv) */ 
    char _argv_0_1 [1];
    char * _argv_0  = (char * )cpptestMemset((void*)&_argv_0_1, 0, (1 * sizeof(char)));
    char ** _argv  = & _argv_0;
    {
        /* Tested function call */
        int _return  = main(_argc, _argv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("char ** _argv ", ( _argv ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_4 */

/* CPPTEST_TEST_CASE_BEGIN test_mayhemit_3 */
/* CPPTEST_TEST_CASE_CONTEXT int mayhemit(char *) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_mayhemit_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    char _buf_0 [1];
    char * _buf  = (char * )cpptestMemset((void*)&_buf_0, 0, (1 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = mayhemit(_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _buf", ( _buf ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_mayhemit_3 */

/* CPPTEST_TEST_CASE_BEGIN test_mayhemit_4 */
/* CPPTEST_TEST_CASE_CONTEXT int mayhemit(char *) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_mayhemit_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    char _buf_0 [16];
    char * _buf  = (char * )cpptestMemset((void*)&_buf_0, 0, (16 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = mayhemit(_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _buf", ( _buf ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_mayhemit_4 */

/* CPPTEST_TEST_CASE_BEGIN test_main_5 */
/* CPPTEST_TEST_CASE_CONTEXT int main(int, char **) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_main_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 0;
    /* Initializing argument 2 (argv) */ 
    char _argv_0_1 [1];
    char * _argv_0  = (char * )cpptestMemset((void*)&_argv_0_1, 0, (1 * sizeof(char)));
    char ** _argv  = & _argv_0;
    {
        /* Tested function call */
        int _return  = main(_argc, _argv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("char ** _argv ", ( _argv ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_5 */

/* CPPTEST_TEST_CASE_BEGIN test_main_6 */
/* CPPTEST_TEST_CASE_CONTEXT int main(int, char **) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_main_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 1;
    /* Initializing argument 2 (argv) */ 
    char _argv_0_1 [1];
    char * _argv_0  = (char * )cpptestMemset((void*)&_argv_0_1, 0, (1 * sizeof(char)));
    char ** _argv  = & _argv_0;
    {
        /* Tested function call */
        int _return  = main(_argc, _argv);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_PTR("char ** _argv ", ( _argv ));
    }
}
/* CPPTEST_TEST_CASE_END test_main_6 */

/* CPPTEST_TEST_CASE_BEGIN test_mayhemit_5 */
/* CPPTEST_TEST_CASE_CONTEXT int mayhemit(char *) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_mayhemit_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    char _buf_0 [1];
    char * _buf  = (char * )cpptestMemset((void*)&_buf_0, 0, (1 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = mayhemit(_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _buf", ( _buf ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_mayhemit_5 */

/* CPPTEST_TEST_CASE_BEGIN test_mayhemit_6 */
/* CPPTEST_TEST_CASE_CONTEXT int mayhemit(char *) */
/* CPPTEST_TEST_CASE_DESCRIPTION Generated by C++test using "Generate Unit Tests" */
void TestSuite_mayhemit_c_1a722543_test_mayhemit_6()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (buf) */ 
    char _buf_0 [16];
    char * _buf  = (char * )cpptestMemset((void*)&_buf_0, 0, (16 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = mayhemit(_buf);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _buf", ( _buf ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_mayhemit_6 */

/* CPPTEST_TEST_CASE_BEGIN test_main */
/* CPPTEST_TEST_CASE_CONTEXT int main(int, char **) */
void TestSuite_mayhemit_c_1a722543_test_main()
{
    CppTest_StreamRedirect* _stdinStreamRedirect = CppTest_RedirectStdInput(CPPTEST_DS_GET_CSTR("Column 1"));
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 0;
    /* Initializing argument 2 (argv) */ 
    char ** _argv  = 0 ;
    {
        /* Tested function call */
        int _return  = main(_argc, _argv);
        /* Post-condition check */
        CPPTEST_ASSERT_INTEGER_EQUAL(CPPTEST_DS_GET_INTEGER("Column 0"), ( _return ) );
        CPPTEST_POST_CONDITION_PTR("char ** _argv ", ( _argv ));
    }
}
/* CPPTEST_TEST_CASE_END test_main */
