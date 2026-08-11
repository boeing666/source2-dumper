#pragma once

class CCitadel_Modifier_Doorman_Hotel_Imposter : public CCitadelModifier /*0x0*/  // sizeof 0xE8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CHandle< CBaseAnimGraph > m_hRagdoll; // offset 0xD0, size 0x4, align 4
    VectorWS m_vImposterPos; // offset 0xD4, size 0xC, align 4
    bool m_bPlayEnd; // offset 0xE0, size 0x1, align 1
    char _pad_00E1[0x7]; // offset 0xE1
};
