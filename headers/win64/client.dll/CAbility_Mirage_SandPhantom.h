#pragma once

class CAbility_Mirage_SandPhantom : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1858, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bHasVictims; // offset 0x16D8, size 0x1, align 1
    char _pad_16D9[0x7]; // offset 0x16D9
    CUtlVector< CModifierHandleTyped< CCitadelModifier > > m_vecVictimModifiers; // offset 0x16E0, size 0x18, align 8
    char _pad_16F8[0x160]; // offset 0x16F8
};
