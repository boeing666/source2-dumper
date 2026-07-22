#pragma once

class CDOTA_Ability_Largo_AmphibianRhapsody_FightSong : public CDOTA_Ability_Largo_AmphibianRhapsody_Song /*0x0*/  // sizeof 0x5A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x590]; // offset 0x0
    float32 radius; // offset 0x590, size 0x4, align 4
    float32 battle_burst_duration; // offset 0x594, size 0x4, align 4
    int32 burst_damage; // offset 0x598, size 0x4, align 4
    int32 damage_per_stack; // offset 0x59C, size 0x4, align 4
};
