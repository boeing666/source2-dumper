#pragma once

class CCitadel_Pickup : public CBaseAnimGraph /*0x0*/  // sizeof 0xB20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xA90, size 0x20, align 255
    CHandle< CBaseEntity > m_hAssignedClaimer; // offset 0xAB0, size 0x4, align 4
    bool m_bActive; // offset 0xAB4, size 0x1, align 1
    bool m_bInteractive; // offset 0xAB5, size 0x1, align 1
    char _pad_0AB6[0x2]; // offset 0xAB6
    VectorWS m_vVacuumStartPos; // offset 0xAB8, size 0xC, align 4
    Vector m_vInitialVacuumVel; // offset 0xAC4, size 0xC, align 4
    CHandle< CBaseEntity > m_hVacuumTarget; // offset 0xAD0, size 0x4, align 4
    char _pad_0AD4[0x18]; // offset 0xAD4
    VectorWS m_vVacuumPos; // offset 0xAEC, size 0xC, align 4
    GameTime_t m_flVacuumStartTime; // offset 0xAF8, size 0x4, align 255
    char _pad_0AFC[0x4]; // offset 0xAFC
    Vector m_vImpactVel; // offset 0xB00, size 0xC, align 4
    VectorWS m_vImpactPos; // offset 0xB0C, size 0xC, align 4
    GameTime_t m_flImpactTime; // offset 0xB18, size 0x4, align 255
    char _pad_0B1C[0x4]; // offset 0xB1C
};
