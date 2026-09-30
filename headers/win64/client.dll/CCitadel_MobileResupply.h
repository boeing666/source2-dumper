#pragma once

class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xDB0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xDA8, size 0x4, align 4
    bool m_bFloating; // offset 0xDAC, size 0x1, align 1 | MNotSaved
    char _pad_0DAD[0x3]; // offset 0xDAD
};
