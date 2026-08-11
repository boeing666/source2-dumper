#pragma once

class CLogicRelay : public CLogicalEntity /*0x0*/  // sizeof 0x4D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CEntityIOOutput m_OnSpawn; // offset 0x498, size 0x18, align 255
    CEntityIOOutput m_OnTrigger; // offset 0x4B0, size 0x18, align 255
    bool m_bDisabled; // offset 0x4C8, size 0x1, align 1
    bool m_bWaitForRefire; // offset 0x4C9, size 0x1, align 1
    bool m_bTriggerOnce; // offset 0x4CA, size 0x1, align 1
    bool m_bFastRetrigger; // offset 0x4CB, size 0x1, align 1
    bool m_bPassthoughCaller; // offset 0x4CC, size 0x1, align 1
    char _pad_04CD[0x3]; // offset 0x4CD
};
