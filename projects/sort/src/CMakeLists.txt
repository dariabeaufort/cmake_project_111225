target_sources(shaker_sort_lib
	PRIVATE
		shaker_sort.cpp
	PUBLIC
		shaker_sort.hpp
)

target_include_directories(shaker_sort_lib PUBLIC
	"${PROJECT_SOURCE_DIR}/src"
)