#pragma once

class CTriggerMultiple : public CBaseTrigger /*0x0*/  // sizeof 0x900, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E8]; // offset 0x0
    CEntityIOOutput m_OnTrigger; // offset 0x8E8, size 0x18, align 255
};
