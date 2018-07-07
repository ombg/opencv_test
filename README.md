# opencv_test
Testing if own 'CMakeLists.txt' can find OpenCV 3.x. It requires C++17 features.

Details:

- Requires only certain modules of OpenCV library with a customized `find_package()` command.
- Requires OpenCV 3.2 or higher (again, using `find_package()`)
- Requires a C++17 compatible compiler with `set(CMAKE_CXX_STANDARD 17)`. The source code includes `std::filesystem` and hence the linker tries to find the necessary libraries, including `stdc++fs`.
- This small program will likely fail if compiled with `g++ 8.x` and linked against pre-built OpenCV libraries using compiler `clang-800.x`(as it is the case  with homebrew). ABI compatibility.
