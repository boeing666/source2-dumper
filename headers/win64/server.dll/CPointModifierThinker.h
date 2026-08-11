#pragma once

class CPointModifierThinker : public CBaseEntity /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CModifierHandleTyped< CCitadelModifier > m_hModifier; // offset 0x4A0, size 0x18, align 8
    bool m_bSendToClients; // offset 0x4B8, size 0x1, align 1
    char _pad_04B9[0x7]; // offset 0x4B9
};
