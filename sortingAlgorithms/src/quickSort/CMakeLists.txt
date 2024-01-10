add_library(${LIBRARY_QUICK} STATIC quickSort.cpp)
target_link_libraries(${LIBRARY_QUICK} PUBLIC ${LIBRARY_UTILS})