#pragma once

class CDOTA_Modifier_Disruptor_Thunder_Strike : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 strike_interval; // offset 0x1AA8, size 0x4, align 4
    float32 radius; // offset 0x1AAC, size 0x4, align 4
    int32 strike_damage; // offset 0x1AB0, size 0x4, align 4
    int32 strike_damage_bonus; // offset 0x1AB4, size 0x4, align 4
    int32 hits_units_inside_kinetic; // offset 0x1AB8, size 0x4, align 4
    GameTime_t m_flGroundDelayEndTime; // offset 0x1ABC, size 0x4, align 255
    bool is_thinker; // offset 0x1AC0, size 0x1, align 1
    bool m_bTransferred; // offset 0x1AC1, size 0x1, align 1
    char _pad_1AC2[0x2]; // offset 0x1AC2
    int32 m_nThinkerViewer; // offset 0x1AC4, size 0x4, align 4
    int32 m_nThinkerViewerTeam; // offset 0x1AC8, size 0x4, align 4
    int32 m_nStrikeCount; // offset 0x1ACC, size 0x4, align 4
};
