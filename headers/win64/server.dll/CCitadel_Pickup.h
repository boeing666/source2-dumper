#pragma once

class CCitadel_Pickup : public CBaseAnimGraph /*0x0*/  // sizeof 0xB70, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xAE0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xAE0, size 0x20, align 255
    CHandle< CBaseEntity > m_hAssignedClaimer; // offset 0xB00, size 0x4, align 4
    bool m_bActive; // offset 0xB04, size 0x1, align 1
    bool m_bInteractive; // offset 0xB05, size 0x1, align 1
    char _pad_0B06[0x2]; // offset 0xB06
    VectorWS m_vVacuumStartPos; // offset 0xB08, size 0xC, align 4
    Vector m_vInitialVacuumVel; // offset 0xB14, size 0xC, align 4
    CHandle< CBaseEntity > m_hVacuumTarget; // offset 0xB20, size 0x4, align 4
    char _pad_0B24[0x18]; // offset 0xB24
    VectorWS m_vVacuumPos; // offset 0xB3C, size 0xC, align 4
    GameTime_t m_flVacuumStartTime; // offset 0xB48, size 0x4, align 255
    char _pad_0B4C[0x4]; // offset 0xB4C
    Vector m_vImpactVel; // offset 0xB50, size 0xC, align 4
    VectorWS m_vImpactPos; // offset 0xB5C, size 0xC, align 4
    GameTime_t m_flImpactTime; // offset 0xB68, size 0x4, align 255
    char _pad_0B6C[0x4]; // offset 0xB6C
};
