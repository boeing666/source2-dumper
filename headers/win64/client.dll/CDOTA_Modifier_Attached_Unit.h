#pragma once

class CDOTA_Modifier_Attached_Unit : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< C_BaseEntity > m_hAttachTarget; // offset 0x1AA8, size 0x4, align 4
    bool m_bPhysicalImmune; // offset 0x1AAC, size 0x1, align 1
    bool m_bMagicImmune; // offset 0x1AAD, size 0x1, align 1
    char _pad_1AAE[0x2]; // offset 0x1AAE
};
