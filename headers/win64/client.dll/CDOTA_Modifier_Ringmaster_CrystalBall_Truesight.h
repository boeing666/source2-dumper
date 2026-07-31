#pragma once

class CDOTA_Modifier_Ringmaster_CrystalBall_Truesight : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    float32 truesight_linger_duration; // offset 0x1A7C, size 0x4, align 4
    ParticleIndex_t m_nAllyFXIndex; // offset 0x1A80, size 0x4, align 255
    ParticleIndex_t m_nEnemyFXIndex; // offset 0x1A84, size 0x4, align 255
};
