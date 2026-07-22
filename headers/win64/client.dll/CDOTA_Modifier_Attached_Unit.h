#pragma once

class CDOTA_Modifier_Attached_Unit : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hAttachTarget; // offset 0x1A58, size 0x4, align 4
    bool m_bPhysicalImmune; // offset 0x1A5C, size 0x1, align 1
    bool m_bMagicImmune; // offset 0x1A5D, size 0x1, align 1
    char _pad_1A5E[0x2]; // offset 0x1A5E
};
