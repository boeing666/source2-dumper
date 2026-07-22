#pragma once

class CCitadel_GraveStone_Blocker : public CCitadelAnimatingModelEntity /*0x0*/  // sizeof 0xC20, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xBF0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CHandle< CCitadelBaseAbility > m_hAbility; // offset 0xC10, size 0x4, align 4 | MNetworkEnable
    int32 m_iGravestoneState; // offset 0xC14, size 0x4, align 4 | MNetworkEnable
    float32 m_flLifetime; // offset 0xC18, size 0x4, align 4
    char _pad_0C1C[0x4]; // offset 0xC1C
};
