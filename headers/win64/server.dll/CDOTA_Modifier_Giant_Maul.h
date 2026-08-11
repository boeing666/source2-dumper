#pragma once

class CDOTA_Modifier_Giant_Maul : public CDOTA_Buff_Item /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 crit_multiplier; // offset 0x1A78, size 0x4, align 4
    float32 debuff_duration; // offset 0x1A7C, size 0x4, align 4
    AttackRecord_t m_iInFlightRecord; // offset 0x1A80, size 0x2, align 255
    char _pad_1A82[0x6]; // offset 0x1A82
};
