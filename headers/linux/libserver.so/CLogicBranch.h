#pragma once

class CLogicBranch : public CLogicalEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bInValue; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x7]; // offset 0x789
    CUtlVector< CHandle< CBaseEntity > > m_Listeners; // offset 0x790, size 0x18, align 8
    CEntityIOOutput m_OnTrue; // offset 0x7A8, size 0x18, align 255
    CEntityIOOutput m_OnFalse; // offset 0x7C0, size 0x18, align 255
};
