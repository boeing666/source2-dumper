#pragma once

class CTriggerObscuredVolume : public CBaseTrigger /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CUtlSymbolLarge m_iszModifierName; // offset 0x8E0, size 0x8, align 8
    CUtlStringToken m_tModifier; // offset 0x8E8, size 0x4, align 4
    char _pad_08EC[0x4]; // offset 0x8EC
};
