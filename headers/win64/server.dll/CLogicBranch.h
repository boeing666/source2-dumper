#pragma once

class CLogicBranch : public CLogicalEntity /*0x0*/  // sizeof 0x500, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bInValue; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x7]; // offset 0x4B1
    CUtlVector< CHandle< CBaseEntity > > m_Listeners; // offset 0x4B8, size 0x18, align 8
    CEntityIOOutput m_OnTrue; // offset 0x4D0, size 0x18, align 255
    CEntityIOOutput m_OnFalse; // offset 0x4E8, size 0x18, align 255
};
