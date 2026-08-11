#pragma once

class CCitadel_Item_Mystic_Regeneration : public CCitadel_Item /*0x0*/  // sizeof 0x10B0, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xFA4]; // offset 0x0
    bool m_bForceModUpdate; // offset 0xFA4, size 0x1, align 1
    char _pad_0FA5[0x3]; // offset 0xFA5
    int32 m_iRegenStacks; // offset 0xFA8, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    char _pad_0FAC[0x104]; // offset 0xFAC
};
