add_library(parsegen
  parsegen_chartab.cpp
  parsegen_build_parser.cpp
  parsegen_finite_automaton.cpp
  parsegen_grammar.cpp
  parsegen_language.cpp
  parsegen_math_lang.cpp
  parsegen_parser.cpp
  parsegen_parser_graph.cpp
  parsegen_reader.cpp
  parsegen_regex.cpp
  parsegen_xml.cpp
  parsegen_yaml.cpp
  )

add_executable(parsegen-calc
  parsegen_calc.cpp
  )

set_property(TARGET parsegen PROPERTY CXX_STANDARD "17")
set_property(TARGET parsegen PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET parsegen PROPERTY CXX_EXTENSIONS OFF)

set_property(TARGET parsegen-calc PROPERTY CXX_STANDARD "17")
set_property(TARGET parsegen-calc PROPERTY CXX_STANDARD_REQUIRED ON)
set_property(TARGET parsegen-calc PROPERTY CXX_EXTENSIONS OFF)

target_link_libraries(parsegen-calc parsegen)

install(TARGETS parsegen
  EXPORT ParseGenTargets
  LIBRARY DESTINATION "${INSTALL_LIB_DIR}"
  ARCHIVE DESTINATION "${INSTALL_LIB_DIR}"
  RUNTIME DESTINATION "${INSTALL_LIB_DIR}"
  PUBLIC_HEADER DESTINATION "include"
  )