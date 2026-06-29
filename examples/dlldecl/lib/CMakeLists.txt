add_library(hello SHARED)

target_sources(
    hello
    PUBLIC
    hello.cpp
)

target_include_directories(
    hello
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_options(
    hello
    PUBLIC
    -DTEST_EXPORT_LIB
)

