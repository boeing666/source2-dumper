#pragma once

class CDOTA_Modifier_Shredder_Reactive_Armor : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 stack_limit; // offset 0x1AF8, size 0x4, align 4
    float32 stack_duration; // offset 0x1AFC, size 0x4, align 4
    int32 stacks_per_hero_attack; // offset 0x1B00, size 0x4, align 4
    GameTime_t m_flStackDieTime; // offset 0x1B04, size 0x4, align 255
    ParticleIndex_t[4] m_pFXIndex; // offset 0x1B08, size 0x10, align 4
};
