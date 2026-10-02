#pragma once

class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xE08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xE00]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xE00, size 0x4, align 4
    bool m_bFloating; // offset 0xE04, size 0x1, align 1 | MNotSaved
    char _pad_0E05[0x3]; // offset 0xE05
};
