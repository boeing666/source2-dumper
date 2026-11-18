#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 radius; // offset 0x1AF8, size 0x4, align 4
    Vector m_vFacingDir; // offset 0x1AFC, size 0xC, align 4
    int32 pierces_creeps; // offset 0x1B08, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemnant; // offset 0x1B0C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartnerRemnant; // offset 0x1B10, size 0x4, align 4
    bool m_bTriggered; // offset 0x1B14, size 0x1, align 1
    char _pad_1B15[0x3]; // offset 0x1B15
    float32 m_flCurThink; // offset 0x1B18, size 0x4, align 4
    bool bIsArtifice; // offset 0x1B1C, size 0x1, align 1
    char _pad_1B1D[0x3]; // offset 0x1B1D
};
