#pragma once

class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC60, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xC4C]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC4C, size 0x4, align 4 | MNetworkEnable
    bool m_bFloating; // offset 0xC50, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0C51[0xF]; // offset 0xC51
};
