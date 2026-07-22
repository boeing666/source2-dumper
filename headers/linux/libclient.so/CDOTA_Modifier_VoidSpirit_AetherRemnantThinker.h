#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 radius; // offset 0x1A58, size 0x4, align 4
    Vector m_vFacingDir; // offset 0x1A5C, size 0xC, align 4
    int32 pierces_creeps; // offset 0x1A68, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemnant; // offset 0x1A6C, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartnerRemnant; // offset 0x1A70, size 0x4, align 4
    bool m_bTriggered; // offset 0x1A74, size 0x1, align 1
    char _pad_1A75[0x3]; // offset 0x1A75
    float32 m_flCurThink; // offset 0x1A78, size 0x4, align 4
    bool bIsArtifice; // offset 0x1A7C, size 0x1, align 1
    char _pad_1A7D[0x3]; // offset 0x1A7D
};
