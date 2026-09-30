#pragma once

class CCitadelTriggerSecureSouls : public CBaseTrigger /*0x0*/  // sizeof 0xA18, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x9F0, size 0x20, align 255
    CUtlStringToken m_tModifier; // offset 0xA10, size 0x4, align 4
    char _pad_0A14[0x4]; // offset 0xA14
};
