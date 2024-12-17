#ifndef LLVM_LIB_TARGET_GYH_GYHTARGETMACHINE_H
#define LLVM_LIB_TARGET_GYH_GYHTARGETMACHINE_H

#include "llvm/ADT/StringRef.h"
#include "llvm/Support/CodeGen.h"
#include "llvm/Target/TargetMachine.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/TargetParser/Triple.h"
#include <memory>
#include <optional>

namespace llvm {

class GyhTargetMachine : public LLVMTargetMachine {

public:
  GyhTargetMachine(const Target &T, const Triple &TT, StringRef CPU,
                   StringRef FS, const TargetOptions &Options,
                   std::optional<Reloc::Model> RM,
                   std::optional<CodeModel::Model> CM, CodeGenOptLevel OL,
                   bool JIT);
};

} // namespace llvm

#endif // LLVM_LIB_TARGET_GYH_GYHTARGETMACHINE_H
