#pragma once

class CDOTA_Modifier_Lich_FrostNova_Slow : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 slow_movement_speed; // offset 0x1A78, size 0x4, align 4
    int32 slow_attack_speed; // offset 0x1A7C, size 0x4, align 4
    int32 slow_attack_speed_primary; // offset 0x1A80, size 0x4, align 4
    bool m_bIsPrimary; // offset 0x1A84, size 0x1, align 1
    char _pad_1A85[0x3]; // offset 0x1A85
};
