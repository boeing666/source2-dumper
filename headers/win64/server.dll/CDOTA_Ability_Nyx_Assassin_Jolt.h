#pragma once

class CDOTA_Ability_Nyx_Assassin_Jolt : public CDOTABaseAbility /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    float32 aoe; // offset 0x590, size 0x4, align 4
    int32 damage; // offset 0x594, size 0x4, align 4
    int32 m_nNPCSpawnedID; // offset 0x598, size 0x4, align 4
    char _pad_059C[0x4]; // offset 0x59C
};
