#pragma once

class CDOTA_Ability_Undying_Tombstone : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x580]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vZombies; // offset 0x580, size 0x18, align 8
    CHandle< CBaseEntity > hTombstone; // offset 0x598, size 0x4, align 4
    float32 radius; // offset 0x59C, size 0x4, align 4
    float32 duration; // offset 0x5A0, size 0x4, align 4
    char _pad_05A4[0x4]; // offset 0x5A4
};
