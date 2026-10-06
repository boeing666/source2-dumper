#pragma once

class CCitadel_Modifier_Doorman_Hotel_Imposter : public CCitadelModifier /*0x0*/  // sizeof 0x150, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    CHandle< CBaseAnimGraph > m_hRagdoll; // offset 0x138, size 0x4, align 4
    VectorWS m_vImposterPos; // offset 0x13C, size 0xC, align 4
    bool m_bPlayEnd; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x7]; // offset 0x149
};
