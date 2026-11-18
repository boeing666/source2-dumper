#pragma once

class CTriggerGameEvent : public CBaseTrigger /*0x0*/  // sizeof 0xD28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CUtlString m_strStartTouchEventName; // offset 0xD10, size 0x8, align 8
    CUtlString m_strEndTouchEventName; // offset 0xD18, size 0x8, align 8
    CUtlString m_strTriggerID; // offset 0xD20, size 0x8, align 8
};
