add_library(redaktisto editor.c gtk_ui.c)

target_link_libraries(redaktisto PUBLIC md4c)

target_include_directories(redaktisto PUBLIC ${PROJECT_SOURCE_DIR}/vendor
                                             ${CMAKE_CURRENT_SOURCE_DIR})

# GTK4
find_package(PkgConfig REQUIRED)
pkg_check_modules(GTK4 REQUIRED gtk4)
add_definitions(${GTK4_CFLAGS_OTHER})
target_include_directories(redaktisto PUBLIC ${GTK4_INCLUDE_DIRS})
target_link_directories(redaktisto PUBLIC ${GTK4_LIBRARY_DIRS})
target_link_libraries(redaktisto PUBLIC ${GTK4_LIBRARIES})
