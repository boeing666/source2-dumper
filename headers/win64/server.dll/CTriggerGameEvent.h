#pragma once

class CTriggerGameEvent : public CBaseTrigger /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CUtlString m_strStartTouchEventName; // offset 0x8E0, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strEndTouchEventName; // offset 0x8E8, size 0x8, align 8 | MNetworkEnable
    CUtlString m_strTriggerID; // offset 0x8F0, size 0x8, align 8 | MNetworkEnable
};
