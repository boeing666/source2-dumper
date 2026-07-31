#pragma once

class CDOTA_Modifier_Kez_ShodoSai_Parry : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 m_nPoseParameterWE; // offset 0x1A78, size 0x4, align 4
    int32 m_nPoseParameterNS; // offset 0x1A7C, size 0x4, align 4
    float32 m_flLastPoseX; // offset 0x1A80, size 0x4, align 4
    float32 m_flLastPoseY; // offset 0x1A84, size 0x4, align 4
    int32 m_nLastMaxDirection; // offset 0x1A88, size 0x4, align 4
    VectorWS m_vLastOrigin; // offset 0x1A8C, size 0xC, align 4
    GameTime_t m_flLastGameTime; // offset 0x1A98, size 0x4, align 255
    int32 speed_penalty; // offset 0x1A9C, size 0x4, align 4
    int32 forward_angle; // offset 0x1AA0, size 0x4, align 4
    float32 vuln_duration; // offset 0x1AA4, size 0x4, align 4
    float32 parry_window_duration; // offset 0x1AA8, size 0x4, align 4
    float32 parry_stun_duration; // offset 0x1AAC, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecParriedEnemies; // offset 0x1AB0, size 0x18, align 8
    Vector m_vFacing; // offset 0x1AC8, size 0xC, align 4
    float32 m_flFacingTarget; // offset 0x1AD4, size 0x4, align 4
    float32 m_flLastOverheadTime; // offset 0x1AD8, size 0x4, align 4
    float32 m_flOldPitch; // offset 0x1ADC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AE0, size 0x4, align 255
    CHandle< C_BaseEntity > m_hVulnAttackTarget; // offset 0x1AE4, size 0x4, align 4
    bool m_bAttackingVuln; // offset 0x1AE8, size 0x1, align 1
    char _pad_1AE9[0x7]; // offset 0x1AE9
};
