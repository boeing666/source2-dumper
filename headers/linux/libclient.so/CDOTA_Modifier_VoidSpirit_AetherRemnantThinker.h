#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 radius; // offset 0x1A78, size 0x4, align 4
    Vector m_vFacingDir; // offset 0x1A7C, size 0xC, align 4
    int32 pierces_creeps; // offset 0x1A88, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemnant; // offset 0x1A8C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartnerRemnant; // offset 0x1A90, size 0x4, align 4
    bool m_bTriggered; // offset 0x1A94, size 0x1, align 1
    char _pad_1A95[0x3]; // offset 0x1A95
    float32 m_flCurThink; // offset 0x1A98, size 0x4, align 4
    bool bIsArtifice; // offset 0x1A9C, size 0x1, align 1
    char _pad_1A9D[0x3]; // offset 0x1A9D
};
