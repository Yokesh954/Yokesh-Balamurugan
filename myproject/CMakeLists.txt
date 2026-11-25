cmake_minimum_required(VERSION 3.16)

project(myproject VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    diagramcanvas.cpp
    diagramcanvas.h
    FlowJunction.cpp
    FlowJunction.h
    InputWindow.h
    InputWindow.cpp
    ProgressInputWindow.h
    ProgressInputWindow.cpp
)

if(QT_VERSION_MAJOR GREATER_EQUAL 6)

    qt_add_executable(myproject
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        InputWindow2.h
        InputWindow2.cpp


    )

else()

    add_executable(myproject
        ${PROJECT_SOURCES}
    )

endif()

# Include project folder to locate custom widget headers
target_include_directories(myproject PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}"
)

# Link Qt Widgets
target_link_libraries(myproject PRIVATE
    Qt${QT_VERSION_MAJOR}::Widgets
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(myproject)
endif()

include(GNUInstallDirs)

install(TARGETS myproject
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)