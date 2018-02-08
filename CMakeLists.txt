cmake_minimum_required(VERSION 3.9)
project(algorithms-in-Cpp-EN)

set(CMAKE_CXX_STANDARD 11)

# Chapter 1

add_executable(ch1-quick-find
        ch-1/quick-find.cpp)

add_executable(ch1-quick-union
        ch-1/quick-union.cpp)

add_executable(ch1-weighted-quick-union
        ch-1/weighted-quick-union.cpp)

add_executable(ch1-weighted-quick-union-halving-compression
        ch-1/weighted-quick-union-halving-compression.cpp)


# Chapter 2

add_executable(ch2-ex-2.12-compute-harmonic-numbers
        ch-2/ex-2.12-compute-harmonic-numbers.cpp)

add_executable(ch2-ex-2.13-compute-lglgN
        ch-2/ex-2.13-compute-lglgN.cpp)

# Chapter 3

add_executable(ch3-ex-3.9-random-triangles-areas
        ch-3/ex-3.9-random-triangles-areas.cpp
        ch-3/Point.cpp ch-3/Point.h
        ch-3/Triangle.cpp ch-3/Triangle.h)

add_executable(ch-3-ex-3.2
        ch-3/ex-3.2-random-average-and-std-deviation.cpp)

add_executable(ch-3-ex-3.3
        ch-3/ex-3.3-random-average-and-std-deviation.cpp)

add_executable(ch-3-ex-3.5
        ch-3/ex-3.5-random-bits-fn.cpp)

add_executable(ch-3-ex-3.13
        ch-3/ex-3.11-13-sieve-of-Eratosthenes.cpp)

add_executable(ch-3-ex-3.14
        ch-3/ex-3.14-sieve-of-Eratosthenes-vector.cpp)

add_executable(ch-3-ex-3.17
        ch-3/ex-3.17-number-of-before-repeated.cpp)

add_executable(ch-3-ex-3.18
        ch-3/ex-3.18-number-of-before-each-at-least-once.cpp)

add_executable(ch-3-ex-3.19-20
        ch-3/ex-3.19-20-coin-turns-with-probability.cpp)
