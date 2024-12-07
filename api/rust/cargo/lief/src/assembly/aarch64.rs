//! AArch64 architecture-related namespace

pub mod opcodes;
pub mod instruction;
pub mod registers;

#[doc(inline)]
pub use opcodes::Opcode;

#[doc(inline)]
pub use registers::{Reg, SysReg};

#[doc(inline)]
pub use instruction::Instruction;