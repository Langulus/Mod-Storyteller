cmake_minimum_required(VERSION 3.28)
project(LangulusModStoryteller
    VERSION         1.0.0
    DESCRIPTION     "Langulus plug-in module for generating narratives"
    HOMEPAGE_URL    https://langulus.com
)

file(GLOB_RECURSE
    LANGULUS_MOD_STORYTELLER_SOURCES 
    LIST_DIRECTORIES FALSE CONFIGURE_DEPENDS
    source/*.cpp
)

# Build the module                                                              
add_library(LangulusModStoryteller SHARED ${LANGULUS_MOD_STORYTELLER_SOURCES})

target_link_libraries(LangulusModStoryteller
    PRIVATE     Langulus
)

if(LANGULUS_TESTING)
    enable_testing()
    add_subdirectory(test)
endif()