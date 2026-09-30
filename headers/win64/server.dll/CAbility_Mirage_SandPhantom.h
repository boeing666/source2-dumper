#pragma once

class CAbility_Mirage_SandPhantom : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1620, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    bool m_bHasVictims; // offset 0x14A0, size 0x1, align 1
    char _pad_14A1[0x7]; // offset 0x14A1
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecVictimModifiers; // offset 0x14A8, size 0x18, align 8
    char _pad_14C0[0x160]; // offset 0x14C0
};
