#pragma once

class CDOTA_Modifier_ChangeTreeModel_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hTree; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
    CUtlString m_strModel; // offset 0x1AB0, size 0x8, align 8
    int32 m_nModelChangeToken; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x4]; // offset 0x1ABC
};
