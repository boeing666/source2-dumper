#pragma once

class CCitadel_MagicianTurret : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xCB0, size 0x4, align 4 | MNetworkEnable
    char _pad_0CB4[0x4]; // offset 0xCB4
};
