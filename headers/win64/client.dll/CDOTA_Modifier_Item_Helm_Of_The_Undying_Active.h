#pragma once

class CDOTA_Modifier_Item_Helm_Of_The_Undying_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    bool m_bPassive; // offset 0x1A5C, size 0x1, align 1
    char _pad_1A5D[0x3]; // offset 0x1A5D
    float32 bonus_kill_duration; // offset 0x1A60, size 0x4, align 4
    float32 kill_radius; // offset 0x1A64, size 0x4, align 4
};
