add_library(redaktisto editor.c ui.c)

target_link_libraries(redaktisto md4c)

target_include_directories(redaktisto PUBLIC ${PROJECT_SOURCE_DIR}/vendor
                                             ${CMAKE_CURRENT_SOURCE_DIR})
