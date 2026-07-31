#pragma once

class CDOTA_Modifier_Beastmaster_InnerBeast : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 bonus_attack_speed; // offset 0x1A78, size 0x4, align 4
    int32 attack_speed_per_unit; // offset 0x1A7C, size 0x4, align 4
    int32 magic_resist; // offset 0x1A80, size 0x4, align 4
    int32 nTotalUnits; // offset 0x1A84, size 0x4, align 4
};
