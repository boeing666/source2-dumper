#pragma once

class CCitadel_Pickup : public CBaseAnimGraph /*0x0*/  // sizeof 0xB10, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xA90, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    bool m_bActive; // offset 0xAB0, size 0x1, align 1 | MNetworkEnable
    bool m_bInteractive; // offset 0xAB1, size 0x1, align 1 | MNetworkEnable
    char _pad_0AB2[0x2]; // offset 0xAB2
    Vector m_vVacuumStartPos; // offset 0xAB4, size 0xC, align 4 | MNetworkEnable
    Vector m_vInitialVacuumVel; // offset 0xAC0, size 0xC, align 4 | MNetworkEnable
    CHandle< CBaseEntity > m_hVacuumTarget; // offset 0xACC, size 0x4, align 4 | MNetworkEnable
    char _pad_0AD0[0x10]; // offset 0xAD0
    VectorWS m_vVacuumPos; // offset 0xAE0, size 0xC, align 4
    GameTime_t m_flVacuumStartTime; // offset 0xAEC, size 0x4, align 255
    char _pad_0AF0[0x4]; // offset 0xAF0
    Vector m_vImpactVel; // offset 0xAF4, size 0xC, align 4
    Vector m_vImpactPos; // offset 0xB00, size 0xC, align 4
    GameTime_t m_flImpactTime; // offset 0xB0C, size 0x4, align 255
};
