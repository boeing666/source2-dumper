#pragma once

class CDOTA_Modifier_Beastmaster_InnerBeast : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1AA8, size 0x4, align 4
    int32 attack_speed_per_unit; // offset 0x1AAC, size 0x4, align 4
    int32 magic_resist; // offset 0x1AB0, size 0x4, align 4
    int32 nTotalUnits; // offset 0x1AB4, size 0x4, align 4
};
