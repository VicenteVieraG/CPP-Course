add_library(${LIBRARY_SELECTION} STATIC selectionSort.cpp)
target_link_libraries(${LIBRARY_SELECTION} PUBLIC ${LIBRARY_UTILS})
