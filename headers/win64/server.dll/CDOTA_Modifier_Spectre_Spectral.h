#pragma once

class CDOTA_Modifier_Spectre_Spectral : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 speed_bonus; // offset 0x1A78, size 0x4, align 4
    int32 radius; // offset 0x1A7C, size 0x4, align 4
    float32 linger_time; // offset 0x1A80, size 0x4, align 4
    bool m_bSpeedBonus; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
    CHandle< CBaseEntity > m_hAttackTarget; // offset 0x1A88, size 0x4, align 4
    GameTime_t m_flLingerUntil; // offset 0x1A8C, size 0x4, align 255
    ParticleIndex_t m_nFXIndex; // offset 0x1A90, size 0x4, align 255
    char _pad_1A94[0x4]; // offset 0x1A94
};
