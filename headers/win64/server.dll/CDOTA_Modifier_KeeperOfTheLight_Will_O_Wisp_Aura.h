#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 wisp_damage; // offset 0x1A7C, size 0x4, align 4
    float32 off_duration; // offset 0x1A80, size 0x4, align 4
    float32 off_duration_initial; // offset 0x1A84, size 0x4, align 4
    float32 on_duration; // offset 0x1A88, size 0x4, align 4
    int32 hit_count; // offset 0x1A8C, size 0x4, align 4
    int32 m_iAttackCount; // offset 0x1A90, size 0x4, align 4
    GameTime_t m_flNextTimeOn; // offset 0x1A94, size 0x4, align 255
    bool m_bActive; // offset 0x1A98, size 0x1, align 1
    char _pad_1A99[0x3]; // offset 0x1A99
    ParticleIndex_t m_nFXIndex; // offset 0x1A9C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1AA0, size 0x4, align 255
    GameTime_t m_flNextTime; // offset 0x1AA4, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vecDamagedEntities; // offset 0x1AA8, size 0x18, align 8
    float32 m_flCorrectionTime; // offset 0x1AC0, size 0x4, align 4
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
