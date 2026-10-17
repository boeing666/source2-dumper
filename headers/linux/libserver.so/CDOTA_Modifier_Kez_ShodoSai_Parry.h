#pragma once

class CDOTA_Modifier_Kez_ShodoSai_Parry : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 speed_penalty; // offset 0x1AA8, size 0x4, align 4
    int32 forward_angle; // offset 0x1AAC, size 0x4, align 4
    float32 vuln_duration; // offset 0x1AB0, size 0x4, align 4
    float32 parry_window_duration; // offset 0x1AB4, size 0x4, align 4
    float32 parry_stun_duration; // offset 0x1AB8, size 0x4, align 4
    bool parry_only_heroes; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    CUtlVector< CHandle< CBaseEntity > > m_vecParriedEnemies; // offset 0x1AC0, size 0x18, align 8
    Vector m_vFacing; // offset 0x1AD8, size 0xC, align 4
    float32 m_flFacingTarget; // offset 0x1AE4, size 0x4, align 4
    float32 m_flLastOverheadTime; // offset 0x1AE8, size 0x4, align 4
    float32 m_flOldPitch; // offset 0x1AEC, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AF0, size 0x4, align 255
    CHandle< CBaseEntity > m_hVulnAttackTarget; // offset 0x1AF4, size 0x4, align 4
    bool m_bAttackingVuln; // offset 0x1AF8, size 0x1, align 1
    char _pad_1AF9[0x7]; // offset 0x1AF9
};
