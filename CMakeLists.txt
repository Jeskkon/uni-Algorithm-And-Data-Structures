cmake_minimum_required(VERSION 4.3)
project(uni_Algorithm_And_Data_Structures C)

set(CMAKE_C_STANDARD 23)

#labs
add_executable(hello_world "hello_world.c")
add_executable(lab1 "labs/LAB-1 IO.c")
add_executable(lab2 "labs/LAB-2 1D_2D_arrays.c")
add_executable(lab3 "labs/LAB-3 pointer_access.c")
add_executable(lab4-1 "labs/LAB-4 part1.c")
add_executable(lab4-2 "labs/LAB-4 part2.c")
#assignments
add_executable(assignment1-type1 "assignments/assignment1/type1.c")
add_executable(assignment1-type2 "assignments/assignment1/type2.c")
add_executable(assignment1-type3 "assignments/assignment1/type3.c")

add_executable(queue "other/queue.c")
add_executable(stack "other/stack.c")


