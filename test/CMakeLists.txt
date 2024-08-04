file(GLOB_RECURSE
	LANGULUS_MOD_STORYTELLER_TEST_SOURCES 
	LIST_DIRECTORIES FALSE CONFIGURE_DEPENDS
	*.cpp
)

add_executable(LangulusModStorytellerTest ${LANGULUS_MOD_STORYTELLER_TEST_SOURCES})

target_link_libraries(LangulusModStorytellerTest
	PRIVATE		Langulus
				Catch2
)

add_dependencies(LangulusModStorytellerTest
	LangulusModStoryteller
)

add_test(
	NAME		LangulusModStorytellerTest
	COMMAND		LangulusModStorytellerTest
	WORKING_DIRECTORY ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}
)