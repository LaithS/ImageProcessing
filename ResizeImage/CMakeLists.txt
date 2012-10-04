project(ResizeImage)
find_package(OpenCV REQUIRED)
add_executable(ResizeImage ResizeImage)
target_link_libraries(ResizeImage ${OpenCV_LIBS})
