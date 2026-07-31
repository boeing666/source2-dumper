#pragma once

class CDOTA_Modifier_Riki_Poison_Dart : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 wake_damage_limit; // offset 0x1A78, size 0x4, align 4
    float32 m_flDamageTaken; // offset 0x1A7C, size 0x4, align 4
};
