#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnant_Pull : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    ParticleIndex_t m_nFXIndex; // offset 0x1AA8, size 0x4, align 255
    PlayerID_t m_nPlayerID; // offset 0x1AAC, size 0x4, align 255
    float32 m_fMovementSpeed; // offset 0x1AB0, size 0x4, align 4
    CHandle< CDOTA_BaseNPC > m_hPullTarget; // offset 0x1AB4, size 0x4, align 4
    float32 think_interval; // offset 0x1AB8, size 0x4, align 4
    float32 artifice_pct_effectiveness; // offset 0x1ABC, size 0x4, align 4
    bool bIsArtifice; // offset 0x1AC0, size 0x1, align 1
    char _pad_1AC1[0x7]; // offset 0x1AC1
};
