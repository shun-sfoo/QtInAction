file(GLOB sources *.cpp)
add_executable(calc ${sources})
target_link_libraries(calc PRIVATE Qt5::Core Qt5::Widgets)
