#pragma once

class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier /*0x0*/  // sizeof 0x520, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x250]; // offset 0x0
    bool m_bPreview; // offset 0x250, size 0x1, align 1
    char _pad_0251[0x3]; // offset 0x251
    float32 m_flYaw; // offset 0x254, size 0x4, align 4
    int32 m_iEnemy; // offset 0x258, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentEnemy; // offset 0x25C, size 0x4, align 4
    AttachmentHandle_t m_hLaserAttachPoint; // offset 0x260, size 0x1, align 255
    AttachmentHandle_t m_hLaserAttachPoint02; // offset 0x261, size 0x1, align 255
    AttachmentHandle_t m_hLaserSearchStartPos; // offset 0x262, size 0x1, align 255
    char _pad_0263[0x15]; // offset 0x263
    GameTime_t m_flSoundStartTime; // offset 0x278, size 0x4, align 255
    char _pad_027C[0xC]; // offset 0x27C
    VectorWS m_vStart; // offset 0x288, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x294, size 0xC, align 4
    VectorWS m_vPrevEnd; // offset 0x2A0, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0x2AC, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0x2B0, size 0x4, align 4
    float32 m_flCreepDamagePerTick; // offset 0x2B4, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0x2B8, size 0x4, align 255
    char _pad_02BC[0x4]; // offset 0x2BC
    CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // offset 0x2C0, size 0x18, align 8
    float32 m_flDamageTickRate; // offset 0x2D8, size 0x4, align 4
    GameTime_t m_flLastShakeTime; // offset 0x2DC, size 0x4, align 255
    bool m_bSweepRightFirst; // offset 0x2E0, size 0x1, align 1
    char _pad_02E1[0x3]; // offset 0x2E1
    QAngle m_angBeamAim; // offset 0x2E4, size 0xC, align 4
    VectorWS m_vecBeamTarget; // offset 0x2F0, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0x2FC, size 0x4, align 255
    char _pad_0300[0x18]; // offset 0x300
    GameTime_t m_flTargetingTaskStartTime; // offset 0x318, size 0x4, align 255
    float32 m_flTrackVel; // offset 0x31C, size 0x4, align 4
    char _pad_0320[0x200]; // offset 0x320
};
