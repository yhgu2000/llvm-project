#include "GyhTargetMachine.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

extern "C" LLVM_EXTERNAL_VISIBILITY void LLVMInitializeGyhTarget() {
  static Target TheGyhTarget;

  // Register the target.
  RegisterTargetMachine<GyhTargetMachine> A(TheGyhTarget);
}

static std::string computeDataLayout() { return {}; }

static Reloc::Model getEffectiveRelocModel(std::optional<Reloc::Model> RM,
                                           const Triple &TT) {
  if (!RM) {
    // Default to static relocation model. This should always be more optimial
    // than PIC since the static linker can determine all global addresses and
    // assume direct function calls.
    return Reloc::Static;
  }

  return *RM;
}

GyhTargetMachine::GyhTargetMachine(const Target &T, const Triple &TT,
                                   StringRef CPU, StringRef FS,
                                   const TargetOptions &Options,
                                   std::optional<Reloc::Model> RM,
                                   std::optional<CodeModel::Model> CM,
                                   CodeGenOptLevel OL, bool JIT)
    : LLVMTargetMachine(T, computeDataLayout(), TT, CPU, FS, Options,
                        getEffectiveRelocModel(RM, TT),
                        getEffectiveCodeModel(CM, CodeModel::Small), OL) {}
