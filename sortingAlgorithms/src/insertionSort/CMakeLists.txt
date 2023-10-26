add_library(${LIBRARY_INSERTION} STATIC insertionSort.cpp)
target_link_libraries(${LIBRARY_INSERTION} PUBLIC ${LIBRARY_UTILS})