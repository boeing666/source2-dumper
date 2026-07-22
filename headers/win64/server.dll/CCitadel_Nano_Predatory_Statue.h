#pragma once

class CCitadel_Nano_Predatory_Statue : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC20, align 0x10 [vtable] (server) {MNetworkVarNames}
{
public:
    char _pad_0000[0xC18]; // offset 0x0
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC18, size 0x4, align 4 | MNetworkEnable
    float32 m_flLifetime; // offset 0xC1C, size 0x4, align 4
};
