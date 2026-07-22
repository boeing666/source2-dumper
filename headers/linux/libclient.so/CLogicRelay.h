#pragma once

class CLogicRelay : public CLogicalEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CEntityIOOutput m_OnSpawn; // offset 0x780, size 0x18, align 255
    CEntityIOOutput m_OnTrigger; // offset 0x798, size 0x18, align 255
    bool m_bDisabled; // offset 0x7B0, size 0x1, align 1
    bool m_bWaitForRefire; // offset 0x7B1, size 0x1, align 1
    bool m_bTriggerOnce; // offset 0x7B2, size 0x1, align 1
    bool m_bFastRetrigger; // offset 0x7B3, size 0x1, align 1
    bool m_bPassthoughCaller; // offset 0x7B4, size 0x1, align 1
    char _pad_07B5[0x3]; // offset 0x7B5
};
