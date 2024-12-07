#include "asm/arm/init.hpp"

#include "LIEF/asm/arm/registers.hpp"

namespace LIEF::assembly::arm::py {
template<>
void create<LIEF::assembly::arm::REG>(nb::module_& m) {
  nb::enum_<LIEF::assembly::arm::REG> reg(m, "REG");
  reg.value("NoRegister", LIEF::assembly::arm::REG::NoRegister)
  .value("APSR", LIEF::assembly::arm::REG::APSR)
  .value("APSR_NZCV", LIEF::assembly::arm::REG::APSR_NZCV)
  .value("CPSR", LIEF::assembly::arm::REG::CPSR)
  .value("FPCXTNS", LIEF::assembly::arm::REG::FPCXTNS)
  .value("FPCXTS", LIEF::assembly::arm::REG::FPCXTS)
  .value("FPEXC", LIEF::assembly::arm::REG::FPEXC)
  .value("FPINST", LIEF::assembly::arm::REG::FPINST)
  .value("FPSCR", LIEF::assembly::arm::REG::FPSCR)
  .value("FPSCR_NZCV", LIEF::assembly::arm::REG::FPSCR_NZCV)
  .value("FPSCR_NZCVQC", LIEF::assembly::arm::REG::FPSCR_NZCVQC)
  .value("FPSID", LIEF::assembly::arm::REG::FPSID)
  .value("ITSTATE", LIEF::assembly::arm::REG::ITSTATE)
  .value("LR", LIEF::assembly::arm::REG::LR)
  .value("PC", LIEF::assembly::arm::REG::PC)
  .value("RA_AUTH_CODE", LIEF::assembly::arm::REG::RA_AUTH_CODE)
  .value("SP", LIEF::assembly::arm::REG::SP)
  .value("SPSR", LIEF::assembly::arm::REG::SPSR)
  .value("VPR", LIEF::assembly::arm::REG::VPR)
  .value("ZR", LIEF::assembly::arm::REG::ZR)
  .value("D0", LIEF::assembly::arm::REG::D0)
  .value("D1", LIEF::assembly::arm::REG::D1)
  .value("D2", LIEF::assembly::arm::REG::D2)
  .value("D3", LIEF::assembly::arm::REG::D3)
  .value("D4", LIEF::assembly::arm::REG::D4)
  .value("D5", LIEF::assembly::arm::REG::D5)
  .value("D6", LIEF::assembly::arm::REG::D6)
  .value("D7", LIEF::assembly::arm::REG::D7)
  .value("D8", LIEF::assembly::arm::REG::D8)
  .value("D9", LIEF::assembly::arm::REG::D9)
  .value("D10", LIEF::assembly::arm::REG::D10)
  .value("D11", LIEF::assembly::arm::REG::D11)
  .value("D12", LIEF::assembly::arm::REG::D12)
  .value("D13", LIEF::assembly::arm::REG::D13)
  .value("D14", LIEF::assembly::arm::REG::D14)
  .value("D15", LIEF::assembly::arm::REG::D15)
  .value("D16", LIEF::assembly::arm::REG::D16)
  .value("D17", LIEF::assembly::arm::REG::D17)
  .value("D18", LIEF::assembly::arm::REG::D18)
  .value("D19", LIEF::assembly::arm::REG::D19)
  .value("D20", LIEF::assembly::arm::REG::D20)
  .value("D21", LIEF::assembly::arm::REG::D21)
  .value("D22", LIEF::assembly::arm::REG::D22)
  .value("D23", LIEF::assembly::arm::REG::D23)
  .value("D24", LIEF::assembly::arm::REG::D24)
  .value("D25", LIEF::assembly::arm::REG::D25)
  .value("D26", LIEF::assembly::arm::REG::D26)
  .value("D27", LIEF::assembly::arm::REG::D27)
  .value("D28", LIEF::assembly::arm::REG::D28)
  .value("D29", LIEF::assembly::arm::REG::D29)
  .value("D30", LIEF::assembly::arm::REG::D30)
  .value("D31", LIEF::assembly::arm::REG::D31)
  .value("FPINST2", LIEF::assembly::arm::REG::FPINST2)
  .value("MVFR0", LIEF::assembly::arm::REG::MVFR0)
  .value("MVFR1", LIEF::assembly::arm::REG::MVFR1)
  .value("MVFR2", LIEF::assembly::arm::REG::MVFR2)
  .value("P0", LIEF::assembly::arm::REG::P0)
  .value("Q0", LIEF::assembly::arm::REG::Q0)
  .value("Q1", LIEF::assembly::arm::REG::Q1)
  .value("Q2", LIEF::assembly::arm::REG::Q2)
  .value("Q3", LIEF::assembly::arm::REG::Q3)
  .value("Q4", LIEF::assembly::arm::REG::Q4)
  .value("Q5", LIEF::assembly::arm::REG::Q5)
  .value("Q6", LIEF::assembly::arm::REG::Q6)
  .value("Q7", LIEF::assembly::arm::REG::Q7)
  .value("Q8", LIEF::assembly::arm::REG::Q8)
  .value("Q9", LIEF::assembly::arm::REG::Q9)
  .value("Q10", LIEF::assembly::arm::REG::Q10)
  .value("Q11", LIEF::assembly::arm::REG::Q11)
  .value("Q12", LIEF::assembly::arm::REG::Q12)
  .value("Q13", LIEF::assembly::arm::REG::Q13)
  .value("Q14", LIEF::assembly::arm::REG::Q14)
  .value("Q15", LIEF::assembly::arm::REG::Q15)
  .value("R0", LIEF::assembly::arm::REG::R0)
  .value("R1", LIEF::assembly::arm::REG::R1)
  .value("R2", LIEF::assembly::arm::REG::R2)
  .value("R3", LIEF::assembly::arm::REG::R3)
  .value("R4", LIEF::assembly::arm::REG::R4)
  .value("R5", LIEF::assembly::arm::REG::R5)
  .value("R6", LIEF::assembly::arm::REG::R6)
  .value("R7", LIEF::assembly::arm::REG::R7)
  .value("R8", LIEF::assembly::arm::REG::R8)
  .value("R9", LIEF::assembly::arm::REG::R9)
  .value("R10", LIEF::assembly::arm::REG::R10)
  .value("R11", LIEF::assembly::arm::REG::R11)
  .value("R12", LIEF::assembly::arm::REG::R12)
  .value("S0", LIEF::assembly::arm::REG::S0)
  .value("S1", LIEF::assembly::arm::REG::S1)
  .value("S2", LIEF::assembly::arm::REG::S2)
  .value("S3", LIEF::assembly::arm::REG::S3)
  .value("S4", LIEF::assembly::arm::REG::S4)
  .value("S5", LIEF::assembly::arm::REG::S5)
  .value("S6", LIEF::assembly::arm::REG::S6)
  .value("S7", LIEF::assembly::arm::REG::S7)
  .value("S8", LIEF::assembly::arm::REG::S8)
  .value("S9", LIEF::assembly::arm::REG::S9)
  .value("S10", LIEF::assembly::arm::REG::S10)
  .value("S11", LIEF::assembly::arm::REG::S11)
  .value("S12", LIEF::assembly::arm::REG::S12)
  .value("S13", LIEF::assembly::arm::REG::S13)
  .value("S14", LIEF::assembly::arm::REG::S14)
  .value("S15", LIEF::assembly::arm::REG::S15)
  .value("S16", LIEF::assembly::arm::REG::S16)
  .value("S17", LIEF::assembly::arm::REG::S17)
  .value("S18", LIEF::assembly::arm::REG::S18)
  .value("S19", LIEF::assembly::arm::REG::S19)
  .value("S20", LIEF::assembly::arm::REG::S20)
  .value("S21", LIEF::assembly::arm::REG::S21)
  .value("S22", LIEF::assembly::arm::REG::S22)
  .value("S23", LIEF::assembly::arm::REG::S23)
  .value("S24", LIEF::assembly::arm::REG::S24)
  .value("S25", LIEF::assembly::arm::REG::S25)
  .value("S26", LIEF::assembly::arm::REG::S26)
  .value("S27", LIEF::assembly::arm::REG::S27)
  .value("S28", LIEF::assembly::arm::REG::S28)
  .value("S29", LIEF::assembly::arm::REG::S29)
  .value("S30", LIEF::assembly::arm::REG::S30)
  .value("S31", LIEF::assembly::arm::REG::S31)
  .value("D0_D2", LIEF::assembly::arm::REG::D0_D2)
  .value("D1_D3", LIEF::assembly::arm::REG::D1_D3)
  .value("D2_D4", LIEF::assembly::arm::REG::D2_D4)
  .value("D3_D5", LIEF::assembly::arm::REG::D3_D5)
  .value("D4_D6", LIEF::assembly::arm::REG::D4_D6)
  .value("D5_D7", LIEF::assembly::arm::REG::D5_D7)
  .value("D6_D8", LIEF::assembly::arm::REG::D6_D8)
  .value("D7_D9", LIEF::assembly::arm::REG::D7_D9)
  .value("D8_D10", LIEF::assembly::arm::REG::D8_D10)
  .value("D9_D11", LIEF::assembly::arm::REG::D9_D11)
  .value("D10_D12", LIEF::assembly::arm::REG::D10_D12)
  .value("D11_D13", LIEF::assembly::arm::REG::D11_D13)
  .value("D12_D14", LIEF::assembly::arm::REG::D12_D14)
  .value("D13_D15", LIEF::assembly::arm::REG::D13_D15)
  .value("D14_D16", LIEF::assembly::arm::REG::D14_D16)
  .value("D15_D17", LIEF::assembly::arm::REG::D15_D17)
  .value("D16_D18", LIEF::assembly::arm::REG::D16_D18)
  .value("D17_D19", LIEF::assembly::arm::REG::D17_D19)
  .value("D18_D20", LIEF::assembly::arm::REG::D18_D20)
  .value("D19_D21", LIEF::assembly::arm::REG::D19_D21)
  .value("D20_D22", LIEF::assembly::arm::REG::D20_D22)
  .value("D21_D23", LIEF::assembly::arm::REG::D21_D23)
  .value("D22_D24", LIEF::assembly::arm::REG::D22_D24)
  .value("D23_D25", LIEF::assembly::arm::REG::D23_D25)
  .value("D24_D26", LIEF::assembly::arm::REG::D24_D26)
  .value("D25_D27", LIEF::assembly::arm::REG::D25_D27)
  .value("D26_D28", LIEF::assembly::arm::REG::D26_D28)
  .value("D27_D29", LIEF::assembly::arm::REG::D27_D29)
  .value("D28_D30", LIEF::assembly::arm::REG::D28_D30)
  .value("D29_D31", LIEF::assembly::arm::REG::D29_D31)
  .value("Q0_Q1", LIEF::assembly::arm::REG::Q0_Q1)
  .value("Q1_Q2", LIEF::assembly::arm::REG::Q1_Q2)
  .value("Q2_Q3", LIEF::assembly::arm::REG::Q2_Q3)
  .value("Q3_Q4", LIEF::assembly::arm::REG::Q3_Q4)
  .value("Q4_Q5", LIEF::assembly::arm::REG::Q4_Q5)
  .value("Q5_Q6", LIEF::assembly::arm::REG::Q5_Q6)
  .value("Q6_Q7", LIEF::assembly::arm::REG::Q6_Q7)
  .value("Q7_Q8", LIEF::assembly::arm::REG::Q7_Q8)
  .value("Q8_Q9", LIEF::assembly::arm::REG::Q8_Q9)
  .value("Q9_Q10", LIEF::assembly::arm::REG::Q9_Q10)
  .value("Q10_Q11", LIEF::assembly::arm::REG::Q10_Q11)
  .value("Q11_Q12", LIEF::assembly::arm::REG::Q11_Q12)
  .value("Q12_Q13", LIEF::assembly::arm::REG::Q12_Q13)
  .value("Q13_Q14", LIEF::assembly::arm::REG::Q13_Q14)
  .value("Q14_Q15", LIEF::assembly::arm::REG::Q14_Q15)
  .value("Q0_Q1_Q2_Q3", LIEF::assembly::arm::REG::Q0_Q1_Q2_Q3)
  .value("Q1_Q2_Q3_Q4", LIEF::assembly::arm::REG::Q1_Q2_Q3_Q4)
  .value("Q2_Q3_Q4_Q5", LIEF::assembly::arm::REG::Q2_Q3_Q4_Q5)
  .value("Q3_Q4_Q5_Q6", LIEF::assembly::arm::REG::Q3_Q4_Q5_Q6)
  .value("Q4_Q5_Q6_Q7", LIEF::assembly::arm::REG::Q4_Q5_Q6_Q7)
  .value("Q5_Q6_Q7_Q8", LIEF::assembly::arm::REG::Q5_Q6_Q7_Q8)
  .value("Q6_Q7_Q8_Q9", LIEF::assembly::arm::REG::Q6_Q7_Q8_Q9)
  .value("Q7_Q8_Q9_Q10", LIEF::assembly::arm::REG::Q7_Q8_Q9_Q10)
  .value("Q8_Q9_Q10_Q11", LIEF::assembly::arm::REG::Q8_Q9_Q10_Q11)
  .value("Q9_Q10_Q11_Q12", LIEF::assembly::arm::REG::Q9_Q10_Q11_Q12)
  .value("Q10_Q11_Q12_Q13", LIEF::assembly::arm::REG::Q10_Q11_Q12_Q13)
  .value("Q11_Q12_Q13_Q14", LIEF::assembly::arm::REG::Q11_Q12_Q13_Q14)
  .value("Q12_Q13_Q14_Q15", LIEF::assembly::arm::REG::Q12_Q13_Q14_Q15)
  .value("R0_R1", LIEF::assembly::arm::REG::R0_R1)
  .value("R2_R3", LIEF::assembly::arm::REG::R2_R3)
  .value("R4_R5", LIEF::assembly::arm::REG::R4_R5)
  .value("R6_R7", LIEF::assembly::arm::REG::R6_R7)
  .value("R8_R9", LIEF::assembly::arm::REG::R8_R9)
  .value("R10_R11", LIEF::assembly::arm::REG::R10_R11)
  .value("R12_SP", LIEF::assembly::arm::REG::R12_SP)
  .value("D0_D1_D2", LIEF::assembly::arm::REG::D0_D1_D2)
  .value("D1_D2_D3", LIEF::assembly::arm::REG::D1_D2_D3)
  .value("D2_D3_D4", LIEF::assembly::arm::REG::D2_D3_D4)
  .value("D3_D4_D5", LIEF::assembly::arm::REG::D3_D4_D5)
  .value("D4_D5_D6", LIEF::assembly::arm::REG::D4_D5_D6)
  .value("D5_D6_D7", LIEF::assembly::arm::REG::D5_D6_D7)
  .value("D6_D7_D8", LIEF::assembly::arm::REG::D6_D7_D8)
  .value("D7_D8_D9", LIEF::assembly::arm::REG::D7_D8_D9)
  .value("D8_D9_D10", LIEF::assembly::arm::REG::D8_D9_D10)
  .value("D9_D10_D11", LIEF::assembly::arm::REG::D9_D10_D11)
  .value("D10_D11_D12", LIEF::assembly::arm::REG::D10_D11_D12)
  .value("D11_D12_D13", LIEF::assembly::arm::REG::D11_D12_D13)
  .value("D12_D13_D14", LIEF::assembly::arm::REG::D12_D13_D14)
  .value("D13_D14_D15", LIEF::assembly::arm::REG::D13_D14_D15)
  .value("D14_D15_D16", LIEF::assembly::arm::REG::D14_D15_D16)
  .value("D15_D16_D17", LIEF::assembly::arm::REG::D15_D16_D17)
  .value("D16_D17_D18", LIEF::assembly::arm::REG::D16_D17_D18)
  .value("D17_D18_D19", LIEF::assembly::arm::REG::D17_D18_D19)
  .value("D18_D19_D20", LIEF::assembly::arm::REG::D18_D19_D20)
  .value("D19_D20_D21", LIEF::assembly::arm::REG::D19_D20_D21)
  .value("D20_D21_D22", LIEF::assembly::arm::REG::D20_D21_D22)
  .value("D21_D22_D23", LIEF::assembly::arm::REG::D21_D22_D23)
  .value("D22_D23_D24", LIEF::assembly::arm::REG::D22_D23_D24)
  .value("D23_D24_D25", LIEF::assembly::arm::REG::D23_D24_D25)
  .value("D24_D25_D26", LIEF::assembly::arm::REG::D24_D25_D26)
  .value("D25_D26_D27", LIEF::assembly::arm::REG::D25_D26_D27)
  .value("D26_D27_D28", LIEF::assembly::arm::REG::D26_D27_D28)
  .value("D27_D28_D29", LIEF::assembly::arm::REG::D27_D28_D29)
  .value("D28_D29_D30", LIEF::assembly::arm::REG::D28_D29_D30)
  .value("D29_D30_D31", LIEF::assembly::arm::REG::D29_D30_D31)
  .value("D0_D2_D4", LIEF::assembly::arm::REG::D0_D2_D4)
  .value("D1_D3_D5", LIEF::assembly::arm::REG::D1_D3_D5)
  .value("D2_D4_D6", LIEF::assembly::arm::REG::D2_D4_D6)
  .value("D3_D5_D7", LIEF::assembly::arm::REG::D3_D5_D7)
  .value("D4_D6_D8", LIEF::assembly::arm::REG::D4_D6_D8)
  .value("D5_D7_D9", LIEF::assembly::arm::REG::D5_D7_D9)
  .value("D6_D8_D10", LIEF::assembly::arm::REG::D6_D8_D10)
  .value("D7_D9_D11", LIEF::assembly::arm::REG::D7_D9_D11)
  .value("D8_D10_D12", LIEF::assembly::arm::REG::D8_D10_D12)
  .value("D9_D11_D13", LIEF::assembly::arm::REG::D9_D11_D13)
  .value("D10_D12_D14", LIEF::assembly::arm::REG::D10_D12_D14)
  .value("D11_D13_D15", LIEF::assembly::arm::REG::D11_D13_D15)
  .value("D12_D14_D16", LIEF::assembly::arm::REG::D12_D14_D16)
  .value("D13_D15_D17", LIEF::assembly::arm::REG::D13_D15_D17)
  .value("D14_D16_D18", LIEF::assembly::arm::REG::D14_D16_D18)
  .value("D15_D17_D19", LIEF::assembly::arm::REG::D15_D17_D19)
  .value("D16_D18_D20", LIEF::assembly::arm::REG::D16_D18_D20)
  .value("D17_D19_D21", LIEF::assembly::arm::REG::D17_D19_D21)
  .value("D18_D20_D22", LIEF::assembly::arm::REG::D18_D20_D22)
  .value("D19_D21_D23", LIEF::assembly::arm::REG::D19_D21_D23)
  .value("D20_D22_D24", LIEF::assembly::arm::REG::D20_D22_D24)
  .value("D21_D23_D25", LIEF::assembly::arm::REG::D21_D23_D25)
  .value("D22_D24_D26", LIEF::assembly::arm::REG::D22_D24_D26)
  .value("D23_D25_D27", LIEF::assembly::arm::REG::D23_D25_D27)
  .value("D24_D26_D28", LIEF::assembly::arm::REG::D24_D26_D28)
  .value("D25_D27_D29", LIEF::assembly::arm::REG::D25_D27_D29)
  .value("D26_D28_D30", LIEF::assembly::arm::REG::D26_D28_D30)
  .value("D27_D29_D31", LIEF::assembly::arm::REG::D27_D29_D31)
  .value("D0_D2_D4_D6", LIEF::assembly::arm::REG::D0_D2_D4_D6)
  .value("D1_D3_D5_D7", LIEF::assembly::arm::REG::D1_D3_D5_D7)
  .value("D2_D4_D6_D8", LIEF::assembly::arm::REG::D2_D4_D6_D8)
  .value("D3_D5_D7_D9", LIEF::assembly::arm::REG::D3_D5_D7_D9)
  .value("D4_D6_D8_D10", LIEF::assembly::arm::REG::D4_D6_D8_D10)
  .value("D5_D7_D9_D11", LIEF::assembly::arm::REG::D5_D7_D9_D11)
  .value("D6_D8_D10_D12", LIEF::assembly::arm::REG::D6_D8_D10_D12)
  .value("D7_D9_D11_D13", LIEF::assembly::arm::REG::D7_D9_D11_D13)
  .value("D8_D10_D12_D14", LIEF::assembly::arm::REG::D8_D10_D12_D14)
  .value("D9_D11_D13_D15", LIEF::assembly::arm::REG::D9_D11_D13_D15)
  .value("D10_D12_D14_D16", LIEF::assembly::arm::REG::D10_D12_D14_D16)
  .value("D11_D13_D15_D17", LIEF::assembly::arm::REG::D11_D13_D15_D17)
  .value("D12_D14_D16_D18", LIEF::assembly::arm::REG::D12_D14_D16_D18)
  .value("D13_D15_D17_D19", LIEF::assembly::arm::REG::D13_D15_D17_D19)
  .value("D14_D16_D18_D20", LIEF::assembly::arm::REG::D14_D16_D18_D20)
  .value("D15_D17_D19_D21", LIEF::assembly::arm::REG::D15_D17_D19_D21)
  .value("D16_D18_D20_D22", LIEF::assembly::arm::REG::D16_D18_D20_D22)
  .value("D17_D19_D21_D23", LIEF::assembly::arm::REG::D17_D19_D21_D23)
  .value("D18_D20_D22_D24", LIEF::assembly::arm::REG::D18_D20_D22_D24)
  .value("D19_D21_D23_D25", LIEF::assembly::arm::REG::D19_D21_D23_D25)
  .value("D20_D22_D24_D26", LIEF::assembly::arm::REG::D20_D22_D24_D26)
  .value("D21_D23_D25_D27", LIEF::assembly::arm::REG::D21_D23_D25_D27)
  .value("D22_D24_D26_D28", LIEF::assembly::arm::REG::D22_D24_D26_D28)
  .value("D23_D25_D27_D29", LIEF::assembly::arm::REG::D23_D25_D27_D29)
  .value("D24_D26_D28_D30", LIEF::assembly::arm::REG::D24_D26_D28_D30)
  .value("D25_D27_D29_D31", LIEF::assembly::arm::REG::D25_D27_D29_D31)
  .value("D1_D2", LIEF::assembly::arm::REG::D1_D2)
  .value("D3_D4", LIEF::assembly::arm::REG::D3_D4)
  .value("D5_D6", LIEF::assembly::arm::REG::D5_D6)
  .value("D7_D8", LIEF::assembly::arm::REG::D7_D8)
  .value("D9_D10", LIEF::assembly::arm::REG::D9_D10)
  .value("D11_D12", LIEF::assembly::arm::REG::D11_D12)
  .value("D13_D14", LIEF::assembly::arm::REG::D13_D14)
  .value("D15_D16", LIEF::assembly::arm::REG::D15_D16)
  .value("D17_D18", LIEF::assembly::arm::REG::D17_D18)
  .value("D19_D20", LIEF::assembly::arm::REG::D19_D20)
  .value("D21_D22", LIEF::assembly::arm::REG::D21_D22)
  .value("D23_D24", LIEF::assembly::arm::REG::D23_D24)
  .value("D25_D26", LIEF::assembly::arm::REG::D25_D26)
  .value("D27_D28", LIEF::assembly::arm::REG::D27_D28)
  .value("D29_D30", LIEF::assembly::arm::REG::D29_D30)
  .value("D1_D2_D3_D4", LIEF::assembly::arm::REG::D1_D2_D3_D4)
  .value("D3_D4_D5_D6", LIEF::assembly::arm::REG::D3_D4_D5_D6)
  .value("D5_D6_D7_D8", LIEF::assembly::arm::REG::D5_D6_D7_D8)
  .value("D7_D8_D9_D10", LIEF::assembly::arm::REG::D7_D8_D9_D10)
  .value("D9_D10_D11_D12", LIEF::assembly::arm::REG::D9_D10_D11_D12)
  .value("D11_D12_D13_D14", LIEF::assembly::arm::REG::D11_D12_D13_D14)
  .value("D13_D14_D15_D16", LIEF::assembly::arm::REG::D13_D14_D15_D16)
  .value("D15_D16_D17_D18", LIEF::assembly::arm::REG::D15_D16_D17_D18)
  .value("D17_D18_D19_D20", LIEF::assembly::arm::REG::D17_D18_D19_D20)
  .value("D19_D20_D21_D22", LIEF::assembly::arm::REG::D19_D20_D21_D22)
  .value("D21_D22_D23_D24", LIEF::assembly::arm::REG::D21_D22_D23_D24)
  .value("D23_D24_D25_D26", LIEF::assembly::arm::REG::D23_D24_D25_D26)
  .value("D25_D26_D27_D28", LIEF::assembly::arm::REG::D25_D26_D27_D28)
  .value("D27_D28_D29_D30", LIEF::assembly::arm::REG::D27_D28_D29_D30)
  .value("NUM_TARGET_REGS", LIEF::assembly::arm::REG::NUM_TARGET_REGS)
  ;
}
}