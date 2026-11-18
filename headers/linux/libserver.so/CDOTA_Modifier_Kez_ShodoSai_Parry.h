#pragma once

class CDOTA_Modifier_Kez_ShodoSai_Parry : public CDOTA_Buff /*0x0*/  // sizeof 0x1B50, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 speed_penalty; // offset 0x1AF8, size 0x4, align 4
    int32 forward_angle; // offset 0x1AFC, size 0x4, align 4
    float32 vuln_duration; // offset 0x1B00, size 0x4, align 4
    float32 parry_window_duration; // offset 0x1B04, size 0x4, align 4
    float32 parry_stun_duration; // offset 0x1B08, size 0x4, align 4
    bool parry_only_heroes; // offset 0x1B0C, size 0x1, align 1
    bool parry_any_damage; // offset 0x1B0D, size 0x1, align 1
    char _pad_1B0E[0x2]; // offset 0x1B0E
    CUtlVector< CHandle< CBaseEntity > > m_vecParriedEnemies; // offset 0x1B10, size 0x18, align 8
    Vector m_vFacing; // offset 0x1B28, size 0xC, align 4
    float32 m_flFacingTarget; // offset 0x1B34, size 0x4, align 4
    float32 m_flLastOverheadTime; // offset 0x1B38, size 0x4, align 4
    float32 m_flOldPitch; // offset 0x1B3C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B40, size 0x4, align 255
    CHandle< CBaseEntity > m_hVulnAttackTarget; // offset 0x1B44, size 0x4, align 4
    bool m_bAttackingVuln; // offset 0x1B48, size 0x1, align 1
    char _pad_1B49[0x7]; // offset 0x1B49
};
