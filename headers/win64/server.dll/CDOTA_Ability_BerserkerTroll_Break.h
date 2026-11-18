#pragma once

class CDOTA_Ability_BerserkerTroll_Break : public CDOTABaseAbility /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    float32 base_damage; // offset 0x580, size 0x4, align 4
    float32 impact_radius; // offset 0x584, size 0x4, align 4
    float32 break_duration; // offset 0x588, size 0x4, align 4
    char _pad_058C[0x14]; // offset 0x58C
    VectorWS vTargetPos; // offset 0x5A0, size 0xC, align 4
    char _pad_05AC[0x4]; // offset 0x5AC
};
