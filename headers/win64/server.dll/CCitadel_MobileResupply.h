#pragma once

class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC60, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xC50]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC50, size 0x4, align 4
    bool m_bFloating; // offset 0xC54, size 0x1, align 1 | MNotSaved
    char _pad_0C55[0xB]; // offset 0xC55
};
