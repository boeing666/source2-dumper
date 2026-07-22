#pragma once

class CBodyGroupAnimTag : public CAnimTagBase /*0x0*/  // sizeof 0x78, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x58]; // offset 0x0
    int32 m_nPriority; // offset 0x58, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_005C[0x4]; // offset 0x5C
    CUtlVector< CBodyGroupSetting > m_bodyGroupSettings; // offset 0x60, size 0x18, align 8 | MPropertyFriendlyName
};
