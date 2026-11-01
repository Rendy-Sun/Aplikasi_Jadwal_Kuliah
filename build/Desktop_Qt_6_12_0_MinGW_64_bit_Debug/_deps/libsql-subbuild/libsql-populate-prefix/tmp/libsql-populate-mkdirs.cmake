# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

# If CMAKE_DISABLE_SOURCE_CHANGES is set to true and the source directory is an
# existing directory in our source tree, calling file(MAKE_DIRECTORY) on it
# would cause a fatal error, even though it would be a no-op.
if(NOT EXISTS "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-src")
  file(MAKE_DIRECTORY "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-src")
endif()
file(MAKE_DIRECTORY
  "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-build"
  "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-subbuild/libsql-populate-prefix"
  "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-subbuild/libsql-populate-prefix/tmp"
  "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-subbuild/libsql-populate-prefix/src/libsql-populate-stamp"
  "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-subbuild/libsql-populate-prefix/src"
  "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-subbuild/libsql-populate-prefix/src/libsql-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-subbuild/libsql-populate-prefix/src/libsql-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "E:/Project C++/Qt Creator Project/AplikasiJadwal/build/Desktop_Qt_6_12_0_MinGW_64_bit_Debug/_deps/libsql-subbuild/libsql-populate-prefix/src/libsql-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
