#pragma once

class CDOTA_Modifier_Abaddon_Mist_Coil_Damage_Penalty : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 damage_percentage_on_perform_attack; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
