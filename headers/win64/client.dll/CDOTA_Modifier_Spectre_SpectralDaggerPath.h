#pragma once

class CDOTA_Modifier_Spectre_SpectralDaggerPath : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A70]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hUnitsInPath; // offset 0x1A70, size 0x18, align 8
    float32 path_radius; // offset 0x1A88, size 0x4, align 4
    float32 vision_radius; // offset 0x1A8C, size 0x4, align 4
    float32 dagger_radius; // offset 0x1A90, size 0x4, align 4
    float32 buff_persistence; // offset 0x1A94, size 0x4, align 4
    float32 dagger_grace_period; // offset 0x1A98, size 0x4, align 4
    float32 dagger_path_duration; // offset 0x1A9C, size 0x4, align 4
};
