#pragma once

class CSmartPropPulse_CreateSizer : public CPulseCell_BaseFlow /*0x0*/  // sizeof 0x58, align 0x8 [vtable] (smartprops) {MGetKV3ClassDefaults MPropertyFriendlyName MPropertyDescription MVDataClassGroup}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    CUtlString m_Name; // offset 0x48, size 0x8, align 8 | MPropertyFriendlyName MPropertyDescription
    bool m_bHACK_ProvideResultMinX; // offset 0x50, size 0x1, align 1
    bool m_bHACK_ProvideResultMaxX; // offset 0x51, size 0x1, align 1
    bool m_bHACK_ProvideResultMinY; // offset 0x52, size 0x1, align 1
    bool m_bHACK_ProvideResultMaxY; // offset 0x53, size 0x1, align 1
    bool m_bHACK_ProvideResultMinZ; // offset 0x54, size 0x1, align 1
    bool m_bHACK_ProvideResultMaxZ; // offset 0x55, size 0x1, align 1
    char _pad_0056[0x2]; // offset 0x56
};
