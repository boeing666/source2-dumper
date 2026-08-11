#pragma once

class CDOTA_Modifier_ChangeTreeModel_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< CBaseEntity > m_hTree; // offset 0x1A78, size 0x4, align 4
    char _pad_1A7C[0x4]; // offset 0x1A7C
    CUtlString m_strModel; // offset 0x1A80, size 0x8, align 8
    int32 m_nModelChangeToken; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
