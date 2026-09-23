#pragma once

class C_PhysMagnet : public CBaseAnimGraph /*0x0*/  // sizeof 0x1220, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    CUtlVector< int32 > m_aAttachedObjectsFromServer; // offset 0x11F0, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< C_BaseEntity > > m_aAttachedObjects; // offset 0x1208, size 0x18, align 8 | MNotSaved
};
