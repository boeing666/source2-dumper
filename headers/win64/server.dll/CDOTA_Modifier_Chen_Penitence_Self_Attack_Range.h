#pragma once

class CDOTA_Modifier_Chen_Penitence_Self_Attack_Range : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    int32 self_attack_range_bonus; // offset 0x1A7C, size 0x4, align 4
    bool m_bActive; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
