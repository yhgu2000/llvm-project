add_llvm_component_library(LLVMGyhInfo
  GyhTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  Gyh
  )
