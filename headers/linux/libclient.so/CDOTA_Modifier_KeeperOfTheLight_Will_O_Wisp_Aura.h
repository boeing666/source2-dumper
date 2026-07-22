#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    float32 wisp_damage; // offset 0x1A5C, size 0x4, align 4
    float32 off_duration; // offset 0x1A60, size 0x4, align 4
    float32 off_duration_initial; // offset 0x1A64, size 0x4, align 4
    float32 on_duration; // offset 0x1A68, size 0x4, align 4
    int32 hit_count; // offset 0x1A6C, size 0x4, align 4
    int32 m_iAttackCount; // offset 0x1A70, size 0x4, align 4
    GameTime_t m_flNextTimeOn; // offset 0x1A74, size 0x4, align 255
    bool m_bActive; // offset 0x1A78, size 0x1, align 1
    char _pad_1A79[0x3]; // offset 0x1A79
    ParticleIndex_t m_nFXIndex; // offset 0x1A7C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1A80, size 0x4, align 255
    GameTime_t m_flNextTime; // offset 0x1A84, size 0x4, align 255
    CUtlVector< CHandle< C_BaseEntity > > m_vecDamagedEntities; // offset 0x1A88, size 0x18, align 8
    float32 m_flCorrectionTime; // offset 0x1AA0, size 0x4, align 4
    char _pad_1AA4[0x4]; // offset 0x1AA4
};
