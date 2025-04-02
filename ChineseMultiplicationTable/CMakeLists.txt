file(GLOB sources *.cpp)
add_executable(9x9_table  ${sources})
target_link_libraries(9x9_table  PRIVATE Qt5::Core Qt5::Widgets)
