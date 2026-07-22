#pragma once

class CTriggerRemoveModifier : public CBaseTrigger /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CUtlSymbolLarge m_strModifier; // offset 0x8E0, size 0x8, align 8
};
