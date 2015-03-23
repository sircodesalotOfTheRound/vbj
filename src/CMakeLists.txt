set (SOURCE
  ${SOURCE}

  ${CMAKE_CURRENT_SOURCE_DIR}/jit/architectures/intel/memory/IntelJitBufferWriter_x64.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/jit/architectures/intel/opcodes/ret/ReturnIntelOpCode_x64.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/jit/general/memory/writer/JitBufferWriterBase.cxx

  ${CMAKE_CURRENT_SOURCE_DIR}/lit/parsing/LitFileInStream/LitFileInStream.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/lit/parsing/sections/LitFileHeader/LitFileHeader.cxx

  ${CMAKE_CURRENT_SOURCE_DIR}/runtime/stringtable/StringTable.cxx

  ${CMAKE_CURRENT_SOURCE_DIR}/startup/Startup.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/main.cxx

  PARENT_SCOPE
)