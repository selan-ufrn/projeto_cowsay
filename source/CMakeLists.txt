cmake_minimum_required(VERSION 3.18)
project (cowsay VERSION 1.0.0 LANGUAGES CXX )

#=== FINDING PACKAGES ===#


#=== SETTING VARIABLES ===#
# Compiling flags
set( GCC_COMPILE_FLAGS "-Wall" )


#=== Main App ===

set( APP_NAME "cowsay" )

include_directories( "core" )

add_executable( ${APP_NAME}
    "core/main.cpp"
    "core/cowsay.cpp" )

# Aske for C++17 because of the std::optional<>
target_compile_features( ${APP_NAME}  PUBLIC cxx_std_17 )
