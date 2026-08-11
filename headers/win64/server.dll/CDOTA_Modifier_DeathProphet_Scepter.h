#pragma once

class CDOTA_Modifier_DeathProphet_Scepter : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 spirit_speed; // offset 0x1A7C, size 0x4, align 4
    float32 max_distance; // offset 0x1A80, size 0x4, align 4
    float32 give_up_distance; // offset 0x1A84, size 0x4, align 4
    float32 min_damage; // offset 0x1A88, size 0x4, align 4
    float32 max_damage; // offset 0x1A8C, size 0x4, align 4
    int32 heal_percent; // offset 0x1A90, size 0x4, align 4
    int32 spirit_duration; // offset 0x1A94, size 0x4, align 4
    GameTime_t m_fStartTime; // offset 0x1A98, size 0x4, align 255
    GameTime_t m_fLastThinkTime; // offset 0x1A9C, size 0x4, align 255
    bool m_bExpired; // offset 0x1AA0, size 0x1, align 1
    char _pad_1AA1[0x7]; // offset 0x1AA1
    sSpiritInfo* m_SpiritInfo; // offset 0x1AA8, size 0x8, align 8
    char _pad_1AB0[0x18]; // offset 0x1AB0
};
