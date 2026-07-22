#pragma once

class CPulseCell_TestEnums : public CPulseCell_BaseValue /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (pulse_system) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    PulseTestEnumColor_t m_nReferenceColor; // offset 0x48, size 0x4, align 4
    PulseTestEnumFlags_t m_nReferenceFlags; // offset 0x4C, size 0x4, align 4
};
