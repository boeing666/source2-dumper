#pragma once

class CCitadel_Modifier_Doorman_Hotel_Imposter : public CCitadelModifier /*0x0*/  // sizeof 0x168, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CHandle< CBaseAnimGraph > m_hRagdoll; // offset 0x150, size 0x4, align 4
    VectorWS m_vImposterPos; // offset 0x154, size 0xC, align 4
    bool m_bPlayEnd; // offset 0x160, size 0x1, align 1
    char _pad_0161[0x7]; // offset 0x161
};
