#include "TargetInfo/GyhTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

Target &llvm::getTheGyhTarget() {
  static Target TheGyhTarget;
  return TheGyhTarget;
}

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeGyhTargetInfo() {
  RegisterTarget<> X(getTheGyhTarget(), "gyh", "GuYuhao's description",
                     "GuYuhao");
}
