cmake_minimum_required(VERSION 3.15)
project(state-design-pattern)

set(SRC
  src/draft_state.cpp
  src/moderate_state.cpp
  src/publish_state.cpp
  src/document.cpp
  main.cpp)

add_executable(${PROJECT_NAME} ${SRC})

target_include_directories(${PROJECT_NAME} PUBLIC
  include
)
