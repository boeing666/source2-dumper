#pragma once

class CCitadel_Modifier_Tier3Boss_LaserBeam : public CCitadel_Modifier_Tier3Boss_Base /*0x0*/  // sizeof 0x260, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0xD4]; // offset 0x0
    GameTime_t m_flSoundStartTime; // offset 0xD4, size 0x4, align 255
    ParticleIndex_t m_nHandEffect1; // offset 0xD8, size 0x4, align 255
    ParticleIndex_t m_nHandEffect2; // offset 0xDC, size 0x4, align 255
    char _pad_00E0[0x4]; // offset 0xE0
    Vector m_vStart; // offset 0xE4, size 0xC, align 4
    Vector m_vEnd; // offset 0xF0, size 0xC, align 4
    Vector m_vPrevEnd; // offset 0xFC, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0x108, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0x10C, size 0x4, align 255
    GameTime_t m_flNextAuraDropTick; // offset 0x110, size 0x4, align 255
    char _pad_0114[0x4]; // offset 0x114
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0x118, size 0x18, align 8
    GameTime_t m_flLastShakeTime; // offset 0x130, size 0x4, align 255
    Vector m_vecBeamTarget; // offset 0x134, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0x140, size 0x4, align 255
    Vector m_vecEnemyPosition; // offset 0x144, size 0xC, align 4
    bool m_bPreviewMode; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x3]; // offset 0x151
    int32 m_iAttachmentIndex; // offset 0x154, size 0x4, align 4
    AttachmentHandle_t m_hAttachment; // offset 0x158, size 0x1, align 255
    char _pad_0159[0x107]; // offset 0x159
};
