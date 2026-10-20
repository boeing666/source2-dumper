#pragma once

class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier /*0x0*/  // sizeof 0xE70, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x360]; // offset 0x0
    bool m_bPreview; // offset 0x360, size 0x1, align 1
    char _pad_0361[0x3]; // offset 0x361
    float32 m_flYaw; // offset 0x364, size 0x4, align 4
    int32 m_iEnemy; // offset 0x368, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentEnemy; // offset 0x36C, size 0x4, align 4
    AttachmentHandle_t m_hLaserAttachPoint; // offset 0x370, size 0x1, align 255
    AttachmentHandle_t m_hLaserAttachPoint02; // offset 0x371, size 0x1, align 255
    AttachmentHandle_t m_hLaserSearchStartPos; // offset 0x372, size 0x1, align 255
    char _pad_0373[0x7A5]; // offset 0x373
    VectorWS m_vStart; // offset 0xB18, size 0xC, align 4
    VectorWS m_vEnd; // offset 0xB24, size 0xC, align 4
    VectorWS m_vPrevEnd; // offset 0xB30, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0xB3C, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0xB40, size 0x4, align 4
    float32 m_flCreepDamagePerTick; // offset 0xB44, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0xB48, size 0x4, align 255
    char _pad_0B4C[0x4]; // offset 0xB4C
    CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // offset 0xB50, size 0x18, align 8
    float32 m_flDamageTickRate; // offset 0xB68, size 0x4, align 4
    GameTime_t m_flLastShakeTime; // offset 0xB6C, size 0x4, align 255
    bool m_bSweepRightFirst; // offset 0xB70, size 0x1, align 1
    char _pad_0B71[0x3]; // offset 0xB71
    QAngle m_angBeamAim; // offset 0xB74, size 0xC, align 4
    VectorWS m_vecBeamTarget; // offset 0xB80, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0xB8C, size 0x4, align 255
    char _pad_0B90[0x18]; // offset 0xB90
    GameTime_t m_flTargetingTaskStartTime; // offset 0xBA8, size 0x4, align 255
    float32 m_flTrackVel; // offset 0xBAC, size 0x4, align 4
    char _pad_0BB0[0x2C0]; // offset 0xBB0
};
