#pragma once

class CCitadel_MobileResupply : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xCB0, size 0x4, align 4 | MNetworkEnable
    bool m_bFloating; // offset 0xCB4, size 0x1, align 1 | MNetworkEnable MNotSaved
    char _pad_0CB5[0x3]; // offset 0xCB5
};
