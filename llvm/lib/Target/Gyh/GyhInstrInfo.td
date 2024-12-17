def NOP : Instruction {
  let Namespace = "Gyh";

  let OutOperandList = (outs);  // 没有输出
  let InOperandList = (ins);    // 没有输入
  let AsmString = "nop";        // 汇编代码
}
