#pragma once

class CTonemapTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xA40, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CUtlSymbolLarge m_tonemapControllerName; // offset 0xA30, size 0x8, align 8
    CEntityHandle m_hTonemapController; // offset 0xA38, size 0x4, align 4
    char _pad_0A3C[0x4]; // offset 0xA3C
};
