#pragma once

class CCitadel_Modifier_Burrow : public CCitadelModifier /*0x0*/  // sizeof 0x368, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CHandle< CTriggerBurrowUnderground > m_pUndergroundTrigger; // offset 0x150, size 0x4, align 4
    char _pad_0154[0x214]; // offset 0x154
};
