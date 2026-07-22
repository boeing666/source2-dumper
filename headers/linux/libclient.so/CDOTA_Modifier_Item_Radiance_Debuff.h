#pragma once

class CDOTA_Modifier_Item_Radiance_Debuff : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A6C]; // offset 0x0
    int32 aura_damage; // offset 0x1A6C, size 0x4, align 4
    int32 aura_damage_upgrade_bonus; // offset 0x1A70, size 0x4, align 4
    int32 aura_damage_illusions; // offset 0x1A74, size 0x4, align 4
    int32 blind_pct; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
};
