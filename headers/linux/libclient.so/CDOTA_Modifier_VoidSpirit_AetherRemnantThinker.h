#pragma once

class CDOTA_Modifier_VoidSpirit_AetherRemnantThinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 radius; // offset 0x1AA8, size 0x4, align 4
    Vector m_vFacingDir; // offset 0x1AAC, size 0xC, align 4
    int32 pierces_creeps; // offset 0x1AB8, size 0x4, align 4
    CHandle< C_BaseEntity > m_hRemnant; // offset 0x1ABC, size 0x4, align 4
    CHandle< C_BaseEntity > m_hPartnerRemnant; // offset 0x1AC0, size 0x4, align 4
    bool m_bTriggered; // offset 0x1AC4, size 0x1, align 1
    char _pad_1AC5[0x3]; // offset 0x1AC5
    float32 m_flCurThink; // offset 0x1AC8, size 0x4, align 4
    bool bIsArtifice; // offset 0x1ACC, size 0x1, align 1
    char _pad_1ACD[0x3]; // offset 0x1ACD
};
