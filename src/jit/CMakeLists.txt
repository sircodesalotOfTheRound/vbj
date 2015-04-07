add_subdirectory(architectures)
add_subdirectory(general)

set(SOURCE
  ${SOURCE}
  ${CMAKE_CURRENT_SOURCE_DIR}/architectures/intel/opcodes/ReturnIntelOpCode_x64/ReturnIntelOpCode_x64.cxx
  ${CMAKE_CURRENT_SOURCE_DIR}/general/memory/JitBufferWriterBase/JitBufferWriterBase.cxx
PARENT_SCOPE)
