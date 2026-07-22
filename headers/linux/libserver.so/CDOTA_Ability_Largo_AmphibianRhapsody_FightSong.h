#pragma once

class CDOTA_Ability_Largo_AmphibianRhapsody_FightSong : public CDOTA_Ability_Largo_AmphibianRhapsody_Song /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x868]; // offset 0x0
    float32 radius; // offset 0x868, size 0x4, align 4
    float32 battle_burst_duration; // offset 0x86C, size 0x4, align 4
    int32 burst_damage; // offset 0x870, size 0x4, align 4
    int32 damage_per_stack; // offset 0x874, size 0x4, align 4
};
