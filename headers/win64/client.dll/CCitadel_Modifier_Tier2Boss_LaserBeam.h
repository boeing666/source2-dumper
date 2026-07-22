#pragma once

class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier /*0x0*/  // sizeof 0x510, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x240]; // offset 0x0
    bool m_bPreview; // offset 0x240, size 0x1, align 1
    char _pad_0241[0x3]; // offset 0x241
    float32 m_flYaw; // offset 0x244, size 0x4, align 4
    int32 m_iEnemy; // offset 0x248, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCurrentEnemy; // offset 0x24C, size 0x4, align 4
    AttachmentHandle_t m_hLaserAttachPoint; // offset 0x250, size 0x1, align 255
    AttachmentHandle_t m_hLaserAttachPoint02; // offset 0x251, size 0x1, align 255
    AttachmentHandle_t m_hLaserSearchStartPos; // offset 0x252, size 0x1, align 255
    char _pad_0253[0x15]; // offset 0x253
    GameTime_t m_flSoundStartTime; // offset 0x268, size 0x4, align 255
    char _pad_026C[0xC]; // offset 0x26C
    VectorWS m_vStart; // offset 0x278, size 0xC, align 4
    VectorWS m_vEnd; // offset 0x284, size 0xC, align 4
    VectorWS m_vPrevEnd; // offset 0x290, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0x29C, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0x2A0, size 0x4, align 4
    float32 m_flCreepDamagePerTick; // offset 0x2A4, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0x2A8, size 0x4, align 255
    char _pad_02AC[0x4]; // offset 0x2AC
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0x2B0, size 0x18, align 8
    float32 m_flDamageTickRate; // offset 0x2C8, size 0x4, align 4
    GameTime_t m_flLastShakeTime; // offset 0x2CC, size 0x4, align 255
    bool m_bSweepRightFirst; // offset 0x2D0, size 0x1, align 1
    char _pad_02D1[0x3]; // offset 0x2D1
    QAngle m_angBeamAim; // offset 0x2D4, size 0xC, align 4
    VectorWS m_vecBeamTarget; // offset 0x2E0, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0x2EC, size 0x4, align 255
    char _pad_02F0[0x18]; // offset 0x2F0
    GameTime_t m_flTargetingTaskStartTime; // offset 0x308, size 0x4, align 255
    float32 m_flTrackVel; // offset 0x30C, size 0x4, align 4
    char _pad_0310[0x200]; // offset 0x310
};
