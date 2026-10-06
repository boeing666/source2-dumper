#pragma once

class CCitadel_Neutral_LaserBeam : public CCitadel_Modifier_NeutralAbility /*0x0*/  // sizeof 0x11E8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1F8]; // offset 0x0
    ParticleIndex_t m_nChargeEffect; // offset 0x1F8, size 0x4, align 255
    ParticleIndex_t m_nPreviewEffect; // offset 0x1FC, size 0x4, align 255
    VectorWS m_vInitialTargetPos; // offset 0x200, size 0xC, align 4
    GameTime_t m_flNextAuraDropTick; // offset 0x20C, size 0x4, align 255
    GameTime_t m_tLastToggleTime; // offset 0x210, size 0x4, align 255
    char _pad_0214[0x4]; // offset 0x214
    CCitadelAbilityBeam_t m_beam; // offset 0x218, size 0xFC8, align 255
    bool m_bBeamInit; // offset 0x11E0, size 0x1, align 1
    char _pad_11E1[0x3]; // offset 0x11E1
    float32 m_flYaw; // offset 0x11E4, size 0x4, align 4
};
