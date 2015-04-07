add_subdirectory(jit)

set (SOURCE
  ${SOURCE}

  ${CMAKE_CURRENT_SOURCE_DIR}/lit/parsing/LitFileInStream/LitFileInStream.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/lit/parsing/sections/LitFileHeader/LitFileHeader.cxx

  ${CMAKE_CURRENT_SOURCE_DIR}/runtime/stringtable/StringTable.cxx

  ${CMAKE_CURRENT_SOURCE_DIR}/startup/Startup.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cxx

  PARENT_SCOPE
)