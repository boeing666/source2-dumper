#pragma once

class CDOTA_Modifier_DarkSeer_Normal_Punch : public CDOTA_Buff /*0x0*/  // sizeof 0x1C70, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    VectorWS[30] m_PositionIndex; // offset 0x1AF8, size 0x168, align 4
    ParticleIndex_t m_nNormalPunchBuffIndex; // offset 0x1C60, size 0x4, align 255
    float32 m_flDistanceTraveled; // offset 0x1C64, size 0x4, align 4
    bool m_bIsValidTarget; // offset 0x1C68, size 0x1, align 1
    char _pad_1C69[0x7]; // offset 0x1C69
};
