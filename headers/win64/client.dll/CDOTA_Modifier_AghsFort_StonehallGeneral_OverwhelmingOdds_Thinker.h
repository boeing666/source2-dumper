#pragma once

class CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 radius; // offset 0x1A78, size 0x4, align 4
    int32 max_steps; // offset 0x1A7C, size 0x4, align 4
    float32 damage_interval; // offset 0x1A80, size 0x4, align 4
    int32 m_nNumSteps; // offset 0x1A84, size 0x4, align 4
    int32 m_nRadiusStep; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A8C, size 0x4, align 255
    Vector m_vDir; // offset 0x1A90, size 0xC, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
