#pragma once

class CCitadel_Modifier_Tier2Boss_LaserBeam : public CCitadelModifier /*0x0*/  // sizeof 0xE68, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x358]; // offset 0x0
    bool m_bPreview; // offset 0x358, size 0x1, align 1
    char _pad_0359[0x3]; // offset 0x359
    float32 m_flYaw; // offset 0x35C, size 0x4, align 4
    int32 m_iEnemy; // offset 0x360, size 0x4, align 4
    CHandle< CBaseEntity > m_hCurrentEnemy; // offset 0x364, size 0x4, align 4
    AttachmentHandle_t m_hLaserAttachPoint; // offset 0x368, size 0x1, align 255
    AttachmentHandle_t m_hLaserAttachPoint02; // offset 0x369, size 0x1, align 255
    AttachmentHandle_t m_hLaserSearchStartPos; // offset 0x36A, size 0x1, align 255
    char _pad_036B[0x7A5]; // offset 0x36B
    VectorWS m_vStart; // offset 0xB10, size 0xC, align 4
    VectorWS m_vEnd; // offset 0xB1C, size 0xC, align 4
    VectorWS m_vPrevEnd; // offset 0xB28, size 0xC, align 4
    float32 m_flAngleBetweenTrace; // offset 0xB34, size 0x4, align 4
    float32 m_flDamagePerTick; // offset 0xB38, size 0x4, align 4
    float32 m_flCreepDamagePerTick; // offset 0xB3C, size 0x4, align 4
    GameTime_t m_flNextDamageTick; // offset 0xB40, size 0x4, align 255
    char _pad_0B44[0x4]; // offset 0xB44
    CUtlVector< CHandle< CBaseEntity > > m_vecEntitiesHit; // offset 0xB48, size 0x18, align 8
    float32 m_flDamageTickRate; // offset 0xB60, size 0x4, align 4
    GameTime_t m_flLastShakeTime; // offset 0xB64, size 0x4, align 255
    bool m_bSweepRightFirst; // offset 0xB68, size 0x1, align 1
    char _pad_0B69[0x3]; // offset 0xB69
    QAngle m_angBeamAim; // offset 0xB6C, size 0xC, align 4
    VectorWS m_vecBeamTarget; // offset 0xB78, size 0xC, align 4
    GameTime_t m_flLastBeamUpdateTime; // offset 0xB84, size 0x4, align 255
    char _pad_0B88[0x18]; // offset 0xB88
    GameTime_t m_flTargetingTaskStartTime; // offset 0xBA0, size 0x4, align 255
    float32 m_flTrackVel; // offset 0xBA4, size 0x4, align 4
    char _pad_0BA8[0x2C0]; // offset 0xBA8
};
