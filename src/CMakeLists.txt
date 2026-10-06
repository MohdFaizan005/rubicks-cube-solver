add_subdirectory(core)

add_executable(RubiksCubeSolver
    main.cpp
)

target_link_libraries(RubiksCubeSolver
    corelib
)