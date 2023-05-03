add_library(md4c STATIC md4c.c)
target_include_directories(md4c PUBLIC ${CMAKE_CURRENT_LIST_DIR})
