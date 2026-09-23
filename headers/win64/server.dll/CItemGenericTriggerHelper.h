#pragma once

class CItemGenericTriggerHelper : public CBaseModelEntity /*0x0*/  // sizeof 0x858, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CHandle< CItemGeneric > m_hParentItem; // offset 0x850, size 0x4, align 4 | MNotSaved
    char _pad_0854[0x4]; // offset 0x854
};
