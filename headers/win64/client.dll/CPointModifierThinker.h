#pragma once

class CPointModifierThinker : public C_BaseEntity /*0x0*/  // sizeof 0x610, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hModifier; // offset 0x5F0, size 0x18, align 8
    bool m_bSendToClients; // offset 0x608, size 0x1, align 1
    char _pad_0609[0x7]; // offset 0x609
};
