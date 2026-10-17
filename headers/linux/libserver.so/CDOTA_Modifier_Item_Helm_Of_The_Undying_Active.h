#pragma once

class CDOTA_Modifier_Item_Helm_Of_The_Undying_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    bool m_bPassive; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    float32 bonus_kill_duration; // offset 0x1AB0, size 0x4, align 4
    float32 kill_radius; // offset 0x1AB4, size 0x4, align 4
};
