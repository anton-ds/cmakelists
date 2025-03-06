### Install

```
git submodule add https://github.com/nlohmann/json external/json
rm -rf ./cmake-build-debug
cmake -S . -B ./cmake-build-debug
cmake --build ./cmake-build-debug
./cmake-build-debug/app/Executable
```

### Table of Library Types in CMake

```cmake
add_library(${LIBRARY_NAME} src/lib/src/lib.cc <TYPE>)
```

| **Library Type**  | **Function**  | **When to Use**  | **Real-World Example**  |
|------------------|--------------|------------------|-------------------------|
| **ALIAS**  | Alias for another library | Simplifies working with names | Unreal Engine modules |
| **INTERFACE**  | Header-only library, no compiled files | For header-only libraries | `fmt`, `Eigen`, `Boost` |
| **OBJECT**  | Compiles `.o` files but does not create `.a/.so` | Used inside other libraries | LLVM |
| **STATIC**  | Creates a static `.a/.lib`, embedded in `.exe` | Fully independent libraries | Unreal Engine, Godot |
| **SHARED**  | Creates a dynamic `.so/.dll`, loaded at runtime | Saves memory, updatable libraries | Qt, GTK, OpenCV |
| **MODULE**  | Plugin library, loaded via `dlopen()/LoadLibrary()` | Dynamically loaded plugins | Qt Plugins, Blender |
| **IMPORTED**  | Uses an existing installed `.so/.dll` | Works with system libraries | OpenGL, FMOD, Vulkan |
| **EXCLUDE_FROM_ALL**  | Excluded from the default build process | Optional libraries, unit tests | Unit tests |

### Remark about Libraries

- If code rarely changes and is needed in .exe → Use .a / .lib (static library).
- If you need to update it separately or use it in several programs → Use .so / .dll (dynamic library).
- If not yet built into a library but want to reuse the code → Use .o / .obj (object files).

### Thanks 
After listening to [the lecture](https://www.udemy.com/course/cmake-tests-and-tooling-for-cc-projects/).
