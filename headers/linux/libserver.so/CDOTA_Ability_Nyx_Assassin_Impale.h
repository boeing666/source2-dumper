#pragma once

class CDOTA_Ability_Nyx_Assassin_Impale : public CDOTABaseAbility /*0x0*/  // sizeof 0x898, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x860, size 0x18, align 8
    float32 width; // offset 0x878, size 0x4, align 4
    float32 duration; // offset 0x87C, size 0x4, align 4
    float32 length; // offset 0x880, size 0x4, align 4
    float32 speed; // offset 0x884, size 0x4, align 4
    VectorWS vOriginalCast; // offset 0x888, size 0xC, align 4
    char _pad_0894[0x4]; // offset 0x894
};
