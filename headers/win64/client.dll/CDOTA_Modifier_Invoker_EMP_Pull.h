#pragma once

class CDOTA_Modifier_Invoker_EMP_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1A78, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 drag_speed; // offset 0x1A58, size 0x4, align 4
    float32 aura_origin_x; // offset 0x1A5C, size 0x4, align 4
    float32 aura_origin_y; // offset 0x1A60, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A64, size 0x4, align 255
    VectorWS m_vCenter; // offset 0x1A68, size 0xC, align 4
    GameTime_t m_flLastThinkTime; // offset 0x1A74, size 0x4, align 255
};
