#pragma once

class CDOTA_Modifier_Ringmaster_Spotlight_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    bool self_spotlight; // offset 0x1A58, size 0x1, align 1
    char _pad_1A59[0x3]; // offset 0x1A59
    float32 radius; // offset 0x1A5C, size 0x4, align 4
    float32 initial_speed; // offset 0x1A60, size 0x4, align 4
    float32 sweep_speed; // offset 0x1A64, size 0x4, align 4
    float32 sweep_radius; // offset 0x1A68, size 0x4, align 4
    float32 linger_duration; // offset 0x1A6C, size 0x4, align 4
    int32 spotlight_index; // offset 0x1A70, size 0x4, align 4
    VectorWS m_vStartLocation; // offset 0x1A74, size 0xC, align 4
    VectorWS m_vTargetLocation; // offset 0x1A80, size 0xC, align 4
    float32 m_flTargetReachedTime; // offset 0x1A8C, size 0x4, align 4
};
