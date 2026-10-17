#pragma once

class CDOTA_Modifier_Hoodwink_Sharpshooter_Windup : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bReachedMax; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    float32 m_flLastOverheadTime; // offset 0x1AAC, size 0x4, align 4
    float32 m_flFacingTarget; // offset 0x1AB0, size 0x4, align 4
    VectorWS m_vAimTarget; // offset 0x1AB4, size 0xC, align 4
    ParticleIndex_t m_nCrosshairFX; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
    CUtlVector< CHandle< CBaseEntity > > m_vecVisionThinkers; // offset 0x1AC8, size 0x18, align 8
    float32 arrow_vision; // offset 0x1AE0, size 0x4, align 4
    float32 max_charge_time; // offset 0x1AE4, size 0x4, align 4
    float32 turn_rate; // offset 0x1AE8, size 0x4, align 4
    float32 base_power; // offset 0x1AEC, size 0x4, align 4
};
