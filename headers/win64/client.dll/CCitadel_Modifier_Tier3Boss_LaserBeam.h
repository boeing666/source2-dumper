#pragma once

class CCitadel_Modifier_Tier3Boss_LaserBeam : public CCitadel_Modifier_Tier3Boss_Base /*0x0*/  // sizeof 0x340, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x154]; // offset 0x0
    GameTime_t m_flSoundStartTime; // offset 0x154, size 0x4, align 255
    ParticleIndex_t m_nHandEffect1; // offset 0x158, size 0x4, align 255
    ParticleIndex_t m_nHandEffect2; // offset 0x15C, size 0x4, align 255
    char _pad_0160[0x4]; // offset 0x160
    VectorWS m_vStart; // offset 0x164, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x170, size 0xC, align 4
    VectorWS m_vPrevEnd; // offset 0x17C, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0x188, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0x18C, size 0x4, align 255
    GameTime_t m_flNextAuraDropTick; // offset 0x190, size 0x4, align 255
    char _pad_0194[0x4]; // offset 0x194
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0x198, size 0x18, align 8
    GameTime_t m_flLastShakeTime; // offset 0x1B0, size 0x4, align 255
    VectorWS m_vecBeamTarget; // offset 0x1B4, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0x1C0, size 0x4, align 255
    VectorWS m_vecEnemyPosition; // offset 0x1C4, size 0xC, align 4
    bool m_bPreviewMode; // offset 0x1D0, size 0x1, align 1
    char _pad_01D1[0x3]; // offset 0x1D1
    int32 m_iAttachmentIndex; // offset 0x1D4, size 0x4, align 4
    AttachmentHandle_t m_hAttachment; // offset 0x1D8, size 0x1, align 255
    char _pad_01D9[0x167]; // offset 0x1D9
};
