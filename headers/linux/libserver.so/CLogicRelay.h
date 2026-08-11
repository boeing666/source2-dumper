#pragma once

class CLogicRelay : public CLogicalEntity /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEntityIOOutput m_OnSpawn; // offset 0x778, size 0x18, align 255
    CEntityIOOutput m_OnTrigger; // offset 0x790, size 0x18, align 255
    bool m_bDisabled; // offset 0x7A8, size 0x1, align 1
    bool m_bWaitForRefire; // offset 0x7A9, size 0x1, align 1
    bool m_bTriggerOnce; // offset 0x7AA, size 0x1, align 1
    bool m_bFastRetrigger; // offset 0x7AB, size 0x1, align 1
    bool m_bPassthoughCaller; // offset 0x7AC, size 0x1, align 1
    char _pad_07AD[0x3]; // offset 0x7AD
};
