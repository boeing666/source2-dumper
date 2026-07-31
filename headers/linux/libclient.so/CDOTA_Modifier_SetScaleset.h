#pragma once

class CDOTA_Modifier_SetScaleset : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlString m_Scaleset; // offset 0x1A78, size 0x8, align 8
    bool m_bActive; // offset 0x1A80, size 0x1, align 1
    char _pad_1A81[0x7]; // offset 0x1A81
};
