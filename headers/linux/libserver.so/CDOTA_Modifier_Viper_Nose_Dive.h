#pragma once

class CDOTA_Modifier_Viper_Nose_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1AA8, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1AAC, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1AB0, size 0xC, align 4
    VectorWS m_vStart; // offset 0x1ABC, size 0xC, align 4
    float32 m_flZDelta; // offset 0x1AC8, size 0x4, align 4
    float32 radius; // offset 0x1ACC, size 0x4, align 4
    float32 corrosive_radius; // offset 0x1AD0, size 0x4, align 4
    float32 effect_duration; // offset 0x1AD4, size 0x4, align 4
    float32 dive_speed; // offset 0x1AD8, size 0x4, align 4
    float32 start_height; // offset 0x1ADC, size 0x4, align 4
};
