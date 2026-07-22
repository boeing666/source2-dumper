#pragma once

struct ModifierScriptedEventHandler_t  // sizeof 0x20, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    EModifierScriptedEvent m_eEvent; // offset 0x8, size 0x4, align 4
    char _pad_000C[0x4]; // offset 0xC
    CEmbeddedSubclassGeneric< 2 > m_sModifierToAdd; // offset 0x10, size 0x10, align 8
};
