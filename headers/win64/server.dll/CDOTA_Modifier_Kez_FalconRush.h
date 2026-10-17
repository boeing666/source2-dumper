#pragma once

class CDOTA_Modifier_Kez_FalconRush : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1AA8, size 0x4, align 4
    int32 slow_resist; // offset 0x1AAC, size 0x4, align 4
    float32 rush_speed; // offset 0x1AB0, size 0x4, align 4
    float32 rush_range; // offset 0x1AB4, size 0x4, align 4
    float32 break_range; // offset 0x1AB8, size 0x4, align 4
    bool m_bInRush; // offset 0x1ABC, size 0x1, align 1
    char _pad_1ABD[0x3]; // offset 0x1ABD
    ParticleIndex_t m_nFXIndex; // offset 0x1AC0, size 0x4, align 255
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AC4, size 0x4, align 4
    ParticleIndex_t m_nFXStackIndex; // offset 0x1AC8, size 0x4, align 255
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
