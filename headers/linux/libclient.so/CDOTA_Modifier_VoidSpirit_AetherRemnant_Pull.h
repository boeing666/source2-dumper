#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnant_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1A58, size 0x4, align 255
    PlayerID_t m_nPlayerID; // offset 0x1A5C, size 0x4, align 255
    float32 think_interval; // offset 0x1A60, size 0x4, align 4
    float32 artifice_pct_effectiveness; // offset 0x1A64, size 0x4, align 4
    bool bIsArtifice; // offset 0x1A68, size 0x1, align 1
    char _pad_1A69[0x7]; // offset 0x1A69
};
