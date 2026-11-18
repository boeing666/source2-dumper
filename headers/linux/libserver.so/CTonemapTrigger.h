#pragma once

class CTonemapTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xD20, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xD10]; // offset 0x0
    CUtlSymbolLarge m_tonemapControllerName; // offset 0xD10, size 0x8, align 8
    CEntityHandle m_hTonemapController; // offset 0xD18, size 0x4, align 4
    char _pad_0D1C[0x4]; // offset 0xD1C
};
