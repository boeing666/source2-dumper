#pragma once

class CDOTA_Modifier_KeeperOfTheLight_Will_O_Wisp_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1B48, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    float32 wisp_damage; // offset 0x1AFC, size 0x4, align 4
    float32 off_duration; // offset 0x1B00, size 0x4, align 4
    float32 off_duration_initial; // offset 0x1B04, size 0x4, align 4
    float32 on_duration; // offset 0x1B08, size 0x4, align 4
    int32 hit_count; // offset 0x1B0C, size 0x4, align 4
    int32 m_iAttackCount; // offset 0x1B10, size 0x4, align 4
    GameTime_t m_flNextTimeOn; // offset 0x1B14, size 0x4, align 255
    bool m_bActive; // offset 0x1B18, size 0x1, align 1
    char _pad_1B19[0x3]; // offset 0x1B19
    ParticleIndex_t m_nFXIndex; // offset 0x1B1C, size 0x4, align 255
    ParticleIndex_t m_nFXIndexB; // offset 0x1B20, size 0x4, align 255
    GameTime_t m_flNextTime; // offset 0x1B24, size 0x4, align 255
    CUtlVector< CHandle< CBaseEntity > > m_vecDamagedEntities; // offset 0x1B28, size 0x18, align 8
    float32 m_flCorrectionTime; // offset 0x1B40, size 0x4, align 4
    char _pad_1B44[0x4]; // offset 0x1B44
};
