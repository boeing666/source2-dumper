#pragma once

class CDOTA_Modifier_Lycan_Shapeshift : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    int32 bonus_night_vision; // offset 0x1A58, size 0x4, align 4
    float32 kill_duration_extension; // offset 0x1A5C, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A60, size 0x4, align 255
    int32 m_iOriginalAttackCapability; // offset 0x1A64, size 0x4, align 4
};
