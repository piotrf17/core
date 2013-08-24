add_library(window window.cc)

add_executable(window_sample window_sample.cc)
target_link_libraries(window_sample window GL GLU X11)