qt_add_executable(helloworld
    main.cpp
)

target_link_libraries(helloworld PRIVATE Qt6::Widgets)
