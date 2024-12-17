#include "GyhMCTargetDesc.h"
#include "TargetInfo/GyhTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeGyhTargetMC() {
  // 在这里应当调用各种 RegisterMCXXX 函数来注册目标机器的相关信息
}
