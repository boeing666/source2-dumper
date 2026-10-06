#pragma once

class CCitadel_Modifier_Tier3Boss_LaserBeam : public CCitadel_Modifier_Tier3Boss_Base /*0x0*/  // sizeof 0x338, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x14C]; // offset 0x0
    GameTime_t m_flSoundStartTime; // offset 0x14C, size 0x4, align 255
    ParticleIndex_t m_nHandEffect1; // offset 0x150, size 0x4, align 255
    ParticleIndex_t m_nHandEffect2; // offset 0x154, size 0x4, align 255
    char _pad_0158[0x4]; // offset 0x158
    VectorWS m_vStart; // offset 0x15C, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x168, size 0xC, align 4
    VectorWS m_vPrevEnd; // offset 0x174, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0x180, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0x184, size 0x4, align 255
    GameTime_t m_flNextAuraDropTick; // offset 0x188, size 0x4, align 255
    char _pad_018C[0x4]; // offset 0x18C
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0x190, size 0x18, align 8
    GameTime_t m_flLastShakeTime; // offset 0x1A8, size 0x4, align 255
    VectorWS m_vecBeamTarget; // offset 0x1AC, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0x1B8, size 0x4, align 255
    VectorWS m_vecEnemyPosition; // offset 0x1BC, size 0xC, align 4
    bool m_bPreviewMode; // offset 0x1C8, size 0x1, align 1
    char _pad_01C9[0x3]; // offset 0x1C9
    int32 m_iAttachmentIndex; // offset 0x1CC, size 0x4, align 4
    AttachmentHandle_t m_hAttachment; // offset 0x1D0, size 0x1, align 255
    char _pad_01D1[0x167]; // offset 0x1D1
};
