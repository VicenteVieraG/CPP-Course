add_library(${LIBRARY_SHELL} STATIC shellSort.cpp)
target_link_libraries(${LIBRARY_SHELL} PUBLIC ${LIBRARY_UTILS})