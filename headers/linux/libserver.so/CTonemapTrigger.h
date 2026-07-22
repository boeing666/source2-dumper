#pragma once

class CTonemapTrigger : public CBaseTrigger /*0x0*/  // sizeof 0xBD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    CUtlSymbolLarge m_tonemapControllerName; // offset 0xBC8, size 0x8, align 8
    CEntityHandle m_hTonemapController; // offset 0xBD0, size 0x4, align 4
    char _pad_0BD4[0x4]; // offset 0xBD4
};
