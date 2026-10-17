#pragma once

class CDOTA_Modifier_Visage_GravekeepersCloak_Stack : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    bool m_bIsRecovering; // offset 0x1AA8, size 0x1, align 1
    char _pad_1AA9[0x3]; // offset 0x1AA9
    int32[4] m_nFXIndex; // offset 0x1AAC, size 0x10, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
