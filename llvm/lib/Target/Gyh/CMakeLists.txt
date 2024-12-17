add_llvm_component_group(Gyh)

set(LLVM_TARGET_DEFINITIONS Gyh.td)

tablegen(LLVM GyhGenRegisterInfo.inc -gen-register-info)
tablegen(LLVM GyhGenInstrInfo.inc -gen-instr-info)

add_public_tablegen_target(GyhCommonTableGen)

add_llvm_target(GyhCodeGen
  GyhTargetMachine.cpp

  LINK_COMPONENTS
  CodeGen
  Core
  MC
  Support
  Target
  GyhDesc
  GyhInfo

  ADD_TO_COMPONENT
  Gyh
  )

add_subdirectory(MCTargetDesc)
add_subdirectory(TargetInfo)
