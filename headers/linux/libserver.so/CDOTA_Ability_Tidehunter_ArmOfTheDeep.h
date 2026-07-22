#pragma once

class CDOTA_Ability_Tidehunter_ArmOfTheDeep : public CDOTABaseAbility /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x860]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList; // offset 0x860, size 0x18, align 8
    float32 duration; // offset 0x878, size 0x4, align 4
    int32 speed; // offset 0x87C, size 0x4, align 4
    float32 damage; // offset 0x880, size 0x4, align 4
    float32 range; // offset 0x884, size 0x4, align 4
    char _pad_0888[0x18]; // offset 0x888
};
