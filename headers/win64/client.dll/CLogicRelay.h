#pragma once

class CLogicRelay : public CLogicalEntity /*0x0*/  // sizeof 0x638, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CEntityIOOutput m_OnSpawn; // offset 0x600, size 0x18, align 255
    CEntityIOOutput m_OnTrigger; // offset 0x618, size 0x18, align 255
    bool m_bDisabled; // offset 0x630, size 0x1, align 1
    bool m_bWaitForRefire; // offset 0x631, size 0x1, align 1
    bool m_bTriggerOnce; // offset 0x632, size 0x1, align 1
    bool m_bFastRetrigger; // offset 0x633, size 0x1, align 1
    bool m_bPassthoughCaller; // offset 0x634, size 0x1, align 1
    char _pad_0635[0x3]; // offset 0x635
};
