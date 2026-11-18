#pragma once

class CItemGenericTriggerHelper : public CBaseModelEntity /*0x0*/  // sizeof 0xBA0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB9C]; // offset 0x0
    CHandle< CItemGeneric > m_hParentItem; // offset 0xB9C, size 0x4, align 4 | MNotSaved
};
