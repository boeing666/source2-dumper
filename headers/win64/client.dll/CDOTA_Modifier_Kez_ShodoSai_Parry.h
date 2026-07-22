#pragma once

class CDOTA_Modifier_Kez_ShodoSai_Parry : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 m_nPoseParameterWE; // offset 0x1A58, size 0x4, align 4
    int32 m_nPoseParameterNS; // offset 0x1A5C, size 0x4, align 4
    float32 m_flLastPoseX; // offset 0x1A60, size 0x4, align 4
    float32 m_flLastPoseY; // offset 0x1A64, size 0x4, align 4
    int32 m_nLastMaxDirection; // offset 0x1A68, size 0x4, align 4
    VectorWS m_vLastOrigin; // offset 0x1A6C, size 0xC, align 4
    GameTime_t m_flLastGameTime; // offset 0x1A78, size 0x4, align 255
    int32 speed_penalty; // offset 0x1A7C, size 0x4, align 4
    int32 forward_angle; // offset 0x1A80, size 0x4, align 4
    float32 vuln_duration; // offset 0x1A84, size 0x4, align 4
    float32 parry_window_duration; // offset 0x1A88, size 0x4, align 4
    float32 parry_stun_duration; // offset 0x1A8C, size 0x4, align 4
    CUtlVector< CHandle< C_BaseEntity > > m_vecParriedEnemies; // offset 0x1A90, size 0x18, align 8
    Vector m_vFacing; // offset 0x1AA8, size 0xC, align 4
    float32 m_flFacingTarget; // offset 0x1AB4, size 0x4, align 4
    float32 m_flLastOverheadTime; // offset 0x1AB8, size 0x4, align 4
    float32 m_flOldPitch; // offset 0x1ABC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AC0, size 0x4, align 255
    CHandle< C_BaseEntity > m_hVulnAttackTarget; // offset 0x1AC4, size 0x4, align 4
    bool m_bAttackingVuln; // offset 0x1AC8, size 0x1, align 1
    char _pad_1AC9[0x7]; // offset 0x1AC9
};
