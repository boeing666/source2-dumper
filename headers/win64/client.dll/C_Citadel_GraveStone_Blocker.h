#pragma once

class C_Citadel_GraveStone_Blocker : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCC0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xCB0, size 0x4, align 4 | MNetworkEnable
    int32 m_iGravestoneState; // offset 0xCB4, size 0x4, align 4 | MNetworkEnable
    float32 m_flLifetime; // offset 0xCB8, size 0x4, align 4
    char _pad_0CBC[0x4]; // offset 0xCBC
};
