cmake_minimum_required(VERSION 3.17)
project(computer)

set(CMAKE_CXX_STANDARD 14)

add_compile_options("-fPIC")
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5 REQUIRED COMPONENTS
        # список необходимых библиотек
        Core
        Charts
        # и т.д., например Widgets, Charts
        )

file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")
file(GLOB_RECURSE HEADER_FILES "src/*.hpp")


add_executable(
        # имя исполняемого файла
        computer
        # список файлов с исходным кодом
        ${SOURCE_FILES}
)

target_link_libraries(
        # имя исполняемого файла
        computer
        # список библиотек
        Qt5::Core
        # и т.д., например Qt5::Widgets, Qt5::Charts
)
