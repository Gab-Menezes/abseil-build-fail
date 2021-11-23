cmake_minimum_required(VERSION 3.20)

project(main VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)

find_package(absl CONFIG REQUIRED)

add_executable(main src/main.cpp)

target_link_libraries(main 
	PRIVATE
		absl::any absl::base absl::bits absl::city
)