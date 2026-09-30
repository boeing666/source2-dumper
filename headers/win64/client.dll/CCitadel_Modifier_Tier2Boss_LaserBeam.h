#pragma once

class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier /*0x0*/  // sizeof 0xE50, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x340]; // offset 0x0
    bool m_bPreview; // offset 0x340, size 0x1, align 1
    char _pad_0341[0x3]; // offset 0x341
    float32 m_flYaw; // offset 0x344, size 0x4, align 4
    int32 m_iEnemy; // offset 0x348, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCurrentEnemy; // offset 0x34C, size 0x4, align 4
    AttachmentHandle_t m_hLaserAttachPoint; // offset 0x350, size 0x1, align 255
    AttachmentHandle_t m_hLaserAttachPoint02; // offset 0x351, size 0x1, align 255
    AttachmentHandle_t m_hLaserSearchStartPos; // offset 0x352, size 0x1, align 255
    char _pad_0353[0x7A5]; // offset 0x353
    VectorWS m_vStart; // offset 0xAF8, size 0xC, align 4
    VectorWS m_vEnd; // offset 0xB04, size 0xC, align 4
    VectorWS m_vPrevEnd; // offset 0xB10, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0xB1C, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0xB20, size 0x4, align 4
    float32 m_flCreepDamagePerTick; // offset 0xB24, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0xB28, size 0x4, align 255
    char _pad_0B2C[0x4]; // offset 0xB2C
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0xB30, size 0x18, align 8
    float32 m_flDamageTickRate; // offset 0xB48, size 0x4, align 4
    GameTime_t m_flLastShakeTime; // offset 0xB4C, size 0x4, align 255
    bool m_bSweepRightFirst; // offset 0xB50, size 0x1, align 1
    char _pad_0B51[0x3]; // offset 0xB51
    QAngle m_angBeamAim; // offset 0xB54, size 0xC, align 4
    VectorWS m_vecBeamTarget; // offset 0xB60, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0xB6C, size 0x4, align 255
    char _pad_0B70[0x18]; // offset 0xB70
    GameTime_t m_flTargetingTaskStartTime; // offset 0xB88, size 0x4, align 255
    float32 m_flTrackVel; // offset 0xB8C, size 0x4, align 4
    char _pad_0B90[0x2C0]; // offset 0xB90
};
