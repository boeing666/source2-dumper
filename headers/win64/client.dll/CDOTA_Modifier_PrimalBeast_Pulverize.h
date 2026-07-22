#pragma once

class CDOTA_Modifier_PrimalBeast_Pulverize : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A58, size 0x4, align 255
    float32 m_flOffset; // offset 0x1A5C, size 0x4, align 4
    QAngle m_vStartAngles; // offset 0x1A60, size 0xC, align 4
    VectorWS m_vStartLocation; // offset 0x1A6C, size 0xC, align 4
    float32 animation_rate; // offset 0x1A78, size 0x4, align 4
    bool m_bInterrupted; // offset 0x1A7C, size 0x1, align 1
    bool m_bHasBeenDestroyed; // offset 0x1A7D, size 0x1, align 1
    char _pad_1A7E[0x2]; // offset 0x1A7E
};
