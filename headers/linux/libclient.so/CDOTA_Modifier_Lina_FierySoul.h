#pragma once

class CDOTA_Modifier_Lina_FierySoul : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 fiery_soul_attack_speed_bonus; // offset 0x1A58, size 0x4, align 4
    int32 fiery_soul_magic_resist; // offset 0x1A5C, size 0x4, align 4
    float32 fiery_soul_move_speed_bonus; // offset 0x1A60, size 0x4, align 4
    int32 fiery_soul_max_stacks; // offset 0x1A64, size 0x4, align 4
    float32 fiery_soul_stack_duration; // offset 0x1A68, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A6C, size 0x4, align 255
    GameTime_t m_flFierySoulDieTime; // offset 0x1A70, size 0x4, align 255
    char _pad_1A74[0x4]; // offset 0x1A74
};
