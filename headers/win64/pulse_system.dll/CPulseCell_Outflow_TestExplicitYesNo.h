#pragma once

class CPulseCell_Outflow_TestExplicitYesNo : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0xD8, align 0x8 [vtable] (pulse_system) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CPulse_OutflowConnection m_Yes; // offset 0x48, size 0x48, align 255 | MPropertyFriendlyName
    CPulse_OutflowConnection m_No; // offset 0x90, size 0x48, align 255 | MPropertyFriendlyName
};
