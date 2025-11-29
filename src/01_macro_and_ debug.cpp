#include <iostream>  // for std::cout and std::cin
#define ENABLE_DEBUG

#if 0
#undef ENABLE_DEBUG
#endif

#include <plog/Log.h> // Step1: include the headers
#include "plog/Initializers/RollingFileInitializer.h"

// "endl" will flush, it is consuming, use '\n' instead
void IO_demo() {
    std::cout << "Enter two numbers: ";

    int x{};
    int y{};
    std::cin >> x >> y;

    // when inputing "a", it will stop immediately
    // you can text "1 2\n" to input twice
    std::cout << "You entered " << x << " and " << y << '\n';
}

int main()
{
    // IO_demo();

    // it is not recommended to debug by printing
    #ifdef ENABLE_DEBUG
    std::cerr << "This is the cerr \n";
    #endif

    plog::init(plog::debug, "Hello.txt"); // Step2: initialize the logger

    // Step3: write log messages using a special macro
    // There are several log macros, use the macro you liked the most

    PLOGD << "Hello log!"; // short macro
    PLOG_DEBUG << "Hello log!"; // long macro
    PLOG(plog::debug) << "Hello log!"; // function-style macro

    // Also you can use LOG_XXX macro but it may clash with other logging libraries
    LOGD << "Hello log!"; // short macro
    LOG_DEBUG << "Hello log!"; // long macro
    LOG(plog::debug) << "Hello log!"; // function-style macro
    return 0;
}
