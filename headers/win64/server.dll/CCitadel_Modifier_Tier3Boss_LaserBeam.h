#pragma once

class CCitadel_Modifier_Tier3Boss_LaserBeam : public CCitadel_Modifier_Tier3Boss_Base /*0x0*/  // sizeof 0x250, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD4]; // offset 0x0
    Vector m_vStart; // offset 0xD4, size 0xC, align 4
    Vector m_vEnd; // offset 0xE0, size 0xC, align 4
    Vector m_vPrevEnd; // offset 0xEC, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0xF8, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0xFC, size 0x4, align 255
    GameTime_t m_flNextAuraDropTick; // offset 0x100, size 0x4, align 255
    char _pad_0104[0x4]; // offset 0x104
    CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // offset 0x108, size 0x18, align 8
    GameTime_t m_flLastShakeTime; // offset 0x120, size 0x4, align 255
    Vector m_vecBeamTarget; // offset 0x124, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0x130, size 0x4, align 255
    Vector m_vecEnemyPosition; // offset 0x134, size 0xC, align 4
    bool m_bPreviewMode; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    int32 m_iAttachmentIndex; // offset 0x144, size 0x4, align 4
    AttachmentHandle_t m_hAttachment; // offset 0x148, size 0x1, align 255
    char _pad_0149[0x107]; // offset 0x149
};
