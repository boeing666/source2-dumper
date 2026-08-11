#pragma once

class CLogicRelay : public CLogicalEntity /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    CEntityIOOutput m_OnSpawn; // offset 0x788, size 0x18, align 255
    CEntityIOOutput m_OnTrigger; // offset 0x7A0, size 0x18, align 255
    bool m_bDisabled; // offset 0x7B8, size 0x1, align 1
    bool m_bWaitForRefire; // offset 0x7B9, size 0x1, align 1
    bool m_bTriggerOnce; // offset 0x7BA, size 0x1, align 1
    bool m_bFastRetrigger; // offset 0x7BB, size 0x1, align 1
    bool m_bPassthoughCaller; // offset 0x7BC, size 0x1, align 1
    char _pad_07BD[0x3]; // offset 0x7BD
};
