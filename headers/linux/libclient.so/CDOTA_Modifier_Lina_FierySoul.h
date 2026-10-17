#pragma once

class CDOTA_Modifier_Lina_FierySoul : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 fiery_soul_attack_speed_bonus; // offset 0x1AA8, size 0x4, align 4
    int32 fiery_soul_magic_resist; // offset 0x1AAC, size 0x4, align 4
    float32 fiery_soul_move_speed_bonus; // offset 0x1AB0, size 0x4, align 4
    int32 fiery_soul_max_stacks; // offset 0x1AB4, size 0x4, align 4
    float32 fiery_soul_stack_duration; // offset 0x1AB8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ABC, size 0x4, align 255
    GameTime_t m_flFierySoulDieTime; // offset 0x1AC0, size 0x4, align 255
    char _pad_1AC4[0x4]; // offset 0x1AC4
};
