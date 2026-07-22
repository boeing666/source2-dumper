#pragma once

class CAbility_Mirage_SandPhantom : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x12F8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    bool m_bHasVictims; // offset 0x11D8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_11D9[0x7]; // offset 0x11D9
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecVictimModifiers; // offset 0x11E0, size 0x18, align 8
    char _pad_11F8[0x100]; // offset 0x11F8
};
