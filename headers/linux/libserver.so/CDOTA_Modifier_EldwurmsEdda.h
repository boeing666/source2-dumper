#pragma once

class CDOTA_Modifier_EldwurmsEdda : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CDOTA_Item > m_hSourceItem; // offset 0x1A78, size 0x4, align 4
    float32 int_charges; // offset 0x1A7C, size 0x4, align 4
};
