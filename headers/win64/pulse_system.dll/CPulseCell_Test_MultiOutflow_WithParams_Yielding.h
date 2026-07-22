#pragma once

class CPulseCell_Test_MultiOutflow_WithParams_Yielding : public CPulseCell_BaseYieldingInflow /*0x0*/  // sizeof 0x240, align 0x8 [vtable] (pulse_system) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xD8]; // offset 0x0
    SignatureOutflow_Continue m_Out1; // offset 0xD8, size 0x48, align 255
    SignatureOutflow_Continue m_AsyncChild1; // offset 0x120, size 0x48, align 255
    SignatureOutflow_Continue m_AsyncChild2; // offset 0x168, size 0x48, align 255
    SignatureOutflow_Resume m_YieldResume1; // offset 0x1B0, size 0x48, align 255
    SignatureOutflow_Resume m_YieldResume2; // offset 0x1F8, size 0x48, align 255
};
