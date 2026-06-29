#pragma once

#if defined(_WIN32)
    #if defined(TEST_EXPORT_LIB)
        #define TEST_API __declspec(dllexport)
    #else 
        #define TEST_API __declspec(dllimport)
    #endif
#else 
    #define TEST_API __attribute__(visibility("default"))
#endif 

TEST_API void sayHello();

