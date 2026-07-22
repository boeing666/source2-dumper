#pragma once

class C_Citadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xCD0, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xCC8]; // offset 0x0
    CHandle< C_CitadelBaseAbility > m_hAbility; // offset 0xCC8, size 0x4, align 4 | MNetworkEnable
    float32 m_flLifetime; // offset 0xCCC, size 0x4, align 4
};
