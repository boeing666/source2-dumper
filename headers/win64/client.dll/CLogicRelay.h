#pragma once

class CLogicRelay : public CLogicalEntity /*0x0*/  // sizeof 0x628, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CEntityIOOutput m_OnSpawn; // offset 0x5F0, size 0x18, align 255
    CEntityIOOutput m_OnTrigger; // offset 0x608, size 0x18, align 255
    bool m_bDisabled; // offset 0x620, size 0x1, align 1
    bool m_bWaitForRefire; // offset 0x621, size 0x1, align 1
    bool m_bTriggerOnce; // offset 0x622, size 0x1, align 1
    bool m_bFastRetrigger; // offset 0x623, size 0x1, align 1
    bool m_bPassthoughCaller; // offset 0x624, size 0x1, align 1
    char _pad_0625[0x3]; // offset 0x625
};
