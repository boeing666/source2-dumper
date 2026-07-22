#pragma once

class CPulseCell_LimitCount : public CPulseCell_BaseRequirement /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (pulse_runtime_lib) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    int32 m_nLimitCount; // offset 0x48, size 0x4, align 4 | MPropertyFlattenIntoParentRow
    char _pad_004C[0x4]; // offset 0x4C
};
