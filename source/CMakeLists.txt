# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  vec2.cpp
  mat2.cpp
  rectangle.cpp
  circle.cpp
  )
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  glew.c
  tests.cpp
  vec2.cpp
  mat2.cpp
  rectangle.cpp
  circle.cpp
  window.cpp
  )

add_executable(aufgabe_2_und_3
  aufgabe_2_und_3.cpp 
)

add_executable(aufgabe_5
  vec2.cpp
  mat2.cpp
  aufgabe_5.cpp
  circle.cpp
  )
add_executable(aufgabe_6
  vec2.cpp
  mat2.cpp
  aufgabe_6.cpp
  circle.cpp
  )


target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

  add_executable(aufgabe_8
  aufgabe_8.cpp
  )
target_link_libraries(aufgabe_8
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_executable(aufgabe_10
  aufgabe_10.cpp
  )
target_link_libraries(aufgabe_10
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_executable(aufgabe_11
  aufgabe_11.cpp
  )
target_link_libraries(aufgabe_11
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_executable(aufgabe_12
  aufgabe_12.cpp
  )
target_link_libraries(aufgabe_12
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )