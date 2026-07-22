#pragma once

class CTriggerGameEvent : public CBaseTrigger /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CUtlString m_strStartTouchEventName; // offset 0xBC0, size 0x8, align 8
    CUtlString m_strEndTouchEventName; // offset 0xBC8, size 0x8, align 8
    CUtlString m_strTriggerID; // offset 0xBD0, size 0x8, align 8
};
