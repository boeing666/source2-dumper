#pragma once

class CDOTA_Modifier_Omniknight_GuardianAngel_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    bool is_global; // offset 0x1AAC, size 0x1, align 1
    char _pad_1AAD[0x3]; // offset 0x1AAD
    int32 affects_buildings; // offset 0x1AB0, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB4, size 0x4, align 255
};
