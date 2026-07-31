#pragma once

class CDOTA_Modifier_Spectre_SpectralDaggerPath : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A90]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hUnitsInPath; // offset 0x1A90, size 0x18, align 8
    float32 path_radius; // offset 0x1AA8, size 0x4, align 4
    float32 vision_radius; // offset 0x1AAC, size 0x4, align 4
    float32 dagger_radius; // offset 0x1AB0, size 0x4, align 4
    float32 buff_persistence; // offset 0x1AB4, size 0x4, align 4
    float32 dagger_grace_period; // offset 0x1AB8, size 0x4, align 4
    float32 dagger_path_duration; // offset 0x1ABC, size 0x4, align 4
};
