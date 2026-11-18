#pragma once

class CDOTA_Ability_Kobold_Disarm : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x85C]; // offset 0x0
    float32 base_damage; // offset 0x85C, size 0x4, align 4
    float32 radius; // offset 0x860, size 0x4, align 4
    float32 break_duration; // offset 0x864, size 0x4, align 4
    char _pad_0868[0x28]; // offset 0x868
    VectorWS vPos; // offset 0x890, size 0xC, align 4
    char _pad_089C[0x4]; // offset 0x89C
};
