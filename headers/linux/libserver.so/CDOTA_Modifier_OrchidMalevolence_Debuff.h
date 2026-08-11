#pragma once

class CDOTA_Modifier_OrchidMalevolence_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 silence_damage_percent; // offset 0x1A78, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1A7C, size 0x4, align 4
};
