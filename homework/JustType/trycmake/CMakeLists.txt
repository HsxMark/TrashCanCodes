cmake_minimum_required(VERSION 3.11)
#包含了最低的版本要求
project(trycmake)
#规定项目名称
include_directories(./include)
#添加hpp所在位置，如果在本文件夹可以不添加（就是放在include里面的话就不用添加）
add_executable(cmake_genshin_1 ./src/cmake_genshin.cpp ./tools/genshin.cpp)
## 手动添加需要的源文件，定义可执行文件，前面是名称后面是位置（可以相对可以绝对）