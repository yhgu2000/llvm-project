add_llvm_component_library(LLVMGyhDesc
  GyhMCTargetDesc.cpp

  LINK_COMPONENTS
  MC
  Support
  GyhInfo

  ADD_TO_COMPONENT
  Gyh
 )
