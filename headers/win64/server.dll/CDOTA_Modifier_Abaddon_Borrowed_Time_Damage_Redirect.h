#pragma once

class CDOTA_Modifier_Abaddon_Borrowed_Time_Damage_Redirect : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_fDamageTaken; // offset 0x1AA8, size 0x4, align 4
    int32 ally_threshold_scepter; // offset 0x1AAC, size 0x4, align 4
};
