cmake_minimum_required(VERSION 3.20)  # Minimum required Make version

set(CMAKE_CXX_STANDARD 17)

project("TestPrj_v01")  # Project name

include_directories(include/mylib)

add_library(mylib src/util.cpp)

add_executable(MyApp src/main.cpp)  # Output binary and source files
target_link_libraries(MyApp mylib)


#Unit test 
enable_testing()
#add_executable(MyTests test/test_add01.cpp)
#target_link_libraries(MyTests mylib)
#add_Test(NAME RunMyTests COMMAND MyTests)

macro(add_calc_test name)
	add_executable(${name} test/${name}.cpp)
	target_link_libraries(${name} mylib)
	add_Test(NAME ${name} COMMAND ${name})
endmacro()

#Add test cases
add_calc_test(test_add01)
add_calc_test(test_add02)



