#pragma once

class CDOTA_Modifier_Chen_Penitence_Self_Attack_Range : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    int32 self_attack_range_bonus; // offset 0x1AAC, size 0x4, align 4
    bool m_bActive; // offset 0x1AB0, size 0x1, align 1
    char _pad_1AB1[0x7]; // offset 0x1AB1
};
