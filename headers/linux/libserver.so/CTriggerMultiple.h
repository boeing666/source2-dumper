#pragma once

class CTriggerMultiple : public CBaseTrigger /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CEntityIOOutput m_OnTrigger; // offset 0xBC0, size 0x18, align 255
};
