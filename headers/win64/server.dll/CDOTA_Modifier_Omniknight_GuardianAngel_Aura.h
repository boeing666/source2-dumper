#pragma once

class CDOTA_Modifier_Omniknight_GuardianAngel_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    bool is_global; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
    int32 affects_buildings; // offset 0x1A80, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A84, size 0x4, align 255
};
