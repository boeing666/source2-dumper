#pragma once

class CTriggerGameEvent : public CBaseTrigger /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9C8]; // offset 0x0
    CUtlString m_strStartTouchEventName; // offset 0x9C8, size 0x8, align 8
    CUtlString m_strEndTouchEventName; // offset 0x9D0, size 0x8, align 8
    CUtlString m_strTriggerID; // offset 0x9D8, size 0x8, align 8
};
