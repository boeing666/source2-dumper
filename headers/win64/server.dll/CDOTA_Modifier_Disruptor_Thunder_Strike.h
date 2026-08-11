#pragma once

class CDOTA_Modifier_Disruptor_Thunder_Strike : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 strike_interval; // offset 0x1A78, size 0x4, align 4
    float32 radius; // offset 0x1A7C, size 0x4, align 4
    int32 strike_damage; // offset 0x1A80, size 0x4, align 4
    int32 strike_damage_bonus; // offset 0x1A84, size 0x4, align 4
    int32 hits_units_inside_kinetic; // offset 0x1A88, size 0x4, align 4
    GameTime_t m_flGroundDelayEndTime; // offset 0x1A8C, size 0x4, align 255
    bool is_thinker; // offset 0x1A90, size 0x1, align 1
    bool m_bTransferred; // offset 0x1A91, size 0x1, align 1
    char _pad_1A92[0x2]; // offset 0x1A92
    int32 m_nThinkerViewer; // offset 0x1A94, size 0x4, align 4
    int32 m_nThinkerViewerTeam; // offset 0x1A98, size 0x4, align 4
    int32 m_nStrikeCount; // offset 0x1A9C, size 0x4, align 4
};
