#pragma once

class CAbility_Mirage_SandPhantom : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1090, align 0x8 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bHasVictims; // offset 0xF70, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0F71[0x7]; // offset 0xF71
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecVictimModifiers; // offset 0xF78, size 0x18, align 8
    char _pad_0F90[0x100]; // offset 0xF90
};
