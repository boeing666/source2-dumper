#pragma once

class C_DOTA_Ability_Nyx_Assassin_Impale : public C_DOTABaseAbility /*0x0*/  // sizeof 0x6E0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x6A8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList; // offset 0x6A8, size 0x18, align 8
    float32 width; // offset 0x6C0, size 0x4, align 4
    float32 duration; // offset 0x6C4, size 0x4, align 4
    float32 length; // offset 0x6C8, size 0x4, align 4
    float32 speed; // offset 0x6CC, size 0x4, align 4
    VectorWS vOriginalCast; // offset 0x6D0, size 0xC, align 4
    char _pad_06DC[0x4]; // offset 0x6DC
};
