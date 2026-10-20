#pragma once

class CAbility_Mirage_SandPhantom : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    bool m_bHasVictims; // offset 0x16E0, size 0x1, align 1
    char _pad_16E1[0x7]; // offset 0x16E1
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecVictimModifiers; // offset 0x16E8, size 0x18, align 8
    char _pad_1700[0x160]; // offset 0x1700
};
