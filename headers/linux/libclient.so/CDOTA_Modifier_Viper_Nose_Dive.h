#pragma once

class CDOTA_Modifier_Viper_Nose_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1B30, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1AF8, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1AFC, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1B00, size 0xC, align 4
    VectorWS m_vStart; // offset 0x1B0C, size 0xC, align 4
    float32 m_flZDelta; // offset 0x1B18, size 0x4, align 4
    float32 radius; // offset 0x1B1C, size 0x4, align 4
    float32 corrosive_radius; // offset 0x1B20, size 0x4, align 4
    float32 effect_duration; // offset 0x1B24, size 0x4, align 4
    float32 dive_speed; // offset 0x1B28, size 0x4, align 4
    float32 start_height; // offset 0x1B2C, size 0x4, align 4
};
