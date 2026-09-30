#pragma once

class CCitadel_Neutral_LaserBeam : public CCitadel_Modifier_NeutralAbility /*0x0*/  // sizeof 0x11E0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    ParticleIndex_t m_nChargeEffect; // offset 0x1F0, size 0x4, align 255
    ParticleIndex_t m_nPreviewEffect; // offset 0x1F4, size 0x4, align 255
    VectorWS m_vInitialTargetPos; // offset 0x1F8, size 0xC, align 4
    GameTime_t m_flNextAuraDropTick; // offset 0x204, size 0x4, align 255
    GameTime_t m_tLastToggleTime; // offset 0x208, size 0x4, align 255
    char _pad_020C[0x4]; // offset 0x20C
    CCitadelAbilityBeam_t m_beam; // offset 0x210, size 0xFC8, align 255
    bool m_bBeamInit; // offset 0x11D8, size 0x1, align 1
    char _pad_11D9[0x3]; // offset 0x11D9
    float32 m_flYaw; // offset 0x11DC, size 0x4, align 4
};
