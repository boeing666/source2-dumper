#pragma once

class CDOTA_Modifier_Plus_HighFiveRequested : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 acknowledge_range; // offset 0x1AA8, size 0x4, align 4
    float32 think_interval; // offset 0x1AAC, size 0x4, align 4
    float32 acknowledged_cooldown; // offset 0x1AB0, size 0x4, align 4
    bool m_bAcknowledged; // offset 0x1AB4, size 0x1, align 1
    bool m_bWithEnemy; // offset 0x1AB5, size 0x1, align 1
    bool m_bFirstThink; // offset 0x1AB6, size 0x1, align 1
    char _pad_1AB7[0x1]; // offset 0x1AB7
    int32 high_five_level; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
