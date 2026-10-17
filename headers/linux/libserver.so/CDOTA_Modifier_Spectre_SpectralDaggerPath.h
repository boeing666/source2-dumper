#pragma once

class CDOTA_Modifier_Spectre_SpectralDaggerPath : public CDOTA_Buff /*0x0*/  // sizeof 0x1AF0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AC0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hUnitsInPath; // offset 0x1AC0, size 0x18, align 8
    float32 path_radius; // offset 0x1AD8, size 0x4, align 4
    float32 vision_radius; // offset 0x1ADC, size 0x4, align 4
    float32 dagger_radius; // offset 0x1AE0, size 0x4, align 4
    float32 buff_persistence; // offset 0x1AE4, size 0x4, align 4
    float32 dagger_grace_period; // offset 0x1AE8, size 0x4, align 4
    float32 dagger_path_duration; // offset 0x1AEC, size 0x4, align 4
};
