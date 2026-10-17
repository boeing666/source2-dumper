#pragma once

class CDOTA_Modifier_AghsFort_StonehallGeneral_OverwhelmingOdds_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 radius; // offset 0x1AA8, size 0x4, align 4
    int32 max_steps; // offset 0x1AAC, size 0x4, align 4
    float32 damage_interval; // offset 0x1AB0, size 0x4, align 4
    int32 m_nNumSteps; // offset 0x1AB4, size 0x4, align 4
    int32 m_nRadiusStep; // offset 0x1AB8, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1ABC, size 0x4, align 255
    Vector m_vDir; // offset 0x1AC0, size 0xC, align 4
    char _pad_1ACC[0x4]; // offset 0x1ACC
};
