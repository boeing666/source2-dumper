#pragma once

class CDOTA_Modifier_Lina_FierySoul : public CDOTA_Buff /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 fiery_soul_attack_speed_bonus; // offset 0x1A78, size 0x4, align 4
    int32 fiery_soul_magic_resist; // offset 0x1A7C, size 0x4, align 4
    float32 fiery_soul_move_speed_bonus; // offset 0x1A80, size 0x4, align 4
    int32 fiery_soul_max_stacks; // offset 0x1A84, size 0x4, align 4
    float32 fiery_soul_stack_duration; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
    GameTime_t m_flFierySoulDieTime; // offset 0x1A90, size 0x4, align 255
    GameTime_t m_flLastFierySoulFullStackTime; // offset 0x1A94, size 0x4, align 255
};
