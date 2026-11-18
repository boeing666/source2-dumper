#pragma once

class CItemGenericTriggerHelper : public CBaseModelEntity /*0x0*/  // sizeof 0x8C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CHandle< CItemGeneric > m_hParentItem; // offset 0x8B8, size 0x4, align 4 | MNotSaved
    char _pad_08BC[0x4]; // offset 0x8BC
};
