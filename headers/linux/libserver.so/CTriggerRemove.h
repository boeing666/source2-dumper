#pragma once

class CTriggerRemove : public CBaseTrigger /*0x0*/  // sizeof 0xD28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CEntityIOOutput m_OnRemove; // offset 0xD10, size 0x18, align 255
};
