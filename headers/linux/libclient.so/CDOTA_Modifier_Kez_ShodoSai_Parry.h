#pragma once

class CDOTA_Modifier_Kez_ShodoSai_Parry : public CDOTA_Buff /*0x0*/  // sizeof 0x1B78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_nPoseParameterWE; // offset 0x1AF8, size 0x4, align 4
    int32 m_nPoseParameterNS; // offset 0x1AFC, size 0x4, align 4
    float32 m_flLastPoseX; // offset 0x1B00, size 0x4, align 4
    float32 m_flLastPoseY; // offset 0x1B04, size 0x4, align 4
    int32 m_nLastMaxDirection; // offset 0x1B08, size 0x4, align 4
    VectorWS m_vLastOrigin; // offset 0x1B0C, size 0xC, align 4
    GameTime_t m_flLastGameTime; // offset 0x1B18, size 0x4, align 255
    int32 speed_penalty; // offset 0x1B1C, size 0x4, align 4
    int32 forward_angle; // offset 0x1B20, size 0x4, align 4
    float32 vuln_duration; // offset 0x1B24, size 0x4, align 4
    float32 parry_window_duration; // offset 0x1B28, size 0x4, align 4
    float32 parry_stun_duration; // offset 0x1B2C, size 0x4, align 4
    bool parry_only_heroes; // offset 0x1B30, size 0x1, align 1
    bool parry_any_damage; // offset 0x1B31, size 0x1, align 1
    char _pad_1B32[0x6]; // offset 0x1B32
    CUtlVector< CHandle< C_BaseEntity > > m_vecParriedEnemies; // offset 0x1B38, size 0x18, align 8
    Vector m_vFacing; // offset 0x1B50, size 0xC, align 4
    float32 m_flFacingTarget; // offset 0x1B5C, size 0x4, align 4
    float32 m_flLastOverheadTime; // offset 0x1B60, size 0x4, align 4
    float32 m_flOldPitch; // offset 0x1B64, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B68, size 0x4, align 255
    CHandle< C_BaseEntity > m_hVulnAttackTarget; // offset 0x1B6C, size 0x4, align 4
    bool m_bAttackingVuln; // offset 0x1B70, size 0x1, align 1
    char _pad_1B71[0x7]; // offset 0x1B71
};
