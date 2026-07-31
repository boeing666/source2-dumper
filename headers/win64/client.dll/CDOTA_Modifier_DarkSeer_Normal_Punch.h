#pragma once

class CDOTA_Modifier_DarkSeer_Normal_Punch : public CDOTA_Buff /*0x0*/  // sizeof 0x1BF0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS[30] m_PositionIndex; // offset 0x1A78, size 0x168, align 4
    ParticleIndex_t m_nNormalPunchBuffIndex; // offset 0x1BE0, size 0x4, align 255
    float32 m_flDistanceTraveled; // offset 0x1BE4, size 0x4, align 4
    bool m_bIsValidTarget; // offset 0x1BE8, size 0x1, align 1
    char _pad_1BE9[0x7]; // offset 0x1BE9
};
