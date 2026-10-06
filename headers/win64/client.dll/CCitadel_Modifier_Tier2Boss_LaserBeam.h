#pragma once

class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier /*0x0*/  // sizeof 0xE58, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x348]; // offset 0x0
    bool m_bPreview; // offset 0x348, size 0x1, align 1
    char _pad_0349[0x3]; // offset 0x349
    float32 m_flYaw; // offset 0x34C, size 0x4, align 4
    int32 m_iEnemy; // offset 0x350, size 0x4, align 4
    CHandle< C_BaseEntity > m_hCurrentEnemy; // offset 0x354, size 0x4, align 4
    AttachmentHandle_t m_hLaserAttachPoint; // offset 0x358, size 0x1, align 255
    AttachmentHandle_t m_hLaserAttachPoint02; // offset 0x359, size 0x1, align 255
    AttachmentHandle_t m_hLaserSearchStartPos; // offset 0x35A, size 0x1, align 255
    char _pad_035B[0x7A5]; // offset 0x35B
    VectorWS m_vStart; // offset 0xB00, size 0xC, align 4
    VectorWS m_vEnd; // offset 0xB0C, size 0xC, align 4
    VectorWS m_vPrevEnd; // offset 0xB18, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0xB24, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0xB28, size 0x4, align 4
    float32 m_flCreepDamagePerTick; // offset 0xB2C, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0xB30, size 0x4, align 255
    char _pad_0B34[0x4]; // offset 0xB34
    CUtlVector< CHandle< C_BaseEntity > > m_vecEntitiesHit; // offset 0xB38, size 0x18, align 8
    float32 m_flDamageTickRate; // offset 0xB50, size 0x4, align 4
    GameTime_t m_flLastShakeTime; // offset 0xB54, size 0x4, align 255
    bool m_bSweepRightFirst; // offset 0xB58, size 0x1, align 1
    char _pad_0B59[0x3]; // offset 0xB59
    QAngle m_angBeamAim; // offset 0xB5C, size 0xC, align 4
    VectorWS m_vecBeamTarget; // offset 0xB68, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0xB74, size 0x4, align 255
    char _pad_0B78[0x18]; // offset 0xB78
    GameTime_t m_flTargetingTaskStartTime; // offset 0xB90, size 0x4, align 255
    float32 m_flTrackVel; // offset 0xB94, size 0x4, align 4
    char _pad_0B98[0x2C0]; // offset 0xB98
};
