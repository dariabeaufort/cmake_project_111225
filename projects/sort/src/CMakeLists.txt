target_sources(sort
	PRIVATE
		shaker_sort.cpp
		shaker_sort.hpp
)

target_include_directories(sort PRIVATE
	"$(PROJECT_SOURCE_DIR)/src"
)