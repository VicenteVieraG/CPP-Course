add_library(${LIBRARY_BUBBLE} STATIC bubbleSort.cpp)
target_link_libraries(${LIBRARY_BUBBLE} PUBLIC ${LIBRARY_UTILS})