#pragma once

class CDOTA_Modifier_Viper_Nose_Dive : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 m_flPredictedTotalTime; // offset 0x1A78, size 0x4, align 4
    float32 m_flCurrentTimeVert; // offset 0x1A7C, size 0x4, align 4
    VectorWS m_vTargetPos; // offset 0x1A80, size 0xC, align 4
    VectorWS m_vStart; // offset 0x1A8C, size 0xC, align 4
    float32 m_flZDelta; // offset 0x1A98, size 0x4, align 4
    float32 radius; // offset 0x1A9C, size 0x4, align 4
    float32 corrosive_radius; // offset 0x1AA0, size 0x4, align 4
    float32 effect_duration; // offset 0x1AA4, size 0x4, align 4
    float32 dive_speed; // offset 0x1AA8, size 0x4, align 4
    float32 start_height; // offset 0x1AAC, size 0x4, align 4
};
