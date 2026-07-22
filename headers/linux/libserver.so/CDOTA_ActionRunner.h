#pragma once

class CDOTA_ActionRunner  // sizeof 0x18, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CModifierParams* m_pEventContext; // offset 0x8, size 0x8, align 8
    CDOTA_BaseNPC* m_pCaster; // offset 0x10, size 0x8, align 8
};
