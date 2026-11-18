#pragma once

class CTriggerGameEvent : public CBaseTrigger /*0x0*/  // sizeof 0xA48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CUtlString m_strStartTouchEventName; // offset 0xA30, size 0x8, align 8
    CUtlString m_strEndTouchEventName; // offset 0xA38, size 0x8, align 8
    CUtlString m_strTriggerID; // offset 0xA40, size 0x8, align 8
};
