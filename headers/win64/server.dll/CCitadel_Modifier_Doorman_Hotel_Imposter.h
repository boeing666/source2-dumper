#pragma once

class CCitadel_Modifier_Doorman_Hotel_Imposter : public CCitadelModifier /*0x0*/  // sizeof 0x160, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CHandle< CBaseAnimGraph > m_hRagdoll; // offset 0x148, size 0x4, align 4
    VectorWS m_vImposterPos; // offset 0x14C, size 0xC, align 4
    bool m_bPlayEnd; // offset 0x158, size 0x1, align 1
    char _pad_0159[0x7]; // offset 0x159
};
