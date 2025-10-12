file(GLOB sources *.cpp)
add_executable(notebook ${sources})
target_link_libraries(notebook PRIVATE Qt5::Core Qt5::Widgets)
